/*
** Automatically generated from `ml_closure_gen.m'
** by the Mercury compiler,
** version rotd-2017-08-05
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


/* :- module ml_backend.ml_closure_gen. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_closure_gen__init
ENDINIT
*/

#include "ml_backend.ml_closure_gen.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.pseudo_type_info.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
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
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.prog_rep.mih"
#include "ll_backend.prog_rep_tables.mih"
#include "ll_backend.stack_layout.mih"
#include "ll_backend.trace_gen.mih"
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
#include "counter.mih"
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
#include "ml_backend.ml_accurate_gc.mih"
#include "ml_backend.ml_call_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_unify_gen.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.rtti_to_mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_closure_gen__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_EnumFunctorDesc ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_1;

static const MR_EnumFunctorDesc ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_2;

static const MR_EnumFunctorDescPtr ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_value_ordered_closure_kind_0[3];

static const MR_EnumFunctorDescPtr ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_name_ordered_closure_kind_0[3];

static const MR_Integer ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__functor_number_map_closure_kind_0[3];

static MR_Word MR_CALL 
ml_backend__ml_closure_gen__arg_delete_gc_statement_1_f_0(
  MR_Word ml_backend__ml_closure_gen__Argument0_3);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_type_info_defn_5_p_0_1(
  MR_Box ml_backend__ml_closure_gen__closure_arg,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_type_info_defn_5_p_0(
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_6,
  MR_Word ml_backend__ml_closure_gen__Target_7,
  MR_Word ml_backend__ml_closure_gen__TI_8,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_12,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_13);

static MR_Word MR_CALL 
ml_backend__ml_closure_gen__arg_type_infos_1_f_0(
  MR_Word ml_backend__ml_closure_gen__HeadVar__1_1);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_defn_5_p_0(
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_6,
  MR_Word ml_backend__ml_closure_gen__Target_7,
  MR_Word ml_backend__ml_closure_gen__MaybePTI_8,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_12,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_13);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_type_info_7_p_0_1(
  MR_Box ml_backend__ml_closure_gen__closure_arg,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_type_info_7_p_0(
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_8,
  MR_Word ml_backend__ml_closure_gen__Target_9,
  MR_Word ml_backend__ml_closure_gen__TypeInfo_10,
  MR_Word * ml_backend__ml_closure_gen__Rval_11,
  MR_Word * ml_backend__ml_closure_gen__Type_12,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_29,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_30);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_7_p_0_1(
  MR_Box ml_backend__ml_closure_gen__closure_arg,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_7_p_0(
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_8,
  MR_Word ml_backend__ml_closure_gen__Target_9,
  MR_Word ml_backend__ml_closure_gen__PseudoTypeInfo_10,
  MR_Word * ml_backend__ml_closure_gen__Rval_11,
  MR_Word * ml_backend__ml_closure_gen__Type_12,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_36,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_37);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_6_p_0_1(
  MR_Box ml_backend__ml_closure_gen__closure_arg,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_6_p_0(
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_7,
  MR_Word ml_backend__ml_closure_gen__Target_8,
  MR_Word ml_backend__ml_closure_gen__ClosureArg_9,
  MR_Word * ml_backend__ml_closure_gen__HeadVar__4_4,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_20,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_21);

static MR_Box MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_p_0_1(
  MR_Box ml_backend__ml_closure_gen__closure_arg,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_field_lvals_7_p_0(
  MR_Word ml_backend__ml_closure_gen__ClosureLval_8,
  MR_Integer ml_backend__ml_closure_gen__Offset_9,
  MR_Integer ml_backend__ml_closure_gen__ArgNum_10,
  MR_Integer ml_backend__ml_closure_gen__NumClosureArgs_11,
  MR_Word * ml_backend__ml_closure_gen__ClosureArgLvals_12,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_17,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_18);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_p_0(
  MR_Word ml_backend__ml_closure_gen__ClosureKind_10,
  MR_Word ml_backend__ml_closure_gen__ClosureArgName_11,
  MR_Word ml_backend__ml_closure_gen__ClosureArgType_12,
  MR_Word ml_backend__ml_closure_gen__PredId_13,
  MR_Integer ml_backend__ml_closure_gen__ProcId_14,
  MR_Word ml_backend__ml_closure_gen__Context_15,
  MR_Word * ml_backend__ml_closure_gen__GC_Decls_16,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_33,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_34);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_layout_7_p_0_1(
  MR_Box ml_backend__ml_closure_gen__closure_arg,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_layout_7_p_0(
  MR_Word ml_backend__ml_closure_gen__PredId_8,
  MR_Integer ml_backend__ml_closure_gen__ProcId_9,
  MR_Word ml_backend__ml_closure_gen__Context_10,
  MR_Word * ml_backend__ml_closure_gen__ClosureLayoutAddrRval_11,
  MR_Word * ml_backend__ml_closure_gen__ClosureLayoutType_12,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_30,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_31);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_p_0(
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_9,
  MR_Word ml_backend__ml_closure_gen__ConstVarKind_10,
  MR_Word ml_backend__ml_closure_gen__Context_11,
  MR_Word ml_backend__ml_closure_gen__TVarLocnMap_12,
  MR_Word * ml_backend__ml_closure_gen__TVarVectorAddrRval_13,
  MR_Word * ml_backend__ml_closure_gen__ArrayType_14,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_21,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_22);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_p_0(
  MR_Word ml_backend__ml_closure_gen__HeadVar__1_1,
  MR_Integer ml_backend__ml_closure_gen__CurSlot_2,
  MR_Word * ml_backend__ml_closure_gen__HeadVar__3_3);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_p_0(
  MR_Word ml_backend__ml_closure_gen__Names_13,
  MR_Word ml_backend__ml_closure_gen__Types_14,
  MR_Word ml_backend__ml_closure_gen__Modes_15,
  MR_Word ml_backend__ml_closure_gen__PredOrFunc_16,
  MR_Word ml_backend__ml_closure_gen__CodeModel_17,
  MR_Word ml_backend__ml_closure_gen__Context_18,
  MR_Integer ml_backend__ml_closure_gen__ArgNum_19,
  MR_Word * ml_backend__ml_closure_gen__Defns_20,
  MR_Word * ml_backend__ml_closure_gen__Lvals_21,
  MR_Word * ml_backend__ml_closure_gen__CopyOutLvals_22,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_42,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_43);

static MR_Word MR_CALL 
ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_f_0(
  MR_Integer ml_backend__ml_closure_gen__Num_4,
  MR_Integer ml_backend__ml_closure_gen__Max_5);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_wrapper_func_7_p_0(
  MR_Word ml_backend__ml_closure_gen__MaybeAux_8,
  MR_Word ml_backend__ml_closure_gen__FuncParams_9,
  MR_Word ml_backend__ml_closure_gen__Context_10,
  MR_Word ml_backend__ml_closure_gen__Stmt_11,
  MR_Word * ml_backend__ml_closure_gen__FunctionDefn_12,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_26,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_27);

static void MR_CALL 
ml_backend__ml_closure_gen__gen_closure_gc_statement_10_p_0(
  MR_Word ml_backend__ml_closure_gen__ClosureName_11,
  MR_Word ml_backend__ml_closure_gen__ClosureDeclType_12,
  MR_Word ml_backend__ml_closure_gen__ClosureKind_13,
  MR_Word ml_backend__ml_closure_gen__WrapperArgTypes_14,
  MR_Word ml_backend__ml_closure_gen__Purity_15,
  MR_Word ml_backend__ml_closure_gen__PredOrFunc_16,
  MR_Word ml_backend__ml_closure_gen__Context_17,
  MR_Word * ml_backend__ml_closure_gen__ClosureGCStmt_18,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_23,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_24);

static MR_bool MR_CALL 
ml_backend__ml_closure_gen____Unify____closure_kind_0_0_10001(
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_closure_gen____Compare____closure_kind_0_0_10001(
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_1[20][2];

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_2[2][3];

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_3[11][1];

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_4[1][9];

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_5[1][5];

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_6[2][8];




static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_1[20][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_closure_gen_scalar_common_3[0])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 18)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 18)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_closure_gen_scalar_common_3[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_closure_gen_scalar_common_3[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[18])))
  },
};

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_3[11][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[3])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[8])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) " = (MR_Box) ((MR_Closure *)\n"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) ")->MR_closure_layout;\n"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) " = (MR_Box) MR_materialize_closure_type_params(\n"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) ");\n"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) " = (MR_Box) MR_materialize_typeclass_info_type_params(\n(MR_Word) "))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) ", (MR_Closure_Layout *) "))
  },
  /* row 10 */
  {
    ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_1[15]))
  },
};

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_4[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_closure_arg_info_0)),
    ((MR_Box) (&ml_backend__ml_closure_gen__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_6[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_closure_gen__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0,
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

static const MR_EnumFunctorDesc ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_0 = {
  (MR_String) "higher_order_proc_closure",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_1 = {
  (MR_String) "typeclass_info_closure",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_2 = {
  (MR_String) "special_pred_closure",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_value_ordered_closure_kind_0[3] = {
  &ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_0,
  &ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_1,
  &ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_2
};

static const MR_EnumFunctorDescPtr ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_name_ordered_closure_kind_0[3] = {
  &ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_0,
  &ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_2,
  &ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_1
};

static const MR_Integer ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__functor_number_map_closure_kind_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__type_ctor_info_closure_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_closure_gen____Unify____closure_kind_0_0_10001)),
  ((MR_Box) (ml_backend__ml_closure_gen____Compare____closure_kind_0_0_10001)),
  (MR_String) "ml_backend.ml_closure_gen",
  (MR_String) "closure_kind",
  {     ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_name_ordered_closure_kind_0 },
  {     ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_value_ordered_closure_kind_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__functor_number_map_closure_kind_0
};

void MR_CALL 
ml_backend__ml_closure_gen____Compare____closure_kind_0_0(
  MR_Word * ml_backend__ml_closure_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_closure_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_closure_gen__HeadVar__3_3)
{
  {
    MR_Integer ml_backend__ml_closure_gen__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_closure_gen__HeadVar__2_2;
    MR_Integer ml_backend__ml_closure_gen__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_closure_gen__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_closure_gen__HeadVar__1_1, ml_backend__ml_closure_gen__Cast_HeadVar1_4, ml_backend__ml_closure_gen__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
ml_backend__ml_closure_gen____Unify____closure_kind_0_0(
  MR_Word ml_backend__ml_closure_gen__HeadVar__2_1,
  MR_Word ml_backend__ml_closure_gen__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__HeadVar__2_1 == ml_backend__ml_closure_gen__HeadVar__2_2);

    return ml_backend__ml_closure_gen__succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_closure_gen__arg_delete_gc_statement_1_f_0(
  MR_Word ml_backend__ml_closure_gen__Argument0_3)
{
  {
    MR_Word ml_backend__ml_closure_gen__Argument_4;
    MR_Word ml_backend__ml_closure_gen__Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Argument0_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_closure_gen__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Argument0_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_closure_gen___GCStmt_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Argument0_3, (MR_Integer) 2)));

    {
      ml_backend__ml_closure_gen__Argument_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Argument_4, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Name_5));
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Argument_4, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Type_6));
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Argument_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return ml_backend__ml_closure_gen__Argument_4;
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_type_info_defn_5_p_0_1(
  MR_Box ml_backend__ml_closure_gen__closure_arg,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_closure_gen__closure = ml_backend__ml_closure_gen__closure_arg;
    MR_Word ml_backend__ml_closure_gen__conv1_STATE_VARIABLE_GlobalData_13;

    ml_backend__ml_closure_gen__ml_gen_type_info_defn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_2), &ml_backend__ml_closure_gen__conv1_STATE_VARIABLE_GlobalData_13);
    *ml_backend__ml_closure_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_closure_gen__conv1_STATE_VARIABLE_GlobalData_13));
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_type_info_defn_5_p_0(
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_6,
  MR_Word ml_backend__ml_closure_gen__Target_7,
  MR_Word ml_backend__ml_closure_gen__TI_8,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_12,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_13)
{
  {
    MR_bool ml_backend__ml_closure_gen__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_closure_gen__TI_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_closure_gen__RttiTypeCtor0_23 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_closure_gen__TI_8), (MR_Integer) 0);
          MR_Word ml_backend__ml_closure_gen__ModuleName0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor0_23, (MR_Integer) 0)));
          MR_Word ml_backend__ml_closure_gen__ModuleName_28;
          MR_String ml_backend__ml_closure_gen__Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor0_23, (MR_Integer) 1)));
          MR_Integer ml_backend__ml_closure_gen__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor0_23, (MR_Integer) 2)));
          MR_Word ml_backend__ml_closure_gen__MLDS_ModuleName_30;

          ml_backend__ml_closure_gen__ModuleName_28 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ml_backend__ml_closure_gen__ModuleName0_25);
          ml_backend__ml_closure_gen__MLDS_ModuleName_30 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_closure_gen__ModuleName_28);
          *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_13 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_12;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_closure_gen__RttiData_35;
          MR_Word ml_backend__ml_closure_gen__PDupRvalTypeMap_36;
          MR_Word ml_backend__ml_closure_gen__RttiId_51;
          MR_Word ml_backend__ml_closure_gen__OldRvalType_37;
          MR_Box ml_backend__ml_closure_gen__conv0_OldRvalType_37;

          {
            ml_backend__ml_closure_gen__RttiData_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__RttiData_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__RttiData_35, 1) = ((MR_Box) (ml_backend__ml_closure_gen__TI_8));
          }
          backend_libs__rtti__rtti_data_to_id_2_p_0(ml_backend__ml_closure_gen__RttiData_35, &ml_backend__ml_closure_gen__RttiId_51);
          ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_12, &ml_backend__ml_closure_gen__PDupRvalTypeMap_36);
          ml_backend__ml_closure_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__ml_closure_gen__PDupRvalTypeMap_36, ((MR_Box) (ml_backend__ml_closure_gen__RttiId_51)), &ml_backend__ml_closure_gen__conv0_OldRvalType_37);
          if (ml_backend__ml_closure_gen__succeeded)
          {
            ml_backend__ml_closure_gen__OldRvalType_37 = ((MR_Word) ml_backend__ml_closure_gen__conv0_OldRvalType_37);
            ml_backend__ml_closure_gen__succeeded = MR_TRUE;
          }
          if (ml_backend__ml_closure_gen__succeeded)
            *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_13 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_12;
          else
          {
            MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_33_40;
            MR_Word ml_backend__ml_closure_gen__Var_41;
            MR_Word ml_backend__ml_closure_gen__Var_42;
            MR_Word ml_backend__ml_closure_gen__ModuleName_46;
            MR_Word ml_backend__ml_closure_gen__MLDS_ModuleName_47;
            MR_Box ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_13;

            hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_closure_gen__ModuleInfo_6, &ml_backend__ml_closure_gen__ModuleName_46);
            ml_backend__ml_closure_gen__MLDS_ModuleName_47 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_closure_gen__ModuleName_46);
            ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(ml_backend__ml_closure_gen__ModuleInfo_6, ml_backend__ml_closure_gen__Target_7, ml_backend__ml_closure_gen__RttiData_35, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_12, &ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_33_40);
            {
              ml_backend__ml_closure_gen__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_41, 0) = ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_6[1]));
              MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_41, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ml_gen_type_info_defn_5_p_0_1));
              MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_41, 3) = ((MR_Box) (ml_backend__ml_closure_gen__ModuleInfo_6));
              MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_41, 4) = ((MR_Box) (ml_backend__ml_closure_gen__Target_7));
            }
            ml_backend__ml_closure_gen__Var_42 = ml_backend__ml_closure_gen__arg_type_infos_1_f_0(ml_backend__ml_closure_gen__TI_8);
            mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__ml_closure_gen__Var_41, ml_backend__ml_closure_gen__Var_42, ((MR_Box) (ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_33_40)), &ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_13);
            *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_13 = ((MR_Word) ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_13);
          }
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_closure_gen__arg_type_infos_1_f_0(
  MR_Word ml_backend__ml_closure_gen__HeadVar__1_1)
{
  {
    MR_Word ml_backend__ml_closure_gen__HeadVar__2_2;

    switch (MR_tag((MR_Word) ml_backend__ml_closure_gen__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_closure_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_closure_gen___TypeCtor_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__HeadVar__1_1, (MR_Integer) 0)));

          ml_backend__ml_closure_gen__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__HeadVar__1_1, (MR_Integer) 1)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_closure_gen___VarArityId_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__HeadVar__1_1, (MR_Integer) 0)));

          ml_backend__ml_closure_gen__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__HeadVar__1_1, (MR_Integer) 1)));
        }
        break;
    }
    return ml_backend__ml_closure_gen__HeadVar__2_2;
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_defn_5_p_0(
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_6,
  MR_Word ml_backend__ml_closure_gen__Target_7,
  MR_Word ml_backend__ml_closure_gen__MaybePTI_8,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_12,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_13)
{
  if (((MR_tag((MR_Word) ml_backend__ml_closure_gen__MaybePTI_8)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_Word ml_backend__ml_closure_gen__TypeInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__MaybePTI_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_closure_gen___Rval_10;
    MR_Word ml_backend__ml_closure_gen___Type_11;

    ml_backend__ml_closure_gen__ml_gen_type_info_7_p_0(ml_backend__ml_closure_gen__ModuleInfo_6, ml_backend__ml_closure_gen__Target_7, ml_backend__ml_closure_gen__TypeInfo_24, &ml_backend__ml_closure_gen___Rval_10, &ml_backend__ml_closure_gen___Type_11, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_12, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_13);
  }
  else
  {
    MR_Word ml_backend__ml_closure_gen__PseudoTypeInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__MaybePTI_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_closure_gen___Rval_27;
    MR_Word ml_backend__ml_closure_gen___Type_28;

    ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_7_p_0(ml_backend__ml_closure_gen__ModuleInfo_6, ml_backend__ml_closure_gen__Target_7, ml_backend__ml_closure_gen__PseudoTypeInfo_23, &ml_backend__ml_closure_gen___Rval_27, &ml_backend__ml_closure_gen___Type_28, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_12, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_13);
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_type_info_7_p_0_1(
  MR_Box ml_backend__ml_closure_gen__closure_arg,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_closure_gen__closure = ml_backend__ml_closure_gen__closure_arg;
    MR_Word ml_backend__ml_closure_gen__conv1_STATE_VARIABLE_GlobalData_13;

    ml_backend__ml_closure_gen__ml_gen_type_info_defn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_2), &ml_backend__ml_closure_gen__conv1_STATE_VARIABLE_GlobalData_13);
    *ml_backend__ml_closure_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_closure_gen__conv1_STATE_VARIABLE_GlobalData_13));
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_type_info_7_p_0(
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_8,
  MR_Word ml_backend__ml_closure_gen__Target_9,
  MR_Word ml_backend__ml_closure_gen__TypeInfo_10,
  MR_Word * ml_backend__ml_closure_gen__Rval_11,
  MR_Word * ml_backend__ml_closure_gen__Type_12,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_29,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_30)
{
  {
    MR_bool ml_backend__ml_closure_gen__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_closure_gen__TypeInfo_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_closure_gen__RttiTypeCtor0_14 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_closure_gen__TypeInfo_10), (MR_Integer) 0);
          MR_Word ml_backend__ml_closure_gen__ModuleName0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor0_14, (MR_Integer) 0)));
          MR_Word ml_backend__ml_closure_gen__ModuleName_19;
          MR_Word ml_backend__ml_closure_gen__RttiId_20;
          MR_Word ml_backend__ml_closure_gen__MLDS_ModuleName_21;
          MR_Word ml_backend__ml_closure_gen__Var_37;
          MR_Word ml_backend__ml_closure_gen__Var_38;
          MR_String ml_backend__ml_closure_gen__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor0_14, (MR_Integer) 1)));
          MR_Integer ml_backend__ml_closure_gen__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor0_14, (MR_Integer) 2)));

          ml_backend__ml_closure_gen__ModuleName_19 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ml_backend__ml_closure_gen__ModuleName0_16);
          {
            ml_backend__ml_closure_gen__RttiId_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiId_20, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiTypeCtor0_14));
            MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiId_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
          }
          ml_backend__ml_closure_gen__MLDS_ModuleName_21 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_closure_gen__ModuleName_19);
          {
            ml_backend__ml_closure_gen__Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_37, 1) = ((MR_Box) (ml_backend__ml_closure_gen__MLDS_ModuleName_21));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_37, 2) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_20));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_closure_gen__Rval_11 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_37));
          }
          {
            ml_backend__ml_closure_gen__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_38, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_20));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_closure_gen__Type_12 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_38));
          }
          *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_30 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_29;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_closure_gen__RttiData_26;
          MR_Word ml_backend__ml_closure_gen__PDupRvalTypeMap_27;
          MR_Word ml_backend__ml_closure_gen__RttiId_44;
          MR_Word ml_backend__ml_closure_gen__OldRvalType_28;
          MR_Box ml_backend__ml_closure_gen__conv0_OldRvalType_28;

          {
            ml_backend__ml_closure_gen__RttiData_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__RttiData_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__RttiData_26, 1) = ((MR_Box) (ml_backend__ml_closure_gen__TypeInfo_10));
          }
          backend_libs__rtti__rtti_data_to_id_2_p_0(ml_backend__ml_closure_gen__RttiData_26, &ml_backend__ml_closure_gen__RttiId_44);
          ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_29, &ml_backend__ml_closure_gen__PDupRvalTypeMap_27);
          ml_backend__ml_closure_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__ml_closure_gen__PDupRvalTypeMap_27, ((MR_Box) (ml_backend__ml_closure_gen__RttiId_44)), &ml_backend__ml_closure_gen__conv0_OldRvalType_28);
          if (ml_backend__ml_closure_gen__succeeded)
          {
            ml_backend__ml_closure_gen__OldRvalType_28 = ((MR_Word) ml_backend__ml_closure_gen__conv0_OldRvalType_28);
            ml_backend__ml_closure_gen__succeeded = MR_TRUE;
          }
          if (ml_backend__ml_closure_gen__succeeded)
          {
            *ml_backend__ml_closure_gen__Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__OldRvalType_28, (MR_Integer) 0)));
            *ml_backend__ml_closure_gen__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__OldRvalType_28, (MR_Integer) 1)));
            *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_30 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_29;
          }
          else
          {
            MR_Word ml_backend__ml_closure_gen__Var_31;
            MR_Word ml_backend__ml_closure_gen__Var_32;
            MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_33_33;
            MR_Word ml_backend__ml_closure_gen__Var_34;
            MR_Word ml_backend__ml_closure_gen__Var_35;
            MR_Word ml_backend__ml_closure_gen__ModuleName_39;
            MR_Word ml_backend__ml_closure_gen__MLDS_ModuleName_40;
            MR_Box ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_30;

            hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_closure_gen__ModuleInfo_8, &ml_backend__ml_closure_gen__ModuleName_39);
            ml_backend__ml_closure_gen__MLDS_ModuleName_40 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_closure_gen__ModuleName_39);
            {
              ml_backend__ml_closure_gen__Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
              MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_31, 1) = ((MR_Box) (ml_backend__ml_closure_gen__MLDS_ModuleName_40));
              MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_31, 2) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_44));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_closure_gen__Rval_11 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_31));
            }
            {
              ml_backend__ml_closure_gen__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_32, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_44));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_closure_gen__Type_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_32));
            }
            ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(ml_backend__ml_closure_gen__ModuleInfo_8, ml_backend__ml_closure_gen__Target_9, ml_backend__ml_closure_gen__RttiData_26, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_29, &ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_33_33);
            {
              ml_backend__ml_closure_gen__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_34, 0) = ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_6[1]));
              MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_34, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ml_gen_type_info_7_p_0_1));
              MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_34, 3) = ((MR_Box) (ml_backend__ml_closure_gen__ModuleInfo_8));
              MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_34, 4) = ((MR_Box) (ml_backend__ml_closure_gen__Target_9));
            }
            if (((MR_tag((MR_Word) ml_backend__ml_closure_gen__TypeInfo_10)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ml_backend__ml_closure_gen___TypeCtor_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__TypeInfo_10, (MR_Integer) 0)));

              ml_backend__ml_closure_gen__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__TypeInfo_10, (MR_Integer) 1)));
            }
            else
            {
              MR_Word ml_backend__ml_closure_gen___VarArityId_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__TypeInfo_10, (MR_Integer) 0)));

              ml_backend__ml_closure_gen__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__TypeInfo_10, (MR_Integer) 1)));
            }
            mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__ml_closure_gen__Var_34, ml_backend__ml_closure_gen__Var_35, ((MR_Box) (ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_33_33)), &ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_30);
            *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_30 = ((MR_Word) ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_30);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_7_p_0_1(
  MR_Box ml_backend__ml_closure_gen__closure_arg,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_closure_gen__closure = ml_backend__ml_closure_gen__closure_arg;
    MR_Word ml_backend__ml_closure_gen__conv1_STATE_VARIABLE_GlobalData_13;

    ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_defn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_2), &ml_backend__ml_closure_gen__conv1_STATE_VARIABLE_GlobalData_13);
    *ml_backend__ml_closure_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_closure_gen__conv1_STATE_VARIABLE_GlobalData_13));
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_7_p_0(
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_8,
  MR_Word ml_backend__ml_closure_gen__Target_9,
  MR_Word ml_backend__ml_closure_gen__PseudoTypeInfo_10,
  MR_Word * ml_backend__ml_closure_gen__Rval_11,
  MR_Word * ml_backend__ml_closure_gen__Type_12,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_36,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_37)
{
  {
    MR_bool ml_backend__ml_closure_gen__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_closure_gen__PseudoTypeInfo_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) ml_backend__ml_closure_gen__PseudoTypeInfo_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_closure_gen__ModuleName0_22;
              MR_Word ml_backend__ml_closure_gen__ModuleName_25;
              MR_Word ml_backend__ml_closure_gen__RttiTypeCtor_26 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_closure_gen__PseudoTypeInfo_10), (MR_Integer) 0);
              MR_Word ml_backend__ml_closure_gen__RttiId_27;
              MR_Word ml_backend__ml_closure_gen__MLDS_ModuleName_28;
              MR_Word ml_backend__ml_closure_gen__Var_44;
              MR_Word ml_backend__ml_closure_gen__Var_45;
              MR_String ml_backend__ml_closure_gen__Var_23;
              MR_Integer ml_backend__ml_closure_gen__Var_24;

              ml_backend__ml_closure_gen__ModuleName0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor_26, (MR_Integer) 0)));
              ml_backend__ml_closure_gen__Var_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor_26, (MR_Integer) 1)));
              ml_backend__ml_closure_gen__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor_26, (MR_Integer) 2)));
              ml_backend__ml_closure_gen__ModuleName_25 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ml_backend__ml_closure_gen__ModuleName0_22);
              {
                ml_backend__ml_closure_gen__RttiId_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiId_27, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiTypeCtor_26));
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiId_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
              }
              ml_backend__ml_closure_gen__MLDS_ModuleName_28 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_closure_gen__ModuleName_25);
              {
                ml_backend__ml_closure_gen__Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_44, 1) = ((MR_Box) (ml_backend__ml_closure_gen__MLDS_ModuleName_28));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_44, 2) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_27));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_closure_gen__Rval_11 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_44));
              }
              {
                ml_backend__ml_closure_gen__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_45, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_27));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_closure_gen__Type_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_45));
              }
              *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_37 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_36;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_closure_gen__RttiData_33;
              MR_Word ml_backend__ml_closure_gen__PDupRvalTypeMap_34;
              MR_Word ml_backend__ml_closure_gen__RttiId_52;
              MR_Word ml_backend__ml_closure_gen__OldRvalType_35;
              MR_Box ml_backend__ml_closure_gen__conv0_OldRvalType_35;

              {
                ml_backend__ml_closure_gen__RttiData_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__RttiData_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__RttiData_33, 1) = ((MR_Box) (ml_backend__ml_closure_gen__PseudoTypeInfo_10));
              }
              backend_libs__rtti__rtti_data_to_id_2_p_0(ml_backend__ml_closure_gen__RttiData_33, &ml_backend__ml_closure_gen__RttiId_52);
              ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_36, &ml_backend__ml_closure_gen__PDupRvalTypeMap_34);
              ml_backend__ml_closure_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__ml_closure_gen__PDupRvalTypeMap_34, ((MR_Box) (ml_backend__ml_closure_gen__RttiId_52)), &ml_backend__ml_closure_gen__conv0_OldRvalType_35);
              if (ml_backend__ml_closure_gen__succeeded)
              {
                ml_backend__ml_closure_gen__OldRvalType_35 = ((MR_Word) ml_backend__ml_closure_gen__conv0_OldRvalType_35);
                ml_backend__ml_closure_gen__succeeded = MR_TRUE;
              }
              if (ml_backend__ml_closure_gen__succeeded)
              {
                *ml_backend__ml_closure_gen__Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__OldRvalType_35, (MR_Integer) 0)));
                *ml_backend__ml_closure_gen__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__OldRvalType_35, (MR_Integer) 1)));
                *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_37 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_36;
              }
              else
              {
                MR_Word ml_backend__ml_closure_gen__Var_38;
                MR_Word ml_backend__ml_closure_gen__Var_39;
                MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_40_40;
                MR_Word ml_backend__ml_closure_gen__Var_41;
                MR_Word ml_backend__ml_closure_gen__Var_42;
                MR_Word ml_backend__ml_closure_gen__ModuleName_47;
                MR_Word ml_backend__ml_closure_gen__MLDS_ModuleName_48;
                MR_Box ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_37;

                hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_closure_gen__ModuleInfo_8, &ml_backend__ml_closure_gen__ModuleName_47);
                ml_backend__ml_closure_gen__MLDS_ModuleName_48 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_closure_gen__ModuleName_47);
                {
                  ml_backend__ml_closure_gen__Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_38, 1) = ((MR_Box) (ml_backend__ml_closure_gen__MLDS_ModuleName_48));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_38, 2) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_52));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ml_backend__ml_closure_gen__Rval_11 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_38));
                }
                {
                  ml_backend__ml_closure_gen__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_39, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_52));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ml_backend__ml_closure_gen__Type_12 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_39));
                }
                ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(ml_backend__ml_closure_gen__ModuleInfo_8, ml_backend__ml_closure_gen__Target_9, ml_backend__ml_closure_gen__RttiData_33, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_36, &ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_40_40);
                {
                  ml_backend__ml_closure_gen__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_41, 0) = ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_6[0]));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_41, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_7_p_0_1));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_41, 3) = ((MR_Box) (ml_backend__ml_closure_gen__ModuleInfo_8));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_41, 4) = ((MR_Box) (ml_backend__ml_closure_gen__Target_9));
                }
                if (((MR_tag((MR_Word) ml_backend__ml_closure_gen__PseudoTypeInfo_10)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word ml_backend__ml_closure_gen___TypeCtor_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__PseudoTypeInfo_10, (MR_Integer) 0)));

                  ml_backend__ml_closure_gen__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__PseudoTypeInfo_10, (MR_Integer) 1)));
                }
                else
                {
                  MR_Word ml_backend__ml_closure_gen___VarArityId_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__PseudoTypeInfo_10, (MR_Integer) 0)));

                  ml_backend__ml_closure_gen__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__PseudoTypeInfo_10, (MR_Integer) 1)));
                }
                mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__ml_closure_gen__Var_41, ml_backend__ml_closure_gen__Var_42, ((MR_Box) (ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_40_40)), &ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_37);
                *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_37 = ((MR_Word) ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_37);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) ml_backend__ml_closure_gen__PseudoTypeInfo_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_closure_gen__ModuleName0_22;
              MR_Word ml_backend__ml_closure_gen__ModuleName_25;
              MR_Word ml_backend__ml_closure_gen__RttiTypeCtor_26 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_closure_gen__PseudoTypeInfo_10), (MR_Integer) 0);
              MR_Word ml_backend__ml_closure_gen__RttiId_27;
              MR_Word ml_backend__ml_closure_gen__MLDS_ModuleName_28;
              MR_Word ml_backend__ml_closure_gen__Var_44;
              MR_Word ml_backend__ml_closure_gen__Var_45;
              MR_String ml_backend__ml_closure_gen__Var_23;
              MR_Integer ml_backend__ml_closure_gen__Var_24;

              ml_backend__ml_closure_gen__ModuleName0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor_26, (MR_Integer) 0)));
              ml_backend__ml_closure_gen__Var_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor_26, (MR_Integer) 1)));
              ml_backend__ml_closure_gen__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor_26, (MR_Integer) 2)));
              ml_backend__ml_closure_gen__ModuleName_25 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ml_backend__ml_closure_gen__ModuleName0_22);
              {
                ml_backend__ml_closure_gen__RttiId_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiId_27, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiTypeCtor_26));
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiId_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
              }
              ml_backend__ml_closure_gen__MLDS_ModuleName_28 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_closure_gen__ModuleName_25);
              {
                ml_backend__ml_closure_gen__Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_44, 1) = ((MR_Box) (ml_backend__ml_closure_gen__MLDS_ModuleName_28));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_44, 2) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_27));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_closure_gen__Rval_11 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_44));
              }
              {
                ml_backend__ml_closure_gen__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_45, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_27));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_closure_gen__Type_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_45));
              }
              *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_37 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_36;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_closure_gen__RttiData_33;
              MR_Word ml_backend__ml_closure_gen__PDupRvalTypeMap_34;
              MR_Word ml_backend__ml_closure_gen__RttiId_52;
              MR_Word ml_backend__ml_closure_gen__OldRvalType_35;
              MR_Box ml_backend__ml_closure_gen__conv0_OldRvalType_35;

              {
                ml_backend__ml_closure_gen__RttiData_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__RttiData_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__RttiData_33, 1) = ((MR_Box) (ml_backend__ml_closure_gen__PseudoTypeInfo_10));
              }
              backend_libs__rtti__rtti_data_to_id_2_p_0(ml_backend__ml_closure_gen__RttiData_33, &ml_backend__ml_closure_gen__RttiId_52);
              ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_36, &ml_backend__ml_closure_gen__PDupRvalTypeMap_34);
              ml_backend__ml_closure_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__ml_closure_gen__PDupRvalTypeMap_34, ((MR_Box) (ml_backend__ml_closure_gen__RttiId_52)), &ml_backend__ml_closure_gen__conv0_OldRvalType_35);
              if (ml_backend__ml_closure_gen__succeeded)
              {
                ml_backend__ml_closure_gen__OldRvalType_35 = ((MR_Word) ml_backend__ml_closure_gen__conv0_OldRvalType_35);
                ml_backend__ml_closure_gen__succeeded = MR_TRUE;
              }
              if (ml_backend__ml_closure_gen__succeeded)
              {
                *ml_backend__ml_closure_gen__Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__OldRvalType_35, (MR_Integer) 0)));
                *ml_backend__ml_closure_gen__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__OldRvalType_35, (MR_Integer) 1)));
                *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_37 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_36;
              }
              else
              {
                MR_Word ml_backend__ml_closure_gen__Var_38;
                MR_Word ml_backend__ml_closure_gen__Var_39;
                MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_40_40;
                MR_Word ml_backend__ml_closure_gen__Var_41;
                MR_Word ml_backend__ml_closure_gen__Var_42;
                MR_Word ml_backend__ml_closure_gen__ModuleName_47;
                MR_Word ml_backend__ml_closure_gen__MLDS_ModuleName_48;
                MR_Box ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_37;

                hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_closure_gen__ModuleInfo_8, &ml_backend__ml_closure_gen__ModuleName_47);
                ml_backend__ml_closure_gen__MLDS_ModuleName_48 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_closure_gen__ModuleName_47);
                {
                  ml_backend__ml_closure_gen__Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_38, 1) = ((MR_Box) (ml_backend__ml_closure_gen__MLDS_ModuleName_48));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_38, 2) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_52));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ml_backend__ml_closure_gen__Rval_11 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_38));
                }
                {
                  ml_backend__ml_closure_gen__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_39, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_52));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ml_backend__ml_closure_gen__Type_12 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_39));
                }
                ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(ml_backend__ml_closure_gen__ModuleInfo_8, ml_backend__ml_closure_gen__Target_9, ml_backend__ml_closure_gen__RttiData_33, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_36, &ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_40_40);
                {
                  ml_backend__ml_closure_gen__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_41, 0) = ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_6[0]));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_41, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_7_p_0_1));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_41, 3) = ((MR_Box) (ml_backend__ml_closure_gen__ModuleInfo_8));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_41, 4) = ((MR_Box) (ml_backend__ml_closure_gen__Target_9));
                }
                if (((MR_tag((MR_Word) ml_backend__ml_closure_gen__PseudoTypeInfo_10)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word ml_backend__ml_closure_gen___TypeCtor_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__PseudoTypeInfo_10, (MR_Integer) 0)));

                  ml_backend__ml_closure_gen__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__PseudoTypeInfo_10, (MR_Integer) 1)));
                }
                else
                {
                  MR_Word ml_backend__ml_closure_gen___VarArityId_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__PseudoTypeInfo_10, (MR_Integer) 0)));

                  ml_backend__ml_closure_gen__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__PseudoTypeInfo_10, (MR_Integer) 1)));
                }
                mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__ml_closure_gen__Var_41, ml_backend__ml_closure_gen__Var_42, ((MR_Box) (ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_40_40)), &ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_37);
                *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_37 = ((MR_Word) ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_37);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer ml_backend__ml_closure_gen__N_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__PseudoTypeInfo_10, (MR_Integer) 0)));
          MR_Word ml_backend__ml_closure_gen__Var_46;

          {
            ml_backend__ml_closure_gen__Var_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__Var_46, 0) = ((MR_Box) (ml_backend__ml_closure_gen__N_14));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_closure_gen__Rval_11 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_46));
          }
          *ml_backend__ml_closure_gen__Type_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
          *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_37 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_36;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_6_p_0_1(
  MR_Box ml_backend__ml_closure_gen__closure_arg,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_closure_gen__closure = ml_backend__ml_closure_gen__closure_arg;
    MR_Word ml_backend__ml_closure_gen__conv1_STATE_VARIABLE_GlobalData_13;

    ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_defn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_2), &ml_backend__ml_closure_gen__conv1_STATE_VARIABLE_GlobalData_13);
    *ml_backend__ml_closure_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_closure_gen__conv1_STATE_VARIABLE_GlobalData_13));
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_6_p_0(
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_7,
  MR_Word ml_backend__ml_closure_gen__Target_8,
  MR_Word ml_backend__ml_closure_gen__ClosureArg_9,
  MR_Word * ml_backend__ml_closure_gen__HeadVar__4_4,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_20,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_21)
{
  {
    MR_bool ml_backend__ml_closure_gen__succeeded;
    MR_Word ml_backend__ml_closure_gen__ArgInit_10;
    MR_Word ml_backend__ml_closure_gen__ArgType_11;
    MR_Word ml_backend__ml_closure_gen__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__ClosureArg_9, (MR_Integer) 0)));
    MR_Word ml_backend__ml_closure_gen__PseudoTypeInfo_17;
    MR_Word ml_backend__ml_closure_gen__ArgRval_18;
    MR_Word ml_backend__ml_closure_gen__CastArgRval_19;
    MR_Word ml_backend__ml_closure_gen__Var_23;
    MR_Word ml_backend__ml_closure_gen___Inst_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__ClosureArg_9, (MR_Integer) 1)));

    backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0(ml_backend__ml_closure_gen__Type_13, (MR_Integer) -1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_closure_gen__PseudoTypeInfo_17);
    switch (MR_tag((MR_Word) ml_backend__ml_closure_gen__PseudoTypeInfo_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) ml_backend__ml_closure_gen__PseudoTypeInfo_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_closure_gen__ModuleName0_40;
              MR_Word ml_backend__ml_closure_gen__ModuleName_43;
              MR_Word ml_backend__ml_closure_gen__RttiTypeCtor_44 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_closure_gen__PseudoTypeInfo_17), (MR_Integer) 0);
              MR_Word ml_backend__ml_closure_gen__RttiId_45;
              MR_Word ml_backend__ml_closure_gen__MLDS_ModuleName_46;
              MR_Word ml_backend__ml_closure_gen__Var_60;
              MR_Word ml_backend__ml_closure_gen__Var_61;
              MR_String ml_backend__ml_closure_gen__Var_41;
              MR_Integer ml_backend__ml_closure_gen__Var_42;

              ml_backend__ml_closure_gen__ModuleName0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor_44, (MR_Integer) 0)));
              ml_backend__ml_closure_gen__Var_41 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor_44, (MR_Integer) 1)));
              ml_backend__ml_closure_gen__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor_44, (MR_Integer) 2)));
              ml_backend__ml_closure_gen__ModuleName_43 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ml_backend__ml_closure_gen__ModuleName0_40);
              {
                ml_backend__ml_closure_gen__RttiId_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiId_45, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiTypeCtor_44));
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiId_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
              }
              ml_backend__ml_closure_gen__MLDS_ModuleName_46 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_closure_gen__ModuleName_43);
              {
                ml_backend__ml_closure_gen__Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_60, 1) = ((MR_Box) (ml_backend__ml_closure_gen__MLDS_ModuleName_46));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_60, 2) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_45));
              }
              {
                ml_backend__ml_closure_gen__ArgRval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgRval_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgRval_18, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_60));
              }
              {
                ml_backend__ml_closure_gen__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_61, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_45));
              }
              {
                ml_backend__ml_closure_gen__ArgType_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgType_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgType_11, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_61));
              }
              *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_21 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_20;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_closure_gen__RttiData_51;
              MR_Word ml_backend__ml_closure_gen__PDupRvalTypeMap_52;
              MR_Word ml_backend__ml_closure_gen__RttiId_68;
              MR_Word ml_backend__ml_closure_gen__OldRvalType_53;
              MR_Box ml_backend__ml_closure_gen__conv0_OldRvalType_53;

              {
                ml_backend__ml_closure_gen__RttiData_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__RttiData_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__RttiData_51, 1) = ((MR_Box) (ml_backend__ml_closure_gen__PseudoTypeInfo_17));
              }
              backend_libs__rtti__rtti_data_to_id_2_p_0(ml_backend__ml_closure_gen__RttiData_51, &ml_backend__ml_closure_gen__RttiId_68);
              ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_20, &ml_backend__ml_closure_gen__PDupRvalTypeMap_52);
              ml_backend__ml_closure_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__ml_closure_gen__PDupRvalTypeMap_52, ((MR_Box) (ml_backend__ml_closure_gen__RttiId_68)), &ml_backend__ml_closure_gen__conv0_OldRvalType_53);
              if (ml_backend__ml_closure_gen__succeeded)
              {
                ml_backend__ml_closure_gen__OldRvalType_53 = ((MR_Word) ml_backend__ml_closure_gen__conv0_OldRvalType_53);
                ml_backend__ml_closure_gen__succeeded = MR_TRUE;
              }
              if (ml_backend__ml_closure_gen__succeeded)
              {
                ml_backend__ml_closure_gen__ArgRval_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__OldRvalType_53, (MR_Integer) 0)));
                ml_backend__ml_closure_gen__ArgType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__OldRvalType_53, (MR_Integer) 1)));
                *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_21 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_20;
              }
              else
              {
                MR_Word ml_backend__ml_closure_gen__Var_54;
                MR_Word ml_backend__ml_closure_gen__Var_55;
                MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_40_56;
                MR_Word ml_backend__ml_closure_gen__Var_57;
                MR_Word ml_backend__ml_closure_gen__Var_58;
                MR_Word ml_backend__ml_closure_gen__ModuleName_63;
                MR_Word ml_backend__ml_closure_gen__MLDS_ModuleName_64;
                MR_Box ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_21;

                hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_closure_gen__ModuleInfo_7, &ml_backend__ml_closure_gen__ModuleName_63);
                ml_backend__ml_closure_gen__MLDS_ModuleName_64 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_closure_gen__ModuleName_63);
                {
                  ml_backend__ml_closure_gen__Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_54, 1) = ((MR_Box) (ml_backend__ml_closure_gen__MLDS_ModuleName_64));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_54, 2) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_68));
                }
                {
                  ml_backend__ml_closure_gen__ArgRval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgRval_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgRval_18, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_54));
                }
                {
                  ml_backend__ml_closure_gen__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_55, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_68));
                }
                {
                  ml_backend__ml_closure_gen__ArgType_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgType_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgType_11, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_55));
                }
                ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(ml_backend__ml_closure_gen__ModuleInfo_7, ml_backend__ml_closure_gen__Target_8, ml_backend__ml_closure_gen__RttiData_51, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_20, &ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_40_56);
                {
                  ml_backend__ml_closure_gen__Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_57, 0) = ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_6[0]));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_57, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_6_p_0_1));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_57, 3) = ((MR_Box) (ml_backend__ml_closure_gen__ModuleInfo_7));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_57, 4) = ((MR_Box) (ml_backend__ml_closure_gen__Target_8));
                }
                if (((MR_tag((MR_Word) ml_backend__ml_closure_gen__PseudoTypeInfo_17)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word ml_backend__ml_closure_gen___TypeCtor_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__PseudoTypeInfo_17, (MR_Integer) 0)));

                  ml_backend__ml_closure_gen__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__PseudoTypeInfo_17, (MR_Integer) 1)));
                }
                else
                {
                  MR_Word ml_backend__ml_closure_gen___VarArityId_81 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__PseudoTypeInfo_17, (MR_Integer) 0)));

                  ml_backend__ml_closure_gen__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__PseudoTypeInfo_17, (MR_Integer) 1)));
                }
                mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__ml_closure_gen__Var_57, ml_backend__ml_closure_gen__Var_58, ((MR_Box) (ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_40_56)), &ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_21);
                *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_21 = ((MR_Word) ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_21);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) ml_backend__ml_closure_gen__PseudoTypeInfo_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_closure_gen__ModuleName0_40;
              MR_Word ml_backend__ml_closure_gen__ModuleName_43;
              MR_Word ml_backend__ml_closure_gen__RttiTypeCtor_44 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_closure_gen__PseudoTypeInfo_17), (MR_Integer) 0);
              MR_Word ml_backend__ml_closure_gen__RttiId_45;
              MR_Word ml_backend__ml_closure_gen__MLDS_ModuleName_46;
              MR_Word ml_backend__ml_closure_gen__Var_60;
              MR_Word ml_backend__ml_closure_gen__Var_61;
              MR_String ml_backend__ml_closure_gen__Var_41;
              MR_Integer ml_backend__ml_closure_gen__Var_42;

              ml_backend__ml_closure_gen__ModuleName0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor_44, (MR_Integer) 0)));
              ml_backend__ml_closure_gen__Var_41 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor_44, (MR_Integer) 1)));
              ml_backend__ml_closure_gen__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor_44, (MR_Integer) 2)));
              ml_backend__ml_closure_gen__ModuleName_43 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ml_backend__ml_closure_gen__ModuleName0_40);
              {
                ml_backend__ml_closure_gen__RttiId_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiId_45, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiTypeCtor_44));
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiId_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
              }
              ml_backend__ml_closure_gen__MLDS_ModuleName_46 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_closure_gen__ModuleName_43);
              {
                ml_backend__ml_closure_gen__Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_60, 1) = ((MR_Box) (ml_backend__ml_closure_gen__MLDS_ModuleName_46));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_60, 2) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_45));
              }
              {
                ml_backend__ml_closure_gen__ArgRval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgRval_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgRval_18, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_60));
              }
              {
                ml_backend__ml_closure_gen__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_61, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_45));
              }
              {
                ml_backend__ml_closure_gen__ArgType_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgType_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgType_11, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_61));
              }
              *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_21 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_20;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_closure_gen__RttiData_51;
              MR_Word ml_backend__ml_closure_gen__PDupRvalTypeMap_52;
              MR_Word ml_backend__ml_closure_gen__RttiId_68;
              MR_Word ml_backend__ml_closure_gen__OldRvalType_53;
              MR_Box ml_backend__ml_closure_gen__conv0_OldRvalType_53;

              {
                ml_backend__ml_closure_gen__RttiData_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__RttiData_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__RttiData_51, 1) = ((MR_Box) (ml_backend__ml_closure_gen__PseudoTypeInfo_17));
              }
              backend_libs__rtti__rtti_data_to_id_2_p_0(ml_backend__ml_closure_gen__RttiData_51, &ml_backend__ml_closure_gen__RttiId_68);
              ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_20, &ml_backend__ml_closure_gen__PDupRvalTypeMap_52);
              ml_backend__ml_closure_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__ml_closure_gen__PDupRvalTypeMap_52, ((MR_Box) (ml_backend__ml_closure_gen__RttiId_68)), &ml_backend__ml_closure_gen__conv0_OldRvalType_53);
              if (ml_backend__ml_closure_gen__succeeded)
              {
                ml_backend__ml_closure_gen__OldRvalType_53 = ((MR_Word) ml_backend__ml_closure_gen__conv0_OldRvalType_53);
                ml_backend__ml_closure_gen__succeeded = MR_TRUE;
              }
              if (ml_backend__ml_closure_gen__succeeded)
              {
                ml_backend__ml_closure_gen__ArgRval_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__OldRvalType_53, (MR_Integer) 0)));
                ml_backend__ml_closure_gen__ArgType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__OldRvalType_53, (MR_Integer) 1)));
                *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_21 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_20;
              }
              else
              {
                MR_Word ml_backend__ml_closure_gen__Var_54;
                MR_Word ml_backend__ml_closure_gen__Var_55;
                MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_40_56;
                MR_Word ml_backend__ml_closure_gen__Var_57;
                MR_Word ml_backend__ml_closure_gen__Var_58;
                MR_Word ml_backend__ml_closure_gen__ModuleName_63;
                MR_Word ml_backend__ml_closure_gen__MLDS_ModuleName_64;
                MR_Box ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_21;

                hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_closure_gen__ModuleInfo_7, &ml_backend__ml_closure_gen__ModuleName_63);
                ml_backend__ml_closure_gen__MLDS_ModuleName_64 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_closure_gen__ModuleName_63);
                {
                  ml_backend__ml_closure_gen__Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_54, 1) = ((MR_Box) (ml_backend__ml_closure_gen__MLDS_ModuleName_64));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_54, 2) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_68));
                }
                {
                  ml_backend__ml_closure_gen__ArgRval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgRval_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgRval_18, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_54));
                }
                {
                  ml_backend__ml_closure_gen__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_55, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_68));
                }
                {
                  ml_backend__ml_closure_gen__ArgType_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgType_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgType_11, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_55));
                }
                ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(ml_backend__ml_closure_gen__ModuleInfo_7, ml_backend__ml_closure_gen__Target_8, ml_backend__ml_closure_gen__RttiData_51, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_20, &ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_40_56);
                {
                  ml_backend__ml_closure_gen__Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_57, 0) = ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_6[0]));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_57, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_6_p_0_1));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_57, 3) = ((MR_Box) (ml_backend__ml_closure_gen__ModuleInfo_7));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_57, 4) = ((MR_Box) (ml_backend__ml_closure_gen__Target_8));
                }
                if (((MR_tag((MR_Word) ml_backend__ml_closure_gen__PseudoTypeInfo_17)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word ml_backend__ml_closure_gen___TypeCtor_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__PseudoTypeInfo_17, (MR_Integer) 0)));

                  ml_backend__ml_closure_gen__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__PseudoTypeInfo_17, (MR_Integer) 1)));
                }
                else
                {
                  MR_Word ml_backend__ml_closure_gen___VarArityId_81 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__PseudoTypeInfo_17, (MR_Integer) 0)));

                  ml_backend__ml_closure_gen__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__PseudoTypeInfo_17, (MR_Integer) 1)));
                }
                mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__ml_closure_gen__Var_57, ml_backend__ml_closure_gen__Var_58, ((MR_Box) (ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_40_56)), &ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_21);
                *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_21 = ((MR_Word) ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_21);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer ml_backend__ml_closure_gen__N_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__PseudoTypeInfo_17, (MR_Integer) 0)));
          MR_Word ml_backend__ml_closure_gen__Var_62;

          {
            ml_backend__ml_closure_gen__Var_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__Var_62, 0) = ((MR_Box) (ml_backend__ml_closure_gen__N_32));
          }
          {
            ml_backend__ml_closure_gen__ArgRval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgRval_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgRval_18, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_62));
          }
          ml_backend__ml_closure_gen__ArgType_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
          *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_21 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_20;
        }
        break;
    }
    {
      ml_backend__ml_closure_gen__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_23, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ArgType_11));
    }
    {
      ml_backend__ml_closure_gen__CastArgRval_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__CastArgRval_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__CastArgRval_19, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_23));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__CastArgRval_19, 2) = ((MR_Box) (ml_backend__ml_closure_gen__ArgRval_18));
    }
    {
      ml_backend__ml_closure_gen__ArgInit_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__ArgInit_10, 0) = ((MR_Box) (ml_backend__ml_closure_gen__CastArgRval_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_closure_gen__HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ArgInit_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ArgType_11));
    }
  }
}

void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_10_p_0(
  MR_Word ml_backend__ml_closure_gen__PredId_11,
  MR_Integer ml_backend__ml_closure_gen__ProcId_12,
  MR_Word ml_backend__ml_closure_gen__Var_13,
  MR_Word ml_backend__ml_closure_gen__ArgVars_14,
  MR_Word ml_backend__ml_closure_gen__ArgModes_15,
  MR_Word ml_backend__ml_closure_gen__HowToConstruct_16,
  MR_Word ml_backend__ml_closure_gen__Context_17,
  MR_Word * ml_backend__ml_closure_gen__Stmts_18,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_39,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_40)
{
  {
    MR_Word ml_backend__ml_closure_gen__ClosureLayoutRval0_20;
    MR_Word ml_backend__ml_closure_gen__ClosureLayoutType0_21;
    MR_Integer ml_backend__ml_closure_gen__NumArgs_22;
    MR_Word ml_backend__ml_closure_gen__WrapperFuncRval0_23;
    MR_Word ml_backend__ml_closure_gen__WrapperFuncType0_24;
    MR_Word ml_backend__ml_closure_gen__NumArgsRval0_25;
    MR_Word ml_backend__ml_closure_gen__NumArgsRval_27;
    MR_Word ml_backend__ml_closure_gen__WrapperFuncRval_29;
    MR_Word ml_backend__ml_closure_gen__ClosureLayoutRval_31;
    MR_Word ml_backend__ml_closure_gen__ExtraArgRvals_33;
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_41_41;
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_43_43;
    MR_Word ml_backend__ml_closure_gen__Var_44;
    MR_Word ml_backend__ml_closure_gen__Var_46;
    MR_Word ml_backend__ml_closure_gen__Var_47;
    MR_Word ml_backend__ml_closure_gen__Var_48;
    MR_Word ml_backend__ml_closure_gen__Var_49;

    ml_backend__ml_closure_gen__ml_gen_closure_layout_7_p_0(ml_backend__ml_closure_gen__PredId_11, ml_backend__ml_closure_gen__ProcId_12, ml_backend__ml_closure_gen__Context_17, &ml_backend__ml_closure_gen__ClosureLayoutRval0_20, &ml_backend__ml_closure_gen__ClosureLayoutType0_21, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_39, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_41_41);
    mercury__list__length_2_p_0((MR_Word) &ml_backend__ml_closure_gen_scalar_common_1[0], ml_backend__ml_closure_gen__ArgVars_14, &ml_backend__ml_closure_gen__NumArgs_22);
    ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_p_0(ml_backend__ml_closure_gen__PredId_11, ml_backend__ml_closure_gen__ProcId_12, (MR_Integer) 0, ml_backend__ml_closure_gen__NumArgs_22, ml_backend__ml_closure_gen__Context_17, &ml_backend__ml_closure_gen__WrapperFuncRval0_23, &ml_backend__ml_closure_gen__WrapperFuncType0_24, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_41_41, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_43_43);
    {
      ml_backend__ml_closure_gen__Var_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__Var_44, 0) = ((MR_Box) (ml_backend__ml_closure_gen__NumArgs_22));
    }
    {
      ml_backend__ml_closure_gen__NumArgsRval0_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__NumArgsRval0_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__NumArgsRval0_25, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_44));
    }
    {
      ml_backend__ml_closure_gen__NumArgsRval_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__NumArgsRval_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__NumArgsRval_27, 1) = ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_3[3]));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__NumArgsRval_27, 2) = ((MR_Box) (ml_backend__ml_closure_gen__NumArgsRval0_25));
    }
    {
      ml_backend__ml_closure_gen__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_46, 0) = ((MR_Box) (ml_backend__ml_closure_gen__WrapperFuncType0_24));
    }
    {
      ml_backend__ml_closure_gen__WrapperFuncRval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__WrapperFuncRval_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__WrapperFuncRval_29, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_46));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__WrapperFuncRval_29, 2) = ((MR_Box) (ml_backend__ml_closure_gen__WrapperFuncRval0_23));
    }
    {
      ml_backend__ml_closure_gen__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_47, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureLayoutType0_21));
    }
    {
      ml_backend__ml_closure_gen__ClosureLayoutRval_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ClosureLayoutRval_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ClosureLayoutRval_31, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_47));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ClosureLayoutRval_31, 2) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureLayoutRval0_20));
    }
    {
      ml_backend__ml_closure_gen__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_49, 0) = ((MR_Box) (ml_backend__ml_closure_gen__NumArgsRval_27));
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_closure_gen__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_48, 0) = ((MR_Box) (ml_backend__ml_closure_gen__WrapperFuncRval_29));
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_48, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_49));
    }
    {
      ml_backend__ml_closure_gen__ExtraArgRvals_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__ExtraArgRvals_33, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureLayoutRval_31));
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__ExtraArgRvals_33, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_48));
    }
    ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, ml_backend__ml_closure_gen__Var_13, ml_backend__ml_closure_gen__ExtraArgRvals_33, (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[19]), ml_backend__ml_closure_gen__ArgVars_14, ml_backend__ml_closure_gen__ArgModes_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_closure_gen__HowToConstruct_16, ml_backend__ml_closure_gen__Context_17, ml_backend__ml_closure_gen__Stmts_18, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_43_43, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_40);
  }
}

static MR_Box MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_p_0_1(
  MR_Box ml_backend__ml_closure_gen__closure_arg,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_closure_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_closure_gen__closure = ml_backend__ml_closure_gen__closure_arg;
    MR_Word ml_backend__ml_closure_gen__conv0_Argument_4;

    ml_backend__ml_closure_gen__conv0_Argument_4 = ml_backend__ml_closure_gen__arg_delete_gc_statement_1_f_0(((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_1));
    ml_backend__ml_closure_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_closure_gen__conv0_Argument_4));
    return ml_backend__ml_closure_gen__wrapper_arg_2;
  }
}

void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_p_0(
  MR_Word ml_backend__ml_closure_gen__PredId_10,
  MR_Integer ml_backend__ml_closure_gen__ProcId_11,
  MR_Word ml_backend__ml_closure_gen__ClosureKind_12,
  MR_Integer ml_backend__ml_closure_gen__NumClosureArgs_13,
  MR_Word ml_backend__ml_closure_gen__Context_14,
  MR_Word * ml_backend__ml_closure_gen__WrapperFuncRval_15,
  MR_Word * ml_backend__ml_closure_gen__WrapperFuncType_16,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_94,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_95)
{
  {
    MR_bool ml_backend__ml_closure_gen__succeeded;
    MR_Word ml_backend__ml_closure_gen__TypeInfo_131_131;
    MR_Word ml_backend__ml_closure_gen__TypeCtorInfo_134_134;
    MR_Word ml_backend__ml_closure_gen__TypeCtorInfo_140_140;
    MR_Word ml_backend__ml_closure_gen__ModuleInfo_18;
    MR_Word ml_backend__ml_closure_gen__PredInfo_19;
    MR_Word ml_backend__ml_closure_gen__ProcInfo_20;
    MR_Word ml_backend__ml_closure_gen__Purity_21;
    MR_Word ml_backend__ml_closure_gen__ProcArgTypes_22;
    MR_Word ml_backend__ml_closure_gen__PredOrFunc_23;
    MR_Word ml_backend__ml_closure_gen__ProcHeadVars_24;
    MR_Word ml_backend__ml_closure_gen__ProcArgModes_25;
    MR_Word ml_backend__ml_closure_gen__CodeModel_26;
    MR_Word ml_backend__ml_closure_gen__ProcVarSet_27;
    MR_Integer ml_backend__ml_closure_gen__ProcArity_28;
    MR_Word ml_backend__ml_closure_gen__ProcHeadVarNames_29;
    MR_Word ml_backend__ml_closure_gen__ProcBoxedArgTypes_30;
    MR_Word ml_backend__ml_closure_gen__WrapperHeadVars_35;
    MR_Word ml_backend__ml_closure_gen__WrapperArgModes_36;
    MR_Word ml_backend__ml_closure_gen__WrapperArgTypes_37;
    MR_Word ml_backend__ml_closure_gen__WrapperBoxedArgTypes_38;
    MR_Word ml_backend__ml_closure_gen__WrapperHeadVarNames_39;
    MR_Word ml_backend__ml_closure_gen__WrapperParams0_40;
    MR_Word ml_backend__ml_closure_gen__WrapperArgs0_41;
    MR_Word ml_backend__ml_closure_gen__WrapperRetType_42;
    MR_Word ml_backend__ml_closure_gen__WrapperArgs1_43;
    MR_Word ml_backend__ml_closure_gen__MaybeClosureA_44;
    MR_Word ml_backend__ml_closure_gen__WrapperArgs_45;
    MR_Word ml_backend__ml_closure_gen__WrapperParams_51;
    MR_Word ml_backend__ml_closure_gen__WrapperHeadVarDefns_52;
    MR_Word ml_backend__ml_closure_gen__WrapperHeadVarLvals_53;
    MR_Word ml_backend__ml_closure_gen__WrapperCopyOutLvals_54;
    MR_Word ml_backend__ml_closure_gen__MaybeClosureB_64;
    MR_Word ml_backend__ml_closure_gen__Globals_66;
    MR_Word ml_backend__ml_closure_gen__ClosureArgLvals_74;
    MR_Word ml_backend__ml_closure_gen__CallLvals_75;
    MR_Word ml_backend__ml_closure_gen__LocalVarDefns0_77;
    MR_Word ml_backend__ml_closure_gen__FuncDefns_78;
    MR_Word ml_backend__ml_closure_gen__Stmts0_79;
    MR_Word ml_backend__ml_closure_gen__LocalVarDefns1_82;
    MR_Word ml_backend__ml_closure_gen__Stmts1_83;
    MR_Word ml_backend__ml_closure_gen__LocalVarDefns2_84;
    MR_Word ml_backend__ml_closure_gen__Stmts_86;
    MR_Word ml_backend__ml_closure_gen__GC_Defns_89;
    MR_Word ml_backend__ml_closure_gen__LocalVarDefns_90;
    MR_Word ml_backend__ml_closure_gen__WrapperFuncBody_91;
    MR_Word ml_backend__ml_closure_gen__WrapperFuncName_92;
    MR_Word ml_backend__ml_closure_gen__WrapperFuncDefn_93;
    MR_Integer ml_backend__ml_closure_gen__Var_99;
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_100_100;
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_103_103;
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_106_106;
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_114_114;
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_118_118;
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_119_119;
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_121_121;
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_124_124;
    MR_Word ml_backend__ml_closure_gen__Var_125;
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_126_126;
    MR_Word ml_backend__ml_closure_gen__Var_127;
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_128_128;
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_129_129;
    MR_Word ml_backend__ml_closure_gen__WrapperHeadVars0_31;
    MR_Word ml_backend__ml_closure_gen__WrapperArgModes0_32;
    MR_Word ml_backend__ml_closure_gen__WrapperArgTypes0_33;
    MR_Word ml_backend__ml_closure_gen__WrapperBoxedArgTypes0_34;
    MR_Word ml_backend__ml_closure_gen__TypeCtorInfo_132_132;
    MR_Word ml_backend__ml_closure_gen__TypeCtorInfo_133_133;
    MR_Word ml_backend__ml_closure_gen__ClosureArgType2_87;
    MR_Word ml_backend__ml_closure_gen__ClosureArgName2_88;
    MR_Tuple ml_backend__ml_closure_gen__Var_122;
    MR_Word ml_backend__ml_closure_gen__Var_123;
    MR_Word ml_backend__ml_closure_gen__Var_141;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_94, &ml_backend__ml_closure_gen__ModuleInfo_18);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ml_backend__ml_closure_gen__ModuleInfo_18, ml_backend__ml_closure_gen__PredId_10, ml_backend__ml_closure_gen__ProcId_11, &ml_backend__ml_closure_gen__PredInfo_19, &ml_backend__ml_closure_gen__ProcInfo_20);
    hlds__hlds_pred__pred_info_get_purity_2_p_0(ml_backend__ml_closure_gen__PredInfo_19, &ml_backend__ml_closure_gen__Purity_21);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ml_backend__ml_closure_gen__PredInfo_19, &ml_backend__ml_closure_gen__ProcArgTypes_22);
    ml_backend__ml_closure_gen__PredOrFunc_23 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(ml_backend__ml_closure_gen__PredInfo_19);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ml_backend__ml_closure_gen__ProcInfo_20, &ml_backend__ml_closure_gen__ProcHeadVars_24);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ml_backend__ml_closure_gen__ProcInfo_20, &ml_backend__ml_closure_gen__ProcArgModes_25);
    ml_backend__ml_closure_gen__CodeModel_26 = hlds__code_model__proc_info_interface_code_model_1_f_0(ml_backend__ml_closure_gen__ProcInfo_20);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ml_backend__ml_closure_gen__ProcInfo_20, &ml_backend__ml_closure_gen__ProcVarSet_27);
    ml_backend__ml_closure_gen__TypeInfo_131_131 = (MR_Word) &ml_backend__ml_closure_gen_scalar_common_1[0];
    ml_backend__ml_closure_gen__ProcArity_28 = mercury__list__length_1_f_0(ml_backend__ml_closure_gen__TypeInfo_131_131, ml_backend__ml_closure_gen__ProcHeadVars_24);
    ml_backend__ml_closure_gen__ProcHeadVarNames_29 = ml_backend__ml_code_util__ml_gen_local_var_names_2_f_0(ml_backend__ml_closure_gen__ProcVarSet_27, ml_backend__ml_closure_gen__ProcHeadVars_24);
    ml_backend__ml_closure_gen__ProcBoxedArgTypes_30 = ml_backend__ml_code_util__ml_make_boxed_types_1_f_0(ml_backend__ml_closure_gen__ProcArity_28);
    ml_backend__ml_closure_gen__succeeded = mercury__list__drop_3_p_0(ml_backend__ml_closure_gen__TypeInfo_131_131, ml_backend__ml_closure_gen__NumClosureArgs_13, ml_backend__ml_closure_gen__ProcHeadVars_24, &ml_backend__ml_closure_gen__WrapperHeadVars0_31);
    if (ml_backend__ml_closure_gen__succeeded)
    {
      ml_backend__ml_closure_gen__TypeCtorInfo_132_132 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
      ml_backend__ml_closure_gen__succeeded = mercury__list__drop_3_p_0(ml_backend__ml_closure_gen__TypeCtorInfo_132_132, ml_backend__ml_closure_gen__NumClosureArgs_13, ml_backend__ml_closure_gen__ProcArgModes_25, &ml_backend__ml_closure_gen__WrapperArgModes0_32);
      if (ml_backend__ml_closure_gen__succeeded)
      {
        ml_backend__ml_closure_gen__TypeCtorInfo_133_133 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
        ml_backend__ml_closure_gen__succeeded = mercury__list__drop_3_p_0(ml_backend__ml_closure_gen__TypeCtorInfo_133_133, ml_backend__ml_closure_gen__NumClosureArgs_13, ml_backend__ml_closure_gen__ProcArgTypes_22, &ml_backend__ml_closure_gen__WrapperArgTypes0_33);
        if (ml_backend__ml_closure_gen__succeeded)
          ml_backend__ml_closure_gen__succeeded = mercury__list__drop_3_p_0(ml_backend__ml_closure_gen__TypeCtorInfo_133_133, ml_backend__ml_closure_gen__NumClosureArgs_13, ml_backend__ml_closure_gen__ProcBoxedArgTypes_30, &ml_backend__ml_closure_gen__WrapperBoxedArgTypes0_34);
      }
    }
    if (ml_backend__ml_closure_gen__succeeded)
    {
      ml_backend__ml_closure_gen__WrapperHeadVars_35 = ml_backend__ml_closure_gen__WrapperHeadVars0_31;
      ml_backend__ml_closure_gen__WrapperArgModes_36 = ml_backend__ml_closure_gen__WrapperArgModes0_32;
      ml_backend__ml_closure_gen__WrapperArgTypes_37 = ml_backend__ml_closure_gen__WrapperArgTypes0_33;
      ml_backend__ml_closure_gen__WrapperBoxedArgTypes_38 = ml_backend__ml_closure_gen__WrapperBoxedArgTypes0_34;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_closure_gen.ml_gen_closure_wrapper\'/9", (MR_String) "list.drop failed");
        return;
      }
    }
    ml_backend__ml_closure_gen__Var_99 = mercury__list__length_1_f_0(ml_backend__ml_closure_gen__TypeInfo_131_131, ml_backend__ml_closure_gen__WrapperHeadVars_35);
    ml_backend__ml_closure_gen__WrapperHeadVarNames_39 = ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_f_0((MR_Integer) 1, ml_backend__ml_closure_gen__Var_99);
    ml_backend__ml_code_util__ml_gen_info_params_8_p_0(ml_backend__ml_closure_gen__WrapperHeadVarNames_39, ml_backend__ml_closure_gen__WrapperBoxedArgTypes_38, ml_backend__ml_closure_gen__WrapperArgModes_36, ml_backend__ml_closure_gen__PredOrFunc_23, ml_backend__ml_closure_gen__CodeModel_26, &ml_backend__ml_closure_gen__WrapperParams0_40, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_94, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_100_100);
    ml_backend__ml_closure_gen__WrapperArgs0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__WrapperParams0_40, (MR_Integer) 0)));
    ml_backend__ml_closure_gen__WrapperRetType_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__WrapperParams0_40, (MR_Integer) 1)));
    ml_backend__ml_closure_gen__TypeCtorInfo_134_134 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0;
    ml_backend__ml_closure_gen__WrapperArgs1_43 = mercury__list__map_2_f_0(ml_backend__ml_closure_gen__TypeCtorInfo_134_134, ml_backend__ml_closure_gen__TypeCtorInfo_134_134, (MR_Word) &ml_backend__ml_closure_gen_scalar_common_2[1], ml_backend__ml_closure_gen__WrapperArgs0_41);
    switch (ml_backend__ml_closure_gen__ClosureKind_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_closure_gen__ClosureArgName_47 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[14]);
          MR_Word ml_backend__ml_closure_gen__ClosureArgDeclType_48;
          MR_Word ml_backend__ml_closure_gen__ClosureArgGCStmt_49;
          MR_Word ml_backend__ml_closure_gen__ClosureArg_50;

          ml_backend__ml_closure_gen__ClosureArgDeclType_48 = ml_backend__ml_code_util__ml_make_boxed_type_0_f_0();
          ml_backend__ml_closure_gen__gen_closure_gc_statement_10_p_0(ml_backend__ml_closure_gen__ClosureArgName_47, ml_backend__ml_closure_gen__ClosureArgDeclType_48, ml_backend__ml_closure_gen__ClosureKind_12, ml_backend__ml_closure_gen__WrapperArgTypes_37, ml_backend__ml_closure_gen__Purity_21, ml_backend__ml_closure_gen__PredOrFunc_23, ml_backend__ml_closure_gen__Context_14, &ml_backend__ml_closure_gen__ClosureArgGCStmt_49, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_100_100, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_103_103);
          {
            ml_backend__ml_closure_gen__ClosureArg_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__ClosureArg_50, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureArgName_47));
            MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__ClosureArg_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
            MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__ClosureArg_50, 2) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureArgGCStmt_49));
          }
          ml_backend__ml_closure_gen__MaybeClosureA_44 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_3[10]);
          {
            ml_backend__ml_closure_gen__WrapperArgs_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__WrapperArgs_45, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureArg_50));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__WrapperArgs_45, 1) = ((MR_Box) (ml_backend__ml_closure_gen__WrapperArgs1_43));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          ml_backend__ml_closure_gen__MaybeClosureA_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ml_backend__ml_closure_gen__WrapperArgs_45 = ml_backend__ml_closure_gen__WrapperArgs1_43;
          ml_backend__ml_closure_gen__STATE_VARIABLE_Info_103_103 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_100_100;
        }
        break;
    }
    {
      ml_backend__ml_closure_gen__WrapperParams_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__WrapperParams_51, 0) = ((MR_Box) (ml_backend__ml_closure_gen__WrapperArgs_45));
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__WrapperParams_51, 1) = ((MR_Box) (ml_backend__ml_closure_gen__WrapperRetType_42));
    }
    ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_p_0(ml_backend__ml_closure_gen__WrapperHeadVarNames_39, ml_backend__ml_closure_gen__WrapperBoxedArgTypes_38, ml_backend__ml_closure_gen__WrapperArgModes_36, ml_backend__ml_closure_gen__PredOrFunc_23, ml_backend__ml_closure_gen__CodeModel_26, ml_backend__ml_closure_gen__Context_14, (MR_Integer) 1, &ml_backend__ml_closure_gen__WrapperHeadVarDefns_52, &ml_backend__ml_closure_gen__WrapperHeadVarLvals_53, &ml_backend__ml_closure_gen__WrapperCopyOutLvals_54, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_103_103, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_106_106);
    hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_closure_gen__ModuleInfo_18, &ml_backend__ml_closure_gen__Globals_66);
    switch (ml_backend__ml_closure_gen__CodeModel_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_closure_gen__STATE_VARIABLE_Info_114_114 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_106_106;
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_closure_gen__NondetCopyOut_67;
          MR_Word ml_backend__ml_closure_gen__InitialCont_71;

          libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_closure_gen__Globals_66, (MR_Integer) 268, &ml_backend__ml_closure_gen__NondetCopyOut_67);
          switch (ml_backend__ml_closure_gen__NondetCopyOut_67) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ml_backend__ml_code_util__ml_initial_cont_4_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_106_106, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_closure_gen__InitialCont_71);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__ml_closure_gen__TypeCtorInfo_137_137 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0;
                MR_Word ml_backend__ml_closure_gen__TypeCtorInfo_138_138 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                MR_Word ml_backend__ml_closure_gen__WrapperBoxedVarTypes_68;
                MR_Word ml_backend__ml_closure_gen__WrapperOutputLvals_69;
                MR_Word ml_backend__ml_closure_gen__WrapperOutputTypes_70;

                mercury__map__from_corresponding_lists_3_p_0(ml_backend__ml_closure_gen__TypeCtorInfo_137_137, ml_backend__ml_closure_gen__TypeCtorInfo_138_138, ml_backend__ml_closure_gen__WrapperHeadVarLvals_53, ml_backend__ml_closure_gen__WrapperBoxedArgTypes_38, &ml_backend__ml_closure_gen__WrapperBoxedVarTypes_68);
                ml_backend__ml_closure_gen__WrapperOutputLvals_69 = check_hlds__mode_util__select_output_things_4_f_0(ml_backend__ml_closure_gen__TypeCtorInfo_137_137, ml_backend__ml_closure_gen__ModuleInfo_18, ml_backend__ml_closure_gen__WrapperHeadVarLvals_53, ml_backend__ml_closure_gen__WrapperArgModes_36, ml_backend__ml_closure_gen__WrapperBoxedVarTypes_68);
                ml_backend__ml_closure_gen__WrapperOutputTypes_70 = mercury__map__apply_to_list_2_f_0(ml_backend__ml_closure_gen__TypeCtorInfo_137_137, ml_backend__ml_closure_gen__TypeCtorInfo_138_138, ml_backend__ml_closure_gen__WrapperOutputLvals_69, ml_backend__ml_closure_gen__WrapperBoxedVarTypes_68);
                ml_backend__ml_code_util__ml_initial_cont_4_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_106_106, ml_backend__ml_closure_gen__WrapperOutputLvals_69, ml_backend__ml_closure_gen__WrapperOutputTypes_70, &ml_backend__ml_closure_gen__InitialCont_71);
              }
              break;
          }
          ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(ml_backend__ml_closure_gen__InitialCont_71, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_106_106, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_114_114);
        }
        break;
      case (MR_Integer) 1:
        ml_backend__ml_closure_gen__STATE_VARIABLE_Info_114_114 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_106_106;
        break;
    }
    if ((ml_backend__ml_closure_gen__MaybeClosureA_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      ml_backend__ml_closure_gen__MaybeClosureB_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      ml_backend__ml_closure_gen__ClosureArgLvals_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      ml_backend__ml_closure_gen__STATE_VARIABLE_Info_118_118 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_114_114;
    }
    else
    {
      MR_Word ml_backend__ml_closure_gen__ClosureArgType1_55;
      MR_Word ml_backend__ml_closure_gen__ClosureArgName1_56;
      MR_Word ml_backend__ml_closure_gen__ClosureName_57;
      MR_Word ml_backend__ml_closure_gen__ClosureType_58;
      MR_Word ml_backend__ml_closure_gen__ClosureDefn_60;
      MR_Word ml_backend__ml_closure_gen__ClosureArgLval_62;
      MR_Word ml_backend__ml_closure_gen__InitClosure_63;
      MR_Word ml_backend__ml_closure_gen__ClosureLval1_72;
      MR_Integer ml_backend__ml_closure_gen__Offset_73;
      MR_Tuple ml_backend__ml_closure_gen__Var_107 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__MaybeClosureA_44, (MR_Integer) 0)));
      MR_Word ml_backend__ml_closure_gen__Var_109;
      MR_Tuple ml_backend__ml_closure_gen__Var_110;

      ml_backend__ml_closure_gen__ClosureArgType1_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_107, (MR_Integer) 0)));
      ml_backend__ml_closure_gen__ClosureArgName1_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_107, (MR_Integer) 1)));
      ml_backend__ml_closure_gen__ClosureName_57 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[16]);
      ml_backend__ml_closure_gen__ClosureType_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
      ml_backend__ml_closure_gen__ClosureDefn_60 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_closure_gen__ClosureName_57, ml_backend__ml_closure_gen__ClosureType_58, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_closure_gen__Context_14);
      ml_backend__ml_code_util__ml_gen_local_var_lval_4_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_106_106, ml_backend__ml_closure_gen__ClosureName_57, ml_backend__ml_closure_gen__ClosureType_58, &ml_backend__ml_closure_gen__ClosureLval1_72);
      ml_backend__ml_code_util__ml_gen_local_var_lval_4_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_106_106, ml_backend__ml_closure_gen__ClosureArgName1_56, ml_backend__ml_closure_gen__ClosureArgType1_55, &ml_backend__ml_closure_gen__ClosureArgLval_62);
      {
        ml_backend__ml_closure_gen__Var_109 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__Var_109, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureArgLval_62));
      }
      ml_backend__ml_closure_gen__InitClosure_63 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_closure_gen__ClosureLval1_72, ml_backend__ml_closure_gen__Var_109, ml_backend__ml_closure_gen__Context_14);
      {
        ml_backend__ml_closure_gen__Var_110 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_110, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureDefn_60));
        MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_110, 1) = ((MR_Box) (ml_backend__ml_closure_gen__InitClosure_63));
      }
      {
        ml_backend__ml_closure_gen__MaybeClosureB_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__MaybeClosureB_64, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Var_110));
      }
      switch (ml_backend__ml_closure_gen__ClosureKind_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ml_backend__ml_closure_gen__Offset_73 = ml_backend__ml_code_util__ml_closure_arg_offset_0_f_0();
          break;
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_closure_gen.ml_gen_closure_wrapper\'/9", (MR_String) "special_pred_closure");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          ml_backend__ml_closure_gen__Offset_73 = ml_backend__ml_code_util__ml_typeclass_info_arg_offset_0_f_0();
          break;
      }
      ml_backend__ml_closure_gen__ml_gen_closure_field_lvals_7_p_0(ml_backend__ml_closure_gen__ClosureLval1_72, ml_backend__ml_closure_gen__Offset_73, (MR_Integer) 1, ml_backend__ml_closure_gen__NumClosureArgs_13, &ml_backend__ml_closure_gen__ClosureArgLvals_74, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_114_114, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_118_118);
    }
    ml_backend__ml_closure_gen__CallLvals_75 = mercury__list__append_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_closure_gen__ClosureArgLvals_74, ml_backend__ml_closure_gen__WrapperHeadVarLvals_53);
    ml_backend__ml_call_gen__ml_gen_plain_call_13_p_0(ml_backend__ml_closure_gen__PredId_10, ml_backend__ml_closure_gen__ProcId_11, ml_backend__ml_closure_gen__ProcHeadVarNames_29, ml_backend__ml_closure_gen__CallLvals_75, ml_backend__ml_closure_gen__ProcBoxedArgTypes_30, ml_backend__ml_closure_gen__CodeModel_26, ml_backend__ml_closure_gen__Context_14, (MR_Integer) 1, &ml_backend__ml_closure_gen__LocalVarDefns0_77, &ml_backend__ml_closure_gen__FuncDefns_78, &ml_backend__ml_closure_gen__Stmts0_79, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_118_118, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_119_119);
    if ((ml_backend__ml_closure_gen__MaybeClosureB_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      ml_backend__ml_closure_gen__LocalVarDefns1_82 = ml_backend__ml_closure_gen__LocalVarDefns0_77;
      ml_backend__ml_closure_gen__Stmts1_83 = ml_backend__ml_closure_gen__Stmts0_79;
    }
    else
    {
      MR_Word ml_backend__ml_closure_gen__ClosureDefn1_80;
      MR_Word ml_backend__ml_closure_gen__InitClosure1_81;
      MR_Tuple ml_backend__ml_closure_gen__Var_120 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__MaybeClosureB_64, (MR_Integer) 0)));

      ml_backend__ml_closure_gen__ClosureDefn1_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_120, (MR_Integer) 0)));
      ml_backend__ml_closure_gen__InitClosure1_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_120, (MR_Integer) 1)));
      {
        ml_backend__ml_closure_gen__LocalVarDefns1_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__LocalVarDefns1_82, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureDefn1_80));
        MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__LocalVarDefns1_82, 1) = ((MR_Box) (ml_backend__ml_closure_gen__LocalVarDefns0_77));
      }
      {
        ml_backend__ml_closure_gen__Stmts1_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Stmts1_83, 0) = ((MR_Box) (ml_backend__ml_closure_gen__InitClosure1_81));
        MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Stmts1_83, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Stmts0_79));
      }
    }
    switch (ml_backend__ml_closure_gen__CodeModel_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        ml_backend__ml_closure_gen__LocalVarDefns2_84 = ml_backend__ml_closure_gen__LocalVarDefns1_82;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_closure_gen__SucceededVarDefn_85;

          ml_backend__ml_closure_gen__SucceededVarDefn_85 = ml_backend__ml_code_util__ml_gen_succeeded_var_decl_1_f_0(ml_backend__ml_closure_gen__Context_14);
          {
            ml_backend__ml_closure_gen__LocalVarDefns2_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__LocalVarDefns2_84, 0) = ((MR_Box) (ml_backend__ml_closure_gen__SucceededVarDefn_85));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__LocalVarDefns2_84, 1) = ((MR_Box) (ml_backend__ml_closure_gen__LocalVarDefns1_82));
          }
        }
        break;
    }
    ml_backend__ml_code_util__ml_append_return_statement_7_p_0(ml_backend__ml_closure_gen__CodeModel_26, ml_backend__ml_closure_gen__WrapperCopyOutLvals_54, ml_backend__ml_closure_gen__Context_14, ml_backend__ml_closure_gen__Stmts1_83, &ml_backend__ml_closure_gen__Stmts_86, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_119_119, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_121_121);
    ml_backend__ml_closure_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_closure_gen__MaybeClosureA_44)) == (MR_mktag((MR_Integer) 1)));
    if (ml_backend__ml_closure_gen__succeeded)
    {
      ml_backend__ml_closure_gen__Var_122 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__MaybeClosureA_44, (MR_Integer) 0)));
      ml_backend__ml_closure_gen__ClosureArgType2_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_122, (MR_Integer) 0)));
      ml_backend__ml_closure_gen__ClosureArgName2_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_122, (MR_Integer) 1)));
      ml_backend__ml_closure_gen__Var_123 = (MR_Integer) 5;
      libs__globals__get_gc_method_2_p_0(ml_backend__ml_closure_gen__Globals_66, &ml_backend__ml_closure_gen__Var_141);
      ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__Var_123 == ml_backend__ml_closure_gen__Var_141);
    }
    if (ml_backend__ml_closure_gen__succeeded)
      ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_p_0(ml_backend__ml_closure_gen__ClosureKind_12, ml_backend__ml_closure_gen__ClosureArgName2_88, ml_backend__ml_closure_gen__ClosureArgType2_87, ml_backend__ml_closure_gen__PredId_10, ml_backend__ml_closure_gen__ProcId_11, ml_backend__ml_closure_gen__Context_14, &ml_backend__ml_closure_gen__GC_Defns_89, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_121_121, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_124_124);
    else
    {
      ml_backend__ml_closure_gen__GC_Defns_89 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      ml_backend__ml_closure_gen__STATE_VARIABLE_Info_124_124 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_121_121;
    }
    ml_backend__ml_closure_gen__TypeCtorInfo_140_140 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;
    ml_backend__ml_closure_gen__Var_125 = mercury__list__f_43_43_2_f_0(ml_backend__ml_closure_gen__TypeCtorInfo_140_140, ml_backend__ml_closure_gen__WrapperHeadVarDefns_52, ml_backend__ml_closure_gen__LocalVarDefns2_84);
    ml_backend__ml_closure_gen__LocalVarDefns_90 = mercury__list__f_43_43_2_f_0(ml_backend__ml_closure_gen__TypeCtorInfo_140_140, ml_backend__ml_closure_gen__GC_Defns_89, ml_backend__ml_closure_gen__Var_125);
    switch (ml_backend__ml_closure_gen__CodeModel_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_closure_gen__STATE_VARIABLE_Info_126_126 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_124_124;
        break;
      case (MR_Integer) 2:
        ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_124_124, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_126_126);
        break;
      case (MR_Integer) 1:
        ml_backend__ml_closure_gen__STATE_VARIABLE_Info_126_126 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_124_124;
        break;
    }
    ml_backend__ml_closure_gen__WrapperFuncBody_91 = ml_backend__ml_code_util__ml_gen_block_4_f_0(ml_backend__ml_closure_gen__LocalVarDefns_90, ml_backend__ml_closure_gen__FuncDefns_78, ml_backend__ml_closure_gen__Stmts_86, ml_backend__ml_closure_gen__Context_14);
    {
      ml_backend__ml_closure_gen__Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_127, 0) = ((MR_Box) (ml_backend__ml_closure_gen__WrapperParams_51));
    }
    ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0(ml_backend__ml_closure_gen__Var_127, &ml_backend__ml_closure_gen__WrapperFuncName_92, ml_backend__ml_closure_gen__WrapperFuncRval_15, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_126_126, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_128_128);
    ml_backend__ml_closure_gen__ml_gen_wrapper_func_7_p_0(ml_backend__ml_closure_gen__WrapperFuncName_92, ml_backend__ml_closure_gen__WrapperParams_51, ml_backend__ml_closure_gen__Context_14, ml_backend__ml_closure_gen__WrapperFuncBody_91, &ml_backend__ml_closure_gen__WrapperFuncDefn_93, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_128_128, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_129_129);
    *ml_backend__ml_closure_gen__WrapperFuncType_16 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_closure_gen__WrapperParams_51);
    ml_backend__ml_gen_info__ml_gen_info_add_closure_wrapper_defn_3_p_0(ml_backend__ml_closure_gen__WrapperFuncDefn_93, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_129_129, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_95);
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_field_lvals_7_p_0(
  MR_Word ml_backend__ml_closure_gen__ClosureLval_8,
  MR_Integer ml_backend__ml_closure_gen__Offset_9,
  MR_Integer ml_backend__ml_closure_gen__ArgNum_10,
  MR_Integer ml_backend__ml_closure_gen__NumClosureArgs_11,
  MR_Word * ml_backend__ml_closure_gen__ClosureArgLvals_12,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_17,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_18)
{
  {
    MR_bool ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__ArgNum_10 > ml_backend__ml_closure_gen__NumClosureArgs_11);

    if (ml_backend__ml_closure_gen__succeeded)
    {
      *ml_backend__ml_closure_gen__ClosureArgLvals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ml_backend__ml_closure_gen__STATE_VARIABLE_Info_18 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_17;
    }
    else
    {
      MR_Word ml_backend__ml_closure_gen__FieldId_14;
      MR_Word ml_backend__ml_closure_gen__FieldLval_15;
      MR_Word ml_backend__ml_closure_gen__ClosureArgLvals0_16;
      MR_Word ml_backend__ml_closure_gen__Var_19;
      MR_Word ml_backend__ml_closure_gen__Var_20;
      MR_Integer ml_backend__ml_closure_gen__Var_21 = (ml_backend__ml_closure_gen__ArgNum_10 + ml_backend__ml_closure_gen__Offset_9);
      MR_Word ml_backend__ml_closure_gen__Var_24;
      MR_Integer ml_backend__ml_closure_gen__Var_27;

      {
        ml_backend__ml_closure_gen__Var_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__Var_20, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Var_21));
      }
      {
        ml_backend__ml_closure_gen__Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_19, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_20));
      }
      {
        ml_backend__ml_closure_gen__FieldId_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__FieldId_14, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Var_19));
      }
      {
        ml_backend__ml_closure_gen__Var_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__Var_24, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureLval_8));
      }
      {
        ml_backend__ml_closure_gen__FieldLval_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__FieldLval_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_3[0])));
        MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__FieldLval_15, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_24));
        MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__FieldLval_15, 2) = ((MR_Box) (ml_backend__ml_closure_gen__FieldId_14));
        MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__FieldLval_15, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__FieldLval_15, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      }
      ml_backend__ml_closure_gen__Var_27 = (ml_backend__ml_closure_gen__ArgNum_10 + (MR_Integer) 1);
      ml_backend__ml_closure_gen__ml_gen_closure_field_lvals_7_p_0(ml_backend__ml_closure_gen__ClosureLval_8, ml_backend__ml_closure_gen__Offset_9, ml_backend__ml_closure_gen__Var_27, ml_backend__ml_closure_gen__NumClosureArgs_11, &ml_backend__ml_closure_gen__ClosureArgLvals0_16, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_17, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_18);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ml_backend__ml_closure_gen__ClosureArgLvals_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_closure_gen__FieldLval_15));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureArgLvals0_16));
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_p_0(
  MR_Word ml_backend__ml_closure_gen__ClosureKind_10,
  MR_Word ml_backend__ml_closure_gen__ClosureArgName_11,
  MR_Word ml_backend__ml_closure_gen__ClosureArgType_12,
  MR_Word ml_backend__ml_closure_gen__PredId_13,
  MR_Integer ml_backend__ml_closure_gen__ProcId_14,
  MR_Word ml_backend__ml_closure_gen__Context_15,
  MR_Word * ml_backend__ml_closure_gen__GC_Decls_16,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_33,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_34)
{
  {
    MR_Word ml_backend__ml_closure_gen__ClosureArgLval_18;
    MR_Word ml_backend__ml_closure_gen__ClosureLayoutPtrName_19;
    MR_Word ml_backend__ml_closure_gen__ClosureLayoutPtrType_20;
    MR_Word ml_backend__ml_closure_gen__ClosureLayoutPtrLval_21;
    MR_Word ml_backend__ml_closure_gen__TypeParamsName_22;
    MR_Word ml_backend__ml_closure_gen__TypeParamsType_23;
    MR_Word ml_backend__ml_closure_gen__TypeParamsLval_24;
    MR_Word ml_backend__ml_closure_gen__ClosureLayoutPtrGCInit_26;
    MR_Word ml_backend__ml_closure_gen__TypeParamsGCInitFragments_27;
    MR_Word ml_backend__ml_closure_gen__TypeParamsGCInit_30;
    MR_Word ml_backend__ml_closure_gen__ClosureLayoutPtrDecl_31;
    MR_Word ml_backend__ml_closure_gen__TypeParamsDecl_32;
    MR_Word ml_backend__ml_closure_gen__Var_90;
    MR_Word ml_backend__ml_closure_gen__Var_92;
    MR_Word ml_backend__ml_closure_gen__Var_93;
    MR_Word ml_backend__ml_closure_gen__Var_94;

    ml_backend__ml_code_util__ml_gen_local_var_lval_4_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_33, ml_backend__ml_closure_gen__ClosureArgName_11, ml_backend__ml_closure_gen__ClosureArgType_12, &ml_backend__ml_closure_gen__ClosureArgLval_18);
    ml_backend__ml_closure_gen__ClosureLayoutPtrName_19 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[10]);
    ml_backend__ml_closure_gen__ClosureLayoutPtrType_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
    ml_backend__ml_code_util__ml_gen_local_var_lval_4_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_33, ml_backend__ml_closure_gen__ClosureLayoutPtrName_19, ml_backend__ml_closure_gen__ClosureLayoutPtrType_20, &ml_backend__ml_closure_gen__ClosureLayoutPtrLval_21);
    ml_backend__ml_closure_gen__TypeParamsName_22 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[11]);
    ml_backend__ml_closure_gen__TypeParamsType_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
    ml_backend__ml_code_util__ml_gen_local_var_lval_4_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_33, ml_backend__ml_closure_gen__TypeParamsName_22, ml_backend__ml_closure_gen__TypeParamsType_23, &ml_backend__ml_closure_gen__TypeParamsLval_24);
    switch (ml_backend__ml_closure_gen__ClosureKind_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_closure_gen__ClosureLayoutPtrGCInitFragments_25;
          MR_Word ml_backend__ml_closure_gen__Var_64;
          MR_Word ml_backend__ml_closure_gen__Var_65;
          MR_Word ml_backend__ml_closure_gen__Var_68;
          MR_Word ml_backend__ml_closure_gen__Var_69;
          MR_Word ml_backend__ml_closure_gen__Var_70;
          MR_Word ml_backend__ml_closure_gen__Var_75;
          MR_Word ml_backend__ml_closure_gen__Var_77;
          MR_Word ml_backend__ml_closure_gen__Var_78;
          MR_Word ml_backend__ml_closure_gen__Var_83;

          {
            ml_backend__ml_closure_gen__Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_64, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureLayoutPtrLval_21));
          }
          {
            ml_backend__ml_closure_gen__Var_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__Var_70, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureArgLval_18));
          }
          {
            ml_backend__ml_closure_gen__Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_69, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_70));
          }
          {
            ml_backend__ml_closure_gen__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_68, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Var_69));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[12])));
          }
          {
            ml_backend__ml_closure_gen__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_closure_gen_scalar_common_3[4])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_65, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_68));
          }
          {
            ml_backend__ml_closure_gen__ClosureLayoutPtrGCInitFragments_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__ClosureLayoutPtrGCInitFragments_25, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Var_64));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__ClosureLayoutPtrGCInitFragments_25, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_65));
          }
          {
            ml_backend__ml_closure_gen__Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_75, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_75, 2) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureLayoutPtrGCInitFragments_25));
          }
          {
            ml_backend__ml_closure_gen__ClosureLayoutPtrGCInit_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ClosureLayoutPtrGCInit_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ClosureLayoutPtrGCInit_26, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_75));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ClosureLayoutPtrGCInit_26, 2) = ((MR_Box) (ml_backend__ml_closure_gen__Context_15));
          }
          {
            ml_backend__ml_closure_gen__Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_77, 1) = ((MR_Box) (ml_backend__ml_closure_gen__TypeParamsLval_24));
          }
          {
            ml_backend__ml_closure_gen__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_83, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Var_69));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[13])));
          }
          {
            ml_backend__ml_closure_gen__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_closure_gen_scalar_common_3[6])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_78, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_83));
          }
          {
            ml_backend__ml_closure_gen__TypeParamsGCInitFragments_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__TypeParamsGCInitFragments_27, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Var_77));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__TypeParamsGCInitFragments_27, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_78));
          }
          *ml_backend__ml_closure_gen__STATE_VARIABLE_Info_34 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_33;
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_closure_gen.ml_gen_closure_wrapper_gc_decls\'/9", (MR_String) "special_pred_closure");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_closure_gen__ClosureLayoutRval_28;
          MR_Word ml_backend__ml_closure_gen__ClosureLayoutType_29;
          MR_Word ml_backend__ml_closure_gen__Var_40;
          MR_Word ml_backend__ml_closure_gen__Var_41;
          MR_Word ml_backend__ml_closure_gen__Var_42;
          MR_Word ml_backend__ml_closure_gen__Var_43;
          MR_Word ml_backend__ml_closure_gen__Var_44;
          MR_Word ml_backend__ml_closure_gen__Var_51;
          MR_Word ml_backend__ml_closure_gen__Var_52;
          MR_Word ml_backend__ml_closure_gen__Var_53;
          MR_Word ml_backend__ml_closure_gen__Var_54;
          MR_Word ml_backend__ml_closure_gen__Var_57;
          MR_Word ml_backend__ml_closure_gen__Var_58;
          MR_Word ml_backend__ml_closure_gen__Var_59;

          ml_backend__ml_closure_gen__ml_gen_closure_layout_7_p_0(ml_backend__ml_closure_gen__PredId_13, ml_backend__ml_closure_gen__ProcId_14, ml_backend__ml_closure_gen__Context_15, &ml_backend__ml_closure_gen__ClosureLayoutRval_28, &ml_backend__ml_closure_gen__ClosureLayoutType_29, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_33, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_34);
          {
            ml_backend__ml_closure_gen__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_42, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureLayoutType_29));
          }
          {
            ml_backend__ml_closure_gen__Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_41, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_42));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_41, 2) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureLayoutRval_28));
          }
          {
            ml_backend__ml_closure_gen__Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__Var_40, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureLayoutPtrLval_21));
            MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__Var_40, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_41));
          }
          {
            ml_backend__ml_closure_gen__ClosureLayoutPtrGCInit_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ClosureLayoutPtrGCInit_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ClosureLayoutPtrGCInit_26, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_40));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ClosureLayoutPtrGCInit_26, 2) = ((MR_Box) (ml_backend__ml_closure_gen__Context_15));
          }
          {
            ml_backend__ml_closure_gen__Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_43, 1) = ((MR_Box) (ml_backend__ml_closure_gen__TypeParamsLval_24));
          }
          {
            ml_backend__ml_closure_gen__Var_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__Var_53, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureArgLval_18));
          }
          {
            ml_backend__ml_closure_gen__Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_52, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_53));
          }
          {
            ml_backend__ml_closure_gen__Var_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__Var_59, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureLayoutPtrLval_21));
          }
          {
            ml_backend__ml_closure_gen__Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_58, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_59));
          }
          {
            ml_backend__ml_closure_gen__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_57, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Var_58));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[13])));
          }
          {
            ml_backend__ml_closure_gen__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_closure_gen_scalar_common_3[9])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_54, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_57));
          }
          {
            ml_backend__ml_closure_gen__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_51, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Var_52));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_51, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_54));
          }
          {
            ml_backend__ml_closure_gen__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_closure_gen_scalar_common_3[8])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_44, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_51));
          }
          {
            ml_backend__ml_closure_gen__TypeParamsGCInitFragments_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__TypeParamsGCInitFragments_27, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Var_43));
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__TypeParamsGCInitFragments_27, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_44));
          }
        }
        break;
    }
    {
      ml_backend__ml_closure_gen__Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_90, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_90, 2) = ((MR_Box) (ml_backend__ml_closure_gen__TypeParamsGCInitFragments_27));
    }
    {
      ml_backend__ml_closure_gen__TypeParamsGCInit_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__TypeParamsGCInit_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__TypeParamsGCInit_30, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_90));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__TypeParamsGCInit_30, 2) = ((MR_Box) (ml_backend__ml_closure_gen__Context_15));
    }
    {
      ml_backend__ml_closure_gen__Var_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__Var_92, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureLayoutPtrGCInit_26));
    }
    ml_backend__ml_closure_gen__ClosureLayoutPtrDecl_31 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_closure_gen__ClosureLayoutPtrName_19, ml_backend__ml_closure_gen__ClosureLayoutPtrType_20, ml_backend__ml_closure_gen__Var_92, ml_backend__ml_closure_gen__Context_15);
    {
      ml_backend__ml_closure_gen__Var_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__Var_93, 0) = ((MR_Box) (ml_backend__ml_closure_gen__TypeParamsGCInit_30));
    }
    ml_backend__ml_closure_gen__TypeParamsDecl_32 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_closure_gen__TypeParamsName_22, ml_backend__ml_closure_gen__TypeParamsType_23, ml_backend__ml_closure_gen__Var_93, ml_backend__ml_closure_gen__Context_15);
    {
      ml_backend__ml_closure_gen__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_94, 0) = ((MR_Box) (ml_backend__ml_closure_gen__TypeParamsDecl_32));
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_closure_gen__GC_Decls_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureLayoutPtrDecl_31));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_94));
    }
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_layout_7_p_0_1(
  MR_Box ml_backend__ml_closure_gen__closure_arg,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_closure_gen__closure = ml_backend__ml_closure_gen__closure_arg;
    MR_Word ml_backend__ml_closure_gen__conv1_HeadVar__4_4;
    MR_Word ml_backend__ml_closure_gen__conv0_STATE_VARIABLE_GlobalData_21;

    ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_1), &ml_backend__ml_closure_gen__conv1_HeadVar__4_4, ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_3), &ml_backend__ml_closure_gen__conv0_STATE_VARIABLE_GlobalData_21);
    *ml_backend__ml_closure_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_closure_gen__conv1_HeadVar__4_4));
    *ml_backend__ml_closure_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_closure_gen__conv0_STATE_VARIABLE_GlobalData_21));
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_layout_7_p_0(
  MR_Word ml_backend__ml_closure_gen__PredId_8,
  MR_Integer ml_backend__ml_closure_gen__ProcId_9,
  MR_Word ml_backend__ml_closure_gen__Context_10,
  MR_Word * ml_backend__ml_closure_gen__ClosureLayoutAddrRval_11,
  MR_Word * ml_backend__ml_closure_gen__ClosureLayoutType_12,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_30,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_31)
{
  {
    MR_Word ml_backend__ml_closure_gen__TypeInfo_30_79;
    MR_Word ml_backend__ml_closure_gen__ModuleInfo_14;
    MR_Word ml_backend__ml_closure_gen__ClosureLayoutInfo_15;
    MR_Word ml_backend__ml_closure_gen__ClosureArgs_19;
    MR_Word ml_backend__ml_closure_gen__TVarLocnMap_20;
    MR_Word ml_backend__ml_closure_gen__Target_21;
    MR_Word ml_backend__ml_closure_gen__ClosureArgInitsAndTypes_22;
    MR_Word ml_backend__ml_closure_gen__ClosureArgInits_23;
    MR_Word ml_backend__ml_closure_gen__TVarVectorRval_24;
    MR_Word ml_backend__ml_closure_gen__TVarVectorType_25;
    MR_Word ml_backend__ml_closure_gen__InitTVarVector_26;
    MR_Word ml_backend__ml_closure_gen__Inits_27;
    MR_Word ml_backend__ml_closure_gen__ModuleName_28;
    MR_Word ml_backend__ml_closure_gen__MLDS_ModuleName_29;
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_33_33;
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_34_34;
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_36_36;
    MR_Word ml_backend__ml_closure_gen__Var_37;
    MR_Word ml_backend__ml_closure_gen__Var_38;
    MR_Word ml_backend__ml_closure_gen__Var_39;
    MR_Word ml_backend__ml_closure_gen__Var_42;
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_43_43;
    MR_Word ml_backend__ml_closure_gen__ArgInitsAndTypes_63;
    MR_Integer ml_backend__ml_closure_gen__Length_64;
    MR_Word ml_backend__ml_closure_gen__LengthRval_65;
    MR_Word ml_backend__ml_closure_gen__CastLengthRval_66;
    MR_Word ml_backend__ml_closure_gen__LengthInitAndType_68;
    MR_Word ml_backend__ml_closure_gen__Var_69;
    MR_Word ml_backend__ml_closure_gen__Var_71;
    MR_Word ml_backend__ml_closure_gen__Var_73;
    MR_Box ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_34_34;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_30, &ml_backend__ml_closure_gen__ModuleInfo_14);
    ll_backend__continuation_info__generate_closure_layout_4_p_0(ml_backend__ml_closure_gen__ModuleInfo_14, ml_backend__ml_closure_gen__PredId_8, ml_backend__ml_closure_gen__ProcId_9, &ml_backend__ml_closure_gen__ClosureLayoutInfo_15);
    ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_30, &ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_33_33);
    ml_backend__ml_closure_gen__ClosureArgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__ClosureLayoutInfo_15, (MR_Integer) 0)));
    ml_backend__ml_closure_gen__TVarLocnMap_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__ClosureLayoutInfo_15, (MR_Integer) 1)));
    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_30, &ml_backend__ml_closure_gen__Target_21);
    {
      ml_backend__ml_closure_gen__Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_69, 0) = ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_69, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ml_gen_closure_layout_7_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_69, 3) = ((MR_Box) (ml_backend__ml_closure_gen__ModuleInfo_14));
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_69, 4) = ((MR_Box) (ml_backend__ml_closure_gen__Target_21));
    }
    ml_backend__ml_closure_gen__TypeInfo_30_79 = (MR_Word) &ml_backend__ml_closure_gen_scalar_common_2[0];
    mercury__list__map_foldl_5_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_closure_arg_info_0, ml_backend__ml_closure_gen__TypeInfo_30_79, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__ml_closure_gen__Var_69, ml_backend__ml_closure_gen__ClosureArgs_19, &ml_backend__ml_closure_gen__ArgInitsAndTypes_63, ((MR_Box) (ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_33_33)), &ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_34_34);
    ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_34_34 = ((MR_Word) ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_34_34);
    ml_backend__ml_closure_gen__Length_64 = mercury__list__length_1_f_0(ml_backend__ml_closure_gen__TypeInfo_30_79, ml_backend__ml_closure_gen__ArgInitsAndTypes_63);
    {
      ml_backend__ml_closure_gen__Var_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__Var_71, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Length_64));
    }
    {
      ml_backend__ml_closure_gen__LengthRval_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__LengthRval_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__LengthRval_65, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_71));
    }
    {
      ml_backend__ml_closure_gen__CastLengthRval_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__CastLengthRval_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__CastLengthRval_66, 1) = ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_3[3]));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__CastLengthRval_66, 2) = ((MR_Box) (ml_backend__ml_closure_gen__LengthRval_65));
    }
    {
      ml_backend__ml_closure_gen__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_73, 0) = ((MR_Box) (ml_backend__ml_closure_gen__CastLengthRval_66));
    }
    {
      ml_backend__ml_closure_gen__LengthInitAndType_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__LengthInitAndType_68, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Var_73));
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__LengthInitAndType_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
    }
    {
      ml_backend__ml_closure_gen__ClosureArgInitsAndTypes_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__ClosureArgInitsAndTypes_22, 0) = ((MR_Box) (ml_backend__ml_closure_gen__LengthInitAndType_68));
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__ClosureArgInitsAndTypes_22, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ArgInitsAndTypes_63));
    }
    mercury__assoc_list__keys_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, ml_backend__ml_closure_gen__ClosureArgInitsAndTypes_22, &ml_backend__ml_closure_gen__ClosureArgInits_23);
    ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_p_0(ml_backend__ml_closure_gen__ModuleInfo_14, (MR_Integer) 3, ml_backend__ml_closure_gen__Context_10, ml_backend__ml_closure_gen__TVarLocnMap_20, &ml_backend__ml_closure_gen__TVarVectorRval_24, &ml_backend__ml_closure_gen__TVarVectorType_25, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_34_34, &ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_36_36);
    {
      ml_backend__ml_closure_gen__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_38, 0) = ((MR_Box) (ml_backend__ml_closure_gen__TVarVectorType_25));
    }
    {
      ml_backend__ml_closure_gen__Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_37, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_38));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_37, 2) = ((MR_Box) (ml_backend__ml_closure_gen__TVarVectorRval_24));
    }
    {
      ml_backend__ml_closure_gen__InitTVarVector_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__InitTVarVector_26, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Var_37));
    }
    {
      ml_backend__ml_closure_gen__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_39, 0) = ((MR_Box) (ml_backend__ml_closure_gen__InitTVarVector_26));
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_39, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureArgInits_23));
    }
    {
      ml_backend__ml_closure_gen__Inits_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Inits_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_3[2])));
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Inits_27, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_39));
    }
    hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_closure_gen__ModuleInfo_14, &ml_backend__ml_closure_gen__ModuleName_28);
    ml_backend__ml_closure_gen__MLDS_ModuleName_29 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_closure_gen__ModuleName_28);
    *ml_backend__ml_closure_gen__ClosureLayoutType_12 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[9]);
    {
      ml_backend__ml_closure_gen__Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_42, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Inits_27));
    }
    ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0(ml_backend__ml_closure_gen__MLDS_ModuleName_29, (MR_Integer) 2, *ml_backend__ml_closure_gen__ClosureLayoutType_12, ml_backend__ml_closure_gen__Var_42, ml_backend__ml_closure_gen__Context_10, ml_backend__ml_closure_gen__ClosureLayoutAddrRval_11, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_36_36, &ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_43_43);
    ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_43_43, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_30, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_31);
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_p_0(
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_9,
  MR_Word ml_backend__ml_closure_gen__ConstVarKind_10,
  MR_Word ml_backend__ml_closure_gen__Context_11,
  MR_Word ml_backend__ml_closure_gen__TVarLocnMap_12,
  MR_Word * ml_backend__ml_closure_gen__TVarVectorAddrRval_13,
  MR_Word * ml_backend__ml_closure_gen__ArrayType_14,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_21,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_22)
{
  {
    MR_bool ml_backend__ml_closure_gen__succeeded;

    *ml_backend__ml_closure_gen__ArrayType_14 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[4]);
    ml_backend__ml_closure_gen__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &ml_backend__ml_closure_gen_scalar_common_1[1], (MR_Word) &ml_backend__ml_closure_gen_scalar_common_1[2], ml_backend__ml_closure_gen__TVarLocnMap_12);
    if (ml_backend__ml_closure_gen__succeeded)
    {
      *ml_backend__ml_closure_gen__TVarVectorAddrRval_13 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[6]);
      *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_22 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_21;
    }
    else
    {
      MR_Word ml_backend__ml_closure_gen__Vector_16;
      MR_Word ml_backend__ml_closure_gen__Initializer_18;
      MR_Word ml_backend__ml_closure_gen__ModuleName_19;
      MR_Word ml_backend__ml_closure_gen__MLDS_ModuleName_20;
      MR_Word ml_backend__ml_closure_gen__TVarLocns_31;
      MR_Word ml_backend__ml_closure_gen__TypeParamLocs_32;
      MR_Integer ml_backend__ml_closure_gen__TypeParamsLength_33;
      MR_Word ml_backend__ml_closure_gen__LengthRval_34;
      MR_Word ml_backend__ml_closure_gen__Var_36;
      MR_Word ml_backend__ml_closure_gen__Var_37;
      MR_Integer ml_backend__ml_closure_gen__Var_38;
      MR_Word ml_backend__ml_closure_gen___VectorTypes_17;

      mercury__map__to_assoc_list_2_p_0((MR_Word) &ml_backend__ml_closure_gen_scalar_common_1[1], (MR_Word) &ml_backend__ml_closure_gen_scalar_common_1[2], ml_backend__ml_closure_gen__TVarLocnMap_12, &ml_backend__ml_closure_gen__TVarLocns_31);
      ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_p_0(ml_backend__ml_closure_gen__TVarLocns_31, (MR_Integer) 1, &ml_backend__ml_closure_gen__TypeParamLocs_32);
      mercury__list__length_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__ml_closure_gen__TypeParamLocs_32, &ml_backend__ml_closure_gen__TypeParamsLength_33);
      {
        ml_backend__ml_closure_gen__Var_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__Var_36, 0) = ((MR_Box) (ml_backend__ml_closure_gen__TypeParamsLength_33));
      }
      {
        ml_backend__ml_closure_gen__LengthRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__LengthRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__LengthRval_34, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_36));
      }
      {
        ml_backend__ml_closure_gen__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_37, 0) = ((MR_Box) (ml_backend__ml_closure_gen__LengthRval_34));
      }
      {
        ml_backend__ml_closure_gen__Vector_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Vector_16, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Var_37));
        MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Vector_16, 1) = ((MR_Box) (ml_backend__ml_closure_gen__TypeParamLocs_32));
      }
      ml_backend__ml_closure_gen__Var_38 = (ml_backend__ml_closure_gen__TypeParamsLength_33 + (MR_Integer) 1);
      ml_backend__ml_closure_gen___VectorTypes_17 = mercury__list__duplicate_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, ml_backend__ml_closure_gen__Var_38, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))));
      {
        ml_backend__ml_closure_gen__Initializer_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Initializer_18, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Vector_16));
      }
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_closure_gen__ModuleInfo_9, &ml_backend__ml_closure_gen__ModuleName_19);
      ml_backend__ml_closure_gen__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_closure_gen__ModuleName_19);
      ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0(ml_backend__ml_closure_gen__MLDS_ModuleName_20, ml_backend__ml_closure_gen__ConstVarKind_10, *ml_backend__ml_closure_gen__ArrayType_14, ml_backend__ml_closure_gen__Initializer_18, ml_backend__ml_closure_gen__Context_11, ml_backend__ml_closure_gen__TVarVectorAddrRval_13, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_21, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_22);
    }
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_p_0(
  MR_Word ml_backend__ml_closure_gen__HeadVar__1_1,
  MR_Integer ml_backend__ml_closure_gen__CurSlot_2,
  MR_Word * ml_backend__ml_closure_gen__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_closure_gen__succeeded;

    if ((ml_backend__ml_closure_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ml_backend__ml_closure_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word ml_backend__ml_closure_gen__TVar_5;
      MR_Word ml_backend__ml_closure_gen__Locns_6;
      MR_Word ml_backend__ml_closure_gen__TVarLocns_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ml_backend__ml_closure_gen__TVarNum_10;
      MR_Integer ml_backend__ml_closure_gen__NextSlot_11;
      MR_Word ml_backend__ml_closure_gen__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__HeadVar__1_1, (MR_Integer) 0)));

      ml_backend__ml_closure_gen__TVar_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_18, (MR_Integer) 0)));
      ml_backend__ml_closure_gen__Locns_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Var_18, (MR_Integer) 1)));
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, ml_backend__ml_closure_gen__TVar_5, &ml_backend__ml_closure_gen__TVarNum_10);
      ml_backend__ml_closure_gen__NextSlot_11 = (ml_backend__ml_closure_gen__CurSlot_2 + (MR_Integer) 1);
      ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__TVarNum_10 == ml_backend__ml_closure_gen__CurSlot_2);
      if (ml_backend__ml_closure_gen__succeeded)
      {
        MR_Word ml_backend__ml_closure_gen__Locn_14;
        MR_Integer ml_backend__ml_closure_gen__LocnAsInt_15;
        MR_Word ml_backend__ml_closure_gen__Rval_16;
        MR_Word ml_backend__ml_closure_gen__VectorTail_17;
        MR_Word ml_backend__ml_closure_gen__Var_22;
        MR_Word ml_backend__ml_closure_gen__Var_23;
        MR_Word ml_backend__ml_closure_gen__LeastLocn_12;
        MR_Word ml_backend__ml_closure_gen__Var_13;
        MR_Box ml_backend__ml_closure_gen__conv0_LeastLocn_12;

        ml_backend__ml_closure_gen__succeeded = mercury__set__remove_least_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0, &ml_backend__ml_closure_gen__conv0_LeastLocn_12, ml_backend__ml_closure_gen__Locns_6, &ml_backend__ml_closure_gen__Var_13);
        if (ml_backend__ml_closure_gen__succeeded)
        {
          ml_backend__ml_closure_gen__LeastLocn_12 = ((MR_Word) ml_backend__ml_closure_gen__conv0_LeastLocn_12);
          ml_backend__ml_closure_gen__succeeded = MR_TRUE;
        }
        if (ml_backend__ml_closure_gen__succeeded)
          ml_backend__ml_closure_gen__Locn_14 = ml_backend__ml_closure_gen__LeastLocn_12;
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_closure_gen.ml_stack_layout_construct_type_param_locn_vector\'/3", (MR_String) "tvar has empty set of locations");
            return;
          }
        }
        ll_backend__stack_layout__represent_locn_as_int_2_p_0(ml_backend__ml_closure_gen__Locn_14, &ml_backend__ml_closure_gen__LocnAsInt_15);
        {
          ml_backend__ml_closure_gen__Var_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__Var_22, 0) = ((MR_Box) (ml_backend__ml_closure_gen__LocnAsInt_15));
        }
        {
          ml_backend__ml_closure_gen__Rval_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Rval_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Rval_16, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_22));
        }
        ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_p_0(ml_backend__ml_closure_gen__TVarLocns_7, ml_backend__ml_closure_gen__NextSlot_11, &ml_backend__ml_closure_gen__VectorTail_17);
        {
          ml_backend__ml_closure_gen__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Var_23, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Rval_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_closure_gen__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Var_23));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__VectorTail_17));
        }
      }
      else
      {
        ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__TVarNum_10 > ml_backend__ml_closure_gen__CurSlot_2);
        if (ml_backend__ml_closure_gen__succeeded)
        {
          MR_Word ml_backend__ml_closure_gen__VectorTail_32;

          ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_p_0(ml_backend__ml_closure_gen__HeadVar__1_1, ml_backend__ml_closure_gen__NextSlot_11, &ml_backend__ml_closure_gen__VectorTail_32);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_closure_gen__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_3[1])));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__VectorTail_32));
          }
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_closure_gen.ml_stack_layout_construct_type_param_locn_vector\'/3", (MR_String) "unsorted tvars");
            return;
          }
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_p_0(
  MR_Word ml_backend__ml_closure_gen__Names_13,
  MR_Word ml_backend__ml_closure_gen__Types_14,
  MR_Word ml_backend__ml_closure_gen__Modes_15,
  MR_Word ml_backend__ml_closure_gen__PredOrFunc_16,
  MR_Word ml_backend__ml_closure_gen__CodeModel_17,
  MR_Word ml_backend__ml_closure_gen__Context_18,
  MR_Integer ml_backend__ml_closure_gen__ArgNum_19,
  MR_Word * ml_backend__ml_closure_gen__Defns_20,
  MR_Word * ml_backend__ml_closure_gen__Lvals_21,
  MR_Word * ml_backend__ml_closure_gen__CopyOutLvals_22,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_42,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_43)
{
  {
    MR_bool ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__Names_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (ml_backend__ml_closure_gen__succeeded)
    {
      ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__Types_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (ml_backend__ml_closure_gen__succeeded)
        ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__Modes_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (ml_backend__ml_closure_gen__succeeded)
    {
      *ml_backend__ml_closure_gen__Lvals_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ml_backend__ml_closure_gen__CopyOutLvals_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ml_backend__ml_closure_gen__Defns_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ml_backend__ml_closure_gen__STATE_VARIABLE_Info_43 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_42;
    }
    else
    {
      MR_Word ml_backend__ml_closure_gen__Name_24;
      MR_Word ml_backend__ml_closure_gen__NamesTail_25;
      MR_Word ml_backend__ml_closure_gen__Type_26;
      MR_Word ml_backend__ml_closure_gen__TypesTail_27;
      MR_Word ml_backend__ml_closure_gen__Mode_28;
      MR_Word ml_backend__ml_closure_gen__ModesTail_29;

      ml_backend__ml_closure_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_closure_gen__Names_13)) == (MR_mktag((MR_Integer) 1)));
      if (ml_backend__ml_closure_gen__succeeded)
      {
        ml_backend__ml_closure_gen__Name_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Names_13, (MR_Integer) 0)));
        ml_backend__ml_closure_gen__NamesTail_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Names_13, (MR_Integer) 1)));
        ml_backend__ml_closure_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_closure_gen__Types_14)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_closure_gen__succeeded)
        {
          ml_backend__ml_closure_gen__Type_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Types_14, (MR_Integer) 0)));
          ml_backend__ml_closure_gen__TypesTail_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Types_14, (MR_Integer) 1)));
          ml_backend__ml_closure_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_closure_gen__Modes_15)) == (MR_mktag((MR_Integer) 1)));
          if (ml_backend__ml_closure_gen__succeeded)
          {
            ml_backend__ml_closure_gen__Mode_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Modes_15, (MR_Integer) 0)));
            ml_backend__ml_closure_gen__ModesTail_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Modes_15, (MR_Integer) 1)));
          }
        }
      }
      if (ml_backend__ml_closure_gen__succeeded)
      {
        MR_Word ml_backend__ml_closure_gen__DefnsTail_30;
        MR_Word ml_backend__ml_closure_gen__LvalsTail_31;
        MR_Word ml_backend__ml_closure_gen__CopyOutLvalsTail_32;
        MR_Word ml_backend__ml_closure_gen__MLDS_Type_33;
        MR_Word ml_backend__ml_closure_gen__VarLval_34;
        MR_Word ml_backend__ml_closure_gen__ModuleInfo_35;
        MR_Word ml_backend__ml_closure_gen__ArgTopFunctorMode_36;
        MR_Word ml_backend__ml_closure_gen__Lval_37;
        MR_Integer ml_backend__ml_closure_gen__Var_44 = (ml_backend__ml_closure_gen__ArgNum_19 + (MR_Integer) 1);
        MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_45_45;

        ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_p_0(ml_backend__ml_closure_gen__NamesTail_25, ml_backend__ml_closure_gen__TypesTail_27, ml_backend__ml_closure_gen__ModesTail_29, ml_backend__ml_closure_gen__PredOrFunc_16, ml_backend__ml_closure_gen__CodeModel_17, ml_backend__ml_closure_gen__Context_18, ml_backend__ml_closure_gen__Var_44, &ml_backend__ml_closure_gen__DefnsTail_30, &ml_backend__ml_closure_gen__LvalsTail_31, &ml_backend__ml_closure_gen__CopyOutLvalsTail_32, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_42, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_45_45);
        ml_backend__ml_code_util__ml_gen_type_3_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_45_45, ml_backend__ml_closure_gen__Type_26, &ml_backend__ml_closure_gen__MLDS_Type_33);
        ml_backend__ml_code_util__ml_gen_local_var_lval_4_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_45_45, ml_backend__ml_closure_gen__Name_24, ml_backend__ml_closure_gen__MLDS_Type_33, &ml_backend__ml_closure_gen__VarLval_34);
        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_45_45, &ml_backend__ml_closure_gen__ModuleInfo_35);
        check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ml_backend__ml_closure_gen__ModuleInfo_35, ml_backend__ml_closure_gen__Mode_28, ml_backend__ml_closure_gen__Type_26, &ml_backend__ml_closure_gen__ArgTopFunctorMode_36);
        switch (ml_backend__ml_closure_gen__ArgTopFunctorMode_36) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            {
              ml_backend__ml_closure_gen__Lval_37 = ml_backend__ml_closure_gen__VarLval_34;
              *ml_backend__ml_closure_gen__CopyOutLvals_22 = ml_backend__ml_closure_gen__CopyOutLvalsTail_32;
              *ml_backend__ml_closure_gen__Defns_20 = ml_backend__ml_closure_gen__DefnsTail_30;
              *ml_backend__ml_closure_gen__STATE_VARIABLE_Info_43 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_45_45;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_closure_gen__Globals_38;
              MR_Word ml_backend__ml_closure_gen__CopyOut_39;
              MR_Word ml_backend__ml_closure_gen__IsDummy_40;

              ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_45_45, &ml_backend__ml_closure_gen__Globals_38);
              ml_backend__ml_closure_gen__CopyOut_39 = ml_backend__ml_code_util__get_copy_out_option_2_f_0(ml_backend__ml_closure_gen__Globals_38, ml_backend__ml_closure_gen__CodeModel_17);
              ml_backend__ml_closure_gen__IsDummy_40 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_closure_gen__ModuleInfo_35, ml_backend__ml_closure_gen__Type_26);
              ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__CopyOut_39 == (MR_Integer) 1);
              if (!(ml_backend__ml_closure_gen__succeeded))
              {
                ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__PredOrFunc_16 == (MR_Integer) 1);
                if (ml_backend__ml_closure_gen__succeeded)
                {
                  ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__CodeModel_17 == (MR_Integer) 0);
                  if (ml_backend__ml_closure_gen__succeeded)
                  {
                    ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__TypesTail_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (ml_backend__ml_closure_gen__succeeded)
                      ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__IsDummy_40 == (MR_Integer) 1);
                  }
                }
              }
              if (ml_backend__ml_closure_gen__succeeded)
              {
                ml_backend__ml_closure_gen__Lval_37 = ml_backend__ml_closure_gen__VarLval_34;
                switch (ml_backend__ml_closure_gen__IsDummy_40) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *ml_backend__ml_closure_gen__CopyOutLvals_22 = ml_backend__ml_closure_gen__CopyOutLvalsTail_32;
                      *ml_backend__ml_closure_gen__Defns_20 = ml_backend__ml_closure_gen__DefnsTail_30;
                      *ml_backend__ml_closure_gen__STATE_VARIABLE_Info_43 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_45_45;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ml_backend__ml_closure_gen__Defn_41;

                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *ml_backend__ml_closure_gen__CopyOutLvals_22 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Lval_37));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__CopyOutLvalsTail_32));
                      }
                      ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_p_0(ml_backend__ml_closure_gen__Name_24, ml_backend__ml_closure_gen__Type_26, ml_backend__ml_closure_gen__ArgNum_19, ml_backend__ml_closure_gen__Context_18, &ml_backend__ml_closure_gen__Defn_41, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_45_45, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_43);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *ml_backend__ml_closure_gen__Defns_20 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Defn_41));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__DefnsTail_30));
                      }
                    }
                    break;
                }
              }
              else
              {
                MR_Word ml_backend__ml_closure_gen__Var_48;

                {
                  ml_backend__ml_closure_gen__Var_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__Var_48, 0) = ((MR_Box) (ml_backend__ml_closure_gen__VarLval_34));
                }
                {
                  ml_backend__ml_closure_gen__Lval_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Lval_37, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Var_48));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Lval_37, 1) = ((MR_Box) (ml_backend__ml_closure_gen__MLDS_Type_33));
                }
                *ml_backend__ml_closure_gen__CopyOutLvals_22 = ml_backend__ml_closure_gen__CopyOutLvalsTail_32;
                *ml_backend__ml_closure_gen__Defns_20 = ml_backend__ml_closure_gen__DefnsTail_30;
                *ml_backend__ml_closure_gen__STATE_VARIABLE_Info_43 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_45_45;
              }
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_closure_gen__Lvals_21 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Lval_37));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__LvalsTail_31));
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_closure_gen.ml_gen_wrapper_arg_lvals\'/12", (MR_String) "length mismatch");
          return;
        }
      }
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_f_0(
  MR_Integer ml_backend__ml_closure_gen__Num_4,
  MR_Integer ml_backend__ml_closure_gen__Max_5)
{
  {
    MR_bool ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__Num_4 > ml_backend__ml_closure_gen__Max_5);
    MR_Word ml_backend__ml_closure_gen__VarNames_6;

    if (ml_backend__ml_closure_gen__succeeded)
      ml_backend__ml_closure_gen__VarNames_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word ml_backend__ml_closure_gen__HeadVarName_7;
      MR_Word ml_backend__ml_closure_gen__TailVarNames_8;
      MR_Word ml_backend__ml_closure_gen__Var_9;
      MR_Integer ml_backend__ml_closure_gen__Var_10;

      {
        ml_backend__ml_closure_gen__Var_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Var_9, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Num_4));
      }
      {
        ml_backend__ml_closure_gen__HeadVarName_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__HeadVarName_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__HeadVarName_7, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Var_9));
      }
      ml_backend__ml_closure_gen__Var_10 = (ml_backend__ml_closure_gen__Num_4 + (MR_Integer) 1);
      ml_backend__ml_closure_gen__TailVarNames_8 = ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_f_0(ml_backend__ml_closure_gen__Var_10, ml_backend__ml_closure_gen__Max_5);
      {
        ml_backend__ml_closure_gen__VarNames_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__VarNames_6, 0) = ((MR_Box) (ml_backend__ml_closure_gen__HeadVarName_7));
        MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__VarNames_6, 1) = ((MR_Box) (ml_backend__ml_closure_gen__TailVarNames_8));
      }
    }
    return ml_backend__ml_closure_gen__VarNames_6;
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_wrapper_func_7_p_0(
  MR_Word ml_backend__ml_closure_gen__MaybeAux_8,
  MR_Word ml_backend__ml_closure_gen__FuncParams_9,
  MR_Word ml_backend__ml_closure_gen__Context_10,
  MR_Word ml_backend__ml_closure_gen__Stmt_11,
  MR_Word * ml_backend__ml_closure_gen__FunctionDefn_12,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_26,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_27)
{
  {
    MR_Word ml_backend__ml_closure_gen__FunctionDefn0_14;
    MR_Word ml_backend__ml_closure_gen__Name_15;
    MR_Word ml_backend__ml_closure_gen__Ctxt_16;
    MR_Word ml_backend__ml_closure_gen__DeclFlags0_17;
    MR_Word ml_backend__ml_closure_gen__MaybePredProcId_18;
    MR_Word ml_backend__ml_closure_gen__DefnFuncParams_19;
    MR_Word ml_backend__ml_closure_gen__Body_20;
    MR_Word ml_backend__ml_closure_gen__Attributes_21;
    MR_Word ml_backend__ml_closure_gen__EnvVarNames_22;
    MR_Word ml_backend__ml_closure_gen__TailRec_23;
    MR_Word ml_backend__ml_closure_gen__DeclFlags1_24;
    MR_Word ml_backend__ml_closure_gen__DeclFlags_25;

    ml_backend__ml_code_util__ml_gen_label_func_6_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_26, ml_backend__ml_closure_gen__MaybeAux_8, ml_backend__ml_closure_gen__FuncParams_9, ml_backend__ml_closure_gen__Context_10, ml_backend__ml_closure_gen__Stmt_11, &ml_backend__ml_closure_gen__FunctionDefn0_14);
    ml_backend__ml_closure_gen__Name_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__FunctionDefn0_14, (MR_Integer) 0)));
    ml_backend__ml_closure_gen__Ctxt_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__FunctionDefn0_14, (MR_Integer) 1)));
    ml_backend__ml_closure_gen__DeclFlags0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__FunctionDefn0_14, (MR_Integer) 2)));
    ml_backend__ml_closure_gen__MaybePredProcId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__FunctionDefn0_14, (MR_Integer) 3)));
    ml_backend__ml_closure_gen__DefnFuncParams_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__FunctionDefn0_14, (MR_Integer) 4)));
    ml_backend__ml_closure_gen__Body_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__FunctionDefn0_14, (MR_Integer) 5)));
    ml_backend__ml_closure_gen__Attributes_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__FunctionDefn0_14, (MR_Integer) 6)));
    ml_backend__ml_closure_gen__EnvVarNames_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__FunctionDefn0_14, (MR_Integer) 7)));
    ml_backend__ml_closure_gen__TailRec_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__FunctionDefn0_14, (MR_Integer) 8)));
    ml_backend__mlds__set_function_access_3_p_0((MR_Integer) 1, ml_backend__ml_closure_gen__DeclFlags0_17, &ml_backend__ml_closure_gen__DeclFlags1_24);
    ml_backend__mlds__set_function_per_instance_3_p_0((MR_Integer) 0, ml_backend__ml_closure_gen__DeclFlags1_24, &ml_backend__ml_closure_gen__DeclFlags_25);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_closure_gen__FunctionDefn_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Name_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Ctxt_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_closure_gen__DeclFlags_25));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_closure_gen__MaybePredProcId_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_closure_gen__DefnFuncParams_19));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_closure_gen__Body_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_closure_gen__Attributes_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_closure_gen__EnvVarNames_22));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_closure_gen__TailRec_23));
    }
    *ml_backend__ml_closure_gen__STATE_VARIABLE_Info_27 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_26;
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__gen_closure_gc_statement_10_p_0(
  MR_Word ml_backend__ml_closure_gen__ClosureName_11,
  MR_Word ml_backend__ml_closure_gen__ClosureDeclType_12,
  MR_Word ml_backend__ml_closure_gen__ClosureKind_13,
  MR_Word ml_backend__ml_closure_gen__WrapperArgTypes_14,
  MR_Word ml_backend__ml_closure_gen__Purity_15,
  MR_Word ml_backend__ml_closure_gen__PredOrFunc_16,
  MR_Word ml_backend__ml_closure_gen__Context_17,
  MR_Word * ml_backend__ml_closure_gen__ClosureGCStmt_18,
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_23,
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_24)
{
  {
    MR_Word ml_backend__ml_closure_gen__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    MR_Word ml_backend__ml_closure_gen__HigherOrderArgTypes_20;
    MR_Word ml_backend__ml_closure_gen__ClosureActualType_22;
    MR_Integer ml_backend__ml_closure_gen__Var_25;
    MR_Word ml_backend__ml_closure_gen__Var_26;

    ml_backend__ml_closure_gen__Var_25 = mercury__list__length_1_f_0(ml_backend__ml_closure_gen__TypeCtorInfo_30_30, ml_backend__ml_closure_gen__WrapperArgTypes_14);
    ml_backend__ml_closure_gen__Var_26 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    ml_backend__ml_closure_gen__HigherOrderArgTypes_20 = mercury__list__duplicate_2_f_0(ml_backend__ml_closure_gen__TypeCtorInfo_30_30, ml_backend__ml_closure_gen__Var_25, ((MR_Box) (ml_backend__ml_closure_gen__Var_26)));
    switch (ml_backend__ml_closure_gen__ClosureKind_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__private_builtin__dummy_var = (MR_Integer) 0;
          parse_tree__prog_type__construct_higher_order_type_5_p_0(ml_backend__ml_closure_gen__Purity_15, ml_backend__ml_closure_gen__PredOrFunc_16, ml_backend__ml_closure_gen__HigherOrderArgTypes_20, &ml_backend__ml_closure_gen__ClosureActualType_22);
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_closure_gen.gen_closure_gc_statement\'/10", (MR_String) "special_pred_closure");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        ml_backend__ml_closure_gen__ClosureActualType_22 = parse_tree__builtin_lib_types__sample_typeclass_info_type_0_f_0();
        break;
    }
    ml_backend__ml_accurate_gc__ml_gen_gc_statement_poly_7_p_0(ml_backend__ml_closure_gen__ClosureName_11, ml_backend__ml_closure_gen__ClosureDeclType_12, ml_backend__ml_closure_gen__ClosureActualType_22, ml_backend__ml_closure_gen__Context_17, ml_backend__ml_closure_gen__ClosureGCStmt_18, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_23, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_24);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_closure_gen____Unify____closure_kind_0_0_10001(
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_closure_gen__succeeded;

    ml_backend__ml_closure_gen__succeeded = ml_backend__ml_closure_gen____Unify____closure_kind_0_0(((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_2));
    return ml_backend__ml_closure_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen____Compare____closure_kind_0_0_10001(
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_closure_gen__conv0_HeadVar__1_1;

    ml_backend__ml_closure_gen____Compare____closure_kind_0_0(&ml_backend__ml_closure_gen__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_2), ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_3));
    *ml_backend__ml_closure_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_closure_gen__conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__ml_closure_gen__init(void)
{
}

void mercury__ml_backend__ml_closure_gen__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__type_ctor_info_closure_kind_0);
}

void mercury__ml_backend__ml_closure_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_closure_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ml_backend.ml_closure_gen. */
