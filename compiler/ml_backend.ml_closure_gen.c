/*
** Automatically generated from `ml_closure_gen.m'
** by the Mercury compiler,
** version rotd-2018-05-13
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


// :- module ml_backend.ml_closure_gen.
// :- implementation.

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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "hlds.mark_tail_calls.mih"
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
#include "ml_backend.ml_args_util.mih"
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

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_type_info_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_type_info_defn_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Target_7,
  MR_Word TI_8,
  MR_Word STATE_VARIABLE_GlobalData_0_12,
  MR_Word * STATE_VARIABLE_GlobalData_13);

static MR_Word MR_CALL 
ml_backend__ml_closure_gen__arg_type_infos_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_defn_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Target_7,
  MR_Word MaybePTI_8,
  MR_Word STATE_VARIABLE_GlobalData_0_12,
  MR_Word * STATE_VARIABLE_GlobalData_13);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_type_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_type_info_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Target_9,
  MR_Word TypeInfo_10,
  MR_Word * Rval_11,
  MR_Word * Type_12,
  MR_Word STATE_VARIABLE_GlobalData_0_29,
  MR_Word * STATE_VARIABLE_GlobalData_30);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Target_9,
  MR_Word PseudoTypeInfo_10,
  MR_Word * Rval_11,
  MR_Word * Type_12,
  MR_Word STATE_VARIABLE_GlobalData_0_36,
  MR_Word * STATE_VARIABLE_GlobalData_37);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Target_8,
  MR_Word ClosureArg_9,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_20,
  MR_Word * STATE_VARIABLE_GlobalData_21);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_field_lvals_7_p_0(
  MR_Word ClosureLval_8,
  MR_Integer Offset_9,
  MR_Integer ArgNum_10,
  MR_Integer NumClosureArgs_11,
  MR_Word * ClosureArgLvals_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_p_0(
  MR_Word ClosureKind_10,
  MR_Word ClosureArgName_11,
  MR_Word ClosureArgType_12,
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word Context_15,
  MR_Word * GC_Decls_16,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_layout_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_layout_7_p_0(
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word Context_10,
  MR_Word * ClosureLayoutAddrRval_11,
  MR_Word * ClosureLayoutType_12,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ConstVarKind_10,
  MR_Word Context_11,
  MR_Word TVarLocnMap_12,
  MR_Word * TVarVectorAddrRval_13,
  MR_Word * ArrayType_14,
  MR_Word STATE_VARIABLE_GlobalData_0_21,
  MR_Word * STATE_VARIABLE_GlobalData_22);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CurSlot_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_10_p_0(
  MR_Word CopyOutWhen_1,
  MR_Word Context_2,
  MR_Integer ArgNum_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static MR_Word MR_CALL 
ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_f_0(
  MR_Integer Num_4,
  MR_Integer Max_5);

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_wrapper_func_7_p_0(
  MR_Word MaybeAux_8,
  MR_Word FuncParams_9,
  MR_Word Context_10,
  MR_Word Stmt_11,
  MR_Word * FunctionDefn_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
ml_backend__ml_closure_gen__gen_closure_gc_statement_10_p_0(
  MR_Word ClosureName_11,
  MR_Word ClosureDeclType_12,
  MR_Word ClosureKind_13,
  MR_Word WrapperArgTypes_14,
  MR_Word Purity_15,
  MR_Word PredOrFunc_16,
  MR_Word Context_17,
  MR_Word * ClosureGCStmt_18,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
ml_backend__ml_closure_gen__create_for_closure_wrapper_args_4_p_0(
  MR_Word VarNames_5,
  MR_Word VarLvals_6,
  MR_Word VarTypes_7,
  MR_Word * Args_8);

static MR_bool MR_CALL 
ml_backend__ml_closure_gen____Unify____closure_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_closure_gen____Compare____closure_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_1[26][2];

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_2[4][3];

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_3[11][1];

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_4[1][9];

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_5[2][8];




static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_1[26][2] = {
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
    ((MR_Box) (((MR_Box) ((MR_Integer) 0)))),
    ((MR_Box) (((MR_Box) ((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) 1)))),
    ((MR_Box) (((MR_Box) ((MR_Integer) 1))))
  },
  /* row 5 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) 2)))),
    ((MR_Box) (((MR_Box) ((MR_Integer) 2))))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_closure_gen_scalar_common_3[0])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 20)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 20)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_2[1])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_closure_gen_scalar_common_3[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_2[2])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_closure_gen_scalar_common_3[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_closure_gen_scalar_common_3[9])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_closure_gen_scalar_common_3[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
};

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
};

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_3[11][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[7])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[12])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) " = (MR_Box) ((MR_Closure *)\n"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) ")->MR_closure_layout;\n"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) " = (MR_Box) MR_materialize_closure_type_params(\n"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) ");\n"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) " = (MR_Box) MR_materialize_typeclass_info_type_params(\n(MR_Word) "))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) ", (MR_Closure_Layout *) "))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_2[1])))
  },
  /* row 10 */
  {
    ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_1[24]))
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

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_5[2][8] = {
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

MR_bool MR_CALL 
ml_backend__ml_closure_gen____Unify____closure_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_type_info_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_GlobalData_13;

    ml_backend__ml_closure_gen__ml_gen_type_info_defn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_GlobalData_13);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_GlobalData_13));
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_type_info_defn_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Target_7,
  MR_Word TI_8,
  MR_Word STATE_VARIABLE_GlobalData_0_12,
  MR_Word * STATE_VARIABLE_GlobalData_13)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) TI_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word RttiTypeCtor0_23 = (MR_Word) MR_body((MR_Word) TI_8, (MR_Integer) 0);
          MR_Word ModuleName0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiTypeCtor0_23, (MR_Integer) 0)));
          MR_Word ModuleName_28;
          MR_String Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), RttiTypeCtor0_23, (MR_Integer) 1)));
          MR_Integer Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiTypeCtor0_23, (MR_Integer) 2)));
          MR_Word MLDS_ModuleName_30;

          ModuleName_28 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_25);
          MLDS_ModuleName_30 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_28);
          *STATE_VARIABLE_GlobalData_13 = STATE_VARIABLE_GlobalData_0_12;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word RttiData_35;
          MR_Word PDupRvalTypeMap_36;
          MR_Word RttiId_51;
          MR_Word OldRvalType_37;
          MR_Box conv0_OldRvalType_37;

          {
            RttiData_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RttiData_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), RttiData_35, 1) = ((MR_Box) (TI_8));
          }
          backend_libs__rtti__rtti_data_to_id_2_p_0(RttiData_35, &RttiId_51);
          ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(STATE_VARIABLE_GlobalData_0_12, &PDupRvalTypeMap_36);
          succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, PDupRvalTypeMap_36, ((MR_Box) (RttiId_51)), &conv0_OldRvalType_37);
          if (succeeded)
          {
            OldRvalType_37 = ((MR_Word) conv0_OldRvalType_37);
            succeeded = MR_TRUE;
          }
          if (succeeded)
            *STATE_VARIABLE_GlobalData_13 = STATE_VARIABLE_GlobalData_0_12;
          else
          {
            MR_Word STATE_VARIABLE_GlobalData_33_40;
            MR_Word Var_41;
            MR_Word Var_42;
            MR_Word ModuleName_46;
            MR_Word MLDS_ModuleName_47;
            MR_Box conv2_STATE_VARIABLE_GlobalData_13;

            hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_6, &ModuleName_46);
            MLDS_ModuleName_47 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_46);
            ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(ModuleInfo_6, Target_7, RttiData_35, STATE_VARIABLE_GlobalData_0_12, &STATE_VARIABLE_GlobalData_33_40);
            {
              Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_5[1]));
              MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ml_gen_type_info_defn_5_p_0_1));
              MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (ModuleInfo_6));
              MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (Target_7));
            }
            Var_42 = ml_backend__ml_closure_gen__arg_type_infos_1_f_0(TI_8);
            mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, Var_41, Var_42, ((MR_Box) (STATE_VARIABLE_GlobalData_33_40)), &conv2_STATE_VARIABLE_GlobalData_13);
            *STATE_VARIABLE_GlobalData_13 = ((MR_Word) conv2_STATE_VARIABLE_GlobalData_13);
          }
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_closure_gen__arg_type_infos_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word _TypeCtor_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

          HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word _VarArityId_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));

          HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1)));
        }
        break;
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_defn_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Target_7,
  MR_Word MaybePTI_8,
  MR_Word STATE_VARIABLE_GlobalData_0_12,
  MR_Word * STATE_VARIABLE_GlobalData_13)
{
  if (((MR_tag((MR_Word) MaybePTI_8)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_Word TypeInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybePTI_8, (MR_Integer) 0)));
    MR_Word _Rval_10;
    MR_Word _Type_11;

    ml_backend__ml_closure_gen__ml_gen_type_info_7_p_0(ModuleInfo_6, Target_7, TypeInfo_24, &_Rval_10, &_Type_11, STATE_VARIABLE_GlobalData_0_12, STATE_VARIABLE_GlobalData_13);
  }
  else
  {
    MR_Word PseudoTypeInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybePTI_8, (MR_Integer) 0)));
    MR_Word _Rval_27;
    MR_Word _Type_28;

    ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_7_p_0(ModuleInfo_6, Target_7, PseudoTypeInfo_23, &_Rval_27, &_Type_28, STATE_VARIABLE_GlobalData_0_12, STATE_VARIABLE_GlobalData_13);
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_type_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_GlobalData_13;

    ml_backend__ml_closure_gen__ml_gen_type_info_defn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_GlobalData_13);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_GlobalData_13));
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_type_info_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Target_9,
  MR_Word TypeInfo_10,
  MR_Word * Rval_11,
  MR_Word * Type_12,
  MR_Word STATE_VARIABLE_GlobalData_0_29,
  MR_Word * STATE_VARIABLE_GlobalData_30)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) TypeInfo_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word RttiTypeCtor0_14 = (MR_Word) MR_body((MR_Word) TypeInfo_10, (MR_Integer) 0);
          MR_Word ModuleName0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiTypeCtor0_14, (MR_Integer) 0)));
          MR_Word ModuleName_19;
          MR_Word RttiId_20;
          MR_Word MLDS_ModuleName_21;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_String Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), RttiTypeCtor0_14, (MR_Integer) 1)));
          MR_Integer Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiTypeCtor0_14, (MR_Integer) 2)));

          ModuleName_19 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_16);
          {
            RttiId_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), RttiId_20, 0) = ((MR_Box) (RttiTypeCtor0_14));
            MR_hl_field(MR_mktag(0), RttiId_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
          }
          MLDS_ModuleName_21 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_19);
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
            MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (MLDS_ModuleName_21));
            MR_hl_field(MR_mktag(3), Var_37, 2) = ((MR_Box) (RttiId_20));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Rval_11 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_37));
          }
          {
            Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (RttiId_20));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Type_12 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_38));
          }
          *STATE_VARIABLE_GlobalData_30 = STATE_VARIABLE_GlobalData_0_29;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word RttiData_26;
          MR_Word PDupRvalTypeMap_27;
          MR_Word RttiId_44;
          MR_Word OldRvalType_28;
          MR_Box conv0_OldRvalType_28;

          {
            RttiData_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RttiData_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), RttiData_26, 1) = ((MR_Box) (TypeInfo_10));
          }
          backend_libs__rtti__rtti_data_to_id_2_p_0(RttiData_26, &RttiId_44);
          ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(STATE_VARIABLE_GlobalData_0_29, &PDupRvalTypeMap_27);
          succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, PDupRvalTypeMap_27, ((MR_Box) (RttiId_44)), &conv0_OldRvalType_28);
          if (succeeded)
          {
            OldRvalType_28 = ((MR_Word) conv0_OldRvalType_28);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            *Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), OldRvalType_28, (MR_Integer) 0)));
            *Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), OldRvalType_28, (MR_Integer) 1)));
            *STATE_VARIABLE_GlobalData_30 = STATE_VARIABLE_GlobalData_0_29;
          }
          else
          {
            MR_Word Var_31;
            MR_Word Var_32;
            MR_Word STATE_VARIABLE_GlobalData_33_33;
            MR_Word Var_34;
            MR_Word Var_35;
            MR_Word ModuleName_39;
            MR_Word MLDS_ModuleName_40;
            MR_Box conv2_STATE_VARIABLE_GlobalData_30;

            hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_39);
            MLDS_ModuleName_40 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_39);
            {
              Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
              MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (MLDS_ModuleName_40));
              MR_hl_field(MR_mktag(3), Var_31, 2) = ((MR_Box) (RttiId_44));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Rval_11 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_31));
            }
            {
              Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (RttiId_44));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Type_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_32));
            }
            ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(ModuleInfo_8, Target_9, RttiData_26, STATE_VARIABLE_GlobalData_0_29, &STATE_VARIABLE_GlobalData_33_33);
            {
              Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_5[1]));
              MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ml_gen_type_info_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (ModuleInfo_8));
              MR_hl_field(MR_mktag(0), Var_34, 4) = ((MR_Box) (Target_9));
            }
            if (((MR_tag((MR_Word) TypeInfo_10)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word _TypeCtor_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeInfo_10, (MR_Integer) 0)));

              Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeInfo_10, (MR_Integer) 1)));
            }
            else
            {
              MR_Word _VarArityId_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeInfo_10, (MR_Integer) 0)));

              Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeInfo_10, (MR_Integer) 1)));
            }
            mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, Var_34, Var_35, ((MR_Box) (STATE_VARIABLE_GlobalData_33_33)), &conv2_STATE_VARIABLE_GlobalData_30);
            *STATE_VARIABLE_GlobalData_30 = ((MR_Word) conv2_STATE_VARIABLE_GlobalData_30);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_GlobalData_13;

    ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_defn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_GlobalData_13);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_GlobalData_13));
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Target_9,
  MR_Word PseudoTypeInfo_10,
  MR_Word * Rval_11,
  MR_Word * Type_12,
  MR_Word STATE_VARIABLE_GlobalData_0_36,
  MR_Word * STATE_VARIABLE_GlobalData_37)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) PseudoTypeInfo_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) PseudoTypeInfo_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ModuleName0_22;
              MR_Word ModuleName_25;
              MR_Word RttiTypeCtor_26 = (MR_Word) MR_body((MR_Word) PseudoTypeInfo_10, (MR_Integer) 0);
              MR_Word RttiId_27;
              MR_Word MLDS_ModuleName_28;
              MR_Word Var_44;
              MR_Word Var_45;
              MR_String Var_23;
              MR_Integer Var_24;

              ModuleName0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiTypeCtor_26, (MR_Integer) 0)));
              Var_23 = ((MR_String) (MR_hl_field(MR_mktag(0), RttiTypeCtor_26, (MR_Integer) 1)));
              Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiTypeCtor_26, (MR_Integer) 2)));
              ModuleName_25 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_22);
              {
                RttiId_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RttiId_27, 0) = ((MR_Box) (RttiTypeCtor_26));
                MR_hl_field(MR_mktag(0), RttiId_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
              }
              MLDS_ModuleName_28 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_25);
              {
                Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (MLDS_ModuleName_28));
                MR_hl_field(MR_mktag(3), Var_44, 2) = ((MR_Box) (RttiId_27));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Rval_11 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_44));
              }
              {
                Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (RttiId_27));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Type_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_45));
              }
              *STATE_VARIABLE_GlobalData_37 = STATE_VARIABLE_GlobalData_0_36;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word RttiData_33;
              MR_Word PDupRvalTypeMap_34;
              MR_Word RttiId_52;
              MR_Word OldRvalType_35;
              MR_Box conv0_OldRvalType_35;

              {
                RttiData_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RttiData_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), RttiData_33, 1) = ((MR_Box) (PseudoTypeInfo_10));
              }
              backend_libs__rtti__rtti_data_to_id_2_p_0(RttiData_33, &RttiId_52);
              ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(STATE_VARIABLE_GlobalData_0_36, &PDupRvalTypeMap_34);
              succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, PDupRvalTypeMap_34, ((MR_Box) (RttiId_52)), &conv0_OldRvalType_35);
              if (succeeded)
              {
                OldRvalType_35 = ((MR_Word) conv0_OldRvalType_35);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                *Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), OldRvalType_35, (MR_Integer) 0)));
                *Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), OldRvalType_35, (MR_Integer) 1)));
                *STATE_VARIABLE_GlobalData_37 = STATE_VARIABLE_GlobalData_0_36;
              }
              else
              {
                MR_Word Var_38;
                MR_Word Var_39;
                MR_Word STATE_VARIABLE_GlobalData_40_40;
                MR_Word Var_41;
                MR_Word Var_42;
                MR_Word ModuleName_47;
                MR_Word MLDS_ModuleName_48;
                MR_Box conv2_STATE_VARIABLE_GlobalData_37;

                hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_47);
                MLDS_ModuleName_48 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_47);
                {
                  Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                  MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (MLDS_ModuleName_48));
                  MR_hl_field(MR_mktag(3), Var_38, 2) = ((MR_Box) (RttiId_52));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *Rval_11 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_38));
                }
                {
                  Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (RttiId_52));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *Type_12 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_39));
                }
                ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(ModuleInfo_8, Target_9, RttiData_33, STATE_VARIABLE_GlobalData_0_36, &STATE_VARIABLE_GlobalData_40_40);
                {
                  Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_5[0]));
                  MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_7_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (ModuleInfo_8));
                  MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (Target_9));
                }
                if (((MR_tag((MR_Word) PseudoTypeInfo_10)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word _TypeCtor_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), PseudoTypeInfo_10, (MR_Integer) 0)));

                  Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), PseudoTypeInfo_10, (MR_Integer) 1)));
                }
                else
                {
                  MR_Word _VarArityId_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), PseudoTypeInfo_10, (MR_Integer) 0)));

                  Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), PseudoTypeInfo_10, (MR_Integer) 1)));
                }
                mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, Var_41, Var_42, ((MR_Box) (STATE_VARIABLE_GlobalData_40_40)), &conv2_STATE_VARIABLE_GlobalData_37);
                *STATE_VARIABLE_GlobalData_37 = ((MR_Word) conv2_STATE_VARIABLE_GlobalData_37);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) PseudoTypeInfo_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ModuleName0_22;
              MR_Word ModuleName_25;
              MR_Word RttiTypeCtor_26 = (MR_Word) MR_body((MR_Word) PseudoTypeInfo_10, (MR_Integer) 0);
              MR_Word RttiId_27;
              MR_Word MLDS_ModuleName_28;
              MR_Word Var_44;
              MR_Word Var_45;
              MR_String Var_23;
              MR_Integer Var_24;

              ModuleName0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiTypeCtor_26, (MR_Integer) 0)));
              Var_23 = ((MR_String) (MR_hl_field(MR_mktag(0), RttiTypeCtor_26, (MR_Integer) 1)));
              Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiTypeCtor_26, (MR_Integer) 2)));
              ModuleName_25 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_22);
              {
                RttiId_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RttiId_27, 0) = ((MR_Box) (RttiTypeCtor_26));
                MR_hl_field(MR_mktag(0), RttiId_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
              }
              MLDS_ModuleName_28 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_25);
              {
                Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (MLDS_ModuleName_28));
                MR_hl_field(MR_mktag(3), Var_44, 2) = ((MR_Box) (RttiId_27));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Rval_11 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_44));
              }
              {
                Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (RttiId_27));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Type_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_45));
              }
              *STATE_VARIABLE_GlobalData_37 = STATE_VARIABLE_GlobalData_0_36;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word RttiData_33;
              MR_Word PDupRvalTypeMap_34;
              MR_Word RttiId_52;
              MR_Word OldRvalType_35;
              MR_Box conv0_OldRvalType_35;

              {
                RttiData_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RttiData_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), RttiData_33, 1) = ((MR_Box) (PseudoTypeInfo_10));
              }
              backend_libs__rtti__rtti_data_to_id_2_p_0(RttiData_33, &RttiId_52);
              ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(STATE_VARIABLE_GlobalData_0_36, &PDupRvalTypeMap_34);
              succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, PDupRvalTypeMap_34, ((MR_Box) (RttiId_52)), &conv0_OldRvalType_35);
              if (succeeded)
              {
                OldRvalType_35 = ((MR_Word) conv0_OldRvalType_35);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                *Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), OldRvalType_35, (MR_Integer) 0)));
                *Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), OldRvalType_35, (MR_Integer) 1)));
                *STATE_VARIABLE_GlobalData_37 = STATE_VARIABLE_GlobalData_0_36;
              }
              else
              {
                MR_Word Var_38;
                MR_Word Var_39;
                MR_Word STATE_VARIABLE_GlobalData_40_40;
                MR_Word Var_41;
                MR_Word Var_42;
                MR_Word ModuleName_47;
                MR_Word MLDS_ModuleName_48;
                MR_Box conv2_STATE_VARIABLE_GlobalData_37;

                hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_47);
                MLDS_ModuleName_48 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_47);
                {
                  Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                  MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (MLDS_ModuleName_48));
                  MR_hl_field(MR_mktag(3), Var_38, 2) = ((MR_Box) (RttiId_52));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *Rval_11 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_38));
                }
                {
                  Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (RttiId_52));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *Type_12 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_39));
                }
                ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(ModuleInfo_8, Target_9, RttiData_33, STATE_VARIABLE_GlobalData_0_36, &STATE_VARIABLE_GlobalData_40_40);
                {
                  Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_5[0]));
                  MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_7_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (ModuleInfo_8));
                  MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (Target_9));
                }
                if (((MR_tag((MR_Word) PseudoTypeInfo_10)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word _TypeCtor_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), PseudoTypeInfo_10, (MR_Integer) 0)));

                  Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), PseudoTypeInfo_10, (MR_Integer) 1)));
                }
                else
                {
                  MR_Word _VarArityId_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), PseudoTypeInfo_10, (MR_Integer) 0)));

                  Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), PseudoTypeInfo_10, (MR_Integer) 1)));
                }
                mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, Var_41, Var_42, ((MR_Box) (STATE_VARIABLE_GlobalData_40_40)), &conv2_STATE_VARIABLE_GlobalData_37);
                *STATE_VARIABLE_GlobalData_37 = ((MR_Word) conv2_STATE_VARIABLE_GlobalData_37);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer N_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), PseudoTypeInfo_10, (MR_Integer) 0)));
          MR_Word Var_46;

          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_46, 0) = ((MR_Box) (N_14));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Rval_11 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_46));
          }
          *Type_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
          *STATE_VARIABLE_GlobalData_37 = STATE_VARIABLE_GlobalData_0_36;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_GlobalData_13;

    ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_defn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_GlobalData_13);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_GlobalData_13));
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Target_8,
  MR_Word ClosureArg_9,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_20,
  MR_Word * STATE_VARIABLE_GlobalData_21)
{
  {
    MR_bool succeeded;
    MR_Word ArgInit_10;
    MR_Word ArgType_11;
    MR_Word Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClosureArg_9, (MR_Integer) 0)));
    MR_Word PseudoTypeInfo_17;
    MR_Word ArgRval_18;
    MR_Word CastArgRval_19;
    MR_Word _Inst_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClosureArg_9, (MR_Integer) 1)));

    backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0(Type_13, (MR_Integer) -1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &PseudoTypeInfo_17);
    switch (MR_tag((MR_Word) PseudoTypeInfo_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) PseudoTypeInfo_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ModuleName0_39;
              MR_Word ModuleName_42;
              MR_Word RttiTypeCtor_43 = (MR_Word) MR_body((MR_Word) PseudoTypeInfo_17, (MR_Integer) 0);
              MR_Word RttiId_44;
              MR_Word MLDS_ModuleName_45;
              MR_Word Var_59;
              MR_Word Var_60;
              MR_String Var_40;
              MR_Integer Var_41;

              ModuleName0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiTypeCtor_43, (MR_Integer) 0)));
              Var_40 = ((MR_String) (MR_hl_field(MR_mktag(0), RttiTypeCtor_43, (MR_Integer) 1)));
              Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiTypeCtor_43, (MR_Integer) 2)));
              ModuleName_42 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_39);
              {
                RttiId_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RttiId_44, 0) = ((MR_Box) (RttiTypeCtor_43));
                MR_hl_field(MR_mktag(0), RttiId_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
              }
              MLDS_ModuleName_45 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_42);
              {
                Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (MLDS_ModuleName_45));
                MR_hl_field(MR_mktag(3), Var_59, 2) = ((MR_Box) (RttiId_44));
              }
              {
                ArgRval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ArgRval_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ArgRval_18, 1) = ((MR_Box) (Var_59));
              }
              {
                Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (RttiId_44));
              }
              {
                ArgType_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ArgType_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), ArgType_11, 1) = ((MR_Box) (Var_60));
              }
              *STATE_VARIABLE_GlobalData_21 = STATE_VARIABLE_GlobalData_0_20;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word RttiData_50;
              MR_Word PDupRvalTypeMap_51;
              MR_Word RttiId_67;
              MR_Word OldRvalType_52;
              MR_Box conv0_OldRvalType_52;

              {
                RttiData_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RttiData_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), RttiData_50, 1) = ((MR_Box) (PseudoTypeInfo_17));
              }
              backend_libs__rtti__rtti_data_to_id_2_p_0(RttiData_50, &RttiId_67);
              ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(STATE_VARIABLE_GlobalData_0_20, &PDupRvalTypeMap_51);
              succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, PDupRvalTypeMap_51, ((MR_Box) (RttiId_67)), &conv0_OldRvalType_52);
              if (succeeded)
              {
                OldRvalType_52 = ((MR_Word) conv0_OldRvalType_52);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                ArgRval_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), OldRvalType_52, (MR_Integer) 0)));
                ArgType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), OldRvalType_52, (MR_Integer) 1)));
                *STATE_VARIABLE_GlobalData_21 = STATE_VARIABLE_GlobalData_0_20;
              }
              else
              {
                MR_Word Var_53;
                MR_Word Var_54;
                MR_Word STATE_VARIABLE_GlobalData_40_55;
                MR_Word Var_56;
                MR_Word Var_57;
                MR_Word ModuleName_62;
                MR_Word MLDS_ModuleName_63;
                MR_Box conv2_STATE_VARIABLE_GlobalData_21;

                hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_7, &ModuleName_62);
                MLDS_ModuleName_63 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_62);
                {
                  Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                  MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (MLDS_ModuleName_63));
                  MR_hl_field(MR_mktag(3), Var_53, 2) = ((MR_Box) (RttiId_67));
                }
                {
                  ArgRval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ArgRval_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ArgRval_18, 1) = ((MR_Box) (Var_53));
                }
                {
                  Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (RttiId_67));
                }
                {
                  ArgType_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ArgType_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                  MR_hl_field(MR_mktag(3), ArgType_11, 1) = ((MR_Box) (Var_54));
                }
                ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(ModuleInfo_7, Target_8, RttiData_50, STATE_VARIABLE_GlobalData_0_20, &STATE_VARIABLE_GlobalData_40_55);
                {
                  Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_5[0]));
                  MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_6_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (ModuleInfo_7));
                  MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) (Target_8));
                }
                if (((MR_tag((MR_Word) PseudoTypeInfo_17)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word _TypeCtor_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), PseudoTypeInfo_17, (MR_Integer) 0)));

                  Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), PseudoTypeInfo_17, (MR_Integer) 1)));
                }
                else
                {
                  MR_Word _VarArityId_80 = ((MR_Word) (MR_hl_field(MR_mktag(2), PseudoTypeInfo_17, (MR_Integer) 0)));

                  Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), PseudoTypeInfo_17, (MR_Integer) 1)));
                }
                mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, Var_56, Var_57, ((MR_Box) (STATE_VARIABLE_GlobalData_40_55)), &conv2_STATE_VARIABLE_GlobalData_21);
                *STATE_VARIABLE_GlobalData_21 = ((MR_Word) conv2_STATE_VARIABLE_GlobalData_21);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) PseudoTypeInfo_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ModuleName0_39;
              MR_Word ModuleName_42;
              MR_Word RttiTypeCtor_43 = (MR_Word) MR_body((MR_Word) PseudoTypeInfo_17, (MR_Integer) 0);
              MR_Word RttiId_44;
              MR_Word MLDS_ModuleName_45;
              MR_Word Var_59;
              MR_Word Var_60;
              MR_String Var_40;
              MR_Integer Var_41;

              ModuleName0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiTypeCtor_43, (MR_Integer) 0)));
              Var_40 = ((MR_String) (MR_hl_field(MR_mktag(0), RttiTypeCtor_43, (MR_Integer) 1)));
              Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiTypeCtor_43, (MR_Integer) 2)));
              ModuleName_42 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_39);
              {
                RttiId_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RttiId_44, 0) = ((MR_Box) (RttiTypeCtor_43));
                MR_hl_field(MR_mktag(0), RttiId_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
              }
              MLDS_ModuleName_45 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_42);
              {
                Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (MLDS_ModuleName_45));
                MR_hl_field(MR_mktag(3), Var_59, 2) = ((MR_Box) (RttiId_44));
              }
              {
                ArgRval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ArgRval_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ArgRval_18, 1) = ((MR_Box) (Var_59));
              }
              {
                Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (RttiId_44));
              }
              {
                ArgType_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ArgType_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), ArgType_11, 1) = ((MR_Box) (Var_60));
              }
              *STATE_VARIABLE_GlobalData_21 = STATE_VARIABLE_GlobalData_0_20;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word RttiData_50;
              MR_Word PDupRvalTypeMap_51;
              MR_Word RttiId_67;
              MR_Word OldRvalType_52;
              MR_Box conv0_OldRvalType_52;

              {
                RttiData_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RttiData_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), RttiData_50, 1) = ((MR_Box) (PseudoTypeInfo_17));
              }
              backend_libs__rtti__rtti_data_to_id_2_p_0(RttiData_50, &RttiId_67);
              ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(STATE_VARIABLE_GlobalData_0_20, &PDupRvalTypeMap_51);
              succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, PDupRvalTypeMap_51, ((MR_Box) (RttiId_67)), &conv0_OldRvalType_52);
              if (succeeded)
              {
                OldRvalType_52 = ((MR_Word) conv0_OldRvalType_52);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                ArgRval_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), OldRvalType_52, (MR_Integer) 0)));
                ArgType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), OldRvalType_52, (MR_Integer) 1)));
                *STATE_VARIABLE_GlobalData_21 = STATE_VARIABLE_GlobalData_0_20;
              }
              else
              {
                MR_Word Var_53;
                MR_Word Var_54;
                MR_Word STATE_VARIABLE_GlobalData_40_55;
                MR_Word Var_56;
                MR_Word Var_57;
                MR_Word ModuleName_62;
                MR_Word MLDS_ModuleName_63;
                MR_Box conv2_STATE_VARIABLE_GlobalData_21;

                hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_7, &ModuleName_62);
                MLDS_ModuleName_63 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_62);
                {
                  Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                  MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (MLDS_ModuleName_63));
                  MR_hl_field(MR_mktag(3), Var_53, 2) = ((MR_Box) (RttiId_67));
                }
                {
                  ArgRval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ArgRval_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ArgRval_18, 1) = ((MR_Box) (Var_53));
                }
                {
                  Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (RttiId_67));
                }
                {
                  ArgType_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ArgType_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                  MR_hl_field(MR_mktag(3), ArgType_11, 1) = ((MR_Box) (Var_54));
                }
                ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(ModuleInfo_7, Target_8, RttiData_50, STATE_VARIABLE_GlobalData_0_20, &STATE_VARIABLE_GlobalData_40_55);
                {
                  Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_5[0]));
                  MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_6_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (ModuleInfo_7));
                  MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) (Target_8));
                }
                if (((MR_tag((MR_Word) PseudoTypeInfo_17)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word _TypeCtor_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), PseudoTypeInfo_17, (MR_Integer) 0)));

                  Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), PseudoTypeInfo_17, (MR_Integer) 1)));
                }
                else
                {
                  MR_Word _VarArityId_80 = ((MR_Word) (MR_hl_field(MR_mktag(2), PseudoTypeInfo_17, (MR_Integer) 0)));

                  Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), PseudoTypeInfo_17, (MR_Integer) 1)));
                }
                mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, Var_56, Var_57, ((MR_Box) (STATE_VARIABLE_GlobalData_40_55)), &conv2_STATE_VARIABLE_GlobalData_21);
                *STATE_VARIABLE_GlobalData_21 = ((MR_Word) conv2_STATE_VARIABLE_GlobalData_21);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer N_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), PseudoTypeInfo_17, (MR_Integer) 0)));
          MR_Word Var_61;

          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_61, 0) = ((MR_Box) (N_31));
          }
          {
            ArgRval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ArgRval_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ArgRval_18, 1) = ((MR_Box) (Var_61));
          }
          ArgType_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
          *STATE_VARIABLE_GlobalData_21 = STATE_VARIABLE_GlobalData_0_20;
        }
        break;
    }
    {
      CastArgRval_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CastArgRval_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), CastArgRval_19, 1) = ((MR_Box) (ArgType_11));
      MR_hl_field(MR_mktag(3), CastArgRval_19, 2) = ((MR_Box) (ArgRval_18));
    }
    {
      ArgInit_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgInit_10, 0) = ((MR_Box) (CastArgRval_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ArgInit_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgType_11));
    }
  }
}

void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_10_p_0(
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word Var_13,
  MR_Word ArgVars_14,
  MR_Word ArgModes_15,
  MR_Word HowToConstruct_16,
  MR_Word Context_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  {
    MR_Word ClosureLayoutRval0_20;
    MR_Word ClosureLayoutType0_21;
    MR_Integer NumArgs_22;
    MR_Word WrapperFuncRval0_23;
    MR_Word WrapperFuncType0_24;
    MR_Word NumArgsRval0_25;
    MR_Word NumArgsRval_27;
    MR_Word WrapperFuncRval_29;
    MR_Word ClosureLayoutRval_31;
    MR_Word ExtraArgRvalsTypes_33;
    MR_Word STATE_VARIABLE_Info_40_40;
    MR_Word STATE_VARIABLE_Info_42_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_57;
    MR_Word Var_58;

    ml_backend__ml_closure_gen__ml_gen_closure_layout_7_p_0(PredId_11, ProcId_12, Context_17, &ClosureLayoutRval0_20, &ClosureLayoutType0_21, STATE_VARIABLE_Info_0_38, &STATE_VARIABLE_Info_40_40);
    mercury__list__length_2_p_0((MR_Word) &ml_backend__ml_closure_gen_scalar_common_1[0], ArgVars_14, &NumArgs_22);
    ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_p_0(PredId_11, ProcId_12, (MR_Integer) 0, NumArgs_22, Context_17, &WrapperFuncRval0_23, &WrapperFuncType0_24, STATE_VARIABLE_Info_40_40, &STATE_VARIABLE_Info_42_42);
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_43, 0) = ((MR_Box) (NumArgs_22));
    }
    {
      NumArgsRval0_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), NumArgsRval0_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), NumArgsRval0_25, 1) = ((MR_Box) (Var_43));
    }
    {
      NumArgsRval_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), NumArgsRval_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), NumArgsRval_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
      MR_hl_field(MR_mktag(3), NumArgsRval_27, 2) = ((MR_Box) (NumArgsRval0_25));
    }
    {
      WrapperFuncRval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), WrapperFuncRval_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), WrapperFuncRval_29, 1) = ((MR_Box) (WrapperFuncType0_24));
      MR_hl_field(MR_mktag(3), WrapperFuncRval_29, 2) = ((MR_Box) (WrapperFuncRval0_23));
    }
    {
      ClosureLayoutRval_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ClosureLayoutRval_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ClosureLayoutRval_31, 1) = ((MR_Box) (ClosureLayoutType0_21));
      MR_hl_field(MR_mktag(3), ClosureLayoutRval_31, 2) = ((MR_Box) (ClosureLayoutRval0_20));
    }
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (ClosureLayoutRval_31));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[3])));
    }
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (WrapperFuncRval_29));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[4])));
    }
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (NumArgsRval_27));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[5])));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_57));
    }
    {
      ExtraArgRvalsTypes_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ExtraArgRvalsTypes_33, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), ExtraArgRvalsTypes_33, 1) = ((MR_Box) (Var_50));
    }
    ml_backend__ml_unify_gen__ml_gen_new_object_14_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, Var_13, ExtraArgRvalsTypes_33, ArgVars_14, ArgModes_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), HowToConstruct_16, Context_17, Stmts_18, STATE_VARIABLE_Info_42_42, STATE_VARIABLE_Info_39);
  }
}

void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_p_0(
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word ClosureKind_12,
  MR_Integer NumClosureArgs_13,
  MR_Word Context_14,
  MR_Word * WrapperFuncRval_15,
  MR_Word * WrapperFuncType_16,
  MR_Word STATE_VARIABLE_Info_0_96,
  MR_Word * STATE_VARIABLE_Info_97)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_18;
    MR_Word PredInfo_19;
    MR_Word ProcInfo_20;
    MR_Word Purity_21;
    MR_Word ProcArgTypes_22;
    MR_Word PredOrFunc_23;
    MR_Word ProcHeadVars_24;
    MR_Word ProcArgModes_25;
    MR_Word CodeModel_26;
    MR_Word ProcVarSet_27;
    MR_Integer ProcArity_28;
    MR_Word ProcHeadVarNames_29;
    MR_Word ProcBoxedArgTypes_30;
    MR_Word WrapperHeadVars_35;
    MR_Word WrapperArgModes_36;
    MR_Word WrapperArgTypes_37;
    MR_Word WrapperBoxedArgTypes_38;
    MR_Integer NumWrapperHeadVars_39;
    MR_Word WrapperHeadVarNames_40;
    MR_Word ArgTuples_41;
    MR_Word WrapperParams0_42;
    MR_Word WrapperArgs0_43;
    MR_Word WrapperRetType_44;
    MR_Word MaybeClosureA_45;
    MR_Word WrapperArgs_46;
    MR_Word WrapperParams_52;
    MR_Word CopyOut_53;
    MR_Word CopyOutWhen_54;
    MR_Word WrapperHeadVarDefns_55;
    MR_Word WrapperHeadVarLvals_56;
    MR_Word WrapperCopyOutRvals_57;
    MR_Word WrapperOutputLvalsTypes_58;
    MR_Word MaybeClosureB_68;
    MR_Word ClosureArgLvals_74;
    MR_Word CallLvals_75;
    MR_Word ForClosureWrapperArgs_76;
    MR_Word Features_77;
    MR_Word LocalVarDefns0_78;
    MR_Word FuncDefns_79;
    MR_Word Stmts0_80;
    MR_Word LocalVarDefns1_83;
    MR_Word Stmts1_84;
    MR_Word LocalVarDefns2_85;
    MR_Word Stmts_87;
    MR_Word Globals_88;
    MR_Word GC_Defns_91;
    MR_Word LocalVarDefns_92;
    MR_Word WrapperFuncBody_93;
    MR_Word WrapperFuncName_94;
    MR_Word WrapperFuncDefn_95;
    MR_Word STATE_VARIABLE_Info_102_102;
    MR_Word STATE_VARIABLE_Info_105_105;
    MR_Word STATE_VARIABLE_Info_111_111;
    MR_Word STATE_VARIABLE_Info_115_115;
    MR_Word Var_116;
    MR_Word STATE_VARIABLE_Info_118_118;
    MR_Word STATE_VARIABLE_Info_122_122;
    MR_Word Var_123;
    MR_Word STATE_VARIABLE_Info_124_124;
    MR_Word Var_125;
    MR_Word STATE_VARIABLE_Info_126_126;
    MR_Word STATE_VARIABLE_Info_127_127;
    MR_Word WrapperHeadVars0_31;
    MR_Word WrapperArgModes0_32;
    MR_Word WrapperArgTypes0_33;
    MR_Word WrapperBoxedArgTypes0_34;
    MR_Word TypeCtorInfo_130_130;
    MR_Word TypeCtorInfo_131_131;
    MR_Word ClosureArgType2_89;
    MR_Word ClosureArgName2_90;
    MR_Tuple Var_120;
    MR_Word Var_121;
    MR_Word Var_135;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_96, &ModuleInfo_18);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_18, PredId_10, ProcId_11, &PredInfo_19, &ProcInfo_20);
    hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_19, &Purity_21);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_19, &ProcArgTypes_22);
    PredOrFunc_23 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_19);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_20, &ProcHeadVars_24);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_20, &ProcArgModes_25);
    CodeModel_26 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_20);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_20, &ProcVarSet_27);
    ProcArity_28 = mercury__list__length_1_f_0((MR_Word) &ml_backend__ml_closure_gen_scalar_common_1[0], ProcHeadVars_24);
    ProcHeadVarNames_29 = ml_backend__ml_code_util__ml_gen_local_var_names_2_f_0(ProcVarSet_27, ProcHeadVars_24);
    ProcBoxedArgTypes_30 = ml_backend__ml_code_util__ml_make_boxed_types_1_f_0(ProcArity_28);
    succeeded = mercury__list__drop_3_p_0((MR_Word) &ml_backend__ml_closure_gen_scalar_common_1[0], NumClosureArgs_13, ProcHeadVars_24, &WrapperHeadVars0_31);
    if (succeeded)
    {
      TypeCtorInfo_130_130 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
      succeeded = mercury__list__drop_3_p_0(TypeCtorInfo_130_130, NumClosureArgs_13, ProcArgModes_25, &WrapperArgModes0_32);
      if (succeeded)
      {
        TypeCtorInfo_131_131 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
        succeeded = mercury__list__drop_3_p_0(TypeCtorInfo_131_131, NumClosureArgs_13, ProcArgTypes_22, &WrapperArgTypes0_33);
        if (succeeded)
          succeeded = mercury__list__drop_3_p_0(TypeCtorInfo_131_131, NumClosureArgs_13, ProcBoxedArgTypes_30, &WrapperBoxedArgTypes0_34);
      }
    }
    if (succeeded)
    {
      WrapperHeadVars_35 = WrapperHeadVars0_31;
      WrapperArgModes_36 = WrapperArgModes0_32;
      WrapperArgTypes_37 = WrapperArgTypes0_33;
      WrapperBoxedArgTypes_38 = WrapperBoxedArgTypes0_34;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_closure_gen.ml_gen_closure_wrapper\'/9", (MR_String) "list.drop failed");
        return;
      }
    }
    NumWrapperHeadVars_39 = mercury__list__length_1_f_0((MR_Word) &ml_backend__ml_closure_gen_scalar_common_1[0], WrapperHeadVars_35);
    WrapperHeadVarNames_40 = ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_f_0((MR_Integer) 1, NumWrapperHeadVars_39);
    ml_backend__ml_args_util__ml_gen_params_no_gc_stmts_9_p_0(ModuleInfo_18, PredOrFunc_23, CodeModel_26, WrapperHeadVars_35, WrapperHeadVarNames_40, WrapperBoxedArgTypes_38, WrapperArgModes_36, &ArgTuples_41, &WrapperParams0_42);
    WrapperArgs0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), WrapperParams0_42, (MR_Integer) 0)));
    WrapperRetType_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), WrapperParams0_42, (MR_Integer) 1)));
    switch (ClosureKind_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word ClosureArgName_48 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[23]);
          MR_Word ClosureArgDeclType_49;
          MR_Word ClosureArgGCStmt_50;
          MR_Word ClosureArg_51;

          ClosureArgDeclType_49 = ml_backend__ml_code_util__ml_make_boxed_type_0_f_0();
          ml_backend__ml_closure_gen__gen_closure_gc_statement_10_p_0(ClosureArgName_48, ClosureArgDeclType_49, ClosureKind_12, WrapperArgTypes_37, Purity_21, PredOrFunc_23, Context_14, &ClosureArgGCStmt_50, STATE_VARIABLE_Info_0_96, &STATE_VARIABLE_Info_102_102);
          {
            ClosureArg_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ClosureArg_51, 0) = ((MR_Box) (ClosureArgName_48));
            MR_hl_field(MR_mktag(0), ClosureArg_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
            MR_hl_field(MR_mktag(0), ClosureArg_51, 2) = ((MR_Box) (ClosureArgGCStmt_50));
          }
          MaybeClosureA_45 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_3[10]);
          {
            WrapperArgs_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), WrapperArgs_46, 0) = ((MR_Box) (ClosureArg_51));
            MR_hl_field(MR_mktag(1), WrapperArgs_46, 1) = ((MR_Box) (WrapperArgs0_43));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MaybeClosureA_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          WrapperArgs_46 = WrapperArgs0_43;
          STATE_VARIABLE_Info_102_102 = STATE_VARIABLE_Info_0_96;
        }
        break;
    }
    {
      WrapperParams_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), WrapperParams_52, 0) = ((MR_Box) (WrapperArgs_46));
      MR_hl_field(MR_mktag(0), WrapperParams_52, 1) = ((MR_Box) (WrapperRetType_44));
    }
    ml_backend__ml_gen_info__ml_gen_info_get_copy_out_3_p_0(STATE_VARIABLE_Info_102_102, CodeModel_26, &CopyOut_53);
    CopyOutWhen_54 = ml_backend__ml_args_util__compute_when_to_copy_out_3_f_0(CopyOut_53, CodeModel_26, PredOrFunc_23);
    ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_10_p_0(CopyOutWhen_54, Context_14, (MR_Integer) 1, ArgTuples_41, &WrapperHeadVarDefns_55, &WrapperHeadVarLvals_56, &WrapperCopyOutRvals_57, &WrapperOutputLvalsTypes_58, STATE_VARIABLE_Info_102_102, &STATE_VARIABLE_Info_105_105);
    switch (CodeModel_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Info_111_111 = STATE_VARIABLE_Info_105_105;
        break;
      case (MR_Integer) 2:
        {
          MR_Word NondetCopyOut_70;
          MR_Word InitialCont_71;

          ml_backend__ml_gen_info__ml_gen_info_get_nondet_copy_out_2_p_0(STATE_VARIABLE_Info_105_105, &NondetCopyOut_70);
          switch (NondetCopyOut_70) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ml_backend__ml_code_util__ml_initial_cont_3_p_0(STATE_VARIABLE_Info_105_105, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &InitialCont_71);
              }
              break;
            case (MR_Integer) 1:
              ml_backend__ml_code_util__ml_initial_cont_3_p_0(STATE_VARIABLE_Info_105_105, WrapperOutputLvalsTypes_58, &InitialCont_71);
              break;
          }
          ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(InitialCont_71, STATE_VARIABLE_Info_105_105, &STATE_VARIABLE_Info_111_111);
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Info_111_111 = STATE_VARIABLE_Info_105_105;
        break;
    }
    if ((MaybeClosureA_45 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      MaybeClosureB_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      ClosureArgLvals_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      STATE_VARIABLE_Info_115_115 = STATE_VARIABLE_Info_111_111;
    }
    else
    {
      MR_Word ClosureArgType1_59;
      MR_Word ClosureArgName1_60;
      MR_Word ClosureDefn_64;
      MR_Word ClosureArgLval_66;
      MR_Word InitClosure_67;
      MR_Word ClosureLval1_72;
      MR_Integer Offset_73;
      MR_Tuple Var_106 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), MaybeClosureA_45, (MR_Integer) 0)));
      MR_Word Var_108;
      MR_Tuple Var_109;

      ClosureArgType1_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_106, (MR_Integer) 0)));
      ClosureArgName1_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_106, (MR_Integer) 1)));
      ClosureDefn_64 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[25]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Context_14);
      ClosureLval1_72 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_2[3]);
      {
        ClosureArgLval_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ClosureArgLval_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), ClosureArgLval_66, 1) = ((MR_Box) (ClosureArgName1_60));
        MR_hl_field(MR_mktag(3), ClosureArgLval_66, 2) = ((MR_Box) (ClosureArgType1_59));
      }
      {
        Var_108 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_108, 0) = ((MR_Box) (ClosureArgLval_66));
      }
      InitClosure_67 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ClosureLval1_72, Var_108, Context_14);
      {
        Var_109 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_109, 0) = ((MR_Box) (ClosureDefn_64));
        MR_hl_field(MR_mktag(0), Var_109, 1) = ((MR_Box) (InitClosure_67));
      }
      {
        MaybeClosureB_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeClosureB_68, 0) = ((MR_Box) (Var_109));
      }
      switch (ClosureKind_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Offset_73 = ml_backend__ml_code_util__ml_closure_arg_offset_0_f_0();
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
          Offset_73 = ml_backend__ml_code_util__ml_typeclass_info_arg_offset_0_f_0();
          break;
      }
      ml_backend__ml_closure_gen__ml_gen_closure_field_lvals_7_p_0(ClosureLval1_72, Offset_73, (MR_Integer) 1, NumClosureArgs_13, &ClosureArgLvals_74, STATE_VARIABLE_Info_111_111, &STATE_VARIABLE_Info_115_115);
    }
    CallLvals_75 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ClosureArgLvals_74, WrapperHeadVarLvals_56);
    ml_backend__ml_closure_gen__create_for_closure_wrapper_args_4_p_0(ProcHeadVarNames_29, CallLvals_75, ProcBoxedArgTypes_30, &ForClosureWrapperArgs_76);
    mercury__set__init_1_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, &Features_77);
    {
      Var_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (PredId_10));
      MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (ProcId_11));
    }
    ml_backend__ml_call_gen__ml_gen_plain_non_tail_call_11_p_1(Var_116, CodeModel_26, Context_14, ForClosureWrapperArgs_76, (MR_Integer) 0, Features_77, &LocalVarDefns0_78, &FuncDefns_79, &Stmts0_80, STATE_VARIABLE_Info_115_115, &STATE_VARIABLE_Info_118_118);
    if ((MaybeClosureB_68 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      LocalVarDefns1_83 = LocalVarDefns0_78;
      Stmts1_84 = Stmts0_80;
    }
    else
    {
      MR_Word ClosureDefn1_81;
      MR_Word InitClosure1_82;
      MR_Tuple Var_119 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), MaybeClosureB_68, (MR_Integer) 0)));

      ClosureDefn1_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_119, (MR_Integer) 0)));
      InitClosure1_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_119, (MR_Integer) 1)));
      {
        LocalVarDefns1_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), LocalVarDefns1_83, 0) = ((MR_Box) (ClosureDefn1_81));
        MR_hl_field(MR_mktag(1), LocalVarDefns1_83, 1) = ((MR_Box) (LocalVarDefns0_78));
      }
      {
        Stmts1_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Stmts1_84, 0) = ((MR_Box) (InitClosure1_82));
        MR_hl_field(MR_mktag(1), Stmts1_84, 1) = ((MR_Box) (Stmts0_80));
      }
    }
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_18, &Globals_88);
    succeeded = ((MR_tag((MR_Word) MaybeClosureA_45)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_120 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), MaybeClosureA_45, (MR_Integer) 0)));
      ClosureArgType2_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_120, (MR_Integer) 0)));
      ClosureArgName2_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_120, (MR_Integer) 1)));
      Var_121 = (MR_Integer) 5;
      libs__globals__get_gc_method_2_p_0(Globals_88, &Var_135);
      succeeded = (Var_121 == Var_135);
    }
    if (succeeded)
      ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_p_0(ClosureKind_12, ClosureArgName2_90, ClosureArgType2_89, PredId_10, ProcId_11, Context_14, &GC_Defns_91, STATE_VARIABLE_Info_118_118, &STATE_VARIABLE_Info_122_122);
    else
    {
      GC_Defns_91 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      STATE_VARIABLE_Info_122_122 = STATE_VARIABLE_Info_118_118;
    }
    switch (CodeModel_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        {
          LocalVarDefns2_85 = LocalVarDefns1_83;
          ml_backend__ml_args_util__ml_append_return_statement_5_p_0(CodeModel_26, Context_14, WrapperCopyOutRvals_57, Stmts1_84, &Stmts_87);
          switch (CodeModel_26) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Info_124_124 = STATE_VARIABLE_Info_122_122;
              break;
            case (MR_Integer) 2:
              ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_p_0(STATE_VARIABLE_Info_122_122, &STATE_VARIABLE_Info_124_124);
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SucceededVarDefn_86;

          SucceededVarDefn_86 = ml_backend__ml_code_util__ml_gen_succeeded_var_decl_1_f_0(Context_14);
          {
            LocalVarDefns2_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), LocalVarDefns2_85, 0) = ((MR_Box) (SucceededVarDefn_86));
            MR_hl_field(MR_mktag(1), LocalVarDefns2_85, 1) = ((MR_Box) (LocalVarDefns1_83));
          }
          ml_backend__ml_args_util__ml_append_return_statement_5_p_0(CodeModel_26, Context_14, WrapperCopyOutRvals_57, Stmts1_84, &Stmts_87);
          STATE_VARIABLE_Info_124_124 = STATE_VARIABLE_Info_122_122;
        }
        break;
    }
    Var_123 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, WrapperHeadVarDefns_55, LocalVarDefns2_85);
    LocalVarDefns_92 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, GC_Defns_91, Var_123);
    WrapperFuncBody_93 = ml_backend__ml_code_util__ml_gen_block_4_f_0(LocalVarDefns_92, FuncDefns_79, Stmts_87, Context_14);
    {
      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (WrapperParams_52));
    }
    ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0(Var_125, &WrapperFuncName_94, WrapperFuncRval_15, STATE_VARIABLE_Info_124_124, &STATE_VARIABLE_Info_126_126);
    ml_backend__ml_closure_gen__ml_gen_wrapper_func_7_p_0(WrapperFuncName_94, WrapperParams_52, Context_14, WrapperFuncBody_93, &WrapperFuncDefn_95, STATE_VARIABLE_Info_126_126, &STATE_VARIABLE_Info_127_127);
    *WrapperFuncType_16 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) WrapperParams_52);
    ml_backend__ml_gen_info__ml_gen_info_add_closure_wrapper_defn_3_p_0(WrapperFuncDefn_95, STATE_VARIABLE_Info_127_127, STATE_VARIABLE_Info_97);
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_field_lvals_7_p_0(
  MR_Word ClosureLval_8,
  MR_Integer Offset_9,
  MR_Integer ArgNum_10,
  MR_Integer NumClosureArgs_11,
  MR_Word * ClosureArgLvals_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_bool succeeded = (ArgNum_10 > NumClosureArgs_11);

    if (succeeded)
    {
      *ClosureArgLvals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
    }
    else
    {
      MR_Word FieldId_14;
      MR_Word FieldLval_15;
      MR_Word ClosureArgLvals0_16;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Integer Var_21 = (MR_Integer) ((MR_Unsigned) ArgNum_10 + (MR_Unsigned) Offset_9);
      MR_Word Var_24;
      MR_Integer Var_27;

      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_20, 0) = ((MR_Box) (Var_21));
      }
      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (Var_20));
      }
      {
        FieldId_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldId_14, 0) = ((MR_Box) (Var_19));
      }
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_24, 0) = ((MR_Box) (ClosureLval_8));
      }
      {
        FieldLval_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldLval_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_3[0])));
        MR_hl_field(MR_mktag(0), FieldLval_15, 1) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(0), FieldLval_15, 2) = ((MR_Box) (FieldId_14));
        MR_hl_field(MR_mktag(0), FieldLval_15, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), FieldLval_15, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      }
      Var_27 = (MR_Integer) ((MR_Unsigned) ArgNum_10 + (MR_Unsigned) (MR_Integer) 1);
      ml_backend__ml_closure_gen__ml_gen_closure_field_lvals_7_p_0(ClosureLval_8, Offset_9, Var_27, NumClosureArgs_11, &ClosureArgLvals0_16, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ClosureArgLvals_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FieldLval_15));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ClosureArgLvals0_16));
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_p_0(
  MR_Word ClosureKind_10,
  MR_Word ClosureArgName_11,
  MR_Word ClosureArgType_12,
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word Context_15,
  MR_Word * GC_Decls_16,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  {
    MR_Word ClosureArgLval_18;
    MR_Word ClosureLayoutPtrGCInit_26;
    MR_Word TypeParamsGCInitFragments_27;
    MR_Word TypeParamsGCInit_30;
    MR_Word ClosureLayoutPtrDecl_31;
    MR_Word TypeParamsDecl_32;
    MR_Word Var_89;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;

    {
      ClosureArgLval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ClosureArgLval_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ClosureArgLval_18, 1) = ((MR_Box) (ClosureArgName_11));
      MR_hl_field(MR_mktag(3), ClosureArgLval_18, 2) = ((MR_Box) (ClosureArgType_12));
    }
    switch (ClosureKind_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ClosureLayoutPtrGCInitFragments_25;
          MR_Word Var_64;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_74;
          MR_Word Var_77;
          MR_Word Var_82;

          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_69, 0) = ((MR_Box) (ClosureArgLval_18));
          }
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (Var_69));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[17])));
          }
          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_closure_gen_scalar_common_3[3])));
            MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
          }
          {
            ClosureLayoutPtrGCInitFragments_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ClosureLayoutPtrGCInitFragments_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[16])));
            MR_hl_field(MR_mktag(1), ClosureLayoutPtrGCInitFragments_25, 1) = ((MR_Box) (Var_64));
          }
          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_74, 2) = ((MR_Box) (ClosureLayoutPtrGCInitFragments_25));
          }
          {
            ClosureLayoutPtrGCInit_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ClosureLayoutPtrGCInit_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), ClosureLayoutPtrGCInit_26, 1) = ((MR_Box) (Var_74));
            MR_hl_field(MR_mktag(3), ClosureLayoutPtrGCInit_26, 2) = ((MR_Box) (Context_15));
          }
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[19])));
          }
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_closure_gen_scalar_common_3[5])));
            MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_82));
          }
          {
            TypeParamsGCInitFragments_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), TypeParamsGCInitFragments_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[18])));
            MR_hl_field(MR_mktag(1), TypeParamsGCInitFragments_27, 1) = ((MR_Box) (Var_77));
          }
          *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
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
          MR_Word ClosureLayoutRval_28;
          MR_Word ClosureLayoutType_29;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_43;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_52;

          ml_backend__ml_closure_gen__ml_gen_closure_layout_7_p_0(PredId_13, ProcId_14, Context_15, &ClosureLayoutRval_28, &ClosureLayoutType_29, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (ClosureLayoutType_29));
            MR_hl_field(MR_mktag(3), Var_41, 2) = ((MR_Box) (ClosureLayoutRval_28));
          }
          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_2[1])));
            MR_hl_field(MR_mktag(2), Var_40, 1) = ((MR_Box) (Var_41));
          }
          {
            ClosureLayoutPtrGCInit_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ClosureLayoutPtrGCInit_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), ClosureLayoutPtrGCInit_26, 1) = ((MR_Box) (Var_40));
            MR_hl_field(MR_mktag(3), ClosureLayoutPtrGCInit_26, 2) = ((MR_Box) (Context_15));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_52, 0) = ((MR_Box) (ClosureArgLval_18));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (Var_52));
          }
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[22])));
          }
          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_closure_gen_scalar_common_3[7])));
            MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_50));
          }
          {
            TypeParamsGCInitFragments_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), TypeParamsGCInitFragments_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[18])));
            MR_hl_field(MR_mktag(1), TypeParamsGCInitFragments_27, 1) = ((MR_Box) (Var_43));
          }
        }
        break;
    }
    {
      Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), Var_89, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_89, 2) = ((MR_Box) (TypeParamsGCInitFragments_27));
    }
    {
      TypeParamsGCInit_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), TypeParamsGCInit_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), TypeParamsGCInit_30, 1) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(3), TypeParamsGCInit_30, 2) = ((MR_Box) (Context_15));
    }
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_91, 0) = ((MR_Box) (ClosureLayoutPtrGCInit_26));
    }
    ClosureLayoutPtrDecl_31 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[14]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)), Var_91, Context_15);
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_92, 0) = ((MR_Box) (TypeParamsGCInit_30));
    }
    TypeParamsDecl_32 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[15]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)), Var_92, Context_15);
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (TypeParamsDecl_32));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *GC_Decls_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ClosureLayoutPtrDecl_31));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_93));
    }
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_layout_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;
    MR_Word conv0_STATE_VARIABLE_GlobalData_21;

    ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv1_HeadVar__4_4, ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_GlobalData_21);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_GlobalData_21));
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_layout_7_p_0(
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word Context_10,
  MR_Word * ClosureLayoutAddrRval_11,
  MR_Word * ClosureLayoutType_12,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  {
    MR_Word ModuleInfo_14;
    MR_Word ClosureLayoutInfo_15;
    MR_Word ClosureArgs_19;
    MR_Word TVarLocnMap_20;
    MR_Word Target_21;
    MR_Word ClosureArgInitsAndTypes_22;
    MR_Word ClosureArgInits_23;
    MR_Word TVarVectorRval_24;
    MR_Word TVarVectorType_25;
    MR_Word InitTVarVector_26;
    MR_Word Inits_27;
    MR_Word ModuleName_28;
    MR_Word MLDS_ModuleName_29;
    MR_Word STATE_VARIABLE_GlobalData_33_33;
    MR_Word STATE_VARIABLE_GlobalData_34_34;
    MR_Word STATE_VARIABLE_GlobalData_36_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word STATE_VARIABLE_GlobalData_42_42;
    MR_Word ArgInitsAndTypes_62;
    MR_Integer Length_63;
    MR_Word LengthRval_64;
    MR_Word CastLengthRval_65;
    MR_Word LengthType_66;
    MR_Word LengthInitAndType_67;
    MR_Word Var_68;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Box conv2_STATE_VARIABLE_GlobalData_34_34;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_30, &ModuleInfo_14);
    ll_backend__continuation_info__generate_closure_layout_4_p_0(ModuleInfo_14, PredId_8, ProcId_9, &ClosureLayoutInfo_15);
    ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_GlobalData_33_33);
    ClosureArgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClosureLayoutInfo_15, (MR_Integer) 0)));
    TVarLocnMap_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClosureLayoutInfo_15, (MR_Integer) 1)));
    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_30, &Target_21);
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ml_gen_closure_layout_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (ModuleInfo_14));
      MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) (Target_21));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_closure_arg_info_0, (MR_Word) &ml_backend__ml_closure_gen_scalar_common_2[0], (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, Var_68, ClosureArgs_19, &ArgInitsAndTypes_62, ((MR_Box) (STATE_VARIABLE_GlobalData_33_33)), &conv2_STATE_VARIABLE_GlobalData_34_34);
    STATE_VARIABLE_GlobalData_34_34 = ((MR_Word) conv2_STATE_VARIABLE_GlobalData_34_34);
    Length_63 = mercury__list__length_1_f_0((MR_Word) &ml_backend__ml_closure_gen_scalar_common_2[0], ArgInitsAndTypes_62);
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_70, 0) = ((MR_Box) (Length_63));
    }
    {
      LengthRval_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LengthRval_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), LengthRval_64, 1) = ((MR_Box) (Var_70));
    }
    LengthType_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
    {
      CastLengthRval_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CastLengthRval_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), CastLengthRval_65, 1) = ((MR_Box) (LengthType_66));
      MR_hl_field(MR_mktag(3), CastLengthRval_65, 2) = ((MR_Box) (LengthRval_64));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (CastLengthRval_65));
    }
    {
      LengthInitAndType_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LengthInitAndType_67, 0) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), LengthInitAndType_67, 1) = ((MR_Box) (LengthType_66));
    }
    {
      ClosureArgInitsAndTypes_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ClosureArgInitsAndTypes_22, 0) = ((MR_Box) (LengthInitAndType_67));
      MR_hl_field(MR_mktag(1), ClosureArgInitsAndTypes_22, 1) = ((MR_Box) (ArgInitsAndTypes_62));
    }
    mercury__assoc_list__keys_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, ClosureArgInitsAndTypes_22, &ClosureArgInits_23);
    ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_p_0(ModuleInfo_14, (MR_Integer) 5, Context_10, TVarLocnMap_20, &TVarVectorRval_24, &TVarVectorType_25, STATE_VARIABLE_GlobalData_34_34, &STATE_VARIABLE_GlobalData_36_36);
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (TVarVectorType_25));
      MR_hl_field(MR_mktag(3), Var_37, 2) = ((MR_Box) (TVarVectorRval_24));
    }
    {
      InitTVarVector_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), InitTVarVector_26, 0) = ((MR_Box) (Var_37));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (InitTVarVector_26));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (ClosureArgInits_23));
    }
    {
      Inits_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Inits_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_3[2])));
      MR_hl_field(MR_mktag(1), Inits_27, 1) = ((MR_Box) (Var_38));
    }
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_14, &ModuleName_28);
    MLDS_ModuleName_29 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_28);
    *ClosureLayoutType_12 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[13]);
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) (Inits_27));
    }
    ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0(MLDS_ModuleName_29, (MR_Integer) 4, *ClosureLayoutType_12, Var_41, Context_10, ClosureLayoutAddrRval_11, STATE_VARIABLE_GlobalData_36_36, &STATE_VARIABLE_GlobalData_42_42);
    ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(STATE_VARIABLE_GlobalData_42_42, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ConstVarKind_10,
  MR_Word Context_11,
  MR_Word TVarLocnMap_12,
  MR_Word * TVarVectorAddrRval_13,
  MR_Word * ArrayType_14,
  MR_Word STATE_VARIABLE_GlobalData_0_21,
  MR_Word * STATE_VARIABLE_GlobalData_22)
{
  {
    MR_bool succeeded;

    *ArrayType_14 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[8]);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) &ml_backend__ml_closure_gen_scalar_common_1[1], (MR_Word) &ml_backend__ml_closure_gen_scalar_common_1[2], TVarLocnMap_12);
    if (succeeded)
    {
      *TVarVectorAddrRval_13 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[10]);
      *STATE_VARIABLE_GlobalData_22 = STATE_VARIABLE_GlobalData_0_21;
    }
    else
    {
      MR_Word Vector_16;
      MR_Word Initializer_18;
      MR_Word ModuleName_19;
      MR_Word MLDS_ModuleName_20;
      MR_Word TVarLocns_31;
      MR_Word TypeParamLocs_32;
      MR_Integer TypeParamsLength_33;
      MR_Word LengthRval_34;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Integer Var_38;
      MR_Word _VectorTypes_17;

      mercury__map__to_assoc_list_2_p_0((MR_Word) &ml_backend__ml_closure_gen_scalar_common_1[1], (MR_Word) &ml_backend__ml_closure_gen_scalar_common_1[2], TVarLocnMap_12, &TVarLocns_31);
      ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_p_0(TVarLocns_31, (MR_Integer) 1, &TypeParamLocs_32);
      mercury__list__length_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, TypeParamLocs_32, &TypeParamsLength_33);
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_36, 0) = ((MR_Box) (TypeParamsLength_33));
      }
      {
        LengthRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), LengthRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), LengthRval_34, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (LengthRval_34));
      }
      {
        Vector_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Vector_16, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Vector_16, 1) = ((MR_Box) (TypeParamLocs_32));
      }
      Var_38 = (MR_Integer) ((MR_Unsigned) TypeParamsLength_33 + (MR_Unsigned) (MR_Integer) 1);
      _VectorTypes_17 = mercury__list__duplicate_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, Var_38, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))));
      {
        Initializer_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Initializer_18, 0) = ((MR_Box) (Vector_16));
      }
      hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_9, &ModuleName_19);
      MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_19);
      ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0(MLDS_ModuleName_20, ConstVarKind_10, *ArrayType_14, Initializer_18, Context_11, TVarVectorAddrRval_13, STATE_VARIABLE_GlobalData_0_21, STATE_VARIABLE_GlobalData_22);
    }
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CurSlot_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word TVar_5;
      MR_Word Locns_6;
      MR_Word TVarLocns_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer TVarNum_10;
      MR_Integer NextSlot_11;
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

      TVar_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0)));
      Locns_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1)));
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, TVar_5, &TVarNum_10);
      NextSlot_11 = (MR_Integer) ((MR_Unsigned) CurSlot_2 + (MR_Unsigned) (MR_Integer) 1);
      succeeded = (TVarNum_10 == CurSlot_2);
      if (succeeded)
      {
        MR_Word Locn_14;
        MR_Integer LocnAsInt_15;
        MR_Word Rval_16;
        MR_Word VectorTail_17;
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Word LeastLocn_12;
        MR_Word Var_13;
        MR_Box conv0_LeastLocn_12;

        succeeded = mercury__set__remove_least_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0, &conv0_LeastLocn_12, Locns_6, &Var_13);
        if (succeeded)
        {
          LeastLocn_12 = ((MR_Word) conv0_LeastLocn_12);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          Locn_14 = LeastLocn_12;
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_closure_gen.ml_stack_layout_construct_type_param_locn_vector\'/3", (MR_String) "tvar has empty set of locations");
            return;
          }
        }
        ll_backend__stack_layout__represent_locn_as_int_2_p_0(Locn_14, &LocnAsInt_15);
        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_22, 0) = ((MR_Box) (LocnAsInt_15));
        }
        {
          Rval_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Rval_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Rval_16, 1) = ((MR_Box) (Var_22));
        }
        ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_p_0(TVarLocns_7, NextSlot_11, &VectorTail_17);
        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Rval_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_23));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (VectorTail_17));
        }
      }
      else
      {
        succeeded = (TVarNum_10 > CurSlot_2);
        if (succeeded)
        {
          MR_Word VectorTail_32;

          ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_p_0(HeadVar__1_1, NextSlot_11, &VectorTail_32);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_3[1])));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (VectorTail_32));
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
ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_10_p_0(
  MR_Word CopyOutWhen_1,
  MR_Word Context_2,
  MR_Integer ArgNum_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
    }
    else
    {
      MR_Word HeadArgTuple_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
      MR_Word TailArgTuples_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
      MR_Word TailDefns_27;
      MR_Word TailLvals_28;
      MR_Word TailCopyOutRvals_29;
      MR_Word TailOutputLvalsTypes_30;
      MR_Word MLDSVarName_32;
      MR_Word Type_33;
      MR_Word TopFunctorMode_34;
      MR_Word MLDS_Type_35;
      MR_Word VarLval_36;
      MR_Word HeadLval_37;
      MR_Integer Var_43 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) (MR_Integer) 1);
      MR_Word STATE_VARIABLE_Info_44_44;
      MR_Word _Var_31;

      ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_10_p_0(CopyOutWhen_1, Context_2, Var_43, TailArgTuples_21, &TailDefns_27, &TailLvals_28, &TailCopyOutRvals_29, &TailOutputLvalsTypes_30, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_44_44);
      _Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadArgTuple_20, (MR_Integer) 0)));
      MLDSVarName_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadArgTuple_20, (MR_Integer) 1)));
      Type_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadArgTuple_20, (MR_Integer) 2)));
      TopFunctorMode_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadArgTuple_20, (MR_Integer) 3)));
      ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_44_44, Type_33, &MLDS_Type_35);
      {
        VarLval_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), VarLval_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), VarLval_36, 1) = ((MR_Box) (MLDSVarName_32));
        MR_hl_field(MR_mktag(3), VarLval_36, 2) = ((MR_Box) (MLDS_Type_35));
      }
      switch (TopFunctorMode_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          {
            HeadLval_37 = VarLval_36;
            *HeadVar__5_5 = TailDefns_27;
            *HeadVar__7_7 = TailCopyOutRvals_29;
            *HeadVar__8_8 = TailOutputLvalsTypes_30;
            *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_44_44;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ModuleInfo_38;
            MR_Word IsDummy_39;
            MR_Word Var_49;

            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_44_44, &ModuleInfo_38);
            IsDummy_39 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_38, Type_33);
            switch (CopyOutWhen_1) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 1:
                {
                  succeeded = (TailArgTuples_21 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  if (succeeded)
                    succeeded = (IsDummy_39 == (MR_Integer) 1);
                }
                break;
            }
            if (succeeded)
            {
              HeadLval_37 = VarLval_36;
              switch (IsDummy_39) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *HeadVar__5_5 = TailDefns_27;
                    *HeadVar__7_7 = TailCopyOutRvals_29;
                    *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_44_44;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word HeadDefn_40;
                    MR_Word Var_47;

                    ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_p_0(MLDSVarName_32, Type_33, ArgNum_3, Context_2, &HeadDefn_40, STATE_VARIABLE_Info_44_44, STATE_VARIABLE_Info_10);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__5_5 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadDefn_40));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailDefns_27));
                    }
                    {
                      Var_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_47, 0) = ((MR_Box) (HeadLval_37));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__7_7 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_47));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailCopyOutRvals_29));
                    }
                  }
                  break;
              }
            }
            else
            {
              MR_Word Var_48;

              {
                Var_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_48, 0) = ((MR_Box) (VarLval_36));
              }
              {
                HeadLval_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), HeadLval_37, 0) = ((MR_Box) (Var_48));
                MR_hl_field(MR_mktag(1), HeadLval_37, 1) = ((MR_Box) (MLDS_Type_35));
              }
              *HeadVar__5_5 = TailDefns_27;
              *HeadVar__7_7 = TailCopyOutRvals_29;
              *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_44_44;
            }
            {
              Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (VarLval_36));
              MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (Type_33));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__8_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_49));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailOutputLvalsTypes_30));
            }
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadLval_37));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailLvals_28));
      }
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_f_0(
  MR_Integer Num_4,
  MR_Integer Max_5)
{
  {
    MR_bool succeeded = (Num_4 > Max_5);
    MR_Word VarNames_6;

    if (succeeded)
      VarNames_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word HeadVarName_7;
      MR_Word TailVarNames_8;
      MR_Word Var_9;
      MR_Integer Var_10;

      {
        Var_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_9, 1) = ((MR_Box) (Num_4));
      }
      {
        HeadVarName_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), HeadVarName_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
        MR_hl_field(MR_mktag(3), HeadVarName_7, 1) = ((MR_Box) (Var_9));
      }
      Var_10 = (MR_Integer) ((MR_Unsigned) Num_4 + (MR_Unsigned) (MR_Integer) 1);
      TailVarNames_8 = ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_f_0(Var_10, Max_5);
      {
        VarNames_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), VarNames_6, 0) = ((MR_Box) (HeadVarName_7));
        MR_hl_field(MR_mktag(1), VarNames_6, 1) = ((MR_Box) (TailVarNames_8));
      }
    }
    return VarNames_6;
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_wrapper_func_7_p_0(
  MR_Word MaybeAux_8,
  MR_Word FuncParams_9,
  MR_Word Context_10,
  MR_Word Stmt_11,
  MR_Word * FunctionDefn_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  {
    MR_Word FunctionDefn0_14;
    MR_Word Name_15;
    MR_Word Ctxt_16;
    MR_Word MaybePredProcId_18;
    MR_Word DefnFuncParams_19;
    MR_Word Body_20;
    MR_Word EnvVarNames_21;
    MR_Word TailRec_22;
    MR_Word _DeclFlags0_17;

    ml_backend__ml_code_util__ml_gen_label_func_6_p_0(STATE_VARIABLE_Info_0_24, MaybeAux_8, FuncParams_9, Context_10, Stmt_11, &FunctionDefn0_14);
    Name_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunctionDefn0_14, (MR_Integer) 0)));
    Ctxt_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunctionDefn0_14, (MR_Integer) 1)));
    _DeclFlags0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunctionDefn0_14, (MR_Integer) 2)));
    MaybePredProcId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunctionDefn0_14, (MR_Integer) 3)));
    DefnFuncParams_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunctionDefn0_14, (MR_Integer) 4)));
    Body_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunctionDefn0_14, (MR_Integer) 5)));
    EnvVarNames_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunctionDefn0_14, (MR_Integer) 6)));
    TailRec_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunctionDefn0_14, (MR_Integer) 7)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *FunctionDefn_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Ctxt_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_1[6]));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybePredProcId_18));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (DefnFuncParams_19));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Body_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (EnvVarNames_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (TailRec_22));
    }
    *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__gen_closure_gc_statement_10_p_0(
  MR_Word ClosureName_11,
  MR_Word ClosureDeclType_12,
  MR_Word ClosureKind_13,
  MR_Word WrapperArgTypes_14,
  MR_Word Purity_15,
  MR_Word PredOrFunc_16,
  MR_Word Context_17,
  MR_Word * ClosureGCStmt_18,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  {
    MR_Word HigherOrderArgTypes_20;
    MR_Word ClosureActualType_22;
    MR_Integer Var_25;
    MR_Word Var_26;

    Var_25 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, WrapperArgTypes_14);
    Var_26 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    HigherOrderArgTypes_20 = mercury__list__duplicate_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, Var_25, ((MR_Box) (Var_26)));
    switch (ClosureKind_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__prog_type__construct_higher_order_type_5_p_0(Purity_15, PredOrFunc_16, HigherOrderArgTypes_20, &ClosureActualType_22);
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
        ClosureActualType_22 = parse_tree__builtin_lib_types__sample_typeclass_info_type_0_f_0();
        break;
    }
    ml_backend__ml_accurate_gc__ml_gen_gc_statement_poly_7_p_0(ClosureName_11, ClosureDeclType_12, ClosureActualType_22, Context_17, ClosureGCStmt_18, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen__create_for_closure_wrapper_args_4_p_0(
  MR_Word VarNames_5,
  MR_Word VarLvals_6,
  MR_Word VarTypes_7,
  MR_Word * Args_8)
{
  {
    MR_bool succeeded = (VarNames_5 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));

    if (succeeded)
    {
      succeeded = (VarLvals_6 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      if (succeeded)
        succeeded = (VarTypes_7 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    if (succeeded)
      *Args_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word HeadVarName_9;
      MR_Word TailVarNames_10;
      MR_Word HeadVarLval_11;
      MR_Word TailVarLvals_12;
      MR_Word HeadVarType_13;
      MR_Word TailVarTypes_14;

      succeeded = ((MR_tag((MR_Word) VarNames_5)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        HeadVarName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarNames_5, (MR_Integer) 0)));
        TailVarNames_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarNames_5, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) VarLvals_6)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          HeadVarLval_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarLvals_6, (MR_Integer) 0)));
          TailVarLvals_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarLvals_6, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) VarTypes_7)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            HeadVarType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarTypes_7, (MR_Integer) 0)));
            TailVarTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarTypes_7, (MR_Integer) 1)));
          }
        }
      }
      if (succeeded)
      {
        MR_Word TailArgs_15;
        MR_Word HeadArg_16;

        ml_backend__ml_closure_gen__create_for_closure_wrapper_args_4_p_0(TailVarNames_10, TailVarLvals_12, TailVarTypes_14, &TailArgs_15);
        {
          HeadArg_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadArg_16, 0) = ((MR_Box) (HeadVarName_9));
          MR_hl_field(MR_mktag(1), HeadArg_16, 1) = ((MR_Box) (HeadVarLval_11));
          MR_hl_field(MR_mktag(1), HeadArg_16, 2) = ((MR_Box) (HeadVarType_13));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Args_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadArg_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailArgs_15));
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_closure_gen.create_for_closure_wrapper_args\'/4", (MR_String) "length mismatch");
          return;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_closure_gen____Unify____closure_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_closure_gen____Unify____closure_kind_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_closure_gen____Compare____closure_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_closure_gen____Compare____closure_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module ml_backend.ml_closure_gen.
