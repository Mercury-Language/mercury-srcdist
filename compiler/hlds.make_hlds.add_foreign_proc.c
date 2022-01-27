/*
** Automatically generated from `add_foreign_proc.m'
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


/* :- module hlds.make_hlds.add_foreign_proc. */
/* :- implementation. */

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
#include "enum.mih"
#include "getopt_io.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.foreign.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_data.mih"
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
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_ctgc.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
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




#line 157 "hlds.make_hlds.add_foreign_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

#line 160 "hlds.make_hlds.add_foreign_proc.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 163 "hlds.make_hlds.add_foreign_proc.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_foreign_proc__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0;

#line 166 "hlds.make_hlds.add_foreign_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 169 "hlds.make_hlds.add_foreign_proc.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_0;

#line 172 "hlds.make_hlds.add_foreign_proc.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_1;

#line 175 "hlds.make_hlds.add_foreign_proc.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_value_ordered_overridden_by_old_foreign_proc_0[2];

#line 178 "hlds.make_hlds.add_foreign_proc.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_name_ordered_overridden_by_old_foreign_proc_0[2];

#line 181 "hlds.make_hlds.add_foreign_proc.c"
static const MR_Integer hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__functor_number_map_overridden_by_old_foreign_proc_0[2];

#line 184 "hlds.make_hlds.add_foreign_proc.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0_10001(
#line 187 "hlds.make_hlds.add_foreign_proc.c"
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_1,
#line 189 "hlds.make_hlds.add_foreign_proc.c"
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_2);

#line 192 "hlds.make_hlds.add_foreign_proc.c"
static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0_10001(
#line 195 "hlds.make_hlds.add_foreign_proc.c"
  MR_Box * hlds__make_hlds__add_foreign_proc__wrapper_arg_1,
#line 197 "hlds.make_hlds.add_foreign_proc.c"
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_2,
#line 199 "hlds.make_hlds.add_foreign_proc.c"
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_3);

#line 711 "add_foreign_proc.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__711__1_2_p_0(
#line 711 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__LaterOverridden_31,
#line 711 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__2_235);

#line 495 "add_foreign_proc.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__clauses_info_do_add_pragma_foreign_proc__495__1_2_p_0(
#line 495 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__1_111,
#line 495 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__HeadVar__2_112);

#line 620 "add_foreign_proc.m"
static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0(
#line 620 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__HeadVar__1_1,
#line 620 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__2_2,
#line 620 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__3_3);

#line 620 "add_foreign_proc.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0(
#line 620 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__2_1,
#line 620 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__2_2);

#line 711 "add_foreign_proc.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_14_p_0_1(
#line 711 "add_foreign_proc.m"
  MR_Box hlds__make_hlds__add_foreign_proc__closure_arg);

#line 624 "add_foreign_proc.m"
static void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_14_p_0(
#line 624 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PredName_15,
#line 624 "add_foreign_proc.m"
  MR_Integer hlds__make_hlds__add_foreign_proc__Arity_16,
#line 624 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PredOrFunc_17,
#line 624 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__NewContext_18,
#line 624 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Globals_19,
#line 624 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Target_20,
#line 624 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__NewLang_21,
#line 624 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__AllProcIds_22,
#line 624 "add_foreign_proc.m"
  MR_Integer hlds__make_hlds__add_foreign_proc__NewClauseProcId_23,
#line 624 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Clauses0_24,
#line 624 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__Clauses_25,
#line 624 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__Overridden_26,
#line 624 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_51,
#line 624 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_52);

#line 601 "add_foreign_proc.m"
static void MR_CALL 
hlds__make_hlds__add_foreign_proc__maybe_rename_user_annotated_sharing_information_6_p_0(
#line 601 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Globals_7,
#line 601 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__ActualHeadVars_8,
#line 601 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__FormalHeadVars_9,
#line 601 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__FormalTypes_10,
#line 601 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Attributes_0_14,
#line 601 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Attributes_15);

#line 495 "add_foreign_proc.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_pragma_foreign_proc_20_p_0_1(
#line 495 "add_foreign_proc.m"
  MR_Box hlds__make_hlds__add_foreign_proc__closure_arg,
#line 495 "add_foreign_proc.m"
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_1,
#line 495 "add_foreign_proc.m"
  MR_Box * hlds__make_hlds__add_foreign_proc__wrapper_arg_2);

#line 448 "add_foreign_proc.m"
static void MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_pragma_foreign_proc_20_p_0(
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Purity_21,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Attributes0_22,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PredId_23,
#line 448 "add_foreign_proc.m"
  MR_Integer hlds__make_hlds__add_foreign_proc__ProcId_24,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__AllProcIds_25,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PVarSet_26,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PVars_27,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__OrigArgTypes_28,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PragmaImpl0_29,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Context_30,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PredOrFunc_31,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PredName_32,
#line 448 "add_foreign_proc.m"
  MR_Integer hlds__make_hlds__add_foreign_proc__Arity_33,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Markers_34,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_102,
#line 448 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_103,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_104,
#line 448 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_105,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_106,
#line 448 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_107);

#line 411 "add_foreign_proc.m"
static void MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_add_pragma_foreign_proc_19_p_0(
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Purity_20,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Attributes0_21,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PredId_22,
#line 411 "add_foreign_proc.m"
  MR_Integer hlds__make_hlds__add_foreign_proc__ProcId_23,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PVarSet_24,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PVars_25,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__OrigArgTypes_26,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PragmaImpl0_27,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Context_28,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PredOrFunc_29,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PredName_30,
#line 411 "add_foreign_proc.m"
  MR_Integer hlds__make_hlds__add_foreign_proc__Arity_31,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Markers_32,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_42,
#line 411 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_43,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_44,
#line 411 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_45,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_46,
#line 411 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_47);

#line 386 "add_foreign_proc.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_foreign_proc__is_applicable_for_current_backend_2_f_0(
#line 386 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__1_1,
#line 386 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__2_2);

#line 121 "add_foreign_proc.m"
static void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_2_13_p_0(
#line 121 "add_foreign_proc.m"
  MR_Integer hlds__make_hlds__add_foreign_proc__Arity_14,
#line 121 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PredTable_15,
#line 121 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__MaybeAttrs_16,
#line 121 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Lang_17,
#line 121 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Name_18,
#line 121 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PredId_19,
#line 121 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Modes_20,
#line 121 "add_foreign_proc.m"
  MR_String hlds__make_hlds__add_foreign_proc__ExportedName_21,
#line 121 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Context_22,
#line 121 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_45,
#line 121 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_46,
#line 121 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_47,
#line 121 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_48);

#line 108 "add_foreign_proc.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0_1(
#line 108 "add_foreign_proc.m"
  MR_Box hlds__make_hlds__add_foreign_proc__closure_arg,
#line 108 "add_foreign_proc.m"
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_1);


static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_1[66][2];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_2[3][3];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_3[2][1];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_4[1][7];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_5[2][5];




static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_1[66][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_2[0]))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "foreign_export"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
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
    ((MR_Box) ((MR_String) "Error: ambiguous"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[20])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_foreign_proc_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: ambiguous predicate name"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "foreign_proc"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for imported"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for undeclared mode of"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "foreign_export"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for a procedure that has"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a declared determinism of"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: foreign clause for"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has purity"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but that"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has been declared"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
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
    ((MR_Box) ((MR_String) "Error: multiple clauses for"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in language"))
  },
  /* row 65 */
  {
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[2])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__add_foreign_proc__clauses_info_do_add_pragma_foreign_proc_20_p_0_1)),
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

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_5[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_overridden_by_old_foreign_proc_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_overridden_by_old_foreign_proc_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 852 "hlds.make_hlds.add_foreign_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 860 "hlds.make_hlds.add_foreign_proc.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 868 "hlds.make_hlds.add_foreign_proc.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_foreign_proc__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_foreign_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 877 "hlds.make_hlds.add_foreign_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 885 "hlds.make_hlds.add_foreign_proc.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_0 = {
  (MR_String) "overridden_by_old_foreign_proc",
  (MR_Integer) 0
};

#line 891 "hlds.make_hlds.add_foreign_proc.c"
static const MR_EnumFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_1 = {
  (MR_String) "not_overridden_by_old_foreign_proc",
  (MR_Integer) 1
};

#line 897 "hlds.make_hlds.add_foreign_proc.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_value_ordered_overridden_by_old_foreign_proc_0[2] = {
  &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_0,
  &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_1
};

#line 903 "hlds.make_hlds.add_foreign_proc.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_name_ordered_overridden_by_old_foreign_proc_0[2] = {
  &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_1,
  &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_0
};

#line 909 "hlds.make_hlds.add_foreign_proc.c"
static const MR_Integer hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__functor_number_map_overridden_by_old_foreign_proc_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 915 "hlds.make_hlds.add_foreign_proc.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_overridden_by_old_foreign_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

#line 932 "hlds.make_hlds.add_foreign_proc.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0_10001(
#line 935 "hlds.make_hlds.add_foreign_proc.c"
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_1,
#line 937 "hlds.make_hlds.add_foreign_proc.c"
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_2)
#line 939 "hlds.make_hlds.add_foreign_proc.c"
{
#line 941 "hlds.make_hlds.add_foreign_proc.c"
  {
#line 943 "hlds.make_hlds.add_foreign_proc.c"
    MR_bool hlds__make_hlds__add_foreign_proc__succeeded;

#line 946 "hlds.make_hlds.add_foreign_proc.c"
    {
#line 948 "hlds.make_hlds.add_foreign_proc.c"
      hlds__make_hlds__add_foreign_proc__succeeded = hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0(((MR_Word) hlds__make_hlds__add_foreign_proc__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_foreign_proc__wrapper_arg_2));
    }
#line 951 "hlds.make_hlds.add_foreign_proc.c"
    return hlds__make_hlds__add_foreign_proc__succeeded;
#line 953 "hlds.make_hlds.add_foreign_proc.c"
  }
#line 955 "hlds.make_hlds.add_foreign_proc.c"
}

#line 958 "hlds.make_hlds.add_foreign_proc.c"
static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0_10001(
#line 961 "hlds.make_hlds.add_foreign_proc.c"
  MR_Box * hlds__make_hlds__add_foreign_proc__wrapper_arg_1,
#line 963 "hlds.make_hlds.add_foreign_proc.c"
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_2,
#line 965 "hlds.make_hlds.add_foreign_proc.c"
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_3)
#line 967 "hlds.make_hlds.add_foreign_proc.c"
{
#line 969 "hlds.make_hlds.add_foreign_proc.c"
  {
#line 971 "hlds.make_hlds.add_foreign_proc.c"
    MR_Word hlds__make_hlds__add_foreign_proc__conv0_HeadVar__1_1;

#line 974 "hlds.make_hlds.add_foreign_proc.c"
    {
#line 976 "hlds.make_hlds.add_foreign_proc.c"
      hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0(&hlds__make_hlds__add_foreign_proc__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_foreign_proc__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_foreign_proc__wrapper_arg_3));
    }
#line 979 "hlds.make_hlds.add_foreign_proc.c"
    *hlds__make_hlds__add_foreign_proc__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_foreign_proc__conv0_HeadVar__1_1));
#line 981 "hlds.make_hlds.add_foreign_proc.c"
  }
#line 983 "hlds.make_hlds.add_foreign_proc.c"
}

#line 711 "add_foreign_proc.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__711__1_2_p_0(
#line 711 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__LaterOverridden_31,
#line 711 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__2_235)
#line 711 "add_foreign_proc.m"
{
#line 711 "add_foreign_proc.m"
  {
#line 711 "add_foreign_proc.m"
    MR_bool hlds__make_hlds__add_foreign_proc__succeeded = (hlds__make_hlds__add_foreign_proc__LaterOverridden_31 == hlds__make_hlds__add_foreign_proc__HeadVar__2_235);

#line 711 "add_foreign_proc.m"
    return hlds__make_hlds__add_foreign_proc__succeeded;
#line 711 "add_foreign_proc.m"
  }
#line 711 "add_foreign_proc.m"
}

#line 495 "add_foreign_proc.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__clauses_info_do_add_pragma_foreign_proc__495__1_2_p_0(
#line 495 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__1_111,
#line 495 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__HeadVar__2_112)
#line 495 "add_foreign_proc.m"
{
#line 495 "add_foreign_proc.m"
  {
#line 495 "add_foreign_proc.m"
    MR_bool hlds__make_hlds__add_foreign_proc__succeeded;
#line 495 "add_foreign_proc.m"
    MR_Integer hlds__make_hlds__add_foreign_proc__Occurrences_63;

#line 497 "add_foreign_proc.m"
    *hlds__make_hlds__add_foreign_proc__HeadVar__2_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__HeadVar__1_111, (MR_Integer) 0)));
#line 497 "add_foreign_proc.m"
    hlds__make_hlds__add_foreign_proc__Occurrences_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__HeadVar__1_111, (MR_Integer) 1)));
#line 498 "add_foreign_proc.m"
    hlds__make_hlds__add_foreign_proc__succeeded = (hlds__make_hlds__add_foreign_proc__Occurrences_63 > (MR_Integer) 1);
#line 495 "add_foreign_proc.m"
    return hlds__make_hlds__add_foreign_proc__succeeded;
#line 495 "add_foreign_proc.m"
  }
#line 495 "add_foreign_proc.m"
}

#line 620 "add_foreign_proc.m"
static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0(
#line 620 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__HeadVar__1_1,
#line 620 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__2_2,
#line 620 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__3_3)
#line 620 "add_foreign_proc.m"
{
#line 620 "add_foreign_proc.m"
  {
#line 620 "add_foreign_proc.m"
    MR_bool hlds__make_hlds__add_foreign_proc__succeeded;
#line 620 "add_foreign_proc.m"
    MR_Integer hlds__make_hlds__add_foreign_proc__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__add_foreign_proc__HeadVar__2_2;
#line 620 "add_foreign_proc.m"
    MR_Integer hlds__make_hlds__add_foreign_proc__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__add_foreign_proc__HeadVar__3_3;

#line 620 "add_foreign_proc.m"
    {
#line 620 "add_foreign_proc.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_foreign_proc__HeadVar__1_1, hlds__make_hlds__add_foreign_proc__Cast_HeadVar1_4, hlds__make_hlds__add_foreign_proc__Cast_HeadVar2_5);
#line 620 "add_foreign_proc.m"
      return;
    }
#line 620 "add_foreign_proc.m"
  }
#line 620 "add_foreign_proc.m"
}

#line 620 "add_foreign_proc.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0(
#line 620 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__2_1,
#line 620 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__2_2)
#line 620 "add_foreign_proc.m"
{
#line 1077 "hlds.make_hlds.add_foreign_proc.c"
  {
#line 1079 "hlds.make_hlds.add_foreign_proc.c"
    MR_bool hlds__make_hlds__add_foreign_proc__succeeded = (hlds__make_hlds__add_foreign_proc__HeadVar__2_1 == hlds__make_hlds__add_foreign_proc__HeadVar__2_2);

#line 1082 "hlds.make_hlds.add_foreign_proc.c"
    return hlds__make_hlds__add_foreign_proc__succeeded;
#line 1084 "hlds.make_hlds.add_foreign_proc.c"
  }
#line 620 "add_foreign_proc.m"
}

#line 711 "add_foreign_proc.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_14_p_0_1(
#line 711 "add_foreign_proc.m"
  MR_Box hlds__make_hlds__add_foreign_proc__closure_arg)
#line 711 "add_foreign_proc.m"
{
#line 711 "add_foreign_proc.m"
  {
#line 711 "add_foreign_proc.m"
    MR_bool hlds__make_hlds__add_foreign_proc__succeeded;
#line 711 "add_foreign_proc.m"
    MR_Box hlds__make_hlds__add_foreign_proc__closure = hlds__make_hlds__add_foreign_proc__closure_arg;

#line 711 "add_foreign_proc.m"
    {
#line 711 "add_foreign_proc.m"
      return hlds__make_hlds__add_foreign_proc__succeeded = hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__711__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__closure, (MR_Integer) 4))));
    }
#line 711 "add_foreign_proc.m"
    return hlds__make_hlds__add_foreign_proc__succeeded;
#line 711 "add_foreign_proc.m"
  }
#line 711 "add_foreign_proc.m"
}

#line 624 "add_foreign_proc.m"
static void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_14_p_0(
#line 624 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PredName_15,
#line 624 "add_foreign_proc.m"
  MR_Integer hlds__make_hlds__add_foreign_proc__Arity_16,
#line 624 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PredOrFunc_17,
#line 624 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__NewContext_18,
#line 624 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Globals_19,
#line 624 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Target_20,
#line 624 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__NewLang_21,
#line 624 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__AllProcIds_22,
#line 624 "add_foreign_proc.m"
  MR_Integer hlds__make_hlds__add_foreign_proc__NewClauseProcId_23,
#line 624 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Clauses0_24,
#line 624 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__Clauses_25,
#line 624 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__Overridden_26,
#line 624 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_51,
#line 624 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_52)
#line 624 "add_foreign_proc.m"
{
#line 635 "add_foreign_proc.m"
  {
#line 635 "add_foreign_proc.m"
    MR_bool hlds__make_hlds__add_foreign_proc__succeeded;

#line 635 "add_foreign_proc.m"
    if ((hlds__make_hlds__add_foreign_proc__Clauses0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 635 "add_foreign_proc.m"
      {
#line 636 "add_foreign_proc.m"
        *hlds__make_hlds__add_foreign_proc__Clauses_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 637 "add_foreign_proc.m"
        *hlds__make_hlds__add_foreign_proc__Overridden_26 = (MR_Integer) 1;
#line 635 "add_foreign_proc.m"
        *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_52 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_51;
#line 635 "add_foreign_proc.m"
      }
#line 635 "add_foreign_proc.m"
    else
#line 639 "add_foreign_proc.m"
      {
#line 639 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__FirstClause0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Clauses0_24, (MR_Integer) 0)));
#line 639 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__LaterClauses0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Clauses0_24, (MR_Integer) 1)));
#line 639 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__LaterClauses_30;
#line 639 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__LaterOverridden_31;
#line 639 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__ApplProcIds0_32;
#line 639 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__Body_33;
#line 639 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__ClauseLang_34;
#line 639 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__ClauseContext_35;
#line 639 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__StateVarWarnings_36;
#line 639 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_53_53;

#line 640 "add_foreign_proc.m"
        {
#line 640 "add_foreign_proc.m"
          hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_14_p_0(hlds__make_hlds__add_foreign_proc__PredName_15, hlds__make_hlds__add_foreign_proc__Arity_16, hlds__make_hlds__add_foreign_proc__PredOrFunc_17, hlds__make_hlds__add_foreign_proc__NewContext_18, hlds__make_hlds__add_foreign_proc__Globals_19, hlds__make_hlds__add_foreign_proc__Target_20, hlds__make_hlds__add_foreign_proc__NewLang_21, hlds__make_hlds__add_foreign_proc__AllProcIds_22, hlds__make_hlds__add_foreign_proc__NewClauseProcId_23, hlds__make_hlds__add_foreign_proc__LaterClauses0_29, &hlds__make_hlds__add_foreign_proc__LaterClauses_30, &hlds__make_hlds__add_foreign_proc__LaterOverridden_31, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_51, &hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_53_53);
        }
#line 643 "add_foreign_proc.m"
        hlds__make_hlds__add_foreign_proc__ApplProcIds0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause0_28, (MR_Integer) 0)));
#line 643 "add_foreign_proc.m"
        hlds__make_hlds__add_foreign_proc__Body_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause0_28, (MR_Integer) 1)));
#line 643 "add_foreign_proc.m"
        hlds__make_hlds__add_foreign_proc__ClauseLang_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause0_28, (MR_Integer) 2)));
#line 643 "add_foreign_proc.m"
        hlds__make_hlds__add_foreign_proc__ClauseContext_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause0_28, (MR_Integer) 3)));
#line 643 "add_foreign_proc.m"
        hlds__make_hlds__add_foreign_proc__StateVarWarnings_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause0_28, (MR_Integer) 4)));
#line 675 "add_foreign_proc.m"
        if ((hlds__make_hlds__add_foreign_proc__ApplProcIds0_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 675 "add_foreign_proc.m"
          if ((hlds__make_hlds__add_foreign_proc__ClauseLang_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 646 "add_foreign_proc.m"
            {
#line 668 "add_foreign_proc.m"
              MR_Word hlds__make_hlds__add_foreign_proc__ProcIds_38;

#line 653 "add_foreign_proc.m"
              {
#line 653 "add_foreign_proc.m"
                hlds__make_hlds__add_foreign_proc__succeeded = mercury__list__delete_first_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__make_hlds__add_foreign_proc__AllProcIds_22, ((MR_Box) (hlds__make_hlds__add_foreign_proc__NewClauseProcId_23)), &hlds__make_hlds__add_foreign_proc__ProcIds_38);
              }
#line 668 "add_foreign_proc.m"
              if (hlds__make_hlds__add_foreign_proc__succeeded)
#line 659 "add_foreign_proc.m"
                if ((hlds__make_hlds__add_foreign_proc__ProcIds_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 655 "add_foreign_proc.m"
                  *hlds__make_hlds__add_foreign_proc__Clauses_25 = hlds__make_hlds__add_foreign_proc__LaterClauses_30;
#line 659 "add_foreign_proc.m"
                else
#line 660 "add_foreign_proc.m"
                  {
#line 660 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__FirstClause_41;
#line 660 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__V_102_102;

#line 664 "add_foreign_proc.m"
                    {
#line 664 "add_foreign_proc.m"
                      hlds__make_hlds__add_foreign_proc__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 664 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_102_102, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ProcIds_38));
#line 664 "add_foreign_proc.m"
                    }
#line 664 "add_foreign_proc.m"
                    {
#line 664 "add_foreign_proc.m"
                      hlds__make_hlds__add_foreign_proc__FirstClause_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 664 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_41, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_102_102));
#line 664 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_41, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Body_33));
#line 664 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_41, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ClauseLang_34));
#line 664 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_41, 3) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ClauseContext_35));
#line 664 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_41, 4) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__StateVarWarnings_36));
#line 664 "add_foreign_proc.m"
                    }
#line 666 "add_foreign_proc.m"
                    {
#line 666 "add_foreign_proc.m"
                      MR_Word base;
#line 666 "add_foreign_proc.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "add_foreign_proc.m"
                      *hlds__make_hlds__add_foreign_proc__Clauses_25 = base;
#line 666 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__FirstClause_41));
#line 666 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__LaterClauses_30));
#line 666 "add_foreign_proc.m"
                    }
#line 660 "add_foreign_proc.m"
                  }
#line 668 "add_foreign_proc.m"
              else
#line 671 "add_foreign_proc.m"
                {
#line 671 "add_foreign_proc.m"
                  MR_Word base;
#line 671 "add_foreign_proc.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "add_foreign_proc.m"
                  *hlds__make_hlds__add_foreign_proc__Clauses_25 = base;
#line 671 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__FirstClause0_28));
#line 671 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__LaterClauses_30));
#line 671 "add_foreign_proc.m"
                }
#line 674 "add_foreign_proc.m"
              *hlds__make_hlds__add_foreign_proc__Overridden_26 = hlds__make_hlds__add_foreign_proc__LaterOverridden_31;
#line 646 "add_foreign_proc.m"
              *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_52 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_53_53;
#line 646 "add_foreign_proc.m"
            }
#line 675 "add_foreign_proc.m"
          else
#line 676 "add_foreign_proc.m"
            {
#line 679 "add_foreign_proc.m"
              {
#line 679 "add_foreign_proc.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_foreign_proc", (MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc_update_existing_clauses\'/14", (MR_String) "all_modes");
#line 679 "add_foreign_proc.m"
                return;
              }
#line 676 "add_foreign_proc.m"
            }
#line 675 "add_foreign_proc.m"
        else
#line 675 "add_foreign_proc.m"
          {
#line 675 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_498_498 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__ApplProcIds0_32, (MR_Integer) 0)));

#line 675 "add_foreign_proc.m"
            if ((hlds__make_hlds__add_foreign_proc__ClauseLang_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 646 "add_foreign_proc.m"
              {
#line 668 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__ProcIds_430;

#line 653 "add_foreign_proc.m"
                {
#line 653 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__succeeded = mercury__list__delete_first_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__make_hlds__add_foreign_proc__V_498_498, ((MR_Box) (hlds__make_hlds__add_foreign_proc__NewClauseProcId_23)), &hlds__make_hlds__add_foreign_proc__ProcIds_430);
                }
#line 668 "add_foreign_proc.m"
                if (hlds__make_hlds__add_foreign_proc__succeeded)
#line 659 "add_foreign_proc.m"
                  if ((hlds__make_hlds__add_foreign_proc__ProcIds_430 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 655 "add_foreign_proc.m"
                    *hlds__make_hlds__add_foreign_proc__Clauses_25 = hlds__make_hlds__add_foreign_proc__LaterClauses_30;
#line 659 "add_foreign_proc.m"
                  else
#line 660 "add_foreign_proc.m"
                    {
#line 660 "add_foreign_proc.m"
                      MR_Word hlds__make_hlds__add_foreign_proc__FirstClause_424;
#line 660 "add_foreign_proc.m"
                      MR_Word hlds__make_hlds__add_foreign_proc__V_425_425;

#line 664 "add_foreign_proc.m"
                      {
#line 664 "add_foreign_proc.m"
                        hlds__make_hlds__add_foreign_proc__V_425_425 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 664 "add_foreign_proc.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_425_425, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ProcIds_430));
#line 664 "add_foreign_proc.m"
                      }
#line 664 "add_foreign_proc.m"
                      {
#line 664 "add_foreign_proc.m"
                        hlds__make_hlds__add_foreign_proc__FirstClause_424 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 664 "add_foreign_proc.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_424, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_425_425));
#line 664 "add_foreign_proc.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_424, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Body_33));
#line 664 "add_foreign_proc.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_424, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ClauseLang_34));
#line 664 "add_foreign_proc.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_424, 3) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ClauseContext_35));
#line 664 "add_foreign_proc.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_424, 4) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__StateVarWarnings_36));
#line 664 "add_foreign_proc.m"
                      }
#line 666 "add_foreign_proc.m"
                      {
#line 666 "add_foreign_proc.m"
                        MR_Word base;
#line 666 "add_foreign_proc.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "add_foreign_proc.m"
                        *hlds__make_hlds__add_foreign_proc__Clauses_25 = base;
#line 666 "add_foreign_proc.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__FirstClause_424));
#line 666 "add_foreign_proc.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__LaterClauses_30));
#line 666 "add_foreign_proc.m"
                      }
#line 660 "add_foreign_proc.m"
                    }
#line 668 "add_foreign_proc.m"
                else
#line 671 "add_foreign_proc.m"
                  {
#line 671 "add_foreign_proc.m"
                    MR_Word base;
#line 671 "add_foreign_proc.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "add_foreign_proc.m"
                    *hlds__make_hlds__add_foreign_proc__Clauses_25 = base;
#line 671 "add_foreign_proc.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__FirstClause0_28));
#line 671 "add_foreign_proc.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__LaterClauses_30));
#line 671 "add_foreign_proc.m"
                  }
#line 674 "add_foreign_proc.m"
                *hlds__make_hlds__add_foreign_proc__Overridden_26 = hlds__make_hlds__add_foreign_proc__LaterOverridden_31;
#line 646 "add_foreign_proc.m"
                *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_52 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_53_53;
#line 646 "add_foreign_proc.m"
              }
#line 675 "add_foreign_proc.m"
            else
#line 676 "add_foreign_proc.m"
              {
#line 676 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__OldLang_371 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__ClauseLang_34, (MR_Integer) 0)));
#line 748 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__ProcIds_368;

#line 683 "add_foreign_proc.m"
                {
#line 683 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__succeeded = mercury__list__delete_first_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__make_hlds__add_foreign_proc__V_498_498, ((MR_Box) (hlds__make_hlds__add_foreign_proc__NewClauseProcId_23)), &hlds__make_hlds__add_foreign_proc__ProcIds_368);
                }
#line 748 "add_foreign_proc.m"
                if (hlds__make_hlds__add_foreign_proc__succeeded)
#line 685 "add_foreign_proc.m"
                  {
#line 685 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__PreferNewForeignLang_281;

#line 684 "add_foreign_proc.m"
                    {
#line 684 "add_foreign_proc.m"
                      hlds__make_hlds__add_foreign_proc__PreferNewForeignLang_281 = parse_tree__prog_foreign__prefer_foreign_language_4_f_0(hlds__make_hlds__add_foreign_proc__Globals_19, hlds__make_hlds__add_foreign_proc__Target_20, hlds__make_hlds__add_foreign_proc__OldLang_371, hlds__make_hlds__add_foreign_proc__NewLang_21);
                    }
#line 714 "add_foreign_proc.m"
#line 714 "add_foreign_proc.m"
                    switch (hlds__make_hlds__add_foreign_proc__PreferNewForeignLang_281) {
#line 714 "add_foreign_proc.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 714 "add_foreign_proc.m"
                      case (MR_Integer) 0:
#line 715 "add_foreign_proc.m"
                        {
#line 719 "add_foreign_proc.m"
                          {
#line 719 "add_foreign_proc.m"
                            MR_Word base;
#line 719 "add_foreign_proc.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "add_foreign_proc.m"
                            *hlds__make_hlds__add_foreign_proc__Clauses_25 = base;
#line 719 "add_foreign_proc.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__FirstClause0_28));
#line 719 "add_foreign_proc.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__LaterClauses_30));
#line 719 "add_foreign_proc.m"
                          }
#line 720 "add_foreign_proc.m"
                          *hlds__make_hlds__add_foreign_proc__Overridden_26 = (MR_Integer) 0;
#line 729 "add_foreign_proc.m"
                          hlds__make_hlds__add_foreign_proc__succeeded = (hlds__make_hlds__add_foreign_proc__OldLang_371 == hlds__make_hlds__add_foreign_proc__NewLang_21);
#line 744 "add_foreign_proc.m"
                          if (hlds__make_hlds__add_foreign_proc__succeeded)
#line 735 "add_foreign_proc.m"
                            {
#line 735 "add_foreign_proc.m"
                              MR_Word hlds__make_hlds__add_foreign_proc__PiecesA_117;
#line 735 "add_foreign_proc.m"
                              MR_Word hlds__make_hlds__add_foreign_proc__MsgA_119;
#line 735 "add_foreign_proc.m"
                              MR_Word hlds__make_hlds__add_foreign_proc__MsgB_120;
#line 735 "add_foreign_proc.m"
                              MR_Word hlds__make_hlds__add_foreign_proc__Spec_121;
#line 735 "add_foreign_proc.m"
                              MR_Word hlds__make_hlds__add_foreign_proc__V_124_124;
#line 735 "add_foreign_proc.m"
                              MR_Word hlds__make_hlds__add_foreign_proc__V_125_125;
#line 735 "add_foreign_proc.m"
                              MR_Word hlds__make_hlds__add_foreign_proc__V_126_126;
#line 735 "add_foreign_proc.m"
                              MR_Word hlds__make_hlds__add_foreign_proc__V_127_127;
#line 735 "add_foreign_proc.m"
                              MR_Word hlds__make_hlds__add_foreign_proc__V_128_128;
#line 735 "add_foreign_proc.m"
                              MR_Word hlds__make_hlds__add_foreign_proc__V_129_129;
#line 735 "add_foreign_proc.m"
                              MR_Word hlds__make_hlds__add_foreign_proc__V_132_132;
#line 735 "add_foreign_proc.m"
                              MR_Word hlds__make_hlds__add_foreign_proc__V_133_133;
#line 735 "add_foreign_proc.m"
                              MR_String hlds__make_hlds__add_foreign_proc__V_134_134;
#line 735 "add_foreign_proc.m"
                              MR_Word hlds__make_hlds__add_foreign_proc__V_136_136;
#line 735 "add_foreign_proc.m"
                              MR_Word hlds__make_hlds__add_foreign_proc__V_137_137;
#line 735 "add_foreign_proc.m"
                              MR_Word hlds__make_hlds__add_foreign_proc__V_139_139;
#line 735 "add_foreign_proc.m"
                              MR_Word hlds__make_hlds__add_foreign_proc__V_147_147;
#line 735 "add_foreign_proc.m"
                              MR_Word hlds__make_hlds__add_foreign_proc__V_148_148;

#line 731 "add_foreign_proc.m"
                              {
#line 731 "add_foreign_proc.m"
                                hlds__make_hlds__add_foreign_proc__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 731 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_125_125, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredOrFunc_17));
#line 731 "add_foreign_proc.m"
                              }
#line 732 "add_foreign_proc.m"
                              {
#line 732 "add_foreign_proc.m"
                                hlds__make_hlds__add_foreign_proc__V_128_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 732 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_128_128, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredName_15));
#line 732 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_128_128, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Arity_16));
#line 732 "add_foreign_proc.m"
                              }
#line 732 "add_foreign_proc.m"
                              {
#line 732 "add_foreign_proc.m"
                                hlds__make_hlds__add_foreign_proc__V_127_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_127_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 732 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_127_127, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_128_128));
#line 732 "add_foreign_proc.m"
                              }
#line 734 "add_foreign_proc.m"
                              {
#line 734 "add_foreign_proc.m"
                                hlds__make_hlds__add_foreign_proc__V_134_134 = libs__globals__foreign_language_string_1_f_0(hlds__make_hlds__add_foreign_proc__OldLang_371);
                              }
#line 734 "add_foreign_proc.m"
                              {
#line 734 "add_foreign_proc.m"
                                hlds__make_hlds__add_foreign_proc__V_133_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 734 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_133_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 734 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_133_133, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_134_134));
#line 734 "add_foreign_proc.m"
                              }
#line 734 "add_foreign_proc.m"
                              {
#line 734 "add_foreign_proc.m"
                                hlds__make_hlds__add_foreign_proc__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 734 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_132_132, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_133_133));
#line 734 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[25])));
#line 734 "add_foreign_proc.m"
                              }
#line 733 "add_foreign_proc.m"
                              {
#line 733 "add_foreign_proc.m"
                                hlds__make_hlds__add_foreign_proc__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_129_129, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[64])));
#line 733 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_129_129, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_132_132));
#line 733 "add_foreign_proc.m"
                              }
#line 732 "add_foreign_proc.m"
                              {
#line 732 "add_foreign_proc.m"
                                hlds__make_hlds__add_foreign_proc__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_127_127));
#line 732 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_126_126, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_129_129));
#line 732 "add_foreign_proc.m"
                              }
#line 731 "add_foreign_proc.m"
                              {
#line 731 "add_foreign_proc.m"
                                hlds__make_hlds__add_foreign_proc__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_124_124, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_125_125));
#line 731 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_124_124, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_126_126));
#line 731 "add_foreign_proc.m"
                              }
#line 730 "add_foreign_proc.m"
                              {
#line 730 "add_foreign_proc.m"
                                hlds__make_hlds__add_foreign_proc__PiecesA_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__PiecesA_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[63])));
#line 730 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__PiecesA_117, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_124_124));
#line 730 "add_foreign_proc.m"
                              }
#line 738 "add_foreign_proc.m"
                              {
#line 738 "add_foreign_proc.m"
                                hlds__make_hlds__add_foreign_proc__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 738 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_137_137, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PiecesA_117));
#line 738 "add_foreign_proc.m"
                              }
#line 738 "add_foreign_proc.m"
                              {
#line 738 "add_foreign_proc.m"
                                hlds__make_hlds__add_foreign_proc__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 738 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_136_136, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_137_137));
#line 738 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_136_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 738 "add_foreign_proc.m"
                              }
#line 738 "add_foreign_proc.m"
                              {
#line 738 "add_foreign_proc.m"
                                hlds__make_hlds__add_foreign_proc__MsgA_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 738 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__MsgA_119, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__NewContext_18));
#line 738 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__MsgA_119, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_136_136));
#line 738 "add_foreign_proc.m"
                              }
#line 739 "add_foreign_proc.m"
                              {
#line 739 "add_foreign_proc.m"
                                hlds__make_hlds__add_foreign_proc__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 739 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_139_139, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ClauseContext_35));
#line 739 "add_foreign_proc.m"
                              }
#line 739 "add_foreign_proc.m"
                              {
#line 739 "add_foreign_proc.m"
                                hlds__make_hlds__add_foreign_proc__MsgB_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 739 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__MsgB_120, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_139_139));
#line 739 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__MsgB_120, 1) = ((MR_Box) ((MR_Integer) 0));
#line 739 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__MsgB_120, 2) = ((MR_Box) ((MR_Integer) 0));
#line 739 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__MsgB_120, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[65])));
#line 739 "add_foreign_proc.m"
                              }
#line 742 "add_foreign_proc.m"
                              {
#line 742 "add_foreign_proc.m"
                                hlds__make_hlds__add_foreign_proc__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_148_148, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__MsgB_120));
#line 742 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_148_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 742 "add_foreign_proc.m"
                              }
#line 742 "add_foreign_proc.m"
                              {
#line 742 "add_foreign_proc.m"
                                hlds__make_hlds__add_foreign_proc__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_147_147, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__MsgA_119));
#line 742 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_147_147, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_148_148));
#line 742 "add_foreign_proc.m"
                              }
#line 741 "add_foreign_proc.m"
                              {
#line 741 "add_foreign_proc.m"
                                hlds__make_hlds__add_foreign_proc__Spec_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 741 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 741 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 741 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_121, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_147_147));
#line 741 "add_foreign_proc.m"
                              }
#line 743 "add_foreign_proc.m"
                              {
#line 743 "add_foreign_proc.m"
                                MR_Word base;
#line 743 "add_foreign_proc.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "add_foreign_proc.m"
                                *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_52 = base;
#line 743 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Spec_121));
#line 743 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_53_53));
#line 743 "add_foreign_proc.m"
                              }
#line 735 "add_foreign_proc.m"
                            }
#line 744 "add_foreign_proc.m"
                          else
#line 744 "add_foreign_proc.m"
                            *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_52 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_53_53;
#line 715 "add_foreign_proc.m"
                        }
#line 714 "add_foreign_proc.m"
                        break;
#line 714 "add_foreign_proc.m"
                      case (MR_Integer) 1:
#line 687 "add_foreign_proc.m"
                        {
#line 687 "add_foreign_proc.m"
                          MR_Word hlds__make_hlds__add_foreign_proc__V_231_231;

#line 695 "add_foreign_proc.m"
                          if ((hlds__make_hlds__add_foreign_proc__ProcIds_368 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 689 "add_foreign_proc.m"
                            {
#line 693 "add_foreign_proc.m"
                              *hlds__make_hlds__add_foreign_proc__Clauses_25 = hlds__make_hlds__add_foreign_proc__LaterClauses_30;
#line 694 "add_foreign_proc.m"
                              *hlds__make_hlds__add_foreign_proc__Overridden_26 = hlds__make_hlds__add_foreign_proc__LaterOverridden_31;
#line 689 "add_foreign_proc.m"
                            }
#line 695 "add_foreign_proc.m"
                          else
#line 696 "add_foreign_proc.m"
                            {
#line 696 "add_foreign_proc.m"
                              MR_Word hlds__make_hlds__add_foreign_proc__V_220_220;
#line 696 "add_foreign_proc.m"
                              MR_Word hlds__make_hlds__add_foreign_proc__FirstClause_221;

#line 703 "add_foreign_proc.m"
                              {
#line 703 "add_foreign_proc.m"
                                hlds__make_hlds__add_foreign_proc__V_220_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 703 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_220_220, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ProcIds_368));
#line 703 "add_foreign_proc.m"
                              }
#line 703 "add_foreign_proc.m"
                              {
#line 703 "add_foreign_proc.m"
                                hlds__make_hlds__add_foreign_proc__FirstClause_221 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 703 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_221, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_220_220));
#line 703 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_221, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Body_33));
#line 703 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_221, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ClauseLang_34));
#line 703 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_221, 3) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ClauseContext_35));
#line 703 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FirstClause_221, 4) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__StateVarWarnings_36));
#line 703 "add_foreign_proc.m"
                              }
#line 705 "add_foreign_proc.m"
                              {
#line 705 "add_foreign_proc.m"
                                MR_Word base;
#line 705 "add_foreign_proc.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 705 "add_foreign_proc.m"
                                *hlds__make_hlds__add_foreign_proc__Clauses_25 = base;
#line 705 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__FirstClause_221));
#line 705 "add_foreign_proc.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__LaterClauses_30));
#line 705 "add_foreign_proc.m"
                              }
#line 706 "add_foreign_proc.m"
                              *hlds__make_hlds__add_foreign_proc__Overridden_26 = hlds__make_hlds__add_foreign_proc__LaterOverridden_31;
#line 696 "add_foreign_proc.m"
                            }
#line 711 "add_foreign_proc.m"
                          {
#line 711 "add_foreign_proc.m"
                            hlds__make_hlds__add_foreign_proc__V_231_231 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 711 "add_foreign_proc.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_231_231, 0) = ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_5[1]));
#line 711 "add_foreign_proc.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_231_231, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_14_p_0_1));
#line 711 "add_foreign_proc.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_231_231, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 711 "add_foreign_proc.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_231_231, 3) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__LaterOverridden_31));
#line 711 "add_foreign_proc.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_231_231, 4) = ((MR_Box) ((MR_Integer) 1));
#line 711 "add_foreign_proc.m"
                          }
#line 710 "add_foreign_proc.m"
                          {
#line 710 "add_foreign_proc.m"
                            mercury__require__expect_4_p_0(hlds__make_hlds__add_foreign_proc__V_231_231, (MR_String) "hlds.make_hlds.add_foreign_proc", (MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc_update_existing_clauses\'/14", (MR_String) "inconsistent old foreign_procs");
                          }
#line 687 "add_foreign_proc.m"
                          *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_52 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_53_53;
#line 687 "add_foreign_proc.m"
                        }
#line 714 "add_foreign_proc.m"
                        break;
#line 714 "add_foreign_proc.m"
                    }
#line 685 "add_foreign_proc.m"
                  }
#line 748 "add_foreign_proc.m"
                else
#line 751 "add_foreign_proc.m"
                  {
#line 751 "add_foreign_proc.m"
                    {
#line 751 "add_foreign_proc.m"
                      MR_Word base;
#line 751 "add_foreign_proc.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "add_foreign_proc.m"
                      *hlds__make_hlds__add_foreign_proc__Clauses_25 = base;
#line 751 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__FirstClause0_28));
#line 751 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__LaterClauses_30));
#line 751 "add_foreign_proc.m"
                    }
#line 752 "add_foreign_proc.m"
                    *hlds__make_hlds__add_foreign_proc__Overridden_26 = hlds__make_hlds__add_foreign_proc__LaterOverridden_31;
#line 751 "add_foreign_proc.m"
                    *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_52 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_53_53;
#line 751 "add_foreign_proc.m"
                  }
#line 676 "add_foreign_proc.m"
              }
#line 675 "add_foreign_proc.m"
          }
#line 639 "add_foreign_proc.m"
      }
#line 635 "add_foreign_proc.m"
  }
#line 624 "add_foreign_proc.m"
}

#line 601 "add_foreign_proc.m"
static void MR_CALL 
hlds__make_hlds__add_foreign_proc__maybe_rename_user_annotated_sharing_information_6_p_0(
#line 601 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Globals_7,
#line 601 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__ActualHeadVars_8,
#line 601 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__FormalHeadVars_9,
#line 601 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__FormalTypes_10,
#line 601 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Attributes_0_14,
#line 601 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Attributes_15)
#line 601 "add_foreign_proc.m"
{
#line 607 "add_foreign_proc.m"
  {
#line 607 "add_foreign_proc.m"
    MR_bool hlds__make_hlds__add_foreign_proc__succeeded;
#line 607 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__SharingAnalysis_12;

#line 608 "add_foreign_proc.m"
    {
#line 608 "add_foreign_proc.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_foreign_proc__Globals_7, (MR_Integer) 409, &hlds__make_hlds__add_foreign_proc__SharingAnalysis_12);
    }
#line 612 "add_foreign_proc.m"
#line 612 "add_foreign_proc.m"
    switch (hlds__make_hlds__add_foreign_proc__SharingAnalysis_12) {
#line 612 "add_foreign_proc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 612 "add_foreign_proc.m"
      case (MR_Integer) 0:
#line 611 "add_foreign_proc.m"
        *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Attributes_15 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Attributes_0_14;
#line 612 "add_foreign_proc.m"
        break;
#line 612 "add_foreign_proc.m"
      case (MR_Integer) 1:
#line 613 "add_foreign_proc.m"
        {
#line 613 "add_foreign_proc.m"
          MR_Word hlds__make_hlds__add_foreign_proc__FormalUserSharing_13;
#line 613 "add_foreign_proc.m"
          MR_Word hlds__make_hlds__add_foreign_proc__V_17_17;

#line 615 "add_foreign_proc.m"
          {
#line 615 "add_foreign_proc.m"
            hlds__make_hlds__add_foreign_proc__V_17_17 = parse_tree__prog_data__get_user_annotated_sharing_1_f_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Attributes_0_14);
          }
#line 614 "add_foreign_proc.m"
          {
#line 614 "add_foreign_proc.m"
            parse_tree__prog_ctgc__rename_user_annotated_sharing_5_p_0(hlds__make_hlds__add_foreign_proc__ActualHeadVars_8, hlds__make_hlds__add_foreign_proc__FormalHeadVars_9, hlds__make_hlds__add_foreign_proc__FormalTypes_10, hlds__make_hlds__add_foreign_proc__V_17_17, &hlds__make_hlds__add_foreign_proc__FormalUserSharing_13);
          }
#line 617 "add_foreign_proc.m"
          {
#line 617 "add_foreign_proc.m"
            parse_tree__prog_data__set_user_annotated_sharing_3_p_0(hlds__make_hlds__add_foreign_proc__FormalUserSharing_13, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Attributes_0_14, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Attributes_15);
#line 617 "add_foreign_proc.m"
            return;
          }
#line 613 "add_foreign_proc.m"
        }
#line 612 "add_foreign_proc.m"
        break;
#line 612 "add_foreign_proc.m"
    }
#line 607 "add_foreign_proc.m"
  }
#line 601 "add_foreign_proc.m"
}

#line 495 "add_foreign_proc.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_pragma_foreign_proc_20_p_0_1(
#line 495 "add_foreign_proc.m"
  MR_Box hlds__make_hlds__add_foreign_proc__closure_arg,
#line 495 "add_foreign_proc.m"
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_1,
#line 495 "add_foreign_proc.m"
  MR_Box * hlds__make_hlds__add_foreign_proc__wrapper_arg_2)
#line 495 "add_foreign_proc.m"
{
#line 495 "add_foreign_proc.m"
  {
#line 495 "add_foreign_proc.m"
    MR_bool hlds__make_hlds__add_foreign_proc__succeeded;
#line 495 "add_foreign_proc.m"
    MR_Box hlds__make_hlds__add_foreign_proc__closure = hlds__make_hlds__add_foreign_proc__closure_arg;
#line 495 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__conv0_HeadVar__2_112;

#line 495 "add_foreign_proc.m"
    {
#line 495 "add_foreign_proc.m"
      hlds__make_hlds__add_foreign_proc__succeeded = hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__clauses_info_do_add_pragma_foreign_proc__495__1_2_p_0(((MR_Word) hlds__make_hlds__add_foreign_proc__wrapper_arg_1), &hlds__make_hlds__add_foreign_proc__conv0_HeadVar__2_112);
    }
#line 495 "add_foreign_proc.m"
    if (hlds__make_hlds__add_foreign_proc__succeeded)
#line 495 "add_foreign_proc.m"
      {
#line 495 "add_foreign_proc.m"
        *hlds__make_hlds__add_foreign_proc__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_foreign_proc__conv0_HeadVar__2_112));
#line 495 "add_foreign_proc.m"
        hlds__make_hlds__add_foreign_proc__succeeded = MR_TRUE;
#line 495 "add_foreign_proc.m"
      }
#line 495 "add_foreign_proc.m"
    return hlds__make_hlds__add_foreign_proc__succeeded;
#line 495 "add_foreign_proc.m"
  }
#line 495 "add_foreign_proc.m"
}

#line 448 "add_foreign_proc.m"
static void MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_pragma_foreign_proc_20_p_0(
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Purity_21,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Attributes0_22,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PredId_23,
#line 448 "add_foreign_proc.m"
  MR_Integer hlds__make_hlds__add_foreign_proc__ProcId_24,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__AllProcIds_25,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PVarSet_26,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PVars_27,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__OrigArgTypes_28,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PragmaImpl0_29,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Context_30,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PredOrFunc_31,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PredName_32,
#line 448 "add_foreign_proc.m"
  MR_Integer hlds__make_hlds__add_foreign_proc__Arity_33,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Markers_34,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_102,
#line 448 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_103,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_104,
#line 448 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_105,
#line 448 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_106,
#line 448 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_107)
#line 448 "add_foreign_proc.m"
{
#line 459 "add_foreign_proc.m"
  {
#line 459 "add_foreign_proc.m"
    MR_bool hlds__make_hlds__add_foreign_proc__succeeded;
#line 459 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__TypeInfo_220_220;
#line 459 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__VarSet0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_102, (MR_Integer) 0)));
#line 459 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__ExplicitVarTypes_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_102, (MR_Integer) 1)));
#line 459 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__TVarNameMap_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_102, (MR_Integer) 2)));
#line 459 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__InferredVarTypes_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_102, (MR_Integer) 3)));
#line 459 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__HeadVars_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_102, (MR_Integer) 4)));
#line 459 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__ClausesRep0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_102, (MR_Integer) 5)));
#line 459 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__ItemNumbers_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_102, (MR_Integer) 6)));
#line 459 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__RttiVarMaps_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_102, (MR_Integer) 7)));
#line 459 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__Clauses0_47;
#line 459 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__Globals_48;
#line 459 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__Target_49;
#line 459 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__NewLang_50;
#line 459 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__Clauses1_51;
#line 459 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__Overridden_52;
#line 459 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__BackendForeignLanguages_53;
#line 459 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__Args0_54;
#line 459 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__ArgInfo_55;
#line 459 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__Attributes1_56;
#line 459 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__PragmaImpl_57;
#line 459 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__ArgBag0_58;
#line 459 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__ArgBag_59;
#line 459 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__ArgBagAL0_60;
#line 459 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__MultiplyOccurringArgVars_64;
#line 459 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_108_108;
#line 461 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc___HasForeignClauses_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_102, (MR_Integer) 8)));

#line 465 "add_foreign_proc.m"
    {
#line 465 "add_foreign_proc.m"
      hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(hlds__make_hlds__add_foreign_proc__ClausesRep0_43, &hlds__make_hlds__add_foreign_proc__Clauses0_47);
    }
#line 474 "add_foreign_proc.m"
    {
#line 474 "add_foreign_proc.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_104, &hlds__make_hlds__add_foreign_proc__Globals_48);
    }
#line 475 "add_foreign_proc.m"
    {
#line 475 "add_foreign_proc.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_foreign_proc__Globals_48, &hlds__make_hlds__add_foreign_proc__Target_49);
    }
#line 476 "add_foreign_proc.m"
    {
#line 476 "add_foreign_proc.m"
      hlds__make_hlds__add_foreign_proc__NewLang_50 = parse_tree__prog_data__get_foreign_language_1_f_0(hlds__make_hlds__add_foreign_proc__Attributes0_22);
    }
#line 477 "add_foreign_proc.m"
    {
#line 477 "add_foreign_proc.m"
      hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_14_p_0(hlds__make_hlds__add_foreign_proc__PredName_32, hlds__make_hlds__add_foreign_proc__Arity_33, hlds__make_hlds__add_foreign_proc__PredOrFunc_31, hlds__make_hlds__add_foreign_proc__Context_30, hlds__make_hlds__add_foreign_proc__Globals_48, hlds__make_hlds__add_foreign_proc__Target_49, hlds__make_hlds__add_foreign_proc__NewLang_50, hlds__make_hlds__add_foreign_proc__AllProcIds_25, hlds__make_hlds__add_foreign_proc__ProcId_24, hlds__make_hlds__add_foreign_proc__Clauses0_47, &hlds__make_hlds__add_foreign_proc__Clauses1_51, &hlds__make_hlds__add_foreign_proc__Overridden_52, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_106, &hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_108_108);
    }
#line 481 "add_foreign_proc.m"
    {
#line 481 "add_foreign_proc.m"
      libs__globals__get_backend_foreign_languages_2_p_0(hlds__make_hlds__add_foreign_proc__Globals_48, &hlds__make_hlds__add_foreign_proc__BackendForeignLanguages_53);
    }
#line 482 "add_foreign_proc.m"
    {
#line 482 "add_foreign_proc.m"
      parse_tree__prog_data__pragma_get_vars_2_p_0(hlds__make_hlds__add_foreign_proc__PVars_27, &hlds__make_hlds__add_foreign_proc__Args0_54);
    }
#line 483 "add_foreign_proc.m"
    {
#line 483 "add_foreign_proc.m"
      parse_tree__prog_data__pragma_get_var_infos_2_p_0(hlds__make_hlds__add_foreign_proc__PVars_27, &hlds__make_hlds__add_foreign_proc__ArgInfo_55);
    }
#line 487 "add_foreign_proc.m"
    {
#line 487 "add_foreign_proc.m"
      backend_libs__foreign__extrude_pragma_implementation_11_p_0(hlds__make_hlds__add_foreign_proc__BackendForeignLanguages_53, hlds__make_hlds__add_foreign_proc__PVars_27, hlds__make_hlds__add_foreign_proc__PredName_32, hlds__make_hlds__add_foreign_proc__PredOrFunc_31, hlds__make_hlds__add_foreign_proc__Context_30, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_104, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_105, hlds__make_hlds__add_foreign_proc__Attributes0_22, &hlds__make_hlds__add_foreign_proc__Attributes1_56, hlds__make_hlds__add_foreign_proc__PragmaImpl0_29, &hlds__make_hlds__add_foreign_proc__PragmaImpl_57);
    }
#line 2100 "hlds.make_hlds.add_foreign_proc.c"
    hlds__make_hlds__add_foreign_proc__TypeInfo_220_220 = (MR_Word) &hlds__make_hlds__add_foreign_proc_scalar_common_1[2];
#line 492 "add_foreign_proc.m"
    {
#line 492 "add_foreign_proc.m"
      mercury__bag__init_1_p_0(hlds__make_hlds__add_foreign_proc__TypeInfo_220_220, &hlds__make_hlds__add_foreign_proc__ArgBag0_58);
    }
#line 493 "add_foreign_proc.m"
    {
#line 493 "add_foreign_proc.m"
      mercury__bag__insert_list_3_p_0(hlds__make_hlds__add_foreign_proc__TypeInfo_220_220, hlds__make_hlds__add_foreign_proc__Args0_54, hlds__make_hlds__add_foreign_proc__ArgBag0_58, &hlds__make_hlds__add_foreign_proc__ArgBag_59);
    }
#line 494 "add_foreign_proc.m"
    {
#line 494 "add_foreign_proc.m"
      mercury__bag__to_assoc_list_2_p_0(hlds__make_hlds__add_foreign_proc__TypeInfo_220_220, hlds__make_hlds__add_foreign_proc__ArgBag_59, &hlds__make_hlds__add_foreign_proc__ArgBagAL0_60);
    }
#line 495 "add_foreign_proc.m"
    {
#line 495 "add_foreign_proc.m"
      mercury__list__filter_map_3_p_0((MR_Word) &hlds__make_hlds__add_foreign_proc_scalar_common_2[1], hlds__make_hlds__add_foreign_proc__TypeInfo_220_220, (MR_Word) &hlds__make_hlds__add_foreign_proc_scalar_common_2[2], hlds__make_hlds__add_foreign_proc__ArgBagAL0_60, &hlds__make_hlds__add_foreign_proc__MultiplyOccurringArgVars_64);
    }
#line 524 "add_foreign_proc.m"
    if ((hlds__make_hlds__add_foreign_proc__MultiplyOccurringArgVars_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 525 "add_foreign_proc.m"
      {
#line 525 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__GoalInfo0_77;
#line 525 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__GoalInfo1_78;

#line 527 "add_foreign_proc.m"
        {
#line 527 "add_foreign_proc.m"
          hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__add_foreign_proc__GoalInfo0_77);
        }
#line 528 "add_foreign_proc.m"
        {
#line 528 "add_foreign_proc.m"
          hlds__hlds_goal__goal_info_set_context_3_p_0(hlds__make_hlds__add_foreign_proc__Context_30, hlds__make_hlds__add_foreign_proc__GoalInfo0_77, &hlds__make_hlds__add_foreign_proc__GoalInfo1_78);
        }
#line 535 "add_foreign_proc.m"
        {
#line 535 "add_foreign_proc.m"
          hlds__make_hlds__add_foreign_proc__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_foreign_proc__Markers_34, (MR_Integer) 14);
        }
#line 536 "add_foreign_proc.m"
        if (!(hlds__make_hlds__add_foreign_proc__succeeded))
#line 536 "add_foreign_proc.m"
          {
#line 536 "add_foreign_proc.m"
            {
#line 536 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_foreign_proc__Markers_34, (MR_Integer) 15);
            }
#line 536 "add_foreign_proc.m"
          }
#line 540 "add_foreign_proc.m"
        if (hlds__make_hlds__add_foreign_proc__succeeded)
#line 540 "add_foreign_proc.m"
          *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_107 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_108_108;
#line 540 "add_foreign_proc.m"
        else
#line 541 "add_foreign_proc.m"
          {
#line 541 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__ForeignAttributePurity_79;

#line 541 "add_foreign_proc.m"
            {
#line 541 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__ForeignAttributePurity_79 = parse_tree__prog_data__get_purity_1_f_0(hlds__make_hlds__add_foreign_proc__Attributes1_56);
            }
#line 542 "add_foreign_proc.m"
            hlds__make_hlds__add_foreign_proc__succeeded = (hlds__make_hlds__add_foreign_proc__ForeignAttributePurity_79 == hlds__make_hlds__add_foreign_proc__Purity_21);
#line 544 "add_foreign_proc.m"
            if (hlds__make_hlds__add_foreign_proc__succeeded)
#line 544 "add_foreign_proc.m"
              *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_107 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_108_108;
#line 544 "add_foreign_proc.m"
            else
#line 545 "add_foreign_proc.m"
              {
#line 545 "add_foreign_proc.m"
                MR_String hlds__make_hlds__add_foreign_proc__ForeignAttributePurityStr_80;
#line 545 "add_foreign_proc.m"
                MR_String hlds__make_hlds__add_foreign_proc__PurityStr_81;
#line 545 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__Pieces_82;
#line 545 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__V_118_118;
#line 545 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__V_119_119;
#line 545 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__V_120_120;
#line 545 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__V_121_121;
#line 545 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__V_122_122;
#line 545 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__V_123_123;
#line 545 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__V_126_126;
#line 545 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__V_127_127;
#line 545 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__V_128_128;
#line 545 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__V_131_131;
#line 545 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__V_133_133;
#line 545 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__V_136_136;
#line 545 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__V_137_137;
#line 545 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__V_144_144;
#line 545 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__V_145_145;
#line 545 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__V_149_149;
#line 545 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__Msg_210;
#line 545 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__Spec_211;

#line 545 "add_foreign_proc.m"
                {
#line 545 "add_foreign_proc.m"
                  parse_tree__prog_out__purity_name_2_p_0(hlds__make_hlds__add_foreign_proc__ForeignAttributePurity_79, &hlds__make_hlds__add_foreign_proc__ForeignAttributePurityStr_80);
                }
#line 546 "add_foreign_proc.m"
                {
#line 546 "add_foreign_proc.m"
                  parse_tree__prog_out__purity_name_2_p_0(hlds__make_hlds__add_foreign_proc__Purity_21, &hlds__make_hlds__add_foreign_proc__PurityStr_81);
                }
#line 548 "add_foreign_proc.m"
                {
#line 548 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 548 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_119_119, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredOrFunc_31));
#line 548 "add_foreign_proc.m"
                }
#line 548 "add_foreign_proc.m"
                {
#line 548 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 548 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredName_32));
#line 548 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_122_122, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Arity_33));
#line 548 "add_foreign_proc.m"
                }
#line 548 "add_foreign_proc.m"
                {
#line 548 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__V_121_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_121_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 548 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_121_121, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_122_122));
#line 548 "add_foreign_proc.m"
                }
#line 549 "add_foreign_proc.m"
                {
#line 549 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__V_127_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_127_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 549 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_127_127, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ForeignAttributePurityStr_80));
#line 549 "add_foreign_proc.m"
                }
#line 551 "add_foreign_proc.m"
                {
#line 551 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__V_137_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_137_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 551 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_137_137, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PurityStr_81));
#line 551 "add_foreign_proc.m"
                }
#line 551 "add_foreign_proc.m"
                {
#line 551 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_136_136, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_137_137));
#line 551 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_136_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[25])));
#line 551 "add_foreign_proc.m"
                }
#line 551 "add_foreign_proc.m"
                {
#line 551 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_133_133, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[58])));
#line 551 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_133_133, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_136_136));
#line 551 "add_foreign_proc.m"
                }
#line 550 "add_foreign_proc.m"
                {
#line 550 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_131_131, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_119_119));
#line 550 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_131_131, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_133_133));
#line 550 "add_foreign_proc.m"
                }
#line 550 "add_foreign_proc.m"
                {
#line 550 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_128_128, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[57])));
#line 550 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_128_128, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_131_131));
#line 550 "add_foreign_proc.m"
                }
#line 549 "add_foreign_proc.m"
                {
#line 549 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_127_127));
#line 549 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_126_126, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_128_128));
#line 549 "add_foreign_proc.m"
                }
#line 549 "add_foreign_proc.m"
                {
#line 549 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_123_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[56])));
#line 549 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_123_123, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_126_126));
#line 549 "add_foreign_proc.m"
                }
#line 548 "add_foreign_proc.m"
                {
#line 548 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_120_120, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_121_121));
#line 548 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_120_120, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_123_123));
#line 548 "add_foreign_proc.m"
                }
#line 548 "add_foreign_proc.m"
                {
#line 548 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_118_118, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_119_119));
#line 548 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_118_118, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_120_120));
#line 548 "add_foreign_proc.m"
                }
#line 547 "add_foreign_proc.m"
                {
#line 547 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__Pieces_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 547 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[55])));
#line 547 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces_82, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_118_118));
#line 547 "add_foreign_proc.m"
                }
#line 553 "add_foreign_proc.m"
                {
#line 553 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 553 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_145_145, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Pieces_82));
#line 553 "add_foreign_proc.m"
                }
#line 553 "add_foreign_proc.m"
                {
#line 553 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_144_144, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_145_145));
#line 553 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_144_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 553 "add_foreign_proc.m"
                }
#line 553 "add_foreign_proc.m"
                {
#line 553 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__Msg_210 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 553 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_210, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Context_30));
#line 553 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_210, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_144_144));
#line 553 "add_foreign_proc.m"
                }
#line 555 "add_foreign_proc.m"
                {
#line 555 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_149_149, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Msg_210));
#line 555 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_149_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 555 "add_foreign_proc.m"
                }
#line 554 "add_foreign_proc.m"
                {
#line 554 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__Spec_211 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 554 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_211, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_211, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 554 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_211, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_149_149));
#line 554 "add_foreign_proc.m"
                }
#line 556 "add_foreign_proc.m"
                {
#line 556 "add_foreign_proc.m"
                  MR_Word base;
#line 556 "add_foreign_proc.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "add_foreign_proc.m"
                  *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_107 = base;
#line 556 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Spec_211));
#line 556 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_108_108));
#line 556 "add_foreign_proc.m"
                }
#line 545 "add_foreign_proc.m"
              }
#line 541 "add_foreign_proc.m"
          }
#line 561 "add_foreign_proc.m"
#line 561 "add_foreign_proc.m"
        switch (hlds__make_hlds__add_foreign_proc__Overridden_52) {
#line 561 "add_foreign_proc.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 561 "add_foreign_proc.m"
          case (MR_Integer) 1:
#line 562 "add_foreign_proc.m"
            {
#line 562 "add_foreign_proc.m"
              MR_Word hlds__make_hlds__add_foreign_proc__GoalInfo_83;
#line 562 "add_foreign_proc.m"
              MR_Word hlds__make_hlds__add_foreign_proc__HeadVarList_84;
#line 562 "add_foreign_proc.m"
              MR_Word hlds__make_hlds__add_foreign_proc__ForeignArgs_85;
#line 562 "add_foreign_proc.m"
              MR_Word hlds__make_hlds__add_foreign_proc__Attributes_86;
#line 562 "add_foreign_proc.m"
              MR_Word hlds__make_hlds__add_foreign_proc__GoalExpr_89;
#line 562 "add_foreign_proc.m"
              MR_Word hlds__make_hlds__add_foreign_proc__HldsGoal0_90;
#line 562 "add_foreign_proc.m"
              MR_Word hlds__make_hlds__add_foreign_proc__EmptyVarTypes_91;
#line 562 "add_foreign_proc.m"
              MR_Word hlds__make_hlds__add_foreign_proc__EmptyRttiVarmaps_92;
#line 562 "add_foreign_proc.m"
              MR_Word hlds__make_hlds__add_foreign_proc__HldsGoal_94;
#line 562 "add_foreign_proc.m"
              MR_Word hlds__make_hlds__add_foreign_proc__VarSet_95;
#line 562 "add_foreign_proc.m"
              MR_Word hlds__make_hlds__add_foreign_proc__Clause_98;
#line 562 "add_foreign_proc.m"
              MR_Word hlds__make_hlds__add_foreign_proc__Clauses_99;
#line 562 "add_foreign_proc.m"
              MR_Word hlds__make_hlds__add_foreign_proc__ClausesRep_101;
#line 562 "add_foreign_proc.m"
              MR_Word hlds__make_hlds__add_foreign_proc__V_153_153;
#line 562 "add_foreign_proc.m"
              MR_Word hlds__make_hlds__add_foreign_proc__V_154_154;
#line 562 "add_foreign_proc.m"
              MR_Word hlds__make_hlds__add_foreign_proc__V_156_156;
#line 581 "add_foreign_proc.m"
              MR_Word hlds__make_hlds__add_foreign_proc___Warnings_93;
#line 581 "add_foreign_proc.m"
              MR_Word hlds__make_hlds__add_foreign_proc__V_96_96;
#line 581 "add_foreign_proc.m"
              MR_Word hlds__make_hlds__add_foreign_proc__V_97_97;

#line 566 "add_foreign_proc.m"
              {
#line 566 "add_foreign_proc.m"
                hlds__hlds_goal__goal_info_set_purity_3_p_0(hlds__make_hlds__add_foreign_proc__Purity_21, hlds__make_hlds__add_foreign_proc__GoalInfo1_78, &hlds__make_hlds__add_foreign_proc__GoalInfo_83);
              }
#line 569 "add_foreign_proc.m"
              {
#line 569 "add_foreign_proc.m"
                hlds__make_hlds__add_foreign_proc__HeadVarList_84 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0(hlds__make_hlds__add_foreign_proc__TypeInfo_220_220, hlds__make_hlds__add_foreign_proc__HeadVars_42);
              }
#line 570 "add_foreign_proc.m"
              {
#line 570 "add_foreign_proc.m"
                hlds__hlds_goal__make_foreign_args_4_p_0(hlds__make_hlds__add_foreign_proc__HeadVarList_84, hlds__make_hlds__add_foreign_proc__ArgInfo_55, hlds__make_hlds__add_foreign_proc__OrigArgTypes_28, &hlds__make_hlds__add_foreign_proc__ForeignArgs_85);
              }
#line 572 "add_foreign_proc.m"
              {
#line 572 "add_foreign_proc.m"
                hlds__make_hlds__add_foreign_proc__maybe_rename_user_annotated_sharing_information_6_p_0(hlds__make_hlds__add_foreign_proc__Globals_48, hlds__make_hlds__add_foreign_proc__Args0_54, hlds__make_hlds__add_foreign_proc__HeadVarList_84, hlds__make_hlds__add_foreign_proc__OrigArgTypes_28, hlds__make_hlds__add_foreign_proc__Attributes1_56, &hlds__make_hlds__add_foreign_proc__Attributes_86);
              }
#line 576 "add_foreign_proc.m"
              {
#line 576 "add_foreign_proc.m"
                hlds__make_hlds__add_foreign_proc__GoalExpr_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 576 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__GoalExpr_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 576 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__GoalExpr_89, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Attributes_86));
#line 576 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__GoalExpr_89, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredId_23));
#line 576 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__GoalExpr_89, 3) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ProcId_24));
#line 576 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__GoalExpr_89, 4) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ForeignArgs_85));
#line 576 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__GoalExpr_89, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 576 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__GoalExpr_89, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 576 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__GoalExpr_89, 7) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PragmaImpl_57));
#line 576 "add_foreign_proc.m"
              }
#line 578 "add_foreign_proc.m"
              {
#line 578 "add_foreign_proc.m"
                hlds__make_hlds__add_foreign_proc__HldsGoal0_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 578 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__HldsGoal0_90, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__GoalExpr_89));
#line 578 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__HldsGoal0_90, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__GoalInfo_83));
#line 578 "add_foreign_proc.m"
              }
#line 579 "add_foreign_proc.m"
              {
#line 579 "add_foreign_proc.m"
                hlds__vartypes__init_vartypes_1_p_0(&hlds__make_hlds__add_foreign_proc__EmptyVarTypes_91);
              }
#line 580 "add_foreign_proc.m"
              {
#line 580 "add_foreign_proc.m"
                hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__make_hlds__add_foreign_proc__EmptyRttiVarmaps_92);
              }
#line 581 "add_foreign_proc.m"
              {
#line 581 "add_foreign_proc.m"
                hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, hlds__make_hlds__add_foreign_proc__HeadVarList_84, &hlds__make_hlds__add_foreign_proc___Warnings_93, hlds__make_hlds__add_foreign_proc__HldsGoal0_90, &hlds__make_hlds__add_foreign_proc__HldsGoal_94, hlds__make_hlds__add_foreign_proc__VarSet0_38, &hlds__make_hlds__add_foreign_proc__VarSet_95, hlds__make_hlds__add_foreign_proc__EmptyVarTypes_91, &hlds__make_hlds__add_foreign_proc__V_96_96, hlds__make_hlds__add_foreign_proc__EmptyRttiVarmaps_92, &hlds__make_hlds__add_foreign_proc__V_97_97);
              }
#line 585 "add_foreign_proc.m"
              {
#line 585 "add_foreign_proc.m"
                hlds__make_hlds__add_foreign_proc__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_154_154, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ProcId_24));
#line 585 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_154_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 585 "add_foreign_proc.m"
              }
#line 585 "add_foreign_proc.m"
              {
#line 585 "add_foreign_proc.m"
                hlds__make_hlds__add_foreign_proc__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 585 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_153_153, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_154_154));
#line 585 "add_foreign_proc.m"
              }
#line 586 "add_foreign_proc.m"
              {
#line 586 "add_foreign_proc.m"
                hlds__make_hlds__add_foreign_proc__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 586 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_156_156, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__NewLang_50));
#line 586 "add_foreign_proc.m"
              }
#line 585 "add_foreign_proc.m"
              {
#line 585 "add_foreign_proc.m"
                hlds__make_hlds__add_foreign_proc__Clause_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 585 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Clause_98, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_153_153));
#line 585 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Clause_98, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__HldsGoal_94));
#line 585 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Clause_98, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_156_156));
#line 585 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Clause_98, 3) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Context_30));
#line 585 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Clause_98, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 585 "add_foreign_proc.m"
              }
#line 587 "add_foreign_proc.m"
              {
#line 587 "add_foreign_proc.m"
                hlds__make_hlds__add_foreign_proc__Clauses_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Clauses_99, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Clause_98));
#line 587 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Clauses_99, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Clauses1_51));
#line 587 "add_foreign_proc.m"
              }
#line 589 "add_foreign_proc.m"
              {
#line 589 "add_foreign_proc.m"
                hlds__hlds_clauses__set_clause_list_2_p_0(hlds__make_hlds__add_foreign_proc__Clauses_99, &hlds__make_hlds__add_foreign_proc__ClausesRep_101);
              }
#line 590 "add_foreign_proc.m"
              {
#line 590 "add_foreign_proc.m"
                MR_Word base;
#line 590 "add_foreign_proc.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 590 "add_foreign_proc.m"
                *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_103 = base;
#line 590 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__VarSet_95));
#line 590 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ExplicitVarTypes_39));
#line 590 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__TVarNameMap_40));
#line 590 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__InferredVarTypes_41));
#line 590 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__HeadVars_42));
#line 590 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ClausesRep_101));
#line 590 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ItemNumbers_44));
#line 590 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__RttiVarMaps_45));
#line 590 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 1));
#line 590 "add_foreign_proc.m"
              }
#line 562 "add_foreign_proc.m"
            }
#line 561 "add_foreign_proc.m"
            break;
#line 561 "add_foreign_proc.m"
          case (MR_Integer) 0:
#line 560 "add_foreign_proc.m"
            *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_103 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_102;
#line 561 "add_foreign_proc.m"
            break;
#line 561 "add_foreign_proc.m"
        }
#line 525 "add_foreign_proc.m"
      }
#line 524 "add_foreign_proc.m"
    else
#line 502 "add_foreign_proc.m"
      {
#line 502 "add_foreign_proc.m"
        MR_Integer hlds__make_hlds__add_foreign_proc__OrigArity_67;
#line 502 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__SimpleCallId_68;
#line 502 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__Pieces1_69;
#line 502 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__Pieces2_71;
#line 502 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__Msg_75;
#line 502 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__Spec_76;
#line 502 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__V_161_161;
#line 502 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__V_164_164;
#line 502 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__V_167_167;
#line 502 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__V_168_168;
#line 502 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__V_199_199;
#line 502 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__V_200_200;
#line 502 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__V_201_201;
#line 502 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__V_205_205;
#line 502 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__V_225_225;
#line 502 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__V_226_226;

#line 503 "add_foreign_proc.m"
        {
#line 503 "add_foreign_proc.m"
          parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__make_hlds__add_foreign_proc__PredOrFunc_31, &hlds__make_hlds__add_foreign_proc__OrigArity_67, hlds__make_hlds__add_foreign_proc__Arity_33);
        }
#line 504 "add_foreign_proc.m"
        {
#line 504 "add_foreign_proc.m"
          hlds__make_hlds__add_foreign_proc__SimpleCallId_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 504 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__SimpleCallId_68, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredOrFunc_31));
#line 504 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__SimpleCallId_68, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredName_32));
#line 504 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__SimpleCallId_68, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__OrigArity_67));
#line 504 "add_foreign_proc.m"
        }
#line 506 "add_foreign_proc.m"
        {
#line 506 "add_foreign_proc.m"
          hlds__make_hlds__add_foreign_proc__V_168_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 506 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_168_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 506 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_168_168, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__SimpleCallId_68));
#line 506 "add_foreign_proc.m"
        }
#line 506 "add_foreign_proc.m"
        {
#line 506 "add_foreign_proc.m"
          hlds__make_hlds__add_foreign_proc__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 506 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_167_167, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_168_168));
#line 506 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_167_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[34])));
#line 506 "add_foreign_proc.m"
        }
#line 506 "add_foreign_proc.m"
        {
#line 506 "add_foreign_proc.m"
          hlds__make_hlds__add_foreign_proc__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 506 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_164_164, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[60])));
#line 506 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_164_164, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_167_167));
#line 506 "add_foreign_proc.m"
        }
#line 505 "add_foreign_proc.m"
        {
#line 505 "add_foreign_proc.m"
          hlds__make_hlds__add_foreign_proc__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_161_161, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[48])));
#line 505 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_161_161, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_164_164));
#line 505 "add_foreign_proc.m"
        }
#line 505 "add_foreign_proc.m"
        {
#line 505 "add_foreign_proc.m"
          hlds__make_hlds__add_foreign_proc__Pieces1_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces1_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[59])));
#line 505 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces1_69, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_161_161));
#line 505 "add_foreign_proc.m"
        }
#line 509 "add_foreign_proc.m"
        hlds__make_hlds__add_foreign_proc__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__MultiplyOccurringArgVars_64, (MR_Integer) 0)));
#line 509 "add_foreign_proc.m"
        hlds__make_hlds__add_foreign_proc__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__MultiplyOccurringArgVars_64, (MR_Integer) 1)));
#line 514 "add_foreign_proc.m"
        if ((hlds__make_hlds__add_foreign_proc__V_225_225 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 509 "add_foreign_proc.m"
          {
#line 509 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_190_190;
#line 509 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_191_191;
#line 509 "add_foreign_proc.m"
            MR_String hlds__make_hlds__add_foreign_proc__V_192_192;

#line 511 "add_foreign_proc.m"
            {
#line 511 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_192_192 = parse_tree__mercury_to_mercury__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__add_foreign_proc__PVarSet_26, hlds__make_hlds__add_foreign_proc__V_226_226);
            }
#line 511 "add_foreign_proc.m"
            {
#line 511 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_191_191 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_191_191, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 511 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_191_191, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_192_192));
#line 511 "add_foreign_proc.m"
            }
#line 512 "add_foreign_proc.m"
            {
#line 512 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_190_190, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_191_191));
#line 512 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_190_190, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[36])));
#line 512 "add_foreign_proc.m"
            }
#line 510 "add_foreign_proc.m"
            {
#line 510 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__Pieces2_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 510 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces2_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[61])));
#line 510 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces2_71, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_190_190));
#line 510 "add_foreign_proc.m"
            }
#line 509 "add_foreign_proc.m"
          }
#line 514 "add_foreign_proc.m"
        else
#line 515 "add_foreign_proc.m"
          {
#line 515 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_178_178;
#line 515 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_179_179;
#line 515 "add_foreign_proc.m"
            MR_String hlds__make_hlds__add_foreign_proc__V_180_180;

#line 517 "add_foreign_proc.m"
            {
#line 517 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_180_180 = parse_tree__mercury_to_mercury__mercury_vars_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__add_foreign_proc__PVarSet_26, hlds__make_hlds__add_foreign_proc__MultiplyOccurringArgVars_64);
            }
#line 517 "add_foreign_proc.m"
            {
#line 517 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_179_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 517 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_179_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 517 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_179_179, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_180_180));
#line 517 "add_foreign_proc.m"
            }
#line 518 "add_foreign_proc.m"
            {
#line 518 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_178_178, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_179_179));
#line 518 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_178_178, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[38])));
#line 518 "add_foreign_proc.m"
            }
#line 516 "add_foreign_proc.m"
            {
#line 516 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__Pieces2_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces2_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[62])));
#line 516 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces2_71, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_178_178));
#line 516 "add_foreign_proc.m"
            }
#line 515 "add_foreign_proc.m"
          }
#line 521 "add_foreign_proc.m"
        {
#line 521 "add_foreign_proc.m"
          hlds__make_hlds__add_foreign_proc__V_201_201 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_foreign_proc__Pieces1_69, hlds__make_hlds__add_foreign_proc__Pieces2_71);
        }
#line 521 "add_foreign_proc.m"
        {
#line 521 "add_foreign_proc.m"
          hlds__make_hlds__add_foreign_proc__V_200_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 521 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_200_200, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_201_201));
#line 521 "add_foreign_proc.m"
        }
#line 521 "add_foreign_proc.m"
        {
#line 521 "add_foreign_proc.m"
          hlds__make_hlds__add_foreign_proc__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_199_199, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_200_200));
#line 521 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_199_199, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 521 "add_foreign_proc.m"
        }
#line 521 "add_foreign_proc.m"
        {
#line 521 "add_foreign_proc.m"
          hlds__make_hlds__add_foreign_proc__Msg_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 521 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_75, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Context_30));
#line 521 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_75, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_199_199));
#line 521 "add_foreign_proc.m"
        }
#line 522 "add_foreign_proc.m"
        {
#line 522 "add_foreign_proc.m"
          hlds__make_hlds__add_foreign_proc__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_205_205, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Msg_75));
#line 522 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_205_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 522 "add_foreign_proc.m"
        }
#line 522 "add_foreign_proc.m"
        {
#line 522 "add_foreign_proc.m"
          hlds__make_hlds__add_foreign_proc__Spec_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 522 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 522 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 522 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_76, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_205_205));
#line 522 "add_foreign_proc.m"
        }
#line 523 "add_foreign_proc.m"
        {
#line 523 "add_foreign_proc.m"
          MR_Word base;
#line 523 "add_foreign_proc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "add_foreign_proc.m"
          *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_107 = base;
#line 523 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Spec_76));
#line 523 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_108_108));
#line 523 "add_foreign_proc.m"
        }
#line 502 "add_foreign_proc.m"
        *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_103 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_102;
#line 502 "add_foreign_proc.m"
      }
#line 459 "add_foreign_proc.m"
  }
#line 448 "add_foreign_proc.m"
}

#line 411 "add_foreign_proc.m"
static void MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_add_pragma_foreign_proc_19_p_0(
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Purity_20,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Attributes0_21,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PredId_22,
#line 411 "add_foreign_proc.m"
  MR_Integer hlds__make_hlds__add_foreign_proc__ProcId_23,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PVarSet_24,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PVars_25,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__OrigArgTypes_26,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PragmaImpl0_27,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Context_28,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PredOrFunc_29,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PredName_30,
#line 411 "add_foreign_proc.m"
  MR_Integer hlds__make_hlds__add_foreign_proc__Arity_31,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Markers_32,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_42,
#line 411 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_43,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_44,
#line 411 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_45,
#line 411 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_46,
#line 411 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_47)
#line 411 "add_foreign_proc.m"
{
#line 422 "add_foreign_proc.m"
  {
#line 422 "add_foreign_proc.m"
    MR_bool hlds__make_hlds__add_foreign_proc__succeeded;
#line 422 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__PredInfo_36;

#line 423 "add_foreign_proc.m"
    {
#line 423 "add_foreign_proc.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_44, hlds__make_hlds__add_foreign_proc__PredId_22, &hlds__make_hlds__add_foreign_proc__PredInfo_36);
    }
#line 424 "add_foreign_proc.m"
    {
#line 424 "add_foreign_proc.m"
      hlds__make_hlds__add_foreign_proc__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(hlds__make_hlds__add_foreign_proc__PredInfo_36);
    }
#line 440 "add_foreign_proc.m"
    if (hlds__make_hlds__add_foreign_proc__succeeded)
#line 428 "add_foreign_proc.m"
      {
#line 428 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__Globals_37;
#line 428 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__AllowDefnOfBuiltin_38;

#line 428 "add_foreign_proc.m"
        {
#line 428 "add_foreign_proc.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_44, &hlds__make_hlds__add_foreign_proc__Globals_37);
        }
#line 429 "add_foreign_proc.m"
        {
#line 429 "add_foreign_proc.m"
          libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_foreign_proc__Globals_37, (MR_Integer) 278, &hlds__make_hlds__add_foreign_proc__AllowDefnOfBuiltin_38);
        }
#line 437 "add_foreign_proc.m"
#line 437 "add_foreign_proc.m"
        switch (hlds__make_hlds__add_foreign_proc__AllowDefnOfBuiltin_38) {
#line 437 "add_foreign_proc.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 437 "add_foreign_proc.m"
          case (MR_Integer) 0:
#line 432 "add_foreign_proc.m"
            {
#line 432 "add_foreign_proc.m"
              MR_Word hlds__make_hlds__add_foreign_proc__Msg_39;
#line 432 "add_foreign_proc.m"
              MR_Word hlds__make_hlds__add_foreign_proc__Spec_40;
#line 432 "add_foreign_proc.m"
              MR_Word hlds__make_hlds__add_foreign_proc__V_60_60;

#line 433 "add_foreign_proc.m"
              {
#line 433 "add_foreign_proc.m"
                hlds__make_hlds__add_foreign_proc__Msg_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 433 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_39, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Context_28));
#line 433 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[32])));
#line 433 "add_foreign_proc.m"
              }
#line 435 "add_foreign_proc.m"
              {
#line 435 "add_foreign_proc.m"
                hlds__make_hlds__add_foreign_proc__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Msg_39));
#line 435 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 435 "add_foreign_proc.m"
              }
#line 435 "add_foreign_proc.m"
              {
#line 435 "add_foreign_proc.m"
                hlds__make_hlds__add_foreign_proc__Spec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 435 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 435 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 435 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_40, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_60_60));
#line 435 "add_foreign_proc.m"
              }
#line 436 "add_foreign_proc.m"
              {
#line 436 "add_foreign_proc.m"
                MR_Word base;
#line 436 "add_foreign_proc.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "add_foreign_proc.m"
                *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_47 = base;
#line 436 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Spec_40));
#line 436 "add_foreign_proc.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_46));
#line 436 "add_foreign_proc.m"
              }
#line 432 "add_foreign_proc.m"
            }
#line 437 "add_foreign_proc.m"
            break;
#line 437 "add_foreign_proc.m"
          case (MR_Integer) 1:
#line 438 "add_foreign_proc.m"
            *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_47 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_46;
#line 437 "add_foreign_proc.m"
            break;
#line 437 "add_foreign_proc.m"
        }
#line 428 "add_foreign_proc.m"
        *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_45 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_44;
#line 428 "add_foreign_proc.m"
        *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_43 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_42;
#line 428 "add_foreign_proc.m"
      }
#line 440 "add_foreign_proc.m"
    else
#line 441 "add_foreign_proc.m"
      {
#line 441 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__AllProcIds_41;

#line 441 "add_foreign_proc.m"
        {
#line 441 "add_foreign_proc.m"
          hlds__make_hlds__add_foreign_proc__AllProcIds_41 = hlds__hlds_pred__pred_info_all_procids_1_f_0(hlds__make_hlds__add_foreign_proc__PredInfo_36);
        }
#line 442 "add_foreign_proc.m"
        {
#line 442 "add_foreign_proc.m"
          hlds__make_hlds__add_foreign_proc__clauses_info_do_add_pragma_foreign_proc_20_p_0(hlds__make_hlds__add_foreign_proc__Purity_20, hlds__make_hlds__add_foreign_proc__Attributes0_21, hlds__make_hlds__add_foreign_proc__PredId_22, hlds__make_hlds__add_foreign_proc__ProcId_23, hlds__make_hlds__add_foreign_proc__AllProcIds_41, hlds__make_hlds__add_foreign_proc__PVarSet_24, hlds__make_hlds__add_foreign_proc__PVars_25, hlds__make_hlds__add_foreign_proc__OrigArgTypes_26, hlds__make_hlds__add_foreign_proc__PragmaImpl0_27, hlds__make_hlds__add_foreign_proc__Context_28, hlds__make_hlds__add_foreign_proc__PredOrFunc_29, hlds__make_hlds__add_foreign_proc__PredName_30, hlds__make_hlds__add_foreign_proc__Arity_31, hlds__make_hlds__add_foreign_proc__Markers_32, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_0_42, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ClausesInfo_43, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_44, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_45, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_46, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_47);
#line 442 "add_foreign_proc.m"
          return;
        }
#line 441 "add_foreign_proc.m"
      }
#line 422 "add_foreign_proc.m"
  }
#line 411 "add_foreign_proc.m"
}

#line 386 "add_foreign_proc.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_foreign_proc__is_applicable_for_current_backend_2_f_0(
#line 386 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__1_1,
#line 386 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__2_2)
#line 386 "add_foreign_proc.m"
{
#line 389 "add_foreign_proc.m"
  while (MR_TRUE)
#line 389 "add_foreign_proc.m"
    {
#line 389 "add_foreign_proc.m"
      /* tailcall optimized into a loop */
#line 389 "add_foreign_proc.m"
      {
#line 389 "add_foreign_proc.m"
        MR_bool hlds__make_hlds__add_foreign_proc__succeeded;
#line 389 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__3_3;

#line 389 "add_foreign_proc.m"
        if ((hlds__make_hlds__add_foreign_proc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 389 "add_foreign_proc.m"
          hlds__make_hlds__add_foreign_proc__HeadVar__3_3 = (MR_Integer) 1;
#line 389 "add_foreign_proc.m"
        else
#line 390 "add_foreign_proc.m"
          {
#line 390 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__Attr_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__HeadVar__2_2, (MR_Integer) 0)));
#line 390 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__Attrs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__HeadVar__2_2, (MR_Integer) 1)));

#line 397 "add_foreign_proc.m"
#line 397 "add_foreign_proc.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__add_foreign_proc__Attr_6)) {
#line 397 "add_foreign_proc.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 397 "add_foreign_proc.m"
              case (MR_Integer) 0:
#line 396 "add_foreign_proc.m"
                {
#line 396 "add_foreign_proc.m"
                  /* direct tailcall eliminated */
#line 396 "add_foreign_proc.m"
                  {
#line 396 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__2__tmp_copy_2 = hlds__make_hlds__add_foreign_proc__Attrs_7;

#line 396 "add_foreign_proc.m"
                    hlds__make_hlds__add_foreign_proc__HeadVar__2_2 = hlds__make_hlds__add_foreign_proc__HeadVar__2__tmp_copy_2;
#line 396 "add_foreign_proc.m"
                  }
#line 396 "add_foreign_proc.m"
                  continue;
#line 396 "add_foreign_proc.m"
                }
#line 397 "add_foreign_proc.m"
                break;
#line 397 "add_foreign_proc.m"
              case (MR_Integer) 1:
#line 396 "add_foreign_proc.m"
                {
#line 396 "add_foreign_proc.m"
                  /* direct tailcall eliminated */
#line 396 "add_foreign_proc.m"
                  {
#line 396 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__2__tmp_copy_2 = hlds__make_hlds__add_foreign_proc__Attrs_7;

#line 396 "add_foreign_proc.m"
                    hlds__make_hlds__add_foreign_proc__HeadVar__2_2 = hlds__make_hlds__add_foreign_proc__HeadVar__2__tmp_copy_2;
#line 396 "add_foreign_proc.m"
                  }
#line 396 "add_foreign_proc.m"
                  continue;
#line 396 "add_foreign_proc.m"
                }
#line 397 "add_foreign_proc.m"
                break;
#line 397 "add_foreign_proc.m"
              case (MR_Integer) 2:
#line 398 "add_foreign_proc.m"
                {
#line 398 "add_foreign_proc.m"
                  MR_Word hlds__make_hlds__add_foreign_proc__Backend_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_foreign_proc__Attr_6, (MR_Integer) 0)));

#line 399 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__succeeded = (hlds__make_hlds__add_foreign_proc__Backend_10 == hlds__make_hlds__add_foreign_proc__HeadVar__1_1);
#line 401 "add_foreign_proc.m"
                  if (hlds__make_hlds__add_foreign_proc__succeeded)
#line 400 "add_foreign_proc.m"
                    {
#line 400 "add_foreign_proc.m"
                      /* direct tailcall eliminated */
#line 400 "add_foreign_proc.m"
                      {
#line 400 "add_foreign_proc.m"
                        MR_Word hlds__make_hlds__add_foreign_proc__HeadVar__2__tmp_copy_2 = hlds__make_hlds__add_foreign_proc__Attrs_7;

#line 400 "add_foreign_proc.m"
                        hlds__make_hlds__add_foreign_proc__HeadVar__2_2 = hlds__make_hlds__add_foreign_proc__HeadVar__2__tmp_copy_2;
#line 400 "add_foreign_proc.m"
                      }
#line 400 "add_foreign_proc.m"
                      continue;
#line 400 "add_foreign_proc.m"
                    }
#line 401 "add_foreign_proc.m"
                  else
#line 402 "add_foreign_proc.m"
                    hlds__make_hlds__add_foreign_proc__HeadVar__3_3 = (MR_Integer) 0;
#line 398 "add_foreign_proc.m"
                }
#line 397 "add_foreign_proc.m"
                break;
#line 397 "add_foreign_proc.m"
            }
#line 390 "add_foreign_proc.m"
          }
#line 389 "add_foreign_proc.m"
        return hlds__make_hlds__add_foreign_proc__HeadVar__3_3;
#line 389 "add_foreign_proc.m"
      }
#line 389 "add_foreign_proc.m"
      break;
#line 389 "add_foreign_proc.m"
    }
#line 386 "add_foreign_proc.m"
}

#line 121 "add_foreign_proc.m"
static void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_2_13_p_0(
#line 121 "add_foreign_proc.m"
  MR_Integer hlds__make_hlds__add_foreign_proc__Arity_14,
#line 121 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PredTable_15,
#line 121 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__MaybeAttrs_16,
#line 121 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Lang_17,
#line 121 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Name_18,
#line 121 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__PredId_19,
#line 121 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Modes_20,
#line 121 "add_foreign_proc.m"
  MR_String hlds__make_hlds__add_foreign_proc__ExportedName_21,
#line 121 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Context_22,
#line 121 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_45,
#line 121 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_46,
#line 121 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_47,
#line 121 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_48)
#line 121 "add_foreign_proc.m"
{
#line 128 "add_foreign_proc.m"
  {
#line 128 "add_foreign_proc.m"
    MR_bool hlds__make_hlds__add_foreign_proc__succeeded;
#line 128 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__TypeCtorInfo_96_96;
#line 128 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__Preds_25;
#line 128 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__PredInfo_26;
#line 128 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__Procs_27;
#line 128 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__ExistingProcs_28;
#line 130 "add_foreign_proc.m"
    MR_Box hlds__make_hlds__add_foreign_proc__conv0_PredInfo_26;
#line 187 "add_foreign_proc.m"
    MR_Integer hlds__make_hlds__add_foreign_proc__ProcId_29;

#line 129 "add_foreign_proc.m"
    {
#line 129 "add_foreign_proc.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_foreign_proc__PredTable_15, &hlds__make_hlds__add_foreign_proc__Preds_25);
    }
#line 130 "add_foreign_proc.m"
    {
#line 130 "add_foreign_proc.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, hlds__make_hlds__add_foreign_proc__Preds_25, ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredId_19)), &hlds__make_hlds__add_foreign_proc__conv0_PredInfo_26);
    }
#line 130 "add_foreign_proc.m"
    hlds__make_hlds__add_foreign_proc__PredInfo_26 = ((MR_Word) hlds__make_hlds__add_foreign_proc__conv0_PredInfo_26);
#line 131 "add_foreign_proc.m"
    {
#line 131 "add_foreign_proc.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_foreign_proc__PredInfo_26, &hlds__make_hlds__add_foreign_proc__Procs_27);
    }
#line 3325 "hlds.make_hlds.add_foreign_proc.c"
    hlds__make_hlds__add_foreign_proc__TypeCtorInfo_96_96 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 132 "add_foreign_proc.m"
    {
#line 132 "add_foreign_proc.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__make_hlds__add_foreign_proc__TypeCtorInfo_96_96, hlds__make_hlds__add_foreign_proc__Procs_27, &hlds__make_hlds__add_foreign_proc__ExistingProcs_28);
    }
#line 134 "add_foreign_proc.m"
    {
#line 134 "add_foreign_proc.m"
      hlds__make_hlds__add_foreign_proc__succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(hlds__make_hlds__add_foreign_proc__ExistingProcs_28, hlds__make_hlds__add_foreign_proc__Modes_20, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__add_foreign_proc__ProcId_29);
    }
#line 187 "add_foreign_proc.m"
    if (hlds__make_hlds__add_foreign_proc__succeeded)
#line 137 "add_foreign_proc.m"
      {
#line 137 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__ProcInfo0_30;
#line 137 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__MaybeDetism_31;
#line 137 "add_foreign_proc.m"
        MR_Box hlds__make_hlds__add_foreign_proc__conv1_ProcInfo0_30;
#line 156 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__Detism_32;

#line 137 "add_foreign_proc.m"
        {
#line 137 "add_foreign_proc.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__make_hlds__add_foreign_proc__TypeCtorInfo_96_96, hlds__make_hlds__add_foreign_proc__Procs_27, hlds__make_hlds__add_foreign_proc__ProcId_29, &hlds__make_hlds__add_foreign_proc__conv1_ProcInfo0_30);
        }
#line 137 "add_foreign_proc.m"
        hlds__make_hlds__add_foreign_proc__ProcInfo0_30 = ((MR_Word) hlds__make_hlds__add_foreign_proc__conv1_ProcInfo0_30);
#line 138 "add_foreign_proc.m"
        {
#line 138 "add_foreign_proc.m"
          hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(hlds__make_hlds__add_foreign_proc__ProcInfo0_30, &hlds__make_hlds__add_foreign_proc__MaybeDetism_31);
        }
#line 142 "add_foreign_proc.m"
        hlds__make_hlds__add_foreign_proc__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_foreign_proc__MaybeDetism_31)) == (MR_mktag((MR_Integer) 1)));
#line 142 "add_foreign_proc.m"
        if (hlds__make_hlds__add_foreign_proc__succeeded)
#line 142 "add_foreign_proc.m"
          {
#line 142 "add_foreign_proc.m"
            hlds__make_hlds__add_foreign_proc__Detism_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__MaybeDetism_31, (MR_Integer) 0)));
#line 144 "add_foreign_proc.m"
#line 144 "add_foreign_proc.m"
            switch (hlds__make_hlds__add_foreign_proc__Detism_32) {
#line 144 "add_foreign_proc.m"
              default:
#line 144 "add_foreign_proc.m"
                hlds__make_hlds__add_foreign_proc__succeeded = MR_FALSE;
#line 144 "add_foreign_proc.m"
                break;
#line 144 "add_foreign_proc.m"
              case (MR_Integer) 2:
#line 144 "add_foreign_proc.m"
                hlds__make_hlds__add_foreign_proc__succeeded = MR_TRUE;
#line 144 "add_foreign_proc.m"
                break;
#line 144 "add_foreign_proc.m"
              case (MR_Integer) 3:
#line 143 "add_foreign_proc.m"
                hlds__make_hlds__add_foreign_proc__succeeded = MR_TRUE;
#line 144 "add_foreign_proc.m"
                break;
#line 144 "add_foreign_proc.m"
            }
#line 142 "add_foreign_proc.m"
          }
#line 156 "add_foreign_proc.m"
        if (hlds__make_hlds__add_foreign_proc__succeeded)
#line 151 "add_foreign_proc.m"
          {
#line 151 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__Pieces_33;
#line 151 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__Msg_34;
#line 151 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__Spec_35;
#line 151 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_51_51;
#line 151 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_54_54;
#line 151 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_57_57;
#line 151 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_60_60;
#line 151 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_63_63;
#line 151 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_64_64;
#line 151 "add_foreign_proc.m"
            MR_String hlds__make_hlds__add_foreign_proc__V_65_65;
#line 151 "add_foreign_proc.m"
            MR_String hlds__make_hlds__add_foreign_proc__V_66_66;
#line 151 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_71_71;
#line 151 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_72_72;
#line 151 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_76_76;

#line 151 "add_foreign_proc.m"
            {
#line 151 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_66_66 = parse_tree__prog_out__determinism_to_string_1_f_0(hlds__make_hlds__add_foreign_proc__Detism_32);
            }
#line 151 "add_foreign_proc.m"
            {
#line 151 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_65_65 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_foreign_proc__V_66_66, (MR_String) ".");
            }
#line 151 "add_foreign_proc.m"
            {
#line 151 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_64_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 151 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__add_foreign_proc__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_65_65));
#line 151 "add_foreign_proc.m"
            }
#line 151 "add_foreign_proc.m"
            {
#line 151 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 151 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_64_64));
#line 151 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[23])));
#line 151 "add_foreign_proc.m"
            }
#line 150 "add_foreign_proc.m"
            {
#line 150 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 150 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[54])));
#line 150 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_60_60, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_63_63));
#line 150 "add_foreign_proc.m"
            }
#line 149 "add_foreign_proc.m"
            {
#line 149 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 149 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[53])));
#line 149 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_60_60));
#line 149 "add_foreign_proc.m"
            }
#line 148 "add_foreign_proc.m"
            {
#line 148 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[50])));
#line 148 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_54_54, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_57_57));
#line 148 "add_foreign_proc.m"
            }
#line 148 "add_foreign_proc.m"
            {
#line 148 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_51_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[52])));
#line 148 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_54_54));
#line 148 "add_foreign_proc.m"
            }
#line 147 "add_foreign_proc.m"
            {
#line 147 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__Pieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 147 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[47])));
#line 147 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces_33, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_51_51));
#line 147 "add_foreign_proc.m"
            }
#line 152 "add_foreign_proc.m"
            {
#line 152 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 152 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Pieces_33));
#line 152 "add_foreign_proc.m"
            }
#line 152 "add_foreign_proc.m"
            {
#line 152 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 152 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_71_71, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_72_72));
#line 152 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 152 "add_foreign_proc.m"
            }
#line 152 "add_foreign_proc.m"
            {
#line 152 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__Msg_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 152 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_34, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Context_22));
#line 152 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_34, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_71_71));
#line 152 "add_foreign_proc.m"
            }
#line 154 "add_foreign_proc.m"
            {
#line 154 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_76_76, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Msg_34));
#line 154 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 154 "add_foreign_proc.m"
            }
#line 153 "add_foreign_proc.m"
            {
#line 153 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__Spec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 153 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 153 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 153 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_35, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_76_76));
#line 153 "add_foreign_proc.m"
            }
#line 155 "add_foreign_proc.m"
            {
#line 155 "add_foreign_proc.m"
              MR_Word base;
#line 155 "add_foreign_proc.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "add_foreign_proc.m"
              *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_48 = base;
#line 155 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Spec_35));
#line 155 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_47));
#line 155 "add_foreign_proc.m"
            }
#line 151 "add_foreign_proc.m"
            *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_46 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_45;
#line 151 "add_foreign_proc.m"
          }
#line 156 "add_foreign_proc.m"
        else
#line 160 "add_foreign_proc.m"
          {
#line 160 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__Globals_36;
#line 160 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__ForeignLanguages_37;
#line 160 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__ProcInfo_41;
#line 160 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_79_79;

#line 160 "add_foreign_proc.m"
            {
#line 160 "add_foreign_proc.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__add_foreign_proc__Globals_36);
            }
#line 161 "add_foreign_proc.m"
            {
#line 161 "add_foreign_proc.m"
              libs__globals__get_backend_foreign_languages_2_p_0(hlds__make_hlds__add_foreign_proc__Globals_36, &hlds__make_hlds__add_foreign_proc__ForeignLanguages_37);
            }
#line 162 "add_foreign_proc.m"
            {
#line 162 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__succeeded = mercury__list__member_2_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ((MR_Box) (hlds__make_hlds__add_foreign_proc__Lang_17)), hlds__make_hlds__add_foreign_proc__ForeignLanguages_37);
            }
#line 171 "add_foreign_proc.m"
            if (hlds__make_hlds__add_foreign_proc__succeeded)
#line 164 "add_foreign_proc.m"
              {
#line 164 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__PragmaExportedProcs0_38;
#line 164 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__NewExportedProc_39;
#line 164 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__PragmaExportedProcs_40;

#line 163 "add_foreign_proc.m"
                {
#line 163 "add_foreign_proc.m"
                  hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__add_foreign_proc__PragmaExportedProcs0_38);
                }
#line 165 "add_foreign_proc.m"
                {
#line 165 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__NewExportedProc_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 165 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__NewExportedProc_39, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Lang_17));
#line 165 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__NewExportedProc_39, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredId_19));
#line 165 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__NewExportedProc_39, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ProcId_29));
#line 165 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__NewExportedProc_39, 3) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ExportedName_21));
#line 165 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__NewExportedProc_39, 4) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Context_22));
#line 165 "add_foreign_proc.m"
                }
#line 167 "add_foreign_proc.m"
                {
#line 167 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__PragmaExportedProcs_40 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, hlds__make_hlds__add_foreign_proc__PragmaExportedProcs0_38, ((MR_Box) (hlds__make_hlds__add_foreign_proc__NewExportedProc_39)));
                }
#line 169 "add_foreign_proc.m"
                {
#line 169 "add_foreign_proc.m"
                  hlds__hlds_module__module_info_set_pragma_exported_procs_3_p_0(hlds__make_hlds__add_foreign_proc__PragmaExportedProcs_40, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_45, &hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_79_79);
                }
#line 164 "add_foreign_proc.m"
              }
#line 171 "add_foreign_proc.m"
            else
#line 171 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_79_79 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_45;
#line 182 "add_foreign_proc.m"
            {
#line 182 "add_foreign_proc.m"
              hlds__hlds_pred__proc_info_set_has_any_foreign_exports_3_p_0((MR_Integer) 1, hlds__make_hlds__add_foreign_proc__ProcInfo0_30, &hlds__make_hlds__add_foreign_proc__ProcInfo_41);
            }
#line 184 "add_foreign_proc.m"
            {
#line 184 "add_foreign_proc.m"
              hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(hlds__make_hlds__add_foreign_proc__PredId_19, hlds__make_hlds__add_foreign_proc__ProcId_29, hlds__make_hlds__add_foreign_proc__PredInfo_26, hlds__make_hlds__add_foreign_proc__ProcInfo_41, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_79_79, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_46);
            }
#line 160 "add_foreign_proc.m"
            *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_48 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_47;
#line 160 "add_foreign_proc.m"
          }
#line 137 "add_foreign_proc.m"
      }
#line 187 "add_foreign_proc.m"
    else
#line 193 "add_foreign_proc.m"
      {
#line 193 "add_foreign_proc.m"
        if ((hlds__make_hlds__add_foreign_proc__MaybeAttrs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 189 "add_foreign_proc.m"
          {
#line 190 "add_foreign_proc.m"
            {
#line 190 "add_foreign_proc.m"
              hlds__make_hlds__make_hlds_error__undefined_mode_error_6_p_0(hlds__make_hlds__add_foreign_proc__Name_18, hlds__make_hlds__add_foreign_proc__Arity_14, hlds__make_hlds__add_foreign_proc__Context_22, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[6]), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_47, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_48);
            }
#line 189 "add_foreign_proc.m"
          }
#line 193 "add_foreign_proc.m"
        else
#line 194 "add_foreign_proc.m"
          {
#line 194 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__CompilerAttrs_42 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_foreign_proc__MaybeAttrs_16), (MR_Integer) 1);
#line 194 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__AllowExport_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__CompilerAttrs_42, (MR_Integer) 0)));
#line 197 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc___IsMutable_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__CompilerAttrs_42, (MR_Integer) 1)));

#line 200 "add_foreign_proc.m"
#line 200 "add_foreign_proc.m"
            switch (hlds__make_hlds__add_foreign_proc__AllowExport_43) {
#line 200 "add_foreign_proc.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 200 "add_foreign_proc.m"
              case (MR_Integer) 1:
#line 199 "add_foreign_proc.m"
                {
#line 199 "add_foreign_proc.m"
                }
#line 200 "add_foreign_proc.m"
                break;
#line 200 "add_foreign_proc.m"
              case (MR_Integer) 0:
#line 201 "add_foreign_proc.m"
                {
#line 202 "add_foreign_proc.m"
                  {
#line 202 "add_foreign_proc.m"
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_foreign_proc", (MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_pragma_foreign_proc_export_2\'/13", (MR_String) "bad introduced foreign_export pragma");
#line 202 "add_foreign_proc.m"
                    return;
                  }
#line 201 "add_foreign_proc.m"
                }
#line 200 "add_foreign_proc.m"
                break;
#line 200 "add_foreign_proc.m"
            }
#line 194 "add_foreign_proc.m"
            *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_48 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_47;
#line 194 "add_foreign_proc.m"
          }
#line 193 "add_foreign_proc.m"
        *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_46 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_45;
#line 193 "add_foreign_proc.m"
      }
#line 128 "add_foreign_proc.m"
  }
#line 121 "add_foreign_proc.m"
}

#line 24 "add_foreign_proc.m"
void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(
#line 24 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__FPInfo_9,
#line 24 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Status_10,
#line 24 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Context_11,
#line 24 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__MaybeItemNumber_12,
#line 24 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_66,
#line 24 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_67,
#line 24 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_68,
#line 24 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_69)
#line 24 "add_foreign_proc.m"
{
#line 211 "add_foreign_proc.m"
  {
#line 211 "add_foreign_proc.m"
    MR_bool hlds__make_hlds__add_foreign_proc__succeeded;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__TypeCtorInfo_228_228;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__TypeCtorInfo_229_229;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__Attributes0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FPInfo_9, (MR_Integer) 0)));
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__PredName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FPInfo_9, (MR_Integer) 1)));
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__PredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FPInfo_9, (MR_Integer) 2)));
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__PVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FPInfo_9, (MR_Integer) 3)));
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__ProgVarSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FPInfo_9, (MR_Integer) 4)));
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__PragmaImpl_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FPInfo_9, (MR_Integer) 6)));
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__Globals_22;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__MaybeThreadSafe_23;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__ThreadSafe_24;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__Attributes_25;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__ModuleName_26;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__PragmaForeignLanguage_27;
#line 211 "add_foreign_proc.m"
    MR_Integer hlds__make_hlds__add_foreign_proc__Arity_28;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__VeryVerbose_29;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__BackendForeignLangs_31;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__PredTable0_32;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__PredIds_33;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__PredId_34;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__PredTable1_40;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__Preds0_41;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__ClausesInfo0_43;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__ItemNumbers0_44;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__ItemNumbers_45;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__ClausesInfo1_46;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__PredInfo0_47;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__CurrentBackend_48;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__ExtraAttrs_49;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_108_108;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_112_112;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_119_119;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_121_121;
#line 211 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_124_124;
#line 212 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc___InstVarset_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FPInfo_9, (MR_Integer) 5)));
#line 289 "add_foreign_proc.m"
    MR_Box hlds__make_hlds__add_foreign_proc__conv0_STATE_VARIABLE_PredInfo_119_119;
#line 302 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__V_210_210;
#line 302 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__V_211_211;
#line 302 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__V_212_212;
#line 302 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__V_213_213;
#line 302 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__V_214_214;
#line 302 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__V_215_215;
#line 302 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__V_216_216;
#line 302 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__V_217_217;
#line 305 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__V_218_218;
#line 305 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__V_219_219;
#line 305 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__V_220_220;
#line 305 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__V_221_221;
#line 305 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__V_222_222;
#line 305 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__V_223_223;
#line 305 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__V_225_225;
#line 305 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__V_226_226;
#line 305 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__V_224_224;
#line 314 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__V_125_125;

#line 219 "add_foreign_proc.m"
    {
#line 219 "add_foreign_proc.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_66, &hlds__make_hlds__add_foreign_proc__Globals_22);
    }
#line 220 "add_foreign_proc.m"
    {
#line 220 "add_foreign_proc.m"
      libs__globals__get_maybe_thread_safe_2_p_0(hlds__make_hlds__add_foreign_proc__Globals_22, &hlds__make_hlds__add_foreign_proc__MaybeThreadSafe_23);
    }
#line 221 "add_foreign_proc.m"
    {
#line 221 "add_foreign_proc.m"
      hlds__make_hlds__add_foreign_proc__ThreadSafe_24 = parse_tree__prog_data__get_thread_safe_1_f_0(hlds__make_hlds__add_foreign_proc__Attributes0_15);
    }
#line 231 "add_foreign_proc.m"
#line 231 "add_foreign_proc.m"
    switch (hlds__make_hlds__add_foreign_proc__ThreadSafe_24) {
#line 231 "add_foreign_proc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 231 "add_foreign_proc.m"
      case (MR_Integer) 2:
#line 223 "add_foreign_proc.m"
#line 223 "add_foreign_proc.m"
        switch (hlds__make_hlds__add_foreign_proc__MaybeThreadSafe_23) {
#line 223 "add_foreign_proc.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 223 "add_foreign_proc.m"
          case (MR_Integer) 0:
#line 228 "add_foreign_proc.m"
            {
#line 229 "add_foreign_proc.m"
              {
#line 229 "add_foreign_proc.m"
                parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 0, hlds__make_hlds__add_foreign_proc__Attributes0_15, &hlds__make_hlds__add_foreign_proc__Attributes_25);
              }
#line 228 "add_foreign_proc.m"
            }
#line 223 "add_foreign_proc.m"
            break;
#line 223 "add_foreign_proc.m"
          case (MR_Integer) 1:
#line 225 "add_foreign_proc.m"
            {
#line 226 "add_foreign_proc.m"
              {
#line 226 "add_foreign_proc.m"
                parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_foreign_proc__Attributes0_15, &hlds__make_hlds__add_foreign_proc__Attributes_25);
              }
#line 225 "add_foreign_proc.m"
            }
#line 223 "add_foreign_proc.m"
            break;
#line 223 "add_foreign_proc.m"
        }
#line 231 "add_foreign_proc.m"
        break;
#line 231 "add_foreign_proc.m"
      case (MR_Integer) 0:
#line 231 "add_foreign_proc.m"
      case (MR_Integer) 1:
#line 234 "add_foreign_proc.m"
        hlds__make_hlds__add_foreign_proc__Attributes_25 = hlds__make_hlds__add_foreign_proc__Attributes0_15;
#line 231 "add_foreign_proc.m"
        break;
#line 231 "add_foreign_proc.m"
    }
#line 237 "add_foreign_proc.m"
    {
#line 237 "add_foreign_proc.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_66, &hlds__make_hlds__add_foreign_proc__ModuleName_26);
    }
#line 238 "add_foreign_proc.m"
    {
#line 238 "add_foreign_proc.m"
      hlds__make_hlds__add_foreign_proc__PragmaForeignLanguage_27 = parse_tree__prog_data__get_foreign_language_1_f_0(hlds__make_hlds__add_foreign_proc__Attributes_25);
    }
#line 239 "add_foreign_proc.m"
    {
#line 239 "add_foreign_proc.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_var_0, hlds__make_hlds__add_foreign_proc__PVars_18, &hlds__make_hlds__add_foreign_proc__Arity_28);
    }
#line 240 "add_foreign_proc.m"
    {
#line 240 "add_foreign_proc.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_foreign_proc__Globals_22, (MR_Integer) 46, &hlds__make_hlds__add_foreign_proc__VeryVerbose_29);
    }
#line 248 "add_foreign_proc.m"
#line 248 "add_foreign_proc.m"
    switch (hlds__make_hlds__add_foreign_proc__VeryVerbose_29) {
#line 248 "add_foreign_proc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 248 "add_foreign_proc.m"
      case (MR_Integer) 0:
#line 249 "add_foreign_proc.m"
        {
#line 249 "add_foreign_proc.m"
        }
#line 248 "add_foreign_proc.m"
        break;
#line 248 "add_foreign_proc.m"
      case (MR_Integer) 1:
#line 242 "add_foreign_proc.m"
        {
#line 243 "add_foreign_proc.m"
          MR_Word hlds__make_hlds__add_foreign_proc__V_76_76;

#line 244 "add_foreign_proc.m"
          {
#line 244 "add_foreign_proc.m"
            mercury__io__write_string_3_p_0((MR_String) "% Processing \140:- pragma foreign_proc\' for ");
          }
#line 245 "add_foreign_proc.m"
          {
#line 245 "add_foreign_proc.m"
            hlds__make_hlds__add_foreign_proc__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 245 "add_foreign_proc.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_76_76, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredName_16));
#line 245 "add_foreign_proc.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_76_76, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Arity_28));
#line 245 "add_foreign_proc.m"
          }
#line 245 "add_foreign_proc.m"
          {
#line 245 "add_foreign_proc.m"
            parse_tree__prog_out__write_simple_call_id_4_p_0(hlds__make_hlds__add_foreign_proc__PredOrFunc_17, hlds__make_hlds__add_foreign_proc__V_76_76);
          }
#line 246 "add_foreign_proc.m"
          {
#line 246 "add_foreign_proc.m"
            mercury__io__write_string_3_p_0((MR_String) "...\n");
          }
#line 242 "add_foreign_proc.m"
        }
#line 248 "add_foreign_proc.m"
        break;
#line 248 "add_foreign_proc.m"
    }
#line 252 "add_foreign_proc.m"
    {
#line 252 "add_foreign_proc.m"
      libs__globals__get_backend_foreign_languages_2_p_0(hlds__make_hlds__add_foreign_proc__Globals_22, &hlds__make_hlds__add_foreign_proc__BackendForeignLangs_31);
    }
#line 257 "add_foreign_proc.m"
    {
#line 257 "add_foreign_proc.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_66, &hlds__make_hlds__add_foreign_proc__PredTable0_32);
    }
#line 258 "add_foreign_proc.m"
    {
#line 258 "add_foreign_proc.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_foreign_proc__PredTable0_32, (MR_Integer) 0, hlds__make_hlds__add_foreign_proc__PredOrFunc_17, hlds__make_hlds__add_foreign_proc__PredName_16, hlds__make_hlds__add_foreign_proc__Arity_28, &hlds__make_hlds__add_foreign_proc__PredIds_33);
    }
#line 267 "add_foreign_proc.m"
    if ((hlds__make_hlds__add_foreign_proc__PredIds_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 261 "add_foreign_proc.m"
      {
#line 261 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__V_110_110;

#line 264 "add_foreign_proc.m"
        {
#line 264 "add_foreign_proc.m"
          hlds__make_hlds__add_foreign_proc__V_110_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_110_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 264 "add_foreign_proc.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_110_110, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredName_16));
#line 264 "add_foreign_proc.m"
        }
#line 262 "add_foreign_proc.m"
        {
#line 262 "add_foreign_proc.m"
          hlds__make_hlds__add_pred__preds_add_implicit_report_error_14_p_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_66, &hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_108_108, hlds__make_hlds__add_foreign_proc__ModuleName_26, hlds__make_hlds__add_foreign_proc__PredName_16, hlds__make_hlds__add_foreign_proc__Arity_28, hlds__make_hlds__add_foreign_proc__PredOrFunc_17, hlds__make_hlds__add_foreign_proc__Status_10, (MR_Integer) 0, hlds__make_hlds__add_foreign_proc__Context_11, hlds__make_hlds__add_foreign_proc__V_110_110, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[22]), &hlds__make_hlds__add_foreign_proc__PredId_34, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_68, &hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_112_112);
        }
#line 261 "add_foreign_proc.m"
      }
#line 267 "add_foreign_proc.m"
    else
#line 267 "add_foreign_proc.m"
      {
#line 267 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__PredIds_33, (MR_Integer) 1)));
#line 267 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__PredIds_33, (MR_Integer) 0)));

#line 267 "add_foreign_proc.m"
        if ((hlds__make_hlds__add_foreign_proc__V_235_235 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 268 "add_foreign_proc.m"
          {
#line 268 "add_foreign_proc.m"
            hlds__make_hlds__add_foreign_proc__PredId_34 = hlds__make_hlds__add_foreign_proc__V_236_236;
#line 268 "add_foreign_proc.m"
            hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_108_108 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_66;
#line 268 "add_foreign_proc.m"
            hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_112_112 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_68;
#line 268 "add_foreign_proc.m"
          }
#line 267 "add_foreign_proc.m"
        else
#line 270 "add_foreign_proc.m"
          {
#line 270 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__AmbiPieces_37;
#line 270 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__AmbiMsg_38;
#line 270 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__AmbiSpec_39;
#line 270 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_84_84;
#line 270 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_85_85;
#line 270 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_86_86;
#line 270 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_99_99;
#line 270 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_100_100;
#line 270 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_104_104;

#line 270 "add_foreign_proc.m"
            hlds__make_hlds__add_foreign_proc__PredId_34 = hlds__make_hlds__add_foreign_proc__V_236_236;
#line 276 "add_foreign_proc.m"
            {
#line 276 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 276 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_86_86, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredOrFunc_17));
#line 276 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_86_86, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredName_16));
#line 276 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_86_86, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Arity_28));
#line 276 "add_foreign_proc.m"
            }
#line 276 "add_foreign_proc.m"
            {
#line 276 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 276 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_85_85, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_86_86));
#line 276 "add_foreign_proc.m"
            }
#line 276 "add_foreign_proc.m"
            {
#line 276 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_85_85));
#line 276 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[29])));
#line 276 "add_foreign_proc.m"
            }
#line 275 "add_foreign_proc.m"
            {
#line 275 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__AmbiPieces_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 275 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__AmbiPieces_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[46])));
#line 275 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__AmbiPieces_37, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_84_84));
#line 275 "add_foreign_proc.m"
            }
#line 278 "add_foreign_proc.m"
            {
#line 278 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 278 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__AmbiPieces_37));
#line 278 "add_foreign_proc.m"
            }
#line 278 "add_foreign_proc.m"
            {
#line 278 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_100_100));
#line 278 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "add_foreign_proc.m"
            }
#line 278 "add_foreign_proc.m"
            {
#line 278 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__AmbiMsg_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 278 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__AmbiMsg_38, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Context_11));
#line 278 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__AmbiMsg_38, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_99_99));
#line 278 "add_foreign_proc.m"
            }
#line 280 "add_foreign_proc.m"
            {
#line 280 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_104_104, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__AmbiMsg_38));
#line 280 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 280 "add_foreign_proc.m"
            }
#line 279 "add_foreign_proc.m"
            {
#line 279 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__AmbiSpec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 279 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__AmbiSpec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 279 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__AmbiSpec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 279 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__AmbiSpec_39, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_104_104));
#line 279 "add_foreign_proc.m"
            }
#line 281 "add_foreign_proc.m"
            {
#line 281 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_112_112, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__AmbiSpec_39));
#line 281 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_112_112, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_68));
#line 281 "add_foreign_proc.m"
            }
#line 270 "add_foreign_proc.m"
            hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_108_108 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_66;
#line 270 "add_foreign_proc.m"
          }
#line 267 "add_foreign_proc.m"
      }
#line 286 "add_foreign_proc.m"
    {
#line 286 "add_foreign_proc.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_108_108, &hlds__make_hlds__add_foreign_proc__PredTable1_40);
    }
#line 287 "add_foreign_proc.m"
    {
#line 287 "add_foreign_proc.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__add_foreign_proc__PredTable1_40, &hlds__make_hlds__add_foreign_proc__Preds0_41);
    }
#line 4210 "hlds.make_hlds.add_foreign_proc.c"
    hlds__make_hlds__add_foreign_proc__TypeCtorInfo_228_228 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 4212 "hlds.make_hlds.add_foreign_proc.c"
    hlds__make_hlds__add_foreign_proc__TypeCtorInfo_229_229 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 289 "add_foreign_proc.m"
    {
#line 289 "add_foreign_proc.m"
      mercury__map__lookup_3_p_0(hlds__make_hlds__add_foreign_proc__TypeCtorInfo_228_228, hlds__make_hlds__add_foreign_proc__TypeCtorInfo_229_229, hlds__make_hlds__add_foreign_proc__Preds0_41, ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredId_34)), &hlds__make_hlds__add_foreign_proc__conv0_STATE_VARIABLE_PredInfo_119_119);
    }
#line 289 "add_foreign_proc.m"
    hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_119_119 = ((MR_Word) hlds__make_hlds__add_foreign_proc__conv0_STATE_VARIABLE_PredInfo_119_119);
#line 294 "add_foreign_proc.m"
    hlds__make_hlds__add_foreign_proc__succeeded = (hlds__make_hlds__add_foreign_proc__Status_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 296 "add_foreign_proc.m"
    if (hlds__make_hlds__add_foreign_proc__succeeded)
#line 295 "add_foreign_proc.m"
      {
#line 295 "add_foreign_proc.m"
        {
#line 295 "add_foreign_proc.m"
          hlds__hlds_pred__pred_info_set_import_status_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_119_119, &hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_121_121);
        }
#line 295 "add_foreign_proc.m"
      }
#line 296 "add_foreign_proc.m"
    else
#line 296 "add_foreign_proc.m"
      hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_121_121 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_119_119;
#line 301 "add_foreign_proc.m"
    {
#line 301 "add_foreign_proc.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_121_121, &hlds__make_hlds__add_foreign_proc__ClausesInfo0_43);
    }
#line 302 "add_foreign_proc.m"
    hlds__make_hlds__add_foreign_proc__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 0)));
#line 302 "add_foreign_proc.m"
    hlds__make_hlds__add_foreign_proc__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 1)));
#line 302 "add_foreign_proc.m"
    hlds__make_hlds__add_foreign_proc__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 2)));
#line 302 "add_foreign_proc.m"
    hlds__make_hlds__add_foreign_proc__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 3)));
#line 302 "add_foreign_proc.m"
    hlds__make_hlds__add_foreign_proc__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 4)));
#line 302 "add_foreign_proc.m"
    hlds__make_hlds__add_foreign_proc__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 5)));
#line 302 "add_foreign_proc.m"
    hlds__make_hlds__add_foreign_proc__ItemNumbers0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 6)));
#line 302 "add_foreign_proc.m"
    hlds__make_hlds__add_foreign_proc__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 7)));
#line 302 "add_foreign_proc.m"
    hlds__make_hlds__add_foreign_proc__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 8)));
#line 303 "add_foreign_proc.m"
    {
#line 303 "add_foreign_proc.m"
      hlds__hlds_clauses__add_clause_item_number_5_p_0(hlds__make_hlds__add_foreign_proc__MaybeItemNumber_12, hlds__make_hlds__add_foreign_proc__Context_11, (MR_Integer) 1, hlds__make_hlds__add_foreign_proc__ItemNumbers0_44, &hlds__make_hlds__add_foreign_proc__ItemNumbers_45);
    }
#line 305 "add_foreign_proc.m"
    hlds__make_hlds__add_foreign_proc__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 0)));
#line 305 "add_foreign_proc.m"
    hlds__make_hlds__add_foreign_proc__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 1)));
#line 305 "add_foreign_proc.m"
    hlds__make_hlds__add_foreign_proc__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 2)));
#line 305 "add_foreign_proc.m"
    hlds__make_hlds__add_foreign_proc__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 3)));
#line 305 "add_foreign_proc.m"
    hlds__make_hlds__add_foreign_proc__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 4)));
#line 305 "add_foreign_proc.m"
    hlds__make_hlds__add_foreign_proc__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 5)));
#line 305 "add_foreign_proc.m"
    hlds__make_hlds__add_foreign_proc__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 6)));
#line 305 "add_foreign_proc.m"
    hlds__make_hlds__add_foreign_proc__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 7)));
#line 305 "add_foreign_proc.m"
    hlds__make_hlds__add_foreign_proc__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo0_43, (MR_Integer) 8)));
#line 305 "add_foreign_proc.m"
    {
#line 305 "add_foreign_proc.m"
      hlds__make_hlds__add_foreign_proc__ClausesInfo1_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 305 "add_foreign_proc.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo1_46, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_218_218));
#line 305 "add_foreign_proc.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo1_46, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_219_219));
#line 305 "add_foreign_proc.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo1_46, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_220_220));
#line 305 "add_foreign_proc.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo1_46, 3) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_221_221));
#line 305 "add_foreign_proc.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo1_46, 4) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_222_222));
#line 305 "add_foreign_proc.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo1_46, 5) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_223_223));
#line 305 "add_foreign_proc.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo1_46, 6) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__ItemNumbers_45));
#line 305 "add_foreign_proc.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo1_46, 7) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_225_225));
#line 305 "add_foreign_proc.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__ClausesInfo1_46, 8) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_226_226));
#line 305 "add_foreign_proc.m"
    }
#line 306 "add_foreign_proc.m"
    {
#line 306 "add_foreign_proc.m"
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_foreign_proc__ClausesInfo1_46, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_121_121, &hlds__make_hlds__add_foreign_proc__PredInfo0_47);
    }
#line 307 "add_foreign_proc.m"
    {
#line 307 "add_foreign_proc.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__make_hlds__add_foreign_proc__PredId_34, hlds__make_hlds__add_foreign_proc__PredInfo0_47, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_108_108, &hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_124_124);
    }
#line 311 "add_foreign_proc.m"
    {
#line 311 "add_foreign_proc.m"
      hlds__make_hlds__add_foreign_proc__CurrentBackend_48 = parse_tree__prog_data__lookup_current_backend_1_f_0(hlds__make_hlds__add_foreign_proc__Globals_22);
    }
#line 312 "add_foreign_proc.m"
    {
#line 312 "add_foreign_proc.m"
      hlds__make_hlds__add_foreign_proc__ExtraAttrs_49 = parse_tree__prog_data__get_extra_attributes_1_f_0(hlds__make_hlds__add_foreign_proc__Attributes_25);
    }
#line 314 "add_foreign_proc.m"
    {
#line 314 "add_foreign_proc.m"
      hlds__make_hlds__add_foreign_proc__V_125_125 = hlds__make_hlds__add_foreign_proc__is_applicable_for_current_backend_2_f_0(hlds__make_hlds__add_foreign_proc__CurrentBackend_48, hlds__make_hlds__add_foreign_proc__ExtraAttrs_49);
    }
#line 314 "add_foreign_proc.m"
    hlds__make_hlds__add_foreign_proc__succeeded = (hlds__make_hlds__add_foreign_proc__V_125_125 == (MR_Integer) 0);
#line 318 "add_foreign_proc.m"
    if (hlds__make_hlds__add_foreign_proc__succeeded)
#line 317 "add_foreign_proc.m"
      {
#line 317 "add_foreign_proc.m"
        *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_69 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_112_112;
#line 317 "add_foreign_proc.m"
        *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_67 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_124_124;
#line 317 "add_foreign_proc.m"
      }
#line 318 "add_foreign_proc.m"
    else
#line 328 "add_foreign_proc.m"
      {
#line 319 "add_foreign_proc.m"
        {
#line 319 "add_foreign_proc.m"
          hlds__make_hlds__add_foreign_proc__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__make_hlds__add_foreign_proc__PredInfo0_47);
        }
#line 328 "add_foreign_proc.m"
        if (hlds__make_hlds__add_foreign_proc__succeeded)
#line 324 "add_foreign_proc.m"
          {
#line 324 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__Pieces_50;
#line 324 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__Msg_51;
#line 324 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__Spec_52;
#line 324 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_128_128;
#line 324 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_131_131;
#line 324 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_134_134;
#line 324 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_135_135;
#line 324 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_136_136;
#line 324 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_143_143;
#line 324 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_144_144;
#line 324 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_148_148;

#line 323 "add_foreign_proc.m"
            {
#line 323 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 323 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_136_136, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredOrFunc_17));
#line 323 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_136_136, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredName_16));
#line 323 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_136_136, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Arity_28));
#line 323 "add_foreign_proc.m"
            }
#line 323 "add_foreign_proc.m"
            {
#line 323 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_135_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_135_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 323 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_135_135, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_136_136));
#line 323 "add_foreign_proc.m"
            }
#line 323 "add_foreign_proc.m"
            {
#line 323 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_134_134, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_135_135));
#line 323 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[25])));
#line 323 "add_foreign_proc.m"
            }
#line 322 "add_foreign_proc.m"
            {
#line 322 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_131_131, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[49])));
#line 322 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_131_131, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_134_134));
#line 322 "add_foreign_proc.m"
            }
#line 321 "add_foreign_proc.m"
            {
#line 321 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_128_128, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[48])));
#line 321 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_128_128, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_131_131));
#line 321 "add_foreign_proc.m"
            }
#line 321 "add_foreign_proc.m"
            {
#line 321 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__Pieces_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[47])));
#line 321 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces_50, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_128_128));
#line 321 "add_foreign_proc.m"
            }
#line 325 "add_foreign_proc.m"
            {
#line 325 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_144_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 325 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_144_144, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Pieces_50));
#line 325 "add_foreign_proc.m"
            }
#line 325 "add_foreign_proc.m"
            {
#line 325 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_143_143, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_144_144));
#line 325 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "add_foreign_proc.m"
            }
#line 325 "add_foreign_proc.m"
            {
#line 325 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__Msg_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 325 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_51, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Context_11));
#line 325 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_51, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_143_143));
#line 325 "add_foreign_proc.m"
            }
#line 326 "add_foreign_proc.m"
            {
#line 326 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_148_148, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Msg_51));
#line 326 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_148_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 326 "add_foreign_proc.m"
            }
#line 326 "add_foreign_proc.m"
            {
#line 326 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__Spec_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 326 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 326 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 326 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_52, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_148_148));
#line 326 "add_foreign_proc.m"
            }
#line 327 "add_foreign_proc.m"
            {
#line 327 "add_foreign_proc.m"
              MR_Word base;
#line 327 "add_foreign_proc.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "add_foreign_proc.m"
              *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_69 = base;
#line 327 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Spec_52));
#line 327 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_112_112));
#line 327 "add_foreign_proc.m"
            }
#line 324 "add_foreign_proc.m"
            *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_67 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_124_124;
#line 324 "add_foreign_proc.m"
          }
#line 328 "add_foreign_proc.m"
        else
#line 336 "add_foreign_proc.m"
          {
#line 331 "add_foreign_proc.m"
            {
#line 331 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__succeeded = mercury__list__member_2_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ((MR_Box) (hlds__make_hlds__add_foreign_proc__PragmaForeignLanguage_27)), hlds__make_hlds__add_foreign_proc__BackendForeignLangs_31);
            }
#line 331 "add_foreign_proc.m"
            hlds__make_hlds__add_foreign_proc__succeeded = !(hlds__make_hlds__add_foreign_proc__succeeded);
#line 336 "add_foreign_proc.m"
            if (hlds__make_hlds__add_foreign_proc__succeeded)
#line 334 "add_foreign_proc.m"
              {
#line 334 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_152_190;

#line 333 "add_foreign_proc.m"
                {
#line 333 "add_foreign_proc.m"
                  hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), hlds__make_hlds__add_foreign_proc__PredInfo0_47, &hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_152_190);
                }
#line 335 "add_foreign_proc.m"
                {
#line 335 "add_foreign_proc.m"
                  hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__make_hlds__add_foreign_proc__PredId_34, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_152_190, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_124_124, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_67);
                }
#line 334 "add_foreign_proc.m"
                *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_69 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_112_112;
#line 334 "add_foreign_proc.m"
              }
#line 336 "add_foreign_proc.m"
            else
#line 338 "add_foreign_proc.m"
              {
#line 338 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__Procs_53;
#line 338 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__ExistingProcs_54;
#line 338 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__Modes_55;
#line 338 "add_foreign_proc.m"
                MR_Word hlds__make_hlds__add_foreign_proc__SimpleCallId_56;
#line 373 "add_foreign_proc.m"
                MR_Integer hlds__make_hlds__add_foreign_proc__ProcId_57;

#line 338 "add_foreign_proc.m"
                {
#line 338 "add_foreign_proc.m"
                  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_foreign_proc__PredInfo0_47, &hlds__make_hlds__add_foreign_proc__Procs_53);
                }
#line 339 "add_foreign_proc.m"
                {
#line 339 "add_foreign_proc.m"
                  mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__make_hlds__add_foreign_proc__Procs_53, &hlds__make_hlds__add_foreign_proc__ExistingProcs_54);
                }
#line 340 "add_foreign_proc.m"
                {
#line 340 "add_foreign_proc.m"
                  parse_tree__prog_data__pragma_get_modes_2_p_0(hlds__make_hlds__add_foreign_proc__PVars_18, &hlds__make_hlds__add_foreign_proc__Modes_55);
                }
#line 341 "add_foreign_proc.m"
                {
#line 341 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__SimpleCallId_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 341 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__SimpleCallId_56, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredOrFunc_17));
#line 341 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__SimpleCallId_56, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredName_16));
#line 341 "add_foreign_proc.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__SimpleCallId_56, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Arity_28));
#line 341 "add_foreign_proc.m"
                }
#line 353 "add_foreign_proc.m"
                {
#line 353 "add_foreign_proc.m"
                  hlds__make_hlds__add_foreign_proc__succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(hlds__make_hlds__add_foreign_proc__ExistingProcs_54, hlds__make_hlds__add_foreign_proc__Modes_55, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_124_124, &hlds__make_hlds__add_foreign_proc__ProcId_57);
                }
#line 373 "add_foreign_proc.m"
                if (hlds__make_hlds__add_foreign_proc__succeeded)
#line 356 "add_foreign_proc.m"
                  {
#line 356 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__ArgTypes_58;
#line 356 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__Purity_59;
#line 356 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__Markers_60;
#line 356 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__ClausesInfo_61;
#line 356 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__Preds_62;
#line 356 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__PredTable_63;
#line 356 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__ArgInfoBox_64;
#line 356 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__ArgInfo_65;
#line 356 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_154_154;
#line 356 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_155_155;
#line 356 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_156_156;
#line 356 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_152_191;

#line 356 "add_foreign_proc.m"
                    {
#line 356 "add_foreign_proc.m"
                      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__make_hlds__add_foreign_proc__PredInfo0_47, &hlds__make_hlds__add_foreign_proc__ArgTypes_58);
                    }
#line 357 "add_foreign_proc.m"
                    {
#line 357 "add_foreign_proc.m"
                      hlds__hlds_pred__pred_info_get_purity_2_p_0(hlds__make_hlds__add_foreign_proc__PredInfo0_47, &hlds__make_hlds__add_foreign_proc__Purity_59);
                    }
#line 358 "add_foreign_proc.m"
                    {
#line 358 "add_foreign_proc.m"
                      hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_foreign_proc__PredInfo0_47, &hlds__make_hlds__add_foreign_proc__Markers_60);
                    }
#line 359 "add_foreign_proc.m"
                    {
#line 359 "add_foreign_proc.m"
                      hlds__make_hlds__add_foreign_proc__clauses_info_add_pragma_foreign_proc_19_p_0(hlds__make_hlds__add_foreign_proc__Purity_59, hlds__make_hlds__add_foreign_proc__Attributes_25, hlds__make_hlds__add_foreign_proc__PredId_34, hlds__make_hlds__add_foreign_proc__ProcId_57, hlds__make_hlds__add_foreign_proc__ProgVarSet_19, hlds__make_hlds__add_foreign_proc__PVars_18, hlds__make_hlds__add_foreign_proc__ArgTypes_58, hlds__make_hlds__add_foreign_proc__PragmaImpl_21, hlds__make_hlds__add_foreign_proc__Context_11, hlds__make_hlds__add_foreign_proc__PredOrFunc_17, hlds__make_hlds__add_foreign_proc__PredName_16, hlds__make_hlds__add_foreign_proc__Arity_28, hlds__make_hlds__add_foreign_proc__Markers_60, hlds__make_hlds__add_foreign_proc__ClausesInfo1_46, &hlds__make_hlds__add_foreign_proc__ClausesInfo_61, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_124_124, &hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_154_154, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_112_112, &hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_155_155);
                    }
#line 363 "add_foreign_proc.m"
                    {
#line 363 "add_foreign_proc.m"
                      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_foreign_proc__ClausesInfo_61, hlds__make_hlds__add_foreign_proc__PredInfo0_47, &hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_156_156);
                    }
#line 364 "add_foreign_proc.m"
                    {
#line 364 "add_foreign_proc.m"
                      hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_156_156, &hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_152_191);
                    }
#line 365 "add_foreign_proc.m"
                    {
#line 365 "add_foreign_proc.m"
                      mercury__map__det_update_4_p_0(hlds__make_hlds__add_foreign_proc__TypeCtorInfo_228_228, hlds__make_hlds__add_foreign_proc__TypeCtorInfo_229_229, ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredId_34)), ((MR_Box) (hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_PredInfo_152_191)), hlds__make_hlds__add_foreign_proc__Preds0_41, &hlds__make_hlds__add_foreign_proc__Preds_62);
                    }
#line 366 "add_foreign_proc.m"
                    {
#line 366 "add_foreign_proc.m"
                      hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__add_foreign_proc__Preds_62, hlds__make_hlds__add_foreign_proc__PredTable1_40, &hlds__make_hlds__add_foreign_proc__PredTable_63);
                    }
#line 367 "add_foreign_proc.m"
                    {
#line 367 "add_foreign_proc.m"
                      hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_foreign_proc__PredTable_63, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_154_154, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_67);
                    }
#line 368 "add_foreign_proc.m"
                    {
#line 368 "add_foreign_proc.m"
                      parse_tree__prog_data__pragma_get_var_infos_2_p_0(hlds__make_hlds__add_foreign_proc__PVars_18, &hlds__make_hlds__add_foreign_proc__ArgInfoBox_64);
                    }
#line 369 "add_foreign_proc.m"
                    {
#line 369 "add_foreign_proc.m"
                      mercury__assoc_list__keys_2_p_0((MR_Word) &hlds__make_hlds__add_foreign_proc_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_box_policy_0, hlds__make_hlds__add_foreign_proc__ArgInfoBox_64, &hlds__make_hlds__add_foreign_proc__ArgInfo_65);
                    }
#line 370 "add_foreign_proc.m"
                    {
#line 370 "add_foreign_proc.m"
                      hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0(*hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_67, hlds__make_hlds__add_foreign_proc__PragmaImpl_21, hlds__make_hlds__add_foreign_proc__PragmaForeignLanguage_27, hlds__make_hlds__add_foreign_proc__ArgInfo_65, hlds__make_hlds__add_foreign_proc__Context_11, hlds__make_hlds__add_foreign_proc__SimpleCallId_56, hlds__make_hlds__add_foreign_proc__PredId_34, hlds__make_hlds__add_foreign_proc__ProcId_57, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_155_155, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_69);
#line 370 "add_foreign_proc.m"
                      return;
                    }
#line 356 "add_foreign_proc.m"
                  }
#line 373 "add_foreign_proc.m"
                else
#line 377 "add_foreign_proc.m"
                  {
#line 377 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__V_163_163;
#line 377 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__V_166_166;
#line 377 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__V_169_169;
#line 377 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__V_172_172;
#line 377 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__V_173_173;
#line 377 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__V_180_180;
#line 377 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__V_181_181;
#line 377 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__V_185_185;
#line 377 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__Pieces_193;
#line 377 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__Msg_194;
#line 377 "add_foreign_proc.m"
                    MR_Word hlds__make_hlds__add_foreign_proc__Spec_195;

#line 377 "add_foreign_proc.m"
                    {
#line 377 "add_foreign_proc.m"
                      hlds__make_hlds__add_foreign_proc__V_173_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_173_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 377 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_173_173, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__SimpleCallId_56));
#line 377 "add_foreign_proc.m"
                    }
#line 377 "add_foreign_proc.m"
                    {
#line 377 "add_foreign_proc.m"
                      hlds__make_hlds__add_foreign_proc__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_172_172, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_173_173));
#line 377 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_172_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[25])));
#line 377 "add_foreign_proc.m"
                    }
#line 376 "add_foreign_proc.m"
                    {
#line 376 "add_foreign_proc.m"
                      hlds__make_hlds__add_foreign_proc__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_169_169, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[51])));
#line 376 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_169_169, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_172_172));
#line 376 "add_foreign_proc.m"
                    }
#line 375 "add_foreign_proc.m"
                    {
#line 375 "add_foreign_proc.m"
                      hlds__make_hlds__add_foreign_proc__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 375 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_166_166, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[50])));
#line 375 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_166_166, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_169_169));
#line 375 "add_foreign_proc.m"
                    }
#line 375 "add_foreign_proc.m"
                    {
#line 375 "add_foreign_proc.m"
                      hlds__make_hlds__add_foreign_proc__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 375 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_163_163, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[48])));
#line 375 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_163_163, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_166_166));
#line 375 "add_foreign_proc.m"
                    }
#line 374 "add_foreign_proc.m"
                    {
#line 374 "add_foreign_proc.m"
                      hlds__make_hlds__add_foreign_proc__Pieces_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 374 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces_193, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[47])));
#line 374 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__Pieces_193, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_163_163));
#line 374 "add_foreign_proc.m"
                    }
#line 378 "add_foreign_proc.m"
                    {
#line 378 "add_foreign_proc.m"
                      hlds__make_hlds__add_foreign_proc__V_181_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 378 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_181_181, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Pieces_193));
#line 378 "add_foreign_proc.m"
                    }
#line 378 "add_foreign_proc.m"
                    {
#line 378 "add_foreign_proc.m"
                      hlds__make_hlds__add_foreign_proc__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 378 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_180_180, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_181_181));
#line 378 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_180_180, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 378 "add_foreign_proc.m"
                    }
#line 378 "add_foreign_proc.m"
                    {
#line 378 "add_foreign_proc.m"
                      hlds__make_hlds__add_foreign_proc__Msg_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 378 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_194, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Context_11));
#line 378 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_194, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_180_180));
#line 378 "add_foreign_proc.m"
                    }
#line 380 "add_foreign_proc.m"
                    {
#line 380 "add_foreign_proc.m"
                      hlds__make_hlds__add_foreign_proc__V_185_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_185_185, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Msg_194));
#line 380 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_185_185, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 380 "add_foreign_proc.m"
                    }
#line 379 "add_foreign_proc.m"
                    {
#line 379 "add_foreign_proc.m"
                      hlds__make_hlds__add_foreign_proc__Spec_195 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 379 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_195, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_195, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 379 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_195, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_185_185));
#line 379 "add_foreign_proc.m"
                    }
#line 381 "add_foreign_proc.m"
                    {
#line 381 "add_foreign_proc.m"
                      MR_Word base;
#line 381 "add_foreign_proc.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "add_foreign_proc.m"
                      *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_69 = base;
#line 381 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Spec_195));
#line 381 "add_foreign_proc.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_112_112));
#line 381 "add_foreign_proc.m"
                    }
#line 377 "add_foreign_proc.m"
                    *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_67 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_124_124;
#line 377 "add_foreign_proc.m"
                  }
#line 338 "add_foreign_proc.m"
              }
#line 336 "add_foreign_proc.m"
          }
#line 328 "add_foreign_proc.m"
      }
#line 211 "add_foreign_proc.m"
  }
#line 24 "add_foreign_proc.m"
}

#line 108 "add_foreign_proc.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0_1(
#line 108 "add_foreign_proc.m"
  MR_Box hlds__make_hlds__add_foreign_proc__closure_arg,
#line 108 "add_foreign_proc.m"
  MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_1)
#line 108 "add_foreign_proc.m"
{
#line 108 "add_foreign_proc.m"
  {
#line 108 "add_foreign_proc.m"
    MR_Box hlds__make_hlds__add_foreign_proc__wrapper_arg_2;
#line 108 "add_foreign_proc.m"
    MR_Box hlds__make_hlds__add_foreign_proc__closure = hlds__make_hlds__add_foreign_proc__closure_arg;
#line 108 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__conv0_HeadVar__4_4;

#line 108 "add_foreign_proc.m"
    {
#line 108 "add_foreign_proc.m"
      hlds__make_hlds__add_foreign_proc__conv0_HeadVar__4_4 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_foreign_proc__wrapper_arg_1));
    }
#line 108 "add_foreign_proc.m"
    hlds__make_hlds__add_foreign_proc__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_foreign_proc__conv0_HeadVar__4_4));
#line 108 "add_foreign_proc.m"
    return hlds__make_hlds__add_foreign_proc__wrapper_arg_2;
#line 108 "add_foreign_proc.m"
  }
#line 108 "add_foreign_proc.m"
}

#line 19 "add_foreign_proc.m"
void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0(
#line 19 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__MaybeAttrs_8,
#line 19 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__FPEInfo_9,
#line 19 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__Context_10,
#line 19 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_36,
#line 19 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_37,
#line 19 "add_foreign_proc.m"
  MR_Word hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_38,
#line 19 "add_foreign_proc.m"
  MR_Word * hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_39)
#line 19 "add_foreign_proc.m"
{
#line 68 "add_foreign_proc.m"
  {
#line 68 "add_foreign_proc.m"
    MR_bool hlds__make_hlds__add_foreign_proc__succeeded;
#line 68 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__Lang_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FPEInfo_9, (MR_Integer) 0)));
#line 68 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__PrednameModesPF_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FPEInfo_9, (MR_Integer) 1)));
#line 68 "add_foreign_proc.m"
    MR_String hlds__make_hlds__add_foreign_proc__ExportedName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__FPEInfo_9, (MR_Integer) 2)));
#line 68 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__PrednameModesPF_14, (MR_Integer) 0)));
#line 68 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__Modes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__PrednameModesPF_14, (MR_Integer) 1)));
#line 68 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__PredOrFunc_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__PrednameModesPF_14, (MR_Integer) 2)));
#line 68 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__PredTable_19;
#line 68 "add_foreign_proc.m"
    MR_Integer hlds__make_hlds__add_foreign_proc__Arity_20;
#line 68 "add_foreign_proc.m"
    MR_Word hlds__make_hlds__add_foreign_proc__PredIds_21;

#line 72 "add_foreign_proc.m"
    {
#line 72 "add_foreign_proc.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_36, &hlds__make_hlds__add_foreign_proc__PredTable_19);
    }
#line 73 "add_foreign_proc.m"
    {
#line 73 "add_foreign_proc.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_foreign_proc__Modes_17, &hlds__make_hlds__add_foreign_proc__Arity_20);
    }
#line 74 "add_foreign_proc.m"
    {
#line 74 "add_foreign_proc.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_foreign_proc__PredTable_19, (MR_Integer) 1, hlds__make_hlds__add_foreign_proc__PredOrFunc_18, hlds__make_hlds__add_foreign_proc__Name_16, hlds__make_hlds__add_foreign_proc__Arity_20, &hlds__make_hlds__add_foreign_proc__PredIds_21);
    }
#line 96 "add_foreign_proc.m"
    if ((hlds__make_hlds__add_foreign_proc__PredIds_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 77 "add_foreign_proc.m"
      {
#line 83 "add_foreign_proc.m"
        if ((hlds__make_hlds__add_foreign_proc__MaybeAttrs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 79 "add_foreign_proc.m"
          {
#line 80 "add_foreign_proc.m"
            {
#line 80 "add_foreign_proc.m"
              hlds__make_hlds__make_hlds_error__undefined_pred_or_func_error_6_p_0(hlds__make_hlds__add_foreign_proc__Name_16, hlds__make_hlds__add_foreign_proc__Arity_20, hlds__make_hlds__add_foreign_proc__Context_10, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[6]), hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_38, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_39);
            }
#line 79 "add_foreign_proc.m"
          }
#line 83 "add_foreign_proc.m"
        else
#line 84 "add_foreign_proc.m"
          {
#line 84 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__CompilerAttrs_22 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_foreign_proc__MaybeAttrs_8), (MR_Integer) 1);
#line 84 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__AllowExport_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__CompilerAttrs_22, (MR_Integer) 0)));
#line 87 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc___IsMutable_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__CompilerAttrs_22, (MR_Integer) 1)));

#line 90 "add_foreign_proc.m"
#line 90 "add_foreign_proc.m"
            switch (hlds__make_hlds__add_foreign_proc__AllowExport_23) {
#line 90 "add_foreign_proc.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 90 "add_foreign_proc.m"
              case (MR_Integer) 1:
#line 89 "add_foreign_proc.m"
                {
#line 89 "add_foreign_proc.m"
                }
#line 90 "add_foreign_proc.m"
                break;
#line 90 "add_foreign_proc.m"
              case (MR_Integer) 0:
#line 91 "add_foreign_proc.m"
                {
#line 92 "add_foreign_proc.m"
                  {
#line 92 "add_foreign_proc.m"
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_foreign_proc", (MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_pragma_foreign_proc_export\'/7", (MR_String) "bad introduced foreign_export pragma");
#line 92 "add_foreign_proc.m"
                    return;
                  }
#line 91 "add_foreign_proc.m"
                }
#line 90 "add_foreign_proc.m"
                break;
#line 90 "add_foreign_proc.m"
            }
#line 84 "add_foreign_proc.m"
            *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_39 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_38;
#line 84 "add_foreign_proc.m"
          }
#line 77 "add_foreign_proc.m"
        *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_36;
#line 77 "add_foreign_proc.m"
      }
#line 96 "add_foreign_proc.m"
    else
#line 96 "add_foreign_proc.m"
      {
#line 96 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__PredIds_21, (MR_Integer) 1)));
#line 96 "add_foreign_proc.m"
        MR_Word hlds__make_hlds__add_foreign_proc__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__PredIds_21, (MR_Integer) 0)));

#line 96 "add_foreign_proc.m"
        if ((hlds__make_hlds__add_foreign_proc__V_107_107 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 98 "add_foreign_proc.m"
          {
#line 98 "add_foreign_proc.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_2_13_p_0(hlds__make_hlds__add_foreign_proc__Arity_20, hlds__make_hlds__add_foreign_proc__PredTable_19, hlds__make_hlds__add_foreign_proc__MaybeAttrs_8, hlds__make_hlds__add_foreign_proc__Lang_13, hlds__make_hlds__add_foreign_proc__Name_16, hlds__make_hlds__add_foreign_proc__V_108_108, hlds__make_hlds__add_foreign_proc__Modes_17, hlds__make_hlds__add_foreign_proc__ExportedName_15, hlds__make_hlds__add_foreign_proc__Context_10, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_36, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_37, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_38, hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_39);
#line 98 "add_foreign_proc.m"
            return;
          }
#line 96 "add_foreign_proc.m"
        else
#line 102 "add_foreign_proc.m"
          {
#line 102 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__StartPieces_29;
#line 102 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__PredIdPiecesList_30;
#line 102 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__PredIdPieces_31;
#line 102 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__MainPieces_32;
#line 102 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__Msg_34;
#line 102 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__Spec_35;
#line 102 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_44_44;
#line 102 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_45_45;
#line 102 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_64_64;
#line 102 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_76_76;
#line 102 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_77_77;
#line 102 "add_foreign_proc.m"
            MR_Word hlds__make_hlds__add_foreign_proc__V_84_84;

#line 103 "add_foreign_proc.m"
            {
#line 103 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 103 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 103 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_foreign_proc__V_45_45, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__PredOrFunc_18));
#line 103 "add_foreign_proc.m"
            }
#line 103 "add_foreign_proc.m"
            {
#line 103 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 103 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_44_44, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_45_45));
#line 103 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[16])));
#line 103 "add_foreign_proc.m"
            }
#line 103 "add_foreign_proc.m"
            {
#line 103 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__StartPieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 103 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__StartPieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_foreign_proc_scalar_common_1[41])));
#line 103 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__StartPieces_29, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_44_44));
#line 103 "add_foreign_proc.m"
            }
#line 108 "add_foreign_proc.m"
            {
#line 108 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 108 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_64_64, 0) = ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_4[0]));
#line 108 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_64_64, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0_1));
#line 108 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 108 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_64_64, 3) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_36));
#line 108 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_64_64, 4) = ((MR_Box) ((MR_Integer) 0));
#line 108 "add_foreign_proc.m"
            }
#line 107 "add_foreign_proc.m"
            {
#line 107 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__PredIdPiecesList_30 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__make_hlds__add_foreign_proc_scalar_common_1[0], hlds__make_hlds__add_foreign_proc__V_64_64, hlds__make_hlds__add_foreign_proc__PredIds_21);
            }
#line 110 "add_foreign_proc.m"
            {
#line 110 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__PredIdPieces_31 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__make_hlds__add_foreign_proc__PredIdPiecesList_30, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[43]));
            }
#line 112 "add_foreign_proc.m"
            {
#line 112 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__MainPieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_foreign_proc__StartPieces_29, hlds__make_hlds__add_foreign_proc__PredIdPieces_31);
            }
#line 116 "add_foreign_proc.m"
            {
#line 116 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 116 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__MainPieces_32));
#line 116 "add_foreign_proc.m"
            }
#line 116 "add_foreign_proc.m"
            {
#line 116 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 116 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_76_76, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_77_77));
#line 116 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_foreign_proc_scalar_common_1[45])));
#line 116 "add_foreign_proc.m"
            }
#line 115 "add_foreign_proc.m"
            {
#line 115 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__Msg_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 115 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_34, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Context_10));
#line 115 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Msg_34, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_76_76));
#line 115 "add_foreign_proc.m"
            }
#line 117 "add_foreign_proc.m"
            {
#line 117 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 117 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Msg_34));
#line 117 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_foreign_proc__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 117 "add_foreign_proc.m"
            }
#line 117 "add_foreign_proc.m"
            {
#line 117 "add_foreign_proc.m"
              hlds__make_hlds__add_foreign_proc__Spec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 117 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 117 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 117 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_foreign_proc__Spec_35, 2) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__V_84_84));
#line 117 "add_foreign_proc.m"
            }
#line 118 "add_foreign_proc.m"
            {
#line 118 "add_foreign_proc.m"
              MR_Word base;
#line 118 "add_foreign_proc.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 118 "add_foreign_proc.m"
              *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_39 = base;
#line 118 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__Spec_35));
#line 118 "add_foreign_proc.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_Specs_0_38));
#line 118 "add_foreign_proc.m"
            }
#line 102 "add_foreign_proc.m"
            *hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_foreign_proc__STATE_VARIABLE_ModuleInfo_0_36;
#line 102 "add_foreign_proc.m"
          }
#line 96 "add_foreign_proc.m"
      }
#line 68 "add_foreign_proc.m"
  }
#line 19 "add_foreign_proc.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.add_foreign_proc. */
