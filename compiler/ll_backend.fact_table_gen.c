/*
** Automatically generated from `fact_table_gen.m'
** by the Mercury compiler,
** version rotd-2026-08-26
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


// :- module ll_backend.fact_table_gen.
// :- implementation.

/*
INIT mercury__ll_backend__fact_table_gen__init
ENDINIT
*/

#include "ll_backend.fact_table_gen.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "ll_backend.fact_table_check.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "ll_backend.llds_out.llds_out_data.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_EnumFunctorDesc ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_functor_desc_comparison_kind_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_functor_desc_comparison_kind_0_1;

static const MR_EnumFunctorDescPtr ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_ordinal_ordered_comparison_kind_0[2];

static const MR_EnumFunctorDescPtr ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_name_ordered_comparison_kind_0[2];

static const MR_Integer ll_backend__fact_table_gen__ll_backend__fact_table_gen__functor_number_map_comparison_kind_0[2];

static const MR_EnumFunctorDesc ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_functor_desc_maybe_seen_input_arg_0_0;

static const MR_EnumFunctorDesc ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_functor_desc_maybe_seen_input_arg_0_1;

static const MR_EnumFunctorDescPtr ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_ordinal_ordered_maybe_seen_input_arg_0[2];

static const MR_EnumFunctorDescPtr ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_name_ordered_maybe_seen_input_arg_0[2];

static const MR_Integer ll_backend__fact_table_gen__ll_backend__fact_table_gen__functor_number_map_maybe_seen_input_arg_0[2];

static const MR_DuFunctorDesc ll_backend__fact_table_gen__ll_backend__fact_table_gen__du_functor_desc_maybe_test_keys_0_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table_gen__list__ti_list_1ll_backend__fact_table_check__type_ctor_info_fact_arg_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table_gen__list__ti_list_1ll_backend__fact_table_check__type_ctor_info_fact_table_var_0;

static const MR_PseudoTypeInfo ll_backend__fact_table_gen__ll_backend__fact_table_gen__field_types_maybe_test_keys_0_1[5];

static const MR_DuFunctorDesc ll_backend__fact_table_gen__ll_backend__fact_table_gen__du_functor_desc_maybe_test_keys_0_1;

static const MR_DuFunctorDescPtr ll_backend__fact_table_gen__ll_backend__fact_table_gen__du_stag_ordered_maybe_test_keys_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__fact_table_gen__ll_backend__fact_table_gen__du_stag_ordered_maybe_test_keys_0_1[1];

static const MR_DuPtagLayout ll_backend__fact_table_gen__ll_backend__fact_table_gen__du_ptag_ordered_maybe_test_keys_0[2];

static const MR_DuFunctorDescPtr ll_backend__fact_table_gen__ll_backend__fact_table_gen__du_name_ordered_maybe_test_keys_0[2];

static const MR_Integer ll_backend__fact_table_gen__ll_backend__fact_table_gen__functor_number_map_maybe_test_keys_0[2];

static MR_Word MR_CALL 
ll_backend__fact_table_gen__IntroducedFrom__func__generate_argument_vars_code__1031__1_1_f_0(
  MR_Word LambdaHeadVar__1_33);

static MR_Word MR_CALL 
ll_backend__fact_table_gen__IntroducedFrom__func__generate_argument_vars_code__1027__1_1_f_0(
  MR_Word LambdaHeadVar__1_30);

static MR_Word MR_CALL 
ll_backend__fact_table_gen__IntroducedFrom__func__fact_table_generate_c_code_for_proc__115__1_1_f_0(
  MR_Word LambdaHeadVar__1_45);

static MR_Word MR_CALL 
ll_backend__fact_table_gen__IntroducedFrom__func__fact_table_generate_c_code_for_proc__111__1_1_f_0(
  MR_Word LambdaHeadVar__1_42);

static void MR_CALL 
ll_backend__fact_table_gen____Compare____maybe_test_keys_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table_gen____Unify____maybe_test_keys_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table_gen____Compare____maybe_seen_input_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table_gen____Unify____maybe_seen_input_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__fact_table_gen____Compare____comparison_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__fact_table_gen____Unify____comparison_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
ll_backend__fact_table_gen__fact_table_generate_c_code_for_proc_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__fact_table_gen__fact_table_generate_c_code_for_proc_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__fact_table_gen__generate_semidet_in_out_code_6_p_0(
  MR_Integer FactTableArraySize_7,
  MR_String PredName_8,
  MR_Integer ProcId_9,
  MR_Word Types_10,
  MR_Word FactTableVars_11,
  MR_String * ProcCode_12);

static void MR_CALL 
ll_backend__fact_table_gen__generate_semidet_all_in_code_6_p_0(
  MR_Integer FactTableArraySize_7,
  MR_String PredName_8,
  MR_Integer ProcId_9,
  MR_Word Types_10,
  MR_Word FactTableVars_11,
  MR_String * ProcCode_12);

static void MR_CALL 
ll_backend__fact_table_gen__generate_secondary_nondet_code_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Integer FactTableArraySize_10,
  MR_String PredName_11,
  MR_Integer ProcId_12,
  MR_Word Types_13,
  MR_Word FactTableVars_14,
  MR_String * ProcCode_15,
  MR_String * ExtraCode_16);

static void MR_CALL 
ll_backend__fact_table_gen__generate_primary_nondet_code_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Integer FactTableArraySize_10,
  MR_String PredName_11,
  MR_Integer ProcId_12,
  MR_Word Types_13,
  MR_Word FactTableVars_14,
  MR_String * ProcCode_15,
  MR_String * ExtraCode_16);

static void MR_CALL 
ll_backend__fact_table_gen__generate_fact_test_code_5_p_0(
  MR_Integer FactTableArraySize_6,
  MR_String PredName_7,
  MR_Word Types_8,
  MR_Word FactTableVars_9,
  MR_String * FactTestCode_10);

static void MR_CALL 
ll_backend__fact_table_gen__generate_hash_code_8_p_0(
  MR_Integer FactTableArraySize_1,
  MR_String PredName_2,
  MR_String LabelName_3,
  MR_Integer LabelNum_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Integer ArgNum_7,
  MR_String * HeadVar__8_8);

static void MR_CALL 
ll_backend__fact_table_gen__generate_hash_string_code_9_p_0(
  MR_Integer FactTableArraySize_10,
  MR_String PredName_11,
  MR_String VarName_12,
  MR_String LabelName_13,
  MR_Integer LabelNum_14,
  MR_Word Types_15,
  MR_Word FactTableVars_16,
  MR_Integer ArgNum_17,
  MR_String * Code_18);

static void MR_CALL 
ll_backend__fact_table_gen__generate_hash_int_code_9_p_0(
  MR_Integer FactTableArraySize_10,
  MR_String PredName_11,
  MR_String VarName_12,
  MR_String LabelName_13,
  MR_Integer LabelNum_14,
  MR_Word Types_15,
  MR_Word FactTableVars_16,
  MR_Integer ArgNum_17,
  MR_String * Code_18);

static void MR_CALL 
ll_backend__fact_table_gen__generate_hash_lookup_code_7_p_0(
  MR_String VarName_8,
  MR_String LabelName_9,
  MR_Integer LabelNum_10,
  MR_Word ComparisonKind_11,
  MR_Char KeyType_12,
  MR_Word TestKeys_13,
  MR_String * HashLookupCode_14);

static void MR_CALL 
ll_backend__fact_table_gen__generate_test_condition_code_7_p_0(
  MR_Integer FactTableArraySize_1,
  MR_String FactTableName_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer ArgNum_5,
  MR_Word STATE_VARIABLE_IsFirstInputArg_0_6,
  MR_String * HeadVar__7_7);

static void MR_CALL 
ll_backend__fact_table_gen__generate_decl_code_3_p_0(
  MR_String Name_4,
  MR_Integer ProcId_5,
  MR_String * DeclCode_6);

static void MR_CALL 
ll_backend__fact_table_gen__generate_cc_multi_code_loop_5_p_0(
  MR_String StructName_1,
  MR_Word HeadVar__2_2,
  MR_Integer ArgNum_3,
  MR_String STATE_VARIABLE_ProcCode_0_4,
  MR_String * STATE_VARIABLE_ProcCode_5);

static void MR_CALL 
ll_backend__fact_table_gen__generate_multi_code_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Integer FactTableArraySize_10,
  MR_String PredName_11,
  MR_Integer ProcId_12,
  MR_Word Types_13,
  MR_Word FactTableVars_14,
  MR_String * ProcCode_15,
  MR_String * ExtraCode_16);

static MR_Box MR_CALL 
ll_backend__fact_table_gen__generate_argument_vars_code_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__fact_table_gen__generate_argument_vars_code_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__fact_table_gen__generate_argument_vars_code_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word FactArgTypes_11,
  MR_Word FactTableVars_12,
  MR_String * DeclCode_13,
  MR_String * InputCode_14,
  MR_String * OutputCode_15,
  MR_String * SaveRegsCode_16,
  MR_String * GetRegsCode_17,
  MR_Integer * NumInputArgs_18);

static void MR_CALL 
ll_backend__fact_table_gen__generate_argument_vars_code_loop_10_p_0(
  MR_Word Types_11,
  MR_Word FactTableVars_12,
  MR_Word ArgInfos_13,
  MR_String * DeclCode_14,
  MR_String * InputCode_15,
  MR_String * OutputCode_16,
  MR_String * SaveRegsCode_17,
  MR_String * GetRegsCode_18,
  MR_Integer STATE_VARIABLE_NumInputArgs_0_42,
  MR_Integer * STATE_VARIABLE_NumInputArgs_43);

static void MR_CALL 
ll_backend__fact_table_gen__generate_arg_input_code_7_p_0(
  MR_String Name_8,
  MR_Word Type_9,
  MR_Word ArgLoc_10,
  MR_Integer FrameVarNum_11,
  MR_String * InputCode_12,
  MR_String * SaveRegCode_13,
  MR_String * GetRegCode_14);

static void MR_CALL 
ll_backend__fact_table_gen__generate_fact_lookup_code_6_p_0(
  MR_Integer FactTableArraySize_1,
  MR_String PredName_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer ArgNum_5,
  MR_String * HeadVar__6_6);

static void MR_CALL 
ll_backend__fact_table_gen__generate_nondet_proc_code_5_p_0(
  MR_String PredName_6,
  MR_Integer ProcId_7,
  MR_Word FactTableVars_8,
  MR_String * ExtraCodeLabel_9,
  MR_String * ProcCode_10);

static void MR_CALL 
ll_backend__fact_table_gen__fact_table_vars_to_names_string_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__fact_table_gen____Unify____comparison_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_gen____Compare____comparison_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table_gen____Unify____maybe_seen_input_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_gen____Compare____maybe_seen_input_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__fact_table_gen____Unify____maybe_test_keys_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__fact_table_gen____Compare____maybe_test_keys_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__fact_table_gen_scalar_common_1[2][2];

static /* final */ const MR_Box ll_backend__fact_table_gen_scalar_common_2[1][1];

static /* final */ const MR_Box ll_backend__fact_table_gen_scalar_common_3[4][5];

static /* final */ const MR_Box ll_backend__fact_table_gen_scalar_common_4[4][3];




static /* final */ const MR_Box ll_backend__fact_table_gen_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_arg_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_var_0))
  },
};

static /* final */ const MR_Box ll_backend__fact_table_gen_scalar_common_2[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box ll_backend__fact_table_gen_scalar_common_3[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_arg_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_var_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_arg_info_0)),
    ((MR_Box) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_arg_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_var_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0))
  },
};

static /* final */ const MR_Box ll_backend__fact_table_gen_scalar_common_4[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ll_backend__fact_table_gen_scalar_common_3[0])),
    ((MR_Box) (ll_backend__fact_table_gen__generate_argument_vars_code_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ll_backend__fact_table_gen_scalar_common_3[1])),
    ((MR_Box) (ll_backend__fact_table_gen__generate_argument_vars_code_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ll_backend__fact_table_gen_scalar_common_3[2])),
    ((MR_Box) (ll_backend__fact_table_gen__fact_table_generate_c_code_for_proc_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ll_backend__fact_table_gen_scalar_common_3[3])),
    ((MR_Box) (ll_backend__fact_table_gen__fact_table_generate_c_code_for_proc_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_functor_desc_comparison_kind_0_0 = {
  (MR_String) "plain_equals",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_functor_desc_comparison_kind_0_1 = {
  (MR_String) "string_equals",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_ordinal_ordered_comparison_kind_0[2] = {
  &ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_functor_desc_comparison_kind_0_0,
  &ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_functor_desc_comparison_kind_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_name_ordered_comparison_kind_0[2] = {
  &ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_functor_desc_comparison_kind_0_0,
  &ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_functor_desc_comparison_kind_0_1
};

static const MR_Integer ll_backend__fact_table_gen__ll_backend__fact_table_gen__functor_number_map_comparison_kind_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table_gen__ll_backend__fact_table_gen__type_ctor_info_comparison_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table_gen____Unify____comparison_kind_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_gen____Compare____comparison_kind_0_0_10001)),
  (MR_String) "ll_backend.fact_table_gen",
  (MR_String) "comparison_kind",
  { ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_name_ordered_comparison_kind_0 },
  { ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_ordinal_ordered_comparison_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table_gen__ll_backend__fact_table_gen__functor_number_map_comparison_kind_0,

};

static const MR_EnumFunctorDesc ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_functor_desc_maybe_seen_input_arg_0_0 = {
  (MR_String) "have_seen_input_arg",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_functor_desc_maybe_seen_input_arg_0_1 = {
  (MR_String) "have_not_seen_input_arg",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_ordinal_ordered_maybe_seen_input_arg_0[2] = {
  &ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_functor_desc_maybe_seen_input_arg_0_0,
  &ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_functor_desc_maybe_seen_input_arg_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_name_ordered_maybe_seen_input_arg_0[2] = {
  &ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_functor_desc_maybe_seen_input_arg_0_1,
  &ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_functor_desc_maybe_seen_input_arg_0_0
};

static const MR_Integer ll_backend__fact_table_gen__ll_backend__fact_table_gen__functor_number_map_maybe_seen_input_arg_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table_gen__ll_backend__fact_table_gen__type_ctor_info_maybe_seen_input_arg_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__fact_table_gen____Unify____maybe_seen_input_arg_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_gen____Compare____maybe_seen_input_arg_0_0_10001)),
  (MR_String) "ll_backend.fact_table_gen",
  (MR_String) "maybe_seen_input_arg",
  { ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_name_ordered_maybe_seen_input_arg_0 },
  { ll_backend__fact_table_gen__ll_backend__fact_table_gen__enum_ordinal_ordered_maybe_seen_input_arg_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table_gen__ll_backend__fact_table_gen__functor_number_map_maybe_seen_input_arg_0,

};

static const MR_DuFunctorDesc ll_backend__fact_table_gen__ll_backend__fact_table_gen__du_functor_desc_maybe_test_keys_0_0 = {
  (MR_String) "do_not_test_keys",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table_gen__list__ti_list_1ll_backend__fact_table_check__type_ctor_info_fact_arg_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_arg_type_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__fact_table_gen__list__ti_list_1ll_backend__fact_table_check__type_ctor_info_fact_table_var_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_var_0) }
};

static const MR_PseudoTypeInfo ll_backend__fact_table_gen__ll_backend__fact_table_gen__field_types_maybe_test_keys_0_1[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table_gen__list__ti_list_1ll_backend__fact_table_check__type_ctor_info_fact_arg_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__fact_table_gen__list__ti_list_1ll_backend__fact_table_check__type_ctor_info_fact_table_var_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc ll_backend__fact_table_gen__ll_backend__fact_table_gen__du_functor_desc_maybe_test_keys_0_1 = {
  (MR_String) "test_keys",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__fact_table_gen__ll_backend__fact_table_gen__field_types_maybe_test_keys_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_gen__ll_backend__fact_table_gen__du_stag_ordered_maybe_test_keys_0_0[1] = { &ll_backend__fact_table_gen__ll_backend__fact_table_gen__du_functor_desc_maybe_test_keys_0_0 };

static const MR_DuFunctorDescPtr ll_backend__fact_table_gen__ll_backend__fact_table_gen__du_stag_ordered_maybe_test_keys_0_1[1] = { &ll_backend__fact_table_gen__ll_backend__fact_table_gen__du_functor_desc_maybe_test_keys_0_1 };

static const MR_DuPtagLayout ll_backend__fact_table_gen__ll_backend__fact_table_gen__du_ptag_ordered_maybe_test_keys_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__fact_table_gen__ll_backend__fact_table_gen__du_stag_ordered_maybe_test_keys_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__fact_table_gen__ll_backend__fact_table_gen__du_stag_ordered_maybe_test_keys_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__fact_table_gen__ll_backend__fact_table_gen__du_name_ordered_maybe_test_keys_0[2] = {
  &ll_backend__fact_table_gen__ll_backend__fact_table_gen__du_functor_desc_maybe_test_keys_0_0,
  &ll_backend__fact_table_gen__ll_backend__fact_table_gen__du_functor_desc_maybe_test_keys_0_1
};

static const MR_Integer ll_backend__fact_table_gen__ll_backend__fact_table_gen__functor_number_map_maybe_test_keys_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__fact_table_gen__ll_backend__fact_table_gen__type_ctor_info_maybe_test_keys_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__fact_table_gen____Unify____maybe_test_keys_0_0_10001)),
  ((MR_Box) (ll_backend__fact_table_gen____Compare____maybe_test_keys_0_0_10001)),
  (MR_String) "ll_backend.fact_table_gen",
  (MR_String) "maybe_test_keys",
  { ll_backend__fact_table_gen__ll_backend__fact_table_gen__du_name_ordered_maybe_test_keys_0 },
  { ll_backend__fact_table_gen__ll_backend__fact_table_gen__du_ptag_ordered_maybe_test_keys_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__fact_table_gen__ll_backend__fact_table_gen__functor_number_map_maybe_test_keys_0,

};

static MR_Word MR_CALL 
ll_backend__fact_table_gen__IntroducedFrom__func__generate_argument_vars_code__1031__1_1_f_0(
  MR_Word LambdaHeadVar__1_33)
{
  MR_Word LambdaHeadVar__2_34;
  MR_Word FactTableMode_42 = ((((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_33, 1))) >> 1)) & (MR_Integer) 1);

  switch (FactTableMode_42) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      LambdaHeadVar__2_34 = parse_tree__prog_mode__in_mode_0_f_0();
      break;
    case (MR_Integer) 1:
      LambdaHeadVar__2_34 = parse_tree__prog_mode__out_mode_0_f_0();
      break;
  }
  return LambdaHeadVar__2_34;
}

static MR_Word MR_CALL 
ll_backend__fact_table_gen__IntroducedFrom__func__generate_argument_vars_code__1027__1_1_f_0(
  MR_Word LambdaHeadVar__1_30)
{
  MR_Word LambdaHeadVar__2_31;

  switch (LambdaHeadVar__1_30) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      LambdaHeadVar__2_31 = parse_tree__builtin_lib_types__float_type_0_f_0();
      break;
    case (MR_Integer) 0:
      LambdaHeadVar__2_31 = parse_tree__builtin_lib_types__int_type_0_f_0();
      break;
    case (MR_Integer) 2:
      LambdaHeadVar__2_31 = parse_tree__builtin_lib_types__string_type_0_f_0();
      break;
  }
  return LambdaHeadVar__2_31;
}

static MR_Word MR_CALL 
ll_backend__fact_table_gen__IntroducedFrom__func__fact_table_generate_c_code_for_proc__115__1_1_f_0(
  MR_Word LambdaHeadVar__1_45)
{
  MR_Word LambdaHeadVar__2_46 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_45, 2))));

  return LambdaHeadVar__2_46;
}

static MR_Word MR_CALL 
ll_backend__fact_table_gen__IntroducedFrom__func__fact_table_generate_c_code_for_proc__111__1_1_f_0(
  MR_Word LambdaHeadVar__1_42)
{
  MR_Word LambdaHeadVar__2_43 = ((((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_42, 0))) >> 2)) & (MR_Integer) 3);

  return LambdaHeadVar__2_43;
}

static void MR_CALL 
ll_backend__fact_table_gen____Compare____maybe_test_keys_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 3))));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 4))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 4))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_1[0]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_1[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (ArgX5_16 > ArgY5_17);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 2;
              else
                *HeadVar__1_1 = (MR_Integer) 0;
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table_gen____Unify____maybe_test_keys_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_14 == CastX_13);
  }
  else
  {
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4;
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_String ArgY2_6;
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
    MR_Word ArgY3_8;
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 3))));
    MR_Word ArgY4_10;
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 4))));
    MR_Integer ArgY5_12;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 1))));
      ArgY3_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      ArgY4_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
      ArgY5_12 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 4))));
      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
        if (succeeded)
        {
          TypeInfo_17_17 = (MR_Word) (&ll_backend__fact_table_gen_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&ll_backend__fact_table_gen_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
              succeeded = (ArgX5_11 == ArgY5_12);
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_gen____Compare____maybe_seen_input_arg_0_0(
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
ll_backend__fact_table_gen____Unify____maybe_seen_input_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_gen____Compare____comparison_kind_0_0(
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
ll_backend__fact_table_gen____Unify____comparison_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_Box MR_CALL 
ll_backend__fact_table_gen__fact_table_generate_c_code_for_proc_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_46;

  conv2_LambdaHeadVar__2_46 = ll_backend__fact_table_gen__IntroducedFrom__func__fact_table_generate_c_code_for_proc__115__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_46));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ll_backend__fact_table_gen__fact_table_generate_c_code_for_proc_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_43;

  conv0_LambdaHeadVar__2_43 = ll_backend__fact_table_gen__IntroducedFrom__func__fact_table_generate_c_code_for_proc__111__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_43));
  return wrapper_arg_2;
}

void MR_CALL 
ll_backend__fact_table_gen__fact_table_generate_c_code_for_proc_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word PredSymName_12,
  MR_Integer ProcId_13,
  MR_Integer PrimaryProcId_14,
  MR_Word ProcInfo_15,
  MR_Word GenInfo_16,
  MR_Word * VarSet_17,
  MR_Word * PragmaVars_18,
  MR_String * ProcCode_19,
  MR_String * ExtraCode_20)
{
  MR_bool succeeded;
  MR_Word Globals_21;
  MR_Integer FactTableArraySize_22;
  MR_Word Determinism_23;
  MR_String PredSymNameStr_24;
  MR_Word FactArgInfos_25;
  MR_Word FactTableProcMap_26;
  MR_Word Types_29;
  MR_Word FactTableProcInfo_33;
  MR_Word FactTableVars_34;
  MR_Word ModeClass_35;
  MR_Box conv1_FactTableProcInfo_33;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_21);
  libs__globals__lookup_int_option_3_p_0(Globals_21, (MR_Integer) 666, &FactTableArraySize_22);
  hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(ProcInfo_15, &Determinism_23);
  PredSymNameStr_24 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(PredSymName_12);
  FactArgInfos_25 = ((MR_Word) ((MR_hl_field(0, GenInfo_16, 0))));
  FactTableProcMap_26 = ((MR_Word) ((MR_hl_field(0, GenInfo_16, 1))));
  Types_29 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_arg_info_0), (MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_arg_type_0), (MR_Word) (&ll_backend__fact_table_gen_scalar_common_4[2]), FactArgInfos_25);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_proc_info_0), FactTableProcMap_26, ((MR_Box) (ProcId_13)), &conv1_FactTableProcInfo_33);
  FactTableProcInfo_33 = ((MR_Word) (conv1_FactTableProcInfo_33));
  FactTableVars_34 = ((MR_Word) ((MR_hl_field(0, FactTableProcInfo_33, 0))));
  ModeClass_35 = ((MR_Unsigned) ((MR_hl_field(0, FactTableProcInfo_33, 1))) & (MR_Integer) 3);
  *VarSet_17 = ((MR_Word) ((MR_hl_field(0, FactTableProcInfo_33, 2))));
  *PragmaVars_18 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_var_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), (MR_Word) (&ll_backend__fact_table_gen_scalar_common_4[3]), FactTableVars_34);
  switch (ModeClass_35) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (Determinism_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 0:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          {
            MR_String NamesString_66;
            MR_String Var_72;

            ll_backend__fact_table_gen__fact_table_vars_to_names_string_2_p_0(FactTableVars_34, &NamesString_66);
            Var_72 = mercury__string__f_43_43_2_f_0(NamesString_66, (MR_String) " */");
            *ProcCode_19 = mercury__string__f_43_43_2_f_0((MR_String) "/* ", Var_72);
            *ExtraCode_20 = (MR_String) "";
          }
          break;
        case (MR_Integer) 1:
          {
            ll_backend__fact_table_gen__generate_semidet_all_in_code_6_p_0(FactTableArraySize_22, PredSymNameStr_24, ProcId_13, Types_29, FactTableVars_34, ProcCode_19);
            *ExtraCode_20 = (MR_String) "";
          }
          break;
      }
      break;
    case (MR_Integer) 2:
      switch (Determinism_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 4:
          {
            MR_String StructName_74;
            MR_String Var_82;

            Var_82 = mercury__string__f_43_43_2_f_0(PredSymNameStr_24, (MR_String) "_fact_table");
            StructName_74 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", Var_82);
            ll_backend__fact_table_gen__generate_cc_multi_code_loop_5_p_0(StructName_74, FactTableVars_34, (MR_Integer) 1, (MR_String) "", ProcCode_19);
            *ExtraCode_20 = (MR_String) "";
          }
          break;
        case (MR_Integer) 5:
        case (MR_Integer) 0:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 3:
        case (MR_Integer) 1:
          {
            MR_String NamesString_84;
            MR_String Var_90;

            ll_backend__fact_table_gen__fact_table_vars_to_names_string_2_p_0(FactTableVars_34, &NamesString_84);
            Var_90 = mercury__string__f_43_43_2_f_0(NamesString_84, (MR_String) " */");
            *ProcCode_19 = mercury__string__f_43_43_2_f_0((MR_String) "/* ", Var_90);
            *ExtraCode_20 = (MR_String) "";
          }
          break;
        case (MR_Integer) 2:
          ll_backend__fact_table_gen__generate_multi_code_8_p_0(ModuleInfo_11, FactTableArraySize_22, PredSymNameStr_24, ProcId_13, Types_29, FactTableVars_34, ProcCode_19, ExtraCode_20);
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (Determinism_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 4:
        case (MR_Integer) 0:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 2:
          {
            MR_String NamesString_92;
            MR_String Var_98;

            ll_backend__fact_table_gen__fact_table_vars_to_names_string_2_p_0(FactTableVars_34, &NamesString_92);
            Var_98 = mercury__string__f_43_43_2_f_0(NamesString_92, (MR_String) " */");
            *ProcCode_19 = mercury__string__f_43_43_2_f_0((MR_String) "/* ", Var_98);
            *ExtraCode_20 = (MR_String) "";
          }
          break;
        case (MR_Integer) 5:
        case (MR_Integer) 1:
          {
            ll_backend__fact_table_gen__generate_semidet_in_out_code_6_p_0(FactTableArraySize_22, PredSymNameStr_24, ProcId_13, Types_29, FactTableVars_34, ProcCode_19);
            *ExtraCode_20 = (MR_String) "";
          }
          break;
        case (MR_Integer) 3:
          {
            succeeded = (ProcId_13 == PrimaryProcId_14);
            if (succeeded)
              ll_backend__fact_table_gen__generate_primary_nondet_code_8_p_0(ModuleInfo_11, FactTableArraySize_22, PredSymNameStr_24, ProcId_13, Types_29, FactTableVars_34, ProcCode_19, ExtraCode_20);
            else
              ll_backend__fact_table_gen__generate_secondary_nondet_code_8_p_0(ModuleInfo_11, FactTableArraySize_22, PredSymNameStr_24, ProcId_13, Types_29, FactTableVars_34, ProcCode_19, ExtraCode_20);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__fact_table_gen__generate_semidet_in_out_code_6_p_0(
  MR_Integer FactTableArraySize_7,
  MR_String PredName_8,
  MR_Integer ProcId_9,
  MR_Word Types_10,
  MR_Word FactTableVars_11,
  MR_String * ProcCode_12)
{
  MR_String DeclCode_13;
  MR_Integer ProcIdInt_14;
  MR_String LabelName_15;
  MR_String HashCode_16;
  MR_String SuccessCode_18;
  MR_String FactLookupCode_19;
  MR_String FailCode_21;
  MR_String Var_42;
  MR_String Var_43;
  MR_String Var_44;
  MR_String Var_45;
  MR_String Var_46;
  MR_String Var_48;
  MR_String Var_56;
  MR_String Var_58;
  MR_String Var_61;
  MR_String Var_63;
  MR_String Var_64;
  MR_String Var_66;
  MR_String Var_67;
  MR_Integer ProcIdInt_70;
  MR_String Var_77;
  MR_String Var_84;
  MR_String Var_86;
  MR_String Var_87;

  hlds__pred_proc_id__proc_id_to_int_2_p_0(ProcId_9, &ProcIdInt_70);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), ProcIdInt_70, &Var_77);
  Var_84 = mercury__string__f_43_43_2_f_0(Var_77, (MR_String) "_0;\n\n    ");
  Var_86 = mercury__string__f_43_43_2_f_0((MR_String) "_fact_table_hash_table_", Var_84);
  Var_87 = mercury__string__f_43_43_2_f_0(PredName_8, Var_86);
  DeclCode_13 = mercury__string__f_43_43_2_f_0((MR_String) "\n            MR_Integer hashval, hashsize;\n            MR_Word ind;\n            void *current_table;\n            char keytype = \'\\0\';\n            MR_Word curren" "t_key, tmp;\n\n            // Initialise current_table to the top level hash table\n            // for this ProcId.\n            current_table =\n                &me" "rcury__", Var_87);
  hlds__pred_proc_id__proc_id_to_int_2_p_0(ProcId_9, &ProcIdInt_14);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), ProcIdInt_14, &Var_48);
  Var_56 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_48);
  LabelName_15 = mercury__string__f_43_43_2_f_0(PredName_8, Var_56);
  ll_backend__fact_table_gen__generate_hash_code_8_p_0(FactTableArraySize_7, PredName_8, LabelName_15, (MR_Integer) 0, Types_10, FactTableVars_11, (MR_Integer) 1, &HashCode_16);
  Var_58 = mercury__string__f_43_43_2_f_0(LabelName_15, (MR_String) ":\n            SUCCESS_INDICATOR = MR_TRUE;\n    ");
  SuccessCode_18 = mercury__string__f_43_43_2_f_0((MR_String) "\n        success_code_", Var_58);
  ll_backend__fact_table_gen__generate_fact_lookup_code_6_p_0(FactTableArraySize_7, PredName_8, Types_10, FactTableVars_11, (MR_Integer) 1, &FactLookupCode_19);
  Var_61 = mercury__string__f_43_43_2_f_0(LabelName_15, (MR_String) ":\n            ;\n    ");
  Var_63 = mercury__string__f_43_43_2_f_0((MR_String) ":\n            SUCCESS_INDICATOR = MR_FALSE;\n        skip_", Var_61);
  Var_64 = mercury__string__f_43_43_2_f_0(LabelName_15, Var_63);
  Var_66 = mercury__string__f_43_43_2_f_0((MR_String) ";\n        failure_code_", Var_64);
  Var_67 = mercury__string__f_43_43_2_f_0(LabelName_15, Var_66);
  FailCode_21 = mercury__string__f_43_43_2_f_0((MR_String) "\n            goto skip_", Var_67);
  Var_46 = mercury__string__f_43_43_2_f_0(FailCode_21, (MR_String) "\t}\n");
  Var_45 = mercury__string__f_43_43_2_f_0(FactLookupCode_19, Var_46);
  Var_44 = mercury__string__f_43_43_2_f_0(SuccessCode_18, Var_45);
  Var_43 = mercury__string__f_43_43_2_f_0(HashCode_16, Var_44);
  Var_42 = mercury__string__f_43_43_2_f_0(DeclCode_13, Var_43);
  *ProcCode_12 = mercury__string__f_43_43_2_f_0((MR_String) "\t{\n", Var_42);
}

static void MR_CALL 
ll_backend__fact_table_gen__generate_semidet_all_in_code_6_p_0(
  MR_Integer FactTableArraySize_7,
  MR_String PredName_8,
  MR_Integer ProcId_9,
  MR_Word Types_10,
  MR_Word FactTableVars_11,
  MR_String * ProcCode_12)
{
  MR_String DeclCode_13;
  MR_Integer ProcIdInt_14;
  MR_String LabelName_15;
  MR_String HashCode_16;
  MR_String SuccessCode_18;
  MR_String Var_37;
  MR_String Var_38;
  MR_String Var_39;
  MR_String Var_41;
  MR_String Var_49;
  MR_String Var_51;
  MR_String Var_53;
  MR_String Var_54;
  MR_String Var_56;
  MR_String Var_57;
  MR_String Var_59;
  MR_String Var_60;
  MR_Integer ProcIdInt_63;
  MR_String Var_70;
  MR_String Var_77;
  MR_String Var_79;
  MR_String Var_80;

  hlds__pred_proc_id__proc_id_to_int_2_p_0(ProcId_9, &ProcIdInt_63);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), ProcIdInt_63, &Var_70);
  Var_77 = mercury__string__f_43_43_2_f_0(Var_70, (MR_String) "_0;\n\n    ");
  Var_79 = mercury__string__f_43_43_2_f_0((MR_String) "_fact_table_hash_table_", Var_77);
  Var_80 = mercury__string__f_43_43_2_f_0(PredName_8, Var_79);
  DeclCode_13 = mercury__string__f_43_43_2_f_0((MR_String) "\n            MR_Integer hashval, hashsize;\n            MR_Word ind;\n            void *current_table;\n            char keytype = \'\\0\';\n            MR_Word curren" "t_key, tmp;\n\n            // Initialise current_table to the top level hash table\n            // for this ProcId.\n            current_table =\n                &me" "rcury__", Var_80);
  hlds__pred_proc_id__proc_id_to_int_2_p_0(ProcId_9, &ProcIdInt_14);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), ProcIdInt_14, &Var_41);
  Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_41);
  LabelName_15 = mercury__string__f_43_43_2_f_0(PredName_8, Var_49);
  ll_backend__fact_table_gen__generate_hash_code_8_p_0(FactTableArraySize_7, PredName_8, LabelName_15, (MR_Integer) 0, Types_10, FactTableVars_11, (MR_Integer) 1, &HashCode_16);
  Var_51 = mercury__string__f_43_43_2_f_0(LabelName_15, (MR_String) ":\n            ;\n    ");
  Var_53 = mercury__string__f_43_43_2_f_0((MR_String) ":\n            SUCCESS_INDICATOR = MR_FALSE;\n        skip_", Var_51);
  Var_54 = mercury__string__f_43_43_2_f_0(LabelName_15, Var_53);
  Var_56 = mercury__string__f_43_43_2_f_0((MR_String) ";\n        failure_code_", Var_54);
  Var_57 = mercury__string__f_43_43_2_f_0(LabelName_15, Var_56);
  Var_59 = mercury__string__f_43_43_2_f_0((MR_String) ":\n            SUCCESS_INDICATOR = MR_TRUE;\n            goto skip_", Var_57);
  Var_60 = mercury__string__f_43_43_2_f_0(LabelName_15, Var_59);
  SuccessCode_18 = mercury__string__f_43_43_2_f_0((MR_String) "\n        success_code_", Var_60);
  Var_39 = mercury__string__f_43_43_2_f_0(SuccessCode_18, (MR_String) "\t}\n");
  Var_38 = mercury__string__f_43_43_2_f_0(HashCode_16, Var_39);
  Var_37 = mercury__string__f_43_43_2_f_0(DeclCode_13, Var_38);
  *ProcCode_12 = mercury__string__f_43_43_2_f_0((MR_String) "\t{\n", Var_37);
}

static void MR_CALL 
ll_backend__fact_table_gen__generate_secondary_nondet_code_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Integer FactTableArraySize_10,
  MR_String PredName_11,
  MR_Integer ProcId_12,
  MR_Word Types_13,
  MR_Word FactTableVars_14,
  MR_String * ProcCode_15,
  MR_String * ExtraCode_16)
{
  MR_String ExtraCodeLabel_17;
  MR_String ArgDeclCode_19;
  MR_String InputCode_20;
  MR_String OutputCode_21;
  MR_String DeclCode_25;
  MR_Integer ProcIdInt_26;
  MR_String LabelName_27;
  MR_String LabelName2_28;
  MR_String HashCode_29;
  MR_String StringHashLookupCode_33;
  MR_String IntHashLookupCode_34;
  MR_String FloatHashLookupCode_35;
  MR_String FactLookupCode_36;
  MR_Integer Arity_37;
  MR_String Var_124;
  MR_String Var_132;
  MR_String Var_134;
  MR_String Var_136;
  MR_String Var_137;
  MR_String Var_139;
  MR_String Var_140;
  MR_String Var_142;
  MR_String Var_143;
  MR_String Var_145;
  MR_String Var_146;
  MR_String Var_148;
  MR_String Var_149;
  MR_String Var_151;
  MR_String Var_152;
  MR_String Var_154;
  MR_String Var_155;
  MR_String Var_157;
  MR_String Var_158;
  MR_String Var_160;
  MR_String Var_161;
  MR_String Var_163;
  MR_String Var_164;
  MR_String Var_166;
  MR_String Var_167;
  MR_String Var_169;
  MR_String Var_170;
  MR_String Var_172;
  MR_String Var_173;
  MR_String Var_175;
  MR_String Var_176;
  MR_String Var_178;
  MR_String Var_179;
  MR_String Var_181;
  MR_String Var_182;
  MR_String Var_184;
  MR_String Var_185;
  MR_String Var_187;
  MR_String Var_188;
  MR_String Var_190;
  MR_String Var_191;
  MR_String Var_193;
  MR_String Var_194;
  MR_String Var_196;
  MR_String Var_197;
  MR_String Var_199;
  MR_String Var_200;
  MR_String Var_202;
  MR_String Var_203;
  MR_String Var_210;
  MR_String Var_212;
  MR_String Var_213;
  MR_String Var_215;
  MR_String Var_216;
  MR_String Var_218;
  MR_String Var_219;
  MR_String Var_221;
  MR_String Var_222;
  MR_String Var_224;
  MR_String Var_225;
  MR_String Var_227;
  MR_String Var_228;
  MR_String Var_230;
  MR_String Var_231;
  MR_String _SaveRegsCode_22;
  MR_String _GetRegsCode_23;
  MR_Integer _NumFrameVars_24;

  ll_backend__fact_table_gen__generate_nondet_proc_code_5_p_0(PredName_11, ProcId_12, FactTableVars_14, &ExtraCodeLabel_17, ProcCode_15);
  ll_backend__fact_table_gen__generate_argument_vars_code_9_p_0(ModuleInfo_9, Types_13, FactTableVars_14, &ArgDeclCode_19, &InputCode_20, &OutputCode_21, &_SaveRegsCode_22, &_GetRegsCode_23, &_NumFrameVars_24);
  ll_backend__fact_table_gen__generate_decl_code_3_p_0(PredName_11, ProcId_12, &DeclCode_25);
  hlds__pred_proc_id__proc_id_to_int_2_p_0(ProcId_12, &ProcIdInt_26);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), ProcIdInt_26, &Var_124);
  Var_132 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_124);
  LabelName_27 = mercury__string__f_43_43_2_f_0(PredName_11, Var_132);
  mercury__string__append_3_p_2(LabelName_27, (MR_String) "_2", &LabelName2_28);
  ll_backend__fact_table_gen__generate_hash_code_8_p_0(FactTableArraySize_10, PredName_11, LabelName_27, (MR_Integer) 0, Types_13, FactTableVars_14, (MR_Integer) 1, &HashCode_29);
  ll_backend__fact_table_gen__generate_hash_lookup_code_7_p_0((MR_String) "(char *) MR_framevar(4)", LabelName2_28, (MR_Integer) 0, (MR_Integer) 1, (MR_Char) 115, (MR_Word) ((MR_Unsigned) 0U), &StringHashLookupCode_33);
  ll_backend__fact_table_gen__generate_hash_lookup_code_7_p_0((MR_String) "MR_framevar(4)", LabelName2_28, (MR_Integer) 1, (MR_Integer) 0, (MR_Char) 105, (MR_Word) ((MR_Unsigned) 0U), &IntHashLookupCode_34);
  ll_backend__fact_table_gen__generate_hash_lookup_code_7_p_0((MR_String) "MR_word_to_float(MR_framevar(4))", LabelName2_28, (MR_Integer) 2, (MR_Integer) 0, (MR_Char) 102, (MR_Word) ((MR_Unsigned) 0U), &FloatHashLookupCode_35);
  ll_backend__fact_table_gen__generate_fact_lookup_code_6_p_0(FactTableArraySize_10, PredName_11, Types_13, FactTableVars_14, (MR_Integer) 1, &FactLookupCode_36);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_var_0), FactTableVars_14, &Arity_37);
  Var_134 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, (MR_String) "_module();\n}\n\n    ");
  Var_136 = mercury__string__f_43_43_2_f_0((MR_String) "_module(void) {\n    ", Var_134);
  Var_137 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_136);
  Var_139 = mercury__string__f_43_43_2_f_0((MR_String) "_module(void);\nvoid mercury_sys_init_", Var_137);
  Var_140 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_139);
  Var_142 = mercury__string__f_43_43_2_f_0((MR_String) "_module\n*/\nvoid mercury_sys_init_", Var_140);
  Var_143 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_142);
  Var_145 = mercury__string__f_43_43_2_f_0((MR_String) "_module;\n\n/*\nINIT mercury_sys_init_", Var_143);
  Var_146 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_145);
  Var_148 = mercury__string__f_43_43_2_f_0((MR_String) ":\n        MR_fail();\n    }\nMR_END_MODULE\n\nextern MR_ModuleFunc ", Var_146);
  Var_149 = mercury__string__f_43_43_2_f_0(LabelName2_28, Var_148);
  Var_151 = mercury__string__f_43_43_2_f_0((MR_String) "\n        if (hashval == -1) MR_succeed_discard();\n        MR_framevar(1) = hashval;\n        MR_succeed();\n    failure_code_", Var_149);
  Var_152 = mercury__string__f_43_43_2_f_0(OutputCode_21, Var_151);
  Var_154 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // save output args to registers\n", Var_152);
  Var_155 = mercury__string__f_43_43_2_f_0(FactLookupCode_36, Var_154);
  Var_157 = mercury__string__f_43_43_2_f_0((MR_String) ":\n        // lookup fact table\n", Var_155);
  Var_158 = mercury__string__f_43_43_2_f_0(LabelName2_28, Var_157);
  Var_160 = mercury__string__f_43_43_2_f_0((MR_String) "\n                break;\n            default:\n                MR_fatal_error(\n                    \"fact table hash lookup: nondet stack corrupted\?\");\n        }\n " "   success_code_", Var_158);
  Var_161 = mercury__string__f_43_43_2_f_0(FloatHashLookupCode_35, Var_160);
  Var_163 = mercury__string__f_43_43_2_f_0((MR_String) "\n                break;\n            case \'f\':\n", Var_161);
  Var_164 = mercury__string__f_43_43_2_f_0(IntHashLookupCode_34, Var_163);
  Var_166 = mercury__string__f_43_43_2_f_0((MR_String) "\n                break;\n            case \'i\':\n", Var_164);
  Var_167 = mercury__string__f_43_43_2_f_0(StringHashLookupCode_33, Var_166);
  Var_169 = mercury__string__f_43_43_2_f_0((MR_String) "\n        MR_Integer  hashval = MR_framevar(1);\n        MR_Word     ind;\n        void        *current_table = (void *) MR_framevar(2);\n        char        keytyp" "e = (char) MR_framevar(3);\n\n        // lookup hash table\n        switch(keytype)\n        {\n            case \'s\':\n", Var_167);
  Var_170 = mercury__string__f_43_43_2_f_0(ArgDeclCode_19, Var_169);
  Var_172 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\n    {\n        // create argument vars\n", Var_170);
  Var_173 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_172);
  Var_175 = mercury__string__f_43_43_2_f_0((MR_String) ":\n        MR_fail();\n    }\nMR_define_label(", Var_173);
  Var_176 = mercury__string__f_43_43_2_f_0(LabelName_27, Var_175);
  Var_178 = mercury__string__f_43_43_2_f_0((MR_String) "\n        if (hashval == -1) MR_succeed_discard();\n        MR_framevar(1) = hashval;\n        MR_framevar(2) = (MR_Word) current_table;\n        MR_framevar(3) = (" "MR_Word) keytype;\n        MR_framevar(4) = current_key;\n        MR_succeed();\n    failure_code_", Var_176);
  Var_179 = mercury__string__f_43_43_2_f_0(OutputCode_21, Var_178);
  Var_181 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // save output args to registers\n", Var_179);
  Var_182 = mercury__string__f_43_43_2_f_0(FactLookupCode_36, Var_181);
  Var_184 = mercury__string__f_43_43_2_f_0((MR_String) ":\n        // lookup fact table\n", Var_182);
  Var_185 = mercury__string__f_43_43_2_f_0(LabelName_27, Var_184);
  Var_187 = mercury__string__f_43_43_2_f_0((MR_String) "\n    success_code_", Var_185);
  Var_188 = mercury__string__f_43_43_2_f_0(HashCode_29, Var_187);
  Var_190 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // lookup hash table\n", Var_188);
  Var_191 = mercury__string__f_43_43_2_f_0(InputCode_20, Var_190);
  Var_193 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // copy registers to input arg vars\n", Var_191);
  Var_194 = mercury__string__f_43_43_2_f_0(DeclCode_25, Var_193);
  Var_196 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // declare local variables\n", Var_194);
  Var_197 = mercury__string__f_43_43_2_f_0(ArgDeclCode_19, Var_196);
  Var_199 = mercury__string__f_43_43_2_f_0((MR_String) "_i1));\n    {\n        // create argument vars\n", Var_197);
  Var_200 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_199);
  Var_202 = mercury__string__f_43_43_2_f_0((MR_String) "\", 4, MR_LABEL(", Var_200);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), Arity_37, &Var_203);
  Var_210 = mercury__string__f_43_43_2_f_0(Var_203, Var_202);
  Var_212 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_210);
  Var_213 = mercury__string__f_43_43_2_f_0(PredName_11, Var_212);
  Var_215 = mercury__string__f_43_43_2_f_0((MR_String) ");\n    MR_mkframe(\"", Var_213);
  Var_216 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_215);
  Var_218 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\nMR_BEGIN_CODE\nMR_define_entry(", Var_216);
  Var_219 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_218);
  Var_221 = mercury__string__f_43_43_2_f_0((MR_String) ");\n    MR_init_label(", Var_219);
  Var_222 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_221);
  Var_224 = mercury__string__f_43_43_2_f_0((MR_String) "_module)\n    MR_init_entry(", Var_222);
  Var_225 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_224);
  Var_227 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\n\nMR_BEGIN_MODULE(", Var_225);
  Var_228 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_227);
  Var_230 = mercury__string__f_43_43_2_f_0((MR_String) ");\nMR_declare_label(", Var_228);
  Var_231 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_230);
  *ExtraCode_16 = mercury__string__f_43_43_2_f_0((MR_String) "\n\nMR_define_extern_entry(", Var_231);
}

static void MR_CALL 
ll_backend__fact_table_gen__generate_primary_nondet_code_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Integer FactTableArraySize_10,
  MR_String PredName_11,
  MR_Integer ProcId_12,
  MR_Word Types_13,
  MR_Word FactTableVars_14,
  MR_String * ProcCode_15,
  MR_String * ExtraCode_16)
{
  MR_String ExtraCodeLabel_17;
  MR_String ArgDeclCode_19;
  MR_String InputCode_20;
  MR_String OutputCode_21;
  MR_String SaveRegsCode_22;
  MR_String GetRegsCode_23;
  MR_Integer NumFrameVars_24;
  MR_String DeclCode_25;
  MR_Integer ProcIdInt_26;
  MR_String LabelName_27;
  MR_String HashCode_28;
  MR_String FactLookupCode_29;
  MR_String FactTestCode_30;
  MR_String NumFactsVar_31;
  MR_Integer Arity_32;
  MR_String Var_112;
  MR_String Var_120;
  MR_String Var_122;
  MR_String Var_125;
  MR_String Var_127;
  MR_String Var_128;
  MR_String Var_130;
  MR_String Var_131;
  MR_String Var_133;
  MR_String Var_134;
  MR_String Var_136;
  MR_String Var_137;
  MR_String Var_139;
  MR_String Var_140;
  MR_String Var_142;
  MR_String Var_143;
  MR_String Var_145;
  MR_String Var_146;
  MR_String Var_148;
  MR_String Var_149;
  MR_String Var_151;
  MR_String Var_152;
  MR_String Var_154;
  MR_String Var_155;
  MR_String Var_157;
  MR_String Var_158;
  MR_String Var_160;
  MR_String Var_161;
  MR_String Var_163;
  MR_String Var_164;
  MR_String Var_166;
  MR_String Var_167;
  MR_String Var_169;
  MR_String Var_170;
  MR_String Var_172;
  MR_String Var_173;
  MR_String Var_175;
  MR_String Var_176;
  MR_String Var_178;
  MR_String Var_179;
  MR_String Var_181;
  MR_String Var_182;
  MR_String Var_184;
  MR_String Var_185;
  MR_String Var_187;
  MR_String Var_188;
  MR_String Var_190;
  MR_String Var_191;
  MR_String Var_193;
  MR_String Var_194;
  MR_String Var_201;
  MR_String Var_203;
  MR_String Var_204;
  MR_String Var_211;
  MR_String Var_213;
  MR_String Var_214;
  MR_String Var_216;
  MR_String Var_217;
  MR_String Var_219;
  MR_String Var_220;
  MR_String Var_222;
  MR_String Var_223;
  MR_String Var_225;
  MR_String Var_226;
  MR_String Var_228;
  MR_String Var_229;
  MR_String Var_231;
  MR_String Var_232;

  ll_backend__fact_table_gen__generate_nondet_proc_code_5_p_0(PredName_11, ProcId_12, FactTableVars_14, &ExtraCodeLabel_17, ProcCode_15);
  ll_backend__fact_table_gen__generate_argument_vars_code_9_p_0(ModuleInfo_9, Types_13, FactTableVars_14, &ArgDeclCode_19, &InputCode_20, &OutputCode_21, &SaveRegsCode_22, &GetRegsCode_23, &NumFrameVars_24);
  ll_backend__fact_table_gen__generate_decl_code_3_p_0(PredName_11, ProcId_12, &DeclCode_25);
  hlds__pred_proc_id__proc_id_to_int_2_p_0(ProcId_12, &ProcIdInt_26);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), ProcIdInt_26, &Var_112);
  Var_120 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_112);
  LabelName_27 = mercury__string__f_43_43_2_f_0(PredName_11, Var_120);
  ll_backend__fact_table_gen__generate_hash_code_8_p_0(FactTableArraySize_10, PredName_11, LabelName_27, (MR_Integer) 0, Types_13, FactTableVars_14, (MR_Integer) 1, &HashCode_28);
  ll_backend__fact_table_gen__generate_fact_lookup_code_6_p_0(FactTableArraySize_10, PredName_11, Types_13, FactTableVars_14, (MR_Integer) 1, &FactLookupCode_29);
  ll_backend__fact_table_gen__generate_fact_test_code_5_p_0(FactTableArraySize_10, PredName_11, Types_13, FactTableVars_14, &FactTestCode_30);
  Var_122 = mercury__string__f_43_43_2_f_0(PredName_11, (MR_String) "_fact_table_num_facts");
  NumFactsVar_31 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", Var_122);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_var_0), FactTableVars_14, &Arity_32);
  Var_125 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, (MR_String) "_module();\n}\n\n    ");
  Var_127 = mercury__string__f_43_43_2_f_0((MR_String) "_module(void) {\n    ", Var_125);
  Var_128 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_127);
  Var_130 = mercury__string__f_43_43_2_f_0((MR_String) "_module(void);\nvoid mercury_sys_init_", Var_128);
  Var_131 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_130);
  Var_133 = mercury__string__f_43_43_2_f_0((MR_String) "_module\n*/\nvoid mercury_sys_init_", Var_131);
  Var_134 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_133);
  Var_136 = mercury__string__f_43_43_2_f_0((MR_String) "_module;\n\n/*\nINIT mercury_sys_init_", Var_134);
  Var_137 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_136);
  Var_139 = mercury__string__f_43_43_2_f_0((MR_String) "\n    }\n    MR_framevar(1)++;\n    MR_succeed();\nMR_END_MODULE\n\nextern MR_ModuleFunc ", Var_137);
  Var_140 = mercury__string__f_43_43_2_f_0(OutputCode_21, Var_139);
  Var_142 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // save output args to registers\n", Var_140);
  Var_143 = mercury__string__f_43_43_2_f_0(FactLookupCode_29, Var_142);
  Var_145 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // lookup fact table\n", Var_143);
  Var_146 = mercury__string__f_43_43_2_f_0(FactTestCode_30, Var_145);
  Var_148 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // test fact table entry\n", Var_146);
  Var_149 = mercury__string__f_43_43_2_f_0(InputCode_20, Var_148);
  Var_151 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // copy registers to input arg vars\n", Var_149);
  Var_152 = mercury__string__f_43_43_2_f_0(GetRegsCode_23, Var_151);
  Var_154 = mercury__string__f_43_43_2_f_0((MR_String) "\n        int ind = MR_framevar(1);\n        // copy framevars to registers\n", Var_152);
  Var_155 = mercury__string__f_43_43_2_f_0(ArgDeclCode_19, Var_154);
  Var_157 = mercury__string__f_43_43_2_f_0((MR_String) ")\n        MR_fail();\n    {\n        // create argument vars\n", Var_155);
  Var_158 = mercury__string__f_43_43_2_f_0(NumFactsVar_31, Var_157);
  Var_160 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\n    if (MR_framevar(1) >= ", Var_158);
  Var_161 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_160);
  Var_163 = mercury__string__f_43_43_2_f_0((MR_String) ":\n        MR_fail();\n    }\nMR_define_label(", Var_161);
  Var_164 = mercury__string__f_43_43_2_f_0(LabelName_27, Var_163);
  Var_166 = mercury__string__f_43_43_2_f_0((MR_String) "\n        MR_framevar(1) = ind + 1;\n        MR_succeed();\n    failure_code_", Var_164);
  Var_167 = mercury__string__f_43_43_2_f_0(OutputCode_21, Var_166);
  Var_169 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // save output args to registers\n", Var_167);
  Var_170 = mercury__string__f_43_43_2_f_0(FactLookupCode_29, Var_169);
  Var_172 = mercury__string__f_43_43_2_f_0((MR_String) ":\n        // lookup fact table\n", Var_170);
  Var_173 = mercury__string__f_43_43_2_f_0(LabelName_27, Var_172);
  Var_175 = mercury__string__f_43_43_2_f_0((MR_String) "\n    success_code_", Var_173);
  Var_176 = mercury__string__f_43_43_2_f_0(HashCode_28, Var_175);
  Var_178 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // lookup hash table\n", Var_176);
  Var_179 = mercury__string__f_43_43_2_f_0(SaveRegsCode_22, Var_178);
  Var_181 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // copy registers to framevars\n", Var_179);
  Var_182 = mercury__string__f_43_43_2_f_0(InputCode_20, Var_181);
  Var_184 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // copy registers to input arg vars\n", Var_182);
  Var_185 = mercury__string__f_43_43_2_f_0(DeclCode_25, Var_184);
  Var_187 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // declare local variables\n", Var_185);
  Var_188 = mercury__string__f_43_43_2_f_0(ArgDeclCode_19, Var_187);
  Var_190 = mercury__string__f_43_43_2_f_0((MR_String) "_i1));\n    {\n        // create argument vars\n", Var_188);
  Var_191 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_190);
  Var_193 = mercury__string__f_43_43_2_f_0((MR_String) ", MR_LABEL(", Var_191);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), NumFrameVars_24, &Var_194);
  Var_201 = mercury__string__f_43_43_2_f_0(Var_194, Var_193);
  Var_203 = mercury__string__f_43_43_2_f_0((MR_String) "\", ", Var_201);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), Arity_32, &Var_204);
  Var_211 = mercury__string__f_43_43_2_f_0(Var_204, Var_203);
  Var_213 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_211);
  Var_214 = mercury__string__f_43_43_2_f_0(PredName_11, Var_213);
  Var_216 = mercury__string__f_43_43_2_f_0((MR_String) ");\n    MR_mkframe(\"", Var_214);
  Var_217 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_216);
  Var_219 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\nMR_BEGIN_CODE\nMR_define_entry(", Var_217);
  Var_220 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_219);
  Var_222 = mercury__string__f_43_43_2_f_0((MR_String) ");\n    MR_init_label(", Var_220);
  Var_223 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_222);
  Var_225 = mercury__string__f_43_43_2_f_0((MR_String) "_module)\n    MR_init_entry(", Var_223);
  Var_226 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_225);
  Var_228 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\n\nMR_BEGIN_MODULE(", Var_226);
  Var_229 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_228);
  Var_231 = mercury__string__f_43_43_2_f_0((MR_String) ");\nMR_declare_label(", Var_229);
  Var_232 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_231);
  *ExtraCode_16 = mercury__string__f_43_43_2_f_0((MR_String) "\n\nMR_define_extern_entry(", Var_232);
}

static void MR_CALL 
ll_backend__fact_table_gen__generate_fact_test_code_5_p_0(
  MR_Integer FactTableArraySize_6,
  MR_String PredName_7,
  MR_Word Types_8,
  MR_Word FactTableVars_9,
  MR_String * FactTestCode_10)
{
  MR_String FactTableName_11;
  MR_String CondCode_12;
  MR_String Var_14;
  MR_String Var_19;

  Var_14 = mercury__string__f_43_43_2_f_0(PredName_7, (MR_String) "_fact_table");
  FactTableName_11 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", Var_14);
  ll_backend__fact_table_gen__generate_test_condition_code_7_p_0(FactTableArraySize_6, FactTableName_11, Types_8, FactTableVars_9, (MR_Integer) 1, (MR_Integer) 1, &CondCode_12);
  Var_19 = mercury__string__f_43_43_2_f_0(CondCode_12, (MR_String) "\t\t) MR_fail();\n");
  *FactTestCode_10 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tif(", Var_19);
}

static void MR_CALL 
ll_backend__fact_table_gen__generate_hash_code_8_p_0(
  MR_Integer FactTableArraySize_1,
  MR_String PredName_2,
  MR_String LabelName_3,
  MR_Integer LabelNum_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Integer ArgNum_7,
  MR_String * HeadVar__8_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__8_8 = (MR_String) "";
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_gen.generate_hash_code\'/8", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));

      if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_gen.generate_hash_code\'/8", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word FactTableVar_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
        MR_Word FactTableVars_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
        MR_String VarName_44 = ((MR_String) ((MR_hl_field(0, FactTableVar_40, 0))));
        MR_Word Mode_45 = ((((MR_Unsigned) ((MR_hl_field(0, FactTableVar_40, 1))) >> 1)) & (MR_Integer) 1);
        MR_Integer NextArgNum_48 = (MR_Integer) ((MR_Unsigned) ArgNum_7 + (MR_Unsigned) 1);

        switch (Mode_45) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgCode_49;
              MR_String ArgsCode_50;
              MR_Integer Var_52;

              switch (Var_55) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word TestKeys_56;
                    MR_String HashLookupCode_57;
                    MR_String Var_69;
                    MR_String Var_71;
                    MR_String Var_72;
                    MR_String Var_74;
                    MR_String Var_75;

                    {
                      TestKeys_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, TestKeys_56, 0) = ((MR_Box) (FactTableArraySize_1));
                      MR_hl_field(1, TestKeys_56, 1) = ((MR_Box) (PredName_2));
                      MR_hl_field(1, TestKeys_56, 2) = ((MR_Box) (Var_54));
                      MR_hl_field(1, TestKeys_56, 3) = ((MR_Box) (FactTableVars_41));
                      MR_hl_field(1, TestKeys_56, 4) = ((MR_Box) (NextArgNum_48));
                    }
                    ll_backend__fact_table_gen__generate_hash_lookup_code_7_p_0(VarName_44, LabelName_3, LabelNum_4, (MR_Integer) 0, (MR_Char) 102, TestKeys_56, &HashLookupCode_57);
                    Var_69 = mercury__string__f_43_43_2_f_0(HashLookupCode_57, (MR_String) "\n\n    ");
                    Var_71 = mercury__string__f_43_43_2_f_0((MR_String) ");\n\n        // lookup the hash table\n        ", Var_69);
                    Var_72 = mercury__string__f_43_43_2_f_0(VarName_44, Var_71);
                    Var_74 = mercury__string__f_43_43_2_f_0((MR_String) ");\n        hashval = (hashval >= 0 \? hashval : -hashval) % hashsize;\n\n        current_key = MR_float_to_word(", Var_72);
                    Var_75 = mercury__string__f_43_43_2_f_0(VarName_44, Var_74);
                    ArgCode_49 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n        // calculate hash value for a float\n        hashsize = ((struct MR_fact_table_hash_table_f *) current_table)\n            ->size;\n        hashval = MR_" "hash_float(", Var_75);
                  }
                  break;
                case (MR_Integer) 0:
                  ll_backend__fact_table_gen__generate_hash_int_code_9_p_0(FactTableArraySize_1, PredName_2, VarName_44, LabelName_3, LabelNum_4, Var_54, FactTableVars_41, NextArgNum_48, &ArgCode_49);
                  break;
                case (MR_Integer) 2:
                  ll_backend__fact_table_gen__generate_hash_string_code_9_p_0(FactTableArraySize_1, PredName_2, VarName_44, LabelName_3, LabelNum_4, Var_54, FactTableVars_41, NextArgNum_48, &ArgCode_49);
                  break;
              }
              Var_52 = (MR_Integer) ((MR_Unsigned) LabelNum_4 + (MR_Unsigned) 1);
              ll_backend__fact_table_gen__generate_hash_code_8_p_0(FactTableArraySize_1, PredName_2, LabelName_3, Var_52, Var_54, FactTableVars_41, NextArgNum_48, &ArgsCode_50);
              *HeadVar__8_8 = mercury__string__f_43_43_2_f_0(ArgCode_49, ArgsCode_50);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_HeadVar__5_5 = Var_54;
              MR_Word next_value_of_HeadVar__6_6 = FactTableVars_41;
              MR_Integer next_value_of_ArgNum_7 = NextArgNum_48;

              // direct tailcall eliminated
              ;
              HeadVar__5_5 = next_value_of_HeadVar__5_5;
              HeadVar__6_6 = next_value_of_HeadVar__6_6;
              ArgNum_7 = next_value_of_ArgNum_7;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table_gen__generate_hash_string_code_9_p_0(
  MR_Integer FactTableArraySize_10,
  MR_String PredName_11,
  MR_String VarName_12,
  MR_String LabelName_13,
  MR_Integer LabelNum_14,
  MR_Word Types_15,
  MR_Word FactTableVars_16,
  MR_Integer ArgNum_17,
  MR_String * Code_18)
{
  MR_Word TestKeys_19;
  MR_String HashLookupCode_20;
  MR_String Var_32;
  MR_String Var_34;
  MR_String Var_35;
  MR_String Var_37;
  MR_String Var_38;

  {
    TestKeys_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TestKeys_19, 0) = ((MR_Box) (FactTableArraySize_10));
    MR_hl_field(1, TestKeys_19, 1) = ((MR_Box) (PredName_11));
    MR_hl_field(1, TestKeys_19, 2) = ((MR_Box) (Types_15));
    MR_hl_field(1, TestKeys_19, 3) = ((MR_Box) (FactTableVars_16));
    MR_hl_field(1, TestKeys_19, 4) = ((MR_Box) (ArgNum_17));
  }
  ll_backend__fact_table_gen__generate_hash_lookup_code_7_p_0(VarName_12, LabelName_13, LabelNum_14, (MR_Integer) 1, (MR_Char) 115, TestKeys_19, &HashLookupCode_20);
  Var_32 = mercury__string__f_43_43_2_f_0(HashLookupCode_20, (MR_String) "\n\n    ");
  Var_34 = mercury__string__f_43_43_2_f_0((MR_String) ";\n\n        // lookup the hash table\n        ", Var_32);
  Var_35 = mercury__string__f_43_43_2_f_0(VarName_12, Var_34);
  Var_37 = mercury__string__f_43_43_2_f_0((MR_String) " ; *p != \'\\0\' ; p++) {\n                hashval = (*p + 31 * hashval) % hashsize;\n            }\n        }\n\n        current_key = (MR_Word) ", Var_35);
  Var_38 = mercury__string__f_43_43_2_f_0(VarName_12, Var_37);
  *Code_18 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n        hashsize = ((struct MR_fact_table_hash_table_s *) current_table)->size;\n\n        // calculate hash value for a string\n        {\n            char *p;\n " "           hashval = 0;\n            for (p = ", Var_38);
}

static void MR_CALL 
ll_backend__fact_table_gen__generate_hash_int_code_9_p_0(
  MR_Integer FactTableArraySize_10,
  MR_String PredName_11,
  MR_String VarName_12,
  MR_String LabelName_13,
  MR_Integer LabelNum_14,
  MR_Word Types_15,
  MR_Word FactTableVars_16,
  MR_Integer ArgNum_17,
  MR_String * Code_18)
{
  MR_Word TestKeys_19;
  MR_String HashLookupCode_20;
  MR_String Var_36;
  MR_String Var_38;
  MR_String Var_39;
  MR_String Var_41;
  MR_String Var_42;
  MR_String Var_44;
  MR_String Var_45;
  MR_String Var_47;
  MR_String Var_48;

  {
    TestKeys_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TestKeys_19, 0) = ((MR_Box) (FactTableArraySize_10));
    MR_hl_field(1, TestKeys_19, 1) = ((MR_Box) (PredName_11));
    MR_hl_field(1, TestKeys_19, 2) = ((MR_Box) (Types_15));
    MR_hl_field(1, TestKeys_19, 3) = ((MR_Box) (FactTableVars_16));
    MR_hl_field(1, TestKeys_19, 4) = ((MR_Box) (ArgNum_17));
  }
  ll_backend__fact_table_gen__generate_hash_lookup_code_7_p_0(VarName_12, LabelName_13, LabelNum_14, (MR_Integer) 0, (MR_Char) 105, TestKeys_19, &HashLookupCode_20);
  Var_36 = mercury__string__f_43_43_2_f_0(HashLookupCode_20, (MR_String) "\n\n    ");
  Var_38 = mercury__string__f_43_43_2_f_0((MR_String) ";\n\n        // lookup the hash table\n        ", Var_36);
  Var_39 = mercury__string__f_43_43_2_f_0(VarName_12, Var_38);
  Var_41 = mercury__string__f_43_43_2_f_0((MR_String) ") % hashsize;\n\n        current_key = ", Var_39);
  Var_42 = mercury__string__f_43_43_2_f_0(VarName_12, Var_41);
  Var_44 = mercury__string__f_43_43_2_f_0((MR_String) " : -", Var_42);
  Var_45 = mercury__string__f_43_43_2_f_0(VarName_12, Var_44);
  Var_47 = mercury__string__f_43_43_2_f_0((MR_String) " >= 0 \? ", Var_45);
  Var_48 = mercury__string__f_43_43_2_f_0(VarName_12, Var_47);
  *Code_18 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n        // calculate hash value for an integer\n        hashsize = ((struct MR_fact_table_hash_table_i *) current_table)\n            ->size;\n        hashval = " "(", Var_48);
}

static void MR_CALL 
ll_backend__fact_table_gen__generate_hash_lookup_code_7_p_0(
  MR_String VarName_8,
  MR_String LabelName_9,
  MR_Integer LabelNum_10,
  MR_Word ComparisonKind_11,
  MR_Char KeyType_12,
  MR_Word TestKeys_13,
  MR_String * HashLookupCode_14)
{
  MR_bool succeeded;
  MR_String HashTableEntry_15;
  MR_String HashTableKey_16;
  MR_String CompareString_17;
  MR_String TestCode_26;
  MR_String Var_86;
  MR_String Var_93;
  MR_String Var_110;
  MR_String Var_112;
  MR_String Var_113;
  MR_String Var_115;
  MR_String Var_116;
  MR_String Var_123;
  MR_String Var_125;
  MR_String Var_126;
  MR_String Var_128;
  MR_String Var_129;
  MR_String Var_131;
  MR_String Var_132;
  MR_String Var_139;
  MR_String Var_141;
  MR_String Var_142;
  MR_String Var_144;
  MR_String Var_145;
  MR_String Var_147;
  MR_String Var_148;
  MR_String Var_150;
  MR_String Var_151;
  MR_String Var_158;
  MR_String Var_160;
  MR_String Var_161;
  MR_String Var_163;
  MR_String Var_164;
  MR_String Var_166;
  MR_String Var_167;
  MR_String Var_169;
  MR_String Var_170;

  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), KeyType_12, &Var_86);
  Var_93 = mercury__string__f_43_43_2_f_0(Var_86, (MR_String) " *) current_table)->table[hashval]");
  HashTableEntry_15 = mercury__string__f_43_43_2_f_0((MR_String) "((struct MR_fact_table_hash_table_", Var_93);
  HashTableKey_16 = mercury__string__f_43_43_2_f_0(HashTableEntry_15, (MR_String) ".key");
  switch (ComparisonKind_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Var_102;

        Var_102 = mercury__string__f_43_43_2_f_0((MR_String) " == ", VarName_8);
        CompareString_17 = mercury__string__f_43_43_2_f_0(HashTableKey_16, Var_102);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Var_96;
        MR_String Var_98;
        MR_String Var_99;

        Var_96 = mercury__string__f_43_43_2_f_0(VarName_8, (MR_String) ") == 0");
        Var_98 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_96);
        Var_99 = mercury__string__f_43_43_2_f_0(HashTableKey_16, Var_98);
        CompareString_17 = mercury__string__f_43_43_2_f_0((MR_String) "strcmp(", Var_99);
      }
      break;
  }
  if ((TestKeys_13 == (MR_Word) ((MR_Unsigned) 0U)))
    TestCode_26 = (MR_String) "";
  else
  {
    MR_Integer FactTableArraySize_19 = ((MR_Integer) ((MR_hl_field(1, TestKeys_13, 0))));
    MR_String PredName_20 = ((MR_String) ((MR_hl_field(1, TestKeys_13, 1))));
    MR_Word Types_21 = ((MR_Word) ((MR_hl_field(1, TestKeys_13, 2))));
    MR_Word FactTableVars_22 = ((MR_Word) ((MR_hl_field(1, TestKeys_13, 3))));
    MR_Integer ArgNum_23 = ((MR_Integer) ((MR_hl_field(1, TestKeys_13, 4))));
    MR_String FactTableName_24;
    MR_String CondCode_25;
    MR_String Var_48;

    Var_48 = mercury__string__f_43_43_2_f_0(PredName_20, (MR_String) "_fact_table");
    FactTableName_24 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", Var_48);
    ll_backend__fact_table_gen__generate_test_condition_code_7_p_0(FactTableArraySize_19, FactTableName_24, Types_21, FactTableVars_22, ArgNum_23, (MR_Integer) 1, &CondCode_25);
    succeeded = (strcmp(CondCode_25, (MR_String) "") == 0);
    if (succeeded)
      TestCode_26 = (MR_String) "";
    else
    {
      MR_String Var_104;
      MR_String Var_106;
      MR_String Var_107;

      Var_104 = mercury__string__f_43_43_2_f_0(LabelName_9, (MR_String) ";\n");
      Var_106 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\t) goto failure_code_", Var_104);
      Var_107 = mercury__string__f_43_43_2_f_0(CondCode_25, Var_106);
      TestCode_26 = mercury__string__f_43_43_2_f_0((MR_String) "if (", Var_107);
    }
  }
  Var_110 = mercury__string__f_43_43_2_f_0(LabelName_9, (MR_String) ";\n        }\n\n        current_table = (void *) MR_FACT_TABLE_HASH_POINTER(ind);\n\n    ");
  Var_112 = mercury__string__f_43_43_2_f_0((MR_String) ".next;\n            goto success_code_", Var_110);
  Var_113 = mercury__string__f_43_43_2_f_0(HashTableEntry_15, Var_112);
  Var_115 = mercury__string__f_43_43_2_f_0((MR_String) "\';\n            hashval = ", Var_113);
  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), KeyType_12, &Var_116);
  Var_123 = mercury__string__f_43_43_2_f_0(Var_116, Var_115);
  Var_125 = mercury__string__f_43_43_2_f_0((MR_String) "\n            keytype = \'", Var_123);
  Var_126 = mercury__string__f_43_43_2_f_0(TestCode_26, Var_125);
  Var_128 = mercury__string__f_43_43_2_f_0((MR_String) ") == 1) {\n            ind = MR_FACT_TABLE_HASH_INDEX(ind);\n\n            // check that any remaining input arguments match\n            ", Var_126);
  Var_129 = mercury__string__f_43_43_2_f_0(HashTableEntry_15, Var_128);
  Var_131 = mercury__string__f_43_43_2_f_0((MR_String) ":\n\n        if (MR_FACT_TABLE_HASH_ENTRY_TYPE(", Var_129);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), LabelNum_10, &Var_132);
  Var_139 = mercury__string__f_43_43_2_f_0(Var_132, Var_131);
  Var_141 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_139);
  Var_142 = mercury__string__f_43_43_2_f_0(LabelName_9, Var_141);
  Var_144 = mercury__string__f_43_43_2_f_0((MR_String) ";\n\n    found_", Var_142);
  Var_145 = mercury__string__f_43_43_2_f_0(LabelName_9, Var_144);
  Var_147 = mercury__string__f_43_43_2_f_0((MR_String) ".next) != -1);\n\n        // key not found\n        goto failure_code_", Var_145);
  Var_148 = mercury__string__f_43_43_2_f_0(HashTableEntry_15, Var_147);
  Var_150 = mercury__string__f_43_43_2_f_0((MR_String) ";\n            }\n        } while ((hashval = ", Var_148);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), LabelNum_10, &Var_151);
  Var_158 = mercury__string__f_43_43_2_f_0(Var_151, Var_150);
  Var_160 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_158);
  Var_161 = mercury__string__f_43_43_2_f_0(LabelName_9, Var_160);
  Var_163 = mercury__string__f_43_43_2_f_0((MR_String) ".index;\n                goto found_", Var_161);
  Var_164 = mercury__string__f_43_43_2_f_0(HashTableEntry_15, Var_163);
  Var_166 = mercury__string__f_43_43_2_f_0((MR_String) ") {\n                ind = (MR_Word) ", Var_164);
  Var_167 = mercury__string__f_43_43_2_f_0(CompareString_17, Var_166);
  Var_169 = mercury__string__f_43_43_2_f_0((MR_String) ") != 0 && ", Var_167);
  Var_170 = mercury__string__f_43_43_2_f_0(HashTableEntry_15, Var_169);
  *HashLookupCode_14 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n        do {\n            if (MR_FACT_TABLE_HASH_ENTRY_TYPE(", Var_170);
}

static void MR_CALL 
ll_backend__fact_table_gen__generate_test_condition_code_7_p_0(
  MR_Integer FactTableArraySize_1,
  MR_String FactTableName_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer ArgNum_5,
  MR_Word STATE_VARIABLE_IsFirstInputArg_0_6,
  MR_String * HeadVar__7_7)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__7_7 = (MR_String) "";
    else
    {
      *HeadVar__7_7 = (MR_String) "";
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_gen.generate_test_condition_code\'/7", (MR_String) "too many ArgTypes");
        return;
      }
    }
  else
  {
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Var_74 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = (MR_String) "";
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_gen.generate_test_condition_code\'/7", (MR_String) "too many PragmaVars");
        return;
      }
    }
    else
    {
      MR_Word FactTableVar_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word FactTableVars_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_String Name_37 = ((MR_String) ((MR_hl_field(0, FactTableVar_32, 0))));
      MR_Word Mode_38 = ((((MR_Unsigned) ((MR_hl_field(0, FactTableVar_32, 1))) >> 1)) & (MR_Integer) 1);
      MR_String ArgCondCode_43;
      MR_String ArgsCondCode_44;
      MR_Word STATE_VARIABLE_IsFirstInputArg_1_69;
      MR_Integer Var_70;

      switch (Mode_38) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String ArgCondCode0_42;

            switch (Var_74) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
              case (MR_Integer) 0:
                {
                  MR_String Var_112;
                  MR_String Var_114;
                  MR_String Var_115;
                  MR_String Var_122;
                  MR_String Var_124;
                  MR_String Var_125;
                  MR_String Var_132;
                  MR_String Var_134;
                  MR_String Var_135;
                  MR_String Var_142;
                  MR_String Var_144;

                  Var_112 = mercury__string__f_43_43_2_f_0(Name_37, (MR_String) "\n");
                  Var_114 = mercury__string__f_43_43_2_f_0((MR_String) " != ", Var_112);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), ArgNum_5, &Var_115);
                  Var_122 = mercury__string__f_43_43_2_f_0(Var_115, Var_114);
                  Var_124 = mercury__string__f_43_43_2_f_0((MR_String) "].V_", Var_122);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), FactTableArraySize_1, &Var_125);
                  Var_132 = mercury__string__f_43_43_2_f_0(Var_125, Var_124);
                  Var_134 = mercury__string__f_43_43_2_f_0((MR_String) "][ind%", Var_132);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), FactTableArraySize_1, &Var_135);
                  Var_142 = mercury__string__f_43_43_2_f_0(Var_135, Var_134);
                  Var_144 = mercury__string__f_43_43_2_f_0((MR_String) "[ind/", Var_142);
                  ArgCondCode0_42 = mercury__string__f_43_43_2_f_0(FactTableName_2, Var_144);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String Var_76;
                  MR_String Var_78;
                  MR_String Var_79;
                  MR_String Var_86;
                  MR_String Var_88;
                  MR_String Var_89;
                  MR_String Var_96;
                  MR_String Var_98;
                  MR_String Var_99;
                  MR_String Var_106;
                  MR_String Var_108;
                  MR_String Var_109;

                  Var_76 = mercury__string__f_43_43_2_f_0(Name_37, (MR_String) ") != 0\n");
                  Var_78 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_76);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), ArgNum_5, &Var_79);
                  Var_86 = mercury__string__f_43_43_2_f_0(Var_79, Var_78);
                  Var_88 = mercury__string__f_43_43_2_f_0((MR_String) "].V_", Var_86);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), FactTableArraySize_1, &Var_89);
                  Var_96 = mercury__string__f_43_43_2_f_0(Var_89, Var_88);
                  Var_98 = mercury__string__f_43_43_2_f_0((MR_String) "][ind%", Var_96);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), FactTableArraySize_1, &Var_99);
                  Var_106 = mercury__string__f_43_43_2_f_0(Var_99, Var_98);
                  Var_108 = mercury__string__f_43_43_2_f_0((MR_String) "[ind/", Var_106);
                  Var_109 = mercury__string__f_43_43_2_f_0(FactTableName_2, Var_108);
                  ArgCondCode0_42 = mercury__string__f_43_43_2_f_0((MR_String) "strcmp(", Var_109);
                }
                break;
            }
            switch (STATE_VARIABLE_IsFirstInputArg_0_6) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                ArgCondCode_43 = ArgCondCode0_42;
                break;
              case (MR_Integer) 0:
                ArgCondCode_43 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t|| ", ArgCondCode0_42);
                break;
            }
            STATE_VARIABLE_IsFirstInputArg_1_69 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
          {
            ArgCondCode_43 = (MR_String) "";
            STATE_VARIABLE_IsFirstInputArg_1_69 = STATE_VARIABLE_IsFirstInputArg_0_6;
          }
          break;
      }
      Var_70 = (MR_Integer) ((MR_Unsigned) ArgNum_5 + (MR_Unsigned) 1);
      ll_backend__fact_table_gen__generate_test_condition_code_7_p_0(FactTableArraySize_1, FactTableName_2, Var_73, FactTableVars_33, Var_70, STATE_VARIABLE_IsFirstInputArg_1_69, &ArgsCondCode_44);
      *HeadVar__7_7 = mercury__string__f_43_43_2_f_0(ArgCondCode_43, ArgsCondCode_44);
    }
  }
}

static void MR_CALL 
ll_backend__fact_table_gen__generate_decl_code_3_p_0(
  MR_String Name_4,
  MR_Integer ProcId_5,
  MR_String * DeclCode_6)
{
  MR_Integer ProcIdInt_8;
  MR_String Var_15;
  MR_String Var_22;
  MR_String Var_24;
  MR_String Var_25;

  hlds__pred_proc_id__proc_id_to_int_2_p_0(ProcId_5, &ProcIdInt_8);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), ProcIdInt_8, &Var_15);
  Var_22 = mercury__string__f_43_43_2_f_0(Var_15, (MR_String) "_0;\n\n    ");
  Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "_fact_table_hash_table_", Var_22);
  Var_25 = mercury__string__f_43_43_2_f_0(Name_4, Var_24);
  *DeclCode_6 = mercury__string__f_43_43_2_f_0((MR_String) "\n            MR_Integer hashval, hashsize;\n            MR_Word ind;\n            void *current_table;\n            char keytype = \'\\0\';\n            MR_Word curren" "t_key, tmp;\n\n            // Initialise current_table to the top level hash table\n            // for this ProcId.\n            current_table =\n                &me" "rcury__", Var_25);
}

static void MR_CALL 
ll_backend__fact_table_gen__generate_cc_multi_code_loop_5_p_0(
  MR_String StructName_1,
  MR_Word HeadVar__2_2,
  MR_Integer ArgNum_3,
  MR_String STATE_VARIABLE_ProcCode_0_4,
  MR_String * STATE_VARIABLE_ProcCode_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ProcCode_5 = STATE_VARIABLE_ProcCode_0_4;
    else
    {
      MR_Word FactTableVar_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word FactTableVars_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_String VarName_16 = ((MR_String) ((MR_hl_field(0, FactTableVar_12, 0))));
      MR_String ArgAssignCode_20;
      MR_String STATE_VARIABLE_ProcCode_1_31;
      MR_Integer Var_32;
      MR_String Var_36;
      MR_String Var_43;
      MR_String Var_45;
      MR_String Var_46;
      MR_String Var_48;
      MR_String Var_49;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_ArgNum_3;
      MR_String next_value_of_STATE_VARIABLE_ProcCode_0_4;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), ArgNum_3, &Var_36);
      Var_43 = mercury__string__f_43_43_2_f_0(Var_36, (MR_String) ";\n");
      Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "[0][0].V_", Var_43);
      Var_46 = mercury__string__f_43_43_2_f_0(StructName_1, Var_45);
      Var_48 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_46);
      Var_49 = mercury__string__f_43_43_2_f_0(VarName_16, Var_48);
      ArgAssignCode_20 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_49);
      STATE_VARIABLE_ProcCode_1_31 = mercury__string__f_43_43_2_f_0(STATE_VARIABLE_ProcCode_0_4, ArgAssignCode_20);
      Var_32 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = FactTableVars_13;
      next_value_of_ArgNum_3 = Var_32;
      next_value_of_STATE_VARIABLE_ProcCode_0_4 = STATE_VARIABLE_ProcCode_1_31;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      ArgNum_3 = next_value_of_ArgNum_3;
      STATE_VARIABLE_ProcCode_0_4 = next_value_of_STATE_VARIABLE_ProcCode_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table_gen__generate_multi_code_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Integer FactTableArraySize_10,
  MR_String PredName_11,
  MR_Integer ProcId_12,
  MR_Word Types_13,
  MR_Word FactTableVars_14,
  MR_String * ProcCode_15,
  MR_String * ExtraCode_16)
{
  MR_String ExtraCodeLabel_17;
  MR_String NumFactsVar_19;
  MR_Integer Arity_20;
  MR_String ArgDeclCode_21;
  MR_String OutputCode_23;
  MR_String FactLookupCode_27;
  MR_String Var_76;
  MR_String Var_79;
  MR_String Var_81;
  MR_String Var_82;
  MR_String Var_84;
  MR_String Var_85;
  MR_String Var_87;
  MR_String Var_88;
  MR_String Var_90;
  MR_String Var_91;
  MR_String Var_93;
  MR_String Var_94;
  MR_String Var_96;
  MR_String Var_97;
  MR_String Var_99;
  MR_String Var_100;
  MR_String Var_102;
  MR_String Var_103;
  MR_String Var_105;
  MR_String Var_106;
  MR_String Var_108;
  MR_String Var_109;
  MR_String Var_111;
  MR_String Var_112;
  MR_String Var_114;
  MR_String Var_115;
  MR_String Var_122;
  MR_String Var_124;
  MR_String Var_125;
  MR_String Var_127;
  MR_String Var_128;
  MR_String Var_130;
  MR_String Var_131;
  MR_String Var_133;
  MR_String Var_134;
  MR_String Var_136;
  MR_String Var_137;
  MR_String Var_139;
  MR_String Var_140;
  MR_String Var_142;
  MR_String Var_143;
  MR_String _InputCode_22;
  MR_String Var_24;
  MR_String Var_25;
  MR_Integer Var_26;

  ll_backend__fact_table_gen__generate_nondet_proc_code_5_p_0(PredName_11, ProcId_12, FactTableVars_14, &ExtraCodeLabel_17, ProcCode_15);
  Var_76 = mercury__string__f_43_43_2_f_0(PredName_11, (MR_String) "_fact_table_num_facts");
  NumFactsVar_19 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", Var_76);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_var_0), FactTableVars_14, &Arity_20);
  ll_backend__fact_table_gen__generate_argument_vars_code_9_p_0(ModuleInfo_9, Types_13, FactTableVars_14, &ArgDeclCode_21, &_InputCode_22, &OutputCode_23, &Var_24, &Var_25, &Var_26);
  ll_backend__fact_table_gen__generate_fact_lookup_code_6_p_0(FactTableArraySize_10, PredName_11, Types_13, FactTableVars_14, (MR_Integer) 1, &FactLookupCode_27);
  Var_79 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, (MR_String) "_module();\n}\n\n    ");
  Var_81 = mercury__string__f_43_43_2_f_0((MR_String) "_module(void) {\n    ", Var_79);
  Var_82 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_81);
  Var_84 = mercury__string__f_43_43_2_f_0((MR_String) "_module(void);\nvoid mercury_sys_init_", Var_82);
  Var_85 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_84);
  Var_87 = mercury__string__f_43_43_2_f_0((MR_String) "_module\n*/\nvoid mercury_sys_init_", Var_85);
  Var_88 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_87);
  Var_90 = mercury__string__f_43_43_2_f_0((MR_String) "_module;\n\n/*\nINIT mercury_sys_init_", Var_88);
  Var_91 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_90);
  Var_93 = mercury__string__f_43_43_2_f_0((MR_String) "\n    }\n    MR_framevar(1)++;\n    MR_succeed();\nMR_END_MODULE\n\nextern MR_ModuleFunc ", Var_91);
  Var_94 = mercury__string__f_43_43_2_f_0(OutputCode_23, Var_93);
  Var_96 = mercury__string__f_43_43_2_f_0((MR_String) "\n        // save output args to registers\n", Var_94);
  Var_97 = mercury__string__f_43_43_2_f_0(FactLookupCode_27, Var_96);
  Var_99 = mercury__string__f_43_43_2_f_0((MR_String) "\n        MR_Word ind = MR_framevar(1), tmp;\n        // lookup fact table\n", Var_97);
  Var_100 = mercury__string__f_43_43_2_f_0(ArgDeclCode_21, Var_99);
  Var_102 = mercury__string__f_43_43_2_f_0((MR_String) ") MR_fail();\n    {\n        // declare argument vars\n", Var_100);
  Var_103 = mercury__string__f_43_43_2_f_0(NumFactsVar_19, Var_102);
  Var_105 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\n    if (MR_framevar(1) >= ", Var_103);
  Var_106 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_105);
  Var_108 = mercury__string__f_43_43_2_f_0((MR_String) "_i1));\nMR_define_label(", Var_106);
  Var_109 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_108);
  Var_111 = mercury__string__f_43_43_2_f_0((MR_String) "_i1));\n    MR_framevar(1) = (MR_Integer) 0;\n    MR_GOTO(MR_LABEL(", Var_109);
  Var_112 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_111);
  Var_114 = mercury__string__f_43_43_2_f_0((MR_String) "\", 1, MR_LABEL(", Var_112);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), Arity_20, &Var_115);
  Var_122 = mercury__string__f_43_43_2_f_0(Var_115, Var_114);
  Var_124 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_122);
  Var_125 = mercury__string__f_43_43_2_f_0(PredName_11, Var_124);
  Var_127 = mercury__string__f_43_43_2_f_0((MR_String) ");\n    MR_mkframe(\"", Var_125);
  Var_128 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_127);
  Var_130 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\nMR_BEGIN_CODE\nMR_define_entry(", Var_128);
  Var_131 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_130);
  Var_133 = mercury__string__f_43_43_2_f_0((MR_String) ");\n    MR_init_label(", Var_131);
  Var_134 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_133);
  Var_136 = mercury__string__f_43_43_2_f_0((MR_String) "_module)\n    MR_init_entry(", Var_134);
  Var_137 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_136);
  Var_139 = mercury__string__f_43_43_2_f_0((MR_String) "_i1);\n\nMR_BEGIN_MODULE(", Var_137);
  Var_140 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_139);
  Var_142 = mercury__string__f_43_43_2_f_0((MR_String) ");\nMR_declare_label(", Var_140);
  Var_143 = mercury__string__f_43_43_2_f_0(ExtraCodeLabel_17, Var_142);
  *ExtraCode_16 = mercury__string__f_43_43_2_f_0((MR_String) "\n\nMR_define_extern_entry(", Var_143);
}

static MR_Box MR_CALL 
ll_backend__fact_table_gen__generate_argument_vars_code_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_34;

  conv1_LambdaHeadVar__2_34 = ll_backend__fact_table_gen__IntroducedFrom__func__generate_argument_vars_code__1031__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_34));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ll_backend__fact_table_gen__generate_argument_vars_code_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_31;

  conv0_LambdaHeadVar__2_31 = ll_backend__fact_table_gen__IntroducedFrom__func__generate_argument_vars_code__1027__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_31));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__fact_table_gen__generate_argument_vars_code_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word FactArgTypes_11,
  MR_Word FactTableVars_12,
  MR_String * DeclCode_13,
  MR_String * InputCode_14,
  MR_String * OutputCode_15,
  MR_String * SaveRegsCode_16,
  MR_String * GetRegsCode_17,
  MR_Integer * NumInputArgs_18)
{
  MR_Word Types_19;
  MR_Word Modes_22;
  MR_Word ArgInfos_28;

  Types_19 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_arg_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&ll_backend__fact_table_gen_scalar_common_4[0]), FactArgTypes_11);
  Modes_22 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_var_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&ll_backend__fact_table_gen_scalar_common_4[1]), FactTableVars_12);
  hlds__arg_info__make_standard_arg_infos_5_p_0(ModuleInfo_10, (MR_Integer) 2, Types_19, Modes_22, &ArgInfos_28);
  ll_backend__fact_table_gen__generate_argument_vars_code_loop_10_p_0(FactArgTypes_11, FactTableVars_12, ArgInfos_28, DeclCode_13, InputCode_14, OutputCode_15, SaveRegsCode_16, GetRegsCode_17, (MR_Integer) 1, NumInputArgs_18);
}

static void MR_CALL 
ll_backend__fact_table_gen__generate_argument_vars_code_loop_10_p_0(
  MR_Word Types_11,
  MR_Word FactTableVars_12,
  MR_Word ArgInfos_13,
  MR_String * DeclCode_14,
  MR_String * InputCode_15,
  MR_String * OutputCode_16,
  MR_String * SaveRegsCode_17,
  MR_String * GetRegsCode_18,
  MR_Integer STATE_VARIABLE_NumInputArgs_0_42,
  MR_Integer * STATE_VARIABLE_NumInputArgs_43)
{
  MR_bool succeeded = (Types_11 == (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
  {
    succeeded = (FactTableVars_12 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (ArgInfos_13 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    *DeclCode_14 = (MR_String) "";
    *InputCode_15 = (MR_String) "";
    *OutputCode_16 = (MR_String) "";
    *SaveRegsCode_17 = (MR_String) "";
    *GetRegsCode_18 = (MR_String) "";
    *STATE_VARIABLE_NumInputArgs_43 = STATE_VARIABLE_NumInputArgs_0_42;
  }
  else
  {
    MR_Word Type_20;
    MR_Word TailTypes_21;
    MR_Word FactTableVar_22;
    MR_Word TailFactTableVars_23;
    MR_Word ArgInfo_24;
    MR_Word TailArgInfos_25;

    succeeded = (Types_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Type_20 = ((MR_Word) ((MR_hl_field(1, Types_11, 0))));
      TailTypes_21 = ((MR_Word) ((MR_hl_field(1, Types_11, 1))));
      succeeded = (FactTableVars_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        FactTableVar_22 = ((MR_Word) ((MR_hl_field(1, FactTableVars_12, 0))));
        TailFactTableVars_23 = ((MR_Word) ((MR_hl_field(1, FactTableVars_12, 1))));
        succeeded = (ArgInfos_13 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgInfo_24 = ((MR_Word) ((MR_hl_field(1, ArgInfos_13, 0))));
          TailArgInfos_25 = ((MR_Word) ((MR_hl_field(1, ArgInfos_13, 1))));
        }
      }
    }
    if (succeeded)
    {
      MR_String VarName_26 = ((MR_String) ((MR_hl_field(0, FactTableVar_22, 0))));
      MR_Word Mode_27 = ((((MR_Unsigned) ((MR_hl_field(0, FactTableVar_22, 1))) >> 1)) & (MR_Integer) 1);
      MR_Word Loc_30 = ((MR_Word) ((MR_hl_field(0, ArgInfo_24, 0))));
      MR_String ArgDeclCode_32;
      MR_String ArgInputCode_33;
      MR_String ArgSaveRegsCode_34;
      MR_String ArgGetRegsCode_35;
      MR_String ArgOutputCode_36;
      MR_String ArgsDeclCode_37;
      MR_String ArgsInputCode_38;
      MR_String ArgsOutputCode_39;
      MR_String ArgsSaveRegsCode_40;
      MR_String ArgsGetRegsCode_41;
      MR_Integer STATE_VARIABLE_NumInputArgs_1_44;
      MR_String CType_49;
      MR_String Var_57;
      MR_String Var_59;
      MR_String Var_60;

      switch (Type_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          CType_49 = (MR_String) "MR_Float";
          break;
        case (MR_Integer) 0:
          CType_49 = (MR_String) "MR_Integer";
          break;
        case (MR_Integer) 2:
          CType_49 = (MR_String) "MR_String";
          break;
      }
      Var_57 = mercury__string__f_43_43_2_f_0(VarName_26, (MR_String) ";\n");
      Var_59 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_57);
      Var_60 = mercury__string__f_43_43_2_f_0(CType_49, Var_59);
      ArgDeclCode_32 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_60);
      switch (Mode_27) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_NumInputArgs_1_44 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumInputArgs_0_42 + (MR_Unsigned) 1);
            ll_backend__fact_table_gen__generate_arg_input_code_7_p_0(VarName_26, Type_20, Loc_30, STATE_VARIABLE_NumInputArgs_1_44, &ArgInputCode_33, &ArgSaveRegsCode_34, &ArgGetRegsCode_35);
            ArgOutputCode_36 = (MR_String) "";
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RegType_62 = ((MR_Unsigned) ((MR_hl_field(0, Loc_30, 0))) & (MR_Integer) 1);
            MR_Integer RegNum_63 = ((MR_Integer) ((MR_hl_field(0, Loc_30, 1))));
            MR_String RegName_64;
            MR_String ConvertedName_65;
            MR_String Var_73;
            MR_String Var_75;
            MR_String Var_76;

            RegName_64 = ll_backend__llds_out__llds_out_data__reg_to_string_2_f_0(RegType_62, RegNum_63);
            switch (Type_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word Var_87 = ((MR_Unsigned) ((MR_hl_field(0, Loc_30, 0))) & (MR_Integer) 1);

                  switch (Var_87) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      ConvertedName_65 = VarName_26;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_String Var_82;

                        Var_82 = mercury__string__f_43_43_2_f_0(VarName_26, (MR_String) ")");
                        ConvertedName_65 = mercury__string__f_43_43_2_f_0((MR_String) "MR_float_to_word(", Var_82);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 0:
                ConvertedName_65 = VarName_26;
                break;
              case (MR_Integer) 2:
                ConvertedName_65 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_Word) ", VarName_26);
                break;
            }
            Var_73 = mercury__string__f_43_43_2_f_0(ConvertedName_65, (MR_String) ";\n");
            Var_75 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_73);
            Var_76 = mercury__string__f_43_43_2_f_0(RegName_64, Var_75);
            ArgOutputCode_36 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_76);
            ArgInputCode_33 = (MR_String) "";
            ArgSaveRegsCode_34 = (MR_String) "";
            ArgGetRegsCode_35 = (MR_String) "";
            STATE_VARIABLE_NumInputArgs_1_44 = STATE_VARIABLE_NumInputArgs_0_42;
          }
          break;
      }
      ll_backend__fact_table_gen__generate_argument_vars_code_loop_10_p_0(TailTypes_21, TailFactTableVars_23, TailArgInfos_25, &ArgsDeclCode_37, &ArgsInputCode_38, &ArgsOutputCode_39, &ArgsSaveRegsCode_40, &ArgsGetRegsCode_41, STATE_VARIABLE_NumInputArgs_1_44, STATE_VARIABLE_NumInputArgs_43);
      *DeclCode_14 = mercury__string__f_43_43_2_f_0(ArgDeclCode_32, ArgsDeclCode_37);
      *InputCode_15 = mercury__string__f_43_43_2_f_0(ArgInputCode_33, ArgsInputCode_38);
      *OutputCode_16 = mercury__string__f_43_43_2_f_0(ArgOutputCode_36, ArgsOutputCode_39);
      *SaveRegsCode_17 = mercury__string__f_43_43_2_f_0(ArgSaveRegsCode_34, ArgsSaveRegsCode_40);
      *GetRegsCode_18 = mercury__string__f_43_43_2_f_0(ArgGetRegsCode_35, ArgsGetRegsCode_41);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_gen.generate_argument_vars_code_loop\'/10", (MR_String) "list length mismatch");
        return;
      }
  }
}

static void MR_CALL 
ll_backend__fact_table_gen__generate_arg_input_code_7_p_0(
  MR_String Name_8,
  MR_Word Type_9,
  MR_Word ArgLoc_10,
  MR_Integer FrameVarNum_11,
  MR_String * InputCode_12,
  MR_String * SaveRegCode_13,
  MR_String * GetRegCode_14)
{
  MR_Word RegType_15 = ((MR_Unsigned) ((MR_hl_field(0, ArgLoc_10, 0))) & (MR_Integer) 1);
  MR_Integer RegNum_16 = ((MR_Integer) ((MR_hl_field(0, ArgLoc_10, 1))));
  MR_String ConvertToFrameVar_17;
  MR_String ConvertFromFrameVar_18;
  MR_String RegNameStr_19;
  MR_String ConvertedRegNameStr_20;
  MR_String Var_44;
  MR_String Var_46;
  MR_String Var_47;
  MR_String Var_50;
  MR_String Var_52;
  MR_String Var_53;
  MR_String Var_55;
  MR_String Var_56;
  MR_String Var_63;
  MR_String Var_66;
  MR_String Var_73;
  MR_String Var_75;
  MR_String Var_76;
  MR_String Var_78;
  MR_String Var_79;

  switch (RegType_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        ConvertToFrameVar_17 = (MR_String) "MR_float_to_word";
        ConvertFromFrameVar_18 = (MR_String) "MR_word_to_float";
      }
      break;
    case (MR_Integer) 0:
      {
        ConvertToFrameVar_17 = (MR_String) "";
        ConvertFromFrameVar_18 = (MR_String) "";
      }
      break;
  }
  RegNameStr_19 = ll_backend__llds_out__llds_out_data__reg_to_string_2_f_0(RegType_15, RegNum_16);
  switch (Type_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_90 = ((MR_Unsigned) ((MR_hl_field(0, ArgLoc_10, 0))) & (MR_Integer) 1);

        switch (Var_90) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            ConvertedRegNameStr_20 = RegNameStr_19;
            break;
          case (MR_Integer) 0:
            {
              MR_String Var_85;

              Var_85 = mercury__string__f_43_43_2_f_0(RegNameStr_19, (MR_String) ")");
              ConvertedRegNameStr_20 = mercury__string__f_43_43_2_f_0((MR_String) "MR_word_to_float(", Var_85);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 0:
      ConvertedRegNameStr_20 = RegNameStr_19;
      break;
    case (MR_Integer) 2:
      ConvertedRegNameStr_20 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_String) ", RegNameStr_19);
      break;
  }
  Var_44 = mercury__string__f_43_43_2_f_0(ConvertedRegNameStr_20, (MR_String) ";\n");
  Var_46 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_44);
  Var_47 = mercury__string__f_43_43_2_f_0(Name_8, Var_46);
  *InputCode_12 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_47);
  Var_50 = mercury__string__f_43_43_2_f_0(RegNameStr_19, (MR_String) ");\n");
  Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_50);
  Var_53 = mercury__string__f_43_43_2_f_0(ConvertToFrameVar_17, Var_52);
  Var_55 = mercury__string__f_43_43_2_f_0((MR_String) ") = ", Var_53);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), FrameVarNum_11, &Var_56);
  Var_63 = mercury__string__f_43_43_2_f_0(Var_56, Var_55);
  *SaveRegCode_13 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_framevar(", Var_63);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), FrameVarNum_11, &Var_66);
  Var_73 = mercury__string__f_43_43_2_f_0(Var_66, (MR_String) "));\n");
  Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "(MR_framevar(", Var_73);
  Var_76 = mercury__string__f_43_43_2_f_0(ConvertFromFrameVar_18, Var_75);
  Var_78 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_76);
  Var_79 = mercury__string__f_43_43_2_f_0(RegNameStr_19, Var_78);
  *GetRegCode_14 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_79);
}

static void MR_CALL 
ll_backend__fact_table_gen__generate_fact_lookup_code_6_p_0(
  MR_Integer FactTableArraySize_1,
  MR_String PredName_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer ArgNum_5,
  MR_String * HeadVar__6_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__6_6 = (MR_String) "";
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_gen.generate_fact_lookup_code\'/6", (MR_String) "too many types");
          return;
        }
    else
    {
      MR_Word Var_79 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Var_80 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.fact_table_gen.generate_fact_lookup_code\'/6", (MR_String) "too many pragma vars");
          return;
        }
      else
      {
        MR_Word FactTableVar_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
        MR_Word FactTableVars_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
        MR_String VarName_34 = ((MR_String) ((MR_hl_field(0, FactTableVar_30, 0))));
        MR_Word Mode_35 = ((((MR_Unsigned) ((MR_hl_field(0, FactTableVar_30, 1))) >> 1)) & (MR_Integer) 1);
        MR_Word MakeUnique_36 = ((MR_Unsigned) ((MR_hl_field(0, FactTableVar_30, 1))) & (MR_Integer) 1);

        switch (Mode_35) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Var_75 = (MR_Integer) ((MR_Unsigned) ArgNum_5 + (MR_Unsigned) 1);
              MR_Word next_value_of_HeadVar__3_3 = Var_79;
              MR_Word next_value_of_HeadVar__4_4 = FactTableVars_31;
              MR_Integer next_value_of_ArgNum_5 = Var_75;

              // direct tailcall eliminated
              ;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              ArgNum_5 = next_value_of_ArgNum_5;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String TableEntry_39;
              MR_String ArgCode_41;
              MR_String ArgsCode_42;
              MR_Integer Var_73;
              MR_String Var_81;
              MR_String Var_89;
              MR_String Var_90;
              MR_String Var_97;
              MR_String Var_99;
              MR_String Var_100;
              MR_String Var_107;
              MR_String Var_109;
              MR_String Var_110;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), ArgNum_5, &Var_81);
              Var_89 = mercury__string__f_43_43_2_f_0((MR_String) "].V_", Var_81);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), FactTableArraySize_1, &Var_90);
              Var_97 = mercury__string__f_43_43_2_f_0(Var_90, Var_89);
              Var_99 = mercury__string__f_43_43_2_f_0((MR_String) "][ind%", Var_97);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), FactTableArraySize_1, &Var_100);
              Var_107 = mercury__string__f_43_43_2_f_0(Var_100, Var_99);
              Var_109 = mercury__string__f_43_43_2_f_0((MR_String) "_fact_table[ind/", Var_107);
              Var_110 = mercury__string__f_43_43_2_f_0(PredName_2, Var_109);
              TableEntry_39 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", Var_110);
              switch (Var_80) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                case (MR_Integer) 0:
                  {
                    MR_String Var_131;
                    MR_String Var_133;
                    MR_String Var_134;

                    Var_131 = mercury__string__f_43_43_2_f_0(TableEntry_39, (MR_String) ";\n");
                    Var_133 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_131);
                    Var_134 = mercury__string__f_43_43_2_f_0(VarName_34, Var_133);
                    ArgCode_41 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_134);
                  }
                  break;
                case (MR_Integer) 2:
                  switch (MakeUnique_36) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_String Var_125;
                        MR_String Var_127;
                        MR_String Var_128;

                        Var_125 = mercury__string__f_43_43_2_f_0(TableEntry_39, (MR_String) ");\n");
                        Var_127 = mercury__string__f_43_43_2_f_0((MR_String) ", (MR_String) (MR_Word) ", Var_125);
                        Var_128 = mercury__string__f_43_43_2_f_0(VarName_34, Var_127);
                        ArgCode_41 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_make_aligned_string(", Var_128);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String Var_113;
                        MR_String Var_115;
                        MR_String Var_116;
                        MR_String Var_118;
                        MR_String Var_119;
                        MR_String Var_121;
                        MR_String Var_122;

                        Var_113 = mercury__string__f_43_43_2_f_0(TableEntry_39, (MR_String) ");\n                    ");
                        Var_115 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_113);
                        Var_116 = mercury__string__f_43_43_2_f_0(VarName_34, Var_115);
                        Var_118 = mercury__string__f_43_43_2_f_0((MR_String) " = (MR_String) tmp;\n                            strcpy(", Var_116);
                        Var_119 = mercury__string__f_43_43_2_f_0(VarName_34, Var_118);
                        Var_121 = mercury__string__f_43_43_2_f_0((MR_String) ") + sizeof(MR_Word))\n                                    / sizeof(MR_Word));\n                            ", Var_119);
                        Var_122 = mercury__string__f_43_43_2_f_0(TableEntry_39, Var_121);
                        ArgCode_41 = mercury__string__f_43_43_2_f_0((MR_String) "       MR_incr_hp_atomic(tmp,\n                                (strlen(", Var_122);
                      }
                      break;
                  }
                  break;
              }
              Var_73 = (MR_Integer) ((MR_Unsigned) ArgNum_5 + (MR_Unsigned) 1);
              ll_backend__fact_table_gen__generate_fact_lookup_code_6_p_0(FactTableArraySize_1, PredName_2, Var_79, FactTableVars_31, Var_73, &ArgsCode_42);
              *HeadVar__6_6 = mercury__string__f_43_43_2_f_0(ArgCode_41, ArgsCode_42);
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__fact_table_gen__generate_nondet_proc_code_5_p_0(
  MR_String PredName_6,
  MR_Integer ProcId_7,
  MR_Word FactTableVars_8,
  MR_String * ExtraCodeLabel_9,
  MR_String * ProcCode_10)
{
  MR_Integer Arity_12;
  MR_Integer ProcIdInt_13;
  MR_String NamesString_14;
  MR_String Var_32;
  MR_String Var_39;
  MR_String Var_41;
  MR_String Var_42;
  MR_String Var_49;
  MR_String Var_51;
  MR_String Var_52;
  MR_String Var_55;
  MR_String Var_57;
  MR_String Var_58;
  MR_String Var_60;
  MR_String Var_61;

  mercury__list__length_2_p_0((MR_Word) (&ll_backend__fact_table_check__ll_backend__fact_table_check__type_ctor_info_fact_table_var_0), FactTableVars_8, &Arity_12);
  hlds__pred_proc_id__proc_id_to_int_2_p_0(ProcId_7, &ProcIdInt_13);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), ProcIdInt_13, &Var_32);
  Var_39 = mercury__string__f_43_43_2_f_0(Var_32, (MR_String) "_xx");
  Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_39);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__fact_table_gen_scalar_common_2[0]), Arity_12, &Var_42);
  Var_49 = mercury__string__f_43_43_2_f_0(Var_42, Var_41);
  Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_49);
  Var_52 = mercury__string__f_43_43_2_f_0(PredName_6, Var_51);
  *ExtraCodeLabel_9 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", Var_52);
  ll_backend__fact_table_gen__fact_table_vars_to_names_string_2_p_0(FactTableVars_8, &NamesString_14);
  Var_55 = mercury__string__f_43_43_2_f_0(*ExtraCodeLabel_9, (MR_String) "));\n    }\n    ");
  Var_57 = mercury__string__f_43_43_2_f_0((MR_String) ");\n        MR_GOTO(MR_ENTRY(", Var_55);
  Var_58 = mercury__string__f_43_43_2_f_0(*ExtraCodeLabel_9, Var_57);
  Var_60 = mercury__string__f_43_43_2_f_0((MR_String) " to stop the compiler giving a warning.\n    //\n    // Pop off the nondet stack frame that the pragma c_code generates\n    // then jump to the code where the wor" "k is actually done.\n\n    MR_maxfr_word = MR_prevfr_slot_word(MR_curfr);\n    MR_curfr_word = MR_succfr_slot_word(MR_curfr);\n    {\n        MR_declare_entry(", Var_58);
  Var_61 = mercury__string__f_43_43_2_f_0(NamesString_14, Var_60);
  *ProcCode_10 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n    // Mention arguments ", Var_61);
}

static void MR_CALL 
ll_backend__fact_table_gen__fact_table_vars_to_names_string_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_String) "";
  else
  {
    MR_Word FactTableVar_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word FactTableVars_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_String NamesStringTail_6;
    MR_String Name_7;
    MR_String Var_11;

    ll_backend__fact_table_gen__fact_table_vars_to_names_string_2_p_0(FactTableVars_4, &NamesStringTail_6);
    Name_7 = ((MR_String) ((MR_hl_field(0, FactTableVar_3, 0))));
    Var_11 = mercury__string__f_43_43_2_f_0((MR_String) ", ", NamesStringTail_6);
    *HeadVar__2_2 = mercury__string__f_43_43_2_f_0(Name_7, Var_11);
  }
}

static MR_bool MR_CALL 
ll_backend__fact_table_gen____Unify____comparison_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_gen____Unify____comparison_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_gen____Compare____comparison_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_gen____Compare____comparison_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table_gen____Unify____maybe_seen_input_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_gen____Unify____maybe_seen_input_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_gen____Compare____maybe_seen_input_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_gen____Compare____maybe_seen_input_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__fact_table_gen____Unify____maybe_test_keys_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__fact_table_gen____Unify____maybe_test_keys_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__fact_table_gen____Compare____maybe_test_keys_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__fact_table_gen____Compare____maybe_test_keys_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__fact_table_gen__init(void)
{
}

void mercury__ll_backend__fact_table_gen__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&ll_backend__fact_table_gen__ll_backend__fact_table_gen__type_ctor_info_comparison_kind_0);
  MR_register_type_ctor_info(&ll_backend__fact_table_gen__ll_backend__fact_table_gen__type_ctor_info_maybe_seen_input_arg_0);
  MR_register_type_ctor_info(&ll_backend__fact_table_gen__ll_backend__fact_table_gen__type_ctor_info_maybe_test_keys_0);
}

void mercury__ll_backend__fact_table_gen__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__fact_table_gen__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module ll_backend.fact_table_gen.
