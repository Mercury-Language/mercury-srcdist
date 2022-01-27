/*
** Automatically generated from `ml_closure_gen.m'
** by the Mercury compiler,
** version 14.01.2-beta-2015-02-18, configured for x86_64-apple-darwin13.4.0.
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
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
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.pseudo_type_info.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_info.mih"
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
#include "mdbcomp.trace_counts.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 162 "ml_backend.ml_closure_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_closure_gen__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0;

#line 165 "ml_backend.ml_closure_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_0;

#line 168 "ml_backend.ml_closure_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_1;

#line 171 "ml_backend.ml_closure_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_2;

#line 174 "ml_backend.ml_closure_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_value_ordered_closure_kind_0[3];

#line 177 "ml_backend.ml_closure_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_name_ordered_closure_kind_0[3];

#line 180 "ml_backend.ml_closure_gen.c"
static const MR_Integer ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__functor_number_map_closure_kind_0[3];

#line 183 "ml_backend.ml_closure_gen.c"
static MR_bool MR_CALL 
ml_backend__ml_closure_gen____Unify____closure_kind_0_0_10001(
#line 186 "ml_backend.ml_closure_gen.c"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1,
#line 188 "ml_backend.ml_closure_gen.c"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_2);

#line 191 "ml_backend.ml_closure_gen.c"
static void MR_CALL 
ml_backend__ml_closure_gen____Compare____closure_kind_0_0_10001(
#line 194 "ml_backend.ml_closure_gen.c"
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_1,
#line 196 "ml_backend.ml_closure_gen.c"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_2,
#line 198 "ml_backend.ml_closure_gen.c"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_3);

#line 1168 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_field_lvals_7_p_0(
#line 1168 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ClosureLval_8,
#line 1168 "ml_closure_gen.m"
  MR_Integer ml_backend__ml_closure_gen__Offset_9,
#line 1168 "ml_closure_gen.m"
  MR_Integer ml_backend__ml_closure_gen__ArgNum_10,
#line 1168 "ml_closure_gen.m"
  MR_Integer ml_backend__ml_closure_gen__NumClosureArgs_11,
#line 1168 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__ClosureArgLvals_12,
#line 1168 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_17,
#line 1168 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_18);

#line 1089 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_p_0(
#line 1089 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ClosureKind_10,
#line 1089 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ClosureArgName_11,
#line 1089 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ClosureArgType_12,
#line 1089 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__PredId_13,
#line 1089 "ml_closure_gen.m"
  MR_Integer ml_backend__ml_closure_gen__ProcId_14,
#line 1089 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Context_15,
#line 1089 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__GC_Decls_16,
#line 1089 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_34,
#line 1089 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_35);

#line 993 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_p_0(
#line 993 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Names_13,
#line 993 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Types_14,
#line 993 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Modes_15,
#line 993 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__PredOrFunc_16,
#line 993 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__CodeModel_17,
#line 993 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Context_18,
#line 993 "ml_closure_gen.m"
  MR_Integer ml_backend__ml_closure_gen__ArgNum_19,
#line 993 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__Defns_20,
#line 993 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__Lvals_21,
#line 993 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__CopyOutLvals_22,
#line 993 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_42,
#line 993 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_43);

#line 975 "ml_closure_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_f_0(
#line 975 "ml_closure_gen.m"
  MR_Integer ml_backend__ml_closure_gen__Num_4,
#line 975 "ml_closure_gen.m"
  MR_Integer ml_backend__ml_closure_gen__Max_5);

#line 963 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_wrapper_func_7_p_0(
#line 963 "ml_closure_gen.m"
  MR_Integer ml_backend__ml_closure_gen__FuncLabel_8,
#line 963 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__FuncParams_9,
#line 963 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Context_10,
#line 963 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Statement_11,
#line 963 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__Func_12,
#line 963 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_21,
#line 963 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_22);

#line 934 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__gen_closure_gc_statement_10_p_0(
#line 934 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ClosureName_11,
#line 934 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ClosureDeclType_12,
#line 934 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ClosureKind_13,
#line 934 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__WrapperArgTypes_14,
#line 934 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Purity_15,
#line 934 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__PredOrFunc_16,
#line 934 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Context_17,
#line 934 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__ClosureGCStatement_18,
#line 934 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_23,
#line 934 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_24);

#line 925 "ml_closure_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_closure_gen__arg_delete_gc_statement_1_f_0(
#line 925 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Argument0_3);

#line 465 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_p_0(
#line 465 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__HeadVar__1_1,
#line 465 "ml_closure_gen.m"
  MR_Integer ml_backend__ml_closure_gen__CurSlot_2,
#line 465 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__HeadVar__3_3);

#line 428 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_p_0(
#line 428 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_9,
#line 428 "ml_closure_gen.m"
  MR_String ml_backend__ml_closure_gen__TVarVectorNameStr_10,
#line 428 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Context_11,
#line 428 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__TVarLocnMap_12,
#line 428 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__TVarVectorAddrRval_13,
#line 428 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__ArrayType_14,
#line 428 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_21,
#line 428 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_22);

#line 407 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_type_info_6_p_0_1(
#line 407 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__closure_arg,
#line 407 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1,
#line 407 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_2,
#line 407 "ml_closure_gen.m"
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_3);

#line 365 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_type_info_6_p_0(
#line 365 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_7,
#line 365 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__TypeInfo_8,
#line 365 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__Rval_9,
#line 365 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__Type_10,
#line 365 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_28,
#line 365 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_29);

#line 359 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_p_0_1(
#line 359 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__closure_arg,
#line 359 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1,
#line 359 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_2,
#line 359 "ml_closure_gen.m"
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_3);

#line 303 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_p_0(
#line 303 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_7,
#line 303 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__PseudoTypeInfo_8,
#line 303 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__Rval_9,
#line 303 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__Type_10,
#line 303 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_35,
#line 303 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_36);

#line 407 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_p_0_1(
#line 407 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__closure_arg,
#line 407 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1,
#line 407 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_2,
#line 407 "ml_closure_gen.m"
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_3);

#line 288 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_p_0(
#line 288 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_7,
#line 288 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__MaybePseudoTypeInfo_8,
#line 288 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__Rval_9,
#line 288 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__Type_10,
#line 288 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_14,
#line 288 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_15);

#line 282 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_type_info_defn_4_p_0(
#line 282 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_5,
#line 282 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__TI_6,
#line 282 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_10,
#line 282 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_11);

#line 266 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_defn_4_p_0(
#line 266 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_5,
#line 266 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__MaybePTI_6,
#line 266 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_10,
#line 266 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_11);

#line 359 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_p_0_1(
#line 359 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__closure_arg,
#line 359 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1,
#line 359 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_2,
#line 359 "ml_closure_gen.m"
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_3);

#line 245 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_p_0(
#line 245 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_6,
#line 245 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ClosureArg_7,
#line 245 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__HeadVar__3_3,
#line 245 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_18,
#line 245 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_19);

#line 236 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_layout_7_p_0_1(
#line 236 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__closure_arg,
#line 236 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1,
#line 236 "ml_closure_gen.m"
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_2,
#line 236 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_3,
#line 236 "ml_closure_gen.m"
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_4);

#line 166 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_layout_7_p_0(
#line 166 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__PredId_8,
#line 166 "ml_closure_gen.m"
  MR_Integer ml_backend__ml_closure_gen__ProcId_9,
#line 166 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Context_10,
#line 166 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__ClosureLayoutAddrRval_11,
#line 166 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__ClosureLayoutType_12,
#line 166 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_29,
#line 166 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_30);

#line 721 "ml_closure_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_p_0_1(
#line 721 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__closure_arg,
#line 721 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1);


static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_1[26][2];

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_2[2][3];

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_3[6][1];

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_4[1][5];

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_5[1][8];

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_6[2][7];




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
    ((MR_Box) ((MR_String) ")->MR_closure_layout;\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) ");\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "closure_arg")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))),
    ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_1[10]))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "closure")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_closure_gen_scalar_common_3[4])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "closure_layout_ptr")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "type_params")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) " = (MR_Box) ((MR_Closure *)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) " = (MR_Box) MR_materialize_closure_type_params(\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) " = (MR_Box) MR_materialize_typeclass_info_type_params(\n(MR_Word) ")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) ", (MR_Closure_Layout *) ")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_4[0])),
    ((MR_Box) (ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_3[6][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_1[10])))))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_1[11]))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[14])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[19])))
  },
};

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_closure_arg_info_0)),
    ((MR_Box) (&ml_backend__ml_closure_gen__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_closure_gen_scalar_common_6[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 785 "ml_backend.ml_closure_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_closure_gen__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0,
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

#line 794 "ml_backend.ml_closure_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_0 = {
  (MR_String) "higher_order_proc_closure",
  (MR_Integer) 0
};

#line 800 "ml_backend.ml_closure_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_1 = {
  (MR_String) "typeclass_info_closure",
  (MR_Integer) 1
};

#line 806 "ml_backend.ml_closure_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_2 = {
  (MR_String) "special_pred_closure",
  (MR_Integer) 2
};

#line 812 "ml_backend.ml_closure_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_value_ordered_closure_kind_0[3] = {
  &ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_0,
  &ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_1,
  &ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_2
};

#line 819 "ml_backend.ml_closure_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_name_ordered_closure_kind_0[3] = {
  &ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_0,
  &ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_2,
  &ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_1
};

#line 826 "ml_backend.ml_closure_gen.c"
static const MR_Integer ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__functor_number_map_closure_kind_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 833 "ml_backend.ml_closure_gen.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__type_ctor_info_closure_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_closure_gen____Unify____closure_kind_0_0_10001)),
  ((MR_Box) (ml_backend__ml_closure_gen____Compare____closure_kind_0_0_10001)),
  (MR_String) "ml_backend.ml_closure_gen",
  (MR_String) "closure_kind",
  {
    ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_name_ordered_closure_kind_0
  },
  {
    ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__enum_value_ordered_closure_kind_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  ml_backend__ml_closure_gen__ml_backend__ml_closure_gen__functor_number_map_closure_kind_0
};

#line 854 "ml_backend.ml_closure_gen.c"
static MR_bool MR_CALL 
ml_backend__ml_closure_gen____Unify____closure_kind_0_0_10001(
#line 857 "ml_backend.ml_closure_gen.c"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1,
#line 859 "ml_backend.ml_closure_gen.c"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_2)
#line 861 "ml_backend.ml_closure_gen.c"
{
#line 863 "ml_backend.ml_closure_gen.c"
  {
#line 865 "ml_backend.ml_closure_gen.c"
    MR_bool ml_backend__ml_closure_gen__succeeded;

#line 868 "ml_backend.ml_closure_gen.c"
    {
#line 870 "ml_backend.ml_closure_gen.c"
      ml_backend__ml_closure_gen__succeeded = ml_backend__ml_closure_gen____Unify____closure_kind_0_0(((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_2));
    }
#line 873 "ml_backend.ml_closure_gen.c"
    return ml_backend__ml_closure_gen__succeeded;
#line 875 "ml_backend.ml_closure_gen.c"
  }
#line 877 "ml_backend.ml_closure_gen.c"
}

#line 880 "ml_backend.ml_closure_gen.c"
static void MR_CALL 
ml_backend__ml_closure_gen____Compare____closure_kind_0_0_10001(
#line 883 "ml_backend.ml_closure_gen.c"
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_1,
#line 885 "ml_backend.ml_closure_gen.c"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_2,
#line 887 "ml_backend.ml_closure_gen.c"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_3)
#line 889 "ml_backend.ml_closure_gen.c"
{
#line 891 "ml_backend.ml_closure_gen.c"
  {
#line 893 "ml_backend.ml_closure_gen.c"
    MR_Word ml_backend__ml_closure_gen__conv0_HeadVar__1_1;

#line 896 "ml_backend.ml_closure_gen.c"
    {
#line 898 "ml_backend.ml_closure_gen.c"
      ml_backend__ml_closure_gen____Compare____closure_kind_0_0(&ml_backend__ml_closure_gen__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_2), ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_3));
    }
#line 901 "ml_backend.ml_closure_gen.c"
    *ml_backend__ml_closure_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_closure_gen__conv0_HeadVar__1_1));
#line 903 "ml_backend.ml_closure_gen.c"
  }
#line 905 "ml_backend.ml_closure_gen.c"
}

#line 63 "ml_closure_gen.m"
void MR_CALL 
ml_backend__ml_closure_gen____Compare____closure_kind_0_0(
#line 63 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__HeadVar__1_1,
#line 63 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__HeadVar__2_2,
#line 63 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__HeadVar__3_3)
#line 63 "ml_closure_gen.m"
{
#line 63 "ml_closure_gen.m"
  {
#line 63 "ml_closure_gen.m"
    MR_bool ml_backend__ml_closure_gen__succeeded;
#line 63 "ml_closure_gen.m"
    MR_Integer ml_backend__ml_closure_gen__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_closure_gen__HeadVar__2_2;
#line 63 "ml_closure_gen.m"
    MR_Integer ml_backend__ml_closure_gen__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_closure_gen__HeadVar__3_3;

#line 63 "ml_closure_gen.m"
    {
#line 63 "ml_closure_gen.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_closure_gen__HeadVar__1_1, ml_backend__ml_closure_gen__Cast_HeadVar1_4, ml_backend__ml_closure_gen__Cast_HeadVar2_5);
#line 63 "ml_closure_gen.m"
      return;
    }
#line 63 "ml_closure_gen.m"
  }
#line 63 "ml_closure_gen.m"
}

#line 63 "ml_closure_gen.m"
MR_bool MR_CALL 
ml_backend__ml_closure_gen____Unify____closure_kind_0_0(
#line 63 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__HeadVar__2_1,
#line 63 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__HeadVar__2_2)
#line 63 "ml_closure_gen.m"
{
#line 949 "ml_backend.ml_closure_gen.c"
  {
#line 951 "ml_backend.ml_closure_gen.c"
    MR_bool ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__HeadVar__2_1 == ml_backend__ml_closure_gen__HeadVar__2_2);

#line 954 "ml_backend.ml_closure_gen.c"
    return ml_backend__ml_closure_gen__succeeded;
#line 956 "ml_backend.ml_closure_gen.c"
  }
#line 63 "ml_closure_gen.m"
}

#line 1168 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_field_lvals_7_p_0(
#line 1168 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ClosureLval_8,
#line 1168 "ml_closure_gen.m"
  MR_Integer ml_backend__ml_closure_gen__Offset_9,
#line 1168 "ml_closure_gen.m"
  MR_Integer ml_backend__ml_closure_gen__ArgNum_10,
#line 1168 "ml_closure_gen.m"
  MR_Integer ml_backend__ml_closure_gen__NumClosureArgs_11,
#line 1168 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__ClosureArgLvals_12,
#line 1168 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_17,
#line 1168 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_18)
#line 1168 "ml_closure_gen.m"
{
#line 1175 "ml_closure_gen.m"
  {
#line 1175 "ml_closure_gen.m"
    MR_bool ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__ArgNum_10 > ml_backend__ml_closure_gen__NumClosureArgs_11);

#line 1175 "ml_closure_gen.m"
    if (ml_backend__ml_closure_gen__succeeded)
#line 1174 "ml_closure_gen.m"
      {
#line 1174 "ml_closure_gen.m"
        *ml_backend__ml_closure_gen__ClosureArgLvals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1174 "ml_closure_gen.m"
        *ml_backend__ml_closure_gen__STATE_VARIABLE_Info_18 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_17;
#line 1174 "ml_closure_gen.m"
      }
#line 1175 "ml_closure_gen.m"
    else
#line 1177 "ml_closure_gen.m"
      {
#line 1177 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__FieldId_14;
#line 1177 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__FieldLval_15;
#line 1177 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__ClosureArgLvals0_16;
#line 1177 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__V_19_19;
#line 1177 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__V_20_20;
#line 1177 "ml_closure_gen.m"
        MR_Integer ml_backend__ml_closure_gen__V_21_21 = (ml_backend__ml_closure_gen__ArgNum_10 + ml_backend__ml_closure_gen__Offset_9);
#line 1177 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__V_24_24;
#line 1177 "ml_closure_gen.m"
        MR_Integer ml_backend__ml_closure_gen__V_27_27;

#line 1177 "ml_closure_gen.m"
        {
#line 1177 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_20_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__V_20_20, 0) = ((MR_Box) (ml_backend__ml_closure_gen__V_21_21));
#line 1177 "ml_closure_gen.m"
        }
#line 1177 "ml_closure_gen.m"
        {
#line 1177 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1177 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_19_19, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_20_20));
#line 1177 "ml_closure_gen.m"
        }
#line 1177 "ml_closure_gen.m"
        {
#line 1177 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__FieldId_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1177 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__FieldId_14, 0) = ((MR_Box) (ml_backend__ml_closure_gen__V_19_19));
#line 1177 "ml_closure_gen.m"
        }
#line 1179 "ml_closure_gen.m"
        {
#line 1179 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1179 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_24_24, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureLval_8));
#line 1179 "ml_closure_gen.m"
        }
#line 1179 "ml_closure_gen.m"
        {
#line 1179 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__FieldLval_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1179 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__FieldLval_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_3[4])));
#line 1179 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__FieldLval_15, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_24_24));
#line 1179 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__FieldLval_15, 2) = ((MR_Box) (ml_backend__ml_closure_gen__FieldId_14));
#line 1179 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__FieldLval_15, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 1179 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__FieldLval_15, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 1179 "ml_closure_gen.m"
        }
#line 1182 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__V_27_27 = (ml_backend__ml_closure_gen__ArgNum_10 + (MR_Integer) 1);
#line 1182 "ml_closure_gen.m"
        {
#line 1182 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__ml_gen_closure_field_lvals_7_p_0(ml_backend__ml_closure_gen__ClosureLval_8, ml_backend__ml_closure_gen__Offset_9, ml_backend__ml_closure_gen__V_27_27, ml_backend__ml_closure_gen__NumClosureArgs_11, &ml_backend__ml_closure_gen__ClosureArgLvals0_16, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_17, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_18);
        }
#line 1184 "ml_closure_gen.m"
        {
#line 1184 "ml_closure_gen.m"
          MR_Word base;
#line 1184 "ml_closure_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "ml_closure_gen.m"
          *ml_backend__ml_closure_gen__ClosureArgLvals_12 = base;
#line 1184 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_closure_gen__FieldLval_15));
#line 1184 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureArgLvals0_16));
#line 1184 "ml_closure_gen.m"
        }
#line 1177 "ml_closure_gen.m"
      }
#line 1175 "ml_closure_gen.m"
  }
#line 1168 "ml_closure_gen.m"
}

#line 1089 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_p_0(
#line 1089 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ClosureKind_10,
#line 1089 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ClosureArgName_11,
#line 1089 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ClosureArgType_12,
#line 1089 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__PredId_13,
#line 1089 "ml_closure_gen.m"
  MR_Integer ml_backend__ml_closure_gen__ProcId_14,
#line 1089 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Context_15,
#line 1089 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__GC_Decls_16,
#line 1089 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_34,
#line 1089 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_35)
#line 1089 "ml_closure_gen.m"
{
#line 1094 "ml_closure_gen.m"
  {
#line 1094 "ml_closure_gen.m"
    MR_bool ml_backend__ml_closure_gen__succeeded;
#line 1094 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__MLDS_Context_18;
#line 1094 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ClosureArgLval_19;
#line 1094 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ClosureLayoutPtrType_21;
#line 1094 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ClosureLayoutPtrDecl_22;
#line 1094 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ClosureLayoutPtrGCInit_23;
#line 1094 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ClosureLayoutPtrLval_24;
#line 1094 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__TypeParamsType_26;
#line 1094 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__TypeParamsDecl_27;
#line 1094 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__TypeParamsGCInit_28;
#line 1094 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__TypeParamsLval_29;
#line 1094 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__TypeParamsGCInitFragments_31;
#line 1094 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__V_39_39;
#line 1094 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__V_43_43;
#line 1094 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__V_107_107;
#line 1094 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__V_108_108;
#line 1094 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__V_110_110;

#line 1095 "ml_closure_gen.m"
    {
#line 1095 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__MLDS_Context_18 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_closure_gen__Context_15);
    }
#line 1097 "ml_closure_gen.m"
    {
#line 1097 "ml_closure_gen.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_34, ml_backend__ml_closure_gen__ClosureArgName_11, ml_backend__ml_closure_gen__ClosureArgType_12, &ml_backend__ml_closure_gen__ClosureArgLval_19);
    }
#line 1102 "ml_closure_gen.m"
    ml_backend__ml_closure_gen__ClosureLayoutPtrType_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 1109 "ml_closure_gen.m"
    {
#line 1109 "ml_closure_gen.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_34, (MR_Word) &ml_backend__ml_closure_gen_scalar_common_1[20], ml_backend__ml_closure_gen__ClosureLayoutPtrType_21, &ml_backend__ml_closure_gen__ClosureLayoutPtrLval_24);
    }
#line 1115 "ml_closure_gen.m"
    ml_backend__ml_closure_gen__TypeParamsType_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 1121 "ml_closure_gen.m"
    {
#line 1121 "ml_closure_gen.m"
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_34, (MR_Word) &ml_backend__ml_closure_gen_scalar_common_1[21], ml_backend__ml_closure_gen__TypeParamsType_26, &ml_backend__ml_closure_gen__TypeParamsLval_29);
    }
#line 1140 "ml_closure_gen.m"
    if ((ml_backend__ml_closure_gen__ClosureKind_10 == (MR_Integer) 0))
#line 1123 "ml_closure_gen.m"
      {
#line 1123 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__ClosureLayoutPtrGCInitFragments_30;
#line 1123 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__V_76_76;
#line 1123 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__V_77_77;
#line 1123 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__V_81_81;
#line 1123 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__V_82_82;
#line 1123 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__V_83_83;
#line 1123 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__V_89_89;
#line 1123 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__V_90_90;
#line 1123 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__V_92_92;
#line 1123 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__V_93_93;
#line 1123 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__V_99_99;

#line 1125 "ml_closure_gen.m"
        {
#line 1125 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1125 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1125 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_76_76, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureLayoutPtrLval_24));
#line 1125 "ml_closure_gen.m"
        }
#line 1127 "ml_closure_gen.m"
        {
#line 1127 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1127 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_83_83, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureArgLval_19));
#line 1127 "ml_closure_gen.m"
        }
#line 1127 "ml_closure_gen.m"
        {
#line 1127 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_82_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1127 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__V_82_82, 0) = ((MR_Box) (ml_backend__ml_closure_gen__V_83_83));
#line 1127 "ml_closure_gen.m"
        }
#line 1126 "ml_closure_gen.m"
        {
#line 1126 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1126 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_81_81, 0) = ((MR_Box) (ml_backend__ml_closure_gen__V_82_82));
#line 1126 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[4])));
#line 1126 "ml_closure_gen.m"
        }
#line 1125 "ml_closure_gen.m"
        {
#line 1125 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1125 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[22])));
#line 1125 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_77_77, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_81_81));
#line 1125 "ml_closure_gen.m"
        }
#line 1124 "ml_closure_gen.m"
        {
#line 1124 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__ClosureLayoutPtrGCInitFragments_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__ClosureLayoutPtrGCInitFragments_30, 0) = ((MR_Box) (ml_backend__ml_closure_gen__V_76_76));
#line 1124 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__ClosureLayoutPtrGCInitFragments_30, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_77_77));
#line 1124 "ml_closure_gen.m"
        }
#line 1130 "ml_closure_gen.m"
        {
#line 1130 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1130 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_90_90, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1130 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_90_90, 2) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureLayoutPtrGCInitFragments_30));
#line 1130 "ml_closure_gen.m"
        }
#line 1130 "ml_closure_gen.m"
        {
#line 1130 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_89_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_89_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1130 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_89_89, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_90_90));
#line 1130 "ml_closure_gen.m"
        }
#line 1130 "ml_closure_gen.m"
        {
#line 1130 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__ClosureLayoutPtrGCInit_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1130 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__ClosureLayoutPtrGCInit_23, 0) = ((MR_Box) (ml_backend__ml_closure_gen__V_89_89));
#line 1130 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__ClosureLayoutPtrGCInit_23, 1) = ((MR_Box) (ml_backend__ml_closure_gen__MLDS_Context_18));
#line 1130 "ml_closure_gen.m"
        }
#line 1134 "ml_closure_gen.m"
        {
#line 1134 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1134 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1134 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_92_92, 1) = ((MR_Box) (ml_backend__ml_closure_gen__TypeParamsLval_29));
#line 1134 "ml_closure_gen.m"
        }
#line 1136 "ml_closure_gen.m"
        {
#line 1136 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_99_99, 0) = ((MR_Box) (ml_backend__ml_closure_gen__V_82_82));
#line 1136 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[6])));
#line 1136 "ml_closure_gen.m"
        }
#line 1134 "ml_closure_gen.m"
        {
#line 1134 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1134 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_93_93, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[23])));
#line 1134 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_93_93, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_99_99));
#line 1134 "ml_closure_gen.m"
        }
#line 1133 "ml_closure_gen.m"
        {
#line 1133 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__TypeParamsGCInitFragments_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1133 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__TypeParamsGCInitFragments_31, 0) = ((MR_Box) (ml_backend__ml_closure_gen__V_92_92));
#line 1133 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__TypeParamsGCInitFragments_31, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_93_93));
#line 1133 "ml_closure_gen.m"
        }
#line 1139 "ml_closure_gen.m"
        *ml_backend__ml_closure_gen__STATE_VARIABLE_Info_35 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_34;
#line 1123 "ml_closure_gen.m"
      }
#line 1140 "ml_closure_gen.m"
    else
#line 1140 "ml_closure_gen.m"
      if ((ml_backend__ml_closure_gen__ClosureKind_10 == (MR_Integer) 2))
#line 1160 "ml_closure_gen.m"
        {
#line 1161 "ml_closure_gen.m"
          {
#line 1161 "ml_closure_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_closure_gen", (MR_String) "predicate \140ml_backend.ml_closure_gen.ml_gen_closure_wrapper_gc_decls\'/9", (MR_String) "special_pred_closure");
#line 1161 "ml_closure_gen.m"
            return;
          }
#line 1160 "ml_closure_gen.m"
        }
#line 1140 "ml_closure_gen.m"
      else
#line 1141 "ml_closure_gen.m"
        {
#line 1141 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__ClosureLayoutRval_32;
#line 1141 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__ClosureLayoutType_33;
#line 1141 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__V_48_48;
#line 1141 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__V_49_49;
#line 1141 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__V_50_50;
#line 1141 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__V_51_51;
#line 1141 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__V_52_52;
#line 1141 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__V_53_53;
#line 1141 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__V_61_61;
#line 1141 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__V_62_62;
#line 1141 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__V_63_63;
#line 1141 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__V_64_64;
#line 1141 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__V_68_68;
#line 1141 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__V_69_69;
#line 1141 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__V_70_70;

#line 1142 "ml_closure_gen.m"
          {
#line 1142 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__ml_gen_closure_layout_7_p_0(ml_backend__ml_closure_gen__PredId_13, ml_backend__ml_closure_gen__ProcId_14, ml_backend__ml_closure_gen__Context_15, &ml_backend__ml_closure_gen__ClosureLayoutRval_32, &ml_backend__ml_closure_gen__ClosureLayoutType_33, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_34, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_35);
          }
#line 1147 "ml_closure_gen.m"
          {
#line 1147 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1147 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_51_51, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureLayoutType_33));
#line 1147 "ml_closure_gen.m"
          }
#line 1146 "ml_closure_gen.m"
          {
#line 1146 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1146 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_50_50, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_51_51));
#line 1146 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_50_50, 2) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureLayoutRval_32));
#line 1146 "ml_closure_gen.m"
          }
#line 1145 "ml_closure_gen.m"
          {
#line 1145 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__V_49_49, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureLayoutPtrLval_24));
#line 1145 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__V_49_49, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_50_50));
#line 1145 "ml_closure_gen.m"
          }
#line 1144 "ml_closure_gen.m"
          {
#line 1144 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1144 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1144 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_48_48, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_49_49));
#line 1144 "ml_closure_gen.m"
          }
#line 1144 "ml_closure_gen.m"
          {
#line 1144 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__ClosureLayoutPtrGCInit_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1144 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__ClosureLayoutPtrGCInit_23, 0) = ((MR_Box) (ml_backend__ml_closure_gen__V_48_48));
#line 1144 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__ClosureLayoutPtrGCInit_23, 1) = ((MR_Box) (ml_backend__ml_closure_gen__MLDS_Context_18));
#line 1144 "ml_closure_gen.m"
          }
#line 1150 "ml_closure_gen.m"
          {
#line 1150 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1150 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_52_52, 1) = ((MR_Box) (ml_backend__ml_closure_gen__TypeParamsLval_29));
#line 1150 "ml_closure_gen.m"
          }
#line 1154 "ml_closure_gen.m"
          {
#line 1154 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1154 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_63_63, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureArgLval_19));
#line 1154 "ml_closure_gen.m"
          }
#line 1154 "ml_closure_gen.m"
          {
#line 1154 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__V_62_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1154 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__V_62_62, 0) = ((MR_Box) (ml_backend__ml_closure_gen__V_63_63));
#line 1154 "ml_closure_gen.m"
          }
#line 1156 "ml_closure_gen.m"
          {
#line 1156 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1156 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_70_70, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureLayoutPtrLval_24));
#line 1156 "ml_closure_gen.m"
          }
#line 1156 "ml_closure_gen.m"
          {
#line 1156 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1156 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__V_69_69, 0) = ((MR_Box) (ml_backend__ml_closure_gen__V_70_70));
#line 1156 "ml_closure_gen.m"
          }
#line 1155 "ml_closure_gen.m"
          {
#line 1155 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_68_68, 0) = ((MR_Box) (ml_backend__ml_closure_gen__V_69_69));
#line 1155 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[6])));
#line 1155 "ml_closure_gen.m"
          }
#line 1154 "ml_closure_gen.m"
          {
#line 1154 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1154 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_64_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[25])));
#line 1154 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_64_64, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_68_68));
#line 1154 "ml_closure_gen.m"
          }
#line 1153 "ml_closure_gen.m"
          {
#line 1153 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_61_61, 0) = ((MR_Box) (ml_backend__ml_closure_gen__V_62_62));
#line 1153 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_61_61, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_64_64));
#line 1153 "ml_closure_gen.m"
          }
#line 1150 "ml_closure_gen.m"
          {
#line 1150 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[24])));
#line 1150 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_53_53, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_61_61));
#line 1150 "ml_closure_gen.m"
          }
#line 1149 "ml_closure_gen.m"
          {
#line 1149 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__TypeParamsGCInitFragments_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__TypeParamsGCInitFragments_31, 0) = ((MR_Box) (ml_backend__ml_closure_gen__V_52_52));
#line 1149 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__TypeParamsGCInitFragments_31, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_53_53));
#line 1149 "ml_closure_gen.m"
          }
#line 1141 "ml_closure_gen.m"
        }
#line 1106 "ml_closure_gen.m"
    ml_backend__ml_closure_gen__V_39_39 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) ml_backend__ml_closure_gen__ClosureLayoutPtrGCInit_23);
#line 1106 "ml_closure_gen.m"
    {
#line 1106 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__ClosureLayoutPtrDecl_22 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_1[20]))), ml_backend__ml_closure_gen__ClosureLayoutPtrType_21, ml_backend__ml_closure_gen__V_39_39, ml_backend__ml_closure_gen__MLDS_Context_18);
    }
#line 1164 "ml_closure_gen.m"
    {
#line 1164 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1164 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1164 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_108_108, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1164 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_108_108, 2) = ((MR_Box) (ml_backend__ml_closure_gen__TypeParamsGCInitFragments_31));
#line 1164 "ml_closure_gen.m"
    }
#line 1164 "ml_closure_gen.m"
    {
#line 1164 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__V_107_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1164 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_107_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1164 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_107_107, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_108_108));
#line 1164 "ml_closure_gen.m"
    }
#line 1164 "ml_closure_gen.m"
    {
#line 1164 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__TypeParamsGCInit_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1164 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__TypeParamsGCInit_28, 0) = ((MR_Box) (ml_backend__ml_closure_gen__V_107_107));
#line 1164 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__TypeParamsGCInit_28, 1) = ((MR_Box) (ml_backend__ml_closure_gen__MLDS_Context_18));
#line 1164 "ml_closure_gen.m"
    }
#line 1119 "ml_closure_gen.m"
    ml_backend__ml_closure_gen__V_43_43 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) ml_backend__ml_closure_gen__TypeParamsGCInit_28);
#line 1119 "ml_closure_gen.m"
    {
#line 1119 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__TypeParamsDecl_27 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_1[21]))), ml_backend__ml_closure_gen__TypeParamsType_26, ml_backend__ml_closure_gen__V_43_43, ml_backend__ml_closure_gen__MLDS_Context_18);
    }
#line 1166 "ml_closure_gen.m"
    {
#line 1166 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_110_110, 0) = ((MR_Box) (ml_backend__ml_closure_gen__TypeParamsDecl_27));
#line 1166 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1166 "ml_closure_gen.m"
    }
#line 1166 "ml_closure_gen.m"
    {
#line 1166 "ml_closure_gen.m"
      MR_Word base;
#line 1166 "ml_closure_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "ml_closure_gen.m"
      *ml_backend__ml_closure_gen__GC_Decls_16 = base;
#line 1166 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureLayoutPtrDecl_22));
#line 1166 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_110_110));
#line 1166 "ml_closure_gen.m"
    }
#line 1094 "ml_closure_gen.m"
  }
#line 1089 "ml_closure_gen.m"
}

#line 993 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_p_0(
#line 993 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Names_13,
#line 993 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Types_14,
#line 993 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Modes_15,
#line 993 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__PredOrFunc_16,
#line 993 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__CodeModel_17,
#line 993 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Context_18,
#line 993 "ml_closure_gen.m"
  MR_Integer ml_backend__ml_closure_gen__ArgNum_19,
#line 993 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__Defns_20,
#line 993 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__Lvals_21,
#line 993 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__CopyOutLvals_22,
#line 993 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_42,
#line 993 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_43)
#line 993 "ml_closure_gen.m"
{
#line 1008 "ml_closure_gen.m"
  {
#line 1008 "ml_closure_gen.m"
    MR_bool ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__Names_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 1001 "ml_closure_gen.m"
    if (ml_backend__ml_closure_gen__succeeded)
#line 1001 "ml_closure_gen.m"
      {
#line 1002 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__Types_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1001 "ml_closure_gen.m"
        if (ml_backend__ml_closure_gen__succeeded)
#line 1003 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__Modes_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1001 "ml_closure_gen.m"
      }
#line 1008 "ml_closure_gen.m"
    if (ml_backend__ml_closure_gen__succeeded)
#line 1005 "ml_closure_gen.m"
      {
#line 1005 "ml_closure_gen.m"
        *ml_backend__ml_closure_gen__Lvals_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1006 "ml_closure_gen.m"
        *ml_backend__ml_closure_gen__CopyOutLvals_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1007 "ml_closure_gen.m"
        *ml_backend__ml_closure_gen__Defns_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1007 "ml_closure_gen.m"
        *ml_backend__ml_closure_gen__STATE_VARIABLE_Info_43 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_42;
#line 1005 "ml_closure_gen.m"
      }
#line 1008 "ml_closure_gen.m"
    else
#line 1069 "ml_closure_gen.m"
      {
#line 1069 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__Name_24;
#line 1069 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__NamesTail_25;
#line 1069 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__Type_26;
#line 1069 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__TypesTail_27;
#line 1069 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__Mode_28;
#line 1069 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__ModesTail_29;

#line 1009 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_closure_gen__Names_13)) == (MR_mktag((MR_Integer) 1)));
#line 1009 "ml_closure_gen.m"
        if (ml_backend__ml_closure_gen__succeeded)
#line 1009 "ml_closure_gen.m"
          {
#line 1009 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__Name_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Names_13, (MR_Integer) 0)));
#line 1009 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__NamesTail_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Names_13, (MR_Integer) 1)));
#line 1010 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_closure_gen__Types_14)) == (MR_mktag((MR_Integer) 1)));
#line 1010 "ml_closure_gen.m"
            if (ml_backend__ml_closure_gen__succeeded)
#line 1010 "ml_closure_gen.m"
              {
#line 1010 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__Type_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Types_14, (MR_Integer) 0)));
#line 1010 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__TypesTail_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Types_14, (MR_Integer) 1)));
#line 1011 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_closure_gen__Modes_15)) == (MR_mktag((MR_Integer) 1)));
#line 1011 "ml_closure_gen.m"
                if (ml_backend__ml_closure_gen__succeeded)
#line 1011 "ml_closure_gen.m"
                  {
#line 1011 "ml_closure_gen.m"
                    ml_backend__ml_closure_gen__Mode_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Modes_15, (MR_Integer) 0)));
#line 1011 "ml_closure_gen.m"
                    ml_backend__ml_closure_gen__ModesTail_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Modes_15, (MR_Integer) 1)));
#line 1011 "ml_closure_gen.m"
                  }
#line 1010 "ml_closure_gen.m"
              }
#line 1009 "ml_closure_gen.m"
          }
#line 1069 "ml_closure_gen.m"
        if (ml_backend__ml_closure_gen__succeeded)
#line 1015 "ml_closure_gen.m"
          {
#line 1015 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__DefnsTail_30;
#line 1015 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__LvalsTail_31;
#line 1015 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__CopyOutLvalsTail_32;
#line 1015 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__MLDS_Type_33;
#line 1015 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__VarLval_34;
#line 1015 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__ModuleInfo_35;
#line 1015 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__ArgMode_36;
#line 1015 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__Lval_37;
#line 1015 "ml_closure_gen.m"
            MR_Integer ml_backend__ml_closure_gen__V_44_44 = (ml_backend__ml_closure_gen__ArgNum_19 + (MR_Integer) 1);
#line 1015 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_45_45;

#line 1013 "ml_closure_gen.m"
            {
#line 1013 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_p_0(ml_backend__ml_closure_gen__NamesTail_25, ml_backend__ml_closure_gen__TypesTail_27, ml_backend__ml_closure_gen__ModesTail_29, ml_backend__ml_closure_gen__PredOrFunc_16, ml_backend__ml_closure_gen__CodeModel_17, ml_backend__ml_closure_gen__Context_18, ml_backend__ml_closure_gen__V_44_44, &ml_backend__ml_closure_gen__DefnsTail_30, &ml_backend__ml_closure_gen__LvalsTail_31, &ml_backend__ml_closure_gen__CopyOutLvalsTail_32, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_42, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_45_45);
            }
#line 1016 "ml_closure_gen.m"
            {
#line 1016 "ml_closure_gen.m"
              ml_backend__ml_code_util__ml_gen_type_3_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_45_45, ml_backend__ml_closure_gen__Type_26, &ml_backend__ml_closure_gen__MLDS_Type_33);
            }
#line 1017 "ml_closure_gen.m"
            {
#line 1017 "ml_closure_gen.m"
              ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_45_45, ml_backend__ml_closure_gen__Name_24, ml_backend__ml_closure_gen__MLDS_Type_33, &ml_backend__ml_closure_gen__VarLval_34);
            }
#line 1018 "ml_closure_gen.m"
            {
#line 1018 "ml_closure_gen.m"
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_45_45, &ml_backend__ml_closure_gen__ModuleInfo_35);
            }
#line 1019 "ml_closure_gen.m"
            {
#line 1019 "ml_closure_gen.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(ml_backend__ml_closure_gen__ModuleInfo_35, ml_backend__ml_closure_gen__Mode_28, ml_backend__ml_closure_gen__Type_26, &ml_backend__ml_closure_gen__ArgMode_36);
            }
#line 1027 "ml_closure_gen.m"
            if ((ml_backend__ml_closure_gen__ArgMode_36 == (MR_Integer) 1))
#line 1028 "ml_closure_gen.m"
              {
#line 1028 "ml_closure_gen.m"
                MR_Word ml_backend__ml_closure_gen__Globals_38;
#line 1028 "ml_closure_gen.m"
                MR_Word ml_backend__ml_closure_gen__CopyOut_39;
#line 1028 "ml_closure_gen.m"
                MR_Word ml_backend__ml_closure_gen__IsDummy_40;

#line 1030 "ml_closure_gen.m"
                {
#line 1030 "ml_closure_gen.m"
                  ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_45_45, &ml_backend__ml_closure_gen__Globals_38);
                }
#line 1031 "ml_closure_gen.m"
                {
#line 1031 "ml_closure_gen.m"
                  ml_backend__ml_closure_gen__CopyOut_39 = ml_backend__ml_code_util__get_copy_out_option_2_f_0(ml_backend__ml_closure_gen__Globals_38, ml_backend__ml_closure_gen__CodeModel_17);
                }
#line 1032 "ml_closure_gen.m"
                {
#line 1032 "ml_closure_gen.m"
                  ml_backend__ml_closure_gen__IsDummy_40 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_closure_gen__ModuleInfo_35, ml_backend__ml_closure_gen__Type_26);
                }
#line 1035 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__CopyOut_39 == (MR_Integer) 1);
#line 1036 "ml_closure_gen.m"
                if (!(ml_backend__ml_closure_gen__succeeded))
#line 1039 "ml_closure_gen.m"
                  {
#line 1039 "ml_closure_gen.m"
                    ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__PredOrFunc_16 == (MR_Integer) 1);
#line 1039 "ml_closure_gen.m"
                    if (ml_backend__ml_closure_gen__succeeded)
#line 1039 "ml_closure_gen.m"
                      {
#line 1040 "ml_closure_gen.m"
                        ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__CodeModel_17 == (MR_Integer) 0);
#line 1039 "ml_closure_gen.m"
                        if (ml_backend__ml_closure_gen__succeeded)
#line 1039 "ml_closure_gen.m"
                          {
#line 1042 "ml_closure_gen.m"
                            ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__TypesTail_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1039 "ml_closure_gen.m"
                            if (ml_backend__ml_closure_gen__succeeded)
#line 1043 "ml_closure_gen.m"
                              ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__IsDummy_40 == (MR_Integer) 1);
#line 1039 "ml_closure_gen.m"
                          }
#line 1039 "ml_closure_gen.m"
                      }
#line 1039 "ml_closure_gen.m"
                  }
#line 1060 "ml_closure_gen.m"
                if (ml_backend__ml_closure_gen__succeeded)
#line 1048 "ml_closure_gen.m"
                  {
#line 1048 "ml_closure_gen.m"
                    ml_backend__ml_closure_gen__Lval_37 = ml_backend__ml_closure_gen__VarLval_34;
#line 1053 "ml_closure_gen.m"
                    if ((ml_backend__ml_closure_gen__IsDummy_40 == (MR_Integer) 0))
#line 1050 "ml_closure_gen.m"
                      {
#line 1051 "ml_closure_gen.m"
                        *ml_backend__ml_closure_gen__CopyOutLvals_22 = ml_backend__ml_closure_gen__CopyOutLvalsTail_32;
#line 1052 "ml_closure_gen.m"
                        *ml_backend__ml_closure_gen__Defns_20 = ml_backend__ml_closure_gen__DefnsTail_30;
#line 1052 "ml_closure_gen.m"
                        *ml_backend__ml_closure_gen__STATE_VARIABLE_Info_43 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_45_45;
#line 1050 "ml_closure_gen.m"
                      }
#line 1053 "ml_closure_gen.m"
                    else
#line 1054 "ml_closure_gen.m"
                      {
#line 1054 "ml_closure_gen.m"
                        MR_Word ml_backend__ml_closure_gen__Defn_41;

#line 1055 "ml_closure_gen.m"
                        {
#line 1055 "ml_closure_gen.m"
                          MR_Word base;
#line 1055 "ml_closure_gen.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1055 "ml_closure_gen.m"
                          *ml_backend__ml_closure_gen__CopyOutLvals_22 = base;
#line 1055 "ml_closure_gen.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Lval_37));
#line 1055 "ml_closure_gen.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__CopyOutLvalsTail_32));
#line 1055 "ml_closure_gen.m"
                        }
#line 1056 "ml_closure_gen.m"
                        {
#line 1056 "ml_closure_gen.m"
                          ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_p_0(ml_backend__ml_closure_gen__Name_24, ml_backend__ml_closure_gen__Type_26, ml_backend__ml_closure_gen__ArgNum_19, ml_backend__ml_closure_gen__Context_18, &ml_backend__ml_closure_gen__Defn_41, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_45_45, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_43);
                        }
#line 1058 "ml_closure_gen.m"
                        {
#line 1058 "ml_closure_gen.m"
                          MR_Word base;
#line 1058 "ml_closure_gen.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "ml_closure_gen.m"
                          *ml_backend__ml_closure_gen__Defns_20 = base;
#line 1058 "ml_closure_gen.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Defn_41));
#line 1058 "ml_closure_gen.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__DefnsTail_30));
#line 1058 "ml_closure_gen.m"
                        }
#line 1054 "ml_closure_gen.m"
                      }
#line 1048 "ml_closure_gen.m"
                  }
#line 1060 "ml_closure_gen.m"
                else
#line 1063 "ml_closure_gen.m"
                  {
#line 1063 "ml_closure_gen.m"
                    MR_Word ml_backend__ml_closure_gen__V_48_48;

#line 1063 "ml_closure_gen.m"
                    {
#line 1063 "ml_closure_gen.m"
                      ml_backend__ml_closure_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1063 "ml_closure_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_48_48, 0) = ((MR_Box) (ml_backend__ml_closure_gen__VarLval_34));
#line 1063 "ml_closure_gen.m"
                    }
#line 1063 "ml_closure_gen.m"
                    {
#line 1063 "ml_closure_gen.m"
                      ml_backend__ml_closure_gen__Lval_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1063 "ml_closure_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Lval_37, 0) = ((MR_Box) (ml_backend__ml_closure_gen__V_48_48));
#line 1063 "ml_closure_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Lval_37, 1) = ((MR_Box) (ml_backend__ml_closure_gen__MLDS_Type_33));
#line 1063 "ml_closure_gen.m"
                    }
#line 1064 "ml_closure_gen.m"
                    *ml_backend__ml_closure_gen__CopyOutLvals_22 = ml_backend__ml_closure_gen__CopyOutLvalsTail_32;
#line 1065 "ml_closure_gen.m"
                    *ml_backend__ml_closure_gen__Defns_20 = ml_backend__ml_closure_gen__DefnsTail_30;
#line 1065 "ml_closure_gen.m"
                    *ml_backend__ml_closure_gen__STATE_VARIABLE_Info_43 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_45_45;
#line 1063 "ml_closure_gen.m"
                  }
#line 1028 "ml_closure_gen.m"
              }
#line 1027 "ml_closure_gen.m"
            else
#line 1023 "ml_closure_gen.m"
              {
#line 1024 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__Lval_37 = ml_backend__ml_closure_gen__VarLval_34;
#line 1025 "ml_closure_gen.m"
                *ml_backend__ml_closure_gen__CopyOutLvals_22 = ml_backend__ml_closure_gen__CopyOutLvalsTail_32;
#line 1026 "ml_closure_gen.m"
                *ml_backend__ml_closure_gen__Defns_20 = ml_backend__ml_closure_gen__DefnsTail_30;
#line 1026 "ml_closure_gen.m"
                *ml_backend__ml_closure_gen__STATE_VARIABLE_Info_43 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_45_45;
#line 1023 "ml_closure_gen.m"
              }
#line 1068 "ml_closure_gen.m"
            {
#line 1068 "ml_closure_gen.m"
              MR_Word base;
#line 1068 "ml_closure_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1068 "ml_closure_gen.m"
              *ml_backend__ml_closure_gen__Lvals_21 = base;
#line 1068 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Lval_37));
#line 1068 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__LvalsTail_31));
#line 1068 "ml_closure_gen.m"
            }
#line 1015 "ml_closure_gen.m"
          }
#line 1069 "ml_closure_gen.m"
        else
#line 1070 "ml_closure_gen.m"
          {
#line 1070 "ml_closure_gen.m"
            {
#line 1070 "ml_closure_gen.m"
              mercury__require__sorry_3_p_0((MR_String) "ml_backend.ml_closure_gen", (MR_String) "predicate \140ml_backend.ml_closure_gen.ml_gen_wrapper_arg_lvals\'/12", (MR_String) "length mismatch");
#line 1070 "ml_closure_gen.m"
              return;
            }
#line 1070 "ml_closure_gen.m"
          }
#line 1069 "ml_closure_gen.m"
      }
#line 1008 "ml_closure_gen.m"
  }
#line 993 "ml_closure_gen.m"
}

#line 975 "ml_closure_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_f_0(
#line 975 "ml_closure_gen.m"
  MR_Integer ml_backend__ml_closure_gen__Num_4,
#line 975 "ml_closure_gen.m"
  MR_Integer ml_backend__ml_closure_gen__Max_5)
#line 975 "ml_closure_gen.m"
{
#line 980 "ml_closure_gen.m"
  {
#line 980 "ml_closure_gen.m"
    MR_bool ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__Num_4 > ml_backend__ml_closure_gen__Max_5);
#line 980 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__Names_6;

#line 980 "ml_closure_gen.m"
    if (ml_backend__ml_closure_gen__succeeded)
#line 979 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__Names_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 980 "ml_closure_gen.m"
    else
#line 981 "ml_closure_gen.m"
      {
#line 981 "ml_closure_gen.m"
        MR_String ml_backend__ml_closure_gen__Name_7;
#line 981 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__Names1_8;
#line 981 "ml_closure_gen.m"
        MR_Integer ml_backend__ml_closure_gen__V_13_13;
#line 981 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__V_15_15;
#line 981 "ml_closure_gen.m"
        MR_String ml_backend__ml_closure_gen__V_17_17;

#line 2012 "ml_backend.ml_closure_gen.c"
        {
#line 2014 "ml_backend.ml_closure_gen.c"
          ml_backend__ml_closure_gen__V_17_17 = mercury__string__int_to_string_1_f_0(ml_backend__ml_closure_gen__Num_4);
        }
#line 2017 "ml_backend.ml_closure_gen.c"
        {
#line 2019 "ml_backend.ml_closure_gen.c"
          ml_backend__ml_closure_gen__Name_7 = mercury__string__f_43_43_2_f_0((MR_String) "wrapper_arg_", ml_backend__ml_closure_gen__V_17_17);
        }
#line 982 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__V_13_13 = (ml_backend__ml_closure_gen__Num_4 + (MR_Integer) 1);
#line 982 "ml_closure_gen.m"
        {
#line 982 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__Names1_8 = ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_f_0(ml_backend__ml_closure_gen__V_13_13, ml_backend__ml_closure_gen__Max_5);
        }
#line 983 "ml_closure_gen.m"
        {
#line 983 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 983 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_15_15, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Name_7));
#line 983 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 983 "ml_closure_gen.m"
        }
#line 983 "ml_closure_gen.m"
        {
#line 983 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__Names_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Names_6, 0) = ((MR_Box) (ml_backend__ml_closure_gen__V_15_15));
#line 983 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Names_6, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Names1_8));
#line 983 "ml_closure_gen.m"
        }
#line 981 "ml_closure_gen.m"
      }
#line 980 "ml_closure_gen.m"
    return ml_backend__ml_closure_gen__Names_6;
#line 980 "ml_closure_gen.m"
  }
#line 975 "ml_closure_gen.m"
}

#line 963 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_wrapper_func_7_p_0(
#line 963 "ml_closure_gen.m"
  MR_Integer ml_backend__ml_closure_gen__FuncLabel_8,
#line 963 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__FuncParams_9,
#line 963 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Context_10,
#line 963 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Statement_11,
#line 963 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__Func_12,
#line 963 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_21,
#line 963 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_22)
#line 963 "ml_closure_gen.m"
{
#line 967 "ml_closure_gen.m"
  {
#line 967 "ml_closure_gen.m"
    MR_bool ml_backend__ml_closure_gen__succeeded;
#line 967 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__Func0_14;
#line 967 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__Name_15;
#line 967 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__Ctxt_16;
#line 967 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__DeclFlags0_17;
#line 967 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__Defn_18;
#line 967 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__DeclFlags1_19;
#line 967 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__DeclFlags_20;

#line 968 "ml_closure_gen.m"
    {
#line 968 "ml_closure_gen.m"
      ml_backend__ml_code_util__ml_gen_label_func_6_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_21, ml_backend__ml_closure_gen__FuncLabel_8, ml_backend__ml_closure_gen__FuncParams_9, ml_backend__ml_closure_gen__Context_10, ml_backend__ml_closure_gen__Statement_11, &ml_backend__ml_closure_gen__Func0_14);
    }
#line 970 "ml_closure_gen.m"
    ml_backend__ml_closure_gen__Name_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Func0_14, (MR_Integer) 0)));
#line 970 "ml_closure_gen.m"
    ml_backend__ml_closure_gen__Ctxt_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Func0_14, (MR_Integer) 1)));
#line 970 "ml_closure_gen.m"
    ml_backend__ml_closure_gen__DeclFlags0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Func0_14, (MR_Integer) 2)));
#line 970 "ml_closure_gen.m"
    ml_backend__ml_closure_gen__Defn_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Func0_14, (MR_Integer) 3)));
#line 971 "ml_closure_gen.m"
    {
#line 971 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__DeclFlags1_19 = ml_backend__mlds__set_per_instance_2_f_0(ml_backend__ml_closure_gen__DeclFlags0_17, (MR_Integer) 0);
    }
#line 972 "ml_closure_gen.m"
    {
#line 972 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__DeclFlags_20 = ml_backend__mlds__set_access_2_f_0(ml_backend__ml_closure_gen__DeclFlags1_19, (MR_Integer) 2);
    }
#line 973 "ml_closure_gen.m"
    {
#line 973 "ml_closure_gen.m"
      MR_Word base;
#line 973 "ml_closure_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 973 "ml_closure_gen.m"
      *ml_backend__ml_closure_gen__Func_12 = base;
#line 973 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Name_15));
#line 973 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Ctxt_16));
#line 973 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_closure_gen__DeclFlags_20));
#line 973 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_closure_gen__Defn_18));
#line 973 "ml_closure_gen.m"
    }
#line 973 "ml_closure_gen.m"
    *ml_backend__ml_closure_gen__STATE_VARIABLE_Info_22 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_21;
#line 967 "ml_closure_gen.m"
  }
#line 963 "ml_closure_gen.m"
}

#line 934 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__gen_closure_gc_statement_10_p_0(
#line 934 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ClosureName_11,
#line 934 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ClosureDeclType_12,
#line 934 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ClosureKind_13,
#line 934 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__WrapperArgTypes_14,
#line 934 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Purity_15,
#line 934 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__PredOrFunc_16,
#line 934 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Context_17,
#line 934 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__ClosureGCStatement_18,
#line 934 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_23,
#line 934 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_24)
#line 934 "ml_closure_gen.m"
{
#line 941 "ml_closure_gen.m"
  {
#line 941 "ml_closure_gen.m"
    MR_bool ml_backend__ml_closure_gen__succeeded;
#line 941 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 941 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__HigherOrderArgTypes_20;
#line 941 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ClosureActualType_22;
#line 941 "ml_closure_gen.m"
    MR_Integer ml_backend__ml_closure_gen__V_25_25;
#line 941 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__V_26_26;

#line 946 "ml_closure_gen.m"
    {
#line 946 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__V_25_25 = mercury__list__length_1_f_0(ml_backend__ml_closure_gen__TypeCtorInfo_31_31, ml_backend__ml_closure_gen__WrapperArgTypes_14);
    }
#line 946 "ml_closure_gen.m"
    {
#line 946 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__V_26_26 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
#line 946 "ml_closure_gen.m"
    {
#line 946 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__HigherOrderArgTypes_20 = mercury__list__duplicate_2_f_0(ml_backend__ml_closure_gen__TypeCtorInfo_31_31, ml_backend__ml_closure_gen__V_25_25, ((MR_Box) (ml_backend__ml_closure_gen__V_26_26)));
    }
#line 953 "ml_closure_gen.m"
    if ((ml_backend__ml_closure_gen__ClosureKind_13 == (MR_Integer) 0))
#line 949 "ml_closure_gen.m"
      {
#line 950 "ml_closure_gen.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 951 "ml_closure_gen.m"
        {
#line 951 "ml_closure_gen.m"
          parse_tree__prog_type__construct_higher_order_type_5_p_0(ml_backend__ml_closure_gen__Purity_15, ml_backend__ml_closure_gen__PredOrFunc_16, ml_backend__ml_closure_gen__HigherOrderArgTypes_20, &ml_backend__ml_closure_gen__ClosureActualType_22);
        }
#line 949 "ml_closure_gen.m"
      }
#line 953 "ml_closure_gen.m"
    else
#line 953 "ml_closure_gen.m"
      if ((ml_backend__ml_closure_gen__ClosureKind_13 == (MR_Integer) 2))
#line 957 "ml_closure_gen.m"
        {
#line 958 "ml_closure_gen.m"
          {
#line 958 "ml_closure_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_closure_gen", (MR_String) "predicate \140ml_backend.ml_closure_gen.gen_closure_gc_statement\'/10", (MR_String) "special_pred_closure");
#line 958 "ml_closure_gen.m"
            return;
          }
#line 957 "ml_closure_gen.m"
        }
#line 953 "ml_closure_gen.m"
      else
#line 955 "ml_closure_gen.m"
        {
#line 955 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__ClosureActualType_22 = parse_tree__builtin_lib_types__sample_typeclass_info_type_0_f_0();
        }
#line 960 "ml_closure_gen.m"
    {
#line 960 "ml_closure_gen.m"
      ml_backend__ml_accurate_gc__ml_gen_gc_statement_poly_7_p_0(ml_backend__ml_closure_gen__ClosureName_11, ml_backend__ml_closure_gen__ClosureDeclType_12, ml_backend__ml_closure_gen__ClosureActualType_22, ml_backend__ml_closure_gen__Context_17, ml_backend__ml_closure_gen__ClosureGCStatement_18, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_23, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_24);
#line 960 "ml_closure_gen.m"
      return;
    }
#line 941 "ml_closure_gen.m"
  }
#line 934 "ml_closure_gen.m"
}

#line 925 "ml_closure_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_closure_gen__arg_delete_gc_statement_1_f_0(
#line 925 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Argument0_3)
#line 925 "ml_closure_gen.m"
{
#line 927 "ml_closure_gen.m"
  {
#line 927 "ml_closure_gen.m"
    MR_bool ml_backend__ml_closure_gen__succeeded;
#line 927 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__Argument_4;
#line 927 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Argument0_3, (MR_Integer) 0)));
#line 927 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Argument0_3, (MR_Integer) 1)));
#line 928 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen___GCStatement_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Argument0_3, (MR_Integer) 2)));

#line 929 "ml_closure_gen.m"
    {
#line 929 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__Argument_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 929 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Argument_4, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Name_5));
#line 929 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Argument_4, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Type_6));
#line 929 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__Argument_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 929 "ml_closure_gen.m"
    }
#line 927 "ml_closure_gen.m"
    return ml_backend__ml_closure_gen__Argument_4;
#line 927 "ml_closure_gen.m"
  }
#line 925 "ml_closure_gen.m"
}

#line 465 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_p_0(
#line 465 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__HeadVar__1_1,
#line 465 "ml_closure_gen.m"
  MR_Integer ml_backend__ml_closure_gen__CurSlot_2,
#line 465 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__HeadVar__3_3)
#line 465 "ml_closure_gen.m"
{
#line 469 "ml_closure_gen.m"
  {
#line 469 "ml_closure_gen.m"
    MR_bool ml_backend__ml_closure_gen__succeeded;

#line 469 "ml_closure_gen.m"
    if ((ml_backend__ml_closure_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 469 "ml_closure_gen.m"
      *ml_backend__ml_closure_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 469 "ml_closure_gen.m"
    else
#line 471 "ml_closure_gen.m"
      {
#line 471 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__TVar_5;
#line 471 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__Locns_6;
#line 471 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__TVarLocns_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 471 "ml_closure_gen.m"
        MR_Integer ml_backend__ml_closure_gen__TVarNum_10;
#line 471 "ml_closure_gen.m"
        MR_Integer ml_backend__ml_closure_gen__NextSlot_11;
#line 471 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__HeadVar__1_1, (MR_Integer) 0)));

#line 470 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__TVar_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_18_18, (MR_Integer) 0)));
#line 470 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__Locns_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_18_18, (MR_Integer) 1)));
#line 472 "ml_closure_gen.m"
        {
#line 472 "ml_closure_gen.m"
          mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, ml_backend__ml_closure_gen__TVar_5, &ml_backend__ml_closure_gen__TVarNum_10);
        }
#line 473 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__NextSlot_11 = (ml_backend__ml_closure_gen__CurSlot_2 + (MR_Integer) 1);
#line 474 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__TVarNum_10 == ml_backend__ml_closure_gen__CurSlot_2);
#line 485 "ml_closure_gen.m"
        if (ml_backend__ml_closure_gen__succeeded)
#line 479 "ml_closure_gen.m"
          {
#line 479 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__Locn_14;
#line 479 "ml_closure_gen.m"
            MR_Integer ml_backend__ml_closure_gen__LocnAsInt_15;
#line 479 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__Rval_16;
#line 479 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__VectorTail_17;
#line 479 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__V_23_23;
#line 479 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__V_24_24;
#line 477 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__LeastLocn_12;
#line 475 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__V_13_13;
#line 475 "ml_closure_gen.m"
            MR_Box ml_backend__ml_closure_gen__conv0_LeastLocn_12;

#line 475 "ml_closure_gen.m"
            {
#line 475 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__succeeded = mercury__set__remove_least_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0, &ml_backend__ml_closure_gen__conv0_LeastLocn_12, ml_backend__ml_closure_gen__Locns_6, &ml_backend__ml_closure_gen__V_13_13);
            }
#line 475 "ml_closure_gen.m"
            if (ml_backend__ml_closure_gen__succeeded)
#line 475 "ml_closure_gen.m"
              {
#line 475 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__LeastLocn_12 = ((MR_Word) ml_backend__ml_closure_gen__conv0_LeastLocn_12);
#line 475 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__succeeded = MR_TRUE;
#line 475 "ml_closure_gen.m"
              }
#line 477 "ml_closure_gen.m"
            if (ml_backend__ml_closure_gen__succeeded)
#line 476 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__Locn_14 = ml_backend__ml_closure_gen__LeastLocn_12;
#line 477 "ml_closure_gen.m"
            else
#line 478 "ml_closure_gen.m"
              {
#line 478 "ml_closure_gen.m"
                {
#line 478 "ml_closure_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_closure_gen", (MR_String) "predicate \140ml_backend.ml_closure_gen.ml_stack_layout_construct_type_param_locn_vector\'/3", (MR_String) "tvar has empty set of locations");
#line 478 "ml_closure_gen.m"
                  return;
                }
#line 478 "ml_closure_gen.m"
              }
#line 480 "ml_closure_gen.m"
            {
#line 480 "ml_closure_gen.m"
              ll_backend__stack_layout__represent_locn_as_int_2_p_0(ml_backend__ml_closure_gen__Locn_14, &ml_backend__ml_closure_gen__LocnAsInt_15);
            }
#line 481 "ml_closure_gen.m"
            {
#line 481 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 481 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__V_23_23, 0) = ((MR_Box) (ml_backend__ml_closure_gen__LocnAsInt_15));
#line 481 "ml_closure_gen.m"
            }
#line 481 "ml_closure_gen.m"
            {
#line 481 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__Rval_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Rval_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 481 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Rval_16, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_23_23));
#line 481 "ml_closure_gen.m"
            }
#line 482 "ml_closure_gen.m"
            {
#line 482 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_p_0(ml_backend__ml_closure_gen__TVarLocns_7, ml_backend__ml_closure_gen__NextSlot_11, &ml_backend__ml_closure_gen__VectorTail_17);
            }
#line 484 "ml_closure_gen.m"
            {
#line 484 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 484 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_24_24, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Rval_16));
#line 484 "ml_closure_gen.m"
            }
#line 484 "ml_closure_gen.m"
            {
#line 484 "ml_closure_gen.m"
              MR_Word base;
#line 484 "ml_closure_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "ml_closure_gen.m"
              *ml_backend__ml_closure_gen__HeadVar__3_3 = base;
#line 484 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_closure_gen__V_24_24));
#line 484 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__VectorTail_17));
#line 484 "ml_closure_gen.m"
            }
#line 479 "ml_closure_gen.m"
          }
#line 485 "ml_closure_gen.m"
        else
#line 490 "ml_closure_gen.m"
          {
#line 485 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__TVarNum_10 > ml_backend__ml_closure_gen__CurSlot_2);
#line 490 "ml_closure_gen.m"
            if (ml_backend__ml_closure_gen__succeeded)
#line 488 "ml_closure_gen.m"
              {
#line 488 "ml_closure_gen.m"
                MR_Word ml_backend__ml_closure_gen__VectorTail_34;

#line 487 "ml_closure_gen.m"
                {
#line 487 "ml_closure_gen.m"
                  ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_p_0(ml_backend__ml_closure_gen__HeadVar__1_1, ml_backend__ml_closure_gen__NextSlot_11, &ml_backend__ml_closure_gen__VectorTail_34);
                }
#line 489 "ml_closure_gen.m"
                {
#line 489 "ml_closure_gen.m"
                  MR_Word base;
#line 489 "ml_closure_gen.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "ml_closure_gen.m"
                  *ml_backend__ml_closure_gen__HeadVar__3_3 = base;
#line 489 "ml_closure_gen.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_3[5])));
#line 489 "ml_closure_gen.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__VectorTail_34));
#line 489 "ml_closure_gen.m"
                }
#line 488 "ml_closure_gen.m"
              }
#line 490 "ml_closure_gen.m"
            else
#line 491 "ml_closure_gen.m"
              {
#line 491 "ml_closure_gen.m"
                {
#line 491 "ml_closure_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_closure_gen", (MR_String) "predicate \140ml_backend.ml_closure_gen.ml_stack_layout_construct_type_param_locn_vector\'/3", (MR_String) "unsorted tvars");
#line 491 "ml_closure_gen.m"
                  return;
                }
#line 491 "ml_closure_gen.m"
              }
#line 490 "ml_closure_gen.m"
          }
#line 471 "ml_closure_gen.m"
      }
#line 469 "ml_closure_gen.m"
  }
#line 465 "ml_closure_gen.m"
}

#line 428 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_p_0(
#line 428 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_9,
#line 428 "ml_closure_gen.m"
  MR_String ml_backend__ml_closure_gen__TVarVectorNameStr_10,
#line 428 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Context_11,
#line 428 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__TVarLocnMap_12,
#line 428 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__TVarVectorAddrRval_13,
#line 428 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__ArrayType_14,
#line 428 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_21,
#line 428 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_22)
#line 428 "ml_closure_gen.m"
{
#line 434 "ml_closure_gen.m"
  {
#line 434 "ml_closure_gen.m"
    MR_bool ml_backend__ml_closure_gen__succeeded;

#line 435 "ml_closure_gen.m"
    *ml_backend__ml_closure_gen__ArrayType_14 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[16]);
#line 436 "ml_closure_gen.m"
    {
#line 436 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &ml_backend__ml_closure_gen_scalar_common_1[1], (MR_Word) &ml_backend__ml_closure_gen_scalar_common_1[2], ml_backend__ml_closure_gen__TVarLocnMap_12);
    }
#line 438 "ml_closure_gen.m"
    if (ml_backend__ml_closure_gen__succeeded)
#line 437 "ml_closure_gen.m"
      {
#line 437 "ml_closure_gen.m"
        *ml_backend__ml_closure_gen__TVarVectorAddrRval_13 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[18]);
#line 437 "ml_closure_gen.m"
        *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_22 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_21;
#line 437 "ml_closure_gen.m"
      }
#line 438 "ml_closure_gen.m"
    else
#line 440 "ml_closure_gen.m"
      {
#line 440 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__Vector_16;
#line 440 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__Initializer_18;
#line 440 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__ModuleName_19;
#line 440 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__MLDS_ModuleName_20;
#line 440 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__TVarLocns_31;
#line 440 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__TypeParamLocs_32;
#line 440 "ml_closure_gen.m"
        MR_Integer ml_backend__ml_closure_gen__TypeParamsLength_33;
#line 440 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__LengthRval_34;
#line 440 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__V_36_36;
#line 440 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__V_37_37;
#line 440 "ml_closure_gen.m"
        MR_Integer ml_backend__ml_closure_gen__V_38_38;
#line 458 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen___VectorTypes_17;

#line 452 "ml_closure_gen.m"
        {
#line 452 "ml_closure_gen.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &ml_backend__ml_closure_gen_scalar_common_1[1], (MR_Word) &ml_backend__ml_closure_gen_scalar_common_1[2], ml_backend__ml_closure_gen__TVarLocnMap_12, &ml_backend__ml_closure_gen__TVarLocns_31);
        }
#line 453 "ml_closure_gen.m"
        {
#line 453 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_p_0(ml_backend__ml_closure_gen__TVarLocns_31, (MR_Integer) 1, &ml_backend__ml_closure_gen__TypeParamLocs_32);
        }
#line 455 "ml_closure_gen.m"
        {
#line 455 "ml_closure_gen.m"
          mercury__list__length_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__ml_closure_gen__TypeParamLocs_32, &ml_backend__ml_closure_gen__TypeParamsLength_33);
        }
#line 456 "ml_closure_gen.m"
        {
#line 456 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 456 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__V_36_36, 0) = ((MR_Box) (ml_backend__ml_closure_gen__TypeParamsLength_33));
#line 456 "ml_closure_gen.m"
        }
#line 456 "ml_closure_gen.m"
        {
#line 456 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__LengthRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 456 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__LengthRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 456 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__LengthRval_34, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_36_36));
#line 456 "ml_closure_gen.m"
        }
#line 457 "ml_closure_gen.m"
        {
#line 457 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 457 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_37_37, 0) = ((MR_Box) (ml_backend__ml_closure_gen__LengthRval_34));
#line 457 "ml_closure_gen.m"
        }
#line 457 "ml_closure_gen.m"
        {
#line 457 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__Vector_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 457 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Vector_16, 0) = ((MR_Box) (ml_backend__ml_closure_gen__V_37_37));
#line 457 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Vector_16, 1) = ((MR_Box) (ml_backend__ml_closure_gen__TypeParamLocs_32));
#line 457 "ml_closure_gen.m"
        }
#line 458 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__V_38_38 = (ml_backend__ml_closure_gen__TypeParamsLength_33 + (MR_Integer) 1);
#line 458 "ml_closure_gen.m"
        {
#line 458 "ml_closure_gen.m"
          ml_backend__ml_closure_gen___VectorTypes_17 = mercury__list__duplicate_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, ml_backend__ml_closure_gen__V_38_38, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))));
        }
#line 441 "ml_closure_gen.m"
        {
#line 441 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__Initializer_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 441 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__Initializer_18, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Vector_16));
#line 441 "ml_closure_gen.m"
        }
#line 442 "ml_closure_gen.m"
        {
#line 442 "ml_closure_gen.m"
          hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_closure_gen__ModuleInfo_9, &ml_backend__ml_closure_gen__ModuleName_19);
        }
#line 443 "ml_closure_gen.m"
        {
#line 443 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_closure_gen__ModuleName_19);
        }
#line 444 "ml_closure_gen.m"
        {
#line 444 "ml_closure_gen.m"
          ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0(ml_backend__ml_closure_gen__MLDS_ModuleName_20, ml_backend__ml_closure_gen__TVarVectorNameStr_10, *ml_backend__ml_closure_gen__ArrayType_14, ml_backend__ml_closure_gen__Initializer_18, ml_backend__ml_closure_gen__Context_11, ml_backend__ml_closure_gen__TVarVectorAddrRval_13, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_21, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_22);
#line 444 "ml_closure_gen.m"
          return;
        }
#line 440 "ml_closure_gen.m"
      }
#line 434 "ml_closure_gen.m"
  }
#line 428 "ml_closure_gen.m"
}

#line 407 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_type_info_6_p_0_1(
#line 407 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__closure_arg,
#line 407 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1,
#line 407 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_2,
#line 407 "ml_closure_gen.m"
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_3)
#line 407 "ml_closure_gen.m"
{
#line 407 "ml_closure_gen.m"
  {
#line 407 "ml_closure_gen.m"
    MR_Box ml_backend__ml_closure_gen__closure = ml_backend__ml_closure_gen__closure_arg;
#line 407 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__conv1_STATE_VARIABLE_GlobalData_11;

#line 407 "ml_closure_gen.m"
    {
#line 407 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__ml_gen_type_info_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_2), &ml_backend__ml_closure_gen__conv1_STATE_VARIABLE_GlobalData_11);
    }
#line 407 "ml_closure_gen.m"
    *ml_backend__ml_closure_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_closure_gen__conv1_STATE_VARIABLE_GlobalData_11));
#line 407 "ml_closure_gen.m"
  }
#line 407 "ml_closure_gen.m"
}

#line 365 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_type_info_6_p_0(
#line 365 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_7,
#line 365 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__TypeInfo_8,
#line 365 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__Rval_9,
#line 365 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__Type_10,
#line 365 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_28,
#line 365 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_29)
#line 365 "ml_closure_gen.m"
{
#line 371 "ml_closure_gen.m"
  {
#line 371 "ml_closure_gen.m"
    MR_bool ml_backend__ml_closure_gen__succeeded;

#line 371 "ml_closure_gen.m"
    if (((MR_tag((MR_Word) ml_backend__ml_closure_gen__TypeInfo_8)) == (MR_mktag((MR_Integer) 0))))
#line 371 "ml_closure_gen.m"
      {
#line 371 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__RttiTypeCtor0_12 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_closure_gen__TypeInfo_8), (MR_Integer) 0);
#line 371 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__ModuleName0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor0_12, (MR_Integer) 0)));
#line 371 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__ModuleName_17;
#line 371 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__RttiId_18;
#line 371 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__MLDS_ModuleName_19;
#line 371 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__DataAddr_20;
#line 371 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__V_37_37;
#line 371 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__V_38_38;
#line 371 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__V_39_39;
#line 375 "ml_closure_gen.m"
        MR_String ml_backend__ml_closure_gen__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor0_12, (MR_Integer) 1)));
#line 375 "ml_closure_gen.m"
        MR_Integer ml_backend__ml_closure_gen__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor0_12, (MR_Integer) 2)));

#line 376 "ml_closure_gen.m"
        {
#line 376 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__ModuleName_17 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ml_backend__ml_closure_gen__ModuleName0_14);
        }
#line 377 "ml_closure_gen.m"
        {
#line 377 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__RttiId_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 377 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiId_18, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiTypeCtor0_12));
#line 377 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiId_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 377 "ml_closure_gen.m"
        }
#line 379 "ml_closure_gen.m"
        {
#line 379 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__MLDS_ModuleName_19 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_closure_gen__ModuleName_17);
        }
#line 380 "ml_closure_gen.m"
        {
#line 380 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 380 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_37_37, 1) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_18));
#line 380 "ml_closure_gen.m"
        }
#line 380 "ml_closure_gen.m"
        {
#line 380 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__DataAddr_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 380 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__DataAddr_20, 0) = ((MR_Box) (ml_backend__ml_closure_gen__MLDS_ModuleName_19));
#line 380 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__DataAddr_20, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_37_37));
#line 380 "ml_closure_gen.m"
        }
#line 381 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_closure_gen__DataAddr_20);
#line 381 "ml_closure_gen.m"
        {
#line 381 "ml_closure_gen.m"
          MR_Word base;
#line 381 "ml_closure_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "ml_closure_gen.m"
          *ml_backend__ml_closure_gen__Rval_9 = base;
#line 381 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 381 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_38_38));
#line 381 "ml_closure_gen.m"
        }
#line 382 "ml_closure_gen.m"
        {
#line 382 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 382 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_39_39, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_18));
#line 382 "ml_closure_gen.m"
        }
#line 382 "ml_closure_gen.m"
        {
#line 382 "ml_closure_gen.m"
          MR_Word base;
#line 382 "ml_closure_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "ml_closure_gen.m"
          *ml_backend__ml_closure_gen__Type_10 = base;
#line 382 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 382 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_39_39));
#line 382 "ml_closure_gen.m"
        }
#line 382 "ml_closure_gen.m"
        *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_29 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_28;
#line 371 "ml_closure_gen.m"
      }
#line 371 "ml_closure_gen.m"
    else
#line 386 "ml_closure_gen.m"
      {
#line 386 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__RttiData_25;
#line 386 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__PDupRvalTypeMap_26;
#line 386 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__RttiId_47;
#line 395 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__OldRvalType_27;
#line 393 "ml_closure_gen.m"
        MR_Box ml_backend__ml_closure_gen__conv0_OldRvalType_27;

#line 389 "ml_closure_gen.m"
        {
#line 389 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__RttiData_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__RttiData_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 389 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__RttiData_25, 1) = ((MR_Box) (ml_backend__ml_closure_gen__TypeInfo_8));
#line 389 "ml_closure_gen.m"
        }
#line 390 "ml_closure_gen.m"
        {
#line 390 "ml_closure_gen.m"
          backend_libs__rtti__rtti_data_to_id_2_p_0(ml_backend__ml_closure_gen__RttiData_25, &ml_backend__ml_closure_gen__RttiId_47);
        }
#line 392 "ml_closure_gen.m"
        {
#line 392 "ml_closure_gen.m"
          ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_28, &ml_backend__ml_closure_gen__PDupRvalTypeMap_26);
        }
#line 393 "ml_closure_gen.m"
        {
#line 393 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__ml_closure_gen__PDupRvalTypeMap_26, ((MR_Box) (ml_backend__ml_closure_gen__RttiId_47)), &ml_backend__ml_closure_gen__conv0_OldRvalType_27);
        }
#line 393 "ml_closure_gen.m"
        if (ml_backend__ml_closure_gen__succeeded)
#line 393 "ml_closure_gen.m"
          {
#line 393 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__OldRvalType_27 = ((MR_Word) ml_backend__ml_closure_gen__conv0_OldRvalType_27);
#line 393 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__succeeded = MR_TRUE;
#line 393 "ml_closure_gen.m"
          }
#line 395 "ml_closure_gen.m"
        if (ml_backend__ml_closure_gen__succeeded)
#line 394 "ml_closure_gen.m"
          {
#line 394 "ml_closure_gen.m"
            *ml_backend__ml_closure_gen__Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__OldRvalType_27, (MR_Integer) 0)));
#line 394 "ml_closure_gen.m"
            *ml_backend__ml_closure_gen__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__OldRvalType_27, (MR_Integer) 1)));
#line 394 "ml_closure_gen.m"
            *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_29 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_28;
#line 394 "ml_closure_gen.m"
          }
#line 395 "ml_closure_gen.m"
        else
#line 396 "ml_closure_gen.m"
          {
#line 396 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__V_30_30;
#line 396 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__V_31_31;
#line 396 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__V_32_32;
#line 396 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_33_33;
#line 396 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__V_34_34;
#line 396 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__V_35_35;
#line 396 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__ModuleName_40;
#line 396 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__MLDS_ModuleName_41;
#line 396 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__DataAddr_42;
#line 407 "ml_closure_gen.m"
            MR_Box ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_29;

#line 396 "ml_closure_gen.m"
            {
#line 396 "ml_closure_gen.m"
              hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_closure_gen__ModuleInfo_7, &ml_backend__ml_closure_gen__ModuleName_40);
            }
#line 397 "ml_closure_gen.m"
            {
#line 397 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__MLDS_ModuleName_41 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_closure_gen__ModuleName_40);
            }
#line 398 "ml_closure_gen.m"
            {
#line 398 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 398 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_30_30, 1) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_47));
#line 398 "ml_closure_gen.m"
            }
#line 398 "ml_closure_gen.m"
            {
#line 398 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__DataAddr_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__DataAddr_42, 0) = ((MR_Box) (ml_backend__ml_closure_gen__MLDS_ModuleName_41));
#line 398 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__DataAddr_42, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_30_30));
#line 398 "ml_closure_gen.m"
            }
#line 399 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_closure_gen__DataAddr_42);
#line 399 "ml_closure_gen.m"
            {
#line 399 "ml_closure_gen.m"
              MR_Word base;
#line 399 "ml_closure_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 399 "ml_closure_gen.m"
              *ml_backend__ml_closure_gen__Rval_9 = base;
#line 399 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 399 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_31_31));
#line 399 "ml_closure_gen.m"
            }
#line 400 "ml_closure_gen.m"
            {
#line 400 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 400 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_32_32, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_47));
#line 400 "ml_closure_gen.m"
            }
#line 400 "ml_closure_gen.m"
            {
#line 400 "ml_closure_gen.m"
              MR_Word base;
#line 400 "ml_closure_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 400 "ml_closure_gen.m"
              *ml_backend__ml_closure_gen__Type_10 = base;
#line 400 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 400 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_32_32));
#line 400 "ml_closure_gen.m"
            }
#line 402 "ml_closure_gen.m"
            {
#line 402 "ml_closure_gen.m"
              ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_p_0(ml_backend__ml_closure_gen__ModuleInfo_7, ml_backend__ml_closure_gen__RttiData_25, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_28, &ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_33_33);
            }
#line 407 "ml_closure_gen.m"
            {
#line 407 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 407 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_34_34, 0) = ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_6[1]));
#line 407 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_34_34, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ml_gen_type_info_6_p_0_1));
#line 407 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 407 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_34_34, 3) = ((MR_Box) (ml_backend__ml_closure_gen__ModuleInfo_7));
#line 407 "ml_closure_gen.m"
            }
#line 424 "ml_closure_gen.m"
            if (((MR_tag((MR_Word) ml_backend__ml_closure_gen__TypeInfo_8)) == (MR_mktag((MR_Integer) 1))))
#line 425 "ml_closure_gen.m"
              {
#line 425 "ml_closure_gen.m"
                MR_Word ml_backend__ml_closure_gen___TypeCtor_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__TypeInfo_8, (MR_Integer) 0)));

#line 425 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__TypeInfo_8, (MR_Integer) 1)));
#line 425 "ml_closure_gen.m"
              }
#line 424 "ml_closure_gen.m"
            else
#line 426 "ml_closure_gen.m"
              {
#line 426 "ml_closure_gen.m"
                MR_Word ml_backend__ml_closure_gen___VarArityId_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__TypeInfo_8, (MR_Integer) 0)));

#line 426 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__TypeInfo_8, (MR_Integer) 1)));
#line 426 "ml_closure_gen.m"
              }
#line 407 "ml_closure_gen.m"
            {
#line 407 "ml_closure_gen.m"
              mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__ml_closure_gen__V_34_34, ml_backend__ml_closure_gen__V_35_35, ((MR_Box) (ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_33_33)), &ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_29);
            }
#line 407 "ml_closure_gen.m"
            *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_29 = ((MR_Word) ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_29);
#line 396 "ml_closure_gen.m"
          }
#line 386 "ml_closure_gen.m"
      }
#line 371 "ml_closure_gen.m"
  }
#line 365 "ml_closure_gen.m"
}

#line 359 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_p_0_1(
#line 359 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__closure_arg,
#line 359 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1,
#line 359 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_2,
#line 359 "ml_closure_gen.m"
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_3)
#line 359 "ml_closure_gen.m"
{
#line 359 "ml_closure_gen.m"
  {
#line 359 "ml_closure_gen.m"
    MR_Box ml_backend__ml_closure_gen__closure = ml_backend__ml_closure_gen__closure_arg;
#line 359 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__conv1_STATE_VARIABLE_GlobalData_11;

#line 359 "ml_closure_gen.m"
    {
#line 359 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_2), &ml_backend__ml_closure_gen__conv1_STATE_VARIABLE_GlobalData_11);
    }
#line 359 "ml_closure_gen.m"
    *ml_backend__ml_closure_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_closure_gen__conv1_STATE_VARIABLE_GlobalData_11));
#line 359 "ml_closure_gen.m"
  }
#line 359 "ml_closure_gen.m"
}

#line 303 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_p_0(
#line 303 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_7,
#line 303 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__PseudoTypeInfo_8,
#line 303 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__Rval_9,
#line 303 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__Type_10,
#line 303 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_35,
#line 303 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_36)
#line 303 "ml_closure_gen.m"
{
#line 309 "ml_closure_gen.m"
  {
#line 309 "ml_closure_gen.m"
    MR_bool ml_backend__ml_closure_gen__succeeded;

#line 309 "ml_closure_gen.m"
    if (((MR_tag((MR_Word) ml_backend__ml_closure_gen__PseudoTypeInfo_8)) == (MR_mktag((MR_Integer) 3))))
#line 309 "ml_closure_gen.m"
      {
#line 309 "ml_closure_gen.m"
        MR_Integer ml_backend__ml_closure_gen__N_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__PseudoTypeInfo_8, (MR_Integer) 0)));
#line 309 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__V_47_47;

#line 311 "ml_closure_gen.m"
        {
#line 311 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 311 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__V_47_47, 0) = ((MR_Box) (ml_backend__ml_closure_gen__N_12));
#line 311 "ml_closure_gen.m"
        }
#line 311 "ml_closure_gen.m"
        {
#line 311 "ml_closure_gen.m"
          MR_Word base;
#line 311 "ml_closure_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "ml_closure_gen.m"
          *ml_backend__ml_closure_gen__Rval_9 = base;
#line 311 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 311 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_47_47));
#line 311 "ml_closure_gen.m"
        }
#line 312 "ml_closure_gen.m"
        *ml_backend__ml_closure_gen__Type_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 312 "ml_closure_gen.m"
        *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_36 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_35;
#line 309 "ml_closure_gen.m"
      }
#line 309 "ml_closure_gen.m"
    else
#line 334 "ml_closure_gen.m"
      if (((MR_tag((MR_Word) ml_backend__ml_closure_gen__PseudoTypeInfo_8)) == (MR_mktag((MR_Integer) 0))))
#line 319 "ml_closure_gen.m"
        {
#line 319 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__ModuleName0_20;
#line 319 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__ModuleName_23;
#line 319 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__RttiTypeCtor_24 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_closure_gen__PseudoTypeInfo_8), (MR_Integer) 0);
#line 319 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__RttiId_25;
#line 319 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__MLDS_ModuleName_26;
#line 319 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__DataAddr_27;
#line 319 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__V_44_44;
#line 319 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__V_45_45;
#line 319 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__V_46_46;
#line 325 "ml_closure_gen.m"
          MR_String ml_backend__ml_closure_gen__V_21_21;
#line 325 "ml_closure_gen.m"
          MR_Integer ml_backend__ml_closure_gen__V_22_22;

#line 325 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__ModuleName0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor_24, (MR_Integer) 0)));
#line 325 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor_24, (MR_Integer) 1)));
#line 325 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor_24, (MR_Integer) 2)));
#line 326 "ml_closure_gen.m"
          {
#line 326 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__ModuleName_23 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ml_backend__ml_closure_gen__ModuleName0_20);
          }
#line 328 "ml_closure_gen.m"
          {
#line 328 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__RttiId_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 328 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiId_25, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiTypeCtor_24));
#line 328 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiId_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 328 "ml_closure_gen.m"
          }
#line 330 "ml_closure_gen.m"
          {
#line 330 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__MLDS_ModuleName_26 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_closure_gen__ModuleName_23);
          }
#line 331 "ml_closure_gen.m"
          {
#line 331 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 331 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_44_44, 1) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_25));
#line 331 "ml_closure_gen.m"
          }
#line 331 "ml_closure_gen.m"
          {
#line 331 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__DataAddr_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 331 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__DataAddr_27, 0) = ((MR_Box) (ml_backend__ml_closure_gen__MLDS_ModuleName_26));
#line 331 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__DataAddr_27, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_44_44));
#line 331 "ml_closure_gen.m"
          }
#line 332 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_closure_gen__DataAddr_27);
#line 332 "ml_closure_gen.m"
          {
#line 332 "ml_closure_gen.m"
            MR_Word base;
#line 332 "ml_closure_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "ml_closure_gen.m"
            *ml_backend__ml_closure_gen__Rval_9 = base;
#line 332 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 332 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_45_45));
#line 332 "ml_closure_gen.m"
          }
#line 333 "ml_closure_gen.m"
          {
#line 333 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 333 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_46_46, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_25));
#line 333 "ml_closure_gen.m"
          }
#line 333 "ml_closure_gen.m"
          {
#line 333 "ml_closure_gen.m"
            MR_Word base;
#line 333 "ml_closure_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "ml_closure_gen.m"
            *ml_backend__ml_closure_gen__Type_10 = base;
#line 333 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 333 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_46_46));
#line 333 "ml_closure_gen.m"
          }
#line 333 "ml_closure_gen.m"
          *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_36 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_35;
#line 319 "ml_closure_gen.m"
        }
#line 334 "ml_closure_gen.m"
      else
#line 337 "ml_closure_gen.m"
        {
#line 337 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__RttiData_32;
#line 337 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__PDupRvalTypeMap_33;
#line 337 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__RttiId_55;
#line 347 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__OldRvalType_34;
#line 345 "ml_closure_gen.m"
          MR_Box ml_backend__ml_closure_gen__conv0_OldRvalType_34;

#line 340 "ml_closure_gen.m"
          {
#line 340 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__RttiData_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 340 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__RttiData_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 340 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__RttiData_32, 1) = ((MR_Box) (ml_backend__ml_closure_gen__PseudoTypeInfo_8));
#line 340 "ml_closure_gen.m"
          }
#line 341 "ml_closure_gen.m"
          {
#line 341 "ml_closure_gen.m"
            backend_libs__rtti__rtti_data_to_id_2_p_0(ml_backend__ml_closure_gen__RttiData_32, &ml_backend__ml_closure_gen__RttiId_55);
          }
#line 343 "ml_closure_gen.m"
          {
#line 343 "ml_closure_gen.m"
            ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_35, &ml_backend__ml_closure_gen__PDupRvalTypeMap_33);
          }
#line 345 "ml_closure_gen.m"
          {
#line 345 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__ml_closure_gen__PDupRvalTypeMap_33, ((MR_Box) (ml_backend__ml_closure_gen__RttiId_55)), &ml_backend__ml_closure_gen__conv0_OldRvalType_34);
          }
#line 345 "ml_closure_gen.m"
          if (ml_backend__ml_closure_gen__succeeded)
#line 345 "ml_closure_gen.m"
            {
#line 345 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__OldRvalType_34 = ((MR_Word) ml_backend__ml_closure_gen__conv0_OldRvalType_34);
#line 345 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__succeeded = MR_TRUE;
#line 345 "ml_closure_gen.m"
            }
#line 347 "ml_closure_gen.m"
          if (ml_backend__ml_closure_gen__succeeded)
#line 346 "ml_closure_gen.m"
            {
#line 346 "ml_closure_gen.m"
              *ml_backend__ml_closure_gen__Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__OldRvalType_34, (MR_Integer) 0)));
#line 346 "ml_closure_gen.m"
              *ml_backend__ml_closure_gen__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__OldRvalType_34, (MR_Integer) 1)));
#line 346 "ml_closure_gen.m"
              *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_36 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_35;
#line 346 "ml_closure_gen.m"
            }
#line 347 "ml_closure_gen.m"
          else
#line 348 "ml_closure_gen.m"
            {
#line 348 "ml_closure_gen.m"
              MR_Word ml_backend__ml_closure_gen__V_37_37;
#line 348 "ml_closure_gen.m"
              MR_Word ml_backend__ml_closure_gen__V_38_38;
#line 348 "ml_closure_gen.m"
              MR_Word ml_backend__ml_closure_gen__V_39_39;
#line 348 "ml_closure_gen.m"
              MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_40_40;
#line 348 "ml_closure_gen.m"
              MR_Word ml_backend__ml_closure_gen__V_41_41;
#line 348 "ml_closure_gen.m"
              MR_Word ml_backend__ml_closure_gen__V_42_42;
#line 348 "ml_closure_gen.m"
              MR_Word ml_backend__ml_closure_gen__ModuleName_48;
#line 348 "ml_closure_gen.m"
              MR_Word ml_backend__ml_closure_gen__MLDS_ModuleName_49;
#line 348 "ml_closure_gen.m"
              MR_Word ml_backend__ml_closure_gen__DataAddr_50;
#line 359 "ml_closure_gen.m"
              MR_Box ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_36;

#line 348 "ml_closure_gen.m"
              {
#line 348 "ml_closure_gen.m"
                hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_closure_gen__ModuleInfo_7, &ml_backend__ml_closure_gen__ModuleName_48);
              }
#line 349 "ml_closure_gen.m"
              {
#line 349 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__MLDS_ModuleName_49 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_closure_gen__ModuleName_48);
              }
#line 350 "ml_closure_gen.m"
              {
#line 350 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 350 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_37_37, 1) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_55));
#line 350 "ml_closure_gen.m"
              }
#line 350 "ml_closure_gen.m"
              {
#line 350 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__DataAddr_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 350 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__DataAddr_50, 0) = ((MR_Box) (ml_backend__ml_closure_gen__MLDS_ModuleName_49));
#line 350 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__DataAddr_50, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_37_37));
#line 350 "ml_closure_gen.m"
              }
#line 351 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_closure_gen__DataAddr_50);
#line 351 "ml_closure_gen.m"
              {
#line 351 "ml_closure_gen.m"
                MR_Word base;
#line 351 "ml_closure_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "ml_closure_gen.m"
                *ml_backend__ml_closure_gen__Rval_9 = base;
#line 351 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 351 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_38_38));
#line 351 "ml_closure_gen.m"
              }
#line 352 "ml_closure_gen.m"
              {
#line 352 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 352 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_39_39, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_55));
#line 352 "ml_closure_gen.m"
              }
#line 352 "ml_closure_gen.m"
              {
#line 352 "ml_closure_gen.m"
                MR_Word base;
#line 352 "ml_closure_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "ml_closure_gen.m"
                *ml_backend__ml_closure_gen__Type_10 = base;
#line 352 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 352 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_39_39));
#line 352 "ml_closure_gen.m"
              }
#line 354 "ml_closure_gen.m"
              {
#line 354 "ml_closure_gen.m"
                ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_p_0(ml_backend__ml_closure_gen__ModuleInfo_7, ml_backend__ml_closure_gen__RttiData_32, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_35, &ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_40_40);
              }
#line 359 "ml_closure_gen.m"
              {
#line 359 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 359 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_41_41, 0) = ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_6[0]));
#line 359 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_41_41, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_p_0_1));
#line 359 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 359 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_41_41, 3) = ((MR_Box) (ml_backend__ml_closure_gen__ModuleInfo_7));
#line 359 "ml_closure_gen.m"
              }
#line 415 "ml_closure_gen.m"
              if (((MR_tag((MR_Word) ml_backend__ml_closure_gen__PseudoTypeInfo_8)) == (MR_mktag((MR_Integer) 1))))
#line 418 "ml_closure_gen.m"
                {
#line 418 "ml_closure_gen.m"
                  MR_Word ml_backend__ml_closure_gen___TypeCtor_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__PseudoTypeInfo_8, (MR_Integer) 0)));

#line 418 "ml_closure_gen.m"
                  ml_backend__ml_closure_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__PseudoTypeInfo_8, (MR_Integer) 1)));
#line 418 "ml_closure_gen.m"
                }
#line 415 "ml_closure_gen.m"
              else
#line 420 "ml_closure_gen.m"
                {
#line 420 "ml_closure_gen.m"
                  MR_Word ml_backend__ml_closure_gen___VarArityId_69 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__PseudoTypeInfo_8, (MR_Integer) 0)));

#line 420 "ml_closure_gen.m"
                  ml_backend__ml_closure_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__PseudoTypeInfo_8, (MR_Integer) 1)));
#line 420 "ml_closure_gen.m"
                }
#line 359 "ml_closure_gen.m"
              {
#line 359 "ml_closure_gen.m"
                mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__ml_closure_gen__V_41_41, ml_backend__ml_closure_gen__V_42_42, ((MR_Box) (ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_40_40)), &ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_36);
              }
#line 359 "ml_closure_gen.m"
              *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_36 = ((MR_Word) ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_36);
#line 348 "ml_closure_gen.m"
            }
#line 337 "ml_closure_gen.m"
        }
#line 309 "ml_closure_gen.m"
  }
#line 303 "ml_closure_gen.m"
}

#line 407 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_p_0_1(
#line 407 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__closure_arg,
#line 407 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1,
#line 407 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_2,
#line 407 "ml_closure_gen.m"
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_3)
#line 407 "ml_closure_gen.m"
{
#line 407 "ml_closure_gen.m"
  {
#line 407 "ml_closure_gen.m"
    MR_Box ml_backend__ml_closure_gen__closure = ml_backend__ml_closure_gen__closure_arg;
#line 407 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__conv1_STATE_VARIABLE_GlobalData_11;

#line 407 "ml_closure_gen.m"
    {
#line 407 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__ml_gen_type_info_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_2), &ml_backend__ml_closure_gen__conv1_STATE_VARIABLE_GlobalData_11);
    }
#line 407 "ml_closure_gen.m"
    *ml_backend__ml_closure_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_closure_gen__conv1_STATE_VARIABLE_GlobalData_11));
#line 407 "ml_closure_gen.m"
  }
#line 407 "ml_closure_gen.m"
}

#line 288 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_p_0(
#line 288 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_7,
#line 288 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__MaybePseudoTypeInfo_8,
#line 288 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__Rval_9,
#line 288 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__Type_10,
#line 288 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_14,
#line 288 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_15)
#line 288 "ml_closure_gen.m"
{
#line 295 "ml_closure_gen.m"
  {
#line 295 "ml_closure_gen.m"
    MR_bool ml_backend__ml_closure_gen__succeeded;

#line 295 "ml_closure_gen.m"
    if (((MR_tag((MR_Word) ml_backend__ml_closure_gen__MaybePseudoTypeInfo_8)) == (MR_mktag((MR_Integer) 1))))
#line 299 "ml_closure_gen.m"
      {
#line 299 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__TypeInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__MaybePseudoTypeInfo_8, (MR_Integer) 0)));

#line 371 "ml_closure_gen.m"
        if (((MR_tag((MR_Word) ml_backend__ml_closure_gen__TypeInfo_13)) == (MR_mktag((MR_Integer) 0))))
#line 371 "ml_closure_gen.m"
          {
#line 371 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__RttiTypeCtor0_25 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_closure_gen__TypeInfo_13), (MR_Integer) 0);
#line 371 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__ModuleName0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor0_25, (MR_Integer) 0)));
#line 371 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__ModuleName_30;
#line 371 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__RttiId_31;
#line 371 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__MLDS_ModuleName_32;
#line 371 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__DataAddr_33;
#line 371 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__V_48_48;
#line 371 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__V_49_49;
#line 371 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__V_50_50;
#line 375 "ml_closure_gen.m"
            MR_String ml_backend__ml_closure_gen__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor0_25, (MR_Integer) 1)));
#line 375 "ml_closure_gen.m"
            MR_Integer ml_backend__ml_closure_gen__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor0_25, (MR_Integer) 2)));

#line 376 "ml_closure_gen.m"
            {
#line 376 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__ModuleName_30 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ml_backend__ml_closure_gen__ModuleName0_27);
            }
#line 377 "ml_closure_gen.m"
            {
#line 377 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__RttiId_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 377 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiId_31, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiTypeCtor0_25));
#line 377 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiId_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 377 "ml_closure_gen.m"
            }
#line 379 "ml_closure_gen.m"
            {
#line 379 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__MLDS_ModuleName_32 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_closure_gen__ModuleName_30);
            }
#line 380 "ml_closure_gen.m"
            {
#line 380 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 380 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_48_48, 1) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_31));
#line 380 "ml_closure_gen.m"
            }
#line 380 "ml_closure_gen.m"
            {
#line 380 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__DataAddr_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 380 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__DataAddr_33, 0) = ((MR_Box) (ml_backend__ml_closure_gen__MLDS_ModuleName_32));
#line 380 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__DataAddr_33, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_48_48));
#line 380 "ml_closure_gen.m"
            }
#line 381 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_closure_gen__DataAddr_33);
#line 381 "ml_closure_gen.m"
            {
#line 381 "ml_closure_gen.m"
              MR_Word base;
#line 381 "ml_closure_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "ml_closure_gen.m"
              *ml_backend__ml_closure_gen__Rval_9 = base;
#line 381 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 381 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_49_49));
#line 381 "ml_closure_gen.m"
            }
#line 382 "ml_closure_gen.m"
            {
#line 382 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 382 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_50_50, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_31));
#line 382 "ml_closure_gen.m"
            }
#line 382 "ml_closure_gen.m"
            {
#line 382 "ml_closure_gen.m"
              MR_Word base;
#line 382 "ml_closure_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "ml_closure_gen.m"
              *ml_backend__ml_closure_gen__Type_10 = base;
#line 382 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 382 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_50_50));
#line 382 "ml_closure_gen.m"
            }
#line 382 "ml_closure_gen.m"
            *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_15 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_14;
#line 371 "ml_closure_gen.m"
          }
#line 371 "ml_closure_gen.m"
        else
#line 386 "ml_closure_gen.m"
          {
#line 386 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__RttiData_38;
#line 386 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__PDupRvalTypeMap_39;
#line 386 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__RttiId_58;
#line 395 "ml_closure_gen.m"
            MR_Word ml_backend__ml_closure_gen__OldRvalType_40;
#line 393 "ml_closure_gen.m"
            MR_Box ml_backend__ml_closure_gen__conv0_OldRvalType_40;

#line 389 "ml_closure_gen.m"
            {
#line 389 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__RttiData_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__RttiData_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 389 "ml_closure_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__RttiData_38, 1) = ((MR_Box) (ml_backend__ml_closure_gen__TypeInfo_13));
#line 389 "ml_closure_gen.m"
            }
#line 390 "ml_closure_gen.m"
            {
#line 390 "ml_closure_gen.m"
              backend_libs__rtti__rtti_data_to_id_2_p_0(ml_backend__ml_closure_gen__RttiData_38, &ml_backend__ml_closure_gen__RttiId_58);
            }
#line 392 "ml_closure_gen.m"
            {
#line 392 "ml_closure_gen.m"
              ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_14, &ml_backend__ml_closure_gen__PDupRvalTypeMap_39);
            }
#line 393 "ml_closure_gen.m"
            {
#line 393 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__ml_closure_gen__PDupRvalTypeMap_39, ((MR_Box) (ml_backend__ml_closure_gen__RttiId_58)), &ml_backend__ml_closure_gen__conv0_OldRvalType_40);
            }
#line 393 "ml_closure_gen.m"
            if (ml_backend__ml_closure_gen__succeeded)
#line 393 "ml_closure_gen.m"
              {
#line 393 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__OldRvalType_40 = ((MR_Word) ml_backend__ml_closure_gen__conv0_OldRvalType_40);
#line 393 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__succeeded = MR_TRUE;
#line 393 "ml_closure_gen.m"
              }
#line 395 "ml_closure_gen.m"
            if (ml_backend__ml_closure_gen__succeeded)
#line 394 "ml_closure_gen.m"
              {
#line 394 "ml_closure_gen.m"
                *ml_backend__ml_closure_gen__Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__OldRvalType_40, (MR_Integer) 0)));
#line 394 "ml_closure_gen.m"
                *ml_backend__ml_closure_gen__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__OldRvalType_40, (MR_Integer) 1)));
#line 394 "ml_closure_gen.m"
                *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_15 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_14;
#line 394 "ml_closure_gen.m"
              }
#line 395 "ml_closure_gen.m"
            else
#line 396 "ml_closure_gen.m"
              {
#line 396 "ml_closure_gen.m"
                MR_Word ml_backend__ml_closure_gen__V_41_41;
#line 396 "ml_closure_gen.m"
                MR_Word ml_backend__ml_closure_gen__V_42_42;
#line 396 "ml_closure_gen.m"
                MR_Word ml_backend__ml_closure_gen__V_43_43;
#line 396 "ml_closure_gen.m"
                MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_33_44;
#line 396 "ml_closure_gen.m"
                MR_Word ml_backend__ml_closure_gen__V_45_45;
#line 396 "ml_closure_gen.m"
                MR_Word ml_backend__ml_closure_gen__V_46_46;
#line 396 "ml_closure_gen.m"
                MR_Word ml_backend__ml_closure_gen__ModuleName_51;
#line 396 "ml_closure_gen.m"
                MR_Word ml_backend__ml_closure_gen__MLDS_ModuleName_52;
#line 396 "ml_closure_gen.m"
                MR_Word ml_backend__ml_closure_gen__DataAddr_53;
#line 407 "ml_closure_gen.m"
                MR_Box ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_15;

#line 396 "ml_closure_gen.m"
                {
#line 396 "ml_closure_gen.m"
                  hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_closure_gen__ModuleInfo_7, &ml_backend__ml_closure_gen__ModuleName_51);
                }
#line 397 "ml_closure_gen.m"
                {
#line 397 "ml_closure_gen.m"
                  ml_backend__ml_closure_gen__MLDS_ModuleName_52 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_closure_gen__ModuleName_51);
                }
#line 398 "ml_closure_gen.m"
                {
#line 398 "ml_closure_gen.m"
                  ml_backend__ml_closure_gen__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "ml_closure_gen.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 398 "ml_closure_gen.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_41_41, 1) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_58));
#line 398 "ml_closure_gen.m"
                }
#line 398 "ml_closure_gen.m"
                {
#line 398 "ml_closure_gen.m"
                  ml_backend__ml_closure_gen__DataAddr_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "ml_closure_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__DataAddr_53, 0) = ((MR_Box) (ml_backend__ml_closure_gen__MLDS_ModuleName_52));
#line 398 "ml_closure_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__DataAddr_53, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_41_41));
#line 398 "ml_closure_gen.m"
                }
#line 399 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_closure_gen__DataAddr_53);
#line 399 "ml_closure_gen.m"
                {
#line 399 "ml_closure_gen.m"
                  MR_Word base;
#line 399 "ml_closure_gen.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 399 "ml_closure_gen.m"
                  *ml_backend__ml_closure_gen__Rval_9 = base;
#line 399 "ml_closure_gen.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 399 "ml_closure_gen.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_42_42));
#line 399 "ml_closure_gen.m"
                }
#line 400 "ml_closure_gen.m"
                {
#line 400 "ml_closure_gen.m"
                  ml_backend__ml_closure_gen__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 400 "ml_closure_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_43_43, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_58));
#line 400 "ml_closure_gen.m"
                }
#line 400 "ml_closure_gen.m"
                {
#line 400 "ml_closure_gen.m"
                  MR_Word base;
#line 400 "ml_closure_gen.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 400 "ml_closure_gen.m"
                  *ml_backend__ml_closure_gen__Type_10 = base;
#line 400 "ml_closure_gen.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 400 "ml_closure_gen.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_43_43));
#line 400 "ml_closure_gen.m"
                }
#line 402 "ml_closure_gen.m"
                {
#line 402 "ml_closure_gen.m"
                  ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_p_0(ml_backend__ml_closure_gen__ModuleInfo_7, ml_backend__ml_closure_gen__RttiData_38, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_14, &ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_33_44);
                }
#line 407 "ml_closure_gen.m"
                {
#line 407 "ml_closure_gen.m"
                  ml_backend__ml_closure_gen__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 407 "ml_closure_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_45_45, 0) = ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_6[1]));
#line 407 "ml_closure_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_45_45, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_p_0_1));
#line 407 "ml_closure_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 407 "ml_closure_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_45_45, 3) = ((MR_Box) (ml_backend__ml_closure_gen__ModuleInfo_7));
#line 407 "ml_closure_gen.m"
                }
#line 424 "ml_closure_gen.m"
                if (((MR_tag((MR_Word) ml_backend__ml_closure_gen__TypeInfo_13)) == (MR_mktag((MR_Integer) 1))))
#line 425 "ml_closure_gen.m"
                  {
#line 425 "ml_closure_gen.m"
                    MR_Word ml_backend__ml_closure_gen___TypeCtor_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__TypeInfo_13, (MR_Integer) 0)));

#line 425 "ml_closure_gen.m"
                    ml_backend__ml_closure_gen__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__TypeInfo_13, (MR_Integer) 1)));
#line 425 "ml_closure_gen.m"
                  }
#line 424 "ml_closure_gen.m"
                else
#line 426 "ml_closure_gen.m"
                  {
#line 426 "ml_closure_gen.m"
                    MR_Word ml_backend__ml_closure_gen___VarArityId_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__TypeInfo_13, (MR_Integer) 0)));

#line 426 "ml_closure_gen.m"
                    ml_backend__ml_closure_gen__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__TypeInfo_13, (MR_Integer) 1)));
#line 426 "ml_closure_gen.m"
                  }
#line 407 "ml_closure_gen.m"
                {
#line 407 "ml_closure_gen.m"
                  mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__ml_closure_gen__V_45_45, ml_backend__ml_closure_gen__V_46_46, ((MR_Box) (ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_33_44)), &ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_15);
                }
#line 407 "ml_closure_gen.m"
                *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_15 = ((MR_Word) ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_15);
#line 396 "ml_closure_gen.m"
              }
#line 386 "ml_closure_gen.m"
          }
#line 299 "ml_closure_gen.m"
      }
#line 295 "ml_closure_gen.m"
    else
#line 295 "ml_closure_gen.m"
      {
#line 295 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__PseudoTypeInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__MaybePseudoTypeInfo_8, (MR_Integer) 0)));

#line 296 "ml_closure_gen.m"
        {
#line 296 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_p_0(ml_backend__ml_closure_gen__ModuleInfo_7, ml_backend__ml_closure_gen__PseudoTypeInfo_12, ml_backend__ml_closure_gen__Rval_9, ml_backend__ml_closure_gen__Type_10, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_14, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_15);
#line 296 "ml_closure_gen.m"
          return;
        }
#line 295 "ml_closure_gen.m"
      }
#line 295 "ml_closure_gen.m"
  }
#line 288 "ml_closure_gen.m"
}

#line 282 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_type_info_defn_4_p_0(
#line 282 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_5,
#line 282 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__TI_6,
#line 282 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_10,
#line 282 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_11)
#line 282 "ml_closure_gen.m"
{
#line 286 "ml_closure_gen.m"
  {
#line 286 "ml_closure_gen.m"
    MR_bool ml_backend__ml_closure_gen__succeeded;
#line 286 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen___Rval_8;
#line 286 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen___Type_9;

#line 286 "ml_closure_gen.m"
    {
#line 286 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__ml_gen_type_info_6_p_0(ml_backend__ml_closure_gen__ModuleInfo_5, ml_backend__ml_closure_gen__TI_6, &ml_backend__ml_closure_gen___Rval_8, &ml_backend__ml_closure_gen___Type_9, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_10, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_11);
    }
#line 286 "ml_closure_gen.m"
  }
#line 282 "ml_closure_gen.m"
}

#line 266 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_defn_4_p_0(
#line 266 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_5,
#line 266 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__MaybePTI_6,
#line 266 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_10,
#line 266 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_11)
#line 266 "ml_closure_gen.m"
{
#line 272 "ml_closure_gen.m"
  {
#line 272 "ml_closure_gen.m"
    MR_bool ml_backend__ml_closure_gen__succeeded;
#line 272 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen___Rval_8;
#line 272 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen___Type_9;

#line 272 "ml_closure_gen.m"
    {
#line 272 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_p_0(ml_backend__ml_closure_gen__ModuleInfo_5, ml_backend__ml_closure_gen__MaybePTI_6, &ml_backend__ml_closure_gen___Rval_8, &ml_backend__ml_closure_gen___Type_9, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_10, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_11);
    }
#line 272 "ml_closure_gen.m"
  }
#line 266 "ml_closure_gen.m"
}

#line 359 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_p_0_1(
#line 359 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__closure_arg,
#line 359 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1,
#line 359 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_2,
#line 359 "ml_closure_gen.m"
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_3)
#line 359 "ml_closure_gen.m"
{
#line 359 "ml_closure_gen.m"
  {
#line 359 "ml_closure_gen.m"
    MR_Box ml_backend__ml_closure_gen__closure = ml_backend__ml_closure_gen__closure_arg;
#line 359 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__conv1_STATE_VARIABLE_GlobalData_11;

#line 359 "ml_closure_gen.m"
    {
#line 359 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_2), &ml_backend__ml_closure_gen__conv1_STATE_VARIABLE_GlobalData_11);
    }
#line 359 "ml_closure_gen.m"
    *ml_backend__ml_closure_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_closure_gen__conv1_STATE_VARIABLE_GlobalData_11));
#line 359 "ml_closure_gen.m"
  }
#line 359 "ml_closure_gen.m"
}

#line 245 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_p_0(
#line 245 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ModuleInfo_6,
#line 245 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ClosureArg_7,
#line 245 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__HeadVar__3_3,
#line 245 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_18,
#line 245 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_19)
#line 245 "ml_closure_gen.m"
{
#line 250 "ml_closure_gen.m"
  {
#line 250 "ml_closure_gen.m"
    MR_bool ml_backend__ml_closure_gen__succeeded;
#line 250 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ArgInit_8;
#line 250 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ArgType_9;
#line 250 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__ClosureArg_7, (MR_Integer) 0)));
#line 250 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__PseudoTypeInfo_15;
#line 250 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ArgRval_16;
#line 250 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__CastArgRval_17;
#line 250 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__V_21_21;
#line 251 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen___Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__ClosureArg_7, (MR_Integer) 1)));

#line 259 "ml_closure_gen.m"
    {
#line 259 "ml_closure_gen.m"
      backend_libs__pseudo_type_info__construct_pseudo_type_info_4_p_0(ml_backend__ml_closure_gen__Type_11, (MR_Integer) -1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_closure_gen__PseudoTypeInfo_15);
    }
#line 309 "ml_closure_gen.m"
    if (((MR_tag((MR_Word) ml_backend__ml_closure_gen__PseudoTypeInfo_15)) == (MR_mktag((MR_Integer) 3))))
#line 309 "ml_closure_gen.m"
      {
#line 309 "ml_closure_gen.m"
        MR_Integer ml_backend__ml_closure_gen__N_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__PseudoTypeInfo_15, (MR_Integer) 0)));
#line 309 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__V_62_62;

#line 311 "ml_closure_gen.m"
        {
#line 311 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_62_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 311 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__V_62_62, 0) = ((MR_Box) (ml_backend__ml_closure_gen__N_29));
#line 311 "ml_closure_gen.m"
        }
#line 311 "ml_closure_gen.m"
        {
#line 311 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__ArgRval_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgRval_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 311 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgRval_16, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_62_62));
#line 311 "ml_closure_gen.m"
        }
#line 312 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__ArgType_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 312 "ml_closure_gen.m"
        *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_19 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_18;
#line 309 "ml_closure_gen.m"
      }
#line 309 "ml_closure_gen.m"
    else
#line 334 "ml_closure_gen.m"
      if (((MR_tag((MR_Word) ml_backend__ml_closure_gen__PseudoTypeInfo_15)) == (MR_mktag((MR_Integer) 0))))
#line 319 "ml_closure_gen.m"
        {
#line 319 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__ModuleName0_37;
#line 319 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__ModuleName_40;
#line 319 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__RttiTypeCtor_41 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_closure_gen__PseudoTypeInfo_15), (MR_Integer) 0);
#line 319 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__RttiId_42;
#line 319 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__MLDS_ModuleName_43;
#line 319 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__DataAddr_44;
#line 319 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__V_59_59;
#line 319 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__V_60_60;
#line 319 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__V_61_61;
#line 325 "ml_closure_gen.m"
          MR_String ml_backend__ml_closure_gen__V_38_38;
#line 325 "ml_closure_gen.m"
          MR_Integer ml_backend__ml_closure_gen__V_39_39;

#line 325 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__ModuleName0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor_41, (MR_Integer) 0)));
#line 325 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor_41, (MR_Integer) 1)));
#line 325 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiTypeCtor_41, (MR_Integer) 2)));
#line 326 "ml_closure_gen.m"
          {
#line 326 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__ModuleName_40 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ml_backend__ml_closure_gen__ModuleName0_37);
          }
#line 328 "ml_closure_gen.m"
          {
#line 328 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__RttiId_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 328 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiId_42, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiTypeCtor_41));
#line 328 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__RttiId_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 328 "ml_closure_gen.m"
          }
#line 330 "ml_closure_gen.m"
          {
#line 330 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__MLDS_ModuleName_43 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_closure_gen__ModuleName_40);
          }
#line 331 "ml_closure_gen.m"
          {
#line 331 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 331 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_59_59, 1) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_42));
#line 331 "ml_closure_gen.m"
          }
#line 331 "ml_closure_gen.m"
          {
#line 331 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__DataAddr_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 331 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__DataAddr_44, 0) = ((MR_Box) (ml_backend__ml_closure_gen__MLDS_ModuleName_43));
#line 331 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__DataAddr_44, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_59_59));
#line 331 "ml_closure_gen.m"
          }
#line 332 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_closure_gen__DataAddr_44);
#line 332 "ml_closure_gen.m"
          {
#line 332 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__ArgRval_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgRval_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 332 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgRval_16, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_60_60));
#line 332 "ml_closure_gen.m"
          }
#line 333 "ml_closure_gen.m"
          {
#line 333 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 333 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_61_61, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_42));
#line 333 "ml_closure_gen.m"
          }
#line 333 "ml_closure_gen.m"
          {
#line 333 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__ArgType_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgType_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 333 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgType_9, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_61_61));
#line 333 "ml_closure_gen.m"
          }
#line 333 "ml_closure_gen.m"
          *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_19 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_18;
#line 319 "ml_closure_gen.m"
        }
#line 334 "ml_closure_gen.m"
      else
#line 337 "ml_closure_gen.m"
        {
#line 337 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__RttiData_49;
#line 337 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__PDupRvalTypeMap_50;
#line 337 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__RttiId_70;
#line 347 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__OldRvalType_51;
#line 345 "ml_closure_gen.m"
          MR_Box ml_backend__ml_closure_gen__conv0_OldRvalType_51;

#line 340 "ml_closure_gen.m"
          {
#line 340 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__RttiData_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 340 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__RttiData_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 340 "ml_closure_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__RttiData_49, 1) = ((MR_Box) (ml_backend__ml_closure_gen__PseudoTypeInfo_15));
#line 340 "ml_closure_gen.m"
          }
#line 341 "ml_closure_gen.m"
          {
#line 341 "ml_closure_gen.m"
            backend_libs__rtti__rtti_data_to_id_2_p_0(ml_backend__ml_closure_gen__RttiData_49, &ml_backend__ml_closure_gen__RttiId_70);
          }
#line 343 "ml_closure_gen.m"
          {
#line 343 "ml_closure_gen.m"
            ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_18, &ml_backend__ml_closure_gen__PDupRvalTypeMap_50);
          }
#line 345 "ml_closure_gen.m"
          {
#line 345 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__ml_closure_gen__PDupRvalTypeMap_50, ((MR_Box) (ml_backend__ml_closure_gen__RttiId_70)), &ml_backend__ml_closure_gen__conv0_OldRvalType_51);
          }
#line 345 "ml_closure_gen.m"
          if (ml_backend__ml_closure_gen__succeeded)
#line 345 "ml_closure_gen.m"
            {
#line 345 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__OldRvalType_51 = ((MR_Word) ml_backend__ml_closure_gen__conv0_OldRvalType_51);
#line 345 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__succeeded = MR_TRUE;
#line 345 "ml_closure_gen.m"
            }
#line 347 "ml_closure_gen.m"
          if (ml_backend__ml_closure_gen__succeeded)
#line 346 "ml_closure_gen.m"
            {
#line 346 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__ArgRval_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__OldRvalType_51, (MR_Integer) 0)));
#line 346 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__ArgType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__OldRvalType_51, (MR_Integer) 1)));
#line 346 "ml_closure_gen.m"
              *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_19 = ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_18;
#line 346 "ml_closure_gen.m"
            }
#line 347 "ml_closure_gen.m"
          else
#line 348 "ml_closure_gen.m"
            {
#line 348 "ml_closure_gen.m"
              MR_Word ml_backend__ml_closure_gen__V_52_52;
#line 348 "ml_closure_gen.m"
              MR_Word ml_backend__ml_closure_gen__V_53_53;
#line 348 "ml_closure_gen.m"
              MR_Word ml_backend__ml_closure_gen__V_54_54;
#line 348 "ml_closure_gen.m"
              MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_40_55;
#line 348 "ml_closure_gen.m"
              MR_Word ml_backend__ml_closure_gen__V_56_56;
#line 348 "ml_closure_gen.m"
              MR_Word ml_backend__ml_closure_gen__V_57_57;
#line 348 "ml_closure_gen.m"
              MR_Word ml_backend__ml_closure_gen__ModuleName_63;
#line 348 "ml_closure_gen.m"
              MR_Word ml_backend__ml_closure_gen__MLDS_ModuleName_64;
#line 348 "ml_closure_gen.m"
              MR_Word ml_backend__ml_closure_gen__DataAddr_65;
#line 359 "ml_closure_gen.m"
              MR_Box ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_19;

#line 348 "ml_closure_gen.m"
              {
#line 348 "ml_closure_gen.m"
                hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_closure_gen__ModuleInfo_6, &ml_backend__ml_closure_gen__ModuleName_63);
              }
#line 349 "ml_closure_gen.m"
              {
#line 349 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__MLDS_ModuleName_64 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_closure_gen__ModuleName_63);
              }
#line 350 "ml_closure_gen.m"
              {
#line 350 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 350 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_52_52, 1) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_70));
#line 350 "ml_closure_gen.m"
              }
#line 350 "ml_closure_gen.m"
              {
#line 350 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__DataAddr_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 350 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__DataAddr_65, 0) = ((MR_Box) (ml_backend__ml_closure_gen__MLDS_ModuleName_64));
#line 350 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__DataAddr_65, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_52_52));
#line 350 "ml_closure_gen.m"
              }
#line 351 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_closure_gen__DataAddr_65);
#line 351 "ml_closure_gen.m"
              {
#line 351 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__ArgRval_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgRval_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 351 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgRval_16, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_53_53));
#line 351 "ml_closure_gen.m"
              }
#line 352 "ml_closure_gen.m"
              {
#line 352 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 352 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_54_54, 0) = ((MR_Box) (ml_backend__ml_closure_gen__RttiId_70));
#line 352 "ml_closure_gen.m"
              }
#line 352 "ml_closure_gen.m"
              {
#line 352 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__ArgType_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgType_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 352 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ArgType_9, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_54_54));
#line 352 "ml_closure_gen.m"
              }
#line 354 "ml_closure_gen.m"
              {
#line 354 "ml_closure_gen.m"
                ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_p_0(ml_backend__ml_closure_gen__ModuleInfo_6, ml_backend__ml_closure_gen__RttiData_49, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_0_18, &ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_40_55);
              }
#line 359 "ml_closure_gen.m"
              {
#line 359 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 359 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_56_56, 0) = ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_6[0]));
#line 359 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_56_56, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_p_0_1));
#line 359 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 359 "ml_closure_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_56_56, 3) = ((MR_Box) (ml_backend__ml_closure_gen__ModuleInfo_6));
#line 359 "ml_closure_gen.m"
              }
#line 415 "ml_closure_gen.m"
              if (((MR_tag((MR_Word) ml_backend__ml_closure_gen__PseudoTypeInfo_15)) == (MR_mktag((MR_Integer) 1))))
#line 418 "ml_closure_gen.m"
                {
#line 418 "ml_closure_gen.m"
                  MR_Word ml_backend__ml_closure_gen___TypeCtor_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__PseudoTypeInfo_15, (MR_Integer) 0)));

#line 418 "ml_closure_gen.m"
                  ml_backend__ml_closure_gen__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__PseudoTypeInfo_15, (MR_Integer) 1)));
#line 418 "ml_closure_gen.m"
                }
#line 415 "ml_closure_gen.m"
              else
#line 420 "ml_closure_gen.m"
                {
#line 420 "ml_closure_gen.m"
                  MR_Word ml_backend__ml_closure_gen___VarArityId_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__PseudoTypeInfo_15, (MR_Integer) 0)));

#line 420 "ml_closure_gen.m"
                  ml_backend__ml_closure_gen__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__PseudoTypeInfo_15, (MR_Integer) 1)));
#line 420 "ml_closure_gen.m"
                }
#line 359 "ml_closure_gen.m"
              {
#line 359 "ml_closure_gen.m"
                mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__ml_closure_gen__V_56_56, ml_backend__ml_closure_gen__V_57_57, ((MR_Box) (ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_40_55)), &ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_19);
              }
#line 359 "ml_closure_gen.m"
              *ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_19 = ((MR_Word) ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_19);
#line 348 "ml_closure_gen.m"
            }
#line 337 "ml_closure_gen.m"
        }
#line 263 "ml_closure_gen.m"
    {
#line 263 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 263 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_21_21, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ArgType_9));
#line 263 "ml_closure_gen.m"
    }
#line 263 "ml_closure_gen.m"
    {
#line 263 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__CastArgRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 263 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__CastArgRval_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 263 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__CastArgRval_17, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_21_21));
#line 263 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__CastArgRval_17, 2) = ((MR_Box) (ml_backend__ml_closure_gen__ArgRval_16));
#line 263 "ml_closure_gen.m"
    }
#line 264 "ml_closure_gen.m"
    {
#line 264 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__ArgInit_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 264 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__ArgInit_8, 0) = ((MR_Box) (ml_backend__ml_closure_gen__CastArgRval_17));
#line 264 "ml_closure_gen.m"
    }
#line 250 "ml_closure_gen.m"
    {
#line 250 "ml_closure_gen.m"
      MR_Word base;
#line 250 "ml_closure_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 250 "ml_closure_gen.m"
      *ml_backend__ml_closure_gen__HeadVar__3_3 = base;
#line 250 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ArgInit_8));
#line 250 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ArgType_9));
#line 250 "ml_closure_gen.m"
    }
#line 250 "ml_closure_gen.m"
  }
#line 245 "ml_closure_gen.m"
}

#line 236 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_layout_7_p_0_1(
#line 236 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__closure_arg,
#line 236 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1,
#line 236 "ml_closure_gen.m"
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_2,
#line 236 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_3,
#line 236 "ml_closure_gen.m"
  MR_Box * ml_backend__ml_closure_gen__wrapper_arg_4)
#line 236 "ml_closure_gen.m"
{
#line 236 "ml_closure_gen.m"
  {
#line 236 "ml_closure_gen.m"
    MR_Box ml_backend__ml_closure_gen__closure = ml_backend__ml_closure_gen__closure_arg;
#line 236 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__conv1_HeadVar__3_3;
#line 236 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__conv0_STATE_VARIABLE_GlobalData_19;

#line 236 "ml_closure_gen.m"
    {
#line 236 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_1), &ml_backend__ml_closure_gen__conv1_HeadVar__3_3, ((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_3), &ml_backend__ml_closure_gen__conv0_STATE_VARIABLE_GlobalData_19);
    }
#line 236 "ml_closure_gen.m"
    *ml_backend__ml_closure_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_closure_gen__conv1_HeadVar__3_3));
#line 236 "ml_closure_gen.m"
    *ml_backend__ml_closure_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_closure_gen__conv0_STATE_VARIABLE_GlobalData_19));
#line 236 "ml_closure_gen.m"
  }
#line 236 "ml_closure_gen.m"
}

#line 166 "ml_closure_gen.m"
static void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_layout_7_p_0(
#line 166 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__PredId_8,
#line 166 "ml_closure_gen.m"
  MR_Integer ml_backend__ml_closure_gen__ProcId_9,
#line 166 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Context_10,
#line 166 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__ClosureLayoutAddrRval_11,
#line 166 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__ClosureLayoutType_12,
#line 166 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_29,
#line 166 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_30)
#line 166 "ml_closure_gen.m"
{
#line 170 "ml_closure_gen.m"
  {
#line 170 "ml_closure_gen.m"
    MR_bool ml_backend__ml_closure_gen__succeeded;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__TypeInfo_28_77;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ModuleInfo_14;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ClosureLayoutInfo_15;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ClosureArgs_19;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__TVarLocnMap_20;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ClosureArgInitsAndTypes_21;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ClosureArgInits_22;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__TVarVectorRval_23;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__TVarVectorType_24;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__InitTVarVector_25;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__Inits_26;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ModuleName_27;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__MLDS_ModuleName_28;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_32_32;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_33_33;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_35_35;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__V_36_36;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__V_37_37;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__V_38_38;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__V_41_41;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_42_42;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ArgInitsAndTypes_61;
#line 170 "ml_closure_gen.m"
    MR_Integer ml_backend__ml_closure_gen__Length_62;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__LengthRval_63;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__CastLengthRval_64;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__LengthInitAndType_66;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__V_67_67;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__V_69_69;
#line 170 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__V_71_71;
#line 236 "ml_closure_gen.m"
    MR_Box ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_33_33;

#line 171 "ml_closure_gen.m"
    {
#line 171 "ml_closure_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_29, &ml_backend__ml_closure_gen__ModuleInfo_14);
    }
#line 172 "ml_closure_gen.m"
    {
#line 172 "ml_closure_gen.m"
      ll_backend__continuation_info__generate_closure_layout_4_p_0(ml_backend__ml_closure_gen__ModuleInfo_14, ml_backend__ml_closure_gen__PredId_8, ml_backend__ml_closure_gen__ProcId_9, &ml_backend__ml_closure_gen__ClosureLayoutInfo_15);
    }
#line 176 "ml_closure_gen.m"
    {
#line 176 "ml_closure_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_29, &ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_32_32);
    }
#line 181 "ml_closure_gen.m"
    ml_backend__ml_closure_gen__ClosureArgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__ClosureLayoutInfo_15, (MR_Integer) 0)));
#line 181 "ml_closure_gen.m"
    ml_backend__ml_closure_gen__TVarLocnMap_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__ClosureLayoutInfo_15, (MR_Integer) 1)));
#line 236 "ml_closure_gen.m"
    {
#line 236 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 236 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_67_67, 0) = ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_5[0]));
#line 236 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_67_67, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ml_gen_closure_layout_7_p_0_1));
#line 236 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 236 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_67_67, 3) = ((MR_Box) (ml_backend__ml_closure_gen__ModuleInfo_14));
#line 236 "ml_closure_gen.m"
    }
#line 4535 "ml_backend.ml_closure_gen.c"
    ml_backend__ml_closure_gen__TypeInfo_28_77 = (MR_Word) &ml_backend__ml_closure_gen_scalar_common_2[0];
#line 236 "ml_closure_gen.m"
    {
#line 236 "ml_closure_gen.m"
      mercury__list__map_foldl_5_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_closure_arg_info_0, ml_backend__ml_closure_gen__TypeInfo_28_77, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__ml_closure_gen__V_67_67, ml_backend__ml_closure_gen__ClosureArgs_19, &ml_backend__ml_closure_gen__ArgInitsAndTypes_61, ((MR_Box) (ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_32_32)), &ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_33_33);
    }
#line 236 "ml_closure_gen.m"
    ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_33_33 = ((MR_Word) ml_backend__ml_closure_gen__conv2_STATE_VARIABLE_GlobalData_33_33);
#line 238 "ml_closure_gen.m"
    {
#line 238 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__Length_62 = mercury__list__length_1_f_0(ml_backend__ml_closure_gen__TypeInfo_28_77, ml_backend__ml_closure_gen__ArgInitsAndTypes_61);
    }
#line 239 "ml_closure_gen.m"
    {
#line 239 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 239 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__V_69_69, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Length_62));
#line 239 "ml_closure_gen.m"
    }
#line 239 "ml_closure_gen.m"
    {
#line 239 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__LengthRval_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__LengthRval_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 239 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__LengthRval_63, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_69_69));
#line 239 "ml_closure_gen.m"
    }
#line 240 "ml_closure_gen.m"
    {
#line 240 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__CastLengthRval_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 240 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__CastLengthRval_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 240 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__CastLengthRval_64, 1) = ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_3[0]));
#line 240 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__CastLengthRval_64, 2) = ((MR_Box) (ml_backend__ml_closure_gen__LengthRval_63));
#line 240 "ml_closure_gen.m"
    }
#line 242 "ml_closure_gen.m"
    {
#line 242 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 242 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_71_71, 0) = ((MR_Box) (ml_backend__ml_closure_gen__CastLengthRval_64));
#line 242 "ml_closure_gen.m"
    }
#line 242 "ml_closure_gen.m"
    {
#line 242 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__LengthInitAndType_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 242 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__LengthInitAndType_66, 0) = ((MR_Box) (ml_backend__ml_closure_gen__V_71_71));
#line 242 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__LengthInitAndType_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 242 "ml_closure_gen.m"
    }
#line 243 "ml_closure_gen.m"
    {
#line 243 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__ClosureArgInitsAndTypes_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__ClosureArgInitsAndTypes_21, 0) = ((MR_Box) (ml_backend__ml_closure_gen__LengthInitAndType_66));
#line 243 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__ClosureArgInitsAndTypes_21, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ArgInitsAndTypes_61));
#line 243 "ml_closure_gen.m"
    }
#line 184 "ml_closure_gen.m"
    {
#line 184 "ml_closure_gen.m"
      mercury__assoc_list__keys_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, ml_backend__ml_closure_gen__ClosureArgInitsAndTypes_21, &ml_backend__ml_closure_gen__ClosureArgInits_22);
    }
#line 186 "ml_closure_gen.m"
    {
#line 186 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_p_0(ml_backend__ml_closure_gen__ModuleInfo_14, (MR_String) "typevar_vector", ml_backend__ml_closure_gen__Context_10, ml_backend__ml_closure_gen__TVarLocnMap_20, &ml_backend__ml_closure_gen__TVarVectorRval_23, &ml_backend__ml_closure_gen__TVarVectorType_24, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_33_33, &ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_35_35);
    }
#line 189 "ml_closure_gen.m"
    {
#line 189 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 189 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_37_37, 0) = ((MR_Box) (ml_backend__ml_closure_gen__TVarVectorType_24));
#line 189 "ml_closure_gen.m"
    }
#line 189 "ml_closure_gen.m"
    {
#line 189 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 189 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 189 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_36_36, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_37_37));
#line 189 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_36_36, 2) = ((MR_Box) (ml_backend__ml_closure_gen__TVarVectorRval_23));
#line 189 "ml_closure_gen.m"
    }
#line 188 "ml_closure_gen.m"
    {
#line 188 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__InitTVarVector_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 188 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__InitTVarVector_25, 0) = ((MR_Box) (ml_backend__ml_closure_gen__V_36_36));
#line 188 "ml_closure_gen.m"
    }
#line 190 "ml_closure_gen.m"
    {
#line 190 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_38_38, 0) = ((MR_Box) (ml_backend__ml_closure_gen__InitTVarVector_25));
#line 190 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_38_38, 1) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureArgInits_22));
#line 190 "ml_closure_gen.m"
    }
#line 190 "ml_closure_gen.m"
    {
#line 190 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__Inits_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Inits_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_3[3])));
#line 190 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Inits_26, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_38_38));
#line 190 "ml_closure_gen.m"
    }
#line 196 "ml_closure_gen.m"
    {
#line 196 "ml_closure_gen.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_closure_gen__ModuleInfo_14, &ml_backend__ml_closure_gen__ModuleName_27);
    }
#line 197 "ml_closure_gen.m"
    {
#line 197 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__MLDS_ModuleName_28 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_closure_gen__ModuleName_27);
    }
#line 198 "ml_closure_gen.m"
    *ml_backend__ml_closure_gen__ClosureLayoutType_12 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_closure_gen_scalar_common_1[15]);
#line 199 "ml_closure_gen.m"
    {
#line 199 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 199 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__V_41_41, 0) = ((MR_Box) (ml_backend__ml_closure_gen__Inits_26));
#line 199 "ml_closure_gen.m"
    }
#line 199 "ml_closure_gen.m"
    {
#line 199 "ml_closure_gen.m"
      ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0(ml_backend__ml_closure_gen__MLDS_ModuleName_28, (MR_String) "closure_layout", *ml_backend__ml_closure_gen__ClosureLayoutType_12, ml_backend__ml_closure_gen__V_41_41, ml_backend__ml_closure_gen__Context_10, ml_backend__ml_closure_gen__ClosureLayoutAddrRval_11, ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_35_35, &ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_42_42);
    }
#line 202 "ml_closure_gen.m"
    {
#line 202 "ml_closure_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_GlobalData_42_42, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_29, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_30);
#line 202 "ml_closure_gen.m"
      return;
    }
#line 170 "ml_closure_gen.m"
  }
#line 166 "ml_closure_gen.m"
}

#line 721 "ml_closure_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_p_0_1(
#line 721 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__closure_arg,
#line 721 "ml_closure_gen.m"
  MR_Box ml_backend__ml_closure_gen__wrapper_arg_1)
#line 721 "ml_closure_gen.m"
{
#line 721 "ml_closure_gen.m"
  {
#line 721 "ml_closure_gen.m"
    MR_Box ml_backend__ml_closure_gen__wrapper_arg_2;
#line 721 "ml_closure_gen.m"
    MR_Box ml_backend__ml_closure_gen__closure = ml_backend__ml_closure_gen__closure_arg;
#line 721 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__conv0_Argument_4;

#line 721 "ml_closure_gen.m"
    {
#line 721 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__conv0_Argument_4 = ml_backend__ml_closure_gen__arg_delete_gc_statement_1_f_0(((MR_Word) ml_backend__ml_closure_gen__wrapper_arg_1));
    }
#line 721 "ml_closure_gen.m"
    ml_backend__ml_closure_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_closure_gen__conv0_Argument_4));
#line 721 "ml_closure_gen.m"
    return ml_backend__ml_closure_gen__wrapper_arg_2;
#line 721 "ml_closure_gen.m"
  }
#line 721 "ml_closure_gen.m"
}

#line 59 "ml_closure_gen.m"
void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_p_0(
#line 59 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__PredId_10,
#line 59 "ml_closure_gen.m"
  MR_Integer ml_backend__ml_closure_gen__ProcId_11,
#line 59 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ClosureKind_12,
#line 59 "ml_closure_gen.m"
  MR_Integer ml_backend__ml_closure_gen__NumClosureArgs_13,
#line 59 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Context_14,
#line 59 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__WrapperFuncRval_15,
#line 59 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__WrapperFuncType_16,
#line 59 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_93,
#line 59 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_94)
#line 59 "ml_closure_gen.m"
{
#line 671 "ml_closure_gen.m"
  {
#line 671 "ml_closure_gen.m"
    MR_bool ml_backend__ml_closure_gen__succeeded;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__TypeInfo_139_139;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__TypeCtorInfo_142_142;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__TypeCtorInfo_149_149;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ModuleInfo_18;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__PredInfo_19;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ProcInfo_20;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__Purity_21;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ProcArgTypes_22;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__PredOrFunc_23;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ProcHeadVars_24;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ProcArgModes_25;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__CodeModel_26;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ProcVarSet_27;
#line 671 "ml_closure_gen.m"
    MR_Integer ml_backend__ml_closure_gen__ProcArity_28;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ProcHeadVarNames_29;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ProcBoxedArgTypes_30;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__WrapperHeadVars_35;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__WrapperArgModes_36;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__WrapperArgTypes_37;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__WrapperBoxedArgTypes_38;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__WrapperHeadVarNames_39;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__WrapperParams0_40;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__WrapperArgs0_41;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__WrapperRetType_42;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__WrapperArgs1_43;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__MaybeClosureA_44;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__WrapperArgs_45;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__WrapperParams_51;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__WrapperHeadVarDecls_52;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__WrapperHeadVarLvals_53;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__WrapperCopyOutLvals_54;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__MLDS_Context_55;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__MaybeClosureB_65;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__Globals_67;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ClosureArgLvals_75;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__CallLvals_76;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__Decls0_77;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__Statements0_78;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__Decls1_81;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__Statements1_82;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__Decls2_83;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__Statements_85;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__GC_Decls_88;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__Decls_89;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__WrapperFuncBody_90;
#line 671 "ml_closure_gen.m"
    MR_Integer ml_backend__ml_closure_gen__WrapperFuncName_91;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__WrapperFunc_92;
#line 671 "ml_closure_gen.m"
    MR_Integer ml_backend__ml_closure_gen__V_99_99;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_100_100;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_106_106;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_111_111;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_121_121;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_126_126;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_128_128;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_132_132;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__V_133_133;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_134_134;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__V_135_135;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_136_136;
#line 671 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_137_137;
#line 705 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__WrapperHeadVars0_31;
#line 705 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__WrapperArgModes0_32;
#line 705 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__WrapperArgTypes0_33;
#line 705 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__WrapperBoxedArgTypes0_34;
#line 696 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__TypeCtorInfo_140_140;
#line 696 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__TypeCtorInfo_141_141;
#line 896 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ClosureArgType2_86;
#line 896 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ClosureArgName2_87;
#line 891 "ml_closure_gen.m"
    MR_Tuple ml_backend__ml_closure_gen__V_130_130;
#line 891 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__V_131_131;
#line 891 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__V_150_150;

#line 673 "ml_closure_gen.m"
    {
#line 673 "ml_closure_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_93, &ml_backend__ml_closure_gen__ModuleInfo_18);
    }
#line 674 "ml_closure_gen.m"
    {
#line 674 "ml_closure_gen.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ml_backend__ml_closure_gen__ModuleInfo_18, ml_backend__ml_closure_gen__PredId_10, ml_backend__ml_closure_gen__ProcId_11, &ml_backend__ml_closure_gen__PredInfo_19, &ml_backend__ml_closure_gen__ProcInfo_20);
    }
#line 675 "ml_closure_gen.m"
    {
#line 675 "ml_closure_gen.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(ml_backend__ml_closure_gen__PredInfo_19, &ml_backend__ml_closure_gen__Purity_21);
    }
#line 676 "ml_closure_gen.m"
    {
#line 676 "ml_closure_gen.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ml_backend__ml_closure_gen__PredInfo_19, &ml_backend__ml_closure_gen__ProcArgTypes_22);
    }
#line 677 "ml_closure_gen.m"
    {
#line 677 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__PredOrFunc_23 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(ml_backend__ml_closure_gen__PredInfo_19);
    }
#line 678 "ml_closure_gen.m"
    {
#line 678 "ml_closure_gen.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ml_backend__ml_closure_gen__ProcInfo_20, &ml_backend__ml_closure_gen__ProcHeadVars_24);
    }
#line 679 "ml_closure_gen.m"
    {
#line 679 "ml_closure_gen.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ml_backend__ml_closure_gen__ProcInfo_20, &ml_backend__ml_closure_gen__ProcArgModes_25);
    }
#line 680 "ml_closure_gen.m"
    {
#line 680 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__CodeModel_26 = hlds__code_model__proc_info_interface_code_model_1_f_0(ml_backend__ml_closure_gen__ProcInfo_20);
    }
#line 681 "ml_closure_gen.m"
    {
#line 681 "ml_closure_gen.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ml_backend__ml_closure_gen__ProcInfo_20, &ml_backend__ml_closure_gen__ProcVarSet_27);
    }
#line 4949 "ml_backend.ml_closure_gen.c"
    ml_backend__ml_closure_gen__TypeInfo_139_139 = (MR_Word) &ml_backend__ml_closure_gen_scalar_common_1[0];
#line 682 "ml_closure_gen.m"
    {
#line 682 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__ProcArity_28 = mercury__list__length_1_f_0(ml_backend__ml_closure_gen__TypeInfo_139_139, ml_backend__ml_closure_gen__ProcHeadVars_24);
    }
#line 683 "ml_closure_gen.m"
    {
#line 683 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__ProcHeadVarNames_29 = ml_backend__ml_code_util__ml_gen_var_names_2_f_0(ml_backend__ml_closure_gen__ProcVarSet_27, ml_backend__ml_closure_gen__ProcHeadVars_24);
    }
#line 687 "ml_closure_gen.m"
    {
#line 687 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__ProcBoxedArgTypes_30 = ml_backend__ml_code_util__ml_make_boxed_types_1_f_0(ml_backend__ml_closure_gen__ProcArity_28);
    }
#line 696 "ml_closure_gen.m"
    {
#line 696 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__succeeded = mercury__list__drop_3_p_0(ml_backend__ml_closure_gen__TypeInfo_139_139, ml_backend__ml_closure_gen__NumClosureArgs_13, ml_backend__ml_closure_gen__ProcHeadVars_24, &ml_backend__ml_closure_gen__WrapperHeadVars0_31);
    }
#line 696 "ml_closure_gen.m"
    if (ml_backend__ml_closure_gen__succeeded)
#line 696 "ml_closure_gen.m"
      {
#line 4975 "ml_backend.ml_closure_gen.c"
        ml_backend__ml_closure_gen__TypeCtorInfo_140_140 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 697 "ml_closure_gen.m"
        {
#line 697 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__succeeded = mercury__list__drop_3_p_0(ml_backend__ml_closure_gen__TypeCtorInfo_140_140, ml_backend__ml_closure_gen__NumClosureArgs_13, ml_backend__ml_closure_gen__ProcArgModes_25, &ml_backend__ml_closure_gen__WrapperArgModes0_32);
        }
#line 696 "ml_closure_gen.m"
        if (ml_backend__ml_closure_gen__succeeded)
#line 696 "ml_closure_gen.m"
          {
#line 4986 "ml_backend.ml_closure_gen.c"
            ml_backend__ml_closure_gen__TypeCtorInfo_141_141 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 698 "ml_closure_gen.m"
            {
#line 698 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__succeeded = mercury__list__drop_3_p_0(ml_backend__ml_closure_gen__TypeCtorInfo_141_141, ml_backend__ml_closure_gen__NumClosureArgs_13, ml_backend__ml_closure_gen__ProcArgTypes_22, &ml_backend__ml_closure_gen__WrapperArgTypes0_33);
            }
#line 696 "ml_closure_gen.m"
            if (ml_backend__ml_closure_gen__succeeded)
#line 699 "ml_closure_gen.m"
              {
#line 699 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__succeeded = mercury__list__drop_3_p_0(ml_backend__ml_closure_gen__TypeCtorInfo_141_141, ml_backend__ml_closure_gen__NumClosureArgs_13, ml_backend__ml_closure_gen__ProcBoxedArgTypes_30, &ml_backend__ml_closure_gen__WrapperBoxedArgTypes0_34);
              }
#line 696 "ml_closure_gen.m"
          }
#line 696 "ml_closure_gen.m"
      }
#line 705 "ml_closure_gen.m"
    if (ml_backend__ml_closure_gen__succeeded)
#line 701 "ml_closure_gen.m"
      {
#line 701 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__WrapperHeadVars_35 = ml_backend__ml_closure_gen__WrapperHeadVars0_31;
#line 702 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__WrapperArgModes_36 = ml_backend__ml_closure_gen__WrapperArgModes0_32;
#line 703 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__WrapperArgTypes_37 = ml_backend__ml_closure_gen__WrapperArgTypes0_33;
#line 704 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__WrapperBoxedArgTypes_38 = ml_backend__ml_closure_gen__WrapperBoxedArgTypes0_34;
#line 701 "ml_closure_gen.m"
      }
#line 705 "ml_closure_gen.m"
    else
#line 706 "ml_closure_gen.m"
      {
#line 706 "ml_closure_gen.m"
        {
#line 706 "ml_closure_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_closure_gen", (MR_String) "predicate \140ml_backend.ml_closure_gen.ml_gen_closure_wrapper\'/9", (MR_String) "list.drop failed");
#line 706 "ml_closure_gen.m"
          return;
        }
#line 706 "ml_closure_gen.m"
      }
#line 708 "ml_closure_gen.m"
    {
#line 708 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__V_99_99 = mercury__list__length_1_f_0(ml_backend__ml_closure_gen__TypeInfo_139_139, ml_backend__ml_closure_gen__WrapperHeadVars_35);
    }
#line 708 "ml_closure_gen.m"
    {
#line 708 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__WrapperHeadVarNames_39 = ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_f_0((MR_Integer) 1, ml_backend__ml_closure_gen__V_99_99);
    }
#line 710 "ml_closure_gen.m"
    {
#line 710 "ml_closure_gen.m"
      ml_backend__ml_code_util__ml_gen_params_8_p_0(ml_backend__ml_closure_gen__WrapperHeadVarNames_39, ml_backend__ml_closure_gen__WrapperBoxedArgTypes_38, ml_backend__ml_closure_gen__WrapperArgModes_36, ml_backend__ml_closure_gen__PredOrFunc_23, ml_backend__ml_closure_gen__CodeModel_26, &ml_backend__ml_closure_gen__WrapperParams0_40, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_93, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_100_100);
    }
#line 712 "ml_closure_gen.m"
    ml_backend__ml_closure_gen__WrapperArgs0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__WrapperParams0_40, (MR_Integer) 0)));
#line 712 "ml_closure_gen.m"
    ml_backend__ml_closure_gen__WrapperRetType_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__WrapperParams0_40, (MR_Integer) 1)));
#line 5050 "ml_backend.ml_closure_gen.c"
    ml_backend__ml_closure_gen__TypeCtorInfo_142_142 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0;
#line 721 "ml_closure_gen.m"
    {
#line 721 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__WrapperArgs1_43 = mercury__list__map_2_f_0(ml_backend__ml_closure_gen__TypeCtorInfo_142_142, ml_backend__ml_closure_gen__TypeCtorInfo_142_142, (MR_Word) &ml_backend__ml_closure_gen_scalar_common_2[1], ml_backend__ml_closure_gen__WrapperArgs0_41);
    }
#line 728 "ml_closure_gen.m"
    if ((ml_backend__ml_closure_gen__ClosureKind_12 == (MR_Integer) 2))
#line 725 "ml_closure_gen.m"
      {
#line 726 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__MaybeClosureA_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 727 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__WrapperArgs_45 = ml_backend__ml_closure_gen__WrapperArgs1_43;
#line 727 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__STATE_VARIABLE_Info_106_106 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_100_100;
#line 725 "ml_closure_gen.m"
      }
#line 728 "ml_closure_gen.m"
    else
#line 731 "ml_closure_gen.m"
      {
#line 731 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__ClosureArgDeclType_48;
#line 731 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__ClosureArgGCStatement_49;
#line 731 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__ClosureArg_50;
#line 731 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__V_104_104;
#line 734 "ml_closure_gen.m"
        MR_Box ml_backend__ml_closure_gen__conv1_ClosureArgDeclType_48;

#line 734 "ml_closure_gen.m"
        {
#line 734 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_104_104 = ml_backend__ml_code_util__ml_make_boxed_types_1_f_0((MR_Integer) 1);
        }
#line 734 "ml_closure_gen.m"
        {
#line 734 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__conv1_ClosureArgDeclType_48 = mercury__list__det_head_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ml_backend__ml_closure_gen__V_104_104);
        }
#line 734 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__ClosureArgDeclType_48 = ((MR_Word) ml_backend__ml_closure_gen__conv1_ClosureArgDeclType_48);
#line 735 "ml_closure_gen.m"
        {
#line 735 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__gen_closure_gc_statement_10_p_0((MR_Word) &ml_backend__ml_closure_gen_scalar_common_1[10], ml_backend__ml_closure_gen__ClosureArgDeclType_48, ml_backend__ml_closure_gen__ClosureKind_12, ml_backend__ml_closure_gen__WrapperArgTypes_37, ml_backend__ml_closure_gen__Purity_21, ml_backend__ml_closure_gen__PredOrFunc_23, ml_backend__ml_closure_gen__Context_14, &ml_backend__ml_closure_gen__ClosureArgGCStatement_49, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_100_100, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_106_106);
        }
#line 738 "ml_closure_gen.m"
        {
#line 738 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__ClosureArg_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 738 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__ClosureArg_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_3[1])));
#line 738 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__ClosureArg_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 738 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__ClosureArg_50, 2) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureArgGCStatement_49));
#line 738 "ml_closure_gen.m"
        }
#line 740 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__MaybeClosureA_44 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_3[2]);
#line 741 "ml_closure_gen.m"
        {
#line 741 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__WrapperArgs_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__WrapperArgs_45, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureArg_50));
#line 741 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__WrapperArgs_45, 1) = ((MR_Box) (ml_backend__ml_closure_gen__WrapperArgs1_43));
#line 741 "ml_closure_gen.m"
        }
#line 731 "ml_closure_gen.m"
      }
#line 743 "ml_closure_gen.m"
    {
#line 743 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__WrapperParams_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 743 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__WrapperParams_51, 0) = ((MR_Box) (ml_backend__ml_closure_gen__WrapperArgs_45));
#line 743 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__WrapperParams_51, 1) = ((MR_Box) (ml_backend__ml_closure_gen__WrapperRetType_42));
#line 743 "ml_closure_gen.m"
    }
#line 747 "ml_closure_gen.m"
    {
#line 747 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_p_0(ml_backend__ml_closure_gen__WrapperHeadVarNames_39, ml_backend__ml_closure_gen__WrapperBoxedArgTypes_38, ml_backend__ml_closure_gen__WrapperArgModes_36, ml_backend__ml_closure_gen__PredOrFunc_23, ml_backend__ml_closure_gen__CodeModel_26, ml_backend__ml_closure_gen__Context_14, (MR_Integer) 1, &ml_backend__ml_closure_gen__WrapperHeadVarDecls_52, &ml_backend__ml_closure_gen__WrapperHeadVarLvals_53, &ml_backend__ml_closure_gen__WrapperCopyOutLvals_54, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_106_106, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_111_111);
    }
#line 763 "ml_closure_gen.m"
    {
#line 763 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__MLDS_Context_55 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_closure_gen__Context_14);
    }
#line 889 "ml_closure_gen.m"
    {
#line 889 "ml_closure_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_closure_gen__ModuleInfo_18, &ml_backend__ml_closure_gen__Globals_67);
    }
#line 798 "ml_closure_gen.m"
    if ((ml_backend__ml_closure_gen__CodeModel_26 == (MR_Integer) 0))
#line 797 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__STATE_VARIABLE_Info_121_121 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_111_111;
#line 798 "ml_closure_gen.m"
    else
#line 798 "ml_closure_gen.m"
      if ((ml_backend__ml_closure_gen__CodeModel_26 == (MR_Integer) 2))
#line 801 "ml_closure_gen.m"
        {
#line 801 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__NondetCopyOut_68;
#line 801 "ml_closure_gen.m"
          MR_Word ml_backend__ml_closure_gen__InitialCont_72;

#line 802 "ml_closure_gen.m"
          {
#line 802 "ml_closure_gen.m"
            libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_closure_gen__Globals_67, (MR_Integer) 254, &ml_backend__ml_closure_gen__NondetCopyOut_68);
          }
#line 814 "ml_closure_gen.m"
          if ((ml_backend__ml_closure_gen__NondetCopyOut_68 == (MR_Integer) 0))
#line 815 "ml_closure_gen.m"
            {
#line 816 "ml_closure_gen.m"
              {
#line 816 "ml_closure_gen.m"
                ml_backend__ml_code_util__ml_initial_cont_4_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_111_111, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_closure_gen__InitialCont_72);
              }
#line 815 "ml_closure_gen.m"
            }
#line 814 "ml_closure_gen.m"
          else
#line 804 "ml_closure_gen.m"
            {
#line 804 "ml_closure_gen.m"
              MR_Word ml_backend__ml_closure_gen__TypeCtorInfo_146_146 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0;
#line 804 "ml_closure_gen.m"
              MR_Word ml_backend__ml_closure_gen__TypeCtorInfo_147_147 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 804 "ml_closure_gen.m"
              MR_Word ml_backend__ml_closure_gen__WrapperBoxedVarTypes_69;
#line 804 "ml_closure_gen.m"
              MR_Word ml_backend__ml_closure_gen__WrapperOutputLvals_70;
#line 804 "ml_closure_gen.m"
              MR_Word ml_backend__ml_closure_gen__WrapperOutputTypes_71;

#line 805 "ml_closure_gen.m"
              {
#line 805 "ml_closure_gen.m"
                mercury__map__from_corresponding_lists_3_p_0(ml_backend__ml_closure_gen__TypeCtorInfo_146_146, ml_backend__ml_closure_gen__TypeCtorInfo_147_147, ml_backend__ml_closure_gen__WrapperHeadVarLvals_53, ml_backend__ml_closure_gen__WrapperBoxedArgTypes_38, &ml_backend__ml_closure_gen__WrapperBoxedVarTypes_69);
              }
#line 807 "ml_closure_gen.m"
              {
#line 807 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__WrapperOutputLvals_70 = check_hlds__mode_util__select_output_things_4_f_0(ml_backend__ml_closure_gen__TypeCtorInfo_146_146, ml_backend__ml_closure_gen__ModuleInfo_18, ml_backend__ml_closure_gen__WrapperHeadVarLvals_53, ml_backend__ml_closure_gen__WrapperArgModes_36, ml_backend__ml_closure_gen__WrapperBoxedVarTypes_69);
              }
#line 810 "ml_closure_gen.m"
              {
#line 810 "ml_closure_gen.m"
                ml_backend__ml_closure_gen__WrapperOutputTypes_71 = mercury__map__apply_to_list_2_f_0(ml_backend__ml_closure_gen__TypeCtorInfo_146_146, ml_backend__ml_closure_gen__TypeCtorInfo_147_147, ml_backend__ml_closure_gen__WrapperOutputLvals_70, ml_backend__ml_closure_gen__WrapperBoxedVarTypes_69);
              }
#line 812 "ml_closure_gen.m"
              {
#line 812 "ml_closure_gen.m"
                ml_backend__ml_code_util__ml_initial_cont_4_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_111_111, ml_backend__ml_closure_gen__WrapperOutputLvals_70, ml_backend__ml_closure_gen__WrapperOutputTypes_71, &ml_backend__ml_closure_gen__InitialCont_72);
              }
#line 804 "ml_closure_gen.m"
            }
#line 818 "ml_closure_gen.m"
          {
#line 818 "ml_closure_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(ml_backend__ml_closure_gen__InitialCont_72, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_111_111, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_121_121);
          }
#line 801 "ml_closure_gen.m"
        }
#line 798 "ml_closure_gen.m"
      else
#line 799 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__STATE_VARIABLE_Info_121_121 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_111_111;
#line 5231 "ml_backend.ml_closure_gen.c"
    if ((ml_backend__ml_closure_gen__MaybeClosureA_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5233 "ml_backend.ml_closure_gen.c"
      {
#line 790 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__MaybeClosureB_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 854 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__ClosureArgLvals_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 854 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__STATE_VARIABLE_Info_126_126 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_121_121;
#line 5241 "ml_backend.ml_closure_gen.c"
      }
#line 5243 "ml_backend.ml_closure_gen.c"
    else
#line 5245 "ml_backend.ml_closure_gen.c"
      {
#line 5247 "ml_backend.ml_closure_gen.c"
        MR_Word ml_backend__ml_closure_gen__ClosureArgType1_56;
#line 5249 "ml_backend.ml_closure_gen.c"
        MR_Word ml_backend__ml_closure_gen__ClosureArgName1_57;
#line 5251 "ml_backend.ml_closure_gen.c"
        MR_Word ml_backend__ml_closure_gen__ClosureType_59;
#line 5253 "ml_backend.ml_closure_gen.c"
        MR_Word ml_backend__ml_closure_gen__ClosureDecl_61;
#line 5255 "ml_backend.ml_closure_gen.c"
        MR_Word ml_backend__ml_closure_gen__ClosureArgLval_63;
#line 5257 "ml_backend.ml_closure_gen.c"
        MR_Word ml_backend__ml_closure_gen__InitClosure_64;
#line 5259 "ml_backend.ml_closure_gen.c"
        MR_Word ml_backend__ml_closure_gen__ClosureLval1_73;
#line 5261 "ml_backend.ml_closure_gen.c"
        MR_Integer ml_backend__ml_closure_gen__Offset_74;
#line 5263 "ml_backend.ml_closure_gen.c"
        MR_Tuple ml_backend__ml_closure_gen__V_112_112 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__MaybeClosureA_44, (MR_Integer) 0)));
#line 5265 "ml_backend.ml_closure_gen.c"
        MR_Word ml_backend__ml_closure_gen__V_116_116;
#line 5267 "ml_backend.ml_closure_gen.c"
        MR_Tuple ml_backend__ml_closure_gen__V_117_117;

#line 765 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__ClosureArgType1_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_112_112, (MR_Integer) 0)));
#line 765 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__ClosureArgName1_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_112_112, (MR_Integer) 1)));
#line 767 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__ClosureType_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 779 "ml_closure_gen.m"
        {
#line 779 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__ClosureDecl_61 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_1[12]))), ml_backend__ml_closure_gen__ClosureType_59, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_closure_gen__MLDS_Context_55);
        }
#line 781 "ml_closure_gen.m"
        {
#line 781 "ml_closure_gen.m"
          ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_111_111, (MR_Word) &ml_backend__ml_closure_gen_scalar_common_1[12], ml_backend__ml_closure_gen__ClosureType_59, &ml_backend__ml_closure_gen__ClosureLval1_73);
        }
#line 782 "ml_closure_gen.m"
        {
#line 782 "ml_closure_gen.m"
          ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_111_111, ml_backend__ml_closure_gen__ClosureArgName1_57, ml_backend__ml_closure_gen__ClosureArgType1_56, &ml_backend__ml_closure_gen__ClosureArgLval_63);
        }
#line 784 "ml_closure_gen.m"
        {
#line 784 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 784 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_116_116, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureArgLval_63));
#line 784 "ml_closure_gen.m"
        }
#line 784 "ml_closure_gen.m"
        {
#line 784 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__InitClosure_64 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_closure_gen__ClosureLval1_73, ml_backend__ml_closure_gen__V_116_116, ml_backend__ml_closure_gen__Context_14);
        }
#line 786 "ml_closure_gen.m"
        {
#line 786 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__V_117_117 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 786 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_117_117, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureDecl_61));
#line 786 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_117_117, 1) = ((MR_Box) (ml_backend__ml_closure_gen__InitClosure_64));
#line 786 "ml_closure_gen.m"
        }
#line 786 "ml_closure_gen.m"
        {
#line 786 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__MaybeClosureB_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 786 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__MaybeClosureB_65, 0) = ((MR_Box) (ml_backend__ml_closure_gen__V_117_117));
#line 786 "ml_closure_gen.m"
        }
#line 843 "ml_closure_gen.m"
        if ((ml_backend__ml_closure_gen__ClosureKind_12 == (MR_Integer) 0))
#line 842 "ml_closure_gen.m"
          {
#line 842 "ml_closure_gen.m"
            ml_backend__ml_closure_gen__Offset_74 = ml_backend__ml_code_util__ml_closure_arg_offset_0_f_0();
          }
#line 843 "ml_closure_gen.m"
        else
#line 843 "ml_closure_gen.m"
          if ((ml_backend__ml_closure_gen__ClosureKind_12 == (MR_Integer) 2))
#line 847 "ml_closure_gen.m"
            {
#line 848 "ml_closure_gen.m"
              {
#line 848 "ml_closure_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_closure_gen", (MR_String) "predicate \140ml_backend.ml_closure_gen.ml_gen_closure_wrapper\'/9", (MR_String) "special_pred_closure");
#line 848 "ml_closure_gen.m"
                return;
              }
#line 847 "ml_closure_gen.m"
            }
#line 843 "ml_closure_gen.m"
          else
#line 845 "ml_closure_gen.m"
            {
#line 845 "ml_closure_gen.m"
              ml_backend__ml_closure_gen__Offset_74 = ml_backend__ml_code_util__ml_typeclass_info_arg_offset_0_f_0();
            }
#line 850 "ml_closure_gen.m"
        {
#line 850 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__ml_gen_closure_field_lvals_7_p_0(ml_backend__ml_closure_gen__ClosureLval1_73, ml_backend__ml_closure_gen__Offset_74, (MR_Integer) 1, ml_backend__ml_closure_gen__NumClosureArgs_13, &ml_backend__ml_closure_gen__ClosureArgLvals_75, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_121_121, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_126_126);
        }
#line 5356 "ml_backend.ml_closure_gen.c"
      }
#line 856 "ml_closure_gen.m"
    {
#line 856 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__CallLvals_76 = mercury__list__append_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0, ml_backend__ml_closure_gen__ClosureArgLvals_75, ml_backend__ml_closure_gen__WrapperHeadVarLvals_53);
    }
#line 857 "ml_closure_gen.m"
    {
#line 857 "ml_closure_gen.m"
      ml_backend__ml_call_gen__ml_gen_call_12_p_0(ml_backend__ml_closure_gen__PredId_10, ml_backend__ml_closure_gen__ProcId_11, ml_backend__ml_closure_gen__ProcHeadVarNames_29, ml_backend__ml_closure_gen__CallLvals_76, ml_backend__ml_closure_gen__ProcBoxedArgTypes_30, ml_backend__ml_closure_gen__CodeModel_26, ml_backend__ml_closure_gen__Context_14, (MR_Integer) 1, &ml_backend__ml_closure_gen__Decls0_77, &ml_backend__ml_closure_gen__Statements0_78, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_126_126, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_128_128);
    }
#line 865 "ml_closure_gen.m"
    if ((ml_backend__ml_closure_gen__MaybeClosureB_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 866 "ml_closure_gen.m"
      {
#line 867 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__Decls1_81 = ml_backend__ml_closure_gen__Decls0_77;
#line 868 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__Statements1_82 = ml_backend__ml_closure_gen__Statements0_78;
#line 866 "ml_closure_gen.m"
      }
#line 865 "ml_closure_gen.m"
    else
#line 862 "ml_closure_gen.m"
      {
#line 862 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__ClosureDecl1_79;
#line 862 "ml_closure_gen.m"
        MR_Word ml_backend__ml_closure_gen__InitClosure1_80;
#line 862 "ml_closure_gen.m"
        MR_Tuple ml_backend__ml_closure_gen__V_129_129 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__MaybeClosureB_65, (MR_Integer) 0)));

#line 862 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__ClosureDecl1_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_129_129, (MR_Integer) 0)));
#line 862 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__InitClosure1_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_129_129, (MR_Integer) 1)));
#line 863 "ml_closure_gen.m"
        {
#line 863 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__Decls1_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 863 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Decls1_81, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureDecl1_79));
#line 863 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Decls1_81, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Decls0_77));
#line 863 "ml_closure_gen.m"
        }
#line 864 "ml_closure_gen.m"
        {
#line 864 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__Statements1_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 864 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Statements1_82, 0) = ((MR_Box) (ml_backend__ml_closure_gen__InitClosure1_80));
#line 864 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Statements1_82, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Statements0_78));
#line 864 "ml_closure_gen.m"
        }
#line 862 "ml_closure_gen.m"
      }
#line 891 "ml_closure_gen.m"
    ml_backend__ml_closure_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_closure_gen__MaybeClosureA_44)) == (MR_mktag((MR_Integer) 1)));
#line 891 "ml_closure_gen.m"
    if (ml_backend__ml_closure_gen__succeeded)
#line 891 "ml_closure_gen.m"
      {
#line 891 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__V_130_130 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__MaybeClosureA_44, (MR_Integer) 0)));
#line 891 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__ClosureArgType2_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_130_130, (MR_Integer) 0)));
#line 891 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__ClosureArgName2_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_130_130, (MR_Integer) 1)));
#line 892 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__V_131_131 = (MR_Integer) 6;
#line 892 "ml_closure_gen.m"
        {
#line 892 "ml_closure_gen.m"
          libs__globals__get_gc_method_2_p_0(ml_backend__ml_closure_gen__Globals_67, &ml_backend__ml_closure_gen__V_150_150);
        }
#line 892 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__succeeded = (ml_backend__ml_closure_gen__V_131_131 == ml_backend__ml_closure_gen__V_150_150);
#line 891 "ml_closure_gen.m"
      }
#line 896 "ml_closure_gen.m"
    if (ml_backend__ml_closure_gen__succeeded)
#line 894 "ml_closure_gen.m"
      {
#line 894 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_p_0(ml_backend__ml_closure_gen__ClosureKind_12, ml_backend__ml_closure_gen__ClosureArgName2_87, ml_backend__ml_closure_gen__ClosureArgType2_86, ml_backend__ml_closure_gen__PredId_10, ml_backend__ml_closure_gen__ProcId_11, ml_backend__ml_closure_gen__Context_14, &ml_backend__ml_closure_gen__GC_Decls_88, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_128_128, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_132_132);
      }
#line 896 "ml_closure_gen.m"
    else
#line 897 "ml_closure_gen.m"
      {
#line 897 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__GC_Decls_88 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 897 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__STATE_VARIABLE_Info_132_132 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_128_128;
#line 897 "ml_closure_gen.m"
      }
#line 5455 "ml_backend.ml_closure_gen.c"
    ml_backend__ml_closure_gen__TypeCtorInfo_149_149 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 5457 "ml_backend.ml_closure_gen.c"
    if ((ml_backend__ml_closure_gen__CodeModel_26 == (MR_Integer) 1))
#line 5459 "ml_backend.ml_closure_gen.c"
      {
#line 5461 "ml_backend.ml_closure_gen.c"
        MR_Word ml_backend__ml_closure_gen__SucceededVarDecl_84;

#line 879 "ml_closure_gen.m"
        {
#line 879 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__SucceededVarDecl_84 = ml_backend__ml_code_util__ml_gen_succeeded_var_decl_1_f_0(ml_backend__ml_closure_gen__MLDS_Context_55);
        }
#line 880 "ml_closure_gen.m"
        {
#line 880 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__Decls2_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 880 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Decls2_83, 0) = ((MR_Box) (ml_backend__ml_closure_gen__SucceededVarDecl_84));
#line 880 "ml_closure_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__Decls2_83, 1) = ((MR_Box) (ml_backend__ml_closure_gen__Decls1_81));
#line 880 "ml_closure_gen.m"
        }
#line 884 "ml_closure_gen.m"
        {
#line 884 "ml_closure_gen.m"
          ml_backend__ml_code_util__ml_append_return_statement_6_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_128_128, ml_backend__ml_closure_gen__CodeModel_26, ml_backend__ml_closure_gen__WrapperCopyOutLvals_54, ml_backend__ml_closure_gen__Context_14, ml_backend__ml_closure_gen__Statements1_82, &ml_backend__ml_closure_gen__Statements_85);
        }
#line 910 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__STATE_VARIABLE_Info_134_134 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_132_132;
#line 5486 "ml_backend.ml_closure_gen.c"
      }
#line 5488 "ml_backend.ml_closure_gen.c"
    else
#line 5490 "ml_backend.ml_closure_gen.c"
      {
#line 876 "ml_closure_gen.m"
        ml_backend__ml_closure_gen__Decls2_83 = ml_backend__ml_closure_gen__Decls1_81;
#line 884 "ml_closure_gen.m"
        {
#line 884 "ml_closure_gen.m"
          ml_backend__ml_code_util__ml_append_return_statement_6_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_128_128, ml_backend__ml_closure_gen__CodeModel_26, ml_backend__ml_closure_gen__WrapperCopyOutLvals_54, ml_backend__ml_closure_gen__Context_14, ml_backend__ml_closure_gen__Statements1_82, &ml_backend__ml_closure_gen__Statements_85);
        }
#line 909 "ml_closure_gen.m"
        if ((ml_backend__ml_closure_gen__CodeModel_26 == (MR_Integer) 0))
#line 908 "ml_closure_gen.m"
          ml_backend__ml_closure_gen__STATE_VARIABLE_Info_134_134 = ml_backend__ml_closure_gen__STATE_VARIABLE_Info_132_132;
#line 909 "ml_closure_gen.m"
        else
#line 913 "ml_closure_gen.m"
          {
#line 913 "ml_closure_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_p_0(ml_backend__ml_closure_gen__STATE_VARIABLE_Info_132_132, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_134_134);
          }
#line 5510 "ml_backend.ml_closure_gen.c"
      }
#line 903 "ml_closure_gen.m"
    {
#line 903 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__V_133_133 = mercury__list__f_43_43_2_f_0(ml_backend__ml_closure_gen__TypeCtorInfo_149_149, ml_backend__ml_closure_gen__WrapperHeadVarDecls_52, ml_backend__ml_closure_gen__Decls2_83);
    }
#line 903 "ml_closure_gen.m"
    {
#line 903 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__Decls_89 = mercury__list__f_43_43_2_f_0(ml_backend__ml_closure_gen__TypeCtorInfo_149_149, ml_backend__ml_closure_gen__GC_Decls_88, ml_backend__ml_closure_gen__V_133_133);
    }
#line 917 "ml_closure_gen.m"
    {
#line 917 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__WrapperFuncBody_90 = ml_backend__ml_code_util__ml_gen_block_3_f_0(ml_backend__ml_closure_gen__Decls_89, ml_backend__ml_closure_gen__Statements_85, ml_backend__ml_closure_gen__Context_14);
    }
#line 918 "ml_closure_gen.m"
    {
#line 918 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 918 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_135_135, 0) = ((MR_Box) (ml_backend__ml_closure_gen__WrapperParams_51));
#line 918 "ml_closure_gen.m"
    }
#line 918 "ml_closure_gen.m"
    {
#line 918 "ml_closure_gen.m"
      ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0(ml_backend__ml_closure_gen__V_135_135, &ml_backend__ml_closure_gen__WrapperFuncName_91, ml_backend__ml_closure_gen__WrapperFuncRval_15, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_134_134, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_136_136);
    }
#line 920 "ml_closure_gen.m"
    {
#line 920 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__ml_gen_wrapper_func_7_p_0(ml_backend__ml_closure_gen__WrapperFuncName_91, ml_backend__ml_closure_gen__WrapperParams_51, ml_backend__ml_closure_gen__Context_14, ml_backend__ml_closure_gen__WrapperFuncBody_90, &ml_backend__ml_closure_gen__WrapperFunc_92, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_136_136, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_137_137);
    }
#line 922 "ml_closure_gen.m"
    *ml_backend__ml_closure_gen__WrapperFuncType_16 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_closure_gen__WrapperParams_51);
#line 923 "ml_closure_gen.m"
    {
#line 923 "ml_closure_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_add_closure_wrapper_defn_3_p_0(ml_backend__ml_closure_gen__WrapperFunc_92, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_137_137, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_94);
#line 923 "ml_closure_gen.m"
      return;
    }
#line 671 "ml_closure_gen.m"
  }
#line 59 "ml_closure_gen.m"
}

#line 38 "ml_closure_gen.m"
void MR_CALL 
ml_backend__ml_closure_gen__ml_gen_closure_10_p_0(
#line 38 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__PredId_11,
#line 38 "ml_closure_gen.m"
  MR_Integer ml_backend__ml_closure_gen__ProcId_12,
#line 38 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Var_13,
#line 38 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ArgVars_14,
#line 38 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__ArgModes_15,
#line 38 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__HowToConstruct_16,
#line 38 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__Context_17,
#line 38 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__Statements_18,
#line 38 "ml_closure_gen.m"
  MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_39,
#line 38 "ml_closure_gen.m"
  MR_Word * ml_backend__ml_closure_gen__STATE_VARIABLE_Info_40)
#line 38 "ml_closure_gen.m"
{
#line 110 "ml_closure_gen.m"
  {
#line 110 "ml_closure_gen.m"
    MR_bool ml_backend__ml_closure_gen__succeeded;
#line 110 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ClosureLayoutRval0_20;
#line 110 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ClosureLayoutType0_21;
#line 110 "ml_closure_gen.m"
    MR_Integer ml_backend__ml_closure_gen__NumArgs_22;
#line 110 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__WrapperFuncRval0_23;
#line 110 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__WrapperFuncType0_24;
#line 110 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__NumArgsRval0_25;
#line 110 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__NumArgsRval_27;
#line 110 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__WrapperFuncRval_29;
#line 110 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ClosureLayoutRval_31;
#line 110 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__ExtraArgRvals_33;
#line 110 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_41_41;
#line 110 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__STATE_VARIABLE_Info_43_43;
#line 110 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__V_44_44;
#line 110 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__V_46_46;
#line 110 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__V_47_47;
#line 110 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__V_48_48;
#line 110 "ml_closure_gen.m"
    MR_Word ml_backend__ml_closure_gen__V_49_49;

#line 119 "ml_closure_gen.m"
    {
#line 119 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__ml_gen_closure_layout_7_p_0(ml_backend__ml_closure_gen__PredId_11, ml_backend__ml_closure_gen__ProcId_12, ml_backend__ml_closure_gen__Context_17, &ml_backend__ml_closure_gen__ClosureLayoutRval0_20, &ml_backend__ml_closure_gen__ClosureLayoutType0_21, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_0_39, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_41_41);
    }
#line 130 "ml_closure_gen.m"
    {
#line 130 "ml_closure_gen.m"
      mercury__list__length_2_p_0((MR_Word) &ml_backend__ml_closure_gen_scalar_common_1[0], ml_backend__ml_closure_gen__ArgVars_14, &ml_backend__ml_closure_gen__NumArgs_22);
    }
#line 131 "ml_closure_gen.m"
    {
#line 131 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_p_0(ml_backend__ml_closure_gen__PredId_11, ml_backend__ml_closure_gen__ProcId_12, (MR_Integer) 0, ml_backend__ml_closure_gen__NumArgs_22, ml_backend__ml_closure_gen__Context_17, &ml_backend__ml_closure_gen__WrapperFuncRval0_23, &ml_backend__ml_closure_gen__WrapperFuncType0_24, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_41_41, &ml_backend__ml_closure_gen__STATE_VARIABLE_Info_43_43);
    }
#line 135 "ml_closure_gen.m"
    {
#line 135 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 135 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_closure_gen__V_44_44, 0) = ((MR_Box) (ml_backend__ml_closure_gen__NumArgs_22));
#line 135 "ml_closure_gen.m"
    }
#line 135 "ml_closure_gen.m"
    {
#line 135 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__NumArgsRval0_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 135 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__NumArgsRval0_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 135 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__NumArgsRval0_25, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_44_44));
#line 135 "ml_closure_gen.m"
    }
#line 140 "ml_closure_gen.m"
    {
#line 140 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__NumArgsRval_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 140 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__NumArgsRval_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 140 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__NumArgsRval_27, 1) = ((MR_Box) (&ml_backend__ml_closure_gen_scalar_common_3[0]));
#line 140 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__NumArgsRval_27, 2) = ((MR_Box) (ml_backend__ml_closure_gen__NumArgsRval0_25));
#line 140 "ml_closure_gen.m"
    }
#line 142 "ml_closure_gen.m"
    {
#line 142 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 142 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_46_46, 0) = ((MR_Box) (ml_backend__ml_closure_gen__WrapperFuncType0_24));
#line 142 "ml_closure_gen.m"
    }
#line 142 "ml_closure_gen.m"
    {
#line 142 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__WrapperFuncRval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 142 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__WrapperFuncRval_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 142 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__WrapperFuncRval_29, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_46_46));
#line 142 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__WrapperFuncRval_29, 2) = ((MR_Box) (ml_backend__ml_closure_gen__WrapperFuncRval0_23));
#line 142 "ml_closure_gen.m"
    }
#line 144 "ml_closure_gen.m"
    {
#line 144 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 144 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_closure_gen__V_47_47, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureLayoutType0_21));
#line 144 "ml_closure_gen.m"
    }
#line 144 "ml_closure_gen.m"
    {
#line 144 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__ClosureLayoutRval_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 144 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ClosureLayoutRval_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 144 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ClosureLayoutRval_31, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_47_47));
#line 144 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_closure_gen__ClosureLayoutRval_31, 2) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureLayoutRval0_20));
#line 144 "ml_closure_gen.m"
    }
#line 146 "ml_closure_gen.m"
    {
#line 146 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 146 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_49_49, 0) = ((MR_Box) (ml_backend__ml_closure_gen__NumArgsRval_27));
#line 146 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 146 "ml_closure_gen.m"
    }
#line 146 "ml_closure_gen.m"
    {
#line 146 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 146 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_48_48, 0) = ((MR_Box) (ml_backend__ml_closure_gen__WrapperFuncRval_29));
#line 146 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__V_48_48, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_49_49));
#line 146 "ml_closure_gen.m"
    }
#line 146 "ml_closure_gen.m"
    {
#line 146 "ml_closure_gen.m"
      ml_backend__ml_closure_gen__ExtraArgRvals_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 146 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__ExtraArgRvals_33, 0) = ((MR_Box) (ml_backend__ml_closure_gen__ClosureLayoutRval_31));
#line 146 "ml_closure_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_closure_gen__ExtraArgRvals_33, 1) = ((MR_Box) (ml_backend__ml_closure_gen__V_48_48));
#line 146 "ml_closure_gen.m"
    }
#line 156 "ml_closure_gen.m"
    {
#line 156 "ml_closure_gen.m"
      ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, ml_backend__ml_closure_gen__Var_13, ml_backend__ml_closure_gen__ExtraArgRvals_33, (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_closure_gen_scalar_common_1[9]), ml_backend__ml_closure_gen__ArgVars_14, ml_backend__ml_closure_gen__ArgModes_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_closure_gen__HowToConstruct_16, ml_backend__ml_closure_gen__Context_17, ml_backend__ml_closure_gen__Statements_18, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_43_43, ml_backend__ml_closure_gen__STATE_VARIABLE_Info_40);
#line 156 "ml_closure_gen.m"
      return;
    }
#line 110 "ml_closure_gen.m"
  }
#line 38 "ml_closure_gen.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_closure_gen. */
