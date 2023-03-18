/*
** Automatically generated from `rtti_to_mlds.m'
** by the Mercury compiler,
** version rotd-2023-03-18
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


// :- module ml_backend.rtti_to_mlds.
// :- implementation.

/*
INIT mercury__ml_backend__rtti_to_mlds__init
ENDINIT
*/

#include "ml_backend.rtti_to_mlds.mih"


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
#include "int16.mih"
#include "int32.mih"
#include "int8.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
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
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_ctor_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "hlds.mark_tail_calls.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
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
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_args_util.mih"
#include "ml_backend.ml_closure_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0_s {
  MR_bool ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__succeeded;
  MR_Word ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__MaybeArgNames_20;
  jmp_buf ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__commit_0;
  MR_Word ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__TypeCtorInfo_118_118;
  MR_Word ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__Var_51;
  MR_Word ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__Var_117;
  MR_Box ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__conv2_Var_117;
};

struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s {
  MR_Word ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfos_11;
  MR_bool ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded;
  jmp_buf ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0;
  MR_Word ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfo_26;
  MR_Box ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv0_ArgInfo_26;
};


static const MR_VA_PseudoTypeInfo_Struct3 ml_backend__rtti_to_mlds____vpti_pred_3__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_rtti_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_ptag_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint16_0__plain_backend_libs__rtti__type_ctor_info_du_functor_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_functor_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0;

static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds____vpti_pred_2__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0;

static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0;

static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_name_ordered_table__1299__1_2_p_0(
  MR_Word HeadVar__1_23,
  MR_Word * HeadVar__2_24);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__func__gen_field_names__1048__1_3_f_0(
  MR_Word HeadVar__1_17,
  MR_Word HeadVar__2_18,
  MR_Word HeadVar__3_20);

static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1771__2_3_p_0(
  MR_Word HeadVar__1_18,
  MR_Word HeadVar__2_36,
  MR_Word * HeadVar__3_37);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1771__1_3_p_0(
  MR_Word NameMap_6,
  MR_Word HeadVar__2_40,
  MR_Word * HeadVar__3_41);

static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1770__1_2_p_0(
  MR_Word HeadVar__1_32,
  MR_Word * HeadVar__2_33);

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_3_p_0(
  MR_Word GlobalVarDefn_4,
  MR_Word STATE_VARIABLE_Graph_0_13,
  MR_Word * STATE_VARIABLE_Graph_14);

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0(
  MR_Word DefnGlobalVarName_5,
  MR_Word Initializer_6,
  MR_Word STATE_VARIABLE_Graph_0_11,
  MR_Word * STATE_VARIABLE_Graph_12);

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(
  MR_Word DefnGlobalVarName_5,
  MR_Word Rval_6,
  MR_Word STATE_VARIABLE_Graph_0_23,
  MR_Word * STATE_VARIABLE_Graph_24);

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_nodes_5_p_0(
  MR_Word GlobalVarDefn_6,
  MR_Word STATE_VARIABLE_Graph_0_11,
  MR_Word * STATE_VARIABLE_Graph_12,
  MR_Word STATE_VARIABLE_NameMap_0_13,
  MR_Word * STATE_VARIABLE_NameMap_14);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_proc_id_from_univ_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word ProcLabelUniv_5);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_method_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Target_9,
  MR_Integer NumExtra_10,
  MR_Word RttiProcLabel_11,
  MR_Word * Initializer_12,
  MR_Word STATE_VARIABLE_GlobalData_0_14,
  MR_Word * STATE_VARIABLE_GlobalData_15);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_functor_number_1_f_0(
  uint32_t NumUint32_3);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0(
  MR_Word ModuleName_6,
  MR_Word RttiTypeCtor_7,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_GlobalData_0_19,
  MR_Word * STATE_VARIABLE_GlobalData_20);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_field_locn_3_p_0(
  MR_Word RttiId_4,
  MR_Word ArgInfo_5,
  MR_Word * ArgLocnInitializer_6);

static void MR_CALL 
ml_backend__rtti_to_mlds__make_exist_tc_constr_id_5_p_0(
  MR_Word RttiTypeCtor_6,
  uint32_t Ordinal_7,
  MR_Integer TCNum_8,
  MR_Integer Arity_9,
  MR_Word * RttiId_10);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Target_11,
  MR_Word MakeRttiId_12,
  MR_Word Constraint_13,
  MR_Word * RttiId_14,
  MR_Word STATE_VARIABLE_Counter_0_26,
  MR_Word * STATE_VARIABLE_Counter_27,
  MR_Word STATE_VARIABLE_GlobalData_0_28,
  MR_Word * STATE_VARIABLE_GlobalData_29);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_exist_locn_2_f_0(
  MR_Word RttiTypeCtor_4,
  MR_Word ExistTypeInfoLocn_5);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Target_8,
  MR_Word RttiTypeCtor_9,
  MR_Word DuFunctor_10,
  MR_Word STATE_VARIABLE_GlobalData_0_47,
  MR_Word * STATE_VARIABLE_GlobalData_48);

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word RttiTypeCtor_9,
  uint32_t Ordinal_10,
  MR_Word ArgInfos_11,
  MR_Word * HaveArgLocns_12,
  MR_Word STATE_VARIABLE_GlobalData_0_21,
  MR_Word * STATE_VARIABLE_GlobalData_22);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0(
  MR_Word RttiTypeCtor_8,
  uint32_t Ordinal_9,
  MR_Word MaybeNames_10,
  MR_Word STATE_VARIABLE_GlobalData_0_14,
  MR_Word * STATE_VARIABLE_GlobalData_15);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds____Unify____maybe__maybe_1_2(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_functor_subtype_info_1_f_0(
  MR_Word Info_3);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_sectag_locn_1_f_0(
  MR_Word Locn_3);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Target_9,
  MR_Word RttiTypeCtor_10,
  uint32_t Ordinal_11,
  MR_Word Types_12,
  MR_Word STATE_VARIABLE_GlobalData_0_17,
  MR_Word * STATE_VARIABLE_GlobalData_18);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Target_9,
  MR_Word RttiTypeCtor_10,
  uint32_t Ordinal_11,
  MR_Word ExistInfo_12,
  MR_Word STATE_VARIABLE_GlobalData_0_32,
  MR_Word * STATE_VARIABLE_GlobalData_33);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_functor_desc_6_p_0(
  MR_Word _ModuleInfo_7,
  MR_Word Lang_8,
  MR_Word RttiTypeCtor_9,
  MR_Word ForeignEnumFunctor_10,
  MR_Word STATE_VARIABLE_GlobalData_0_18,
  MR_Word * STATE_VARIABLE_GlobalData_19);

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_6_p_0(
  MR_Word Lang_8,
  MR_Word RttiTypeCtor_9,
  MR_Word ForeignEnumFunctor_10,
  MR_Word STATE_VARIABLE_GlobalData_0_18,
  MR_Word * STATE_VARIABLE_GlobalData_19);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_functor_desc_5_p_0(
  MR_Word _ModuleInfo_6,
  MR_Word RttiTypeCtor_7,
  MR_Word EnumFunctor_8,
  MR_Word STATE_VARIABLE_GlobalData_0_16,
  MR_Word * STATE_VARIABLE_GlobalData_17);

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_5_p_0(
  MR_Word RttiTypeCtor_7,
  MR_Word EnumFunctor_8,
  MR_Word STATE_VARIABLE_GlobalData_0_16,
  MR_Word * STATE_VARIABLE_GlobalData_17);

static void MR_CALL 
ml_backend__rtti_to_mlds__make_instance_constr_id_5_p_0(
  MR_Word TCName_6,
  MR_Word Types_7,
  MR_Integer TCNum_8,
  MR_Integer Arity_9,
  MR_Word * RttiId_10);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_id_2_f_0(
  MR_Word TCName_4,
  MR_Word MethodId_5);

static void MR_CALL 
ml_backend__rtti_to_mlds__make_decl_super_id_4_p_0(
  MR_Word TCName_5,
  MR_Integer TCNum_6,
  MR_Integer Arity_7,
  MR_Word * RttiId_8);

static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Target_7,
  MR_Word RttiData_8,
  MR_Word STATE_VARIABLE_GlobalData_0_54,
  MR_Word * STATE_VARIABLE_GlobalData_55);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Target_8,
  MR_Word PTIRttiData_9,
  MR_Word * Initializer_10,
  MR_Word STATE_VARIABLE_GlobalData_0_13,
  MR_Word * STATE_VARIABLE_GlobalData_14);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_notag_functor_desc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_notag_functor_desc_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Target_8,
  MR_Word RttiTypeCtor_9,
  MR_Word NotagFunctorDesc_10,
  MR_Word STATE_VARIABLE_GlobalData_0_21,
  MR_Word * STATE_VARIABLE_GlobalData_22);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Target_12,
  MR_Word RttiTypeCtor_13,
  MR_Word TypeCtorDetails_14,
  MR_Word * FunctorInitializer_15,
  MR_Word * LayoutInitializer_16,
  MR_Word * NumberMapInitializer_17,
  MR_Word * BaseTypeCtorInitializer_18,
  MR_Word STATE_VARIABLE_GlobalData_0_44,
  MR_Word * STATE_VARIABLE_GlobalData_45);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_type_ctor_rep_1_f_0(
  MR_Word TypeCtorData_3);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_special_pred_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Target_8,
  MR_Word RttiProcIdUniv_9,
  MR_Word * Initializer_10,
  MR_Word STATE_VARIABLE_GlobalData_0_14,
  MR_Word * STATE_VARIABLE_GlobalData_15);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_wrapper_func_and_initializer_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Target_10,
  MR_Integer NumExtra_11,
  MR_Word RttiProcId_12,
  MR_Word ClosureKind_13,
  MR_Word * Initializer_14,
  MR_Word STATE_VARIABLE_GlobalData_0_28,
  MR_Word * STATE_VARIABLE_GlobalData_29);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_base_type_ctor_3_f_0(
  MR_Word ModuleName_5,
  MR_Word Target_6,
  MR_Word MaybeBaseTypeCtor_7);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(
  MR_Word RttiTypeCtor_5,
  MR_Word FunctorNumberMap_6,
  MR_Word STATE_VARIABLE_GlobalData_0_10,
  MR_Word * STATE_VARIABLE_GlobalData_11);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word RttiTypeCtor_7,
  MR_Word PtagMap_8,
  MR_Word STATE_VARIABLE_GlobalData_0_19,
  MR_Word * STATE_VARIABLE_GlobalData_20);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_5_p_0(
  MR_Word ModuleName_1,
  MR_Word RttiTypeCtor_2,
  uint8_t LeastPtag_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word RttiTypeCtor_7,
  MR_Word ForeignEnumByName_8,
  MR_Word STATE_VARIABLE_GlobalData_0_15,
  MR_Word * STATE_VARIABLE_GlobalData_16);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word RttiTypeCtor_7,
  MR_Word ForeignEnumByOrdinal_8,
  MR_Word STATE_VARIABLE_GlobalData_0_15,
  MR_Word * STATE_VARIABLE_GlobalData_16);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word RttiTypeCtor_7,
  MR_Word EnumByName_8,
  MR_Word STATE_VARIABLE_GlobalData_0_15,
  MR_Word * STATE_VARIABLE_GlobalData_16);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_ordinal_ordered_table_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_ordinal_ordered_table_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_ordinal_ordered_table_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word RttiTypeCtor_7,
  MR_Word EnumByOrd_8,
  MR_Word STATE_VARIABLE_GlobalData_0_15,
  MR_Word * STATE_VARIABLE_GlobalData_16);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(
  MR_Word RttiData_2);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0(
  MR_Word DestType_5,
  MR_Word ModuleName_6,
  MR_Word RttiData_7);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(
  MR_Word DestType_5,
  MR_Word ModuleName_6,
  MR_Word RttiId_7);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Target_9,
  MR_Word RttiPseudoTypeInfo_10,
  MR_Word Name_11,
  MR_Word RttiId_12,
  MR_Word STATE_VARIABLE_GlobalData_0_35,
  MR_Word * STATE_VARIABLE_GlobalData_36);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Target_9,
  MR_Word RttiTypeInfo_10,
  MR_Word Name_11,
  MR_Word RttiId_12,
  MR_Word STATE_VARIABLE_GlobalData_0_32,
  MR_Word * STATE_VARIABLE_GlobalData_33);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Target_9,
  MR_Word Instance_10,
  MR_Word Name_11,
  MR_Word RttiId_12,
  MR_Word STATE_VARIABLE_GlobalData_0_33,
  MR_Word * STATE_VARIABLE_GlobalData_34);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0(
  MR_Word Type_5,
  MR_Word ModuleName_6,
  MR_Word RttiDatas_7);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Target_9,
  MR_Word TCDecl_10,
  MR_Word Name_11,
  MR_Word RttiId_12,
  MR_Word STATE_VARIABLE_GlobalData_0_51,
  MR_Word * STATE_VARIABLE_GlobalData_52);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(
  MR_Word ModuleName_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(
  MR_Word ModuleName_5,
  MR_Word RttiTypeCtor_6,
  MR_Word RttiName_7);

static void MR_CALL 
ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(
  MR_Word RttiId_5,
  MR_Word Initializer_6,
  MR_Word STATE_VARIABLE_GlobalData_0_9,
  MR_Word * STATE_VARIABLE_GlobalData_10);

static void MR_CALL 
ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(
  MR_Word Name_6,
  MR_Word RttiId_7,
  MR_Word Initializer_8,
  MR_Word STATE_VARIABLE_GlobalData_0_17,
  MR_Word * STATE_VARIABLE_GlobalData_18);

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_1[11][2];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_2[34][3];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_3[6][8];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_4[14][5];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_5[6][6];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_6[6][7];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_7[1][12];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_8[1][4];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_9[2][9];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_10[1][10];




static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_1[11][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) (UINT32_C(0))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) (MR_Word) (UINT32_C(0)))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    ((MR_Box) (MR_Word) (UINT32_C(0)))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_Word) (UINT32_C(0)))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_Word) (UINT32_C(0)))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_2[34][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint16_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    (MR_Box) (((MR_Unsigned) 0U << 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[1])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_8[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[2])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_8[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[2])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_8[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[1])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_8[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[1])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_8[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[3])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_enum_ordinal_ordered_table_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[3])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[4])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[4])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[6])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[7])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_functors_layout_info_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[8])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_functors_layout_info_10_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_notag_functor_desc_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[4])),
    ((MR_Box) (ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[1])),
    ((MR_Box) (ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[9])),
    ((MR_Box) (ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  26 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[10])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_field_types_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  27 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_8[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_field_types_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  28 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  29 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[12])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  30 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[13])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  31 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[1])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  32 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_8[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  33 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[8])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_3[6][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_ptag_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint32_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_4[14][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint8_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint8_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint32_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint16_0__plain_backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_functor_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[4])),
    ((MR_Box) (ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_2[28]))
  },
  /* row  12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0))
  },
  /* row  13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_5[6][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__rtti_to_mlds____vpti_pred_2__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_6[6][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_7[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds____vpti_pred_3__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_rtti_id_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_8[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_9[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_10[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_VA_PseudoTypeInfo_Struct3 ml_backend__rtti_to_mlds____vpti_pred_3__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_rtti_id_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_ptag_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0),
    (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint16_0__plain_backend_libs__rtti__type_ctor_info_du_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint16_0),
    (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0),
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds____vpti_pred_2__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0),
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_name_ordered_table__1299__1_2_p_0(
  MR_Word HeadVar__1_23,
  MR_Word * HeadVar__2_24)
{
  mercury__map__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0), HeadVar__1_23, HeadVar__2_24);
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__func__gen_field_names__1048__1_3_f_0(
  MR_Word HeadVar__1_17,
  MR_Word HeadVar__2_18,
  MR_Word HeadVar__3_20)
{
  MR_Word HeadVar__4_21;

  HeadVar__4_21 = ml_backend__ml_util__gen_init_maybe_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadVar__1_17, HeadVar__2_18, HeadVar__3_20);
  return HeadVar__4_21;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1771__2_3_p_0(
  MR_Word HeadVar__1_18,
  MR_Word HeadVar__2_36,
  MR_Word * HeadVar__3_37)
{
  mercury__list__filter_map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), HeadVar__1_18, HeadVar__2_36, HeadVar__3_37);
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1771__1_3_p_0(
  MR_Word NameMap_6,
  MR_Word HeadVar__2_40,
  MR_Word * HeadVar__3_41)
{
  MR_bool succeeded;
  MR_Box conv0_HeadVar__3_41;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), NameMap_6, ((MR_Box) (HeadVar__2_40)), &conv0_HeadVar__3_41);
  if (succeeded)
  {
    *HeadVar__3_41 = ((MR_Word) (conv0_HeadVar__3_41));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1770__1_2_p_0(
  MR_Word HeadVar__1_32,
  MR_Word * HeadVar__2_33)
{
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0), HeadVar__1_32, HeadVar__2_33);
}

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_3_p_0(
  MR_Word GlobalVarDefn_4,
  MR_Word STATE_VARIABLE_Graph_0_13,
  MR_Word * STATE_VARIABLE_Graph_14)
{
  MR_bool succeeded;
  MR_Word GlobalVarName_6 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_4, (MR_Integer) 0))));
  MR_Word Type_9 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_4, (MR_Integer) 3))));
  MR_Word Initializer_10 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_4, (MR_Integer) 4))));

  succeeded = ((((MR_tag((MR_Word) Type_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_9, (MR_Integer) 0)))) == (MR_Integer) 8)));
  if (succeeded)
    ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0(GlobalVarName_6, Initializer_10, STATE_VARIABLE_Graph_0_13, STATE_VARIABLE_Graph_14);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.rtti_to_mlds.add_rtti_defn_arcs\'/3", (MR_String) "expected rtti entity_data");
      return;
    }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Graph_12;

  ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Graph_12);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Graph_12));
}

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Graph_12;

  ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Graph_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Graph_12));
}

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0(
  MR_Word DefnGlobalVarName_5,
  MR_Word Initializer_6,
  MR_Word STATE_VARIABLE_Graph_0_11,
  MR_Word * STATE_VARIABLE_Graph_12)
{
  switch (MR_tag((MR_Word) Initializer_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Graph_12 = STATE_VARIABLE_Graph_0_11;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Rval_8 = ((MR_Word) ((MR_hl_field(1, Initializer_6, (MR_Integer) 0))));

        ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(DefnGlobalVarName_5, Rval_8, STATE_VARIABLE_Graph_0_11, STATE_VARIABLE_Graph_12);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Initializers_23 = ((MR_Word) ((MR_hl_field(2, Initializer_6, (MR_Integer) 1))));
        MR_Word Var_24;
        MR_Box conv3_STATE_VARIABLE_Graph_12;

        {
          Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_24, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[5]));
          MR_hl_field(0, Var_24, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_2));
          MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_24, 3) = ((MR_Box) (DefnGlobalVarName_5));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_1[0]), Var_24, Initializers_23, ((MR_Box) (STATE_VARIABLE_Graph_0_11)), &conv3_STATE_VARIABLE_Graph_12);
        *STATE_VARIABLE_Graph_12 = ((MR_Word) (conv3_STATE_VARIABLE_Graph_12));
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Initializers_10 = ((MR_Word) ((MR_hl_field(3, Initializer_6, (MR_Integer) 0))));
        MR_Word Var_14;
        MR_Box conv1_STATE_VARIABLE_Graph_12;

        {
          Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_14, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[5]));
          MR_hl_field(0, Var_14, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_1));
          MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_14, 3) = ((MR_Box) (DefnGlobalVarName_5));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_1[0]), Var_14, Initializers_10, ((MR_Box) (STATE_VARIABLE_Graph_0_11)), &conv1_STATE_VARIABLE_Graph_12);
        *STATE_VARIABLE_Graph_12 = ((MR_Word) (conv1_STATE_VARIABLE_Graph_12));
      }
      break;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(
  MR_Word DefnGlobalVarName_5,
  MR_Word Rval_6,
  MR_Word STATE_VARIABLE_Graph_0_23,
  MR_Word * STATE_VARIABLE_Graph_24)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Rval_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_8 = ((MR_Word) ((MR_hl_field(2, Rval_6, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) Lval_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word SubRval_70 = ((MR_Word) ((MR_hl_field(0, Lval_8, (MR_Integer) 1))));
                MR_Word next_value_of_Rval_6 = SubRval_70;

                // direct tailcall eliminated
                ;
                Rval_6 = next_value_of_Rval_6;
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word SubRval_81 = ((MR_Word) ((MR_hl_field(1, Lval_8, (MR_Integer) 0))));
                MR_Word next_value_of_Rval_6 = SubRval_81;

                // direct tailcall eliminated
                ;
                Rval_6 = next_value_of_Rval_6;
                continue;
              }
              break;
            case (MR_Integer) 2:
              *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Lval_8, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                  break;
                case (MR_Integer) 1:
                  *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubRvalA_33 = ((MR_Word) ((MR_hl_field(3, Rval_6, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_6 = SubRvalA_33;

              // direct tailcall eliminated
              ;
              Rval_6 = next_value_of_Rval_6;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_9 = ((MR_Word) ((MR_hl_field(3, Rval_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Const_9)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Const_9)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                      break;
                    case (MR_Integer) 1:
                      *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                  break;
                case (MR_Integer) 2:
                  *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Const_9, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                      break;
                    case (MR_Integer) 1:
                      *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                      break;
                    case (MR_Integer) 2:
                      *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                      break;
                    case (MR_Integer) 3:
                      *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                      break;
                    case (MR_Integer) 4:
                      *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                      break;
                    case (MR_Integer) 5:
                      *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                      break;
                    case (MR_Integer) 6:
                      *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                      break;
                    case (MR_Integer) 7:
                      *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                      break;
                    case (MR_Integer) 8:
                      *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                      break;
                    case (MR_Integer) 9:
                      *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                      break;
                    case (MR_Integer) 10:
                      *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                      break;
                    case (MR_Integer) 11:
                      *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                      break;
                    case (MR_Integer) 12:
                      *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                      break;
                    case (MR_Integer) 13:
                      *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                      break;
                    case (MR_Integer) 14:
                      *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                      break;
                    case (MR_Integer) 15:
                      *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                      break;
                    case (MR_Integer) 16:
                      *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                      break;
                    case (MR_Integer) 17:
                      *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                      break;
                    case (MR_Integer) 18:
                      {
                        MR_Word RttiId_38 = ((MR_Word) ((MR_hl_field(3, Const_9, (MR_Integer) 2))));
                        MR_Word GlobalVarName_39;

                        {
                          GlobalVarName_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, GlobalVarName_39, 0) = ((MR_Box) (RttiId_38));
                        }
                        mercury__digraph__add_vertices_and_edge_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0), ((MR_Box) (DefnGlobalVarName_5)), ((MR_Box) (GlobalVarName_39)), STATE_VARIABLE_Graph_0_23, STATE_VARIABLE_Graph_24);
                      }
                      break;
                    case (MR_Integer) 19:
                      *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                      break;
                    case (MR_Integer) 20:
                      *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubRvalA_11 = ((MR_Word) ((MR_hl_field(3, Rval_6, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_6 = SubRvalA_11;

              // direct tailcall eliminated
              ;
              Rval_6 = next_value_of_Rval_6;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubRvalA_34 = ((MR_Word) ((MR_hl_field(3, Rval_6, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_6 = SubRvalA_34;

              // direct tailcall eliminated
              ;
              Rval_6 = next_value_of_Rval_6;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SubRvalA_32 = ((MR_Word) ((MR_hl_field(3, Rval_6, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_6 = SubRvalA_32;

              // direct tailcall eliminated
              ;
              Rval_6 = next_value_of_Rval_6;
              continue;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubRvalA_35 = ((MR_Word) ((MR_hl_field(3, Rval_6, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_6 = SubRvalA_35;

              // direct tailcall eliminated
              ;
              Rval_6 = next_value_of_Rval_6;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word SubRvalB_18 = ((MR_Word) ((MR_hl_field(3, Rval_6, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_Graph_28_28;
              MR_Word SubRvalA_31 = ((MR_Word) ((MR_hl_field(3, Rval_6, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_6;
              MR_Word next_value_of_STATE_VARIABLE_Graph_0_23;

              ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(DefnGlobalVarName_5, SubRvalA_31, STATE_VARIABLE_Graph_0_23, &STATE_VARIABLE_Graph_28_28);
              // direct tailcall eliminated
              ;
              next_value_of_Rval_6 = SubRvalB_18;
              next_value_of_STATE_VARIABLE_Graph_0_23 = STATE_VARIABLE_Graph_28_28;
              Rval_6 = next_value_of_Rval_6;
              STATE_VARIABLE_Graph_0_23 = next_value_of_STATE_VARIABLE_Graph_0_23;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word SubLval_19 = ((MR_Word) ((MR_hl_field(3, Rval_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) SubLval_19)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(0, SubLval_19, (MR_Integer) 1))));
                    MR_Word next_value_of_Rval_6 = SubRval_83;

                    // direct tailcall eliminated
                    ;
                    Rval_6 = next_value_of_Rval_6;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word SubRval_94 = ((MR_Word) ((MR_hl_field(1, SubLval_19, (MR_Integer) 0))));
                    MR_Word next_value_of_Rval_6 = SubRval_94;

                    // direct tailcall eliminated
                    ;
                    Rval_6 = next_value_of_Rval_6;
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, SubLval_19, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                      break;
                    case (MR_Integer) 1:
                      *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word SubRvalA_36 = ((MR_Word) ((MR_hl_field(3, Rval_6, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_6 = SubRvalA_36;

              // direct tailcall eliminated
              ;
              Rval_6 = next_value_of_Rval_6;
              continue;
            }
            break;
          case (MR_Integer) 9:
            *STATE_VARIABLE_Graph_24 = STATE_VARIABLE_Graph_0_23;
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_nodes_5_p_0(
  MR_Word GlobalVarDefn_6,
  MR_Word STATE_VARIABLE_Graph_0_11,
  MR_Word * STATE_VARIABLE_Graph_12,
  MR_Word STATE_VARIABLE_NameMap_0_13,
  MR_Word * STATE_VARIABLE_NameMap_14)
{
  MR_Word GlobalVarName_9 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_6, (MR_Integer) 0))));
  MR_Word Var_10;

  mercury__digraph__add_vertex_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0), ((MR_Box) (GlobalVarName_9)), &Var_10, STATE_VARIABLE_Graph_0_11, STATE_VARIABLE_Graph_12);
  mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), ((MR_Box) (GlobalVarName_9)), ((MR_Box) (GlobalVarDefn_6)), STATE_VARIABLE_NameMap_0_13, STATE_VARIABLE_NameMap_14);
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_proc_id_from_univ_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word ProcLabelUniv_5)
{
  MR_Word Initializer_6;
  MR_Word ProcLabel_7;
  MR_Word PredLabel_9;
  MR_Word PredModule_10;
  MR_Integer ProcId_11;
  MR_Word ProcLabel_12;
  MR_Word FuncLabel_13;
  MR_Word QualFuncLabel_14;
  MR_Word Params_15;
  MR_Word Signature_16;
  MR_Word CodeAddr_17;
  MR_Word ProcAddrRval_18;
  MR_Word ProcAddrArg_19;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Box conv0_ProcLabel_7;

  mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0), ProcLabelUniv_5, &conv0_ProcLabel_7);
  ProcLabel_7 = ((MR_Word) (conv0_ProcLabel_7));
  ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ModuleInfo_4, ProcLabel_7, &PredLabel_9, &PredModule_10);
  ProcId_11 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_7, (MR_Integer) 7))));
  {
    ProcLabel_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ProcLabel_12, 0) = ((MR_Box) (PredLabel_9));
    MR_hl_field(0, ProcLabel_12, 1) = ((MR_Box) (ProcId_11));
  }
  {
    FuncLabel_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FuncLabel_13, 0) = ((MR_Box) (ProcLabel_12));
    MR_hl_field(0, FuncLabel_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    QualFuncLabel_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, QualFuncLabel_14, 0) = ((MR_Box) (PredModule_10));
    MR_hl_field(0, QualFuncLabel_14, 1) = ((MR_Box) (FuncLabel_13));
  }
  Params_15 = ml_backend__ml_args_util__ml_gen_proc_params_from_rtti_no_gc_stmts_2_f_0(ModuleInfo_4, ProcLabel_7);
  Signature_16 = ml_backend__mlds__mlds_get_func_signature_1_f_0(Params_15);
  {
    CodeAddr_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CodeAddr_17, 0) = ((MR_Box) (QualFuncLabel_14));
    MR_hl_field(0, CodeAddr_17, 1) = ((MR_Box) (Signature_16));
  }
  Var_21 = (MR_Word) (MR_mkword(1, (MR_Word) (CodeAddr_17)));
  {
    ProcAddrRval_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ProcAddrRval_18, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, ProcAddrRval_18, 1) = ((MR_Box) (Var_21));
  }
  Var_22 = (MR_Word) (MR_mkword(2, (MR_Word) (Params_15)));
  {
    ProcAddrArg_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ProcAddrArg_19, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, ProcAddrArg_19, 1) = ((MR_Box) (Var_22));
    MR_hl_field(3, ProcAddrArg_19, 2) = ((MR_Box) (ProcAddrRval_18));
  }
  {
    Initializer_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Initializer_6, 0) = ((MR_Box) (ProcAddrArg_19));
  }
  return Initializer_6;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_method_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Target_9,
  MR_Integer NumExtra_10,
  MR_Word RttiProcLabel_11,
  MR_Word * Initializer_12,
  MR_Word STATE_VARIABLE_GlobalData_0_14,
  MR_Word * STATE_VARIABLE_GlobalData_15)
{
  MR_Word PredId_17 = ((MR_Word) ((MR_hl_field(0, RttiProcLabel_11, (MR_Integer) 6))));
  MR_Integer ProcId_18 = ((MR_Integer) ((MR_hl_field(0, RttiProcLabel_11, (MR_Integer) 7))));
  MR_Word PredProcId_19;
  MR_Word InSccMap_21;
  MR_Word TsccInfo_22;
  MR_Word ProcInfo_23;
  MR_Word Context_24;
  MR_Word WrapperFuncRval_25;
  MR_Word WrapperFuncType_26;
  MR_Word ClosureWrapperDefns_27;
  MR_Word STATE_VARIABLE_Info_35_29;
  MR_Word Var_30;
  MR_Word STATE_VARIABLE_Info_37_31;
  MR_Word STATE_VARIABLE_Info_38_32;
  MR_Word STATE_VARIABLE_GlobalData_39_33;
  MR_Word Var_34;

  {
    PredProcId_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredProcId_19, 0) = ((MR_Box) (PredId_17));
    MR_hl_field(0, PredProcId_19, 1) = ((MR_Box) (ProcId_18));
  }
  InSccMap_21 = mercury__map__singleton_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0), ((MR_Box) (PredProcId_19)), ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_2[3])));
  ml_backend__ml_gen_info__init_ml_gen_tscc_info_4_p_0(ModuleInfo_8, InSccMap_21, (MR_Integer) 0, &TsccInfo_22);
  hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo_8, PredId_17, ProcId_18, &ProcInfo_23);
  Var_30 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0));
  STATE_VARIABLE_Info_35_29 = ml_backend__ml_gen_info__ml_gen_info_init_7_f_0(ModuleInfo_8, Target_9, Var_30, PredProcId_19, ProcInfo_23, STATE_VARIABLE_GlobalData_0_14, TsccInfo_22);
  ml_backend__ml_gen_info__ml_gen_info_bump_counters_2_p_0(STATE_VARIABLE_Info_35_29, &STATE_VARIABLE_Info_37_31);
  Context_24 = mercury__term_context__dummy_context_0_f_0();
  ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_p_0(PredId_17, ProcId_18, (MR_Integer) 1, NumExtra_10, Context_24, &WrapperFuncRval_25, &WrapperFuncType_26, STATE_VARIABLE_Info_37_31, &STATE_VARIABLE_Info_38_32);
  ml_backend__ml_gen_info__ml_gen_info_get_closure_wrapper_defns_2_p_0(STATE_VARIABLE_Info_38_32, &ClosureWrapperDefns_27);
  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_38_32, &STATE_VARIABLE_GlobalData_39_33);
  ml_backend__ml_global_data__ml_global_data_add_closure_wrapper_func_defns_3_p_0(ClosureWrapperDefns_27, STATE_VARIABLE_GlobalData_39_33, STATE_VARIABLE_GlobalData_15);
  {
    Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_34, 1) = ((MR_Box) (WrapperFuncType_26));
    MR_hl_field(3, Var_34, 2) = ((MR_Box) (WrapperFuncRval_25));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    *Initializer_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_34));
  }
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_functor_number_1_f_0(
  uint32_t NumUint32_3)
{
  MR_Word Init_4;
  MR_Integer Num_5;

  Num_5 = mercury__uint32__cast_to_int_1_f_0(NumUint32_3);
  Init_4 = ml_backend__ml_util__gen_init_int_1_f_0(Num_5);
  return Init_4;
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;

  conv1_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = backend_libs__rtti__du_functor_rtti_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0(
  MR_Word ModuleName_6,
  MR_Word RttiTypeCtor_7,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_GlobalData_0_19,
  MR_Word * STATE_VARIABLE_GlobalData_20)
{
  MR_Word Ptag_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word SectagTable_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Word SectagMap_14 = ((MR_Word) ((MR_hl_field(0, SectagTable_9, (MR_Integer) 3))));
  MR_Word SectagFunctors_15;
  MR_Word FunctorRttiNames_16;
  MR_Word Initializer_17;
  MR_Word RttiName_18;
  MR_Word Var_25;
  MR_Word RttiId_27;
  MR_Word Name_28;

  mercury__map__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0), SectagMap_14, &SectagFunctors_15);
  FunctorRttiNames_16 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[33]), SectagFunctors_15);
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[3]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_2));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (ModuleName_6));
    MR_hl_field(0, Var_25, 4) = ((MR_Box) (RttiTypeCtor_7));
  }
  Initializer_17 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0), Var_25, FunctorRttiNames_16);
  {
    RttiName_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, RttiName_18, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, RttiName_18, 1) = ((MR_Box) (Ptag_8));
  }
  {
    RttiId_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RttiId_27, 0) = ((MR_Box) (RttiTypeCtor_7));
    MR_hl_field(0, RttiId_27, 1) = ((MR_Box) (RttiName_18));
  }
  {
    Name_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Name_28, 0) = ((MR_Box) (RttiId_27));
  }
  ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_28, RttiId_27, Initializer_17, STATE_VARIABLE_GlobalData_0_19, STATE_VARIABLE_GlobalData_20);
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_field_locn_3_p_0(
  MR_Word RttiId_4,
  MR_Word ArgInfo_5,
  MR_Word * ArgLocnInitializer_6)
{
  MR_Word ArgPosWidth_7 = ((MR_Word) ((MR_hl_field(0, ArgInfo_5, (MR_Integer) 2))));
  MR_Integer ArgOnlyOffset_8;
  MR_Integer Shift_10;
  MR_Integer NumBits_11;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;

  switch (MR_tag((MR_Word) ArgPosWidth_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        ArgOnlyOffset_8 = (MR_Integer) -1;
        Shift_10 = (MR_Integer) 0;
        NumBits_11 = (MR_Integer) -10;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, ArgPosWidth_7, (MR_Integer) 0))));

        ArgOnlyOffset_8 = (MR_Integer) (Var_21);
        Shift_10 = (MR_Integer) 0;
        NumBits_11 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word DoubleWordKind_13 = ((MR_Unsigned) ((MR_hl_field(2, ArgPosWidth_7, (MR_Integer) 2))) & (MR_Integer) 3);
        MR_Word Var_22 = ((MR_Word) ((MR_hl_field(2, ArgPosWidth_7, (MR_Integer) 0))));

        ArgOnlyOffset_8 = (MR_Integer) (Var_22);
        Shift_10 = (MR_Integer) 0;
        switch (DoubleWordKind_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            NumBits_11 = (MR_Integer) -1;
            break;
          case (MR_Integer) 1:
            NumBits_11 = (MR_Integer) -2;
            break;
          case (MR_Integer) 2:
            NumBits_11 = (MR_Integer) -3;
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer NumBits0_15;
            MR_Word Fill_17 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_7, (MR_Integer) 6))) & (MR_Integer) 7);
            MR_Word Var_23 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_7, (MR_Integer) 1))));
            MR_Word Var_24 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_7, (MR_Integer) 3))));
            MR_Word Var_25 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_7, (MR_Integer) 4))));

            ArgOnlyOffset_8 = (MR_Integer) (Var_23);
            Shift_10 = (MR_Integer) (Var_24);
            NumBits0_15 = (MR_Integer) (Var_25);
            switch (Fill_17) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 7:
              case (MR_Integer) 0:
                NumBits_11 = NumBits0_15;
                break;
              case (MR_Integer) 2:
                NumBits_11 = (MR_Integer) -6;
                break;
              case (MR_Integer) 3:
                NumBits_11 = (MR_Integer) -8;
                break;
              case (MR_Integer) 1:
                NumBits_11 = (MR_Integer) -4;
                break;
              case (MR_Integer) 5:
                NumBits_11 = (MR_Integer) -7;
                break;
              case (MR_Integer) 6:
                NumBits_11 = (MR_Integer) -9;
                break;
              case (MR_Integer) 4:
                NumBits_11 = (MR_Integer) -5;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_26 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_7, (MR_Integer) 1))));
            MR_Word Var_27 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_7, (MR_Integer) 3))));
            MR_Word Var_28 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_7, (MR_Integer) 4))));
            MR_Integer NumBits0_41;
            MR_Word Fill_42 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_7, (MR_Integer) 6))) & (MR_Integer) 7);

            ArgOnlyOffset_8 = (MR_Integer) (Var_26);
            Shift_10 = (MR_Integer) (Var_27);
            NumBits0_41 = (MR_Integer) (Var_28);
            switch (Fill_42) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 7:
              case (MR_Integer) 0:
                NumBits_11 = NumBits0_41;
                break;
              case (MR_Integer) 2:
                NumBits_11 = (MR_Integer) -6;
                break;
              case (MR_Integer) 3:
                NumBits_11 = (MR_Integer) -8;
                break;
              case (MR_Integer) 1:
                NumBits_11 = (MR_Integer) -4;
                break;
              case (MR_Integer) 5:
                NumBits_11 = (MR_Integer) -7;
                break;
              case (MR_Integer) 6:
                NumBits_11 = (MR_Integer) -9;
                break;
              case (MR_Integer) 4:
                NumBits_11 = (MR_Integer) -5;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_29 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_7, (MR_Integer) 1))));

            ArgOnlyOffset_8 = (MR_Integer) (Var_29);
            Shift_10 = (MR_Integer) 0;
            NumBits_11 = (MR_Integer) -10;
          }
          break;
      }
      break;
  }
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (RttiId_4));
  }
  {
    Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_30, 1) = ((MR_Box) (Var_31));
  }
  Var_33 = ml_backend__ml_util__gen_init_int_1_f_0(ArgOnlyOffset_8);
  Var_35 = ml_backend__ml_util__gen_init_int_1_f_0(Shift_10);
  Var_37 = ml_backend__ml_util__gen_init_int_1_f_0(NumBits_11);
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *ArgLocnInitializer_6 = base;
    MR_hl_field(2, base, 0) = ((MR_Box) (Var_30));
    MR_hl_field(2, base, 1) = ((MR_Box) (Var_32));
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__make_exist_tc_constr_id_5_p_0(
  MR_Word RttiTypeCtor_6,
  uint32_t Ordinal_7,
  MR_Integer TCNum_8,
  MR_Integer Arity_9,
  MR_Word * RttiId_10)
{
  MR_Word RttiName_11;

  {
    RttiName_11 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, RttiName_11, 0) = ((MR_Box) (MR_Word) (Ordinal_7));
    MR_hl_field(2, RttiName_11, 1) = ((MR_Box) (TCNum_8));
    MR_hl_field(2, RttiName_11, 2) = ((MR_Box) (Arity_9));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *RttiId_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (RttiTypeCtor_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (RttiName_11));
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_GlobalData_12;

  ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_GlobalData_12);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_GlobalData_12));
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Target_11,
  MR_Word MakeRttiId_12,
  MR_Word Constraint_13,
  MR_Word * RttiId_14,
  MR_Word STATE_VARIABLE_Counter_0_26,
  MR_Word * STATE_VARIABLE_Counter_27,
  MR_Word STATE_VARIABLE_GlobalData_0_28,
  MR_Word * STATE_VARIABLE_GlobalData_29)
{
  MR_bool succeeded;
  MR_Word TCName_17 = ((MR_Word) ((MR_hl_field(0, Constraint_13, (MR_Integer) 0))));
  MR_Word Types_18 = ((MR_Word) ((MR_hl_field(0, Constraint_13, (MR_Integer) 1))));
  MR_Integer Arity_19;
  MR_Integer TCNum_20;
  MR_Word TypeRttiDatas_23;
  MR_Word PTIInitializers_24;
  MR_Word Initializer_25;
  MR_Word STATE_VARIABLE_GlobalData_32_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word RealRttiDatas_41;
  MR_Word ModuleName_42;
  MR_Word Var_44;
  MR_Word Var_48;
  MR_Word MLDS_ModuleName_51;
  MR_Word RttiId_57;
  MR_Word Var_58;
  MR_Word ModuleName_63;
  MR_Word Name_96;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_RttiId_14;
  MR_Word ModuleName_22;
  MR_Box conv4_STATE_VARIABLE_GlobalData_32_32;

  mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), Types_18, &Arity_19);
  mercury__counter__allocate_3_p_0(&TCNum_20, STATE_VARIABLE_Counter_0_26, STATE_VARIABLE_Counter_27);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, MakeRttiId_12, (MR_Integer) 1))));
  func_0(((MR_Box) (MakeRttiId_12)), ((MR_Box) (TCNum_20)), ((MR_Box) (Arity_19)), &conv1_RttiId_14);
  *RttiId_14 = ((MR_Word) (conv1_RttiId_14));
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_10, &ModuleName_22);
  TypeRttiDatas_23 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[31]), Types_18);
  RealRttiDatas_41 = mercury__list__filter_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[32]), TypeRttiDatas_23);
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0_3));
    MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_44, 3) = ((MR_Box) (ModuleInfo_10));
    MR_hl_field(0, Var_44, 4) = ((MR_Box) (Target_11));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), Var_44, RealRttiDatas_41, ((MR_Box) (STATE_VARIABLE_GlobalData_0_28)), &conv4_STATE_VARIABLE_GlobalData_32_32);
  STATE_VARIABLE_GlobalData_32_32 = ((MR_Word) (conv4_STATE_VARIABLE_GlobalData_32_32));
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_10, &ModuleName_42);
  PTIInitializers_24 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0((MR_Word) ((MR_Unsigned) 32U), ModuleName_42, TypeRttiDatas_23);
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (*RttiId_14));
  }
  {
    Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_33, 1) = ((MR_Box) (Var_34));
  }
  ModuleName_63 = ((MR_Word) ((MR_hl_field(0, TCName_17, (MR_Integer) 0))));
  MLDS_ModuleName_51 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_63);
  {
    RttiId_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RttiId_57, 0) = ((MR_Box) (TCName_17));
    MR_hl_field(1, RttiId_57, 1) = ((MR_Box) ((MR_Unsigned) 12U));
  }
  {
    Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 18U));
    MR_hl_field(3, Var_58, 1) = ((MR_Box) (MLDS_ModuleName_51));
    MR_hl_field(3, Var_58, 2) = ((MR_Box) (RttiId_57));
  }
  {
    Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_48, 1) = ((MR_Box) (Var_58));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_48));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (PTIInitializers_24));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_37));
  }
  {
    Initializer_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Initializer_25, 0) = ((MR_Box) (Var_33));
    MR_hl_field(2, Initializer_25, 1) = ((MR_Box) (Var_35));
  }
  {
    Name_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Name_96, 0) = ((MR_Box) (*RttiId_14));
  }
  ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_96, *RttiId_14, Initializer_25, STATE_VARIABLE_GlobalData_32_32, STATE_VARIABLE_GlobalData_29);
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_exist_locn_2_f_0(
  MR_Word RttiTypeCtor_4,
  MR_Word ExistTypeInfoLocn_5)
{
  MR_Word Initializer_6;
  uint16_t SlotInCell_7;
  int16_t SlotInTciEncoding_9;
  MR_Word RttiId_10;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  int16_t Var_16;
  MR_Word Var_17;
  MR_Word Var_18;

  if (((MR_tag((MR_Word) ExistTypeInfoLocn_5)) == (MR_Integer) 0))
  {
    SlotInCell_7 = ((uint16_t) (MR_Word) (MR_hl_field(0, ExistTypeInfoLocn_5, (MR_Integer) 0)));
    SlotInTciEncoding_9 = INT16_C(-1);
  }
  else
  {
    uint16_t SlotInTci_8;

    SlotInCell_7 = ((uint16_t) (MR_Word) (MR_hl_field(1, ExistTypeInfoLocn_5, (MR_Integer) 0)));
    SlotInTci_8 = ((uint16_t) (MR_Word) (MR_hl_field(1, ExistTypeInfoLocn_5, (MR_Integer) 1)));
    SlotInTciEncoding_9 = mercury__int16__cast_from_uint16_1_f_0(SlotInTci_8);
  }
  {
    RttiId_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RttiId_10, 0) = ((MR_Box) (RttiTypeCtor_4));
    MR_hl_field(0, RttiId_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (RttiId_10));
  }
  {
    Var_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_12, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_12, 1) = ((MR_Box) (Var_13));
  }
  Var_16 = mercury__int16__cast_from_uint16_1_f_0(SlotInCell_7);
  Var_15 = ml_backend__ml_util__gen_init_int16_1_f_0(Var_16);
  Var_18 = ml_backend__ml_util__gen_init_int16_1_f_0(SlotInTciEncoding_9);
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_15));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_17));
  }
  {
    Initializer_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Initializer_6, 0) = ((MR_Box) (Var_12));
    MR_hl_field(2, Initializer_6, 1) = ((MR_Box) (Var_14));
  }
  return Initializer_6;
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = backend_libs__rtti__du_arg_info_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = backend_libs__rtti__du_arg_info_type_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_3(
  void * env_ptr_arg)
{
  struct ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0_s * env_ptr = (struct ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_5(
  void * env_ptr_arg)
{
  struct ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0_s * env_ptr = (struct ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__Var_117 = ((MR_Word) ((env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__conv2_Var_117));
  ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_4(env_ptr);
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_4(
  void * env_ptr_arg)
{
  struct ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0_s * env_ptr = (struct ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__TypeCtorInfo_118_118 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
  (env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__succeeded = ml_backend__rtti_to_mlds____Unify____maybe__maybe_1_2((env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__TypeCtorInfo_118_118, (env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__Var_51, (env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__Var_117);
  if ((env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__succeeded)
    ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_3(env_ptr);
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_6(
  void * env_ptr_arg)
{
  struct ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0_s * env_ptr = (struct ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__commit_0) == 0)
    {
      {
        MR_String Var_22;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          (env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__Var_51 = base;
          MR_hl_field(1, base, 0) = NULL;
        }
        mercury__list__member_2_p_1((MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_1[4]), &(env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__conv2_Var_117, (env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__MaybeArgNames_20, ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_5, env_ptr);
      }
      (env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Target_8,
  MR_Word RttiTypeCtor_9,
  MR_Word DuFunctor_10,
  MR_Word STATE_VARIABLE_GlobalData_0_47,
  MR_Word * STATE_VARIABLE_GlobalData_48)
{
  struct ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0_s env;

  {
    MR_String FunctorName_12 = ((MR_String) ((MR_hl_field(0, DuFunctor_10, (MR_Integer) 0))));
    uint16_t Arity_13 = ((uint16_t) (MR_Word) (MR_hl_field(0, DuFunctor_10, (MR_Integer) 1)));
    uint32_t Ordinal_14 = ((uint32_t) (MR_Word) (MR_hl_field(0, DuFunctor_10, (MR_Integer) 2)));
    MR_Word Rep_15 = ((MR_Word) ((MR_hl_field(0, DuFunctor_10, (MR_Integer) 3))));
    MR_Word ArgInfos_16 = ((MR_Word) ((MR_hl_field(0, DuFunctor_10, (MR_Integer) 4))));
    MR_Word MaybeExistInfo_17 = ((MR_Word) ((MR_hl_field(0, DuFunctor_10, (MR_Integer) 5))));
    MR_Word FunctorSubtypeInfo_18 = ((MR_Unsigned) ((MR_hl_field(0, DuFunctor_10, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Word ArgTypes_19;
    uint16_t ContainsVarBitVector_23;
    MR_Word ModuleName_24;
    MR_Word ArgTypeInitializer_27;
    MR_Word ArgNameInitializer_28;
    MR_Word HaveArgLocns_29;
    MR_Word ArgLocnsInitializer_30;
    MR_Word ExistInfoInitializer_32;
    uint8_t PtagUint8_35;
    MR_Word Locn_37;
    MR_Integer Stag_38;
    uint8_t NumSectagBits_39;
    MR_Word RttiName_42;
    MR_Word RttiId_43;
    int16_t ArityInt16_44;
    int32_t OrdinalInt32_45;
    MR_Word Initializer_46;
    MR_Word STATE_VARIABLE_GlobalData_52_52;
    MR_Word STATE_VARIABLE_GlobalData_59_59;
    MR_Word STATE_VARIABLE_GlobalData_66_66;
    MR_Word STATE_VARIABLE_GlobalData_73_73;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, DuFunctor_10, (MR_Integer) 6)));

    ArgTypes_19 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[29]), ArgInfos_16);
    (env).ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__MaybeArgNames_20 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_1[4]), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[30]), ArgInfos_16);
    ContainsVarBitVector_23 = backend_libs__type_ctor_info__compute_contains_var_bit_vector_1_f_0(ArgTypes_19);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_7, &ModuleName_24);
    if ((ArgInfos_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;

      {
        Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_56, 0) = ((MR_Box) (RttiTypeCtor_9));
        MR_hl_field(0, Var_56, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__rtti_to_mlds_scalar_common_1[7])));
      }
      {
        Var_55 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_55, 0) = ((MR_Box) (Var_56));
      }
      {
        Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, Var_54, 1) = ((MR_Box) (Var_55));
      }
      ArgTypeInitializer_27 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(Var_54);
      STATE_VARIABLE_GlobalData_52_52 = STATE_VARIABLE_GlobalData_0_47;
    }
    else
    {
      MR_Word Var_53;

      ml_backend__rtti_to_mlds__gen_field_types_7_p_0(ModuleInfo_7, Target_8, RttiTypeCtor_9, Ordinal_14, ArgTypes_19, STATE_VARIABLE_GlobalData_0_47, &STATE_VARIABLE_GlobalData_52_52);
      {
        Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, Var_53, 1) = ((MR_Box) (MR_Word) (Ordinal_14));
      }
      ArgTypeInitializer_27 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ModuleName_24, RttiTypeCtor_9, Var_53);
    }
    ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_6(&env);
    if ((env).ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__succeeded)
    {
      MR_Word Var_60;

      ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0(RttiTypeCtor_9, Ordinal_14, (env).ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__MaybeArgNames_20, STATE_VARIABLE_GlobalData_52_52, &STATE_VARIABLE_GlobalData_59_59);
      {
        Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, Var_60, 1) = ((MR_Box) (MR_Word) (Ordinal_14));
      }
      ArgNameInitializer_28 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ModuleName_24, RttiTypeCtor_9, Var_60);
    }
    else
    {
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;

      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_63, 0) = ((MR_Box) (RttiTypeCtor_9));
        MR_hl_field(0, Var_63, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__rtti_to_mlds_scalar_common_1[8])));
      }
      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_62, 0) = ((MR_Box) (Var_63));
      }
      {
        Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, Var_61, 1) = ((MR_Box) (Var_62));
      }
      ArgNameInitializer_28 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(Var_61);
      STATE_VARIABLE_GlobalData_59_59 = STATE_VARIABLE_GlobalData_52_52;
    }
    ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0(RttiTypeCtor_9, Ordinal_14, ArgInfos_16, &HaveArgLocns_29, STATE_VARIABLE_GlobalData_59_59, &STATE_VARIABLE_GlobalData_66_66);
    switch (HaveArgLocns_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_70;

          {
            Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_70, 0) = ((MR_Box) (RttiTypeCtor_9));
            MR_hl_field(0, Var_70, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__rtti_to_mlds_scalar_common_1[9])));
          }
          {
            Var_69 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_69, 0) = ((MR_Box) (Var_70));
          }
          {
            Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, Var_68, 1) = ((MR_Box) (Var_69));
          }
          ArgLocnsInitializer_30 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(Var_68);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_67;

          {
            Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, Var_67, 1) = ((MR_Box) (MR_Word) (Ordinal_14));
          }
          ArgLocnsInitializer_30 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ModuleName_24, RttiTypeCtor_9, Var_67);
        }
        break;
    }
    if ((MaybeExistInfo_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_77;

      {
        Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_77, 0) = ((MR_Box) (RttiTypeCtor_9));
        MR_hl_field(0, Var_77, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__rtti_to_mlds_scalar_common_1[10])));
      }
      {
        Var_76 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_76, 0) = ((MR_Box) (Var_77));
      }
      {
        Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, Var_75, 1) = ((MR_Box) (Var_76));
      }
      ExistInfoInitializer_32 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(Var_75);
      STATE_VARIABLE_GlobalData_73_73 = STATE_VARIABLE_GlobalData_66_66;
    }
    else
    {
      MR_Word ExistInfo_31 = ((MR_Word) ((MR_hl_field(1, MaybeExistInfo_17, (MR_Integer) 0))));
      MR_Word Var_74;

      ml_backend__rtti_to_mlds__gen_exist_info_7_p_0(ModuleInfo_7, Target_8, RttiTypeCtor_9, Ordinal_14, ExistInfo_31, STATE_VARIABLE_GlobalData_66_66, &STATE_VARIABLE_GlobalData_73_73);
      {
        Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_74, 1) = ((MR_Box) (MR_Word) (Ordinal_14));
      }
      ExistInfoInitializer_32 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ModuleName_24, RttiTypeCtor_9, Var_74);
    }
    if (((MR_tag((MR_Word) Rep_15)) == (MR_Integer) 1))
    {
      MR_Unsigned StagUint_107 = ((MR_Unsigned) ((MR_hl_field(1, Rep_15, (MR_Integer) 0))));

      PtagUint8_35 = UINT8_C(0);
      Locn_37 = (MR_Word) ((MR_Unsigned) 12U);
      Stag_38 = mercury__uint__cast_to_int_1_f_0(StagUint_107);
      NumSectagBits_39 = UINT8_C(0);
    }
    else
    {
      MR_Word Ptag_33 = ((MR_Word) ((MR_hl_field(0, Rep_15, (MR_Integer) 0))));
      MR_Word SectagAndLocn_123 = ((MR_Word) ((MR_hl_field(0, Rep_15, (MR_Integer) 1))));

      PtagUint8_35 = (uint8_t) (Ptag_33);
      switch (MR_tag((MR_Word) SectagAndLocn_123)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(SectagAndLocn_123)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                Locn_37 = (MR_Word) ((MR_Unsigned) 0U);
                Stag_38 = (MR_Integer) -1;
                NumSectagBits_39 = UINT8_C(0);
              }
              break;
            case (MR_Integer) 1:
              {
                Locn_37 = (MR_Word) ((MR_Unsigned) 4U);
                Stag_38 = (MR_Integer) -1;
                NumSectagBits_39 = UINT8_C(0);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Unsigned StagUint_40 = ((MR_Unsigned) ((MR_hl_field(1, SectagAndLocn_123, (MR_Integer) 0))));

            Locn_37 = (MR_Word) ((MR_Unsigned) 8U);
            Stag_38 = mercury__uint__cast_to_int_1_f_0(StagUint_40);
            NumSectagBits_39 = UINT8_C(0);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Unsigned Mask_41;
            MR_Unsigned StagUint_106 = ((MR_Unsigned) ((MR_hl_field(2, SectagAndLocn_123, (MR_Integer) 0))));

            NumSectagBits_39 = ((uint8_t) (MR_Word) (MR_hl_field(2, SectagAndLocn_123, (MR_Integer) 1)));
            Mask_41 = ((MR_Unsigned) ((MR_hl_field(2, SectagAndLocn_123, (MR_Integer) 2))));
            {
              Locn_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Locn_37, 0) = ((MR_Box) (MR_Word) (NumSectagBits_39));
              MR_hl_field(1, Locn_37, 1) = ((MR_Box) (Mask_41));
            }
            Stag_38 = mercury__uint__cast_to_int_1_f_0(StagUint_106);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, SectagAndLocn_123, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Unsigned StagUint_121 = ((MR_Unsigned) ((MR_hl_field(3, SectagAndLocn_123, (MR_Integer) 1))));

                Locn_37 = (MR_Word) ((MR_Unsigned) 12U);
                Stag_38 = mercury__uint__cast_to_int_1_f_0(StagUint_121);
                NumSectagBits_39 = UINT8_C(0);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Unsigned StagUint_108 = ((MR_Unsigned) ((MR_hl_field(3, SectagAndLocn_123, (MR_Integer) 1))));
                MR_Unsigned Mask_109;

                NumSectagBits_39 = ((uint8_t) (MR_Word) (MR_hl_field(3, SectagAndLocn_123, (MR_Integer) 2)));
                Mask_109 = ((MR_Unsigned) ((MR_hl_field(3, SectagAndLocn_123, (MR_Integer) 3))));
                {
                  Locn_37 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Locn_37, 0) = ((MR_Box) (MR_Word) (NumSectagBits_39));
                  MR_hl_field(2, Locn_37, 1) = ((MR_Box) (Mask_109));
                }
                Stag_38 = mercury__uint__cast_to_int_1_f_0(StagUint_108);
              }
              break;
          }
          break;
      }
    }
    {
      RttiName_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, RttiName_42, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(3, RttiName_42, 1) = ((MR_Box) (MR_Word) (Ordinal_14));
    }
    {
      RttiId_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, RttiId_43, 0) = ((MR_Box) (RttiTypeCtor_9));
      MR_hl_field(0, RttiId_43, 1) = ((MR_Box) (RttiName_42));
    }
    ArityInt16_44 = mercury__int16__cast_from_uint16_1_f_0(Arity_13);
    OrdinalInt32_45 = mercury__int32__cast_from_uint32_1_f_0(Ordinal_14);
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_81, 0) = ((MR_Box) (RttiId_43));
    }
    {
      Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_80, 1) = ((MR_Box) (Var_81));
    }
    Var_83 = ml_backend__ml_util__gen_init_string_1_f_0(FunctorName_12);
    Var_85 = ml_backend__ml_util__gen_init_int16_1_f_0(ArityInt16_44);
    Var_87 = ml_backend__ml_util__gen_init_uint16_1_f_0(ContainsVarBitVector_23);
    Var_89 = ml_backend__rtti_to_mlds__gen_init_sectag_locn_1_f_0(Locn_37);
    Var_91 = ml_backend__ml_util__gen_init_uint8_1_f_0(PtagUint8_35);
    Var_93 = ml_backend__ml_util__gen_init_int_1_f_0(Stag_38);
    Var_95 = ml_backend__ml_util__gen_init_int32_1_f_0(OrdinalInt32_45);
    Var_101 = ml_backend__rtti_to_mlds__gen_init_functor_subtype_info_1_f_0(FunctorSubtypeInfo_18);
    Var_103 = ml_backend__ml_util__gen_init_uint8_1_f_0(NumSectagBits_39);
    {
      Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_103));
      MR_hl_field(1, Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_100, 0) = ((MR_Box) (Var_101));
      MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_102));
    }
    {
      Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_99, 0) = ((MR_Box) (ExistInfoInitializer_32));
      MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_100));
    }
    {
      Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_98, 0) = ((MR_Box) (ArgLocnsInitializer_30));
      MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_99));
    }
    {
      Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_97, 0) = ((MR_Box) (ArgNameInitializer_28));
      MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_98));
    }
    {
      Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_96, 0) = ((MR_Box) (ArgTypeInitializer_27));
      MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_97));
    }
    {
      Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_95));
      MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_96));
    }
    {
      Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
      MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_94));
    }
    {
      Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
      MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_92));
    }
    {
      Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
      MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_90));
    }
    {
      Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
      MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_88));
    }
    {
      Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
      MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_86));
    }
    {
      Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
      MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_84));
    }
    {
      Initializer_46 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Initializer_46, 0) = ((MR_Box) (Var_80));
      MR_hl_field(2, Initializer_46, 1) = ((MR_Box) (Var_82));
    }
    ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(RttiId_43, Initializer_46, STATE_VARIABLE_GlobalData_73_73, STATE_VARIABLE_GlobalData_48);
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_ArgLocnInitializer_6;

  ml_backend__rtti_to_mlds__gen_field_locn_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_ArgLocnInitializer_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_ArgLocnInitializer_6));
}

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_1(
  void * env_ptr_arg)
{
  struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
}

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_3(
  void * env_ptr_arg)
{
  struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  (env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfo_26 = ((MR_Word) ((env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv0_ArgInfo_26));
  ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_2(env_ptr);
}

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_2(
  void * env_ptr_arg)
{
  struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfo_26, (MR_Integer) 2))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfo_26, (MR_Integer) 0))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfo_26, (MR_Integer) 1))));
    MR_Word Var_15;
    MR_Word Var_16;

    (env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 1);
    if ((env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
    {
      Var_15 = ((MR_Word) ((MR_hl_field(1, Var_23, (MR_Integer) 0))));
      Var_16 = ((MR_Word) ((MR_hl_field(1, Var_23, (MR_Integer) 1))));
    }
    (env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = !((env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded);
    if ((env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
      ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_1(env_ptr);
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_4(
  void * env_ptr_arg)
{
  struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0), &(env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv0_ArgInfo_26, (env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfos_11, ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_3, env_ptr);
      (env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word RttiTypeCtor_9,
  uint32_t Ordinal_10,
  MR_Word ArgInfos_11,
  MR_Word * HaveArgLocns_12,
  MR_Word STATE_VARIABLE_GlobalData_0_21,
  MR_Word * STATE_VARIABLE_GlobalData_22)
{
  struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s env;

  (env).ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfos_11 = ArgInfos_11;
  ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_4(&env);
  if ((env).ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
  {
    MR_Word RttiName_17;
    MR_Word RttiId_18;
    MR_Word ArgLocnInitializers_19;
    MR_Word Initializer_20;
    MR_Word Var_24;
    MR_Word Name_34;

    *HaveArgLocns_12 = (MR_Integer) 1;
    {
      RttiName_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, RttiName_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, RttiName_17, 1) = ((MR_Box) (MR_Word) (Ordinal_10));
    }
    {
      RttiId_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, RttiId_18, 0) = ((MR_Box) (RttiTypeCtor_9));
      MR_hl_field(0, RttiId_18, 1) = ((MR_Box) (RttiName_17));
    }
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[5]));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_5));
      MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_24, 3) = ((MR_Box) (RttiId_18));
    }
    mercury__list__map_3_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Var_24, (env).ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfos_11, &ArgLocnInitializers_19);
    {
      Initializer_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Initializer_20, 0) = ((MR_Box) (ArgLocnInitializers_19));
    }
    {
      Name_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Name_34, 0) = ((MR_Box) (RttiId_18));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_34, RttiId_18, Initializer_20, STATE_VARIABLE_GlobalData_0_21, STATE_VARIABLE_GlobalData_22);
  }
  else
  {
    *HaveArgLocns_12 = (MR_Integer) 0;
    *STATE_VARIABLE_GlobalData_22 = STATE_VARIABLE_GlobalData_0_21;
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_21;

  conv1_HeadVar__4_21 = ml_backend__rtti_to_mlds__IntroducedFrom__func__gen_field_names__1048__1_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_21));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ml_backend__ml_util__gen_init_string_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0(
  MR_Word RttiTypeCtor_8,
  uint32_t Ordinal_9,
  MR_Word MaybeNames_10,
  MR_Word STATE_VARIABLE_GlobalData_0_14,
  MR_Word * STATE_VARIABLE_GlobalData_15)
{
  MR_Word Initializer_12;
  MR_Word RttiName_13;
  MR_Word RttiId_20;
  MR_Word Name_21;

  Initializer_12 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_1[4]), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_4[11]), MaybeNames_10);
  {
    RttiName_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, RttiName_13, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, RttiName_13, 1) = ((MR_Box) (MR_Word) (Ordinal_9));
  }
  {
    RttiId_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RttiId_20, 0) = ((MR_Box) (RttiTypeCtor_8));
    MR_hl_field(0, RttiId_20, 1) = ((MR_Box) (RttiName_13));
  }
  {
    Name_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Name_21, 0) = ((MR_Box) (RttiId_20));
  }
  ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_21, RttiId_20, Initializer_12, STATE_VARIABLE_GlobalData_0_14, STATE_VARIABLE_GlobalData_15);
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds____Unify____maybe__maybe_1_2(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Box ArgX1_5;

  if (succeeded)
  {
    ArgX1_5 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
    (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0)) = ArgX1_5;
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_functor_subtype_info_1_f_0(
  MR_Word Info_3)
{
  MR_Word Initializer_4;
  MR_Word TargetPrefixes_5;
  MR_String Name_6;

  backend_libs__rtti__functor_subtype_info_to_string_3_p_0(Info_3, &TargetPrefixes_5, &Name_6);
  Initializer_4 = ml_backend__ml_util__gen_init_builtin_const_2_f_0(TargetPrefixes_5, Name_6);
  return Initializer_4;
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_sectag_locn_1_f_0(
  MR_Word Locn_3)
{
  MR_Word Initializer_4;
  MR_Word TargetPrefixes_5;
  MR_String Name_6;

  backend_libs__rtti__sectag_locn_to_string_3_p_0(Locn_3, &TargetPrefixes_5, &Name_6);
  Initializer_4 = ml_backend__ml_util__gen_init_builtin_const_2_f_0(TargetPrefixes_5, Name_6);
  return Initializer_4;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_GlobalData_12;

  ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_GlobalData_12);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_GlobalData_12));
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_or_self_to_rtti_data_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Target_9,
  MR_Word RttiTypeCtor_10,
  uint32_t Ordinal_11,
  MR_Word Types_12,
  MR_Word STATE_VARIABLE_GlobalData_0_17,
  MR_Word * STATE_VARIABLE_GlobalData_18)
{
  MR_bool succeeded;
  MR_Word TypeRttiDatas_14;
  MR_Word Initializer_15;
  MR_Word RttiName_16;
  MR_Word STATE_VARIABLE_GlobalData_20_20;
  MR_Word RealRttiDatas_23;
  MR_Word ModuleName_24;
  MR_Word Var_26;
  MR_Word RttiId_30;
  MR_Word Name_31;
  MR_Box conv2_STATE_VARIABLE_GlobalData_20_20;

  TypeRttiDatas_14 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[26]), Types_12);
  RealRttiDatas_23 = mercury__list__filter_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[27]), TypeRttiDatas_14);
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_field_types_7_p_0_3));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (ModuleInfo_8));
    MR_hl_field(0, Var_26, 4) = ((MR_Box) (Target_9));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), Var_26, RealRttiDatas_23, ((MR_Box) (STATE_VARIABLE_GlobalData_0_17)), &conv2_STATE_VARIABLE_GlobalData_20_20);
  STATE_VARIABLE_GlobalData_20_20 = ((MR_Word) (conv2_STATE_VARIABLE_GlobalData_20_20));
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_24);
  Initializer_15 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0((MR_Word) ((MR_Unsigned) 32U), ModuleName_24, TypeRttiDatas_14);
  {
    RttiName_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, RttiName_16, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, RttiName_16, 1) = ((MR_Box) (MR_Word) (Ordinal_11));
  }
  {
    RttiId_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RttiId_30, 0) = ((MR_Box) (RttiTypeCtor_10));
    MR_hl_field(0, RttiId_30, 1) = ((MR_Box) (RttiName_16));
  }
  {
    Name_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Name_31, 0) = ((MR_Box) (RttiId_30));
  }
  ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_31, RttiId_30, Initializer_15, STATE_VARIABLE_GlobalData_20_20, STATE_VARIABLE_GlobalData_18);
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv7_Initializer_6;

  conv7_Initializer_6 = ml_backend__rtti_to_mlds__gen_init_exist_locn_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_Initializer_6));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv6_Initializer_8;

  conv6_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_Initializer_8));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_RttiId_14;
  MR_Word conv2_STATE_VARIABLE_Counter_27;
  MR_Word conv1_STATE_VARIABLE_GlobalData_29;

  ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_RttiId_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Counter_27, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_GlobalData_29);
  *wrapper_arg_2 = ((MR_Box) (conv3_RttiId_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Counter_27));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_GlobalData_29));
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_RttiId_10;

  ml_backend__rtti_to_mlds__make_exist_tc_constr_id_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((uint32_t) (MR_Word) (MR_hl_field(0, closure, (MR_Integer) 4))), ((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_RttiId_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_RttiId_10));
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Target_9,
  MR_Word RttiTypeCtor_10,
  uint32_t Ordinal_11,
  MR_Word ExistInfo_12,
  MR_Word STATE_VARIABLE_GlobalData_0_32,
  MR_Word * STATE_VARIABLE_GlobalData_33)
{
  uint16_t Plain_14 = ((uint16_t) (MR_Word) (MR_hl_field(0, ExistInfo_12, (MR_Integer) 0)));
  uint16_t InTci_15 = ((uint16_t) (MR_Word) (MR_hl_field(0, ExistInfo_12, (MR_Integer) 1)));
  MR_Word Constraints_16 = ((MR_Word) ((MR_hl_field(0, ExistInfo_12, (MR_Integer) 2))));
  MR_Word Locns_17 = ((MR_Word) ((MR_hl_field(0, ExistInfo_12, (MR_Integer) 3))));
  MR_Word ModuleName_18;
  MR_Word RttiName_19;
  MR_Word RttiId_20;
  MR_Integer Tci_21;
  MR_Word ConstrInitializer_22;
  MR_Word Initializer_31;
  MR_Word STATE_VARIABLE_GlobalData_46_46;
  MR_Word STATE_VARIABLE_GlobalData_47_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  int16_t Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  int16_t Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  int16_t Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_62;
  MR_Word Initializer_79;
  MR_Word RttiName_80;
  MR_Word Var_81;
  MR_Word RttiId_83;
  MR_Word Name_84;
  MR_Word Name_85;

  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_18);
  {
    RttiName_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, RttiName_19, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, RttiName_19, 1) = ((MR_Box) (MR_Word) (Ordinal_11));
  }
  {
    RttiId_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RttiId_20, 0) = ((MR_Box) (RttiTypeCtor_10));
    MR_hl_field(0, RttiId_20, 1) = ((MR_Box) (RttiName_19));
  }
  mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0), Constraints_16, &Tci_21);
  if ((Constraints_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;

    {
      Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_37, 1) = ((MR_Box) (MR_Word) (Ordinal_11));
    }
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_36, 0) = ((MR_Box) (RttiTypeCtor_10));
      MR_hl_field(0, Var_36, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_35, 0) = ((MR_Box) (Var_36));
    }
    {
      Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_34, 1) = ((MR_Box) (Var_35));
    }
    ConstrInitializer_22 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(Var_34);
    STATE_VARIABLE_GlobalData_46_46 = STATE_VARIABLE_GlobalData_0_32;
  }
  else
  {
    MR_Word TCConstrIds_25;
    MR_Word TCConstrArrayRttiName_27;
    MR_Word ElementType_29;
    MR_Word TCConstrArrayInitializer_30;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word STATE_VARIABLE_GlobalData_41_41;
    MR_Word Var_42;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word RttiId_77;
    MR_Word Name_78;
    MR_Box conv5_Var_26;
    MR_Box conv4_STATE_VARIABLE_GlobalData_41_41;

    {
      TCConstrArrayRttiName_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, TCConstrArrayRttiName_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, TCConstrArrayRttiName_27, 1) = ((MR_Box) (MR_Word) (Ordinal_11));
    }
    ConstrInitializer_22 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ModuleName_18, RttiTypeCtor_10, TCConstrArrayRttiName_27);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_42, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[5]));
      MR_hl_field(0, Var_42, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_exist_info_7_p_0_1));
      MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_42, 3) = ((MR_Box) (RttiTypeCtor_10));
      MR_hl_field(0, Var_42, 4) = ((MR_Box) (MR_Word) (Ordinal_11));
    }
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_39, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_7[0]));
      MR_hl_field(0, Var_39, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_exist_info_7_p_0_2));
      MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_39, 3) = ((MR_Box) (ModuleInfo_8));
      MR_hl_field(0, Var_39, 4) = ((MR_Box) (Target_9));
      MR_hl_field(0, Var_39, 5) = ((MR_Box) (Var_42));
    }
    Var_40 = mercury__counter__init_1_f_0((MR_Integer) 1);
    mercury__list__map_foldl2_7_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), Var_39, Constraints_16, &TCConstrIds_25, ((MR_Box) (Var_40)), &conv5_Var_26, ((MR_Box) (STATE_VARIABLE_GlobalData_0_32)), &conv4_STATE_VARIABLE_GlobalData_41_41);
    STATE_VARIABLE_GlobalData_41_41 = ((MR_Word) (conv4_STATE_VARIABLE_GlobalData_41_41));
    {
      RttiId_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, RttiId_77, 0) = ((MR_Box) (RttiTypeCtor_10));
      MR_hl_field(0, RttiId_77, 1) = ((MR_Box) (TCConstrArrayRttiName_27));
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (RttiId_77));
    }
    {
      ElementType_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ElementType_29, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, ElementType_29, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_45, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[1]));
      MR_hl_field(0, Var_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_exist_info_7_p_0_3));
      MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_45, 3) = ((MR_Box) (ElementType_29));
      MR_hl_field(0, Var_45, 4) = ((MR_Box) (ModuleName_18));
    }
    TCConstrArrayInitializer_30 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0), Var_45, TCConstrIds_25);
    {
      Name_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Name_78, 0) = ((MR_Box) (RttiId_77));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_78, RttiId_77, TCConstrArrayInitializer_30, STATE_VARIABLE_GlobalData_41_41, &STATE_VARIABLE_GlobalData_46_46);
  }
  {
    Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_81, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[4]));
    MR_hl_field(0, Var_81, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_exist_info_7_p_0_4));
    MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_81, 3) = ((MR_Box) (RttiTypeCtor_10));
  }
  Initializer_79 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0), Var_81, Locns_17);
  {
    RttiName_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RttiName_80, 0) = ((MR_Box) (MR_Word) (Ordinal_11));
  }
  {
    RttiId_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RttiId_83, 0) = ((MR_Box) (RttiTypeCtor_10));
    MR_hl_field(0, RttiId_83, 1) = ((MR_Box) (RttiName_80));
  }
  {
    Name_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Name_84, 0) = ((MR_Box) (RttiId_83));
  }
  ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_84, RttiId_83, Initializer_79, STATE_VARIABLE_GlobalData_46_46, &STATE_VARIABLE_GlobalData_47_47);
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (RttiId_20));
  }
  {
    Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_48, 1) = ((MR_Box) (Var_49));
  }
  Var_52 = mercury__int16__cast_from_uint16_1_f_0(Plain_14);
  Var_51 = ml_backend__ml_util__gen_init_int16_1_f_0(Var_52);
  Var_55 = mercury__int16__cast_from_uint16_1_f_0(InTci_15);
  Var_54 = ml_backend__ml_util__gen_init_int16_1_f_0(Var_55);
  Var_58 = mercury__int16__det_from_int_1_f_0(Tci_21);
  Var_57 = ml_backend__ml_util__gen_init_int16_1_f_0(Var_58);
  Var_60 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ModuleName_18, RttiTypeCtor_10, RttiName_80);
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (ConstrInitializer_22));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
  }
  {
    Initializer_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Initializer_31, 0) = ((MR_Box) (Var_48));
    MR_hl_field(2, Initializer_31, 1) = ((MR_Box) (Var_50));
  }
  {
    Name_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Name_85, 0) = ((MR_Box) (RttiId_20));
  }
  ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_85, RttiId_20, Initializer_31, STATE_VARIABLE_GlobalData_47_47, STATE_VARIABLE_GlobalData_33);
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_functor_desc_6_p_0(
  MR_Word _ModuleInfo_7,
  MR_Word Lang_8,
  MR_Word RttiTypeCtor_9,
  MR_Word ForeignEnumFunctor_10,
  MR_Word STATE_VARIABLE_GlobalData_0_18,
  MR_Word * STATE_VARIABLE_GlobalData_19)
{
  ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_6_p_0(Lang_8, RttiTypeCtor_9, ForeignEnumFunctor_10, STATE_VARIABLE_GlobalData_0_18, STATE_VARIABLE_GlobalData_19);
}

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_6_p_0(
  MR_Word Lang_8,
  MR_Word RttiTypeCtor_9,
  MR_Word ForeignEnumFunctor_10,
  MR_Word STATE_VARIABLE_GlobalData_0_18,
  MR_Word * STATE_VARIABLE_GlobalData_19)
{
  MR_String FunctorName_12 = ((MR_String) ((MR_hl_field(0, ForeignEnumFunctor_10, (MR_Integer) 0))));
  uint32_t Ordinal_13 = ((uint32_t) (MR_Word) (MR_hl_field(0, ForeignEnumFunctor_10, (MR_Integer) 1)));
  MR_String Value_14 = ((MR_String) ((MR_hl_field(0, ForeignEnumFunctor_10, (MR_Integer) 2))));
  MR_Word RttiName_15;
  MR_Word RttiId_16;
  MR_Word Initializer_17;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  int32_t Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Name_30;

  {
    RttiName_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, RttiName_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, RttiName_15, 1) = ((MR_Box) (MR_Word) (Ordinal_13));
  }
  {
    RttiId_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RttiId_16, 0) = ((MR_Box) (RttiTypeCtor_9));
    MR_hl_field(0, RttiId_16, 1) = ((MR_Box) (RttiName_15));
  }
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (RttiId_16));
  }
  {
    Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_20, 1) = ((MR_Box) (Var_21));
  }
  Var_23 = ml_backend__ml_util__gen_init_string_1_f_0(FunctorName_12);
  Var_26 = mercury__int32__cast_from_uint32_1_f_0(Ordinal_13);
  Var_25 = ml_backend__ml_util__gen_init_int32_1_f_0(Var_26);
  Var_28 = ml_backend__ml_util__gen_init_foreign_2_f_0(Lang_8, Value_14);
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_24));
  }
  {
    Initializer_17 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Initializer_17, 0) = ((MR_Box) (Var_20));
    MR_hl_field(2, Initializer_17, 1) = ((MR_Box) (Var_22));
  }
  {
    Name_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Name_30, 0) = ((MR_Box) (RttiId_16));
  }
  ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_30, RttiId_16, Initializer_17, STATE_VARIABLE_GlobalData_0_18, STATE_VARIABLE_GlobalData_19);
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_functor_desc_5_p_0(
  MR_Word _ModuleInfo_6,
  MR_Word RttiTypeCtor_7,
  MR_Word EnumFunctor_8,
  MR_Word STATE_VARIABLE_GlobalData_0_16,
  MR_Word * STATE_VARIABLE_GlobalData_17)
{
  ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_5_p_0(RttiTypeCtor_7, EnumFunctor_8, STATE_VARIABLE_GlobalData_0_16, STATE_VARIABLE_GlobalData_17);
}

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_5_p_0(
  MR_Word RttiTypeCtor_7,
  MR_Word EnumFunctor_8,
  MR_Word STATE_VARIABLE_GlobalData_0_16,
  MR_Word * STATE_VARIABLE_GlobalData_17)
{
  MR_String FunctorName_10 = ((MR_String) ((MR_hl_field(0, EnumFunctor_8, (MR_Integer) 0))));
  uint32_t Ordinal_11 = ((uint32_t) (MR_Word) (MR_hl_field(0, EnumFunctor_8, (MR_Integer) 1)));
  uint32_t Value_12;
  MR_Word RttiName_13;
  MR_Word RttiId_14;
  MR_Word Initializer_15;
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, EnumFunctor_8, (MR_Integer) 2))));
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  int32_t Var_25;
  MR_Word Name_27;

  Value_12 = (uint32_t) (Var_18);
  {
    RttiName_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, RttiName_13, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, RttiName_13, 1) = ((MR_Box) (MR_Word) (Ordinal_11));
  }
  {
    RttiId_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RttiId_14, 0) = ((MR_Box) (RttiTypeCtor_7));
    MR_hl_field(0, RttiId_14, 1) = ((MR_Box) (RttiName_13));
  }
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (RttiId_14));
  }
  {
    Var_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_19, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_19, 1) = ((MR_Box) (Var_20));
  }
  Var_22 = ml_backend__ml_util__gen_init_string_1_f_0(FunctorName_10);
  Var_25 = mercury__int32__cast_from_uint32_1_f_0(Value_12);
  Var_24 = ml_backend__ml_util__gen_init_int32_1_f_0(Var_25);
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_23));
  }
  {
    Initializer_15 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Initializer_15, 0) = ((MR_Box) (Var_19));
    MR_hl_field(2, Initializer_15, 1) = ((MR_Box) (Var_21));
  }
  {
    Name_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Name_27, 0) = ((MR_Box) (RttiId_14));
  }
  ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_27, RttiId_14, Initializer_15, STATE_VARIABLE_GlobalData_0_16, STATE_VARIABLE_GlobalData_17);
}

static void MR_CALL 
ml_backend__rtti_to_mlds__make_instance_constr_id_5_p_0(
  MR_Word TCName_6,
  MR_Word Types_7,
  MR_Integer TCNum_8,
  MR_Integer Arity_9,
  MR_Word * RttiId_10)
{
  MR_Word RttiName_11;

  {
    RttiName_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, RttiName_11, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, RttiName_11, 1) = ((MR_Box) (Types_7));
    MR_hl_field(3, RttiName_11, 2) = ((MR_Box) (TCNum_8));
    MR_hl_field(3, RttiName_11, 3) = ((MR_Box) (Arity_9));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *RttiId_10 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (TCName_6));
    MR_hl_field(1, base, 1) = ((MR_Box) (RttiName_11));
  }
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_id_2_f_0(
  MR_Word TCName_4,
  MR_Word MethodId_5)
{
  MR_Word Initializer_6;
  MR_String MethodName_7 = ((MR_String) ((MR_hl_field(0, MethodId_5, (MR_Integer) 0))));
  MR_Integer MethodArity_8 = ((MR_Integer) ((MR_hl_field(0, MethodId_5, (MR_Integer) 1))));
  MR_Word PredOrFunc_9 = ((MR_Unsigned) ((MR_hl_field(0, MethodId_5, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word RttiId_10;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word TargetPrefixes_21;
  MR_String Name_22;

  {
    RttiId_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RttiId_10, 0) = ((MR_Box) (TCName_4));
    MR_hl_field(1, RttiId_10, 1) = ((MR_Box) ((MR_Unsigned) 8U));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (RttiId_10));
  }
  {
    Var_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_12, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_12, 1) = ((MR_Box) (Var_13));
  }
  Var_15 = ml_backend__ml_util__gen_init_string_1_f_0(MethodName_7);
  Var_17 = ml_backend__ml_util__gen_init_int_1_f_0(MethodArity_8);
  backend_libs__rtti__pred_or_func_to_target_string_3_p_0(PredOrFunc_9, &TargetPrefixes_21, &Name_22);
  Var_19 = ml_backend__ml_util__gen_init_builtin_const_2_f_0(TargetPrefixes_21, Name_22);
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_19));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (Var_17));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_18));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_15));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_16));
  }
  {
    Initializer_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Initializer_6, 0) = ((MR_Box) (Var_12));
    MR_hl_field(2, Initializer_6, 1) = ((MR_Box) (Var_14));
  }
  return Initializer_6;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__make_decl_super_id_4_p_0(
  MR_Word TCName_5,
  MR_Integer TCNum_6,
  MR_Integer Arity_7,
  MR_Word * RttiId_8)
{
  MR_Word TCRttiName_9;

  {
    TCRttiName_9 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, TCRttiName_9, 0) = ((MR_Box) (TCNum_6));
    MR_hl_field(2, TCRttiName_9, 1) = ((MR_Box) (Arity_7));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *RttiId_8 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (TCName_5));
    MR_hl_field(1, base, 1) = ((MR_Box) (TCRttiName_9));
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__3_37;

  ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1771__2_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv8_HeadVar__3_37);
  *wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__3_37));
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv7_HeadVar__3_41;

  succeeded = ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1771__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv7_HeadVar__3_41);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__3_41));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__2_33;

  ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1770__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv6_HeadVar__2_33);
  *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_33));
}

static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Graph_14;

  ml_backend__rtti_to_mlds__add_rtti_defn_arcs_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Graph_14);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Graph_14));
}

static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Graph_12;
  MR_Word conv0_STATE_VARIABLE_NameMap_14;

  ml_backend__rtti_to_mlds__add_rtti_defn_nodes_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Graph_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_NameMap_14);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Graph_12));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_NameMap_14));
}

MR_Word MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0(
  MR_Word Defns_3)
{
  MR_bool succeeded;
  MR_Word OrdDefns_4;
  MR_Word NameMap_6;
  MR_Word RevOrdSets_7;
  MR_Word OrdSets_8;
  MR_Word OrdLists_9;
  MR_Word STATE_VARIABLE_Graph_10_10;
  MR_Word STATE_VARIABLE_Graph_12_12;
  MR_Word Var_13;
  MR_Word STATE_VARIABLE_Graph_15_15;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Box conv3_STATE_VARIABLE_Graph_12_12;
  MR_Box conv2_NameMap_6;
  MR_Box conv5_STATE_VARIABLE_Graph_15_15;

  mercury__digraph__init_1_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0), &STATE_VARIABLE_Graph_10_10);
  Var_13 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0));
  mercury__list__foldl2_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_1[0]), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[0]), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[23]), Defns_3, ((MR_Box) (STATE_VARIABLE_Graph_10_10)), &conv3_STATE_VARIABLE_Graph_12_12, ((MR_Box) (Var_13)), &conv2_NameMap_6);
  STATE_VARIABLE_Graph_12_12 = ((MR_Word) (conv3_STATE_VARIABLE_Graph_12_12));
  NameMap_6 = ((MR_Word) (conv2_NameMap_6));
  mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_1[0]), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[24]), Defns_3, ((MR_Box) (STATE_VARIABLE_Graph_12_12)), &conv5_STATE_VARIABLE_Graph_15_15);
  STATE_VARIABLE_Graph_15_15 = ((MR_Word) (conv5_STATE_VARIABLE_Graph_15_15));
  mercury__digraph__atsort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0), STATE_VARIABLE_Graph_15_15, &RevOrdSets_7);
  mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_1[1]), RevOrdSets_7, &OrdSets_8);
  mercury__list__map_3_p_0((MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_1[1]), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_1[2]), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[25]), OrdSets_8, &OrdLists_9);
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[2]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_4));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (NameMap_6));
  }
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[3]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_5));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (Var_18));
  }
  mercury__list__map_3_p_0((MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_1[2]), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_1[3]), Var_17, OrdLists_9, &OrdDefns_4);
  return OrdDefns_4;
}

void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Target_7,
  MR_Word RttiData_8,
  MR_Word STATE_VARIABLE_GlobalData_0_11,
  MR_Word * STATE_VARIABLE_GlobalData_12)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) RttiData_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RttiData_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
  MR_Word Var_13;

  if (succeeded)
  {
    Var_13 = ((MR_Word) ((MR_hl_field(3, RttiData_8, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 3);
    if (succeeded)
    {
    }
  }
  if (succeeded)
    *STATE_VARIABLE_GlobalData_12 = STATE_VARIABLE_GlobalData_0_11;
  else
    ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_5_p_0(ModuleInfo_6, Target_7, RttiData_8, STATE_VARIABLE_GlobalData_0_11, STATE_VARIABLE_GlobalData_12);
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Initializer_12;
  MR_Word conv0_STATE_VARIABLE_GlobalData_15;

  ml_backend__rtti_to_mlds__gen_init_method_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_Initializer_12, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_GlobalData_15);
  *wrapper_arg_2 = ((MR_Box) (conv1_Initializer_12));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_GlobalData_15));
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Target_7,
  MR_Word RttiData_8,
  MR_Word STATE_VARIABLE_GlobalData_0_54,
  MR_Word * STATE_VARIABLE_GlobalData_55)
{
  MR_Word RttiId_10;
  MR_Word Name_11;

  backend_libs__rtti__rtti_data_to_id_2_p_0(RttiData_8, &RttiId_10);
  {
    Name_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Name_11, 0) = ((MR_Box) (RttiId_10));
  }
  switch (MR_tag((MR_Word) RttiData_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeCtorData_29 = (MR_Word) ((MR_Word) (RttiData_8));
        uint8_t Version_30 = ((uint8_t) (MR_Word) (MR_hl_field(0, TypeCtorData_29, (MR_Integer) 0)));
        MR_Word TypeModule_31 = ((MR_Word) ((MR_hl_field(0, TypeCtorData_29, (MR_Integer) 1))));
        MR_String TypeName_32 = ((MR_String) ((MR_hl_field(0, TypeCtorData_29, (MR_Integer) 2))));
        uint16_t TypeArity_33 = ((uint16_t) (MR_Word) (MR_hl_field(0, TypeCtorData_29, (MR_Integer) 3)));
        MR_Word UnifyUniv_34 = ((MR_Word) ((MR_hl_field(0, TypeCtorData_29, (MR_Integer) 4))));
        MR_Word CompareUniv_35 = ((MR_Word) ((MR_hl_field(0, TypeCtorData_29, (MR_Integer) 5))));
        MR_Word Flags_36 = ((MR_Word) ((MR_hl_field(0, TypeCtorData_29, (MR_Integer) 6))));
        MR_Word TypeCtorDetails_37 = ((MR_Word) ((MR_hl_field(0, TypeCtorData_29, (MR_Integer) 7))));
        MR_Word RttiTypeCtor_38;
        MR_String TypeModuleName_39;
        MR_Word MaybeNumPtags_40;
        int8_t NumPtagsEncoding_42;
        MR_Word MaybeNumFunctors_43;
        MR_Integer NumFunctorsEncoding_45;
        MR_Word FunctorsRttiId_46;
        MR_Word LayoutRttiId_47;
        MR_Word FunctorsInfo_48;
        MR_Word LayoutInfo_49;
        MR_Word NumberMapInfo_50;
        MR_Word BaseTypeCtorInitializer_51;
        MR_Word UnifyInitializer_52;
        MR_Word CompareInitializer_53;
        MR_Word STATE_VARIABLE_GlobalData_75_75;
        MR_Word STATE_VARIABLE_GlobalData_76_76;
        MR_Word STATE_VARIABLE_GlobalData_77_77;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Integer Var_82;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_92;
        MR_Word Var_93;
        MR_Word Var_94;
        MR_Word Var_95;
        MR_Word Var_96;
        MR_Word Var_97;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word Var_107;
        MR_Word Var_108;
        MR_Word Var_109;
        MR_Word Var_110;
        uint16_t Var_111;
        MR_Word Var_112;
        MR_Word Var_113;
        MR_Word Initializer_116;

        {
          RttiTypeCtor_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, RttiTypeCtor_38, 0) = ((MR_Box) (TypeModule_31));
          MR_hl_field(0, RttiTypeCtor_38, 1) = ((MR_Box) (TypeName_32));
          MR_hl_field(0, RttiTypeCtor_38, 2) = ((MR_Box) (MR_Word) (TypeArity_33));
        }
        TypeModuleName_39 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeModule_31);
        MaybeNumPtags_40 = backend_libs__rtti__type_ctor_details_num_ptags_1_f_0(TypeCtorDetails_37);
        if ((MaybeNumPtags_40 == (MR_Word) ((MR_Unsigned) 0U)))
          NumPtagsEncoding_42 = INT8_C(-1);
        else
        {
          MR_Integer NumPtags_41 = ((MR_Integer) ((MR_hl_field(1, MaybeNumPtags_40, (MR_Integer) 0))));

          NumPtagsEncoding_42 = mercury__int8__det_from_int_1_f_0(NumPtags_41);
        }
        MaybeNumFunctors_43 = backend_libs__rtti__type_ctor_details_num_functors_1_f_0(TypeCtorDetails_37);
        if ((MaybeNumFunctors_43 == (MR_Word) ((MR_Unsigned) 0U)))
          NumFunctorsEncoding_45 = (MR_Integer) -1;
        else
          NumFunctorsEncoding_45 = ((MR_Integer) ((MR_hl_field(1, MaybeNumFunctors_43, (MR_Integer) 0))));
        {
          FunctorsRttiId_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FunctorsRttiId_46, 0) = ((MR_Box) (RttiTypeCtor_38));
          MR_hl_field(0, FunctorsRttiId_46, 1) = ((MR_Box) ((MR_Unsigned) 36U));
        }
        {
          LayoutRttiId_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, LayoutRttiId_47, 0) = ((MR_Box) (RttiTypeCtor_38));
          MR_hl_field(0, LayoutRttiId_47, 1) = ((MR_Box) ((MR_Unsigned) 40U));
        }
        ml_backend__rtti_to_mlds__gen_functors_layout_info_10_p_0(ModuleInfo_6, Target_7, RttiTypeCtor_38, TypeCtorDetails_37, &FunctorsInfo_48, &LayoutInfo_49, &NumberMapInfo_50, &BaseTypeCtorInitializer_51, STATE_VARIABLE_GlobalData_0_54, &STATE_VARIABLE_GlobalData_75_75);
        ml_backend__rtti_to_mlds__gen_init_special_pred_6_p_0(ModuleInfo_6, Target_7, UnifyUniv_34, &UnifyInitializer_52, STATE_VARIABLE_GlobalData_75_75, &STATE_VARIABLE_GlobalData_76_76);
        ml_backend__rtti_to_mlds__gen_init_special_pred_6_p_0(ModuleInfo_6, Target_7, CompareUniv_35, &CompareInitializer_53, STATE_VARIABLE_GlobalData_76_76, &STATE_VARIABLE_GlobalData_77_77);
        {
          Var_79 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_79, 0) = ((MR_Box) (RttiId_10));
        }
        {
          Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_78, 1) = ((MR_Box) (Var_79));
        }
        Var_82 = mercury__uint16__to_int_1_f_0(TypeArity_33);
        Var_81 = ml_backend__ml_util__gen_init_int_1_f_0(Var_82);
        Var_84 = ml_backend__ml_util__gen_init_uint8_1_f_0(Version_30);
        Var_86 = ml_backend__ml_util__gen_init_int8_1_f_0(NumPtagsEncoding_42);
        Var_88 = ml_backend__rtti_to_mlds__gen_init_type_ctor_rep_1_f_0(TypeCtorData_29);
        Var_92 = ml_backend__ml_util__gen_init_string_1_f_0(TypeModuleName_39);
        Var_94 = ml_backend__ml_util__gen_init_string_1_f_0(TypeName_32);
        {
          Var_98 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_98, 0) = ((MR_Box) (FunctorsRttiId_46));
        }
        {
          Var_97 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_97, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_97, 1) = ((MR_Box) (Var_98));
        }
        {
          Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_99, 0) = ((MR_Box) (FunctorsInfo_48));
          MR_hl_field(1, Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_96 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_96, 0) = ((MR_Box) (Var_97));
          MR_hl_field(2, Var_96, 1) = ((MR_Box) (Var_99));
        }
        {
          Var_104 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_104, 0) = ((MR_Box) (LayoutRttiId_47));
        }
        {
          Var_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_103, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, Var_103, 1) = ((MR_Box) (Var_104));
        }
        {
          Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_105, 0) = ((MR_Box) (LayoutInfo_49));
          MR_hl_field(1, Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_102 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_102, 0) = ((MR_Box) (Var_103));
          MR_hl_field(2, Var_102, 1) = ((MR_Box) (Var_105));
        }
        Var_108 = ml_backend__ml_util__gen_init_int_1_f_0(NumFunctorsEncoding_45);
        Var_111 = backend_libs__rtti__encode_type_ctor_flags_1_f_0(Flags_36);
        Var_110 = ml_backend__ml_util__gen_init_uint16_1_f_0(Var_111);
        {
          Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_113, 0) = ((MR_Box) (BaseTypeCtorInitializer_51));
          MR_hl_field(1, Var_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_112, 0) = ((MR_Box) (NumberMapInfo_50));
          MR_hl_field(1, Var_112, 1) = ((MR_Box) (Var_113));
        }
        {
          Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_109, 0) = ((MR_Box) (Var_110));
          MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_112));
        }
        {
          Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_107, 0) = ((MR_Box) (Var_108));
          MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_109));
        }
        {
          Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
          MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_107));
        }
        {
          Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
          MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_101));
        }
        {
          Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_93, 0) = ((MR_Box) (Var_94));
          MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_95));
        }
        {
          Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
          MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_93));
        }
        {
          Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_90, 0) = ((MR_Box) (CompareInitializer_53));
          MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_91));
        }
        {
          Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_89, 0) = ((MR_Box) (UnifyInitializer_52));
          MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_90));
        }
        {
          Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
          MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_89));
        }
        {
          Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
          MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_87));
        }
        {
          Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
          MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_85));
        }
        {
          Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
          MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_83));
        }
        {
          Initializer_116 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Initializer_116, 0) = ((MR_Box) (Var_78));
          MR_hl_field(2, Initializer_116, 1) = ((MR_Box) (Var_80));
        }
        ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_11, RttiId_10, Initializer_116, STATE_VARIABLE_GlobalData_77_77, STATE_VARIABLE_GlobalData_55);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TCDecl_27 = (MR_Word) (MR_body((MR_Word) (RttiData_8), (MR_Integer) 1));

        ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0(ModuleInfo_6, Target_7, TCDecl_27, Name_11, RttiId_10, STATE_VARIABLE_GlobalData_0_54, STATE_VARIABLE_GlobalData_55);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Instance_28 = (MR_Word) (MR_body((MR_Word) (RttiData_8), (MR_Integer) 2));

        ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0(ModuleInfo_6, Target_7, Instance_28, Name_11, RttiId_10, STATE_VARIABLE_GlobalData_0_54, STATE_VARIABLE_GlobalData_55);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, RttiData_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeInfo_25 = ((MR_Word) ((MR_hl_field(3, RttiData_8, (MR_Integer) 1))));

            ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0(ModuleInfo_6, Target_7, TypeInfo_25, Name_11, RttiId_10, STATE_VARIABLE_GlobalData_0_54, STATE_VARIABLE_GlobalData_55);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PseudoTypeInfo_26 = ((MR_Word) ((MR_hl_field(3, RttiData_8, (MR_Integer) 1))));

            ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0(ModuleInfo_6, Target_7, PseudoTypeInfo_26, Name_11, RttiId_10, STATE_VARIABLE_GlobalData_0_54, STATE_VARIABLE_GlobalData_55);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BaseTypeClassInfo_15 = ((MR_Word) ((MR_hl_field(3, RttiData_8, (MR_Integer) 4))));
            MR_Integer N2_17 = ((MR_Integer) ((MR_hl_field(0, BaseTypeClassInfo_15, (MR_Integer) 1))));
            MR_Integer N3_18 = ((MR_Integer) ((MR_hl_field(0, BaseTypeClassInfo_15, (MR_Integer) 2))));
            MR_Integer N4_19 = ((MR_Integer) ((MR_hl_field(0, BaseTypeClassInfo_15, (MR_Integer) 3))));
            MR_Integer N5_20 = ((MR_Integer) ((MR_hl_field(0, BaseTypeClassInfo_15, (MR_Integer) 4))));
            MR_Word Methods_21 = ((MR_Word) ((MR_hl_field(0, BaseTypeClassInfo_15, (MR_Integer) 5))));
            MR_Integer NumExtra_22 = ((MR_Integer) ((MR_hl_field(0, BaseTypeClassInfo_15, (MR_Integer) 0))));
            MR_Word MethodInitializers_23;
            MR_Word Initializer_24;
            MR_Word Var_56;
            MR_Word STATE_VARIABLE_GlobalData_57_57;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Word Var_63;
            MR_Word Var_64;
            MR_Word Var_65;
            MR_Word Var_66;
            MR_Word Var_67;
            MR_Box conv2_STATE_VARIABLE_GlobalData_57_57;

            {
              Var_56 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_56, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_10[0]));
              MR_hl_field(0, Var_56, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_5_p_0_1));
              MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_56, 3) = ((MR_Box) (ModuleInfo_6));
              MR_hl_field(0, Var_56, 4) = ((MR_Box) (Target_7));
              MR_hl_field(0, Var_56, 5) = ((MR_Box) (NumExtra_22));
            }
            mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), Var_56, Methods_21, &MethodInitializers_23, ((MR_Box) (STATE_VARIABLE_GlobalData_0_54)), &conv2_STATE_VARIABLE_GlobalData_57_57);
            STATE_VARIABLE_GlobalData_57_57 = ((MR_Word) (conv2_STATE_VARIABLE_GlobalData_57_57));
            Var_59 = ml_backend__ml_util__gen_init_boxed_int_1_f_0(NumExtra_22);
            Var_61 = ml_backend__ml_util__gen_init_boxed_int_1_f_0(N2_17);
            Var_63 = ml_backend__ml_util__gen_init_boxed_int_1_f_0(N3_18);
            Var_65 = ml_backend__ml_util__gen_init_boxed_int_1_f_0(N4_19);
            Var_67 = ml_backend__ml_util__gen_init_boxed_int_1_f_0(N5_20);
            {
              Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
              MR_hl_field(1, Var_66, 1) = ((MR_Box) (MethodInitializers_23));
            }
            {
              Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
              MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_66));
            }
            {
              Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
              MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_64));
            }
            {
              Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
              MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_62));
            }
            {
              Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
              MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_60));
            }
            {
              Initializer_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Initializer_24, 0) = ((MR_Box) (Var_58));
            }
            ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_11, RttiId_10, Initializer_24, STATE_VARIABLE_GlobalData_57_57, STATE_VARIABLE_GlobalData_55);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Target_8,
  MR_Word PTIRttiData_9,
  MR_Word * Initializer_10,
  MR_Word STATE_VARIABLE_GlobalData_0_13,
  MR_Word * STATE_VARIABLE_GlobalData_14)
{
  MR_bool succeeded;
  MR_Word ModuleName_12;

  if (((((MR_tag((MR_Word) PTIRttiData_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PTIRttiData_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
  {
    MR_Word PseudoTypeInfo_19 = ((MR_Word) ((MR_hl_field(3, PTIRttiData_9, (MR_Integer) 1))));

    if (((MR_tag((MR_Word) PseudoTypeInfo_19)) == (MR_Integer) 0))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) PseudoTypeInfo_19)) == (MR_Integer) 3))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
  }
  else
  if (((((MR_tag((MR_Word) PTIRttiData_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PTIRttiData_9, (MR_Integer) 0)))) == (MR_Integer) 0))))
  {
    MR_Word TypeInfo_17 = ((MR_Word) ((MR_hl_field(3, PTIRttiData_9, (MR_Integer) 1))));

    succeeded = ((MR_tag((MR_Word) TypeInfo_17)) == (MR_Integer) 0);
    if (succeeded)
    {
    }
  }
  else
    succeeded = MR_FALSE;
  succeeded = !(succeeded);
  if (succeeded)
  {
    MR_Word Var_23;

    succeeded = ((((MR_tag((MR_Word) PTIRttiData_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PTIRttiData_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_23 = ((MR_Word) ((MR_hl_field(3, PTIRttiData_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 3);
      if (succeeded)
      {
      }
    }
    if (succeeded)
      *STATE_VARIABLE_GlobalData_14 = STATE_VARIABLE_GlobalData_0_13;
    else
      ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_5_p_0(ModuleInfo_7, Target_8, PTIRttiData_9, STATE_VARIABLE_GlobalData_0_13, STATE_VARIABLE_GlobalData_14);
  }
  else
    *STATE_VARIABLE_GlobalData_14 = STATE_VARIABLE_GlobalData_0_13;
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_7, &ModuleName_12);
  *Initializer_10 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0((MR_Word) ((MR_Unsigned) 32U), ModuleName_12, PTIRttiData_9);
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_notag_functor_desc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ml_backend__ml_util__gen_init_string_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_notag_functor_desc_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Target_8,
  MR_Word RttiTypeCtor_9,
  MR_Word NotagFunctorDesc_10,
  MR_Word STATE_VARIABLE_GlobalData_0_21,
  MR_Word * STATE_VARIABLE_GlobalData_22)
{
  MR_bool succeeded;
  MR_String FunctorName_12 = ((MR_String) ((MR_hl_field(0, NotagFunctorDesc_10, (MR_Integer) 0))));
  MR_Word ArgType_13 = ((MR_Word) ((MR_hl_field(0, NotagFunctorDesc_10, (MR_Integer) 1))));
  MR_Word MaybeArgName_14 = ((MR_Word) ((MR_hl_field(0, NotagFunctorDesc_10, (MR_Integer) 2))));
  MR_Word FunctorSubtypeInfo_15 = ((MR_Unsigned) ((MR_hl_field(0, NotagFunctorDesc_10, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Word ArgTypeRttiData_16;
  MR_Word PTIInitializer_17;
  MR_Word RttiId_19;
  MR_Word Initializer_20;
  MR_Word STATE_VARIABLE_GlobalData_23_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word ModuleName_37;
  MR_Word TargetPrefixes_39;
  MR_String Name_40;
  MR_Word Name_41;

  ArgTypeRttiData_16 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(ArgType_13);
  succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(ArgTypeRttiData_16);
  if (succeeded)
    ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(ModuleInfo_7, Target_8, ArgTypeRttiData_16, STATE_VARIABLE_GlobalData_0_21, &STATE_VARIABLE_GlobalData_23_23);
  else
    STATE_VARIABLE_GlobalData_23_23 = STATE_VARIABLE_GlobalData_0_21;
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_7, &ModuleName_37);
  PTIInitializer_17 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0((MR_Word) ((MR_Unsigned) 32U), ModuleName_37, ArgTypeRttiData_16);
  {
    RttiId_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RttiId_19, 0) = ((MR_Box) (RttiTypeCtor_9));
    MR_hl_field(0, RttiId_19, 1) = ((MR_Box) ((MR_Unsigned) 4U));
  }
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (RttiId_19));
  }
  {
    Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_24, 1) = ((MR_Box) (Var_25));
  }
  Var_27 = ml_backend__ml_util__gen_init_string_1_f_0(FunctorName_12);
  Var_30 = ml_backend__ml_util__gen_init_maybe_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) ((MR_Unsigned) 8U), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[22]), MaybeArgName_14);
  backend_libs__rtti__functor_subtype_info_to_string_3_p_0(FunctorSubtypeInfo_15, &TargetPrefixes_39, &Name_40);
  Var_34 = ml_backend__ml_util__gen_init_builtin_const_2_f_0(TargetPrefixes_39, Name_40);
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_33));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (PTIInitializer_17));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_28));
  }
  {
    Initializer_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Initializer_20, 0) = ((MR_Box) (Var_24));
    MR_hl_field(2, Initializer_20, 1) = ((MR_Box) (Var_26));
  }
  {
    Name_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Name_41, 0) = ((MR_Box) (RttiId_19));
  }
  ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_41, RttiId_19, Initializer_20, STATE_VARIABLE_GlobalData_23_23, STATE_VARIABLE_GlobalData_22);
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_GlobalData_19;

  ml_backend__rtti_to_mlds__gen_foreign_enum_functor_desc_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_GlobalData_19);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_GlobalData_19));
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_GlobalData_17;

  ml_backend__rtti_to_mlds__gen_enum_functor_desc_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_GlobalData_17);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_GlobalData_17));
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__4_4;

  conv4_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__4_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_2;

  conv3_HeadVar__2_2 = backend_libs__rtti__du_functor_rtti_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_24;

  ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_name_ordered_table__1299__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_24);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_24));
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_GlobalData_48;

  ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_GlobalData_48);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_GlobalData_48));
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Target_12,
  MR_Word RttiTypeCtor_13,
  MR_Word TypeCtorDetails_14,
  MR_Word * FunctorInitializer_15,
  MR_Word * LayoutInitializer_16,
  MR_Word * NumberMapInitializer_17,
  MR_Word * BaseTypeCtorInitializer_18,
  MR_Word STATE_VARIABLE_GlobalData_0_44,
  MR_Word * STATE_VARIABLE_GlobalData_45)
{
  MR_Word ModuleName_20;

  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_11, &ModuleName_20);
  switch (MR_tag((MR_Word) TypeCtorDetails_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word EnumFunctors_23 = ((MR_Word) ((MR_hl_field(0, TypeCtorDetails_14, (MR_Integer) 1))));
        MR_Word EnumByOrd_24 = ((MR_Word) ((MR_hl_field(0, TypeCtorDetails_14, (MR_Integer) 2))));
        MR_Word EnumByName_25 = ((MR_Word) ((MR_hl_field(0, TypeCtorDetails_14, (MR_Integer) 3))));
        MR_Word FunctorNumberMap_26 = ((MR_Word) ((MR_hl_field(0, TypeCtorDetails_14, (MR_Integer) 4))));
        MR_Word MaybeBaseTypeCtor_27 = ((MR_Word) ((MR_hl_field(0, TypeCtorDetails_14, (MR_Integer) 5))));
        MR_Word Var_46;
        MR_Word STATE_VARIABLE_GlobalData_47_47;
        MR_Word STATE_VARIABLE_GlobalData_48_48;
        MR_Word STATE_VARIABLE_GlobalData_49_49;
        MR_Box conv6_STATE_VARIABLE_GlobalData_47_47;

        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_46, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[3]));
          MR_hl_field(0, Var_46, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_functors_layout_info_10_p_0_5));
          MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_46, 3) = ((MR_Box) (ModuleInfo_11));
          MR_hl_field(0, Var_46, 4) = ((MR_Box) (RttiTypeCtor_13));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), Var_46, EnumFunctors_23, ((MR_Box) (STATE_VARIABLE_GlobalData_0_44)), &conv6_STATE_VARIABLE_GlobalData_47_47);
        STATE_VARIABLE_GlobalData_47_47 = ((MR_Word) (conv6_STATE_VARIABLE_GlobalData_47_47));
        ml_backend__rtti_to_mlds__gen_enum_ordinal_ordered_table_5_p_0(ModuleInfo_11, RttiTypeCtor_13, EnumByOrd_24, STATE_VARIABLE_GlobalData_47_47, &STATE_VARIABLE_GlobalData_48_48);
        ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0(ModuleInfo_11, RttiTypeCtor_13, EnumByName_25, STATE_VARIABLE_GlobalData_48_48, &STATE_VARIABLE_GlobalData_49_49);
        ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(RttiTypeCtor_13, FunctorNumberMap_26, STATE_VARIABLE_GlobalData_49_49, STATE_VARIABLE_GlobalData_45);
        *LayoutInitializer_16 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ModuleName_20, RttiTypeCtor_13, (MR_Word) ((MR_Unsigned) 12U));
        *FunctorInitializer_15 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ModuleName_20, RttiTypeCtor_13, (MR_Word) ((MR_Unsigned) 8U));
        *NumberMapInitializer_17 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ModuleName_20, RttiTypeCtor_13, (MR_Word) ((MR_Unsigned) 32U));
        *BaseTypeCtorInitializer_18 = ml_backend__rtti_to_mlds__gen_init_base_type_ctor_3_f_0(ModuleName_20, Target_12, MaybeBaseTypeCtor_27);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ForeignEnumLang_28 = ((((MR_Unsigned) ((MR_hl_field(1, TypeCtorDetails_14, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
        MR_Word ForeignEnumFunctors_30 = ((MR_Word) ((MR_hl_field(1, TypeCtorDetails_14, (MR_Integer) 1))));
        MR_Word ForeignEnumByOrdinal_31 = ((MR_Word) ((MR_hl_field(1, TypeCtorDetails_14, (MR_Integer) 2))));
        MR_Word ForeignEnumByName_32 = ((MR_Word) ((MR_hl_field(1, TypeCtorDetails_14, (MR_Integer) 3))));
        MR_Word Var_54;
        MR_Word STATE_VARIABLE_GlobalData_55_55;
        MR_Word STATE_VARIABLE_GlobalData_56_56;
        MR_Word STATE_VARIABLE_GlobalData_57_57;
        MR_Word FunctorNumberMap_87 = ((MR_Word) ((MR_hl_field(1, TypeCtorDetails_14, (MR_Integer) 4))));
        MR_Box conv8_STATE_VARIABLE_GlobalData_55_55;

        {
          Var_54 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_54, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_9[1]));
          MR_hl_field(0, Var_54, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_functors_layout_info_10_p_0_6));
          MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_54, 3) = ((MR_Box) (ModuleInfo_11));
          MR_hl_field(0, Var_54, 4) = ((MR_Box) (ForeignEnumLang_28));
          MR_hl_field(0, Var_54, 5) = ((MR_Box) (RttiTypeCtor_13));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), Var_54, ForeignEnumFunctors_30, ((MR_Box) (STATE_VARIABLE_GlobalData_0_44)), &conv8_STATE_VARIABLE_GlobalData_55_55);
        STATE_VARIABLE_GlobalData_55_55 = ((MR_Word) (conv8_STATE_VARIABLE_GlobalData_55_55));
        ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0(ModuleInfo_11, RttiTypeCtor_13, ForeignEnumByOrdinal_31, STATE_VARIABLE_GlobalData_55_55, &STATE_VARIABLE_GlobalData_56_56);
        ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0(ModuleInfo_11, RttiTypeCtor_13, ForeignEnumByName_32, STATE_VARIABLE_GlobalData_56_56, &STATE_VARIABLE_GlobalData_57_57);
        ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(RttiTypeCtor_13, FunctorNumberMap_87, STATE_VARIABLE_GlobalData_57_57, STATE_VARIABLE_GlobalData_45);
        *LayoutInitializer_16 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ModuleName_20, RttiTypeCtor_13, (MR_Word) ((MR_Unsigned) 20U));
        *FunctorInitializer_15 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ModuleName_20, RttiTypeCtor_13, (MR_Word) ((MR_Unsigned) 16U));
        *NumberMapInitializer_17 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ModuleName_20, RttiTypeCtor_13, (MR_Word) ((MR_Unsigned) 32U));
        *BaseTypeCtorInitializer_18 = ml_backend__rtti_to_mlds__gen_init_base_type_ctor_3_f_0(ModuleName_20, Target_12, (MR_Word) ((MR_Unsigned) 0U));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word DuFunctors_34 = ((MR_Word) ((MR_hl_field(2, TypeCtorDetails_14, (MR_Integer) 1))));
        MR_Word DuByPtag_35 = ((MR_Word) ((MR_hl_field(2, TypeCtorDetails_14, (MR_Integer) 2))));
        MR_Word DuByName_36 = ((MR_Word) ((MR_hl_field(2, TypeCtorDetails_14, (MR_Integer) 3))));
        MR_Word Var_63;
        MR_Word STATE_VARIABLE_GlobalData_64_64;
        MR_Word STATE_VARIABLE_GlobalData_65_65;
        MR_Word STATE_VARIABLE_GlobalData_66_66;
        MR_Word FunctorNumberMap_88 = ((MR_Word) ((MR_hl_field(2, TypeCtorDetails_14, (MR_Integer) 4))));
        MR_Word MaybeBaseTypeCtor_89 = ((MR_Word) ((MR_hl_field(2, TypeCtorDetails_14, (MR_Integer) 5))));
        MR_Word ArityMaps_106;
        MR_Word FunctorLists_107;
        MR_Word Functors_108;
        MR_Word ModuleName_109;
        MR_Word FunctorRttiNames_110;
        MR_Word Initializer_111;
        MR_Word Var_120;
        MR_Word RttiId_122;
        MR_Word Name_123;
        MR_Box conv1_STATE_VARIABLE_GlobalData_64_64;

        {
          Var_63 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_63, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_9[0]));
          MR_hl_field(0, Var_63, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_functors_layout_info_10_p_0_1));
          MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_63, 3) = ((MR_Box) (ModuleInfo_11));
          MR_hl_field(0, Var_63, 4) = ((MR_Box) (Target_12));
          MR_hl_field(0, Var_63, 5) = ((MR_Box) (RttiTypeCtor_13));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), Var_63, DuFunctors_34, ((MR_Box) (STATE_VARIABLE_GlobalData_0_44)), &conv1_STATE_VARIABLE_GlobalData_64_64);
        STATE_VARIABLE_GlobalData_64_64 = ((MR_Word) (conv1_STATE_VARIABLE_GlobalData_64_64));
        ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0(ModuleInfo_11, RttiTypeCtor_13, DuByPtag_35, STATE_VARIABLE_GlobalData_64_64, &STATE_VARIABLE_GlobalData_65_65);
        mercury__map__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[2]), DuByName_36, &ArityMaps_106);
        mercury__list__map_3_p_0((MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[2]), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_1[5]), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[20]), ArityMaps_106, &FunctorLists_107);
        mercury__list__condense_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0), FunctorLists_107, &Functors_108);
        hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_11, &ModuleName_109);
        FunctorRttiNames_110 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[21]), Functors_108);
        {
          Var_120 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_120, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[3]));
          MR_hl_field(0, Var_120, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_functors_layout_info_10_p_0_4));
          MR_hl_field(0, Var_120, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_120, 3) = ((MR_Box) (ModuleName_109));
          MR_hl_field(0, Var_120, 4) = ((MR_Box) (RttiTypeCtor_13));
        }
        Initializer_111 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0), Var_120, FunctorRttiNames_110);
        {
          RttiId_122 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, RttiId_122, 0) = ((MR_Box) (RttiTypeCtor_13));
          MR_hl_field(0, RttiId_122, 1) = ((MR_Box) ((MR_Unsigned) 24U));
        }
        {
          Name_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Name_123, 0) = ((MR_Box) (RttiId_122));
        }
        ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_123, RttiId_122, Initializer_111, STATE_VARIABLE_GlobalData_65_65, &STATE_VARIABLE_GlobalData_66_66);
        ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(RttiTypeCtor_13, FunctorNumberMap_88, STATE_VARIABLE_GlobalData_66_66, STATE_VARIABLE_GlobalData_45);
        *LayoutInitializer_16 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ModuleName_20, RttiTypeCtor_13, (MR_Word) ((MR_Unsigned) 28U));
        *FunctorInitializer_15 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ModuleName_20, RttiTypeCtor_13, (MR_Word) ((MR_Unsigned) 24U));
        *NumberMapInitializer_17 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ModuleName_20, RttiTypeCtor_13, (MR_Word) ((MR_Unsigned) 32U));
        *BaseTypeCtorInitializer_18 = ml_backend__rtti_to_mlds__gen_init_base_type_ctor_3_f_0(ModuleName_20, Target_12, MaybeBaseTypeCtor_89);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeCtorDetails_14, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word NotagFunctor_38 = ((MR_Word) ((MR_hl_field(3, TypeCtorDetails_14, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_GlobalData_72_72;
            MR_Word MaybeBaseTypeCtor_90 = ((MR_Word) ((MR_hl_field(3, TypeCtorDetails_14, (MR_Integer) 3))));

            ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(RttiTypeCtor_13, (MR_Word) (MR_mkword(1, &ml_backend__rtti_to_mlds_scalar_common_1[6])), STATE_VARIABLE_GlobalData_0_44, &STATE_VARIABLE_GlobalData_72_72);
            *LayoutInitializer_16 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ModuleName_20, RttiTypeCtor_13, (MR_Word) ((MR_Unsigned) 4U));
            *FunctorInitializer_15 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ModuleName_20, RttiTypeCtor_13, (MR_Word) ((MR_Unsigned) 4U));
            *NumberMapInitializer_17 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ModuleName_20, RttiTypeCtor_13, (MR_Word) ((MR_Unsigned) 32U));
            ml_backend__rtti_to_mlds__gen_notag_functor_desc_6_p_0(ModuleInfo_11, Target_12, RttiTypeCtor_13, NotagFunctor_38, STATE_VARIABLE_GlobalData_72_72, STATE_VARIABLE_GlobalData_45);
            *BaseTypeCtorInitializer_18 = ml_backend__rtti_to_mlds__gen_init_base_type_ctor_3_f_0(ModuleName_20, Target_12, MaybeBaseTypeCtor_90);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word EqvType_39 = ((MR_Word) ((MR_hl_field(3, TypeCtorDetails_14, (MR_Integer) 1))));
            MR_Word TypeRttiData_40;

            TypeRttiData_40 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(EqvType_39);
            ml_backend__rtti_to_mlds__gen_pseudo_type_info_6_p_0(ModuleInfo_11, Target_12, TypeRttiData_40, LayoutInitializer_16, STATE_VARIABLE_GlobalData_0_44, STATE_VARIABLE_GlobalData_45);
            *FunctorInitializer_15 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) ((MR_Unsigned) 20U));
            *NumberMapInitializer_17 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) ((MR_Unsigned) 20U));
            *BaseTypeCtorInitializer_18 = ml_backend__rtti_to_mlds__gen_init_base_type_ctor_3_f_0(ModuleName_20, Target_12, (MR_Word) ((MR_Unsigned) 0U));
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
          {
            *LayoutInitializer_16 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) ((MR_Unsigned) 20U));
            *FunctorInitializer_15 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) ((MR_Unsigned) 20U));
            *NumberMapInitializer_17 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) ((MR_Unsigned) 20U));
            *BaseTypeCtorInitializer_18 = ml_backend__rtti_to_mlds__gen_init_base_type_ctor_3_f_0(ModuleName_20, Target_12, (MR_Word) ((MR_Unsigned) 0U));
            *STATE_VARIABLE_GlobalData_45 = STATE_VARIABLE_GlobalData_0_44;
          }
          break;
      }
      break;
  }
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_type_ctor_rep_1_f_0(
  MR_Word TypeCtorData_3)
{
  MR_Word Initializer_4;
  MR_Word TargetPrefixes_5;
  MR_String Name_6;

  backend_libs__rtti__type_ctor_rep_to_string_3_p_0(TypeCtorData_3, &TargetPrefixes_5, &Name_6);
  Initializer_4 = ml_backend__ml_util__gen_init_builtin_const_2_f_0(TargetPrefixes_5, Name_6);
  return Initializer_4;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_special_pred_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Target_8,
  MR_Word RttiProcIdUniv_9,
  MR_Word * Initializer_10,
  MR_Word STATE_VARIABLE_GlobalData_0_14,
  MR_Word * STATE_VARIABLE_GlobalData_15)
{
  MR_bool succeeded;
  MR_Word RttiProcId_12;
  MR_Box conv0_RttiProcId_12;
  MR_Word Var_16;
  MR_Integer Var_17;

  mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0), RttiProcIdUniv_9, &conv0_RttiProcId_12);
  RttiProcId_12 = ((MR_Word) (conv0_RttiProcId_12));
  Var_16 = ((MR_Word) ((MR_hl_field(0, RttiProcId_12, (MR_Integer) 4))));
  Var_17 = (MR_Integer) (Var_16);
  succeeded = (Var_17 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word PredLabel_35;
    MR_Word PredModule_36;
    MR_Integer ProcId_37;
    MR_Word ProcLabel_38;
    MR_Word FuncLabel_39;
    MR_Word QualFuncLabel_40;
    MR_Word Params_41;
    MR_Word Signature_42;
    MR_Word CodeAddr_43;
    MR_Word ProcAddrRval_44;
    MR_Word ProcAddrArg_45;
    MR_Word Var_47;
    MR_Word Var_48;

    ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ModuleInfo_7, RttiProcId_12, &PredLabel_35, &PredModule_36);
    ProcId_37 = ((MR_Integer) ((MR_hl_field(0, RttiProcId_12, (MR_Integer) 7))));
    {
      ProcLabel_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ProcLabel_38, 0) = ((MR_Box) (PredLabel_35));
      MR_hl_field(0, ProcLabel_38, 1) = ((MR_Box) (ProcId_37));
    }
    {
      FuncLabel_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FuncLabel_39, 0) = ((MR_Box) (ProcLabel_38));
      MR_hl_field(0, FuncLabel_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      QualFuncLabel_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, QualFuncLabel_40, 0) = ((MR_Box) (PredModule_36));
      MR_hl_field(0, QualFuncLabel_40, 1) = ((MR_Box) (FuncLabel_39));
    }
    Params_41 = ml_backend__ml_args_util__ml_gen_proc_params_from_rtti_no_gc_stmts_2_f_0(ModuleInfo_7, RttiProcId_12);
    Signature_42 = ml_backend__mlds__mlds_get_func_signature_1_f_0(Params_41);
    {
      CodeAddr_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CodeAddr_43, 0) = ((MR_Box) (QualFuncLabel_40));
      MR_hl_field(0, CodeAddr_43, 1) = ((MR_Box) (Signature_42));
    }
    Var_47 = (MR_Word) (MR_mkword(1, (MR_Word) (CodeAddr_43)));
    {
      ProcAddrRval_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ProcAddrRval_44, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, ProcAddrRval_44, 1) = ((MR_Box) (Var_47));
    }
    Var_48 = (MR_Word) (MR_mkword(2, (MR_Word) (Params_41)));
    {
      ProcAddrArg_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ProcAddrArg_45, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, ProcAddrArg_45, 1) = ((MR_Box) (Var_48));
      MR_hl_field(3, ProcAddrArg_45, 2) = ((MR_Box) (ProcAddrRval_44));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Initializer_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ProcAddrArg_45));
    }
    *STATE_VARIABLE_GlobalData_15 = STATE_VARIABLE_GlobalData_0_14;
  }
  else
    ml_backend__rtti_to_mlds__gen_wrapper_func_and_initializer_8_p_0(ModuleInfo_7, Target_8, (MR_Integer) 0, RttiProcId_12, (MR_Integer) 2, Initializer_10, STATE_VARIABLE_GlobalData_0_14, STATE_VARIABLE_GlobalData_15);
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_wrapper_func_and_initializer_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Target_10,
  MR_Integer NumExtra_11,
  MR_Word RttiProcId_12,
  MR_Word ClosureKind_13,
  MR_Word * Initializer_14,
  MR_Word STATE_VARIABLE_GlobalData_0_28,
  MR_Word * STATE_VARIABLE_GlobalData_29)
{
  MR_Word PredId_17 = ((MR_Word) ((MR_hl_field(0, RttiProcId_12, (MR_Integer) 6))));
  MR_Integer ProcId_18 = ((MR_Integer) ((MR_hl_field(0, RttiProcId_12, (MR_Integer) 7))));
  MR_Word PredProcId_19;
  MR_Word InSccMap_21;
  MR_Word TsccInfo_22;
  MR_Word ProcInfo_23;
  MR_Word Context_24;
  MR_Word WrapperFuncRval_25;
  MR_Word WrapperFuncType_26;
  MR_Word ClosureWrapperDefns_27;
  MR_Word STATE_VARIABLE_Info_35_35;
  MR_Word Var_36;
  MR_Word STATE_VARIABLE_Info_37_37;
  MR_Word STATE_VARIABLE_Info_38_38;
  MR_Word STATE_VARIABLE_GlobalData_39_39;
  MR_Word Var_41;

  {
    PredProcId_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredProcId_19, 0) = ((MR_Box) (PredId_17));
    MR_hl_field(0, PredProcId_19, 1) = ((MR_Box) (ProcId_18));
  }
  InSccMap_21 = mercury__map__singleton_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_in_scc_info_0), ((MR_Box) (PredProcId_19)), ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_2[3])));
  ml_backend__ml_gen_info__init_ml_gen_tscc_info_4_p_0(ModuleInfo_9, InSccMap_21, (MR_Integer) 0, &TsccInfo_22);
  hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo_9, PredId_17, ProcId_18, &ProcInfo_23);
  Var_36 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0));
  STATE_VARIABLE_Info_35_35 = ml_backend__ml_gen_info__ml_gen_info_init_7_f_0(ModuleInfo_9, Target_10, Var_36, PredProcId_19, ProcInfo_23, STATE_VARIABLE_GlobalData_0_28, TsccInfo_22);
  ml_backend__ml_gen_info__ml_gen_info_bump_counters_2_p_0(STATE_VARIABLE_Info_35_35, &STATE_VARIABLE_Info_37_37);
  Context_24 = mercury__term_context__dummy_context_0_f_0();
  ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_p_0(PredId_17, ProcId_18, ClosureKind_13, NumExtra_11, Context_24, &WrapperFuncRval_25, &WrapperFuncType_26, STATE_VARIABLE_Info_37_37, &STATE_VARIABLE_Info_38_38);
  ml_backend__ml_gen_info__ml_gen_info_get_closure_wrapper_defns_2_p_0(STATE_VARIABLE_Info_38_38, &ClosureWrapperDefns_27);
  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_38_38, &STATE_VARIABLE_GlobalData_39_39);
  ml_backend__ml_global_data__ml_global_data_add_closure_wrapper_func_defns_3_p_0(ClosureWrapperDefns_27, STATE_VARIABLE_GlobalData_39_39, STATE_VARIABLE_GlobalData_29);
  {
    Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_41, 1) = ((MR_Box) (WrapperFuncType_26));
    MR_hl_field(3, Var_41, 2) = ((MR_Box) (WrapperFuncRval_25));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    *Initializer_14 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_41));
  }
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_base_type_ctor_3_f_0(
  MR_Word ModuleName_5,
  MR_Word Target_6,
  MR_Word MaybeBaseTypeCtor_7)
{
  MR_bool succeeded;
  MR_Word Initializer_8;
  MR_Word Var_17;

  Var_17 = ml_backend__ml_util__mlds_target_high_level_data_1_f_0(Target_6);
  succeeded = (Var_17 == (MR_Integer) 1);
  if (succeeded)
    if ((MaybeBaseTypeCtor_7 == (MR_Word) ((MR_Unsigned) 0U)))
      Initializer_8 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) ((MR_Unsigned) 20U));
    else
    {
      MR_Word BaseTypeCtor_9 = ((MR_Word) ((MR_hl_field(1, MaybeBaseTypeCtor_7, (MR_Integer) 0))));
      MR_Word SymName_10 = ((MR_Word) ((MR_hl_field(0, BaseTypeCtor_9, (MR_Integer) 0))));
      MR_Integer Arity_11 = ((MR_Integer) ((MR_hl_field(0, BaseTypeCtor_9, (MR_Integer) 1))));
      MR_Word TypeModule_12;
      MR_String TypeName_13;
      MR_Word RttiTypeCtor_15;
      MR_Word RttiId_16;
      uint16_t Var_20;

      if (((MR_tag((MR_Word) SymName_10)) == (MR_Integer) 1))
      {
        TypeModule_12 = ((MR_Word) ((MR_hl_field(1, SymName_10, (MR_Integer) 0))));
        TypeName_13 = ((MR_String) ((MR_hl_field(1, SymName_10, (MR_Integer) 1))));
      }
      else
        mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.rtti_to_mlds.gen_init_base_type_ctor\'/3", (MR_String) "base type ctor is not module qualified");
      Var_20 = mercury__uint16__det_from_int_1_f_0(Arity_11);
      {
        RttiTypeCtor_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, RttiTypeCtor_15, 0) = ((MR_Box) (TypeModule_12));
        MR_hl_field(0, RttiTypeCtor_15, 1) = ((MR_Box) (TypeName_13));
        MR_hl_field(0, RttiTypeCtor_15, 2) = ((MR_Box) (MR_Word) (Var_20));
      }
      {
        RttiId_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, RttiId_16, 0) = ((MR_Box) (RttiTypeCtor_15));
        MR_hl_field(0, RttiId_16, 1) = ((MR_Box) ((MR_Unsigned) 44U));
      }
      Initializer_8 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ModuleName_5, RttiId_16);
    }
  else
    Initializer_8 = (MR_Word) ((MR_Unsigned) 0U);
  return Initializer_8;
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Init_4;

  conv0_Init_4 = ml_backend__rtti_to_mlds__gen_init_functor_number_1_f_0(((uint32_t) (MR_Word) wrapper_arg_1));
  wrapper_arg_2 = ((MR_Box) (conv0_Init_4));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(
  MR_Word RttiTypeCtor_5,
  MR_Word FunctorNumberMap_6,
  MR_Word STATE_VARIABLE_GlobalData_0_10,
  MR_Word * STATE_VARIABLE_GlobalData_11)
{
  MR_Word Initializer_8;
  MR_Word RttiId_14;
  MR_Word Name_15;

  Initializer_8 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[19]), FunctorNumberMap_6);
  {
    RttiId_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RttiId_14, 0) = ((MR_Box) (RttiTypeCtor_5));
    MR_hl_field(0, RttiId_14, 1) = ((MR_Box) ((MR_Unsigned) 32U));
  }
  {
    Name_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Name_15, 0) = ((MR_Box) (RttiId_14));
  }
  ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_15, RttiId_14, Initializer_8, STATE_VARIABLE_GlobalData_0_10, STATE_VARIABLE_GlobalData_11);
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_GlobalData_20;

  ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_GlobalData_20);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_GlobalData_20));
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word RttiTypeCtor_7,
  MR_Word PtagMap_8,
  MR_Word STATE_VARIABLE_GlobalData_0_19,
  MR_Word * STATE_VARIABLE_GlobalData_20)
{
  MR_Word ModuleName_10;
  MR_Word PtagList_11;
  uint8_t LeastPtag_15;
  MR_Word PtagInitializers_16;
  MR_Word Initializer_18;
  MR_Word Var_21;
  MR_Word STATE_VARIABLE_GlobalData_22_22;
  MR_Word RttiId_33;
  MR_Word Name_34;
  MR_Box conv1_STATE_VARIABLE_GlobalData_22_22;

  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_6, &ModuleName_10);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0), PtagMap_8, &PtagList_11);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[2]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (ModuleName_10));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (RttiTypeCtor_7));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[1]), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), Var_21, PtagList_11, ((MR_Box) (STATE_VARIABLE_GlobalData_0_19)), &conv1_STATE_VARIABLE_GlobalData_22_22);
  STATE_VARIABLE_GlobalData_22_22 = ((MR_Word) (conv1_STATE_VARIABLE_GlobalData_22_22));
  if ((PtagList_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.rtti_to_mlds.gen_du_ptag_ordered_table\'/5", (MR_String) "bad ptag list");
      return;
    }
  else
  {
    MR_Word FirstPtag_12;
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, PtagList_11, (MR_Integer) 0))));

    FirstPtag_12 = ((MR_Word) ((MR_hl_field(0, Var_23, (MR_Integer) 0))));
    LeastPtag_15 = (uint8_t) (FirstPtag_12);
  }
  ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_5_p_0(ModuleName_10, RttiTypeCtor_7, LeastPtag_15, PtagList_11, &PtagInitializers_16);
  {
    Initializer_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Initializer_18, 0) = ((MR_Box) (PtagInitializers_16));
  }
  {
    RttiId_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RttiId_33, 0) = ((MR_Box) (RttiTypeCtor_7));
    MR_hl_field(0, RttiId_33, 1) = ((MR_Box) ((MR_Unsigned) 28U));
  }
  {
    Name_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Name_34, 0) = ((MR_Box) (RttiId_33));
  }
  ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_34, RttiId_33, Initializer_18, STATE_VARIABLE_GlobalData_22_22, STATE_VARIABLE_GlobalData_20);
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__uint8__f_less_or_equal_2_p_0(((uint8_t) (MR_Word) (MR_hl_field(0, closure, (MR_Integer) 3))), ((uint8_t) (MR_Word) (MR_hl_field(0, closure, (MR_Integer) 4))));
  return succeeded;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_5_p_0(
  MR_Word ModuleName_1,
  MR_Word RttiTypeCtor_2,
  uint8_t LeastPtag_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Ptag_12;
    MR_Word SectagTable_13;
    MR_Word PtagTail_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Initializer_15;
    MR_Word Initializers_16;
    uint8_t PtagUint8_17;
    MR_Word SectagLocn_18;
    int8_t NumSectagBits_19;
    uint32_t NumSharers_20;
    MR_Word RttiName_22;
    MR_Word RttiId_23;
    MR_Word Flags_24;
    uint8_t NextLeastPtag_25;
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    uint8_t Var_45;
    MR_Word TargetPrefixes_48;
    MR_String Name_49;

    Ptag_12 = ((MR_Word) ((MR_hl_field(0, Var_26, (MR_Integer) 0))));
    SectagTable_13 = ((MR_Word) ((MR_hl_field(0, Var_26, (MR_Integer) 1))));
    PtagUint8_17 = (uint8_t) (Ptag_12);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_27, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[5]));
      MR_hl_field(0, Var_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_5_p_0_1));
      MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_27, 3) = ((MR_Box) (MR_Word) (LeastPtag_3));
      MR_hl_field(0, Var_27, 4) = ((MR_Box) (MR_Word) (PtagUint8_17));
    }
    mercury__require__expect_3_p_0(Var_27, (MR_String) "predicate \140ml_backend.rtti_to_mlds.gen_du_ptag_ordered_table_body\'/5", (MR_String) "ptag mismatch");
    SectagLocn_18 = ((MR_Word) ((MR_hl_field(0, SectagTable_13, (MR_Integer) 0))));
    NumSectagBits_19 = ((int8_t) (MR_Word) (MR_hl_field(0, SectagTable_13, (MR_Integer) 1)));
    NumSharers_20 = ((uint32_t) (MR_Word) (MR_hl_field(0, SectagTable_13, (MR_Integer) 2)));
    {
      RttiName_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, RttiName_22, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, RttiName_22, 1) = ((MR_Box) (Ptag_12));
    }
    {
      RttiId_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, RttiId_23, 0) = ((MR_Box) (RttiTypeCtor_2));
      MR_hl_field(0, RttiId_23, 1) = ((MR_Box) (RttiName_22));
    }
    backend_libs__type_ctor_info__compute_du_ptag_layout_flags_2_p_0(SectagTable_13, &Flags_24);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_31, 0) = ((MR_Box) (RttiId_23));
    }
    {
      Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_30, 1) = ((MR_Box) (Var_31));
    }
    Var_33 = ml_backend__ml_util__gen_init_uint32_1_f_0(NumSharers_20);
    backend_libs__rtti__sectag_locn_to_string_3_p_0(SectagLocn_18, &TargetPrefixes_48, &Name_49);
    Var_35 = ml_backend__ml_util__gen_init_builtin_const_2_f_0(TargetPrefixes_48, Name_49);
    {
      Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_38, 1) = ((MR_Box) (Ptag_12));
    }
    Var_37 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ModuleName_1, RttiTypeCtor_2, Var_38);
    Var_40 = ml_backend__ml_util__gen_init_int8_1_f_0(NumSectagBits_19);
    Var_42 = ml_backend__ml_util__gen_init_uint8_1_f_0(PtagUint8_17);
    Var_45 = backend_libs__rtti__encode_du_ptag_layout_flags_1_f_0(Flags_24);
    Var_44 = ml_backend__ml_util__gen_init_uint8_1_f_0(Var_45);
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
    }
    {
      Initializer_15 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Initializer_15, 0) = ((MR_Box) (Var_30));
      MR_hl_field(2, Initializer_15, 1) = ((MR_Box) (Var_32));
    }
    NextLeastPtag_25 = (PtagUint8_17 + UINT8_C(1));
    ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_5_p_0(ModuleName_1, RttiTypeCtor_2, NextLeastPtag_25, PtagTail_14, &Initializers_16);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Initializer_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (Initializers_16));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;

  conv1_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = backend_libs__rtti__foreign_enum_functor_rtti_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word RttiTypeCtor_7,
  MR_Word ForeignEnumByName_8,
  MR_Word STATE_VARIABLE_GlobalData_0_15,
  MR_Word * STATE_VARIABLE_GlobalData_16)
{
  MR_Word Functors_10;
  MR_Word ModuleName_11;
  MR_Word FunctorRttiNames_12;
  MR_Word Initializer_13;
  MR_Word Var_21;
  MR_Word RttiId_23;
  MR_Word Name_24;

  mercury__map__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0), ForeignEnumByName_8, &Functors_10);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_6, &ModuleName_11);
  FunctorRttiNames_12 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[18]), Functors_10);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[3]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_2));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (ModuleName_11));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (RttiTypeCtor_7));
  }
  Initializer_13 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0), Var_21, FunctorRttiNames_12);
  {
    RttiId_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RttiId_23, 0) = ((MR_Box) (RttiTypeCtor_7));
    MR_hl_field(0, RttiId_23, 1) = ((MR_Box) ((MR_Unsigned) 16U));
  }
  {
    Name_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Name_24, 0) = ((MR_Box) (RttiId_23));
  }
  ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_24, RttiId_23, Initializer_13, STATE_VARIABLE_GlobalData_0_15, STATE_VARIABLE_GlobalData_16);
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;

  conv1_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = backend_libs__rtti__foreign_enum_functor_rtti_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word RttiTypeCtor_7,
  MR_Word ForeignEnumByOrdinal_8,
  MR_Word STATE_VARIABLE_GlobalData_0_15,
  MR_Word * STATE_VARIABLE_GlobalData_16)
{
  MR_Word Functors_10;
  MR_Word ModuleName_11;
  MR_Word FunctorRttiNames_12;
  MR_Word Initializer_13;
  MR_Word Var_21;
  MR_Word RttiId_23;
  MR_Word Name_24;

  mercury__map__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0), ForeignEnumByOrdinal_8, &Functors_10);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_6, &ModuleName_11);
  FunctorRttiNames_12 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[17]), Functors_10);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[3]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_2));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (ModuleName_11));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (RttiTypeCtor_7));
  }
  Initializer_13 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0), Var_21, FunctorRttiNames_12);
  {
    RttiId_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RttiId_23, 0) = ((MR_Box) (RttiTypeCtor_7));
    MR_hl_field(0, RttiId_23, 1) = ((MR_Box) ((MR_Unsigned) 20U));
  }
  {
    Name_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Name_24, 0) = ((MR_Box) (RttiId_23));
  }
  ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_24, RttiId_23, Initializer_13, STATE_VARIABLE_GlobalData_0_15, STATE_VARIABLE_GlobalData_16);
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;

  conv1_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = backend_libs__rtti__enum_functor_rtti_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word RttiTypeCtor_7,
  MR_Word EnumByName_8,
  MR_Word STATE_VARIABLE_GlobalData_0_15,
  MR_Word * STATE_VARIABLE_GlobalData_16)
{
  MR_Word Functors_10;
  MR_Word ModuleName_11;
  MR_Word FunctorRttiNames_12;
  MR_Word Initializer_13;
  MR_Word Var_21;
  MR_Word RttiId_23;
  MR_Word Name_24;

  mercury__map__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0), EnumByName_8, &Functors_10);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_6, &ModuleName_11);
  FunctorRttiNames_12 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[16]), Functors_10);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[3]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_2));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (ModuleName_11));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (RttiTypeCtor_7));
  }
  Initializer_13 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0), Var_21, FunctorRttiNames_12);
  {
    RttiId_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RttiId_23, 0) = ((MR_Box) (RttiTypeCtor_7));
    MR_hl_field(0, RttiId_23, 1) = ((MR_Box) ((MR_Unsigned) 8U));
  }
  {
    Name_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Name_24, 0) = ((MR_Box) (RttiId_23));
  }
  ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_24, RttiId_23, Initializer_13, STATE_VARIABLE_GlobalData_0_15, STATE_VARIABLE_GlobalData_16);
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_ordinal_ordered_table_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;

  conv1_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_ordinal_ordered_table_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = backend_libs__rtti__enum_functor_rtti_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_ordinal_ordered_table_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word RttiTypeCtor_7,
  MR_Word EnumByOrd_8,
  MR_Word STATE_VARIABLE_GlobalData_0_15,
  MR_Word * STATE_VARIABLE_GlobalData_16)
{
  MR_Word Functors_10;
  MR_Word ModuleName_11;
  MR_Word FunctorRttiNames_12;
  MR_Word Initializer_13;
  MR_Word Var_21;
  MR_Word RttiId_23;
  MR_Word Name_24;

  mercury__map__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0), EnumByOrd_8, &Functors_10);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_6, &ModuleName_11);
  FunctorRttiNames_12 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[15]), Functors_10);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[3]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_enum_ordinal_ordered_table_5_p_0_2));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (ModuleName_11));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (RttiTypeCtor_7));
  }
  Initializer_13 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0), Var_21, FunctorRttiNames_12);
  {
    RttiId_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RttiId_23, 0) = ((MR_Box) (RttiTypeCtor_7));
    MR_hl_field(0, RttiId_23, 1) = ((MR_Box) ((MR_Unsigned) 12U));
  }
  {
    Name_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Name_24, 0) = ((MR_Box) (RttiId_23));
  }
  ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_24, RttiId_23, Initializer_13, STATE_VARIABLE_GlobalData_0_15, STATE_VARIABLE_GlobalData_16);
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(
  MR_Word RttiData_2)
{
  MR_bool succeeded;

  if (((((MR_tag((MR_Word) RttiData_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RttiData_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
  {
    MR_Word PseudoTypeInfo_5 = ((MR_Word) ((MR_hl_field(3, RttiData_2, (MR_Integer) 1))));

    if (((MR_tag((MR_Word) PseudoTypeInfo_5)) == (MR_Integer) 0))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) PseudoTypeInfo_5)) == (MR_Integer) 3))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
  }
  else
  if (((((MR_tag((MR_Word) RttiData_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RttiData_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
  {
    MR_Word TypeInfo_3 = ((MR_Word) ((MR_hl_field(3, RttiData_2, (MR_Integer) 1))));

    succeeded = ((MR_tag((MR_Word) TypeInfo_3)) == (MR_Integer) 0);
    if (succeeded)
    {
    }
  }
  else
    succeeded = MR_FALSE;
  succeeded = !(succeeded);
  return succeeded;
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0(
  MR_Word DestType_5,
  MR_Word ModuleName_6,
  MR_Word RttiData_7)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) RttiData_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RttiData_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
  MR_Word Initializer_8;
  MR_Integer VarNum_9;
  MR_Word Var_18;

  if (succeeded)
  {
    Var_18 = ((MR_Word) ((MR_hl_field(3, RttiData_7, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 3);
    if (succeeded)
      VarNum_9 = ((MR_Integer) ((MR_hl_field(3, Var_18, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    {
      Var_22 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_22, 0) = ((MR_Box) (VarNum_9));
    }
    {
      Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_21, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_20, 1) = ((MR_Box) (DestType_5));
      MR_hl_field(3, Var_20, 2) = ((MR_Box) (Var_21));
    }
    {
      Initializer_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Initializer_8, 0) = ((MR_Box) (Var_20));
    }
  }
  else
  {
    MR_Word TCName_11;
    MR_Word InstanceModuleName_12;
    MR_String InstanceString_13;

    succeeded = ((((MR_tag((MR_Word) RttiData_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RttiData_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      TCName_11 = ((MR_Word) ((MR_hl_field(3, RttiData_7, (MR_Integer) 1))));
      InstanceModuleName_12 = ((MR_Word) ((MR_hl_field(3, RttiData_7, (MR_Integer) 2))));
      InstanceString_13 = ((MR_String) ((MR_hl_field(3, RttiData_7, (MR_Integer) 3))));
      {
        MR_Word MLDS_ModuleName_15;
        MR_Word RttiId_16;
        MR_Word Rval_17;
        MR_Word Var_25;
        MR_Word Var_27;
        MR_Word Var_28;

        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (InstanceModuleName_12));
          MR_hl_field(1, Var_25, 1) = ((MR_Box) (InstanceString_13));
        }
        {
          RttiId_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RttiId_16, 0) = ((MR_Box) (TCName_11));
          MR_hl_field(1, RttiId_16, 1) = ((MR_Box) (Var_25));
        }
        MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(InstanceModuleName_12);
        {
          Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 18U));
          MR_hl_field(3, Var_27, 1) = ((MR_Box) (MLDS_ModuleName_15));
          MR_hl_field(3, Var_27, 2) = ((MR_Box) (RttiId_16));
        }
        {
          Rval_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Rval_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Rval_17, 1) = ((MR_Box) (Var_27));
        }
        {
          Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, Var_28, 1) = ((MR_Box) (DestType_5));
          MR_hl_field(3, Var_28, 2) = ((MR_Box) (Rval_17));
        }
        {
          Initializer_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Initializer_8, 0) = ((MR_Box) (Var_28));
        }
      }
    }
    else
    {
      MR_Word RttiId_30;

      backend_libs__rtti__rtti_data_to_id_2_p_0(RttiData_7, &RttiId_30);
      Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(DestType_5, ModuleName_6, RttiId_30);
    }
  }
  return Initializer_8;
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(
  MR_Word DestType_5,
  MR_Word ModuleName_6,
  MR_Word RttiId_7)
{
  MR_bool succeeded;
  MR_Word Initializer_8;
  MR_Word Var_11;
  MR_Word Var_12;

  if (((MR_tag((MR_Word) RttiId_7)) == (MR_Integer) 0))
  {
    MR_Word RttiTypeCtor_14 = ((MR_Word) ((MR_hl_field(0, RttiId_7, (MR_Integer) 0))));
    MR_Word RttiName_15 = ((MR_Word) ((MR_hl_field(0, RttiId_7, (MR_Integer) 1))));
    MR_Word ModuleName_29;
    MR_Word RttiTypeCtor_30;
    MR_Word MLDS_ModuleName_34;
    MR_Word RttiId_35;
    MR_Word Var_37;

    if (((((MR_tag((MR_Word) RttiName_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RttiName_15, (MR_Integer) 0)))) == (MR_Integer) 11))))
    {
      MR_Word PseudoTypeInfo_24 = ((MR_Word) ((MR_hl_field(3, RttiName_15, (MR_Integer) 1))));

      if (((MR_tag((MR_Word) PseudoTypeInfo_24)) == (MR_Integer) 1))
        succeeded = MR_TRUE;
      else
      if (((MR_tag((MR_Word) PseudoTypeInfo_24)) == (MR_Integer) 2))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    else
    if (((((MR_tag((MR_Word) RttiName_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RttiName_15, (MR_Integer) 0)))) == (MR_Integer) 10))))
    {
      MR_Word TypeInfo_19 = ((MR_Word) ((MR_hl_field(3, RttiName_15, (MR_Integer) 1))));

      if (((MR_tag((MR_Word) TypeInfo_19)) == (MR_Integer) 1))
        succeeded = MR_TRUE;
      else
      if (((MR_tag((MR_Word) TypeInfo_19)) == (MR_Integer) 2))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      ModuleName_29 = ModuleName_6;
      RttiTypeCtor_30 = RttiTypeCtor_14;
    }
    else
    {
      MR_Word RttiModuleName_31 = ((MR_Word) ((MR_hl_field(0, RttiTypeCtor_14, (MR_Integer) 0))));
      MR_String Var_36;

      succeeded = ((MR_tag((MR_Word) RttiModuleName_31)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_36 = ((MR_String) ((MR_hl_field(0, RttiModuleName_31, (MR_Integer) 0))));
        succeeded = (strcmp(Var_36, (MR_String) "") == 0);
      }
      if (succeeded)
      {
        ModuleName_29 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        RttiTypeCtor_30 = RttiTypeCtor_14;
      }
      else
      {
        ModuleName_29 = RttiModuleName_31;
        RttiTypeCtor_30 = RttiTypeCtor_14;
      }
    }
    MLDS_ModuleName_34 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_29);
    {
      RttiId_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, RttiId_35, 0) = ((MR_Box) (RttiTypeCtor_30));
      MR_hl_field(0, RttiId_35, 1) = ((MR_Box) (RttiName_15));
    }
    {
      Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 18U));
      MR_hl_field(3, Var_37, 1) = ((MR_Box) (MLDS_ModuleName_34));
      MR_hl_field(3, Var_37, 2) = ((MR_Box) (RttiId_35));
    }
    {
      Var_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_12, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_12, 1) = ((MR_Box) (Var_37));
    }
  }
  else
  {
    MR_Word TCName_17 = ((MR_Word) ((MR_hl_field(1, RttiId_7, (MR_Integer) 0))));
    MR_Word TCRttiName_18 = ((MR_Word) ((MR_hl_field(1, RttiId_7, (MR_Integer) 1))));
    MR_Word MLDS_ModuleName_40;
    MR_Word Var_47;

    switch (MR_tag((MR_Word) TCRttiName_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(TCRttiName_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ModuleName_61 = ((MR_Word) ((MR_hl_field(0, TCName_17, (MR_Integer) 0))));

              MLDS_ModuleName_40 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_61);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ModuleName_67 = ((MR_Word) ((MR_hl_field(0, TCName_17, (MR_Integer) 0))));

              MLDS_ModuleName_40 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_67);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ModuleName_64 = ((MR_Word) ((MR_hl_field(0, TCName_17, (MR_Integer) 0))));

              MLDS_ModuleName_40 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_64);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ModuleName_52 = ((MR_Word) ((MR_hl_field(0, TCName_17, (MR_Integer) 0))));

              MLDS_ModuleName_40 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_52);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ModuleName_58 = ((MR_Word) ((MR_hl_field(0, TCName_17, (MR_Integer) 0))));

              MLDS_ModuleName_40 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_58);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InstanceModuleName_38 = ((MR_Word) ((MR_hl_field(1, TCRttiName_18, (MR_Integer) 0))));

          MLDS_ModuleName_40 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(InstanceModuleName_38);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ModuleName_55 = ((MR_Word) ((MR_hl_field(0, TCName_17, (MR_Integer) 0))));

          MLDS_ModuleName_40 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_55);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TCRttiName_18, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ModuleName_70 = ((MR_Word) ((MR_hl_field(0, TCName_17, (MR_Integer) 0))));

              MLDS_ModuleName_40 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_70);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ModuleName_82 = ((MR_Word) ((MR_hl_field(0, TCName_17, (MR_Integer) 0))));

              MLDS_ModuleName_40 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_82);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ModuleName_73 = ((MR_Word) ((MR_hl_field(0, TCName_17, (MR_Integer) 0))));

              MLDS_ModuleName_40 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_73);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ModuleName_76 = ((MR_Word) ((MR_hl_field(0, TCName_17, (MR_Integer) 0))));

              MLDS_ModuleName_40 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_76);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ModuleName_79 = ((MR_Word) ((MR_hl_field(0, TCName_17, (MR_Integer) 0))));

              MLDS_ModuleName_40 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_79);
            }
            break;
        }
        break;
    }
    {
      Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 18U));
      MR_hl_field(3, Var_47, 1) = ((MR_Box) (MLDS_ModuleName_40));
      MR_hl_field(3, Var_47, 2) = ((MR_Box) (RttiId_7));
    }
    {
      Var_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_12, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_12, 1) = ((MR_Box) (Var_47));
    }
  }
  {
    Var_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_11, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_11, 1) = ((MR_Box) (DestType_5));
    MR_hl_field(3, Var_11, 2) = ((MR_Box) (Var_12));
  }
  {
    Initializer_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Initializer_8, 0) = ((MR_Box) (Var_11));
  }
  return Initializer_8;
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv9_Initializer_8;

  conv9_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv9_Initializer_8));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_GlobalData_12;

  ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_GlobalData_12);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_GlobalData_12));
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__2_2;

  conv6_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_Initializer_8;

  conv4_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_Initializer_8));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_GlobalData_12;

  ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_GlobalData_12);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_GlobalData_12));
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Target_9,
  MR_Word RttiPseudoTypeInfo_10,
  MR_Word Name_11,
  MR_Word RttiId_12,
  MR_Word STATE_VARIABLE_GlobalData_0_35,
  MR_Word * STATE_VARIABLE_GlobalData_36)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) RttiPseudoTypeInfo_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.rtti_to_mlds.gen_pseudo_type_info_defn\'/7", (MR_String) "plain_arity_zero_pseudo_type_info");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word RttiTypeCtor_15 = ((MR_Word) ((MR_hl_field(1, RttiPseudoTypeInfo_10, (MR_Integer) 0))));
        MR_Word ArgTypes_16 = ((MR_Word) ((MR_hl_field(1, RttiPseudoTypeInfo_10, (MR_Integer) 1))));
        MR_Word PDupRvalTypeMap_17;
        MR_Box conv0_Var_18;

        ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(STATE_VARIABLE_GlobalData_0_35, &PDupRvalTypeMap_17);
        succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0), PDupRvalTypeMap_17, ((MR_Box) (RttiId_12)), &conv0_Var_18);
        if (succeeded)
          succeeded = MR_TRUE;
        if (succeeded)
          *STATE_VARIABLE_GlobalData_36 = STATE_VARIABLE_GlobalData_0_35;
        else
        {
          MR_Word ArgRttiDatas_19;
          MR_Word RealRttiDatas_20;
          MR_Word ModuleName_21;
          MR_Word Initializer_22;
          MR_Word MLDS_ModuleName_23;
          MR_Word Rval_24;
          MR_Word Type_25;
          MR_Word RvalType_26;
          MR_Word Var_41;
          MR_Word STATE_VARIABLE_GlobalData_42_42;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word STATE_VARIABLE_GlobalData_52_52;
          MR_Word Var_53;
          MR_Word Var_120;
          MR_Box conv3_STATE_VARIABLE_GlobalData_42_42;

          ArgRttiDatas_19 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[11]), ArgTypes_16);
          RealRttiDatas_20 = mercury__list__filter_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[12]), ArgRttiDatas_19);
          {
            Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_41, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
            MR_hl_field(0, Var_41, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_3));
            MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_41, 3) = ((MR_Box) (ModuleInfo_8));
            MR_hl_field(0, Var_41, 4) = ((MR_Box) (Target_9));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), Var_41, RealRttiDatas_20, ((MR_Box) (STATE_VARIABLE_GlobalData_0_35)), &conv3_STATE_VARIABLE_GlobalData_42_42);
          STATE_VARIABLE_GlobalData_42_42 = ((MR_Word) (conv3_STATE_VARIABLE_GlobalData_42_42));
          hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_21);
          {
            Var_44 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_44, 0) = ((MR_Box) (RttiId_12));
          }
          {
            Type_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Type_25, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, Type_25, 1) = ((MR_Box) (Var_44));
          }
          Var_46 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ModuleName_21, RttiTypeCtor_15, (MR_Word) ((MR_Unsigned) 44U));
          {
            Var_120 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_120, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[2]));
            MR_hl_field(0, Var_120, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_4));
            MR_hl_field(0, Var_120, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_120, 3) = ((MR_Box) ((MR_Unsigned) 32U));
            MR_hl_field(0, Var_120, 4) = ((MR_Box) (ModuleName_21));
          }
          Var_49 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), Var_120, ArgRttiDatas_19);
          {
            Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
            MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
            MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
          }
          {
            Initializer_22 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Initializer_22, 0) = ((MR_Box) (Type_25));
            MR_hl_field(2, Initializer_22, 1) = ((MR_Box) (Var_45));
          }
          ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_11, RttiId_12, Initializer_22, STATE_VARIABLE_GlobalData_42_42, &STATE_VARIABLE_GlobalData_52_52);
          MLDS_ModuleName_23 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_21);
          {
            Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 18U));
            MR_hl_field(3, Var_53, 1) = ((MR_Box) (MLDS_ModuleName_23));
            MR_hl_field(3, Var_53, 2) = ((MR_Box) (RttiId_12));
          }
          {
            Rval_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Rval_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Rval_24, 1) = ((MR_Box) (Var_53));
          }
          {
            RvalType_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, RvalType_26, 0) = ((MR_Box) (Rval_24));
            MR_hl_field(0, RvalType_26, 1) = ((MR_Box) (Type_25));
          }
          ml_backend__ml_global_data__ml_global_data_add_pdup_rtti_id_4_p_0(RttiId_12, RvalType_26, STATE_VARIABLE_GlobalData_52_52, STATE_VARIABLE_GlobalData_36);
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word VarArityId_27 = ((MR_Unsigned) ((MR_hl_field(2, RttiPseudoTypeInfo_10, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word ArgTypes_96 = ((MR_Word) ((MR_hl_field(2, RttiPseudoTypeInfo_10, (MR_Integer) 1))));
        MR_Word PDupRvalTypeMap_97;
        MR_Box conv5_Var_28;

        ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(STATE_VARIABLE_GlobalData_0_35, &PDupRvalTypeMap_97);
        succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0), PDupRvalTypeMap_97, ((MR_Box) (RttiId_12)), &conv5_Var_28);
        if (succeeded)
          succeeded = MR_TRUE;
        if (succeeded)
          *STATE_VARIABLE_GlobalData_36 = STATE_VARIABLE_GlobalData_0_35;
        else
        {
          MR_Word Globals_29;
          MR_Word TargetLang_30;
          MR_Word InitRttiName_31;
          MR_Word InitCastRttiDatasArray_32;
          MR_Word InitializerArgs_33;
          MR_Word Var_58;
          MR_Word STATE_VARIABLE_GlobalData_59_59;
          MR_Word Var_70;
          MR_Word STATE_VARIABLE_GlobalData_71_71;
          MR_Word Var_72;
          MR_Word RttiTypeCtor_77;
          MR_Word ArgRttiDatas_78;
          MR_Word RealRttiDatas_79;
          MR_Word ModuleName_80;
          MR_Word Initializer_81;
          MR_Word MLDS_ModuleName_82;
          MR_Word Rval_83;
          MR_Word Type_84;
          MR_Word RvalType_85;
          MR_Word Var_122;
          MR_Box conv8_STATE_VARIABLE_GlobalData_59_59;

          ArgRttiDatas_78 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[13]), ArgTypes_96);
          RealRttiDatas_79 = mercury__list__filter_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[14]), ArgRttiDatas_78);
          {
            Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_58, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
            MR_hl_field(0, Var_58, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_7));
            MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_58, 3) = ((MR_Box) (ModuleInfo_8));
            MR_hl_field(0, Var_58, 4) = ((MR_Box) (Target_9));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), Var_58, RealRttiDatas_79, ((MR_Box) (STATE_VARIABLE_GlobalData_0_35)), &conv8_STATE_VARIABLE_GlobalData_59_59);
          STATE_VARIABLE_GlobalData_59_59 = ((MR_Word) (conv8_STATE_VARIABLE_GlobalData_59_59));
          RttiTypeCtor_77 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(VarArityId_27);
          hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_80);
          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_29);
          libs__globals__get_target_2_p_0(Globals_29, &TargetLang_30);
          InitRttiName_31 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ModuleName_80, RttiTypeCtor_77, (MR_Word) ((MR_Unsigned) 44U));
          {
            Var_122 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_122, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[2]));
            MR_hl_field(0, Var_122, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_8));
            MR_hl_field(0, Var_122, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_122, 3) = ((MR_Box) ((MR_Unsigned) 32U));
            MR_hl_field(0, Var_122, 4) = ((MR_Box) (ModuleName_80));
          }
          InitCastRttiDatasArray_32 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), Var_122, ArgRttiDatas_78);
          succeeded = (TargetLang_30 == (MR_Integer) 2);
          if (succeeded)
          {
            MR_Word Var_62;

            {
              Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_62, 0) = ((MR_Box) (InitCastRttiDatasArray_32));
              MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              InitializerArgs_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, InitializerArgs_33, 0) = ((MR_Box) (InitRttiName_31));
              MR_hl_field(1, InitializerArgs_33, 1) = ((MR_Box) (Var_62));
            }
          }
          else
          {
            MR_Word Var_64;
            MR_Word Var_65;
            MR_Integer Var_66;
            MR_Word Var_67;

            Var_66 = mercury__list__length_1_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), ArgTypes_96);
            Var_65 = ml_backend__ml_util__gen_init_int_1_f_0(Var_66);
            {
              Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_67, 0) = ((MR_Box) (InitCastRttiDatasArray_32));
              MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
              MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_67));
            }
            {
              InitializerArgs_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, InitializerArgs_33, 0) = ((MR_Box) (InitRttiName_31));
              MR_hl_field(1, InitializerArgs_33, 1) = ((MR_Box) (Var_64));
            }
          }
          {
            Var_70 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_70, 0) = ((MR_Box) (RttiId_12));
          }
          {
            Type_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Type_84, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, Type_84, 1) = ((MR_Box) (Var_70));
          }
          {
            Initializer_81 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Initializer_81, 0) = ((MR_Box) (Type_84));
            MR_hl_field(2, Initializer_81, 1) = ((MR_Box) (InitializerArgs_33));
          }
          ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_11, RttiId_12, Initializer_81, STATE_VARIABLE_GlobalData_59_59, &STATE_VARIABLE_GlobalData_71_71);
          MLDS_ModuleName_82 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_80);
          {
            Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 18U));
            MR_hl_field(3, Var_72, 1) = ((MR_Box) (MLDS_ModuleName_82));
            MR_hl_field(3, Var_72, 2) = ((MR_Box) (RttiId_12));
          }
          {
            Rval_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Rval_83, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Rval_83, 1) = ((MR_Box) (Var_72));
          }
          {
            RvalType_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, RvalType_85, 0) = ((MR_Box) (Rval_83));
            MR_hl_field(0, RvalType_85, 1) = ((MR_Box) (Type_84));
          }
          ml_backend__ml_global_data__ml_global_data_add_pdup_rtti_id_4_p_0(RttiId_12, RvalType_85, STATE_VARIABLE_GlobalData_71_71, STATE_VARIABLE_GlobalData_36);
        }
      }
      break;
    case (MR_Integer) 3:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.rtti_to_mlds.gen_pseudo_type_info_defn\'/7", (MR_String) "type_var");
        return;
      }
      break;
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv9_Initializer_8;

  conv9_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv9_Initializer_8));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_GlobalData_12;

  ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_GlobalData_12);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_GlobalData_12));
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__2_2;

  conv6_HeadVar__2_2 = backend_libs__rtti__type_info_to_rtti_data_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_Initializer_8;

  conv4_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_Initializer_8));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_GlobalData_12;

  ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_GlobalData_12);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_GlobalData_12));
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = backend_libs__rtti__type_info_to_rtti_data_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Target_9,
  MR_Word RttiTypeInfo_10,
  MR_Word Name_11,
  MR_Word RttiId_12,
  MR_Word STATE_VARIABLE_GlobalData_0_32,
  MR_Word * STATE_VARIABLE_GlobalData_33)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) RttiTypeInfo_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.rtti_to_mlds.gen_type_info_defn\'/7", (MR_String) "plain_arity_zero_type_info");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word RttiTypeCtor_15 = ((MR_Word) ((MR_hl_field(1, RttiTypeInfo_10, (MR_Integer) 0))));
        MR_Word ArgTypes_16 = ((MR_Word) ((MR_hl_field(1, RttiTypeInfo_10, (MR_Integer) 1))));
        MR_Word PDupRvalTypeMap_17;
        MR_Box conv0_Var_18;

        ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(STATE_VARIABLE_GlobalData_0_32, &PDupRvalTypeMap_17);
        succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0), PDupRvalTypeMap_17, ((MR_Box) (RttiId_12)), &conv0_Var_18);
        if (succeeded)
          succeeded = MR_TRUE;
        if (succeeded)
          *STATE_VARIABLE_GlobalData_33 = STATE_VARIABLE_GlobalData_0_32;
        else
        {
          MR_Word ArgRttiDatas_19;
          MR_Word RealRttiDatas_20;
          MR_Word ModuleName_21;
          MR_Word Initializer_22;
          MR_Word MLDS_ModuleName_23;
          MR_Word Rval_24;
          MR_Word Type_25;
          MR_Word RvalType_26;
          MR_Word Var_38;
          MR_Word STATE_VARIABLE_GlobalData_39_39;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word STATE_VARIABLE_GlobalData_49_49;
          MR_Word Var_50;
          MR_Word Var_115;
          MR_Box conv3_STATE_VARIABLE_GlobalData_39_39;

          ArgRttiDatas_19 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[7]), ArgTypes_16);
          RealRttiDatas_20 = mercury__list__filter_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[8]), ArgRttiDatas_19);
          {
            Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_38, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
            MR_hl_field(0, Var_38, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_3));
            MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_38, 3) = ((MR_Box) (ModuleInfo_8));
            MR_hl_field(0, Var_38, 4) = ((MR_Box) (Target_9));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), Var_38, RealRttiDatas_20, ((MR_Box) (STATE_VARIABLE_GlobalData_0_32)), &conv3_STATE_VARIABLE_GlobalData_39_39);
          STATE_VARIABLE_GlobalData_39_39 = ((MR_Word) (conv3_STATE_VARIABLE_GlobalData_39_39));
          hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_21);
          {
            Var_41 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_41, 0) = ((MR_Box) (RttiId_12));
          }
          {
            Type_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Type_25, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, Type_25, 1) = ((MR_Box) (Var_41));
          }
          Var_43 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ModuleName_21, RttiTypeCtor_15, (MR_Word) ((MR_Unsigned) 44U));
          {
            Var_115 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_115, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[2]));
            MR_hl_field(0, Var_115, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_4));
            MR_hl_field(0, Var_115, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_115, 3) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Var_115, 4) = ((MR_Box) (ModuleName_21));
          }
          Var_46 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), Var_115, ArgRttiDatas_19);
          {
            Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
            MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
            MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
          }
          {
            Initializer_22 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Initializer_22, 0) = ((MR_Box) (Type_25));
            MR_hl_field(2, Initializer_22, 1) = ((MR_Box) (Var_42));
          }
          ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_11, RttiId_12, Initializer_22, STATE_VARIABLE_GlobalData_39_39, &STATE_VARIABLE_GlobalData_49_49);
          MLDS_ModuleName_23 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_21);
          {
            Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 18U));
            MR_hl_field(3, Var_50, 1) = ((MR_Box) (MLDS_ModuleName_23));
            MR_hl_field(3, Var_50, 2) = ((MR_Box) (RttiId_12));
          }
          {
            Rval_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Rval_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Rval_24, 1) = ((MR_Box) (Var_50));
          }
          {
            RvalType_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, RvalType_26, 0) = ((MR_Box) (Rval_24));
            MR_hl_field(0, RvalType_26, 1) = ((MR_Box) (Type_25));
          }
          ml_backend__ml_global_data__ml_global_data_add_pdup_rtti_id_4_p_0(RttiId_12, RvalType_26, STATE_VARIABLE_GlobalData_49_49, STATE_VARIABLE_GlobalData_33);
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word VarArityId_27 = ((MR_Unsigned) ((MR_hl_field(2, RttiTypeInfo_10, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word ArgTypes_91 = ((MR_Word) ((MR_hl_field(2, RttiTypeInfo_10, (MR_Integer) 1))));
        MR_Word PDupRvalTypeMap_92;
        MR_Box conv5_Var_28;

        ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(STATE_VARIABLE_GlobalData_0_32, &PDupRvalTypeMap_92);
        succeeded = mercury__map__search_3_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0), PDupRvalTypeMap_92, ((MR_Box) (RttiId_12)), &conv5_Var_28);
        if (succeeded)
          succeeded = MR_TRUE;
        if (succeeded)
          *STATE_VARIABLE_GlobalData_33 = STATE_VARIABLE_GlobalData_0_32;
        else
        {
          MR_Word InitRttiName_29;
          MR_Word InitCastRttiDatasArray_30;
          MR_Word InitializerArgs_31;
          MR_Word Var_55;
          MR_Word STATE_VARIABLE_GlobalData_56_56;
          MR_Word Var_67;
          MR_Word STATE_VARIABLE_GlobalData_68_68;
          MR_Word Var_69;
          MR_Word RttiTypeCtor_72;
          MR_Word ArgRttiDatas_73;
          MR_Word RealRttiDatas_74;
          MR_Word ModuleName_75;
          MR_Word Initializer_76;
          MR_Word MLDS_ModuleName_77;
          MR_Word Rval_78;
          MR_Word Type_79;
          MR_Word RvalType_80;
          MR_Word Var_117;
          MR_Box conv8_STATE_VARIABLE_GlobalData_56_56;

          ArgRttiDatas_73 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[9]), ArgTypes_91);
          RealRttiDatas_74 = mercury__list__filter_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[10]), ArgRttiDatas_73);
          {
            Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_55, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
            MR_hl_field(0, Var_55, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_7));
            MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_55, 3) = ((MR_Box) (ModuleInfo_8));
            MR_hl_field(0, Var_55, 4) = ((MR_Box) (Target_9));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), Var_55, RealRttiDatas_74, ((MR_Box) (STATE_VARIABLE_GlobalData_0_32)), &conv8_STATE_VARIABLE_GlobalData_56_56);
          STATE_VARIABLE_GlobalData_56_56 = ((MR_Word) (conv8_STATE_VARIABLE_GlobalData_56_56));
          RttiTypeCtor_72 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(VarArityId_27);
          hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_75);
          InitRttiName_29 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ModuleName_75, RttiTypeCtor_72, (MR_Word) ((MR_Unsigned) 44U));
          {
            Var_117 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_117, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[2]));
            MR_hl_field(0, Var_117, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_8));
            MR_hl_field(0, Var_117, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_117, 3) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(0, Var_117, 4) = ((MR_Box) (ModuleName_75));
          }
          InitCastRttiDatasArray_30 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), Var_117, ArgRttiDatas_73);
          switch (Target_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                MR_Word Var_61;
                MR_Word Var_62;
                MR_Integer Var_63;
                MR_Word Var_64;

                Var_63 = mercury__list__length_1_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0), ArgTypes_91);
                Var_62 = ml_backend__ml_util__gen_init_int_1_f_0(Var_63);
                {
                  Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_64, 0) = ((MR_Box) (InitCastRttiDatasArray_30));
                  MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
                  MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_64));
                }
                {
                  InitializerArgs_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, InitializerArgs_31, 0) = ((MR_Box) (InitRttiName_29));
                  MR_hl_field(1, InitializerArgs_31, 1) = ((MR_Box) (Var_61));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_59;

                {
                  Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_59, 0) = ((MR_Box) (InitCastRttiDatasArray_30));
                  MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  InitializerArgs_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, InitializerArgs_31, 0) = ((MR_Box) (InitRttiName_29));
                  MR_hl_field(1, InitializerArgs_31, 1) = ((MR_Box) (Var_59));
                }
              }
              break;
          }
          {
            Var_67 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_67, 0) = ((MR_Box) (RttiId_12));
          }
          {
            Type_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Type_79, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, Type_79, 1) = ((MR_Box) (Var_67));
          }
          {
            Initializer_76 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Initializer_76, 0) = ((MR_Box) (Type_79));
            MR_hl_field(2, Initializer_76, 1) = ((MR_Box) (InitializerArgs_31));
          }
          ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_11, RttiId_12, Initializer_76, STATE_VARIABLE_GlobalData_56_56, &STATE_VARIABLE_GlobalData_68_68);
          MLDS_ModuleName_77 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_75);
          {
            Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 18U));
            MR_hl_field(3, Var_69, 1) = ((MR_Box) (MLDS_ModuleName_77));
            MR_hl_field(3, Var_69, 2) = ((MR_Box) (RttiId_12));
          }
          {
            Rval_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Rval_78, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Rval_78, 1) = ((MR_Box) (Var_69));
          }
          {
            RvalType_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, RvalType_80, 0) = ((MR_Box) (Rval_78));
            MR_hl_field(0, RvalType_80, 1) = ((MR_Box) (Type_79));
          }
          ml_backend__ml_global_data__ml_global_data_add_pdup_rtti_id_4_p_0(RttiId_12, RvalType_80, STATE_VARIABLE_GlobalData_68_68, STATE_VARIABLE_GlobalData_33);
        }
      }
      break;
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv9_Initializer_8;

  conv9_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv9_Initializer_8));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_RttiId_14;
  MR_Word conv5_STATE_VARIABLE_Counter_27;
  MR_Word conv4_STATE_VARIABLE_GlobalData_29;

  ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv6_RttiId_14, ((MR_Word) (wrapper_arg_3)), &conv5_STATE_VARIABLE_Counter_27, ((MR_Word) (wrapper_arg_5)), &conv4_STATE_VARIABLE_GlobalData_29);
  *wrapper_arg_2 = ((MR_Box) (conv6_RttiId_14));
  *wrapper_arg_4 = ((MR_Box) (conv5_STATE_VARIABLE_Counter_27));
  *wrapper_arg_6 = ((MR_Box) (conv4_STATE_VARIABLE_GlobalData_29));
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_RttiId_10;

  ml_backend__rtti_to_mlds__make_instance_constr_id_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv3_RttiId_10);
  *wrapper_arg_3 = ((MR_Box) (conv3_RttiId_10));
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_GlobalData_12;

  ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_GlobalData_12);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_GlobalData_12));
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Target_9,
  MR_Word Instance_10,
  MR_Word Name_11,
  MR_Word RttiId_12,
  MR_Word STATE_VARIABLE_GlobalData_0_33,
  MR_Word * STATE_VARIABLE_GlobalData_34)
{
  MR_bool succeeded;
  MR_Word TCName_14 = ((MR_Word) ((MR_hl_field(0, Instance_10, (MR_Integer) 0))));
  MR_Word Types_15 = ((MR_Word) ((MR_hl_field(0, Instance_10, (MR_Integer) 1))));
  MR_Integer NumTypeVars_16 = ((MR_Integer) ((MR_hl_field(0, Instance_10, (MR_Integer) 2))));
  MR_Word InstanceConstraints_17 = ((MR_Word) ((MR_hl_field(0, Instance_10, (MR_Integer) 3))));
  MR_Word TCDeclRttiId_19;
  MR_Integer NumInstanceConstraints_20;
  MR_Word InstanceTypesTCRttiName_21;
  MR_Word InstanceTypesRttiId_22;
  MR_Word InstanceConstrsTCRttiName_23;
  MR_Word InstanceConstrsRttiId_24;
  MR_Word ModuleName_25;
  MR_Word TypeRttiDatas_26;
  MR_Word TypesInitializer_27;
  MR_Word TCConstrIds_28;
  MR_Word ElementType_30;
  MR_Word InstanceConstrsInitializer_31;
  MR_Word Initializer_32;
  MR_Word STATE_VARIABLE_GlobalData_37_37;
  MR_Word STATE_VARIABLE_GlobalData_38_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word STATE_VARIABLE_GlobalData_41_41;
  MR_Word Var_42;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word STATE_VARIABLE_GlobalData_46_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word RealRttiDatas_77;
  MR_Word ModuleName_78;
  MR_Word Var_80;
  MR_Word Name_84;
  MR_Word Name_85;
  MR_Box conv2_STATE_VARIABLE_GlobalData_37_37;
  MR_Box conv8_Var_29;
  MR_Box conv7_STATE_VARIABLE_GlobalData_41_41;

  {
    TCDeclRttiId_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TCDeclRttiId_19, 0) = ((MR_Box) (TCName_14));
    MR_hl_field(1, TCDeclRttiId_19, 1) = ((MR_Box) ((MR_Unsigned) 12U));
  }
  mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0), InstanceConstraints_17, &NumInstanceConstraints_20);
  {
    InstanceTypesTCRttiName_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, InstanceTypesTCRttiName_21, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, InstanceTypesTCRttiName_21, 1) = ((MR_Box) (Types_15));
  }
  {
    InstanceTypesRttiId_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, InstanceTypesRttiId_22, 0) = ((MR_Box) (TCName_14));
    MR_hl_field(1, InstanceTypesRttiId_22, 1) = ((MR_Box) (InstanceTypesTCRttiName_21));
  }
  {
    InstanceConstrsTCRttiName_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, InstanceConstrsTCRttiName_23, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, InstanceConstrsTCRttiName_23, 1) = ((MR_Box) (Types_15));
  }
  {
    InstanceConstrsRttiId_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, InstanceConstrsRttiId_24, 0) = ((MR_Box) (TCName_14));
    MR_hl_field(1, InstanceConstrsRttiId_24, 1) = ((MR_Box) (InstanceConstrsTCRttiName_23));
  }
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_25);
  TypeRttiDatas_26 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[5]), Types_15);
  RealRttiDatas_77 = mercury__list__filter_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[6]), TypeRttiDatas_26);
  {
    Var_80 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_80, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
    MR_hl_field(0, Var_80, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_3));
    MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_80, 3) = ((MR_Box) (ModuleInfo_8));
    MR_hl_field(0, Var_80, 4) = ((MR_Box) (Target_9));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), Var_80, RealRttiDatas_77, ((MR_Box) (STATE_VARIABLE_GlobalData_0_33)), &conv2_STATE_VARIABLE_GlobalData_37_37);
  STATE_VARIABLE_GlobalData_37_37 = ((MR_Word) (conv2_STATE_VARIABLE_GlobalData_37_37));
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_78);
  TypesInitializer_27 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0((MR_Word) ((MR_Unsigned) 32U), ModuleName_78, TypeRttiDatas_26);
  {
    Name_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Name_84, 0) = ((MR_Box) (InstanceTypesRttiId_22));
  }
  ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_84, InstanceTypesRttiId_22, TypesInitializer_27, STATE_VARIABLE_GlobalData_37_37, &STATE_VARIABLE_GlobalData_38_38);
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_42, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[1]));
    MR_hl_field(0, Var_42, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_4));
    MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_42, 3) = ((MR_Box) (TCName_14));
    MR_hl_field(0, Var_42, 4) = ((MR_Box) (Types_15));
  }
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_7[0]));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_5));
    MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_39, 3) = ((MR_Box) (ModuleInfo_8));
    MR_hl_field(0, Var_39, 4) = ((MR_Box) (Target_9));
    MR_hl_field(0, Var_39, 5) = ((MR_Box) (Var_42));
  }
  Var_40 = mercury__counter__init_1_f_0((MR_Integer) 1);
  mercury__list__map_foldl2_7_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), Var_39, InstanceConstraints_17, &TCConstrIds_28, ((MR_Box) (Var_40)), &conv8_Var_29, ((MR_Box) (STATE_VARIABLE_GlobalData_38_38)), &conv7_STATE_VARIABLE_GlobalData_41_41);
  STATE_VARIABLE_GlobalData_41_41 = ((MR_Word) (conv7_STATE_VARIABLE_GlobalData_41_41));
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (InstanceConstrsRttiId_24));
  }
  {
    ElementType_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ElementType_30, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, ElementType_30, 1) = ((MR_Box) (Var_44));
  }
  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[1]));
    MR_hl_field(0, Var_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_6));
    MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_45, 3) = ((MR_Box) (ElementType_30));
    MR_hl_field(0, Var_45, 4) = ((MR_Box) (ModuleName_25));
  }
  InstanceConstrsInitializer_31 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0), Var_45, TCConstrIds_28);
  {
    Name_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Name_85, 0) = ((MR_Box) (InstanceConstrsRttiId_24));
  }
  ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_85, InstanceConstrsRttiId_24, InstanceConstrsInitializer_31, STATE_VARIABLE_GlobalData_41_41, &STATE_VARIABLE_GlobalData_46_46);
  {
    Var_48 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_48, 0) = ((MR_Box) (RttiId_12));
  }
  {
    Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_47, 1) = ((MR_Box) (Var_48));
  }
  Var_50 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ModuleName_25, TCDeclRttiId_19);
  Var_52 = ml_backend__ml_util__gen_init_int_1_f_0(NumTypeVars_16);
  Var_54 = ml_backend__ml_util__gen_init_int_1_f_0(NumInstanceConstraints_20);
  Var_56 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ModuleName_25, InstanceTypesRttiId_22);
  Var_58 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ModuleName_25, InstanceConstrsRttiId_24);
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_57));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_51));
  }
  {
    Initializer_32 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Initializer_32, 0) = ((MR_Box) (Var_47));
    MR_hl_field(2, Initializer_32, 1) = ((MR_Box) (Var_49));
  }
  ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_11, RttiId_12, Initializer_32, STATE_VARIABLE_GlobalData_46_46, STATE_VARIABLE_GlobalData_34);
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Initializer_8;

  conv0_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Initializer_8));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0(
  MR_Word Type_5,
  MR_Word ModuleName_6,
  MR_Word RttiDatas_7)
{
  MR_Word HeadVar__4_4;
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[2]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Type_5));
    MR_hl_field(0, Var_8, 4) = ((MR_Box) (ModuleName_6));
  }
  HeadVar__4_4 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), Var_8, RttiDatas_7);
  return HeadVar__4_4;
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv8_Initializer_8;

  conv8_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv8_Initializer_8));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_RttiId_14;
  MR_Word conv4_STATE_VARIABLE_Counter_27;
  MR_Word conv3_STATE_VARIABLE_GlobalData_29;

  ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv5_RttiId_14, ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_Counter_27, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_GlobalData_29);
  *wrapper_arg_2 = ((MR_Box) (conv5_RttiId_14));
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_Counter_27));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_GlobalData_29));
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_RttiId_8;

  ml_backend__rtti_to_mlds__make_decl_super_id_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv2_RttiId_8);
  *wrapper_arg_3 = ((MR_Box) (conv2_RttiId_8));
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Initializer_6;

  conv1_Initializer_6 = ml_backend__rtti_to_mlds__gen_tc_id_method_id_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Initializer_6));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ml_backend__ml_util__gen_init_string_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Target_9,
  MR_Word TCDecl_10,
  MR_Word Name_11,
  MR_Word RttiId_12,
  MR_Word STATE_VARIABLE_GlobalData_0_51,
  MR_Word * STATE_VARIABLE_GlobalData_52)
{
  MR_Word TCId_14 = ((MR_Word) ((MR_hl_field(0, TCDecl_10, (MR_Integer) 0))));
  MR_Integer Version_15 = ((MR_Integer) ((MR_hl_field(0, TCDecl_10, (MR_Integer) 1))));
  MR_Word Supers_16 = ((MR_Word) ((MR_hl_field(0, TCDecl_10, (MR_Integer) 2))));
  MR_Word TCName_17 = ((MR_Word) ((MR_hl_field(0, TCId_14, (MR_Integer) 0))));
  MR_Word TVarNames_18 = ((MR_Word) ((MR_hl_field(0, TCId_14, (MR_Integer) 1))));
  MR_Word MethodIds_19 = ((MR_Word) ((MR_hl_field(0, TCId_14, (MR_Integer) 2))));
  MR_Word ModuleSymName_20 = ((MR_Word) ((MR_hl_field(0, TCName_17, (MR_Integer) 0))));
  MR_String ClassName_21 = ((MR_String) ((MR_hl_field(0, TCName_17, (MR_Integer) 1))));
  MR_Integer Arity_22 = ((MR_Integer) ((MR_hl_field(0, TCName_17, (MR_Integer) 2))));
  MR_Word ModuleName_23;
  MR_Word TVarNamesRttiId_24;
  MR_Word TVarNamesInitializer_26;
  MR_Word MethodIdsRttiId_29;
  MR_Word MethodIdsInitializer_31;
  MR_Word TCIdRttiId_34;
  MR_String ModuleSymNameStr_35;
  MR_Integer NumTVars_36;
  MR_Integer NumMethods_37;
  MR_Word TCIdInitializer_38;
  MR_Word SupersInitType_47;
  MR_Word SupersInitializer_48;
  MR_Integer NumSupers_49;
  MR_Word Initializer_50;
  MR_Word STATE_VARIABLE_GlobalData_55_55;
  MR_Word STATE_VARIABLE_GlobalData_58_58;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word STATE_VARIABLE_GlobalData_75_75;
  MR_Word STATE_VARIABLE_GlobalData_83_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Name_121;

  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_23);
  {
    TVarNamesRttiId_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TVarNamesRttiId_24, 0) = ((MR_Box) (TCName_17));
    MR_hl_field(1, TVarNamesRttiId_24, 1) = ((MR_Box) ((MR_Unsigned) 4U));
  }
  if ((TVarNames_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word TVarNamesInitType_25;
    MR_Word Var_54;

    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_54, 0) = ((MR_Box) (TVarNamesRttiId_24));
    }
    {
      TVarNamesInitType_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, TVarNamesInitType_25, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, TVarNamesInitType_25, 1) = ((MR_Box) (Var_54));
    }
    TVarNamesInitializer_26 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(TVarNamesInitType_25);
    STATE_VARIABLE_GlobalData_55_55 = STATE_VARIABLE_GlobalData_0_51;
  }
  else
  {
    MR_Word Initializer_113;
    MR_Word Name_116;

    Initializer_113 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__rtti_to_mlds_scalar_common_2[4]), TVarNames_18);
    {
      Name_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Name_116, 0) = ((MR_Box) (TVarNamesRttiId_24));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_116, TVarNamesRttiId_24, Initializer_113, STATE_VARIABLE_GlobalData_0_51, &STATE_VARIABLE_GlobalData_55_55);
    TVarNamesInitializer_26 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ModuleName_23, TVarNamesRttiId_24);
  }
  {
    MethodIdsRttiId_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MethodIdsRttiId_29, 0) = ((MR_Box) (TCName_17));
    MR_hl_field(1, MethodIdsRttiId_29, 1) = ((MR_Box) ((MR_Unsigned) 8U));
  }
  if ((MethodIds_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MethodIdsInitType_30;
    MR_Word Var_57;

    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_57, 0) = ((MR_Box) (MethodIdsRttiId_29));
    }
    {
      MethodIdsInitType_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MethodIdsInitType_30, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, MethodIdsInitType_30, 1) = ((MR_Box) (Var_57));
    }
    MethodIdsInitializer_31 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(MethodIdsInitType_30);
    STATE_VARIABLE_GlobalData_58_58 = STATE_VARIABLE_GlobalData_55_55;
  }
  else
  {
    MR_Word Initializer_117;
    MR_Word Var_118;
    MR_Word Name_120;

    {
      Var_118 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_118, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[0]));
      MR_hl_field(0, Var_118, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0_2));
      MR_hl_field(0, Var_118, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_118, 3) = ((MR_Box) (TCName_17));
    }
    Initializer_117 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0), Var_118, MethodIds_19);
    {
      Name_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Name_120, 0) = ((MR_Box) (MethodIdsRttiId_29));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_120, MethodIdsRttiId_29, Initializer_117, STATE_VARIABLE_GlobalData_55_55, &STATE_VARIABLE_GlobalData_58_58);
    MethodIdsInitializer_31 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ModuleName_23, MethodIdsRttiId_29);
  }
  {
    TCIdRttiId_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TCIdRttiId_34, 0) = ((MR_Box) (TCName_17));
    MR_hl_field(1, TCIdRttiId_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ModuleSymNameStr_35 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleSymName_20);
  mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TVarNames_18, &NumTVars_36);
  mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0), MethodIds_19, &NumMethods_37);
  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (TCIdRttiId_34));
  }
  {
    Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_60, 1) = ((MR_Box) (Var_61));
  }
  Var_63 = ml_backend__ml_util__gen_init_string_1_f_0(ModuleSymNameStr_35);
  Var_65 = ml_backend__ml_util__gen_init_string_1_f_0(ClassName_21);
  Var_67 = ml_backend__ml_util__gen_init_int_1_f_0(Arity_22);
  Var_69 = ml_backend__ml_util__gen_init_int_1_f_0(NumTVars_36);
  Var_71 = ml_backend__ml_util__gen_init_int_1_f_0(NumMethods_37);
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) (MethodIdsInitializer_31));
    MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (TVarNamesInitializer_26));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_73));
  }
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_72));
  }
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_70));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_68));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_66));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_64));
  }
  {
    TCIdInitializer_38 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, TCIdInitializer_38, 0) = ((MR_Box) (Var_60));
    MR_hl_field(2, TCIdInitializer_38, 1) = ((MR_Box) (Var_62));
  }
  {
    Name_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Name_121, 0) = ((MR_Box) (TCIdRttiId_34));
  }
  ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_121, TCIdRttiId_34, TCIdInitializer_38, STATE_VARIABLE_GlobalData_58_58, &STATE_VARIABLE_GlobalData_75_75);
  if ((Supers_16 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_GlobalData_83_83 = STATE_VARIABLE_GlobalData_75_75;
  else
  {
    MR_Word SuperRttiIds_41;
    MR_Word SuperArrayRttiId_44;
    MR_Word ElementType_45;
    MR_Word SuperArrayInitializer_46;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word STATE_VARIABLE_GlobalData_78_78;
    MR_Word Var_79;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Box conv7_Var_42;
    MR_Box conv6_STATE_VARIABLE_GlobalData_78_78;

    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_79, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[0]));
      MR_hl_field(0, Var_79, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0_3));
      MR_hl_field(0, Var_79, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_79, 3) = ((MR_Box) (TCName_17));
    }
    {
      Var_76 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_76, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_7[0]));
      MR_hl_field(0, Var_76, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0_4));
      MR_hl_field(0, Var_76, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_76, 3) = ((MR_Box) (ModuleInfo_8));
      MR_hl_field(0, Var_76, 4) = ((MR_Box) (Target_9));
      MR_hl_field(0, Var_76, 5) = ((MR_Box) (Var_79));
    }
    Var_77 = mercury__counter__init_1_f_0((MR_Integer) 1);
    mercury__list__map_foldl2_7_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), Var_76, Supers_16, &SuperRttiIds_41, ((MR_Box) (Var_77)), &conv7_Var_42, ((MR_Box) (STATE_VARIABLE_GlobalData_75_75)), &conv6_STATE_VARIABLE_GlobalData_78_78);
    STATE_VARIABLE_GlobalData_78_78 = ((MR_Word) (conv6_STATE_VARIABLE_GlobalData_78_78));
    {
      SuperArrayRttiId_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SuperArrayRttiId_44, 0) = ((MR_Box) (TCName_17));
      MR_hl_field(1, SuperArrayRttiId_44, 1) = ((MR_Box) ((MR_Unsigned) 16U));
    }
    {
      Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_81, 0) = ((MR_Box) (SuperArrayRttiId_44));
    }
    {
      ElementType_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ElementType_45, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, ElementType_45, 1) = ((MR_Box) (Var_81));
    }
    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_82, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[1]));
      MR_hl_field(0, Var_82, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0_5));
      MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_82, 3) = ((MR_Box) (ElementType_45));
      MR_hl_field(0, Var_82, 4) = ((MR_Box) (ModuleName_23));
    }
    SuperArrayInitializer_46 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0), Var_82, SuperRttiIds_41);
    ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(SuperArrayRttiId_44, SuperArrayInitializer_46, STATE_VARIABLE_GlobalData_78_78, &STATE_VARIABLE_GlobalData_83_83);
  }
  {
    Var_84 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_84, 0) = ((MR_Box) (MethodIdsRttiId_29));
  }
  {
    SupersInitType_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, SupersInitType_47, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, SupersInitType_47, 1) = ((MR_Box) (Var_84));
  }
  SupersInitializer_48 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(SupersInitType_47);
  mercury__list__length_2_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0), Supers_16, &NumSupers_49);
  {
    Var_86 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_86, 0) = ((MR_Box) (RttiId_12));
  }
  {
    Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_85, 1) = ((MR_Box) (Var_86));
  }
  Var_88 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ModuleName_23, TCIdRttiId_34);
  Var_90 = ml_backend__ml_util__gen_init_int_1_f_0(Version_15);
  Var_92 = ml_backend__ml_util__gen_init_int_1_f_0(NumSupers_49);
  {
    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_93, 0) = ((MR_Box) (SupersInitializer_48));
    MR_hl_field(1, Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_93));
  }
  {
    Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
    MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_91));
  }
  {
    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
    MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_89));
  }
  {
    Initializer_50 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Initializer_50, 0) = ((MR_Box) (Var_85));
    MR_hl_field(2, Initializer_50, 1) = ((MR_Box) (Var_87));
  }
  ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_11, RttiId_12, Initializer_50, STATE_VARIABLE_GlobalData_83_83, STATE_VARIABLE_GlobalData_52);
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(
  MR_Word ModuleName_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_Word RttiTypeCtor_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word RttiName_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    HeadVar__3_3 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ModuleName_1, RttiTypeCtor_5, RttiName_6);
  }
  else
  {
    MR_Word TCName_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TCRttiName_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word MLDS_ModuleName_13;
    MR_Word Var_20;

    switch (MR_tag((MR_Word) TCRttiName_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(TCRttiName_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ModuleName_34 = ((MR_Word) ((MR_hl_field(0, TCName_8, (MR_Integer) 0))));

              MLDS_ModuleName_13 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_34);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ModuleName_40 = ((MR_Word) ((MR_hl_field(0, TCName_8, (MR_Integer) 0))));

              MLDS_ModuleName_13 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_40);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ModuleName_37 = ((MR_Word) ((MR_hl_field(0, TCName_8, (MR_Integer) 0))));

              MLDS_ModuleName_13 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_37);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ModuleName_25 = ((MR_Word) ((MR_hl_field(0, TCName_8, (MR_Integer) 0))));

              MLDS_ModuleName_13 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_25);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ModuleName_31 = ((MR_Word) ((MR_hl_field(0, TCName_8, (MR_Integer) 0))));

              MLDS_ModuleName_13 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_31);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InstanceModuleName_11 = ((MR_Word) ((MR_hl_field(1, TCRttiName_9, (MR_Integer) 0))));

          MLDS_ModuleName_13 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(InstanceModuleName_11);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ModuleName_28 = ((MR_Word) ((MR_hl_field(0, TCName_8, (MR_Integer) 0))));

          MLDS_ModuleName_13 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_28);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TCRttiName_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ModuleName_43 = ((MR_Word) ((MR_hl_field(0, TCName_8, (MR_Integer) 0))));

              MLDS_ModuleName_13 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_43);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ModuleName_55 = ((MR_Word) ((MR_hl_field(0, TCName_8, (MR_Integer) 0))));

              MLDS_ModuleName_13 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_55);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ModuleName_46 = ((MR_Word) ((MR_hl_field(0, TCName_8, (MR_Integer) 0))));

              MLDS_ModuleName_13 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_46);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ModuleName_49 = ((MR_Word) ((MR_hl_field(0, TCName_8, (MR_Integer) 0))));

              MLDS_ModuleName_13 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_49);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ModuleName_52 = ((MR_Word) ((MR_hl_field(0, TCName_8, (MR_Integer) 0))));

              MLDS_ModuleName_13 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_52);
            }
            break;
        }
        break;
    }
    {
      Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 18U));
      MR_hl_field(3, Var_20, 1) = ((MR_Box) (MLDS_ModuleName_13));
      MR_hl_field(3, Var_20, 2) = ((MR_Box) (HeadVar__2_2));
    }
    {
      Var_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_10, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_10, 1) = ((MR_Box) (Var_20));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_10));
    }
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(
  MR_Word ModuleName_5,
  MR_Word RttiTypeCtor_6,
  MR_Word RttiName_7)
{
  MR_bool succeeded;
  MR_Word HeadVar__4_4;
  MR_Word Var_8;
  MR_Word ModuleName_19;
  MR_Word RttiTypeCtor_20;
  MR_Word MLDS_ModuleName_24;
  MR_Word RttiId_25;
  MR_Word Var_27;

  if (((((MR_tag((MR_Word) RttiName_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RttiName_7, (MR_Integer) 0)))) == (MR_Integer) 11))))
  {
    MR_Word PseudoTypeInfo_14 = ((MR_Word) ((MR_hl_field(3, RttiName_7, (MR_Integer) 1))));

    if (((MR_tag((MR_Word) PseudoTypeInfo_14)) == (MR_Integer) 1))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) PseudoTypeInfo_14)) == (MR_Integer) 2))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
  }
  else
  if (((((MR_tag((MR_Word) RttiName_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RttiName_7, (MR_Integer) 0)))) == (MR_Integer) 10))))
  {
    MR_Word TypeInfo_9 = ((MR_Word) ((MR_hl_field(3, RttiName_7, (MR_Integer) 1))));

    if (((MR_tag((MR_Word) TypeInfo_9)) == (MR_Integer) 1))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) TypeInfo_9)) == (MR_Integer) 2))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
  {
    ModuleName_19 = ModuleName_5;
    RttiTypeCtor_20 = RttiTypeCtor_6;
  }
  else
  {
    MR_Word RttiModuleName_21 = ((MR_Word) ((MR_hl_field(0, RttiTypeCtor_6, (MR_Integer) 0))));
    MR_String Var_26;

    succeeded = ((MR_tag((MR_Word) RttiModuleName_21)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_26 = ((MR_String) ((MR_hl_field(0, RttiModuleName_21, (MR_Integer) 0))));
      succeeded = (strcmp(Var_26, (MR_String) "") == 0);
    }
    if (succeeded)
    {
      ModuleName_19 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      RttiTypeCtor_20 = RttiTypeCtor_6;
    }
    else
    {
      ModuleName_19 = RttiModuleName_21;
      RttiTypeCtor_20 = RttiTypeCtor_6;
    }
  }
  MLDS_ModuleName_24 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_19);
  {
    RttiId_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RttiId_25, 0) = ((MR_Box) (RttiTypeCtor_20));
    MR_hl_field(0, RttiId_25, 1) = ((MR_Box) (RttiName_7));
  }
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 18U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (MLDS_ModuleName_24));
    MR_hl_field(3, Var_27, 2) = ((MR_Box) (RttiId_25));
  }
  {
    Var_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_8, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_8, 1) = ((MR_Box) (Var_27));
  }
  {
    HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (Var_8));
  }
  return HeadVar__4_4;
}

static void MR_CALL 
ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(
  MR_Word RttiId_5,
  MR_Word Initializer_6,
  MR_Word STATE_VARIABLE_GlobalData_0_9,
  MR_Word * STATE_VARIABLE_GlobalData_10)
{
  MR_Word Name_8;

  {
    Name_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Name_8, 0) = ((MR_Box) (RttiId_5));
  }
  ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(Name_8, RttiId_5, Initializer_6, STATE_VARIABLE_GlobalData_0_9, STATE_VARIABLE_GlobalData_10);
}

static void MR_CALL 
ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(
  MR_Word Name_6,
  MR_Word RttiId_7,
  MR_Word Initializer_8,
  MR_Word STATE_VARIABLE_GlobalData_0_17,
  MR_Word * STATE_VARIABLE_GlobalData_18)
{
  MR_Word Context_10;
  MR_Word Exported_11;
  MR_Word Access_12;
  MR_Word Flags_13;
  MR_Word MLDS_Type_15;
  MR_Word DataDefn_16;
  MR_Word Var_19;

  Context_10 = mercury__term_context__dummy_context_0_f_0();
  Exported_11 = backend_libs__rtti__rtti_id_is_exported_1_f_0(RttiId_7);
  switch (Exported_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Access_12 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      Access_12 = (MR_Integer) 1;
      break;
  }
  {
    Flags_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Flags_13, 0) = (MR_Box) (((((MR_Unsigned) (Access_12) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
  }
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (RttiId_7));
  }
  {
    MLDS_Type_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MLDS_Type_15, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, MLDS_Type_15, 1) = ((MR_Box) (Var_19));
  }
  {
    DataDefn_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DataDefn_16, 0) = ((MR_Box) (Name_6));
    MR_hl_field(0, DataDefn_16, 1) = ((MR_Box) (Context_10));
    MR_hl_field(0, DataDefn_16, 2) = ((MR_Box) (Flags_13));
    MR_hl_field(0, DataDefn_16, 3) = ((MR_Box) (MLDS_Type_15));
    MR_hl_field(0, DataDefn_16, 4) = ((MR_Box) (Initializer_8));
    MR_hl_field(0, DataDefn_16, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ml_backend__ml_global_data__ml_global_data_add_rtti_defn_3_p_0(DataDefn_16, STATE_VARIABLE_GlobalData_0_17, STATE_VARIABLE_GlobalData_18);
}

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_GlobalData_12;

  ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_GlobalData_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_GlobalData_12));
}

void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Target_7,
  MR_Word RttiDatas_8,
  MR_Word STATE_VARIABLE_GlobalData_0_10,
  MR_Word * STATE_VARIABLE_GlobalData_11)
{
  MR_Word Var_12;
  MR_Box conv1_STATE_VARIABLE_GlobalData_11;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_5_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (Target_7));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), Var_12, RttiDatas_8, ((MR_Box) (STATE_VARIABLE_GlobalData_0_10)), &conv1_STATE_VARIABLE_GlobalData_11);
  *STATE_VARIABLE_GlobalData_11 = ((MR_Word) (conv1_STATE_VARIABLE_GlobalData_11));
}

void mercury__ml_backend__rtti_to_mlds__init(void)
{
}

void mercury__ml_backend__rtti_to_mlds__init_type_tables(void)
{
}

void mercury__ml_backend__rtti_to_mlds__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__rtti_to_mlds__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.rtti_to_mlds.
