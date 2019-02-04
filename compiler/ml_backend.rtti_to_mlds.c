/*
** Automatically generated from `rtti_to_mlds.m'
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


/* :- module ml_backend.rtti_to_mlds. */
/* :- implementation. */

/*
INIT mercury__ml_backend__rtti_to_mlds__init
ENDINIT
*/

#include "ml_backend.rtti_to_mlds.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_ctor_info.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "ml_backend.ml_closure_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
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



struct ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0_s {
  MR_bool ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__succeeded;
  MR_Word ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__TypeInfo_105_105;
  MR_Word ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__MaybeArgNames_20;
  jmp_buf ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__commit_0;
  MR_Word ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__TypeCtorInfo_109_109;
  MR_Word ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__Var_45;
  MR_Word ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__Var_108;
  MR_Box ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__conv2_Var_108;
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

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_du_functor_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_functor_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0;

static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds____vpti_pred_2__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0;

static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0;

static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_maybe_res_name_ordered_table__1301__1_2_p_0(
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_23,
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__2_24);

static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_name_ordered_table__1224__1_2_p_0(
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_24,
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__2_25);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_ptag_ordered_table_body__1189__1_2_p_0(
  MR_Integer ml_backend__rtti_to_mlds__CurPtag_4,
  MR_Integer ml_backend__rtti_to_mlds__Ptag_11);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__func__gen_field_names__1007__1_3_f_0(
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_19,
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_23,
  MR_Word ml_backend__rtti_to_mlds__HeadVar__3_26);

static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1756__2_3_p_0(
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_18,
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_36,
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__3_37);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1756__1_3_p_0(
  MR_Word ml_backend__rtti_to_mlds__NameMap_6,
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_40,
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__3_41);

static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1755__1_2_p_0(
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_32,
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__2_33);

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_3_p_0(
  MR_Word ml_backend__rtti_to_mlds__GlobalVarDefn_4,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_13,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_14);

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0(
  MR_Word ml_backend__rtti_to_mlds__DefnGlobalVarName_5,
  MR_Word ml_backend__rtti_to_mlds__Initializer_6,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12);

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_lval_4_p_0(
  MR_Word ml_backend__rtti_to_mlds__DefnGlobalVarName_5,
  MR_Word ml_backend__rtti_to_mlds__Lval_6,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20);

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(
  MR_Word ml_backend__rtti_to_mlds__DefnGlobalVarName_5,
  MR_Word ml_backend__rtti_to_mlds__Rval_6,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22);

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_nodes_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__GlobalVarDefn_6,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_NameMap_0_13,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_NameMap_14);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_proc_id_from_univ_2_f_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_4,
  MR_Word ml_backend__rtti_to_mlds__ProcLabelUniv_5);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_method_7_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_8,
  MR_Word ml_backend__rtti_to_mlds__Target_9,
  MR_Integer ml_backend__rtti_to_mlds__NumExtra_10,
  MR_Word ml_backend__rtti_to_mlds__RttiProcLabel_11,
  MR_Word * ml_backend__rtti_to_mlds__Initializer_12,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_element_3_f_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleName_5,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_6,
  MR_Word ml_backend__rtti_to_mlds__MaybeResFunctor_7);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
  MR_Word ml_backend__rtti_to_mlds__HeadVar__3_3,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_field_locn_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__RttiId_6,
  MR_Word ml_backend__rtti_to_mlds__ArgInfo_7,
  MR_Word * ml_backend__rtti_to_mlds__ArgLocnInitializer_8,
  MR_Integer ml_backend__rtti_to_mlds__PrevOffset_9,
  MR_Integer * ml_backend__rtti_to_mlds__NextPrevOffset_10);

static void MR_CALL 
ml_backend__rtti_to_mlds__make_exist_tc_constr_id_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_6,
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_7,
  MR_Integer ml_backend__rtti_to_mlds__TCNum_8,
  MR_Integer ml_backend__rtti_to_mlds__Arity_9,
  MR_Word * ml_backend__rtti_to_mlds__RttiId_10);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0_3(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_10,
  MR_Word ml_backend__rtti_to_mlds__Target_11,
  MR_Word ml_backend__rtti_to_mlds__MakeRttiId_12,
  MR_Word ml_backend__rtti_to_mlds__Constraint_13,
  MR_Word * ml_backend__rtti_to_mlds__RttiId_14,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Counter_0_26,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Counter_27,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_28,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_29);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_110_95_105_110_105_116_95_116_99_95_114_116_116_105_95_110_97_109_101_95_95_91_49_93_95_48_3_f_0(
  MR_Word ml_backend__rtti_to_mlds__TCName_6,
  MR_Word ml_backend__rtti_to_mlds__TCRttiName_7);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_exist_locn_2_f_0(
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_4,
  MR_Word ml_backend__rtti_to_mlds__ExistTypeInfoLocn_5);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_functor_desc_6_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
  MR_Word ml_backend__rtti_to_mlds__Target_8,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
  MR_Word ml_backend__rtti_to_mlds__MaybeResFunctor_10,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_3(
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_5(
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_4(
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_6(
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
  MR_Word ml_backend__rtti_to_mlds__Target_8,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
  MR_Word ml_backend__rtti_to_mlds__DuFunctor_10,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_41,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_42);

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_5(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4);

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_1(
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_3(
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_2(
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_4(
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_10,
  MR_Word ml_backend__rtti_to_mlds__ArgInfos_11,
  MR_Word * ml_backend__rtti_to_mlds__HaveArgLocns_12,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_20,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_21);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0(
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
  MR_Word ml_backend__rtti_to_mlds__MaybeNames_10,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds____Unify____maybe__maybe_1_2(
  MR_Word ml_backend__rtti_to_mlds__TypeInfo_for_T_9,
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_1,
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_functor_subtype_info_1_f_0(
  MR_Word ml_backend__rtti_to_mlds__FunctorSubtypeInfo_3);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_sectag_locn_1_f_0(
  MR_Word ml_backend__rtti_to_mlds__Locn_3);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_7_p_0_3(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_7_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_7_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_7_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_8,
  MR_Word ml_backend__rtti_to_mlds__Target_9,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_10,
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_11,
  MR_Word ml_backend__rtti_to_mlds__Types_12,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_17,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_7_p_0_3(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_7_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_5,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_6);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_7_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_7_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_8,
  MR_Word ml_backend__rtti_to_mlds__Target_9,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_10,
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_11,
  MR_Word ml_backend__rtti_to_mlds__ExistInfo_12,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_32,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_33);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_120_105_115_116_95_108_111_99_110_115_95_97_114_114_97_121_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_120_105_115_116_95_108_111_99_110_115_95_97_114_114_97_121_95_95_91_49_93_95_48_6_p_0(
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
  MR_Word ml_backend__rtti_to_mlds__Locns_10,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_functor_desc_6_p_0(
  MR_Word ml_backend__rtti_to_mlds___ModuleInfo_7,
  MR_Word ml_backend__rtti_to_mlds__Lang_8,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumFunctor_10,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_6_p_0(
  MR_Word ml_backend__rtti_to_mlds__Lang_8,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumFunctor_10,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_functor_desc_5_p_0(
  MR_Word ml_backend__rtti_to_mlds___ModuleInfo_6,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
  MR_Word ml_backend__rtti_to_mlds__EnumFunctor_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
  MR_Word ml_backend__rtti_to_mlds__EnumFunctor_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

static void MR_CALL 
ml_backend__rtti_to_mlds__make_instance_constr_id_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__TCName_6,
  MR_Word ml_backend__rtti_to_mlds__Types_7,
  MR_Integer ml_backend__rtti_to_mlds__TCNum_8,
  MR_Integer ml_backend__rtti_to_mlds__Arity_9,
  MR_Word * ml_backend__rtti_to_mlds__RttiId_10);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_id_2_f_0(
  MR_Word ml_backend__rtti_to_mlds__TCName_4,
  MR_Word ml_backend__rtti_to_mlds__MethodId_5);

static void MR_CALL 
ml_backend__rtti_to_mlds__make_decl_super_id_4_p_0(
  MR_Word ml_backend__rtti_to_mlds__TCName_5,
  MR_Integer ml_backend__rtti_to_mlds__TCNum_6,
  MR_Integer ml_backend__rtti_to_mlds__Arity_7,
  MR_Word * ml_backend__rtti_to_mlds__RttiId_8);

static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_5(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_4(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2);

static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_3(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2);

static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_4,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_5);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_6_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
  MR_Word ml_backend__rtti_to_mlds__Target_8,
  MR_Word ml_backend__rtti_to_mlds__PTIRttiData_9,
  MR_Word * ml_backend__rtti_to_mlds__Initializer_10,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_13,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_14);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_notag_functor_desc_6_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_notag_functor_desc_6_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
  MR_Word ml_backend__rtti_to_mlds__Target_8,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
  MR_Word ml_backend__rtti_to_mlds__NotagFunctorDesc_10,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_21,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_22);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_9_p_0_4(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_9_p_0_3(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_9_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_9_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_9_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_10,
  MR_Word ml_backend__rtti_to_mlds__Target_11,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_12,
  MR_Word ml_backend__rtti_to_mlds__TypeCtorDetails_13,
  MR_Word * ml_backend__rtti_to_mlds__FunctorInitializer_14,
  MR_Word * ml_backend__rtti_to_mlds__LayoutInitializer_15,
  MR_Word * ml_backend__rtti_to_mlds__NumberMapInitializer_16,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_45,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_46);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_5_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
  MR_Word ml_backend__rtti_to_mlds__Target_7,
  MR_Word ml_backend__rtti_to_mlds__RttiData_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_49,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_type_ctor_rep_1_f_0(
  MR_Word ml_backend__rtti_to_mlds__TypeCtorData_3);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_special_pred_6_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
  MR_Word ml_backend__rtti_to_mlds__Target_8,
  MR_Word ml_backend__rtti_to_mlds__RttiProcIdUniv_9,
  MR_Word * ml_backend__rtti_to_mlds__Initializer_10,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_wrapper_func_and_initializer_8_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_9,
  MR_Word ml_backend__rtti_to_mlds__Target_10,
  MR_Integer ml_backend__rtti_to_mlds__NumExtra_11,
  MR_Word ml_backend__rtti_to_mlds__RttiProcId_12,
  MR_Word ml_backend__rtti_to_mlds__ClosureKind_13,
  MR_Word * ml_backend__rtti_to_mlds__Initializer_14,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_24,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_25);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_5,
  MR_Word ml_backend__rtti_to_mlds__FunctorNumberMap_6,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_10,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_11);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
  MR_Word ml_backend__rtti_to_mlds__NameArityMap_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_16,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_17);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_4(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_3(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
  MR_Word ml_backend__rtti_to_mlds__ResFunctors_9,
  MR_Word ml_backend__rtti_to_mlds__DuByPtag_10,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_22,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_23);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_res_addrs_list_5_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_res_addrs_list_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
  MR_Word ml_backend__rtti_to_mlds__ResAddrs_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_3(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
  MR_Word ml_backend__rtti_to_mlds__NameArityMap_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_17,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
  MR_Word ml_backend__rtti_to_mlds__PtagMap_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_23,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_24);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleName_1,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_2,
  MR_Word ml_backend__rtti_to_mlds__HeadVar__3_3,
  MR_Integer ml_backend__rtti_to_mlds__CurPtag_4);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumByName_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumByOrdinal_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
  MR_Word ml_backend__rtti_to_mlds__EnumByName_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
  MR_Word ml_backend__rtti_to_mlds__EnumByValue_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(
  MR_Word ml_backend__rtti_to_mlds__RttiData_2);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0(
  MR_Word ml_backend__rtti_to_mlds__DestType_5,
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
  MR_Word ml_backend__rtti_to_mlds__RttiData_7);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(
  MR_Word ml_backend__rtti_to_mlds__DestType_5,
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
  MR_Word ml_backend__rtti_to_mlds__RttiId_7);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_110_95_116_99_95_114_116_116_105_95_110_97_109_101_95_95_91_49_93_95_48_3_f_0(
  MR_Word ml_backend__rtti_to_mlds__TCName_6,
  MR_Word ml_backend__rtti_to_mlds__TCRttiName_7);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_6(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_5(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_4(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_3(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_8,
  MR_Word ml_backend__rtti_to_mlds__Target_9,
  MR_Word ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_10,
  MR_Word ml_backend__rtti_to_mlds__Name_11,
  MR_Word ml_backend__rtti_to_mlds__RttiId_12,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_35,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_36);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_6(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_5(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_4(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_3(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_8,
  MR_Word ml_backend__rtti_to_mlds__Target_9,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeInfo_10,
  MR_Word ml_backend__rtti_to_mlds__Name_11,
  MR_Word ml_backend__rtti_to_mlds__RttiId_12,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_32,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_33);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0(
  MR_Word ml_backend__rtti_to_mlds__Type_5,
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
  MR_Word ml_backend__rtti_to_mlds__RttiDatas_7);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_4(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_3(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_5,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_6);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_8,
  MR_Word ml_backend__rtti_to_mlds__Target_9,
  MR_Word ml_backend__rtti_to_mlds__Instance_10,
  MR_Word ml_backend__rtti_to_mlds__Name_11,
  MR_Word ml_backend__rtti_to_mlds__RttiId_12,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_34);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_6_p_0_3(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_6_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_6_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_6_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
  MR_Word ml_backend__rtti_to_mlds__Target_8,
  MR_Word ml_backend__rtti_to_mlds__PTIRttiDatas_9,
  MR_Word * ml_backend__rtti_to_mlds__Initializer_10,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0_3(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_5,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_6);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_8,
  MR_Word ml_backend__rtti_to_mlds__Target_9,
  MR_Word ml_backend__rtti_to_mlds__TCDecl_10,
  MR_Word ml_backend__rtti_to_mlds__Name_11,
  MR_Word ml_backend__rtti_to_mlds__RttiId_12,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_51,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleName_1,
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleName_5,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_6,
  MR_Word ml_backend__rtti_to_mlds__RttiName_7);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_ids_5_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_ids_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__RttiId_6,
  MR_Word ml_backend__rtti_to_mlds__TCName_7,
  MR_Word ml_backend__rtti_to_mlds__MethodIds_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12);

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_var_names_4_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_var_names_4_p_0(
  MR_Word ml_backend__rtti_to_mlds__RttiId_5,
  MR_Word ml_backend__rtti_to_mlds__Names_6,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10);

static void MR_CALL 
ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(
  MR_Word ml_backend__rtti_to_mlds__RttiId_5,
  MR_Word ml_backend__rtti_to_mlds__Initializer_6,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10);

static void MR_CALL 
ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__Name_6,
  MR_Word ml_backend__rtti_to_mlds__RttiId_7,
  MR_Word ml_backend__rtti_to_mlds__Initializer_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_17,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18);

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_5_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);


static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_1[14][2];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_2[38][3];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_3[7][8];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_4[16][5];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_5[6][6];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_6[7][7];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_7[1][12];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_8[2][4];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_9[1][10];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_10[3][9];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_11[2][1];




static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_1[14][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_2[38][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_tc_id_var_names_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_8[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[1])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[2])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_8[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[2])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_8[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[1])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_8[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[1])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_8[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[3])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[3])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[4])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[4])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[6])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[7])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[8])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_8[1])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[9])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[10])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[11])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_notag_functor_desc_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[4])),
    ((MR_Box) (ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[2])),
    ((MR_Box) (ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[12])),
    ((MR_Box) (ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[13])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_field_types_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 31 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_8[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_field_types_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 32 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 33 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[14])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 34 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[15])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 35 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[1])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 36 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_8[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 37 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[7])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_3[7][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_4[16][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_functor_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_reserved_functor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_reserved_functor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0))
  },
  /* row 15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_5[6][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__rtti_to_mlds____vpti_pred_2__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_6[7][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_7[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
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

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_8[2][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_9[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_10[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_11[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_VA_PseudoTypeInfo_Struct3 ml_backend__rtti_to_mlds____vpti_pred_3__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_rtti_id_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_du_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0,
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds____vpti_pred_2__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0,
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_maybe_res_name_ordered_table__1301__1_2_p_0(
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_23,
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__2_24)
{
  {
    mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0, ml_backend__rtti_to_mlds__HeadVar__1_23, ml_backend__rtti_to_mlds__HeadVar__2_24);
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_name_ordered_table__1224__1_2_p_0(
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_24,
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__2_25)
{
  {
    mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, ml_backend__rtti_to_mlds__HeadVar__1_24, ml_backend__rtti_to_mlds__HeadVar__2_25);
  }
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_ptag_ordered_table_body__1189__1_2_p_0(
  MR_Integer ml_backend__rtti_to_mlds__CurPtag_4,
  MR_Integer ml_backend__rtti_to_mlds__Ptag_11)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__Ptag_11 == ml_backend__rtti_to_mlds__CurPtag_4);

    return ml_backend__rtti_to_mlds__succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__func__gen_field_names__1007__1_3_f_0(
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_19,
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_23,
  MR_Word ml_backend__rtti_to_mlds__HeadVar__3_26)
{
  {
    MR_Word ml_backend__rtti_to_mlds__HeadVar__4_27;

    ml_backend__rtti_to_mlds__HeadVar__4_27 = ml_backend__ml_util__gen_init_maybe_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__HeadVar__1_19, ml_backend__rtti_to_mlds__HeadVar__2_23, ml_backend__rtti_to_mlds__HeadVar__3_26);
    return ml_backend__rtti_to_mlds__HeadVar__4_27;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1756__2_3_p_0(
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_18,
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_36,
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__3_37)
{
  {
    mercury__list__filter_map_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0, ml_backend__rtti_to_mlds__HeadVar__1_18, ml_backend__rtti_to_mlds__HeadVar__2_36, ml_backend__rtti_to_mlds__HeadVar__3_37);
  }
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1756__1_3_p_0(
  MR_Word ml_backend__rtti_to_mlds__NameMap_6,
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_40,
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__3_41)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;
    MR_Box ml_backend__rtti_to_mlds__conv0_HeadVar__3_41;

    ml_backend__rtti_to_mlds__succeeded = mercury__map__search_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0, ml_backend__rtti_to_mlds__NameMap_6, ((MR_Box) (ml_backend__rtti_to_mlds__HeadVar__2_40)), &ml_backend__rtti_to_mlds__conv0_HeadVar__3_41);
    if (ml_backend__rtti_to_mlds__succeeded)
    {
      *ml_backend__rtti_to_mlds__HeadVar__3_41 = ((MR_Word) ml_backend__rtti_to_mlds__conv0_HeadVar__3_41);
      ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
    }
    return ml_backend__rtti_to_mlds__succeeded;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1755__1_2_p_0(
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_32,
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__2_33)
{
  {
    mercury__set__to_sorted_list_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0, ml_backend__rtti_to_mlds__HeadVar__1_32, ml_backend__rtti_to_mlds__HeadVar__2_33);
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_3_p_0(
  MR_Word ml_backend__rtti_to_mlds__GlobalVarDefn_4,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_13,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_14)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;
    MR_Word ml_backend__rtti_to_mlds__GlobalVarName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__GlobalVarDefn_4, (MR_Integer) 0)));
    MR_Word ml_backend__rtti_to_mlds__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__GlobalVarDefn_4, (MR_Integer) 3)));
    MR_Word ml_backend__rtti_to_mlds__Initializer_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__GlobalVarDefn_4, (MR_Integer) 4)));
    MR_Word ml_backend__rtti_to_mlds__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__GlobalVarDefn_4, (MR_Integer) 1)));
    MR_Word ml_backend__rtti_to_mlds__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__GlobalVarDefn_4, (MR_Integer) 2)));
    MR_Word ml_backend__rtti_to_mlds___GCStmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__GlobalVarDefn_4, (MR_Integer) 5)));
    MR_Word ml_backend__rtti_to_mlds__Var_12;

    ml_backend__rtti_to_mlds__succeeded = ((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Type_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_9, (MR_Integer) 0)))) == (MR_Integer) 7)));
    if (ml_backend__rtti_to_mlds__succeeded)
    {
      ml_backend__rtti_to_mlds__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_9, (MR_Integer) 1)));
      ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0(ml_backend__rtti_to_mlds__GlobalVarName_6, ml_backend__rtti_to_mlds__Initializer_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_14);
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.add_rtti_defn_arcs\'/3", (MR_String) "expected rtti entity_data");
        return;
      }
    }
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Graph_12;

    ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Graph_12);
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Graph_12));
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_Graph_12;

    ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_Graph_12);
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_Graph_12));
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0(
  MR_Word ml_backend__rtti_to_mlds__DefnGlobalVarName_5,
  MR_Word ml_backend__rtti_to_mlds__Initializer_6,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12)
{
  switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__Initializer_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ml_backend__rtti_to_mlds__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Initializer_6, (MR_Integer) 0)));

        ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(ml_backend__rtti_to_mlds__DefnGlobalVarName_5, ml_backend__rtti_to_mlds__Rval_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ml_backend__rtti_to_mlds__Initializers_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_6, (MR_Integer) 1)));
        MR_Word ml_backend__rtti_to_mlds__Var_25;
        MR_Word ml_backend__rtti_to_mlds__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_6, (MR_Integer) 0)));
        MR_Box ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Graph_12;

        {
          ml_backend__rtti_to_mlds__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_25, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[6]));
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_2));
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_25, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__DefnGlobalVarName_5));
        }
        mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[0], ml_backend__rtti_to_mlds__Var_25, ml_backend__rtti_to_mlds__Initializers_24, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11)), &ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Graph_12);
        *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12 = ((MR_Word) ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Graph_12);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ml_backend__rtti_to_mlds__Initializers_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Initializer_6, (MR_Integer) 0)));
        MR_Word ml_backend__rtti_to_mlds__Var_13;
        MR_Box ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_Graph_12;

        {
          ml_backend__rtti_to_mlds__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_13, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[6]));
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_13, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_1));
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_13, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__DefnGlobalVarName_5));
        }
        mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[0], ml_backend__rtti_to_mlds__Var_13, ml_backend__rtti_to_mlds__Initializers_10, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11)), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_Graph_12);
        *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12 = ((MR_Word) ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_Graph_12);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_lval_4_p_0(
  MR_Word ml_backend__rtti_to_mlds__DefnGlobalVarName_5,
  MR_Word ml_backend__rtti_to_mlds__Lval_6,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20)
{
  switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__Lval_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ml_backend__rtti_to_mlds__SubRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 1)));
        MR_Word ml_backend__rtti_to_mlds__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 0)));
        MR_Word ml_backend__rtti_to_mlds__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 2)));
        MR_Word ml_backend__rtti_to_mlds__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 3)));
        MR_Word ml_backend__rtti_to_mlds__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 4)));

        ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(ml_backend__rtti_to_mlds__DefnGlobalVarName_5, ml_backend__rtti_to_mlds__SubRval_9, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ml_backend__rtti_to_mlds__SubRval_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 0)));
        MR_Word ml_backend__rtti_to_mlds___Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 1)));

        ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(ml_backend__rtti_to_mlds__DefnGlobalVarName_5, ml_backend__rtti_to_mlds__SubRval_24, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20);
      }
      break;
    case (MR_Integer) 2:
      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
          break;
        case (MR_Integer) 1:
          *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(
  MR_Word ml_backend__rtti_to_mlds__DefnGlobalVarName_5,
  MR_Word ml_backend__rtti_to_mlds__Rval_6,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__Rval_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
        break;
      case (MR_Integer) 1:
        *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__rtti_to_mlds__Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__Lval_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__rtti_to_mlds__SubRval_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Lval_8, (MR_Integer) 1)));
                MR_Word ml_backend__rtti_to_mlds__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Lval_8, (MR_Integer) 0)));
                MR_Word ml_backend__rtti_to_mlds__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Lval_8, (MR_Integer) 2)));
                MR_Word ml_backend__rtti_to_mlds__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Lval_8, (MR_Integer) 3)));
                MR_Word ml_backend__rtti_to_mlds__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Lval_8, (MR_Integer) 4)));

                /* direct tailcall eliminated */
                {
                  MR_Word ml_backend__rtti_to_mlds__next_value_of_Rval_6 = ml_backend__rtti_to_mlds__SubRval_76;

                  ml_backend__rtti_to_mlds__Rval_6 = ml_backend__rtti_to_mlds__next_value_of_Rval_6;
                }
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__rtti_to_mlds__SubRval_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Lval_8, (MR_Integer) 0)));
                MR_Word ml_backend__rtti_to_mlds___Type_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Lval_8, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word ml_backend__rtti_to_mlds__next_value_of_Rval_6 = ml_backend__rtti_to_mlds__SubRval_89;

                  ml_backend__rtti_to_mlds__Rval_6 = ml_backend__rtti_to_mlds__next_value_of_Rval_6;
                }
                continue;
              }
              break;
            case (MR_Integer) 2:
              *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Lval_8, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
                  break;
                case (MR_Integer) 1:
                  *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__rtti_to_mlds__SubRvalA_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 2)));
              MR_Integer ml_backend__rtti_to_mlds___Tag_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 1)));

              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__rtti_to_mlds__next_value_of_Rval_6 = ml_backend__rtti_to_mlds__SubRvalA_10;

                ml_backend__rtti_to_mlds__Rval_6 = ml_backend__rtti_to_mlds__next_value_of_Rval_6;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__rtti_to_mlds__Const_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__Const_11)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ml_backend__rtti_to_mlds__Const_11)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
                      break;
                    case (MR_Integer) 1:
                      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
                  break;
                case (MR_Integer) 2:
                  *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Const_11, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
                      break;
                    case (MR_Integer) 1:
                      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
                      break;
                    case (MR_Integer) 2:
                      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
                      break;
                    case (MR_Integer) 3:
                      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
                      break;
                    case (MR_Integer) 4:
                      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
                      break;
                    case (MR_Integer) 5:
                      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
                      break;
                    case (MR_Integer) 6:
                      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
                      break;
                    case (MR_Integer) 7:
                      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
                      break;
                    case (MR_Integer) 8:
                      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
                      break;
                    case (MR_Integer) 9:
                      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
                      break;
                    case (MR_Integer) 10:
                      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
                      break;
                    case (MR_Integer) 11:
                      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
                      break;
                    case (MR_Integer) 12:
                      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
                      break;
                    case (MR_Integer) 13:
                      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
                      break;
                    case (MR_Integer) 14:
                      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
                      break;
                    case (MR_Integer) 15:
                      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
                      break;
                    case (MR_Integer) 16:
                      {
                        MR_Word ml_backend__rtti_to_mlds__RttiId_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Const_11, (MR_Integer) 2)));
                        MR_Word ml_backend__rtti_to_mlds__GlobalVarName_40;
                        MR_Word ml_backend__rtti_to_mlds__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Const_11, (MR_Integer) 1)));

                        {
                          ml_backend__rtti_to_mlds__GlobalVarName_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__GlobalVarName_40, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_39));
                        }
                        mercury__digraph__add_vertices_and_edge_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0, ((MR_Box) (ml_backend__rtti_to_mlds__DefnGlobalVarName_5)), ((MR_Box) (ml_backend__rtti_to_mlds__GlobalVarName_40)), ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22);
                      }
                      break;
                    case (MR_Integer) 17:
                      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
                      break;
                    case (MR_Integer) 18:
                      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__rtti_to_mlds__SubRvalA_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 2)));
              MR_Word ml_backend__rtti_to_mlds__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 1)));

              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__rtti_to_mlds__next_value_of_Rval_6 = ml_backend__rtti_to_mlds__SubRvalA_31;

                ml_backend__rtti_to_mlds__Rval_6 = ml_backend__rtti_to_mlds__next_value_of_Rval_6;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ml_backend__rtti_to_mlds__SubRvalB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 3)));
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_25_25;
              MR_Word ml_backend__rtti_to_mlds__SubRvalA_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 2)));
              MR_Word ml_backend__rtti_to_mlds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 1)));

              ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(ml_backend__rtti_to_mlds__DefnGlobalVarName_5, ml_backend__rtti_to_mlds__SubRvalA_32, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21, &ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_25_25);
              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__rtti_to_mlds__next_value_of_Rval_6 = ml_backend__rtti_to_mlds__SubRvalB_14;
                MR_Word ml_backend__rtti_to_mlds__next_value_of_STATE_VARIABLE_Graph_0_21 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_25_25;

                ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21 = ml_backend__rtti_to_mlds__next_value_of_STATE_VARIABLE_Graph_0_21;
                ml_backend__rtti_to_mlds__Rval_6 = ml_backend__rtti_to_mlds__next_value_of_Rval_6;
              }
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ml_backend__rtti_to_mlds__SubLval_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 1)));

              ml_backend__rtti_to_mlds__add_rtti_defn_arcs_lval_4_p_0(ml_backend__rtti_to_mlds__DefnGlobalVarName_5, ml_backend__rtti_to_mlds__SubLval_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ml_backend__rtti_to_mlds__RowRval_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 2)));
              MR_Word ml_backend__rtti_to_mlds__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 1)));

              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__rtti_to_mlds__next_value_of_Rval_6 = ml_backend__rtti_to_mlds__RowRval_19;

                ml_backend__rtti_to_mlds__Rval_6 = ml_backend__rtti_to_mlds__next_value_of_Rval_6;
              }
              continue;
            }
            break;
          case (MR_Integer) 6:
            *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_22 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_21;
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_nodes_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__GlobalVarDefn_6,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_NameMap_0_13,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_NameMap_14)
{
  {
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_22_22 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0;
    MR_Word ml_backend__rtti_to_mlds__GlobalVarName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__GlobalVarDefn_6, (MR_Integer) 0)));
    MR_Word ml_backend__rtti_to_mlds__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__GlobalVarDefn_6, (MR_Integer) 1)));
    MR_Word ml_backend__rtti_to_mlds__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__GlobalVarDefn_6, (MR_Integer) 2)));
    MR_Word ml_backend__rtti_to_mlds__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__GlobalVarDefn_6, (MR_Integer) 3)));
    MR_Word ml_backend__rtti_to_mlds__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__GlobalVarDefn_6, (MR_Integer) 4)));
    MR_Word ml_backend__rtti_to_mlds__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__GlobalVarDefn_6, (MR_Integer) 5)));
    MR_Word ml_backend__rtti_to_mlds__Var_10;

    mercury__digraph__add_vertex_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_22_22, ((MR_Box) (ml_backend__rtti_to_mlds__GlobalVarName_9)), &ml_backend__rtti_to_mlds__Var_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12);
    mercury__map__det_insert_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_22_22, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0, ((MR_Box) (ml_backend__rtti_to_mlds__GlobalVarName_9)), ((MR_Box) (ml_backend__rtti_to_mlds__GlobalVarDefn_6)), ml_backend__rtti_to_mlds__STATE_VARIABLE_NameMap_0_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_NameMap_14);
  }
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_proc_id_from_univ_2_f_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_4,
  MR_Word ml_backend__rtti_to_mlds__ProcLabelUniv_5)
{
  {
    MR_Word ml_backend__rtti_to_mlds__Initializer_6;
    MR_Word ml_backend__rtti_to_mlds__ProcLabel_7;
    MR_Word ml_backend__rtti_to_mlds__PredLabel_12;
    MR_Word ml_backend__rtti_to_mlds__PredModule_13;
    MR_Integer ml_backend__rtti_to_mlds__ProcId_14;
    MR_Word ml_backend__rtti_to_mlds__ProcLabel_15;
    MR_Word ml_backend__rtti_to_mlds__FuncLabel_16;
    MR_Word ml_backend__rtti_to_mlds__QualFuncLabel_17;
    MR_Word ml_backend__rtti_to_mlds__Params_18;
    MR_Word ml_backend__rtti_to_mlds__Signature_19;
    MR_Word ml_backend__rtti_to_mlds__CodeAddr_20;
    MR_Word ml_backend__rtti_to_mlds__ProcAddrRval_21;
    MR_Word ml_backend__rtti_to_mlds__ProcAddrArg_22;
    MR_Word ml_backend__rtti_to_mlds__Var_24;
    MR_Word ml_backend__rtti_to_mlds__Var_25;
    MR_Word ml_backend__rtti_to_mlds__Var_26;
    MR_Box ml_backend__rtti_to_mlds__conv0_ProcLabel_7;
    MR_Word ml_backend__rtti_to_mlds__Var_27;
    MR_Word ml_backend__rtti_to_mlds__Var_28;
    MR_Word ml_backend__rtti_to_mlds__Var_29;
    MR_String ml_backend__rtti_to_mlds__Var_30;
    MR_Integer ml_backend__rtti_to_mlds__Var_31;
    MR_Word ml_backend__rtti_to_mlds__Var_32;
    MR_Word ml_backend__rtti_to_mlds__Var_33;
    MR_Word ml_backend__rtti_to_mlds__Var_34;
    MR_Word ml_backend__rtti_to_mlds__Var_35;
    MR_Word ml_backend__rtti_to_mlds__Var_36;
    MR_Word ml_backend__rtti_to_mlds__Var_37;
    MR_Word ml_backend__rtti_to_mlds__Var_38;
    MR_Word ml_backend__rtti_to_mlds__Var_39;
    MR_Word ml_backend__rtti_to_mlds__Var_40;
    MR_Word ml_backend__rtti_to_mlds__Var_41;

    mercury__univ__det_univ_to_type_2_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, ml_backend__rtti_to_mlds__ProcLabelUniv_5, &ml_backend__rtti_to_mlds__conv0_ProcLabel_7);
    ml_backend__rtti_to_mlds__ProcLabel_7 = ((MR_Word) ml_backend__rtti_to_mlds__conv0_ProcLabel_7);
    ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ml_backend__rtti_to_mlds__ModuleInfo_4, ml_backend__rtti_to_mlds__ProcLabel_7, &ml_backend__rtti_to_mlds__PredLabel_12, &ml_backend__rtti_to_mlds__PredModule_13);
    ml_backend__rtti_to_mlds__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ProcLabel_7, (MR_Integer) 0)));
    ml_backend__rtti_to_mlds__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ProcLabel_7, (MR_Integer) 1)));
    ml_backend__rtti_to_mlds__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ProcLabel_7, (MR_Integer) 2)));
    ml_backend__rtti_to_mlds__Var_30 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ProcLabel_7, (MR_Integer) 3)));
    ml_backend__rtti_to_mlds__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ProcLabel_7, (MR_Integer) 4)));
    ml_backend__rtti_to_mlds__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ProcLabel_7, (MR_Integer) 5)));
    ml_backend__rtti_to_mlds__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ProcLabel_7, (MR_Integer) 6)));
    ml_backend__rtti_to_mlds__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ProcLabel_7, (MR_Integer) 7)));
    ml_backend__rtti_to_mlds__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ProcLabel_7, (MR_Integer) 8)));
    ml_backend__rtti_to_mlds__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ProcLabel_7, (MR_Integer) 9)));
    ml_backend__rtti_to_mlds__Var_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ProcLabel_7, (MR_Integer) 10)))) & (MR_Integer) 7);
    ml_backend__rtti_to_mlds__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ProcLabel_7, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ml_backend__rtti_to_mlds__Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ProcLabel_7, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ml_backend__rtti_to_mlds__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ProcLabel_7, (MR_Integer) 11)));
    ml_backend__rtti_to_mlds__Var_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ProcLabel_7, (MR_Integer) 12)))) & (MR_Integer) 1);
    ml_backend__rtti_to_mlds__Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ProcLabel_7, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    {
      ml_backend__rtti_to_mlds__ProcLabel_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ProcLabel_15, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__PredLabel_12));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ProcLabel_15, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__ProcId_14));
    }
    {
      ml_backend__rtti_to_mlds__FuncLabel_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__FuncLabel_16, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ProcLabel_15));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__FuncLabel_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__rtti_to_mlds__QualFuncLabel_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__QualFuncLabel_17, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__PredModule_13));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__QualFuncLabel_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__FuncLabel_16));
    }
    ml_backend__rtti_to_mlds__Params_18 = ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_f_0(ml_backend__rtti_to_mlds__ModuleInfo_4, ml_backend__rtti_to_mlds__ProcLabel_7);
    ml_backend__rtti_to_mlds__Signature_19 = ml_backend__mlds__mlds_get_func_signature_1_f_0(ml_backend__rtti_to_mlds__Params_18);
    {
      ml_backend__rtti_to_mlds__CodeAddr_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__CodeAddr_20, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__QualFuncLabel_17));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__CodeAddr_20, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Signature_19));
    }
    ml_backend__rtti_to_mlds__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__CodeAddr_20);
    {
      ml_backend__rtti_to_mlds__ProcAddrRval_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ProcAddrRval_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ProcAddrRval_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_24));
    }
    ml_backend__rtti_to_mlds__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__Params_18);
    {
      ml_backend__rtti_to_mlds__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_25, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_26));
    }
    {
      ml_backend__rtti_to_mlds__ProcAddrArg_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ProcAddrArg_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ProcAddrArg_22, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_25));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ProcAddrArg_22, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__ProcAddrRval_21));
    }
    {
      ml_backend__rtti_to_mlds__Initializer_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Initializer_6, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ProcAddrArg_22));
    }
    return ml_backend__rtti_to_mlds__Initializer_6;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_method_7_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_8,
  MR_Word ml_backend__rtti_to_mlds__Target_9,
  MR_Integer ml_backend__rtti_to_mlds__NumExtra_10,
  MR_Word ml_backend__rtti_to_mlds__RttiProcLabel_11,
  MR_Word * ml_backend__rtti_to_mlds__Initializer_12,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15)
{
  {
    MR_Word ml_backend__rtti_to_mlds__PredId_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_11, (MR_Integer) 6)));
    MR_Integer ml_backend__rtti_to_mlds__ProcId_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_11, (MR_Integer) 7)));
    MR_Word ml_backend__rtti_to_mlds__ProcInfo_30;
    MR_Word ml_backend__rtti_to_mlds__Context_31;
    MR_Word ml_backend__rtti_to_mlds__WrapperFuncRval_32;
    MR_Word ml_backend__rtti_to_mlds__WrapperFuncType_33;
    MR_Word ml_backend__rtti_to_mlds__ClosureWrapperDefns_34;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_26_35;
    MR_Word ml_backend__rtti_to_mlds__Var_36;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_28_37;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_29_38;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_39;
    MR_Word ml_backend__rtti_to_mlds__Var_41;
    MR_Word ml_backend__rtti_to_mlds__Var_42;
    MR_Word ml_backend__rtti_to_mlds__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_11, (MR_Integer) 0)));
    MR_Word ml_backend__rtti_to_mlds__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_11, (MR_Integer) 1)));
    MR_Word ml_backend__rtti_to_mlds__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_11, (MR_Integer) 2)));
    MR_String ml_backend__rtti_to_mlds__Var_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_11, (MR_Integer) 3)));
    MR_Integer ml_backend__rtti_to_mlds__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_11, (MR_Integer) 4)));
    MR_Word ml_backend__rtti_to_mlds__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_11, (MR_Integer) 5)));
    MR_Word ml_backend__rtti_to_mlds__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_11, (MR_Integer) 8)));
    MR_Word ml_backend__rtti_to_mlds__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_11, (MR_Integer) 9)));
    MR_Word ml_backend__rtti_to_mlds__Var_52 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_11, (MR_Integer) 10)))) & (MR_Integer) 7);
    MR_Word ml_backend__rtti_to_mlds__Var_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_11, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ml_backend__rtti_to_mlds__Var_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_11, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ml_backend__rtti_to_mlds__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_11, (MR_Integer) 11)));
    MR_Word ml_backend__rtti_to_mlds__Var_56 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_11, (MR_Integer) 12)))) & (MR_Integer) 1);
    MR_Word ml_backend__rtti_to_mlds__Var_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_11, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

    hlds__hlds_module__module_info_proc_info_4_p_0(ml_backend__rtti_to_mlds__ModuleInfo_8, ml_backend__rtti_to_mlds__PredId_28, ml_backend__rtti_to_mlds__ProcId_29, &ml_backend__rtti_to_mlds__ProcInfo_30);
    ml_backend__rtti_to_mlds__Var_36 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0);
    ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_26_35 = ml_backend__ml_gen_info__ml_gen_info_init_7_f_0(ml_backend__rtti_to_mlds__ModuleInfo_8, ml_backend__rtti_to_mlds__Target_9, ml_backend__rtti_to_mlds__Var_36, ml_backend__rtti_to_mlds__PredId_28, ml_backend__rtti_to_mlds__ProcId_29, ml_backend__rtti_to_mlds__ProcInfo_30, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14);
    ml_backend__ml_gen_info__ml_gen_info_bump_counters_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_26_35, &ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_28_37);
    mercury__term__context_init_1_p_0(&ml_backend__rtti_to_mlds__Context_31);
    ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_p_0(ml_backend__rtti_to_mlds__PredId_28, ml_backend__rtti_to_mlds__ProcId_29, (MR_Integer) 1, ml_backend__rtti_to_mlds__NumExtra_10, ml_backend__rtti_to_mlds__Context_31, &ml_backend__rtti_to_mlds__WrapperFuncRval_32, &ml_backend__rtti_to_mlds__WrapperFuncType_33, ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_28_37, &ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_29_38);
    ml_backend__ml_gen_info__ml_gen_info_get_closure_wrapper_defns_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_29_38, &ml_backend__rtti_to_mlds__ClosureWrapperDefns_34);
    ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_29_38, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_39);
    ml_backend__ml_global_data__ml_global_data_add_closure_wrapper_func_defns_3_p_0(ml_backend__rtti_to_mlds__ClosureWrapperDefns_34, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_39, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15);
    {
      ml_backend__rtti_to_mlds__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_42, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__WrapperFuncType_33));
    }
    {
      ml_backend__rtti_to_mlds__Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_41, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_42));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_41, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__WrapperFuncRval_32));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__rtti_to_mlds__Initializer_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_41));
    }
  }
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_element_3_f_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleName_5,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_6,
  MR_Word ml_backend__rtti_to_mlds__MaybeResFunctor_7)
{
  {
    MR_Word ml_backend__rtti_to_mlds__Initializer_8;
    MR_Word ml_backend__rtti_to_mlds__RttiId_10;
    MR_Word ml_backend__rtti_to_mlds__Type_11;
    MR_Word ml_backend__rtti_to_mlds__Var_15;

    {
      ml_backend__rtti_to_mlds__RttiId_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_10, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_6));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
    }
    {
      ml_backend__rtti_to_mlds__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_15, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
    }
    {
      ml_backend__rtti_to_mlds__Type_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_11, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_15));
    }
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__MaybeResFunctor_7)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word ml_backend__rtti_to_mlds__DuFunctor_14 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__MaybeResFunctor_7), (MR_Integer) 1);
      MR_Word ml_backend__rtti_to_mlds__Var_16;
      MR_Word ml_backend__rtti_to_mlds__Var_17;
      MR_Word ml_backend__rtti_to_mlds__Var_18;
      MR_Word ml_backend__rtti_to_mlds__Var_19;
      MR_Integer ml_backend__rtti_to_mlds__Var_20;
      MR_Word ml_backend__rtti_to_mlds__Var_21;
      MR_Word ml_backend__rtti_to_mlds__Var_22;
      MR_Word ml_backend__rtti_to_mlds__Var_24;
      MR_Word ml_backend__rtti_to_mlds__Var_25;
      MR_Word ml_backend__rtti_to_mlds__Var_26;
      MR_String ml_backend__rtti_to_mlds__Name_40 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 0)));
      MR_Integer ml_backend__rtti_to_mlds__Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 1)));
      MR_Integer ml_backend__rtti_to_mlds__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 2)));
      MR_Word ml_backend__rtti_to_mlds__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 3)));
      MR_Word ml_backend__rtti_to_mlds__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 4)));
      MR_Word ml_backend__rtti_to_mlds__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 5)));
      MR_Word ml_backend__rtti_to_mlds__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 6)));
      MR_String ml_backend__rtti_to_mlds__Var_49;
      MR_Integer ml_backend__rtti_to_mlds__Var_50;
      MR_Word ml_backend__rtti_to_mlds__Var_51;
      MR_Word ml_backend__rtti_to_mlds__Var_52;
      MR_Word ml_backend__rtti_to_mlds__Var_53;
      MR_Word ml_backend__rtti_to_mlds__Var_54;

      ml_backend__rtti_to_mlds__Var_17 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__Name_40);
      ml_backend__rtti_to_mlds__Var_49 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 0)));
      ml_backend__rtti_to_mlds__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 1)));
      ml_backend__rtti_to_mlds__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 2)));
      ml_backend__rtti_to_mlds__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 3)));
      ml_backend__rtti_to_mlds__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 4)));
      ml_backend__rtti_to_mlds__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 5)));
      ml_backend__rtti_to_mlds__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 6)));
      ml_backend__rtti_to_mlds__Var_19 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Var_20);
      ml_backend__rtti_to_mlds__Var_22 = ml_backend__ml_util__gen_init_bool_1_f_0((MR_Integer) 0);
      ml_backend__rtti_to_mlds__Var_26 = backend_libs__rtti__maybe_res_functor_rtti_name_1_f_0(ml_backend__rtti_to_mlds__MaybeResFunctor_7);
      ml_backend__rtti_to_mlds__Var_25 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_5, ml_backend__rtti_to_mlds__RttiTypeCtor_6, ml_backend__rtti_to_mlds__Var_26);
      {
        ml_backend__rtti_to_mlds__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_24, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_25));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        ml_backend__rtti_to_mlds__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_21, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_22));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_24));
      }
      {
        ml_backend__rtti_to_mlds__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_18, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_19));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_18, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_21));
      }
      {
        ml_backend__rtti_to_mlds__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_16, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_17));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_18));
      }
      {
        ml_backend__rtti_to_mlds__Initializer_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_8, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_11));
        MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_8, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_16));
      }
    }
    else
    {
      MR_Word ml_backend__rtti_to_mlds__ResFunctor_12 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__MaybeResFunctor_7), (MR_Integer) 0);
      MR_String ml_backend__rtti_to_mlds__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ResFunctor_12, (MR_Integer) 0)));
      MR_Word ml_backend__rtti_to_mlds__Var_28;
      MR_Word ml_backend__rtti_to_mlds__Var_29;
      MR_Word ml_backend__rtti_to_mlds__Var_30;
      MR_Word ml_backend__rtti_to_mlds__Var_31;
      MR_Word ml_backend__rtti_to_mlds__Var_33;
      MR_Word ml_backend__rtti_to_mlds__Var_34;
      MR_Word ml_backend__rtti_to_mlds__Var_36;
      MR_Word ml_backend__rtti_to_mlds__Var_37;
      MR_Word ml_backend__rtti_to_mlds__Var_38;
      MR_Integer ml_backend__rtti_to_mlds__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ResFunctor_12, (MR_Integer) 1)));
      MR_Word ml_backend__rtti_to_mlds__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ResFunctor_12, (MR_Integer) 2)));

      ml_backend__rtti_to_mlds__Var_29 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__Name_13);
      ml_backend__rtti_to_mlds__Var_31 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
      ml_backend__rtti_to_mlds__Var_34 = ml_backend__ml_util__gen_init_bool_1_f_0((MR_Integer) 1);
      ml_backend__rtti_to_mlds__Var_38 = backend_libs__rtti__maybe_res_functor_rtti_name_1_f_0(ml_backend__rtti_to_mlds__MaybeResFunctor_7);
      ml_backend__rtti_to_mlds__Var_37 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_5, ml_backend__rtti_to_mlds__RttiTypeCtor_6, ml_backend__rtti_to_mlds__Var_38);
      {
        ml_backend__rtti_to_mlds__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_36, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_37));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        ml_backend__rtti_to_mlds__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_33, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_34));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_33, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_36));
      }
      {
        ml_backend__rtti_to_mlds__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_31));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_33));
      }
      {
        ml_backend__rtti_to_mlds__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_28, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_29));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_28, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_30));
      }
      {
        ml_backend__rtti_to_mlds__Initializer_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_8, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_11));
        MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_8, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_28));
      }
    }
    return ml_backend__rtti_to_mlds__Initializer_8;
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__4_4;

    ml_backend__rtti_to_mlds__conv1_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__4_4));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

    ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__du_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
  MR_Word ml_backend__rtti_to_mlds__HeadVar__3_3,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19)
{
  {
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_23_23 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0;
    MR_Integer ml_backend__rtti_to_mlds__Ptag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word ml_backend__rtti_to_mlds__SectagTable_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word ml_backend__rtti_to_mlds__SectagMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__SectagTable_9, (MR_Integer) 2)));
    MR_Word ml_backend__rtti_to_mlds__SectagFunctors_14;
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_15;
    MR_Word ml_backend__rtti_to_mlds__Initializer_16;
    MR_Word ml_backend__rtti_to_mlds__RttiName_17;
    MR_Word ml_backend__rtti_to_mlds__Var_30;
    MR_Word ml_backend__rtti_to_mlds__RttiId_40;
    MR_Word ml_backend__rtti_to_mlds__Name_47;
    MR_Word ml_backend__rtti_to_mlds___SectagLocn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__SectagTable_9, (MR_Integer) 0)));
    MR_Integer ml_backend__rtti_to_mlds___NumSharers_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__SectagTable_9, (MR_Integer) 1)));

    mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__rtti_to_mlds__TypeCtorInfo_23_23, ml_backend__rtti_to_mlds__SectagMap_13, &ml_backend__rtti_to_mlds__SectagFunctors_14);
    ml_backend__rtti_to_mlds__FunctorRttiNames_15 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_23_23, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[37], ml_backend__rtti_to_mlds__SectagFunctors_14);
    {
      ml_backend__rtti_to_mlds__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_30, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_30, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_6));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_30, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
    }
    ml_backend__rtti_to_mlds__Initializer_16 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__Var_30, ml_backend__rtti_to_mlds__FunctorRttiNames_15);
    {
      ml_backend__rtti_to_mlds__RttiName_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ptag_8));
    }
    {
      ml_backend__rtti_to_mlds__RttiId_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_40, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_40, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_17));
    }
    {
      ml_backend__rtti_to_mlds__Name_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_47, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_40));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_47, ml_backend__rtti_to_mlds__RttiId_40, ml_backend__rtti_to_mlds__Initializer_16, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_field_locn_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__RttiId_6,
  MR_Word ml_backend__rtti_to_mlds__ArgInfo_7,
  MR_Word * ml_backend__rtti_to_mlds__ArgLocnInitializer_8,
  MR_Integer ml_backend__rtti_to_mlds__PrevOffset_9,
  MR_Integer * ml_backend__rtti_to_mlds__NextPrevOffset_10)
{
  {
    MR_Word ml_backend__rtti_to_mlds__ArgWidth_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ArgInfo_7, (MR_Integer) 2)));
    MR_Integer ml_backend__rtti_to_mlds__FieldOffset_12;
    MR_Integer ml_backend__rtti_to_mlds__Shift_13;
    MR_Integer ml_backend__rtti_to_mlds__Bits_14;
    MR_Word ml_backend__rtti_to_mlds__Var_24;
    MR_Word ml_backend__rtti_to_mlds__Var_25;
    MR_Word ml_backend__rtti_to_mlds__Var_26;
    MR_Word ml_backend__rtti_to_mlds__Var_27;
    MR_Word ml_backend__rtti_to_mlds__Var_28;
    MR_Word ml_backend__rtti_to_mlds__Var_29;
    MR_Word ml_backend__rtti_to_mlds__Var_30;
    MR_Word ml_backend__rtti_to_mlds__Var_31;
    MR_Word ml_backend__rtti_to_mlds__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ArgInfo_7, (MR_Integer) 0)));
    MR_Word ml_backend__rtti_to_mlds__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ArgInfo_7, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__ArgWidth_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__rtti_to_mlds__ArgWidth_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ml_backend__rtti_to_mlds__FieldOffset_12 = (ml_backend__rtti_to_mlds__PrevOffset_9 + (MR_Integer) 1);
              ml_backend__rtti_to_mlds__Shift_13 = (MR_Integer) 0;
              ml_backend__rtti_to_mlds__Bits_14 = (MR_Integer) 0;
              *ml_backend__rtti_to_mlds__NextPrevOffset_10 = ml_backend__rtti_to_mlds__FieldOffset_12;
            }
            break;
          case (MR_Integer) 1:
            {
              ml_backend__rtti_to_mlds__FieldOffset_12 = (ml_backend__rtti_to_mlds__PrevOffset_9 + (MR_Integer) 1);
              ml_backend__rtti_to_mlds__Shift_13 = (MR_Integer) 0;
              ml_backend__rtti_to_mlds__Bits_14 = (MR_Integer) -1;
              *ml_backend__rtti_to_mlds__NextPrevOffset_10 = (ml_backend__rtti_to_mlds__FieldOffset_12 + (MR_Integer) 1);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ml_backend__rtti_to_mlds__Mask_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__ArgWidth_11, (MR_Integer) 0)));
          MR_Integer ml_backend__rtti_to_mlds__Var_19;

          ml_backend__rtti_to_mlds__FieldOffset_12 = (ml_backend__rtti_to_mlds__PrevOffset_9 + (MR_Integer) 1);
          ml_backend__rtti_to_mlds__Shift_13 = (MR_Integer) 0;
          ml_backend__rtti_to_mlds__Var_19 = (ml_backend__rtti_to_mlds__Mask_15 + (MR_Integer) 1);
          mercury__int__log2_2_p_0(ml_backend__rtti_to_mlds__Var_19, &ml_backend__rtti_to_mlds__Bits_14);
          *ml_backend__rtti_to_mlds__NextPrevOffset_10 = ml_backend__rtti_to_mlds__FieldOffset_12;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ml_backend__rtti_to_mlds__Var_16;
          MR_Integer ml_backend__rtti_to_mlds__Mask_33;

          ml_backend__rtti_to_mlds__Shift_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__ArgWidth_11, (MR_Integer) 0)));
          ml_backend__rtti_to_mlds__Mask_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__ArgWidth_11, (MR_Integer) 1)));
          ml_backend__rtti_to_mlds__FieldOffset_12 = ml_backend__rtti_to_mlds__PrevOffset_9;
          ml_backend__rtti_to_mlds__Var_16 = (ml_backend__rtti_to_mlds__Mask_33 + (MR_Integer) 1);
          mercury__int__log2_2_p_0(ml_backend__rtti_to_mlds__Var_16, &ml_backend__rtti_to_mlds__Bits_14);
          *ml_backend__rtti_to_mlds__NextPrevOffset_10 = ml_backend__rtti_to_mlds__FieldOffset_12;
        }
        break;
    }
    {
      ml_backend__rtti_to_mlds__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_25, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_6));
    }
    {
      ml_backend__rtti_to_mlds__Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_24, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_25));
    }
    ml_backend__rtti_to_mlds__Var_27 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__FieldOffset_12);
    ml_backend__rtti_to_mlds__Var_29 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Shift_13);
    ml_backend__rtti_to_mlds__Var_31 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Bits_14);
    {
      ml_backend__rtti_to_mlds__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_31));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__rtti_to_mlds__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_28, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_29));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_28, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_30));
    }
    {
      ml_backend__rtti_to_mlds__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_26, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_27));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_26, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__rtti_to_mlds__ArgLocnInitializer_8 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_24));
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_26));
    }
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__make_exist_tc_constr_id_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_6,
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_7,
  MR_Integer ml_backend__rtti_to_mlds__TCNum_8,
  MR_Integer ml_backend__rtti_to_mlds__Arity_9,
  MR_Word * ml_backend__rtti_to_mlds__RttiId_10)
{
  {
    MR_Word ml_backend__rtti_to_mlds__RttiName_11;

    {
      ml_backend__rtti_to_mlds__RttiName_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiName_11, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_7));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiName_11, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__TCNum_8));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiName_11, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__Arity_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__rtti_to_mlds__RttiId_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_11));
    }
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0_3(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_12;

    ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_12);
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_12));
  }
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

    ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    return ml_backend__rtti_to_mlds__succeeded;
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv2_HeadVar__2_2;

    ml_backend__rtti_to_mlds__conv2_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_HeadVar__2_2));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_10,
  MR_Word ml_backend__rtti_to_mlds__Target_11,
  MR_Word ml_backend__rtti_to_mlds__MakeRttiId_12,
  MR_Word ml_backend__rtti_to_mlds__Constraint_13,
  MR_Word * ml_backend__rtti_to_mlds__RttiId_14,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Counter_0_26,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Counter_27,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_28,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_29)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_40_40 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_20_57;
    MR_Word ml_backend__rtti_to_mlds__TCName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Constraint_13, (MR_Integer) 0)));
    MR_Word ml_backend__rtti_to_mlds__Types_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Constraint_13, (MR_Integer) 1)));
    MR_Integer ml_backend__rtti_to_mlds__Arity_19;
    MR_Integer ml_backend__rtti_to_mlds__TCNum_20;
    MR_Word ml_backend__rtti_to_mlds__TypeRttiDatas_23;
    MR_Word ml_backend__rtti_to_mlds__PTIInitializers_24;
    MR_Word ml_backend__rtti_to_mlds__Initializer_25;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_32_32;
    MR_Word ml_backend__rtti_to_mlds__Var_33;
    MR_Word ml_backend__rtti_to_mlds__Var_34;
    MR_Word ml_backend__rtti_to_mlds__Var_35;
    MR_Word ml_backend__rtti_to_mlds__Var_36;
    MR_Word ml_backend__rtti_to_mlds__Var_37;
    MR_Word ml_backend__rtti_to_mlds__RealRttiDatas_51;
    MR_Word ml_backend__rtti_to_mlds__ModuleName_52;
    MR_Word ml_backend__rtti_to_mlds__Var_54;
    MR_Word ml_backend__rtti_to_mlds__Name_68;
    void MR_CALL (* ml_backend__rtti_to_mlds__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box ml_backend__rtti_to_mlds__conv1_RttiId_14;
    MR_Word ml_backend__rtti_to_mlds__ModuleName_22;
    MR_Box ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_32_32;

    mercury__list__length_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_40_40, ml_backend__rtti_to_mlds__Types_18, &ml_backend__rtti_to_mlds__Arity_19);
    mercury__counter__allocate_3_p_0(&ml_backend__rtti_to_mlds__TCNum_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_Counter_0_26, ml_backend__rtti_to_mlds__STATE_VARIABLE_Counter_27);
    ml_backend__rtti_to_mlds__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__MakeRttiId_12, (MR_Integer) 1)));
    ml_backend__rtti_to_mlds__func_0(((MR_Box) ml_backend__rtti_to_mlds__MakeRttiId_12), ((MR_Box) (ml_backend__rtti_to_mlds__TCNum_20)), ((MR_Box) (ml_backend__rtti_to_mlds__Arity_19)), &ml_backend__rtti_to_mlds__conv1_RttiId_14);
    *ml_backend__rtti_to_mlds__RttiId_14 = ((MR_Word) ml_backend__rtti_to_mlds__conv1_RttiId_14);
    hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_10, &ml_backend__rtti_to_mlds__ModuleName_22);
    ml_backend__rtti_to_mlds__TypeRttiDatas_23 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_40_40, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[35], ml_backend__rtti_to_mlds__Types_18);
    ml_backend__rtti_to_mlds__TypeCtorInfo_20_57 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
    ml_backend__rtti_to_mlds__RealRttiDatas_51 = mercury__list__filter_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_20_57, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[36], ml_backend__rtti_to_mlds__TypeRttiDatas_23);
    {
      ml_backend__rtti_to_mlds__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_54, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_54, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0_3));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_54, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_10));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_54, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Target_11));
    }
    mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_20_57, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__Var_54, ml_backend__rtti_to_mlds__RealRttiDatas_51, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_28)), &ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_32_32);
    ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_32_32 = ((MR_Word) ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_32_32);
    hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_10, &ml_backend__rtti_to_mlds__ModuleName_52);
    ml_backend__rtti_to_mlds__PTIInitializers_24 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)), ml_backend__rtti_to_mlds__ModuleName_52, ml_backend__rtti_to_mlds__TypeRttiDatas_23);
    {
      ml_backend__rtti_to_mlds__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_34, 0) = ((MR_Box) (*ml_backend__rtti_to_mlds__RttiId_14));
    }
    {
      ml_backend__rtti_to_mlds__Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_33, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_34));
    }
    ml_backend__rtti_to_mlds__Var_36 = ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_110_95_105_110_105_116_95_116_99_95_114_116_116_105_95_110_97_109_101_95_95_91_49_93_95_48_3_f_0(ml_backend__rtti_to_mlds__TCName_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
    {
      ml_backend__rtti_to_mlds__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__PTIInitializers_24));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__rtti_to_mlds__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_35, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_36));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_35, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_37));
    }
    {
      ml_backend__rtti_to_mlds__Initializer_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_25, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_33));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_35));
    }
    {
      ml_backend__rtti_to_mlds__Name_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_68, 0) = ((MR_Box) (*ml_backend__rtti_to_mlds__RttiId_14));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_68, *ml_backend__rtti_to_mlds__RttiId_14, ml_backend__rtti_to_mlds__Initializer_25, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_32_32, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_29);
  }
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_110_95_105_110_105_116_95_116_99_95_114_116_116_105_95_110_97_109_101_95_95_91_49_93_95_48_3_f_0(
  MR_Word ml_backend__rtti_to_mlds__TCName_6,
  MR_Word ml_backend__rtti_to_mlds__TCRttiName_7)
{
  {
    MR_Word ml_backend__rtti_to_mlds__HeadVar__4_4;
    MR_Word ml_backend__rtti_to_mlds__Var_8;
    MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_15;
    MR_Word ml_backend__rtti_to_mlds__RttiId_21;
    MR_Word ml_backend__rtti_to_mlds__Var_22;

    switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__rtti_to_mlds__TCRttiName_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__rtti_to_mlds__ModuleName_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
              MR_String ml_backend__rtti_to_mlds___ClassName_49 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
              MR_Integer ml_backend__rtti_to_mlds___Arity_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

              ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_48);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__rtti_to_mlds__ModuleName_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
              MR_String ml_backend__rtti_to_mlds___ClassName_59 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
              MR_Integer ml_backend__rtti_to_mlds___Arity_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

              ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_58);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__rtti_to_mlds__ModuleName_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
              MR_String ml_backend__rtti_to_mlds___ClassName_54 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
              MR_Integer ml_backend__rtti_to_mlds___Arity_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

              ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_53);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ml_backend__rtti_to_mlds__ModuleName_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
              MR_String ml_backend__rtti_to_mlds___ClassName_34 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
              MR_Integer ml_backend__rtti_to_mlds___Arity_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

              ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_33);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ml_backend__rtti_to_mlds__ModuleName_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
              MR_String ml_backend__rtti_to_mlds___ClassName_44 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
              MR_Integer ml_backend__rtti_to_mlds___Arity_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

              ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_43);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__rtti_to_mlds__InstanceModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)));
          MR_String ml_backend__rtti_to_mlds__Var_14 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 1)));

          ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__InstanceModuleName_13);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__rtti_to_mlds__ModuleName_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
          MR_String ml_backend__rtti_to_mlds___ClassName_39 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
          MR_Integer ml_backend__rtti_to_mlds___Arity_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

          ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_38);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__rtti_to_mlds__ModuleName_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
              MR_String ml_backend__rtti_to_mlds___ClassName_64 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
              MR_Integer ml_backend__rtti_to_mlds___Arity_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

              ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_63);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__rtti_to_mlds__ModuleName_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
              MR_String ml_backend__rtti_to_mlds___ClassName_84 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
              MR_Integer ml_backend__rtti_to_mlds___Arity_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

              ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_83);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__rtti_to_mlds__ModuleName_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
              MR_String ml_backend__rtti_to_mlds___ClassName_69 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
              MR_Integer ml_backend__rtti_to_mlds___Arity_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

              ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_68);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ml_backend__rtti_to_mlds__ModuleName_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
              MR_String ml_backend__rtti_to_mlds___ClassName_74 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
              MR_Integer ml_backend__rtti_to_mlds___Arity_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

              ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_73);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ml_backend__rtti_to_mlds__ModuleName_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
              MR_String ml_backend__rtti_to_mlds___ClassName_79 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
              MR_Integer ml_backend__rtti_to_mlds___Arity_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

              ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_78);
            }
            break;
        }
        break;
    }
    {
      ml_backend__rtti_to_mlds__RttiId_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiId_21, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_6));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiId_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__TCRttiName_7));
    }
    {
      ml_backend__rtti_to_mlds__Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_22, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_15));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_22, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_21));
    }
    {
      ml_backend__rtti_to_mlds__Var_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_8, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_22));
    }
    {
      ml_backend__rtti_to_mlds__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__4_4, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_8));
    }
    return ml_backend__rtti_to_mlds__HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_exist_locn_2_f_0(
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_4,
  MR_Word ml_backend__rtti_to_mlds__ExistTypeInfoLocn_5)
{
  {
    MR_Word ml_backend__rtti_to_mlds__Initializer_6;
    MR_Integer ml_backend__rtti_to_mlds__SlotInCell_7;
    MR_Integer ml_backend__rtti_to_mlds__SlotInTci_8;
    MR_Word ml_backend__rtti_to_mlds__RttiId_9;
    MR_Word ml_backend__rtti_to_mlds__Var_11;
    MR_Word ml_backend__rtti_to_mlds__Var_12;
    MR_Word ml_backend__rtti_to_mlds__Var_13;
    MR_Word ml_backend__rtti_to_mlds__Var_14;
    MR_Word ml_backend__rtti_to_mlds__Var_15;
    MR_Word ml_backend__rtti_to_mlds__Var_16;

    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__ExistTypeInfoLocn_5)) == (MR_mktag((MR_Integer) 0))))
    {
      ml_backend__rtti_to_mlds__SlotInCell_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ExistTypeInfoLocn_5, (MR_Integer) 0)));
      ml_backend__rtti_to_mlds__SlotInTci_8 = (MR_Integer) -1;
    }
    else
    {
      ml_backend__rtti_to_mlds__SlotInCell_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__ExistTypeInfoLocn_5, (MR_Integer) 0)));
      ml_backend__rtti_to_mlds__SlotInTci_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__ExistTypeInfoLocn_5, (MR_Integer) 1)));
    }
    {
      ml_backend__rtti_to_mlds__RttiId_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_9, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_4));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__rtti_to_mlds__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_12, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_9));
    }
    {
      ml_backend__rtti_to_mlds__Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_11, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_12));
    }
    ml_backend__rtti_to_mlds__Var_14 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__SlotInCell_7);
    ml_backend__rtti_to_mlds__Var_16 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__SlotInTci_8);
    {
      ml_backend__rtti_to_mlds__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_15, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_16));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__rtti_to_mlds__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_13, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_14));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_13, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_15));
    }
    {
      ml_backend__rtti_to_mlds__Initializer_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_6, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_11));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_6, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_13));
    }
    return ml_backend__rtti_to_mlds__Initializer_6;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_functor_desc_6_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
  MR_Word ml_backend__rtti_to_mlds__Target_8,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
  MR_Word ml_backend__rtti_to_mlds__MaybeResFunctor_10,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15)
{
  if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__MaybeResFunctor_10)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_Word ml_backend__rtti_to_mlds__DuFunctor_13 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__MaybeResFunctor_10), (MR_Integer) 1);

    ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__Target_8, ml_backend__rtti_to_mlds__RttiTypeCtor_9, ml_backend__rtti_to_mlds__DuFunctor_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15);
  }
  else
  {
    MR_Word ml_backend__rtti_to_mlds__ResFunctor_12 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__MaybeResFunctor_10), (MR_Integer) 0);
    MR_String ml_backend__rtti_to_mlds__FunctorName_24 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ResFunctor_12, (MR_Integer) 0)));
    MR_Integer ml_backend__rtti_to_mlds__Ordinal_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ResFunctor_12, (MR_Integer) 1)));
    MR_Word ml_backend__rtti_to_mlds__ReservedAddress_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ResFunctor_12, (MR_Integer) 2)));
    MR_Word ml_backend__rtti_to_mlds__RttiName_27;
    MR_Word ml_backend__rtti_to_mlds__RttiId_28;
    MR_Word ml_backend__rtti_to_mlds__Initializer_29;
    MR_Word ml_backend__rtti_to_mlds__Var_30;
    MR_Word ml_backend__rtti_to_mlds__Var_31;
    MR_Word ml_backend__rtti_to_mlds__Var_32;
    MR_Word ml_backend__rtti_to_mlds__Var_33;
    MR_Word ml_backend__rtti_to_mlds__Var_34;
    MR_Word ml_backend__rtti_to_mlds__Var_35;
    MR_Word ml_backend__rtti_to_mlds__Var_36;
    MR_Word ml_backend__rtti_to_mlds__Var_37;
    MR_Word ml_backend__rtti_to_mlds__Name_45;

    {
      ml_backend__rtti_to_mlds__RttiName_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_25));
    }
    {
      ml_backend__rtti_to_mlds__RttiId_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_28, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_28, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_27));
    }
    {
      ml_backend__rtti_to_mlds__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_31, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_28));
    }
    {
      ml_backend__rtti_to_mlds__Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_31));
    }
    ml_backend__rtti_to_mlds__Var_33 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__FunctorName_24);
    ml_backend__rtti_to_mlds__Var_35 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Ordinal_25);
    ml_backend__rtti_to_mlds__Var_37 = ml_backend__ml_util__gen_init_reserved_address_2_f_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__ReservedAddress_26);
    {
      ml_backend__rtti_to_mlds__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_36, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_37));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__rtti_to_mlds__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_34, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_35));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_34, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_36));
    }
    {
      ml_backend__rtti_to_mlds__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_33));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_32, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_34));
    }
    {
      ml_backend__rtti_to_mlds__Initializer_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_29, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_30));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_29, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_32));
    }
    {
      ml_backend__rtti_to_mlds__Name_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_45, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_28));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_45, ml_backend__rtti_to_mlds__RttiId_28, ml_backend__rtti_to_mlds__Initializer_29, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15);
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__2_2;

    ml_backend__rtti_to_mlds__conv1_HeadVar__2_2 = backend_libs__rtti__du_arg_info_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__2_2));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

    ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__du_arg_info_type_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_3(
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
{
  {
    struct ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

    MR_builtin_longjmp((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_5(
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
{
  {
    struct ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

    (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__Var_108 = ((MR_Word) (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__conv2_Var_108);
    ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_4(ml_backend__rtti_to_mlds__env_ptr);
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_4(
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
{
  {
    struct ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

    (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__TypeCtorInfo_109_109 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__succeeded = ml_backend__rtti_to_mlds____Unify____maybe__maybe_1_2((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__TypeCtorInfo_109_109, (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__Var_45, (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__Var_108);
    if ((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__succeeded)
      ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_3(ml_backend__rtti_to_mlds__env_ptr);
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_6(
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
{
  {
    struct ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

    if (MR_builtin_setjmp((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__commit_0) == 0)
      {
        {
          MR_String ml_backend__rtti_to_mlds__Var_22;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__Var_45 = base;
            MR_hl_field(MR_mktag(1), base, 0) = NULL;
          }
          mercury__list__member_2_p_1((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__TypeInfo_105_105, &(ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__conv2_Var_108, (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__MaybeArgNames_20, ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_5, ml_backend__rtti_to_mlds__env_ptr);
        }
        (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
  MR_Word ml_backend__rtti_to_mlds__Target_8,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
  MR_Word ml_backend__rtti_to_mlds__DuFunctor_10,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_41,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_42)
{
  {
    struct ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0_s ml_backend__rtti_to_mlds__env;

    {
      MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_101_101 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0;
      MR_String ml_backend__rtti_to_mlds__FunctorName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_10, (MR_Integer) 0)));
      MR_Integer ml_backend__rtti_to_mlds__Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_10, (MR_Integer) 1)));
      MR_Integer ml_backend__rtti_to_mlds__Ordinal_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_10, (MR_Integer) 2)));
      MR_Word ml_backend__rtti_to_mlds__Rep_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_10, (MR_Integer) 3)));
      MR_Word ml_backend__rtti_to_mlds__ArgInfos_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_10, (MR_Integer) 4)));
      MR_Word ml_backend__rtti_to_mlds__MaybeExistInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_10, (MR_Integer) 5)));
      MR_Word ml_backend__rtti_to_mlds__FunctorSubtypeInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_10, (MR_Integer) 6)));
      MR_Word ml_backend__rtti_to_mlds__ArgTypes_19;
      MR_Integer ml_backend__rtti_to_mlds__ContainsVarBitVector_23;
      MR_Word ml_backend__rtti_to_mlds__ModuleName_24;
      MR_Word ml_backend__rtti_to_mlds__ArgTypeInitializer_27;
      MR_Word ml_backend__rtti_to_mlds__ArgNameInitializer_28;
      MR_Word ml_backend__rtti_to_mlds__HaveArgLocns_29;
      MR_Word ml_backend__rtti_to_mlds__ArgLocnsInitializer_30;
      MR_Word ml_backend__rtti_to_mlds__ExistInfoInitializer_32;
      MR_Integer ml_backend__rtti_to_mlds__Ptag_33;
      MR_Word ml_backend__rtti_to_mlds__SectagAndLocn_34;
      MR_Word ml_backend__rtti_to_mlds__Locn_36;
      MR_Integer ml_backend__rtti_to_mlds__Stag_37;
      MR_Word ml_backend__rtti_to_mlds__RttiName_38;
      MR_Word ml_backend__rtti_to_mlds__RttiId_39;
      MR_Word ml_backend__rtti_to_mlds__Initializer_40;
      MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_51_51;
      MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_58_58;
      MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_60_60;
      MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_72_72;
      MR_Word ml_backend__rtti_to_mlds__Var_77;
      MR_Word ml_backend__rtti_to_mlds__Var_78;
      MR_Word ml_backend__rtti_to_mlds__Var_79;
      MR_Word ml_backend__rtti_to_mlds__Var_80;
      MR_Word ml_backend__rtti_to_mlds__Var_81;
      MR_Word ml_backend__rtti_to_mlds__Var_82;
      MR_Word ml_backend__rtti_to_mlds__Var_83;
      MR_Word ml_backend__rtti_to_mlds__Var_84;
      MR_Word ml_backend__rtti_to_mlds__Var_85;
      MR_Word ml_backend__rtti_to_mlds__Var_86;
      MR_Word ml_backend__rtti_to_mlds__Var_87;
      MR_Word ml_backend__rtti_to_mlds__Var_88;
      MR_Word ml_backend__rtti_to_mlds__Var_89;
      MR_Word ml_backend__rtti_to_mlds__Var_90;
      MR_Word ml_backend__rtti_to_mlds__Var_91;
      MR_Word ml_backend__rtti_to_mlds__Var_92;
      MR_Word ml_backend__rtti_to_mlds__Var_93;
      MR_Word ml_backend__rtti_to_mlds__Var_94;
      MR_Word ml_backend__rtti_to_mlds__Var_95;
      MR_Word ml_backend__rtti_to_mlds__Var_96;
      MR_Word ml_backend__rtti_to_mlds__Var_97;
      MR_Word ml_backend__rtti_to_mlds__Var_98;

      ml_backend__rtti_to_mlds__ArgTypes_19 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_101_101, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[33], ml_backend__rtti_to_mlds__ArgInfos_16);
      (ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__TypeInfo_105_105 = (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[4];
      (ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__MaybeArgNames_20 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_101_101, (ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__TypeInfo_105_105, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[34], ml_backend__rtti_to_mlds__ArgInfos_16);
      ml_backend__rtti_to_mlds__ContainsVarBitVector_23 = backend_libs__type_ctor_info__compute_contains_var_bit_vector_1_f_0(ml_backend__rtti_to_mlds__ArgTypes_19);
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_24);
      if ((ml_backend__rtti_to_mlds__ArgInfos_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ml_backend__rtti_to_mlds__Var_46;
        MR_Word ml_backend__rtti_to_mlds__Var_47;
        MR_Word ml_backend__rtti_to_mlds__Var_48;

        {
          ml_backend__rtti_to_mlds__Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_48, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_9));
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__rtti_to_mlds_scalar_common_1[10])));
        }
        {
          ml_backend__rtti_to_mlds__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_47, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_48));
        }
        {
          ml_backend__rtti_to_mlds__Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_46, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_47));
        }
        ml_backend__rtti_to_mlds__ArgTypeInitializer_27 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__Var_46);
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_51_51 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_41;
      }
      else
      {
        MR_Word ml_backend__rtti_to_mlds__Var_52;

        ml_backend__rtti_to_mlds__gen_field_types_7_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__Target_8, ml_backend__rtti_to_mlds__RttiTypeCtor_9, ml_backend__rtti_to_mlds__Ordinal_14, ml_backend__rtti_to_mlds__ArgTypes_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_41, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_51_51);
        {
          ml_backend__rtti_to_mlds__Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_52, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_14));
        }
        ml_backend__rtti_to_mlds__ArgTypeInitializer_27 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_24, ml_backend__rtti_to_mlds__RttiTypeCtor_9, ml_backend__rtti_to_mlds__Var_52);
      }
      ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_6(&ml_backend__rtti_to_mlds__env);
      if ((ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__succeeded)
      {
        MR_Word ml_backend__rtti_to_mlds__Var_59;

        ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_9, ml_backend__rtti_to_mlds__Ordinal_14, (ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0_env_0__MaybeArgNames_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_51_51, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_58_58);
        {
          ml_backend__rtti_to_mlds__Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_59, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_14));
        }
        ml_backend__rtti_to_mlds__ArgNameInitializer_28 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_24, ml_backend__rtti_to_mlds__RttiTypeCtor_9, ml_backend__rtti_to_mlds__Var_59);
      }
      else
      {
        MR_Word ml_backend__rtti_to_mlds__Var_53;
        MR_Word ml_backend__rtti_to_mlds__Var_54;
        MR_Word ml_backend__rtti_to_mlds__Var_55;

        {
          ml_backend__rtti_to_mlds__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_55, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_9));
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__rtti_to_mlds_scalar_common_1[11])));
        }
        {
          ml_backend__rtti_to_mlds__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_54, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_55));
        }
        {
          ml_backend__rtti_to_mlds__Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_53, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_54));
        }
        ml_backend__rtti_to_mlds__ArgNameInitializer_28 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__Var_53);
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_58_58 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_51_51;
      }
      ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_9, ml_backend__rtti_to_mlds__Ordinal_14, ml_backend__rtti_to_mlds__ArgInfos_16, &ml_backend__rtti_to_mlds__HaveArgLocns_29, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_58_58, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_60_60);
      switch (ml_backend__rtti_to_mlds__HaveArgLocns_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ml_backend__rtti_to_mlds__Var_61;
            MR_Word ml_backend__rtti_to_mlds__Var_62;
            MR_Word ml_backend__rtti_to_mlds__Var_63;

            {
              ml_backend__rtti_to_mlds__Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_63, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_9));
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__rtti_to_mlds_scalar_common_1[12])));
            }
            {
              ml_backend__rtti_to_mlds__Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_62, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_63));
            }
            {
              ml_backend__rtti_to_mlds__Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_61, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_62));
            }
            ml_backend__rtti_to_mlds__ArgLocnsInitializer_30 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__Var_61);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__rtti_to_mlds__Var_66;

            {
              ml_backend__rtti_to_mlds__Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_66, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_14));
            }
            ml_backend__rtti_to_mlds__ArgLocnsInitializer_30 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_24, ml_backend__rtti_to_mlds__RttiTypeCtor_9, ml_backend__rtti_to_mlds__Var_66);
          }
          break;
      }
      if ((ml_backend__rtti_to_mlds__MaybeExistInfo_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ml_backend__rtti_to_mlds__Var_67;
        MR_Word ml_backend__rtti_to_mlds__Var_68;
        MR_Word ml_backend__rtti_to_mlds__Var_69;

        {
          ml_backend__rtti_to_mlds__Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_69, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_9));
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__rtti_to_mlds_scalar_common_1[13])));
        }
        {
          ml_backend__rtti_to_mlds__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_68, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_69));
        }
        {
          ml_backend__rtti_to_mlds__Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_67, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_68));
        }
        ml_backend__rtti_to_mlds__ExistInfoInitializer_32 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__Var_67);
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_72_72 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_60_60;
      }
      else
      {
        MR_Word ml_backend__rtti_to_mlds__ExistInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__MaybeExistInfo_17, (MR_Integer) 0)));
        MR_Word ml_backend__rtti_to_mlds__Var_73;

        ml_backend__rtti_to_mlds__gen_exist_info_7_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__Target_8, ml_backend__rtti_to_mlds__RttiTypeCtor_9, ml_backend__rtti_to_mlds__Ordinal_14, ml_backend__rtti_to_mlds__ExistInfo_31, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_60_60, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_72_72);
        {
          ml_backend__rtti_to_mlds__Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_73, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_14));
        }
        ml_backend__rtti_to_mlds__ExistInfoInitializer_32 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_24, ml_backend__rtti_to_mlds__RttiTypeCtor_9, ml_backend__rtti_to_mlds__Var_73);
      }
      if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Rep_15)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.gen_du_functor_desc\'/6", (MR_String) "du_hl_rep");
          return;
        }
      }
      else
      {
        ml_backend__rtti_to_mlds__Ptag_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Rep_15, (MR_Integer) 0)));
        ml_backend__rtti_to_mlds__SectagAndLocn_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Rep_15, (MR_Integer) 1)));
      }
      switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__SectagAndLocn_34)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ml_backend__rtti_to_mlds__SectagAndLocn_34)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ml_backend__rtti_to_mlds__Locn_36 = (MR_Integer) 0;
                ml_backend__rtti_to_mlds__Stag_37 = (MR_Integer) -1;
              }
              break;
            case (MR_Integer) 1:
              {
                ml_backend__rtti_to_mlds__Locn_36 = (MR_Integer) 1;
                ml_backend__rtti_to_mlds__Stag_37 = (MR_Integer) -1;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            ml_backend__rtti_to_mlds__Stag_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__SectagAndLocn_34, (MR_Integer) 0)));
            ml_backend__rtti_to_mlds__Locn_36 = (MR_Integer) 2;
          }
          break;
        case (MR_Integer) 2:
          {
            ml_backend__rtti_to_mlds__Stag_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__SectagAndLocn_34, (MR_Integer) 0)));
            ml_backend__rtti_to_mlds__Locn_36 = (MR_Integer) 3;
          }
          break;
      }
      {
        ml_backend__rtti_to_mlds__RttiName_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_38, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_14));
      }
      {
        ml_backend__rtti_to_mlds__RttiId_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_39, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_9));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_39, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_38));
      }
      {
        ml_backend__rtti_to_mlds__Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_78, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_39));
      }
      {
        ml_backend__rtti_to_mlds__Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_77, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_78));
      }
      ml_backend__rtti_to_mlds__Var_80 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__FunctorName_12);
      ml_backend__rtti_to_mlds__Var_82 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Arity_13);
      ml_backend__rtti_to_mlds__Var_84 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__ContainsVarBitVector_23);
      ml_backend__rtti_to_mlds__Var_86 = ml_backend__rtti_to_mlds__gen_init_sectag_locn_1_f_0(ml_backend__rtti_to_mlds__Locn_36);
      ml_backend__rtti_to_mlds__Var_88 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Ptag_33);
      ml_backend__rtti_to_mlds__Var_90 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Stag_37);
      ml_backend__rtti_to_mlds__Var_92 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Ordinal_14);
      ml_backend__rtti_to_mlds__Var_98 = ml_backend__rtti_to_mlds__gen_init_functor_subtype_info_1_f_0(ml_backend__rtti_to_mlds__FunctorSubtypeInfo_18);
      {
        ml_backend__rtti_to_mlds__Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_97, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_98));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        ml_backend__rtti_to_mlds__Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_96, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ExistInfoInitializer_32));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_96, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_97));
      }
      {
        ml_backend__rtti_to_mlds__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_95, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ArgLocnsInitializer_30));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_95, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_96));
      }
      {
        ml_backend__rtti_to_mlds__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_94, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ArgNameInitializer_28));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_94, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_95));
      }
      {
        ml_backend__rtti_to_mlds__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_93, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ArgTypeInitializer_27));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_93, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_94));
      }
      {
        ml_backend__rtti_to_mlds__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_91, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_92));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_91, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_93));
      }
      {
        ml_backend__rtti_to_mlds__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_89, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_90));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_89, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_91));
      }
      {
        ml_backend__rtti_to_mlds__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_87, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_88));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_87, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_89));
      }
      {
        ml_backend__rtti_to_mlds__Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_85, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_86));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_85, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_87));
      }
      {
        ml_backend__rtti_to_mlds__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_83, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_84));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_83, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_85));
      }
      {
        ml_backend__rtti_to_mlds__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_81, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_82));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_81, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_83));
      }
      {
        ml_backend__rtti_to_mlds__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_79, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_80));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_79, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_81));
      }
      {
        ml_backend__rtti_to_mlds__Initializer_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_40, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_77));
        MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_40, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_79));
      }
      ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(ml_backend__rtti_to_mlds__RttiId_39, ml_backend__rtti_to_mlds__Initializer_40, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_72_72, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_42);
    }
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_5(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv2_ArgLocnInitializer_8;
    MR_Integer ml_backend__rtti_to_mlds__conv1_NextPrevOffset_10;

    ml_backend__rtti_to_mlds__gen_field_locn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv2_ArgLocnInitializer_8, ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_3), &ml_backend__rtti_to_mlds__conv1_NextPrevOffset_10);
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_ArgLocnInitializer_8));
    *ml_backend__rtti_to_mlds__wrapper_arg_4 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_NextPrevOffset_10));
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_1(
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
{
  {
    struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

    MR_builtin_longjmp((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_3(
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
{
  {
    struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

    (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfo_26 = ((MR_Word) (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv0_ArgInfo_26);
    ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_2(ml_backend__rtti_to_mlds__env_ptr);
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_2(
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
{
  {
    struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

    {
      MR_Word ml_backend__rtti_to_mlds__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfo_26, (MR_Integer) 2)));
      MR_Word ml_backend__rtti_to_mlds__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfo_26, (MR_Integer) 0)));
      MR_Word ml_backend__rtti_to_mlds__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfo_26, (MR_Integer) 1)));

      (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = (ml_backend__rtti_to_mlds__Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = !((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded);
      if ((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
        ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_1(ml_backend__rtti_to_mlds__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_4(
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
{
  {
    struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

    if (MR_builtin_setjmp((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0, &(ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv0_ArgInfo_26, (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfos_11, ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_3, ml_backend__rtti_to_mlds__env_ptr);
        }
        (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
      }
    else
      (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_10,
  MR_Word ml_backend__rtti_to_mlds__ArgInfos_11,
  MR_Word * ml_backend__rtti_to_mlds__HaveArgLocns_12,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_20,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_21)
{
  {
    struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s ml_backend__rtti_to_mlds__env;

    (ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfos_11 = ml_backend__rtti_to_mlds__ArgInfos_11;
    ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_4(&ml_backend__rtti_to_mlds__env);
    if ((ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
    {
      MR_Word ml_backend__rtti_to_mlds__RttiName_15;
      MR_Word ml_backend__rtti_to_mlds__RttiId_16;
      MR_Word ml_backend__rtti_to_mlds__ArgLocnInitializers_17;
      MR_Word ml_backend__rtti_to_mlds__Initializer_19;
      MR_Word ml_backend__rtti_to_mlds__Var_23;
      MR_Word ml_backend__rtti_to_mlds__Name_42;
      MR_Integer ml_backend__rtti_to_mlds___Offset_18;
      MR_Box ml_backend__rtti_to_mlds__conv3__Offset_18;

      *ml_backend__rtti_to_mlds__HaveArgLocns_12 = (MR_Integer) 1;
      {
        ml_backend__rtti_to_mlds__RttiName_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_15, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_10));
      }
      {
        ml_backend__rtti_to_mlds__RttiId_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_16, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_9));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_15));
      }
      {
        ml_backend__rtti_to_mlds__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_23, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[6]));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_5));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_23, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_16));
      }
      mercury__list__map_foldl_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__rtti_to_mlds__Var_23, (ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfos_11, &ml_backend__rtti_to_mlds__ArgLocnInitializers_17, ((MR_Box) ((MR_Integer) -1)), &ml_backend__rtti_to_mlds__conv3__Offset_18);
      ml_backend__rtti_to_mlds___Offset_18 = ((MR_Integer) ml_backend__rtti_to_mlds__conv3__Offset_18);
      {
        ml_backend__rtti_to_mlds__Initializer_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Initializer_19, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ArgLocnInitializers_17));
      }
      {
        ml_backend__rtti_to_mlds__Name_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_42, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_16));
      }
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_42, ml_backend__rtti_to_mlds__RttiId_16, ml_backend__rtti_to_mlds__Initializer_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_21);
    }
    else
    {
      *ml_backend__rtti_to_mlds__HaveArgLocns_12 = (MR_Integer) 0;
      *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_21 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_20;
    }
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__4_27;

    ml_backend__rtti_to_mlds__conv1_HeadVar__4_27 = ml_backend__rtti_to_mlds__IntroducedFrom__func__gen_field_names__1007__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__4_27));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

    ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = ml_backend__ml_util__gen_init_string_1_f_0(((MR_String) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0(
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
  MR_Word ml_backend__rtti_to_mlds__MaybeNames_10,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
{
  {
    MR_Word ml_backend__rtti_to_mlds__StrType_12 = (MR_Word) MR_mkword(MR_mktag(2), &ml_backend__rtti_to_mlds_scalar_common_11[0]);
    MR_Word ml_backend__rtti_to_mlds__Initializer_13;
    MR_Word ml_backend__rtti_to_mlds__RttiName_14;
    MR_Word ml_backend__rtti_to_mlds__Var_18;
    MR_Word ml_backend__rtti_to_mlds__Var_19;
    MR_Word ml_backend__rtti_to_mlds__Var_22;
    MR_Word ml_backend__rtti_to_mlds__RttiId_37;
    MR_Word ml_backend__rtti_to_mlds__Name_44;

    ml_backend__rtti_to_mlds__Var_22 = backend_libs__foreign__non_foreign_type_1_f_0(ml_backend__rtti_to_mlds__StrType_12);
    {
      ml_backend__rtti_to_mlds__Var_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Var_19, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__StrType_12));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__rtti_to_mlds_scalar_common_11[1])));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Var_19, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_22));
    }
    {
      ml_backend__rtti_to_mlds__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_18, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[5]));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_18, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_18, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_19));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_18, 4) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_2[32]));
    }
    ml_backend__rtti_to_mlds__Initializer_13 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[4], ml_backend__rtti_to_mlds__Var_18, ml_backend__rtti_to_mlds__MaybeNames_10);
    {
      ml_backend__rtti_to_mlds__RttiName_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_14, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
    }
    {
      ml_backend__rtti_to_mlds__RttiId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_14));
    }
    {
      ml_backend__rtti_to_mlds__Name_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_37));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_44, ml_backend__rtti_to_mlds__RttiId_37, ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
  }
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds____Unify____maybe__maybe_1_2(
  MR_Word ml_backend__rtti_to_mlds__TypeInfo_for_T_9,
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_1,
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_2)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Box ml_backend__rtti_to_mlds__ArgX1_5;

    if (ml_backend__rtti_to_mlds__succeeded)
    {
      ml_backend__rtti_to_mlds__ArgX1_5 = (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__2_2, (MR_Integer) 0));
      (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__1_1, (MR_Integer) 0)) = ml_backend__rtti_to_mlds__ArgX1_5;
      ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
    }
    return ml_backend__rtti_to_mlds__succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_functor_subtype_info_1_f_0(
  MR_Word ml_backend__rtti_to_mlds__FunctorSubtypeInfo_3)
{
  {
    MR_Word ml_backend__rtti_to_mlds__Initializer_4;
    MR_Word ml_backend__rtti_to_mlds__TargetPrefixes_5;
    MR_String ml_backend__rtti_to_mlds__Name_6;

    backend_libs__rtti__functor_subtype_info_to_string_3_p_0(ml_backend__rtti_to_mlds__FunctorSubtypeInfo_3, &ml_backend__rtti_to_mlds__TargetPrefixes_5, &ml_backend__rtti_to_mlds__Name_6);
    ml_backend__rtti_to_mlds__Initializer_4 = ml_backend__ml_util__gen_init_builtin_const_2_f_0(ml_backend__rtti_to_mlds__TargetPrefixes_5, ml_backend__rtti_to_mlds__Name_6);
    return ml_backend__rtti_to_mlds__Initializer_4;
  }
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_sectag_locn_1_f_0(
  MR_Word ml_backend__rtti_to_mlds__Locn_3)
{
  {
    MR_Word ml_backend__rtti_to_mlds__Initializer_4;
    MR_Word ml_backend__rtti_to_mlds__TargetPrefixes_5;
    MR_String ml_backend__rtti_to_mlds__Name_6;

    backend_libs__rtti__sectag_locn_to_string_3_p_0(ml_backend__rtti_to_mlds__Locn_3, &ml_backend__rtti_to_mlds__TargetPrefixes_5, &ml_backend__rtti_to_mlds__Name_6);
    ml_backend__rtti_to_mlds__Initializer_4 = ml_backend__ml_util__gen_init_builtin_const_2_f_0(ml_backend__rtti_to_mlds__TargetPrefixes_5, ml_backend__rtti_to_mlds__Name_6);
    return ml_backend__rtti_to_mlds__Initializer_4;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_7_p_0_3(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_12;

    ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_12);
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_12));
  }
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_7_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

    ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    return ml_backend__rtti_to_mlds__succeeded;
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_7_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

    ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_or_self_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_7_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_8,
  MR_Word ml_backend__rtti_to_mlds__Target_9,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_10,
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_11,
  MR_Word ml_backend__rtti_to_mlds__Types_12,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_17,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_20_39;
    MR_Word ml_backend__rtti_to_mlds__TypeRttiDatas_14;
    MR_Word ml_backend__rtti_to_mlds__Initializer_15;
    MR_Word ml_backend__rtti_to_mlds__RttiName_16;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_20_20;
    MR_Word ml_backend__rtti_to_mlds__RealRttiDatas_33;
    MR_Word ml_backend__rtti_to_mlds__ModuleName_34;
    MR_Word ml_backend__rtti_to_mlds__Var_36;
    MR_Word ml_backend__rtti_to_mlds__RttiId_51;
    MR_Word ml_backend__rtti_to_mlds__Name_58;
    MR_Box ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_20_20;

    ml_backend__rtti_to_mlds__TypeRttiDatas_14 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[30], ml_backend__rtti_to_mlds__Types_12);
    ml_backend__rtti_to_mlds__TypeCtorInfo_20_39 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
    ml_backend__rtti_to_mlds__RealRttiDatas_33 = mercury__list__filter_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_20_39, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[31], ml_backend__rtti_to_mlds__TypeRttiDatas_14);
    {
      ml_backend__rtti_to_mlds__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_36, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_36, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_field_types_7_p_0_3));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_36, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_8));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_36, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Target_9));
    }
    mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_20_39, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__Var_36, ml_backend__rtti_to_mlds__RealRttiDatas_33, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_17)), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_20_20);
    ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_20_20 = ((MR_Word) ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_20_20);
    hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_8, &ml_backend__rtti_to_mlds__ModuleName_34);
    ml_backend__rtti_to_mlds__Initializer_15 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)), ml_backend__rtti_to_mlds__ModuleName_34, ml_backend__rtti_to_mlds__TypeRttiDatas_14);
    {
      ml_backend__rtti_to_mlds__RttiName_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_11));
    }
    {
      ml_backend__rtti_to_mlds__RttiId_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_51, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_10));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_51, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_16));
    }
    {
      ml_backend__rtti_to_mlds__Name_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_58, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_51));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_58, ml_backend__rtti_to_mlds__RttiId_51, ml_backend__rtti_to_mlds__Initializer_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_20_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18);
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_7_p_0_3(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv6_Initializer_8;

    ml_backend__rtti_to_mlds__conv6_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv6_Initializer_8));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_7_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_5,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_6)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv3_RttiId_14;
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Counter_27;
    MR_Word ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_29;

    ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv3_RttiId_14, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_3), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Counter_27, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_5), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_29);
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv3_RttiId_14));
    *ml_backend__rtti_to_mlds__wrapper_arg_4 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Counter_27));
    *ml_backend__rtti_to_mlds__wrapper_arg_6 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_29));
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_7_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_RttiId_10;

    ml_backend__rtti_to_mlds__make_exist_tc_constr_id_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_RttiId_10);
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_RttiId_10));
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_7_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_8,
  MR_Word ml_backend__rtti_to_mlds__Target_9,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_10,
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_11,
  MR_Word ml_backend__rtti_to_mlds__ExistInfo_12,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_32,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_33)
{
  {
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_62_62;
    MR_Integer ml_backend__rtti_to_mlds__Plain_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ExistInfo_12, (MR_Integer) 0)));
    MR_Integer ml_backend__rtti_to_mlds__InTci_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ExistInfo_12, (MR_Integer) 1)));
    MR_Word ml_backend__rtti_to_mlds__Constraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ExistInfo_12, (MR_Integer) 2)));
    MR_Word ml_backend__rtti_to_mlds__Locns_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ExistInfo_12, (MR_Integer) 3)));
    MR_Word ml_backend__rtti_to_mlds__ModuleName_18;
    MR_Word ml_backend__rtti_to_mlds__RttiName_19;
    MR_Word ml_backend__rtti_to_mlds__RttiId_20;
    MR_Integer ml_backend__rtti_to_mlds__Tci_21;
    MR_Word ml_backend__rtti_to_mlds__ConstrInitializer_22;
    MR_Word ml_backend__rtti_to_mlds__Initializer_31;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_42_42;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_47_47;
    MR_Word ml_backend__rtti_to_mlds__Var_48;
    MR_Word ml_backend__rtti_to_mlds__Var_49;
    MR_Word ml_backend__rtti_to_mlds__Var_50;
    MR_Word ml_backend__rtti_to_mlds__Var_51;
    MR_Word ml_backend__rtti_to_mlds__Var_52;
    MR_Word ml_backend__rtti_to_mlds__Var_53;
    MR_Word ml_backend__rtti_to_mlds__Var_54;
    MR_Word ml_backend__rtti_to_mlds__Var_55;
    MR_Word ml_backend__rtti_to_mlds__Var_56;
    MR_Word ml_backend__rtti_to_mlds__Var_57;
    MR_Word ml_backend__rtti_to_mlds__Var_58;
    MR_Word ml_backend__rtti_to_mlds__Var_59;

    hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_8, &ml_backend__rtti_to_mlds__ModuleName_18);
    {
      ml_backend__rtti_to_mlds__RttiName_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_19, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_11));
    }
    {
      ml_backend__rtti_to_mlds__RttiId_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_20, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_10));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_20, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_19));
    }
    ml_backend__rtti_to_mlds__TypeCtorInfo_62_62 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0;
    mercury__list__length_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_62_62, ml_backend__rtti_to_mlds__Constraints_16, &ml_backend__rtti_to_mlds__Tci_21);
    if ((ml_backend__rtti_to_mlds__Constraints_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word ml_backend__rtti_to_mlds__Var_43;
      MR_Word ml_backend__rtti_to_mlds__Var_44;
      MR_Word ml_backend__rtti_to_mlds__Var_45;
      MR_Word ml_backend__rtti_to_mlds__Var_46;

      {
        ml_backend__rtti_to_mlds__Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_46, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_11));
      }
      {
        ml_backend__rtti_to_mlds__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_45, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_10));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_46));
      }
      {
        ml_backend__rtti_to_mlds__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_45));
      }
      {
        ml_backend__rtti_to_mlds__Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_44));
      }
      ml_backend__rtti_to_mlds__ConstrInitializer_22 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__Var_43);
      ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_42_42 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_32;
    }
    else
    {
      MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_72_72;
      MR_Word ml_backend__rtti_to_mlds__TCConstrIds_25;
      MR_Word ml_backend__rtti_to_mlds__TCConstrArrayRttiName_27;
      MR_Word ml_backend__rtti_to_mlds__ElementType_29;
      MR_Word ml_backend__rtti_to_mlds__TCConstrArrayInitializer_30;
      MR_Word ml_backend__rtti_to_mlds__Var_35;
      MR_Word ml_backend__rtti_to_mlds__Var_36;
      MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_37_37;
      MR_Word ml_backend__rtti_to_mlds__Var_38;
      MR_Word ml_backend__rtti_to_mlds__Var_40;
      MR_Word ml_backend__rtti_to_mlds__Var_41;
      MR_Word ml_backend__rtti_to_mlds__RttiId_83;
      MR_Word ml_backend__rtti_to_mlds__Name_90;
      MR_Word ml_backend__rtti_to_mlds__Var_26;
      MR_Box ml_backend__rtti_to_mlds__conv5_Var_26;
      MR_Box ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_37_37;

      {
        ml_backend__rtti_to_mlds__TCConstrArrayRttiName_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCConstrArrayRttiName_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCConstrArrayRttiName_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_11));
      }
      ml_backend__rtti_to_mlds__ConstrInitializer_22 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_18, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__TCConstrArrayRttiName_27);
      {
        ml_backend__rtti_to_mlds__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_38, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[5]));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_38, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_exist_info_7_p_0_1));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_38, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_10));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_38, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_11));
      }
      {
        ml_backend__rtti_to_mlds__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_35, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_35, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_exist_info_7_p_0_2));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_35, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_8));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_35, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Target_9));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_35, 5) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_38));
      }
      ml_backend__rtti_to_mlds__Var_36 = mercury__counter__init_1_f_0((MR_Integer) 1);
      ml_backend__rtti_to_mlds__TypeCtorInfo_72_72 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0;
      mercury__list__map_foldl2_7_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_62_62, ml_backend__rtti_to_mlds__TypeCtorInfo_72_72, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__Var_35, ml_backend__rtti_to_mlds__Constraints_16, &ml_backend__rtti_to_mlds__TCConstrIds_25, ((MR_Box) (ml_backend__rtti_to_mlds__Var_36)), &ml_backend__rtti_to_mlds__conv5_Var_26, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_32)), &ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_37_37);
      ml_backend__rtti_to_mlds__Var_26 = ((MR_Word) ml_backend__rtti_to_mlds__conv5_Var_26);
      ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_37_37 = ((MR_Word) ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_37_37);
      {
        ml_backend__rtti_to_mlds__RttiId_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_83, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_10));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_83, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__TCConstrArrayRttiName_27));
      }
      {
        ml_backend__rtti_to_mlds__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_40, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_83));
      }
      {
        ml_backend__rtti_to_mlds__ElementType_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ElementType_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ElementType_29, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_40));
      }
      {
        ml_backend__rtti_to_mlds__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_41, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[1]));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_41, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_exist_info_7_p_0_3));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_41, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ElementType_29));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_41, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_18));
      }
      ml_backend__rtti_to_mlds__TCConstrArrayInitializer_30 = ml_backend__ml_util__gen_init_array_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_72_72, ml_backend__rtti_to_mlds__Var_41, ml_backend__rtti_to_mlds__TCConstrIds_25);
      {
        ml_backend__rtti_to_mlds__Name_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_90, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_83));
      }
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_90, ml_backend__rtti_to_mlds__RttiId_83, ml_backend__rtti_to_mlds__TCConstrArrayInitializer_30, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_37_37, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_42_42);
    }
    ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_120_105_115_116_95_108_111_99_110_115_95_97_114_114_97_121_95_95_91_49_93_95_48_6_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__Ordinal_11, ml_backend__rtti_to_mlds__Locns_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_42_42, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_47_47);
    {
      ml_backend__rtti_to_mlds__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_49, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_20));
    }
    {
      ml_backend__rtti_to_mlds__Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_48, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_49));
    }
    ml_backend__rtti_to_mlds__Var_51 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Plain_14);
    ml_backend__rtti_to_mlds__Var_53 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__InTci_15);
    ml_backend__rtti_to_mlds__Var_55 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Tci_21);
    {
      ml_backend__rtti_to_mlds__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_58, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_11));
    }
    ml_backend__rtti_to_mlds__Var_57 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_18, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__Var_58);
    {
      ml_backend__rtti_to_mlds__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_59, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ConstrInitializer_22));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__rtti_to_mlds__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_56, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_57));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_56, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_59));
    }
    {
      ml_backend__rtti_to_mlds__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_54, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_55));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_54, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_56));
    }
    {
      ml_backend__rtti_to_mlds__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_52, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_53));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_52, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_54));
    }
    {
      ml_backend__rtti_to_mlds__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_50, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_51));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_50, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_52));
    }
    {
      ml_backend__rtti_to_mlds__Initializer_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_31, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_48));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_31, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_50));
    }
    ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(ml_backend__rtti_to_mlds__RttiId_20, ml_backend__rtti_to_mlds__Initializer_31, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_47_47, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_33);
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_120_105_115_116_95_108_111_99_110_115_95_97_114_114_97_121_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_Initializer_6;

    ml_backend__rtti_to_mlds__conv0_Initializer_6 = ml_backend__rtti_to_mlds__gen_init_exist_locn_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_Initializer_6));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_120_105_115_116_95_108_111_99_110_115_95_97_114_114_97_121_95_95_91_49_93_95_48_6_p_0(
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
  MR_Word ml_backend__rtti_to_mlds__Locns_10,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15)
{
  {
    MR_Word ml_backend__rtti_to_mlds__Initializer_12;
    MR_Word ml_backend__rtti_to_mlds__RttiName_13;
    MR_Word ml_backend__rtti_to_mlds__Var_16;
    MR_Word ml_backend__rtti_to_mlds__RttiId_27;
    MR_Word ml_backend__rtti_to_mlds__Name_34;

    {
      ml_backend__rtti_to_mlds__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_16, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[5]));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_120_105_115_116_95_108_111_99_110_115_95_97_114_114_97_121_95_95_91_49_93_95_48_6_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_16, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
    }
    ml_backend__rtti_to_mlds__Initializer_12 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0, ml_backend__rtti_to_mlds__Var_16, ml_backend__rtti_to_mlds__Locns_10);
    {
      ml_backend__rtti_to_mlds__RttiName_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiName_13, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
    }
    {
      ml_backend__rtti_to_mlds__RttiId_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_27, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_13));
    }
    {
      ml_backend__rtti_to_mlds__Name_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_34, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_27));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_34, ml_backend__rtti_to_mlds__RttiId_27, ml_backend__rtti_to_mlds__Initializer_12, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15);
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_functor_desc_6_p_0(
  MR_Word ml_backend__rtti_to_mlds___ModuleInfo_7,
  MR_Word ml_backend__rtti_to_mlds__Lang_8,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumFunctor_10,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19)
{
  ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_6_p_0(ml_backend__rtti_to_mlds__Lang_8, ml_backend__rtti_to_mlds__RttiTypeCtor_9, ml_backend__rtti_to_mlds__ForeignEnumFunctor_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);
}

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_6_p_0(
  MR_Word ml_backend__rtti_to_mlds__Lang_8,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumFunctor_10,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19)
{
  {
    MR_String ml_backend__rtti_to_mlds__FunctorName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ForeignEnumFunctor_10, (MR_Integer) 0)));
    MR_Integer ml_backend__rtti_to_mlds__Ordinal_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ForeignEnumFunctor_10, (MR_Integer) 1)));
    MR_String ml_backend__rtti_to_mlds__Value_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ForeignEnumFunctor_10, (MR_Integer) 2)));
    MR_Word ml_backend__rtti_to_mlds__RttiName_15;
    MR_Word ml_backend__rtti_to_mlds__RttiId_16;
    MR_Word ml_backend__rtti_to_mlds__Initializer_17;
    MR_Word ml_backend__rtti_to_mlds__Var_20;
    MR_Word ml_backend__rtti_to_mlds__Var_21;
    MR_Word ml_backend__rtti_to_mlds__Var_22;
    MR_Word ml_backend__rtti_to_mlds__Var_23;
    MR_Word ml_backend__rtti_to_mlds__Var_24;
    MR_Word ml_backend__rtti_to_mlds__Var_25;
    MR_Word ml_backend__rtti_to_mlds__Var_26;
    MR_Word ml_backend__rtti_to_mlds__Var_27;
    MR_Word ml_backend__rtti_to_mlds__Name_35;

    {
      ml_backend__rtti_to_mlds__RttiName_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_15, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_13));
    }
    {
      ml_backend__rtti_to_mlds__RttiId_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_16, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_15));
    }
    {
      ml_backend__rtti_to_mlds__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_21, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_16));
    }
    {
      ml_backend__rtti_to_mlds__Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_20, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_21));
    }
    ml_backend__rtti_to_mlds__Var_23 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__FunctorName_12);
    ml_backend__rtti_to_mlds__Var_25 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Ordinal_13);
    ml_backend__rtti_to_mlds__Var_27 = ml_backend__ml_util__gen_init_foreign_2_f_0(ml_backend__rtti_to_mlds__Lang_8, ml_backend__rtti_to_mlds__Value_14);
    {
      ml_backend__rtti_to_mlds__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_26, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_27));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__rtti_to_mlds__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_24, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_25));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_24, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_26));
    }
    {
      ml_backend__rtti_to_mlds__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_23));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_22, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_24));
    }
    {
      ml_backend__rtti_to_mlds__Initializer_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_17, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_20));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_22));
    }
    {
      ml_backend__rtti_to_mlds__Name_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_35, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_16));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_35, ml_backend__rtti_to_mlds__RttiId_16, ml_backend__rtti_to_mlds__Initializer_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_functor_desc_5_p_0(
  MR_Word ml_backend__rtti_to_mlds___ModuleInfo_6,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
  MR_Word ml_backend__rtti_to_mlds__EnumFunctor_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
{
  ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_5_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__EnumFunctor_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
}

static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
  MR_Word ml_backend__rtti_to_mlds__EnumFunctor_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
{
  {
    MR_String ml_backend__rtti_to_mlds__FunctorName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__EnumFunctor_8, (MR_Integer) 0)));
    MR_Integer ml_backend__rtti_to_mlds__Ordinal_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__EnumFunctor_8, (MR_Integer) 1)));
    MR_Word ml_backend__rtti_to_mlds__RttiName_12;
    MR_Word ml_backend__rtti_to_mlds__RttiId_13;
    MR_Word ml_backend__rtti_to_mlds__Initializer_14;
    MR_Word ml_backend__rtti_to_mlds__Var_17;
    MR_Word ml_backend__rtti_to_mlds__Var_18;
    MR_Word ml_backend__rtti_to_mlds__Var_19;
    MR_Word ml_backend__rtti_to_mlds__Var_20;
    MR_Word ml_backend__rtti_to_mlds__Var_21;
    MR_Word ml_backend__rtti_to_mlds__Var_22;
    MR_Word ml_backend__rtti_to_mlds__Name_30;

    {
      ml_backend__rtti_to_mlds__RttiName_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_12, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_11));
    }
    {
      ml_backend__rtti_to_mlds__RttiId_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_13, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_13, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_12));
    }
    {
      ml_backend__rtti_to_mlds__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_18, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_13));
    }
    {
      ml_backend__rtti_to_mlds__Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_18));
    }
    ml_backend__rtti_to_mlds__Var_20 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__FunctorName_10);
    ml_backend__rtti_to_mlds__Var_22 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Ordinal_11);
    {
      ml_backend__rtti_to_mlds__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_21, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_22));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__rtti_to_mlds__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_19, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_20));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_19, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_21));
    }
    {
      ml_backend__rtti_to_mlds__Initializer_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_14, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_17));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_14, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_19));
    }
    {
      ml_backend__rtti_to_mlds__Name_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_13));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_30, ml_backend__rtti_to_mlds__RttiId_13, ml_backend__rtti_to_mlds__Initializer_14, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__make_instance_constr_id_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__TCName_6,
  MR_Word ml_backend__rtti_to_mlds__Types_7,
  MR_Integer ml_backend__rtti_to_mlds__TCNum_8,
  MR_Integer ml_backend__rtti_to_mlds__Arity_9,
  MR_Word * ml_backend__rtti_to_mlds__RttiId_10)
{
  {
    MR_Word ml_backend__rtti_to_mlds__RttiName_11;

    {
      ml_backend__rtti_to_mlds__RttiName_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_11, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Types_7));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_11, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__TCNum_8));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_11, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__Arity_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__rtti_to_mlds__RttiId_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_6));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_11));
    }
  }
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_id_2_f_0(
  MR_Word ml_backend__rtti_to_mlds__TCName_4,
  MR_Word ml_backend__rtti_to_mlds__MethodId_5)
{
  {
    MR_Word ml_backend__rtti_to_mlds__Initializer_6;
    MR_String ml_backend__rtti_to_mlds__MethodName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__MethodId_5, (MR_Integer) 0)));
    MR_Integer ml_backend__rtti_to_mlds__MethodArity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__MethodId_5, (MR_Integer) 1)));
    MR_Word ml_backend__rtti_to_mlds__PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__MethodId_5, (MR_Integer) 2)));
    MR_Word ml_backend__rtti_to_mlds__RttiId_10;
    MR_Word ml_backend__rtti_to_mlds__Var_12;
    MR_Word ml_backend__rtti_to_mlds__Var_13;
    MR_Word ml_backend__rtti_to_mlds__Var_14;
    MR_Word ml_backend__rtti_to_mlds__Var_15;
    MR_Word ml_backend__rtti_to_mlds__Var_16;
    MR_Word ml_backend__rtti_to_mlds__Var_17;
    MR_Word ml_backend__rtti_to_mlds__Var_18;
    MR_Word ml_backend__rtti_to_mlds__Var_19;
    MR_Word ml_backend__rtti_to_mlds__TargetPrefixes_23;
    MR_String ml_backend__rtti_to_mlds__Name_24;

    {
      ml_backend__rtti_to_mlds__RttiId_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiId_10, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_4));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiId_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
    }
    {
      ml_backend__rtti_to_mlds__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_13, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
    }
    {
      ml_backend__rtti_to_mlds__Var_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_12, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_13));
    }
    ml_backend__rtti_to_mlds__Var_15 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__MethodName_7);
    ml_backend__rtti_to_mlds__Var_17 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__MethodArity_8);
    backend_libs__rtti__pred_or_func_to_string_3_p_0(ml_backend__rtti_to_mlds__PredOrFunc_9, &ml_backend__rtti_to_mlds__TargetPrefixes_23, &ml_backend__rtti_to_mlds__Name_24);
    ml_backend__rtti_to_mlds__Var_19 = ml_backend__ml_util__gen_init_builtin_const_2_f_0(ml_backend__rtti_to_mlds__TargetPrefixes_23, ml_backend__rtti_to_mlds__Name_24);
    {
      ml_backend__rtti_to_mlds__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_18, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_19));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__rtti_to_mlds__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_16, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_17));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_18));
    }
    {
      ml_backend__rtti_to_mlds__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_14, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_15));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_14, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_16));
    }
    {
      ml_backend__rtti_to_mlds__Initializer_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_6, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_12));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_6, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_14));
    }
    return ml_backend__rtti_to_mlds__Initializer_6;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__make_decl_super_id_4_p_0(
  MR_Word ml_backend__rtti_to_mlds__TCName_5,
  MR_Integer ml_backend__rtti_to_mlds__TCNum_6,
  MR_Integer ml_backend__rtti_to_mlds__Arity_7,
  MR_Word * ml_backend__rtti_to_mlds__RttiId_8)
{
  {
    MR_Word ml_backend__rtti_to_mlds__TCRttiName_9;

    {
      ml_backend__rtti_to_mlds__TCRttiName_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TCRttiName_9, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCNum_6));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TCRttiName_9, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Arity_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__rtti_to_mlds__RttiId_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__TCRttiName_9));
    }
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_5(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv8_HeadVar__3_37;

    ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1756__2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv8_HeadVar__3_37);
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv8_HeadVar__3_37));
  }
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_4(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv7_HeadVar__3_41;

    ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1756__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv7_HeadVar__3_41);
    if (ml_backend__rtti_to_mlds__succeeded)
    {
      *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv7_HeadVar__3_41));
      ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
    }
    return ml_backend__rtti_to_mlds__succeeded;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_3(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv6_HeadVar__2_33;

    ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1755__1_2_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv6_HeadVar__2_33);
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv6_HeadVar__2_33));
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_Graph_14;

    ml_backend__rtti_to_mlds__add_rtti_defn_arcs_3_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_Graph_14);
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_Graph_14));
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_4,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_5)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_Graph_12;
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_NameMap_14;

    ml_backend__rtti_to_mlds__add_rtti_defn_nodes_5_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_Graph_12, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_4), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_NameMap_14);
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_Graph_12));
    *ml_backend__rtti_to_mlds__wrapper_arg_5 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_NameMap_14));
  }
}

MR_Word MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0(
  MR_Word ml_backend__rtti_to_mlds__Defns_3)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;
    MR_Word ml_backend__rtti_to_mlds__OrdDefns_4;
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_19_19 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0;
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_25_25;
    MR_Word ml_backend__rtti_to_mlds__TypeInfo_26_26;
    MR_Word ml_backend__rtti_to_mlds__TypeInfo_31_31;
    MR_Word ml_backend__rtti_to_mlds__TypeInfo_35_35;
    MR_Word ml_backend__rtti_to_mlds__NameMap_6;
    MR_Word ml_backend__rtti_to_mlds__RevOrdSets_7;
    MR_Word ml_backend__rtti_to_mlds__OrdSets_8;
    MR_Word ml_backend__rtti_to_mlds__OrdLists_9;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_10_10;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12_12;
    MR_Word ml_backend__rtti_to_mlds__Var_13;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_15_15;
    MR_Word ml_backend__rtti_to_mlds__Var_17;
    MR_Word ml_backend__rtti_to_mlds__Var_18;
    MR_Box ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Graph_12_12;
    MR_Box ml_backend__rtti_to_mlds__conv2_NameMap_6;
    MR_Box ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_Graph_15_15;

    mercury__digraph__init_1_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_19_19, &ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_10_10);
    ml_backend__rtti_to_mlds__TypeCtorInfo_25_25 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0;
    ml_backend__rtti_to_mlds__Var_13 = mercury__map__init_0_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_19_19, ml_backend__rtti_to_mlds__TypeCtorInfo_25_25);
    ml_backend__rtti_to_mlds__TypeInfo_26_26 = (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[0];
    mercury__list__foldl2_6_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_25_25, ml_backend__rtti_to_mlds__TypeInfo_26_26, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[0], (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[27], ml_backend__rtti_to_mlds__Defns_3, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_10_10)), &ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Graph_12_12, ((MR_Box) (ml_backend__rtti_to_mlds__Var_13)), &ml_backend__rtti_to_mlds__conv2_NameMap_6);
    ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12_12 = ((MR_Word) ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Graph_12_12);
    ml_backend__rtti_to_mlds__NameMap_6 = ((MR_Word) ml_backend__rtti_to_mlds__conv2_NameMap_6);
    mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_25_25, ml_backend__rtti_to_mlds__TypeInfo_26_26, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[28], ml_backend__rtti_to_mlds__Defns_3, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12_12)), &ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_Graph_15_15);
    ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_15_15 = ((MR_Word) ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_Graph_15_15);
    mercury__digraph__atsort_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_19_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_15_15, &ml_backend__rtti_to_mlds__RevOrdSets_7);
    ml_backend__rtti_to_mlds__TypeInfo_31_31 = (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[1];
    mercury__list__reverse_2_p_0(ml_backend__rtti_to_mlds__TypeInfo_31_31, ml_backend__rtti_to_mlds__RevOrdSets_7, &ml_backend__rtti_to_mlds__OrdSets_8);
    ml_backend__rtti_to_mlds__TypeInfo_35_35 = (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[2];
    mercury__list__map_3_p_0(ml_backend__rtti_to_mlds__TypeInfo_31_31, ml_backend__rtti_to_mlds__TypeInfo_35_35, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[29], ml_backend__rtti_to_mlds__OrdSets_8, &ml_backend__rtti_to_mlds__OrdLists_9);
    {
      ml_backend__rtti_to_mlds__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_18, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_18, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_4));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_18, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__NameMap_6));
    }
    {
      ml_backend__rtti_to_mlds__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_17, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[4]));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_5));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_17, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_18));
    }
    mercury__list__map_3_p_0(ml_backend__rtti_to_mlds__TypeInfo_35_35, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[3], ml_backend__rtti_to_mlds__Var_17, ml_backend__rtti_to_mlds__OrdLists_9, &ml_backend__rtti_to_mlds__OrdDefns_4);
    return ml_backend__rtti_to_mlds__OrdDefns_4;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_6_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
  MR_Word ml_backend__rtti_to_mlds__Target_8,
  MR_Word ml_backend__rtti_to_mlds__PTIRttiData_9,
  MR_Word * ml_backend__rtti_to_mlds__Initializer_10,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_13,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_14)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;
    MR_Word ml_backend__rtti_to_mlds__ModuleName_12;

    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PTIRttiData_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__PTIRttiData_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
    {
      MR_Word ml_backend__rtti_to_mlds__PseudoTypeInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__PTIRttiData_9, (MR_Integer) 1)));

      if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_20)) == (MR_mktag((MR_Integer) 0))))
        ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
      else
      if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_20)) == (MR_mktag((MR_Integer) 3))))
        ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
      else
        ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
    }
    else
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PTIRttiData_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__PTIRttiData_9, (MR_Integer) 0)))) == (MR_Integer) 0))))
    {
      MR_Word ml_backend__rtti_to_mlds__TypeInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__PTIRttiData_9, (MR_Integer) 1)));
      MR_Word ml_backend__rtti_to_mlds__Var_19;

      ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_18)) == (MR_mktag((MR_Integer) 0)));
      if (ml_backend__rtti_to_mlds__succeeded)
        ml_backend__rtti_to_mlds__Var_19 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_18), (MR_Integer) 0);
    }
    else
      ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
    ml_backend__rtti_to_mlds__succeeded = !(ml_backend__rtti_to_mlds__succeeded);
    if (ml_backend__rtti_to_mlds__succeeded)
    {
      MR_Word ml_backend__rtti_to_mlds__Var_30;
      MR_Integer ml_backend__rtti_to_mlds__Var_29;

      ml_backend__rtti_to_mlds__succeeded = ((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PTIRttiData_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__PTIRttiData_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (ml_backend__rtti_to_mlds__succeeded)
      {
        ml_backend__rtti_to_mlds__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__PTIRttiData_9, (MR_Integer) 1)));
        ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Var_30)) == (MR_mktag((MR_Integer) 3)));
        if (ml_backend__rtti_to_mlds__succeeded)
          ml_backend__rtti_to_mlds__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_30, (MR_Integer) 0)));
      }
      if (ml_backend__rtti_to_mlds__succeeded)
        *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_14 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_13;
      else
        ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__Target_8, ml_backend__rtti_to_mlds__PTIRttiData_9, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_14);
    }
    else
      *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_14 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_13;
    hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_12);
    *ml_backend__rtti_to_mlds__Initializer_10 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)), ml_backend__rtti_to_mlds__ModuleName_12, ml_backend__rtti_to_mlds__PTIRttiData_9);
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_notag_functor_desc_6_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

    ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = ml_backend__ml_util__gen_init_string_1_f_0(((MR_String) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_notag_functor_desc_6_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
  MR_Word ml_backend__rtti_to_mlds__Target_8,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
  MR_Word ml_backend__rtti_to_mlds__NotagFunctorDesc_10,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_21,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_22)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;
    MR_String ml_backend__rtti_to_mlds__FunctorName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__NotagFunctorDesc_10, (MR_Integer) 0)));
    MR_Word ml_backend__rtti_to_mlds__ArgType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__NotagFunctorDesc_10, (MR_Integer) 1)));
    MR_Word ml_backend__rtti_to_mlds__MaybeArgName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__NotagFunctorDesc_10, (MR_Integer) 2)));
    MR_Word ml_backend__rtti_to_mlds__FunctorSubtypeInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__NotagFunctorDesc_10, (MR_Integer) 3)));
    MR_Word ml_backend__rtti_to_mlds__ArgTypeRttiData_16;
    MR_Word ml_backend__rtti_to_mlds__PTIInitializer_17;
    MR_Word ml_backend__rtti_to_mlds__RttiId_19;
    MR_Word ml_backend__rtti_to_mlds__Initializer_20;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_23_23;
    MR_Word ml_backend__rtti_to_mlds__Var_24;
    MR_Word ml_backend__rtti_to_mlds__Var_25;
    MR_Word ml_backend__rtti_to_mlds__Var_26;
    MR_Word ml_backend__rtti_to_mlds__Var_27;
    MR_Word ml_backend__rtti_to_mlds__Var_28;
    MR_Word ml_backend__rtti_to_mlds__Var_29;
    MR_Word ml_backend__rtti_to_mlds__Var_30;
    MR_Word ml_backend__rtti_to_mlds__Var_31;
    MR_Word ml_backend__rtti_to_mlds__Var_33;
    MR_Word ml_backend__rtti_to_mlds__Var_34;
    MR_Word ml_backend__rtti_to_mlds__ModuleName_47;
    MR_Word ml_backend__rtti_to_mlds__TargetPrefixes_52;
    MR_String ml_backend__rtti_to_mlds__Name_53;
    MR_Word ml_backend__rtti_to_mlds__Name_59;

    ml_backend__rtti_to_mlds__ArgTypeRttiData_16 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(ml_backend__rtti_to_mlds__ArgType_13);
    ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(ml_backend__rtti_to_mlds__ArgTypeRttiData_16);
    if (ml_backend__rtti_to_mlds__succeeded)
      ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__Target_8, ml_backend__rtti_to_mlds__ArgTypeRttiData_16, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_21, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_23_23);
    else
      ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_23_23 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_21;
    hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_47);
    ml_backend__rtti_to_mlds__PTIInitializer_17 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)), ml_backend__rtti_to_mlds__ModuleName_47, ml_backend__rtti_to_mlds__ArgTypeRttiData_16);
    {
      ml_backend__rtti_to_mlds__RttiId_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_19, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_9));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
    }
    {
      ml_backend__rtti_to_mlds__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_25, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_19));
    }
    {
      ml_backend__rtti_to_mlds__Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_24, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_25));
    }
    ml_backend__rtti_to_mlds__Var_27 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__FunctorName_12);
    ml_backend__rtti_to_mlds__Var_31 = ml_backend__ml_code_util__ml_string_type_0_f_0();
    ml_backend__rtti_to_mlds__Var_30 = ml_backend__ml_util__gen_init_maybe_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__Var_31, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[26], ml_backend__rtti_to_mlds__MaybeArgName_14);
    backend_libs__rtti__functor_subtype_info_to_string_3_p_0(ml_backend__rtti_to_mlds__FunctorSubtypeInfo_15, &ml_backend__rtti_to_mlds__TargetPrefixes_52, &ml_backend__rtti_to_mlds__Name_53);
    ml_backend__rtti_to_mlds__Var_34 = ml_backend__ml_util__gen_init_builtin_const_2_f_0(ml_backend__rtti_to_mlds__TargetPrefixes_52, ml_backend__rtti_to_mlds__Name_53);
    {
      ml_backend__rtti_to_mlds__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_33, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_34));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__rtti_to_mlds__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_29, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_30));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_29, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_33));
    }
    {
      ml_backend__rtti_to_mlds__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_28, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__PTIInitializer_17));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_28, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_29));
    }
    {
      ml_backend__rtti_to_mlds__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_26, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_27));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_26, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_28));
    }
    {
      ml_backend__rtti_to_mlds__Initializer_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_20, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_24));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_20, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_26));
    }
    {
      ml_backend__rtti_to_mlds__Name_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_59, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_19));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_59, ml_backend__rtti_to_mlds__RttiId_19, ml_backend__rtti_to_mlds__Initializer_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_23_23, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_22);
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_9_p_0_4(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_15;

    ml_backend__rtti_to_mlds__gen_maybe_res_functor_desc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_15);
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_15));
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_9_p_0_3(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_19;

    ml_backend__rtti_to_mlds__gen_foreign_enum_functor_desc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_19);
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_19));
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_9_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_16;

    ml_backend__rtti_to_mlds__gen_enum_functor_desc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_16);
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_16));
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_9_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_42;

    ml_backend__rtti_to_mlds__gen_du_functor_desc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_42);
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_42));
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_9_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_10,
  MR_Word ml_backend__rtti_to_mlds__Target_11,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_12,
  MR_Word ml_backend__rtti_to_mlds__TypeCtorDetails_13,
  MR_Word * ml_backend__rtti_to_mlds__FunctorInitializer_14,
  MR_Word * ml_backend__rtti_to_mlds__LayoutInitializer_15,
  MR_Word * ml_backend__rtti_to_mlds__NumberMapInitializer_16,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_45,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_46)
{
  {
    MR_Word ml_backend__rtti_to_mlds__ModuleName_18;

    hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_10, &ml_backend__rtti_to_mlds__ModuleName_18);
    switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeCtorDetails_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__rtti_to_mlds__EnumFunctors_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 1)));
          MR_Word ml_backend__rtti_to_mlds__EnumByValue_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 2)));
          MR_Word ml_backend__rtti_to_mlds__EnumByName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 3)));
          MR_Word ml_backend__rtti_to_mlds__FunctorNumberMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 5)));
          MR_Word ml_backend__rtti_to_mlds__Var_85;
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_86_86;
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_87_87;
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_88_88;
          MR_Word ml_backend__rtti_to_mlds__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 0)));
          MR_Word ml_backend__rtti_to_mlds___IsDummy_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 4)));
          MR_Box ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_86_86;

          {
            ml_backend__rtti_to_mlds__Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_85, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[3]));
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_85, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_functors_layout_info_9_p_0_2));
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_85, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_10));
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_85, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_12));
          }
          mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__Var_85, ml_backend__rtti_to_mlds__EnumFunctors_20, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_45)), &ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_86_86);
          ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_86_86 = ((MR_Word) ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_86_86);
          ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_10, ml_backend__rtti_to_mlds__RttiTypeCtor_12, ml_backend__rtti_to_mlds__EnumByValue_21, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_86_86, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_87_87);
          ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_10, ml_backend__rtti_to_mlds__RttiTypeCtor_12, ml_backend__rtti_to_mlds__EnumByName_22, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_87_87, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_88_88);
          ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_12, ml_backend__rtti_to_mlds__FunctorNumberMap_24, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_88_88, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_46);
          *ml_backend__rtti_to_mlds__LayoutInitializer_15 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_18, ml_backend__rtti_to_mlds__RttiTypeCtor_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
          *ml_backend__rtti_to_mlds__FunctorInitializer_14 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_18, ml_backend__rtti_to_mlds__RttiTypeCtor_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
          *ml_backend__rtti_to_mlds__NumberMapInitializer_16 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_18, ml_backend__rtti_to_mlds__RttiTypeCtor_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__rtti_to_mlds__ForeignEnumLang_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 0)));
          MR_Word ml_backend__rtti_to_mlds__ForeignEnumFunctors_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 2)));
          MR_Word ml_backend__rtti_to_mlds__ForeignEnumByOrdinal_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 3)));
          MR_Word ml_backend__rtti_to_mlds__ForeignEnumByName_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 4)));
          MR_Word ml_backend__rtti_to_mlds__Var_77;
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_78_78;
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_79_79;
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_80_80;
          MR_Word ml_backend__rtti_to_mlds__FunctorNumberMap_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 5)));
          MR_Word ml_backend__rtti_to_mlds__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 1)));
          MR_Box ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_GlobalData_78_78;

          {
            ml_backend__rtti_to_mlds__Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_77, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_10[1]));
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_77, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_functors_layout_info_9_p_0_3));
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_77, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_10));
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_77, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__ForeignEnumLang_25));
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_77, 5) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_12));
          }
          mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__Var_77, ml_backend__rtti_to_mlds__ForeignEnumFunctors_27, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_45)), &ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_GlobalData_78_78);
          ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_78_78 = ((MR_Word) ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_GlobalData_78_78);
          ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_10, ml_backend__rtti_to_mlds__RttiTypeCtor_12, ml_backend__rtti_to_mlds__ForeignEnumByOrdinal_28, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_78_78, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_79_79);
          ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_10, ml_backend__rtti_to_mlds__RttiTypeCtor_12, ml_backend__rtti_to_mlds__ForeignEnumByName_29, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_79_79, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_80_80);
          ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_12, ml_backend__rtti_to_mlds__FunctorNumberMap_93, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_80_80, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_46);
          *ml_backend__rtti_to_mlds__LayoutInitializer_15 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_18, ml_backend__rtti_to_mlds__RttiTypeCtor_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
          *ml_backend__rtti_to_mlds__FunctorInitializer_14 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_18, ml_backend__rtti_to_mlds__RttiTypeCtor_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)));
          *ml_backend__rtti_to_mlds__NumberMapInitializer_16 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_18, ml_backend__rtti_to_mlds__RttiTypeCtor_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__rtti_to_mlds__DuFunctors_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 1)));
          MR_Word ml_backend__rtti_to_mlds__DuByPtag_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 2)));
          MR_Word ml_backend__rtti_to_mlds__DuByName_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 3)));
          MR_Word ml_backend__rtti_to_mlds__Var_69;
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_70_70;
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_71_71;
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_72_72;
          MR_Word ml_backend__rtti_to_mlds__FunctorNumberMap_94 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 4)));
          MR_Word ml_backend__rtti_to_mlds__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 0)));
          MR_Box ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_70_70;

          {
            ml_backend__rtti_to_mlds__Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_69, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_10[0]));
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_69, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_functors_layout_info_9_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_69, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_10));
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_69, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Target_11));
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_69, 5) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_12));
          }
          mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__Var_69, ml_backend__rtti_to_mlds__DuFunctors_31, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_45)), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_70_70);
          ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_70_70 = ((MR_Word) ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_70_70);
          ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_10, ml_backend__rtti_to_mlds__RttiTypeCtor_12, ml_backend__rtti_to_mlds__DuByPtag_32, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_70_70, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_71_71);
          ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_10, ml_backend__rtti_to_mlds__RttiTypeCtor_12, ml_backend__rtti_to_mlds__DuByName_33, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_71_71, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_72_72);
          ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_12, ml_backend__rtti_to_mlds__FunctorNumberMap_94, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_72_72, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_46);
          *ml_backend__rtti_to_mlds__LayoutInitializer_15 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_18, ml_backend__rtti_to_mlds__RttiTypeCtor_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
          *ml_backend__rtti_to_mlds__FunctorInitializer_14 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_18, ml_backend__rtti_to_mlds__RttiTypeCtor_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)));
          *ml_backend__rtti_to_mlds__NumberMapInitializer_16 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_18, ml_backend__rtti_to_mlds__RttiTypeCtor_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__rtti_to_mlds__MaybeResFunctors_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 2)));
              MR_Word ml_backend__rtti_to_mlds__ResFunctors_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 3)));
              MR_Word ml_backend__rtti_to_mlds__MaybeResByName_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 5)));
              MR_Word ml_backend__rtti_to_mlds__Var_61;
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_62_62;
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_63_63;
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_64_64;
              MR_Word ml_backend__rtti_to_mlds__FunctorNumberMap_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 6)));
              MR_Word ml_backend__rtti_to_mlds__DuByPtag_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 4)));
              MR_Word ml_backend__rtti_to_mlds__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 1)));
              MR_Box ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_62_62;

              {
                ml_backend__rtti_to_mlds__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_61, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_10[2]));
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_61, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_functors_layout_info_9_p_0_4));
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_61, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_10));
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_61, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Target_11));
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_61, 5) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_12));
              }
              mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__Var_61, ml_backend__rtti_to_mlds__MaybeResFunctors_35, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_45)), &ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_62_62);
              ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_62_62 = ((MR_Word) ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_62_62);
              ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_10, ml_backend__rtti_to_mlds__RttiTypeCtor_12, ml_backend__rtti_to_mlds__ResFunctors_36, ml_backend__rtti_to_mlds__DuByPtag_96, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_62_62, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_63_63);
              ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_10, ml_backend__rtti_to_mlds__RttiTypeCtor_12, ml_backend__rtti_to_mlds__MaybeResByName_37, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_63_63, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_64_64);
              ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_12, ml_backend__rtti_to_mlds__FunctorNumberMap_95, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_64_64, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_46);
              *ml_backend__rtti_to_mlds__LayoutInitializer_15 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_18, ml_backend__rtti_to_mlds__RttiTypeCtor_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)));
              *ml_backend__rtti_to_mlds__FunctorInitializer_14 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_18, ml_backend__rtti_to_mlds__RttiTypeCtor_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)));
              *ml_backend__rtti_to_mlds__NumberMapInitializer_16 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_18, ml_backend__rtti_to_mlds__RttiTypeCtor_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__rtti_to_mlds__NotagFunctor_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 2)));
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54;
              MR_Word ml_backend__rtti_to_mlds__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 1)));

              ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_12, (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__rtti_to_mlds_scalar_common_1[9]), ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_45, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54);
              *ml_backend__rtti_to_mlds__LayoutInitializer_15 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_18, ml_backend__rtti_to_mlds__RttiTypeCtor_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
              *ml_backend__rtti_to_mlds__FunctorInitializer_14 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_18, ml_backend__rtti_to_mlds__RttiTypeCtor_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
              *ml_backend__rtti_to_mlds__NumberMapInitializer_16 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_18, ml_backend__rtti_to_mlds__RttiTypeCtor_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)));
              ml_backend__rtti_to_mlds__gen_notag_functor_desc_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_10, ml_backend__rtti_to_mlds__Target_11, ml_backend__rtti_to_mlds__RttiTypeCtor_12, ml_backend__rtti_to_mlds__NotagFunctor_39, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_46);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__rtti_to_mlds__EqvType_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_13, (MR_Integer) 1)));
              MR_Word ml_backend__rtti_to_mlds__TypeRttiData_41;

              ml_backend__rtti_to_mlds__TypeRttiData_41 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(ml_backend__rtti_to_mlds__EqvType_40);
              ml_backend__rtti_to_mlds__gen_pseudo_type_info_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_10, ml_backend__rtti_to_mlds__Target_11, ml_backend__rtti_to_mlds__TypeRttiData_41, ml_backend__rtti_to_mlds__LayoutInitializer_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_45, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_46);
              *ml_backend__rtti_to_mlds__FunctorInitializer_14 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)));
              *ml_backend__rtti_to_mlds__NumberMapInitializer_16 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)));
            }
            break;
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            {
              *ml_backend__rtti_to_mlds__LayoutInitializer_15 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)));
              *ml_backend__rtti_to_mlds__FunctorInitializer_14 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)));
              *ml_backend__rtti_to_mlds__NumberMapInitializer_16 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)));
              *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_46 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_45;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_5_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv1_Initializer_12;
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_15;

    ml_backend__rtti_to_mlds__gen_init_method_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv1_Initializer_12, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_3), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_15);
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_Initializer_12));
    *ml_backend__rtti_to_mlds__wrapper_arg_4 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_15));
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
  MR_Word ml_backend__rtti_to_mlds__Target_7,
  MR_Word ml_backend__rtti_to_mlds__RttiData_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_49,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50)
{
  {
    MR_Word ml_backend__rtti_to_mlds__RttiId_10;
    MR_Word ml_backend__rtti_to_mlds__Name_11;

    backend_libs__rtti__rtti_data_to_id_2_p_0(ml_backend__rtti_to_mlds__RttiData_8, &ml_backend__rtti_to_mlds__RttiId_10);
    {
      ml_backend__rtti_to_mlds__Name_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_11, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
    }
    switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__rtti_to_mlds__TypeCtorData_29 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__RttiData_8), (MR_Integer) 0);
          MR_Integer ml_backend__rtti_to_mlds__Version_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_29, (MR_Integer) 0)));
          MR_Word ml_backend__rtti_to_mlds__TypeModule_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_29, (MR_Integer) 1)));
          MR_String ml_backend__rtti_to_mlds__TypeName_32 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_29, (MR_Integer) 2)));
          MR_Integer ml_backend__rtti_to_mlds__TypeArity_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_29, (MR_Integer) 3)));
          MR_Word ml_backend__rtti_to_mlds__UnifyUniv_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_29, (MR_Integer) 4)));
          MR_Word ml_backend__rtti_to_mlds__CompareUniv_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_29, (MR_Integer) 5)));
          MR_Word ml_backend__rtti_to_mlds__Flags_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_29, (MR_Integer) 6)));
          MR_Word ml_backend__rtti_to_mlds__TypeCtorDetails_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_29, (MR_Integer) 7)));
          MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_38;
          MR_String ml_backend__rtti_to_mlds__TypeModuleName_39;
          MR_Integer ml_backend__rtti_to_mlds__NumPtags_40;
          MR_Integer ml_backend__rtti_to_mlds__NumFunctors_41;
          MR_Word ml_backend__rtti_to_mlds__FunctorsRttiId_42;
          MR_Word ml_backend__rtti_to_mlds__LayoutRttiId_43;
          MR_Word ml_backend__rtti_to_mlds__FunctorsInfo_44;
          MR_Word ml_backend__rtti_to_mlds__LayoutInfo_45;
          MR_Word ml_backend__rtti_to_mlds__NumberMapInfo_46;
          MR_Word ml_backend__rtti_to_mlds__UnifyInitializer_47;
          MR_Word ml_backend__rtti_to_mlds__CompareInitializer_48;
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_53_53;
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54;
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55;
          MR_Word ml_backend__rtti_to_mlds__Var_56;
          MR_Word ml_backend__rtti_to_mlds__Var_57;
          MR_Word ml_backend__rtti_to_mlds__Var_58;
          MR_Word ml_backend__rtti_to_mlds__Var_59;
          MR_Word ml_backend__rtti_to_mlds__Var_60;
          MR_Word ml_backend__rtti_to_mlds__Var_61;
          MR_Word ml_backend__rtti_to_mlds__Var_62;
          MR_Word ml_backend__rtti_to_mlds__Var_63;
          MR_Word ml_backend__rtti_to_mlds__Var_64;
          MR_Word ml_backend__rtti_to_mlds__Var_65;
          MR_Word ml_backend__rtti_to_mlds__Var_66;
          MR_Word ml_backend__rtti_to_mlds__Var_67;
          MR_Word ml_backend__rtti_to_mlds__Var_68;
          MR_Word ml_backend__rtti_to_mlds__Var_69;
          MR_Word ml_backend__rtti_to_mlds__Var_70;
          MR_Word ml_backend__rtti_to_mlds__Var_71;
          MR_Word ml_backend__rtti_to_mlds__Var_72;
          MR_Word ml_backend__rtti_to_mlds__Var_73;
          MR_Word ml_backend__rtti_to_mlds__Var_74;
          MR_Word ml_backend__rtti_to_mlds__Var_75;
          MR_Word ml_backend__rtti_to_mlds__Var_76;
          MR_Word ml_backend__rtti_to_mlds__Var_78;
          MR_Word ml_backend__rtti_to_mlds__Var_79;
          MR_Word ml_backend__rtti_to_mlds__Var_80;
          MR_Word ml_backend__rtti_to_mlds__Var_81;
          MR_Word ml_backend__rtti_to_mlds__Var_82;
          MR_Word ml_backend__rtti_to_mlds__Var_84;
          MR_Word ml_backend__rtti_to_mlds__Var_85;
          MR_Word ml_backend__rtti_to_mlds__Var_86;
          MR_Word ml_backend__rtti_to_mlds__Var_87;
          MR_Integer ml_backend__rtti_to_mlds__Var_88;
          MR_Word ml_backend__rtti_to_mlds__Var_89;
          MR_Word ml_backend__rtti_to_mlds__Initializer_109;

          {
            ml_backend__rtti_to_mlds__RttiTypeCtor_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_38, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TypeModule_31));
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_38, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__TypeName_32));
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_38, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__TypeArity_33));
          }
          ml_backend__rtti_to_mlds__TypeModuleName_39 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ml_backend__rtti_to_mlds__TypeModule_31);
          ml_backend__rtti_to_mlds__NumPtags_40 = backend_libs__rtti__type_ctor_details_num_ptags_1_f_0(ml_backend__rtti_to_mlds__TypeCtorDetails_37);
          ml_backend__rtti_to_mlds__NumFunctors_41 = backend_libs__rtti__type_ctor_details_num_functors_1_f_0(ml_backend__rtti_to_mlds__TypeCtorDetails_37);
          {
            ml_backend__rtti_to_mlds__FunctorsRttiId_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__FunctorsRttiId_42, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_38));
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__FunctorsRttiId_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
          }
          {
            ml_backend__rtti_to_mlds__LayoutRttiId_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__LayoutRttiId_43, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_38));
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__LayoutRttiId_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15))));
          }
          ml_backend__rtti_to_mlds__gen_functors_layout_info_9_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__Target_7, ml_backend__rtti_to_mlds__RttiTypeCtor_38, ml_backend__rtti_to_mlds__TypeCtorDetails_37, &ml_backend__rtti_to_mlds__FunctorsInfo_44, &ml_backend__rtti_to_mlds__LayoutInfo_45, &ml_backend__rtti_to_mlds__NumberMapInfo_46, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_49, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_53_53);
          ml_backend__rtti_to_mlds__gen_init_special_pred_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__Target_7, ml_backend__rtti_to_mlds__UnifyUniv_34, &ml_backend__rtti_to_mlds__UnifyInitializer_47, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_53_53, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54);
          ml_backend__rtti_to_mlds__gen_init_special_pred_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__Target_7, ml_backend__rtti_to_mlds__CompareUniv_35, &ml_backend__rtti_to_mlds__CompareInitializer_48, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55);
          {
            ml_backend__rtti_to_mlds__Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_57, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
          }
          {
            ml_backend__rtti_to_mlds__Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_56, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_57));
          }
          ml_backend__rtti_to_mlds__Var_59 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__TypeArity_33);
          ml_backend__rtti_to_mlds__Var_61 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Version_30);
          ml_backend__rtti_to_mlds__Var_63 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumPtags_40);
          ml_backend__rtti_to_mlds__Var_65 = ml_backend__rtti_to_mlds__gen_init_type_ctor_rep_1_f_0(ml_backend__rtti_to_mlds__TypeCtorData_29);
          ml_backend__rtti_to_mlds__Var_69 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__TypeModuleName_39);
          ml_backend__rtti_to_mlds__Var_71 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__TypeName_32);
          {
            ml_backend__rtti_to_mlds__Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_75, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__FunctorsRttiId_42));
          }
          {
            ml_backend__rtti_to_mlds__Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_74, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_75));
          }
          {
            ml_backend__rtti_to_mlds__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_76, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__FunctorsInfo_44));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__rtti_to_mlds__Var_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Var_73, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_74));
            MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Var_73, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_76));
          }
          {
            ml_backend__rtti_to_mlds__Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_81, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__LayoutRttiId_43));
          }
          {
            ml_backend__rtti_to_mlds__Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_80, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_81));
          }
          {
            ml_backend__rtti_to_mlds__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_82, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__LayoutInfo_45));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__rtti_to_mlds__Var_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Var_79, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_80));
            MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Var_79, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_82));
          }
          ml_backend__rtti_to_mlds__Var_85 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumFunctors_41);
          ml_backend__rtti_to_mlds__Var_88 = backend_libs__rtti__encode_type_ctor_flags_1_f_0(ml_backend__rtti_to_mlds__Flags_36);
          ml_backend__rtti_to_mlds__Var_87 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Var_88);
          {
            ml_backend__rtti_to_mlds__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_89, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__NumberMapInfo_46));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__rtti_to_mlds__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_86, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_87));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_86, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_89));
          }
          {
            ml_backend__rtti_to_mlds__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_84, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_85));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_84, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_86));
          }
          {
            ml_backend__rtti_to_mlds__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_78, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_79));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_78, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_84));
          }
          {
            ml_backend__rtti_to_mlds__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_72, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_73));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_72, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_78));
          }
          {
            ml_backend__rtti_to_mlds__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_70, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_71));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_70, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_72));
          }
          {
            ml_backend__rtti_to_mlds__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_68, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_69));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_68, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_70));
          }
          {
            ml_backend__rtti_to_mlds__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_67, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__CompareInitializer_48));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_67, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_68));
          }
          {
            ml_backend__rtti_to_mlds__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_66, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__UnifyInitializer_47));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_66, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_67));
          }
          {
            ml_backend__rtti_to_mlds__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_64, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_65));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_64, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_66));
          }
          {
            ml_backend__rtti_to_mlds__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_62, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_63));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_62, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_64));
          }
          {
            ml_backend__rtti_to_mlds__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_60, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_61));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_60, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_62));
          }
          {
            ml_backend__rtti_to_mlds__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_58, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_59));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_58, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_60));
          }
          {
            ml_backend__rtti_to_mlds__Initializer_109 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_109, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_56));
            MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_109, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_58));
          }
          ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_11, ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__Initializer_109, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__rtti_to_mlds__TCDecl_27 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__RttiData_8), (MR_Integer) 1);

          ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__Target_7, ml_backend__rtti_to_mlds__TCDecl_27, ml_backend__rtti_to_mlds__Name_11, ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_49, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__rtti_to_mlds__Instance_28 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__RttiData_8), (MR_Integer) 2);

          ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__Target_7, ml_backend__rtti_to_mlds__Instance_28, ml_backend__rtti_to_mlds__Name_11, ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_49, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__rtti_to_mlds__TypeInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_8, (MR_Integer) 1)));

              ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__Target_7, ml_backend__rtti_to_mlds__TypeInfo_25, ml_backend__rtti_to_mlds__Name_11, ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_49, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__rtti_to_mlds__PseudoTypeInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_8, (MR_Integer) 1)));

              ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__Target_7, ml_backend__rtti_to_mlds__PseudoTypeInfo_26, ml_backend__rtti_to_mlds__Name_11, ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_49, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__rtti_to_mlds__BaseTypeClassInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_8, (MR_Integer) 4)));
              MR_Integer ml_backend__rtti_to_mlds__N2_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__BaseTypeClassInfo_15, (MR_Integer) 1)));
              MR_Integer ml_backend__rtti_to_mlds__N3_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__BaseTypeClassInfo_15, (MR_Integer) 2)));
              MR_Integer ml_backend__rtti_to_mlds__N4_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__BaseTypeClassInfo_15, (MR_Integer) 3)));
              MR_Integer ml_backend__rtti_to_mlds__N5_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__BaseTypeClassInfo_15, (MR_Integer) 4)));
              MR_Word ml_backend__rtti_to_mlds__Methods_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__BaseTypeClassInfo_15, (MR_Integer) 5)));
              MR_Integer ml_backend__rtti_to_mlds__NumExtra_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__BaseTypeClassInfo_15, (MR_Integer) 0)));
              MR_Word ml_backend__rtti_to_mlds__MethodInitializers_23;
              MR_Word ml_backend__rtti_to_mlds__Initializer_24;
              MR_Word ml_backend__rtti_to_mlds__Var_96;
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_97_97;
              MR_Word ml_backend__rtti_to_mlds__Var_98;
              MR_Word ml_backend__rtti_to_mlds__Var_99;
              MR_Word ml_backend__rtti_to_mlds__Var_100;
              MR_Word ml_backend__rtti_to_mlds__Var_101;
              MR_Word ml_backend__rtti_to_mlds__Var_102;
              MR_Word ml_backend__rtti_to_mlds__Var_103;
              MR_Word ml_backend__rtti_to_mlds__Var_104;
              MR_Word ml_backend__rtti_to_mlds__Var_105;
              MR_Word ml_backend__rtti_to_mlds__Var_106;
              MR_Word ml_backend__rtti_to_mlds__Var_107;
              MR_Word ml_backend__rtti_to_mlds___InstanceModule_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_8, (MR_Integer) 1)));
              MR_Word ml_backend__rtti_to_mlds___ClassId_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_8, (MR_Integer) 2)));
              MR_String ml_backend__rtti_to_mlds___InstanceStr_14 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_8, (MR_Integer) 3)));
              MR_Box ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_97_97;

              {
                ml_backend__rtti_to_mlds__Var_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_96, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_9[0]));
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_96, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_5_p_0_1));
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_96, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_6));
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_96, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Target_7));
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_96, 5) = ((MR_Box) (ml_backend__rtti_to_mlds__NumExtra_22));
              }
              mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__Var_96, ml_backend__rtti_to_mlds__Methods_21, &ml_backend__rtti_to_mlds__MethodInitializers_23, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_49)), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_97_97);
              ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_97_97 = ((MR_Word) ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_97_97);
              ml_backend__rtti_to_mlds__Var_99 = ml_backend__ml_util__gen_init_boxed_int_1_f_0(ml_backend__rtti_to_mlds__NumExtra_22);
              ml_backend__rtti_to_mlds__Var_101 = ml_backend__ml_util__gen_init_boxed_int_1_f_0(ml_backend__rtti_to_mlds__N2_17);
              ml_backend__rtti_to_mlds__Var_103 = ml_backend__ml_util__gen_init_boxed_int_1_f_0(ml_backend__rtti_to_mlds__N3_18);
              ml_backend__rtti_to_mlds__Var_105 = ml_backend__ml_util__gen_init_boxed_int_1_f_0(ml_backend__rtti_to_mlds__N4_19);
              ml_backend__rtti_to_mlds__Var_107 = ml_backend__ml_util__gen_init_boxed_int_1_f_0(ml_backend__rtti_to_mlds__N5_20);
              {
                ml_backend__rtti_to_mlds__Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_106, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_107));
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_106, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MethodInitializers_23));
              }
              {
                ml_backend__rtti_to_mlds__Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_104, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_105));
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_104, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_106));
              }
              {
                ml_backend__rtti_to_mlds__Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_102, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_103));
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_102, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_104));
              }
              {
                ml_backend__rtti_to_mlds__Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_100, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_101));
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_100, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_102));
              }
              {
                ml_backend__rtti_to_mlds__Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_98, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_99));
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_98, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_100));
              }
              {
                ml_backend__rtti_to_mlds__Initializer_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Initializer_24, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_98));
              }
              ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_11, ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__Initializer_24, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_97_97, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50);
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
  MR_Word ml_backend__rtti_to_mlds__Target_7,
  MR_Word ml_backend__rtti_to_mlds__RttiData_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded = ((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word ml_backend__rtti_to_mlds__Var_13;
    MR_Integer ml_backend__rtti_to_mlds__Var_10;

    if (ml_backend__rtti_to_mlds__succeeded)
    {
      ml_backend__rtti_to_mlds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_8, (MR_Integer) 1)));
      ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Var_13)) == (MR_mktag((MR_Integer) 3)));
      if (ml_backend__rtti_to_mlds__succeeded)
        ml_backend__rtti_to_mlds__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_13, (MR_Integer) 0)));
    }
    if (ml_backend__rtti_to_mlds__succeeded)
      *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11;
    else
      ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__Target_7, ml_backend__rtti_to_mlds__RttiData_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12);
  }
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_type_ctor_rep_1_f_0(
  MR_Word ml_backend__rtti_to_mlds__TypeCtorData_3)
{
  {
    MR_Word ml_backend__rtti_to_mlds__Initializer_4;
    MR_Word ml_backend__rtti_to_mlds__TargetPrefixes_5;
    MR_String ml_backend__rtti_to_mlds__Name_6;

    backend_libs__rtti__type_ctor_rep_to_string_3_p_0(ml_backend__rtti_to_mlds__TypeCtorData_3, &ml_backend__rtti_to_mlds__TargetPrefixes_5, &ml_backend__rtti_to_mlds__Name_6);
    ml_backend__rtti_to_mlds__Initializer_4 = ml_backend__ml_util__gen_init_builtin_const_2_f_0(ml_backend__rtti_to_mlds__TargetPrefixes_5, ml_backend__rtti_to_mlds__Name_6);
    return ml_backend__rtti_to_mlds__Initializer_4;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_special_pred_6_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
  MR_Word ml_backend__rtti_to_mlds__Target_8,
  MR_Word ml_backend__rtti_to_mlds__RttiProcIdUniv_9,
  MR_Word * ml_backend__rtti_to_mlds__Initializer_10,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;
    MR_Word ml_backend__rtti_to_mlds__RttiProcId_12;
    MR_Box ml_backend__rtti_to_mlds__conv0_RttiProcId_12;
    MR_Integer ml_backend__rtti_to_mlds__Var_16;
    MR_Word ml_backend__rtti_to_mlds__Var_19;
    MR_Word ml_backend__rtti_to_mlds__Var_20;
    MR_Word ml_backend__rtti_to_mlds__Var_21;
    MR_String ml_backend__rtti_to_mlds__Var_22;
    MR_Word ml_backend__rtti_to_mlds__Var_23;
    MR_Word ml_backend__rtti_to_mlds__Var_24;
    MR_Integer ml_backend__rtti_to_mlds__Var_25;
    MR_Word ml_backend__rtti_to_mlds__Var_26;
    MR_Word ml_backend__rtti_to_mlds__Var_27;
    MR_Word ml_backend__rtti_to_mlds__Var_28;
    MR_Word ml_backend__rtti_to_mlds__Var_29;
    MR_Word ml_backend__rtti_to_mlds__Var_30;
    MR_Word ml_backend__rtti_to_mlds__Var_31;
    MR_Word ml_backend__rtti_to_mlds__Var_32;
    MR_Word ml_backend__rtti_to_mlds__Var_33;

    mercury__univ__det_univ_to_type_2_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, ml_backend__rtti_to_mlds__RttiProcIdUniv_9, &ml_backend__rtti_to_mlds__conv0_RttiProcId_12);
    ml_backend__rtti_to_mlds__RttiProcId_12 = ((MR_Word) ml_backend__rtti_to_mlds__conv0_RttiProcId_12);
    ml_backend__rtti_to_mlds__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 0)));
    ml_backend__rtti_to_mlds__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 1)));
    ml_backend__rtti_to_mlds__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 2)));
    ml_backend__rtti_to_mlds__Var_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 3)));
    ml_backend__rtti_to_mlds__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 4)));
    ml_backend__rtti_to_mlds__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 5)));
    ml_backend__rtti_to_mlds__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 6)));
    ml_backend__rtti_to_mlds__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 7)));
    ml_backend__rtti_to_mlds__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 8)));
    ml_backend__rtti_to_mlds__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 9)));
    ml_backend__rtti_to_mlds__Var_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 10)))) & (MR_Integer) 7);
    ml_backend__rtti_to_mlds__Var_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ml_backend__rtti_to_mlds__Var_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ml_backend__rtti_to_mlds__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 11)));
    ml_backend__rtti_to_mlds__Var_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 12)))) & (MR_Integer) 1);
    ml_backend__rtti_to_mlds__Var_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__Var_16 == (MR_Integer) 0);
    if (ml_backend__rtti_to_mlds__succeeded)
    {
      MR_Word ml_backend__rtti_to_mlds__PredLabel_38;
      MR_Word ml_backend__rtti_to_mlds__PredModule_39;
      MR_Integer ml_backend__rtti_to_mlds__ProcId_40;
      MR_Word ml_backend__rtti_to_mlds__ProcLabel_41;
      MR_Word ml_backend__rtti_to_mlds__FuncLabel_42;
      MR_Word ml_backend__rtti_to_mlds__QualFuncLabel_43;
      MR_Word ml_backend__rtti_to_mlds__Params_44;
      MR_Word ml_backend__rtti_to_mlds__Signature_45;
      MR_Word ml_backend__rtti_to_mlds__CodeAddr_46;
      MR_Word ml_backend__rtti_to_mlds__ProcAddrRval_47;
      MR_Word ml_backend__rtti_to_mlds__ProcAddrArg_48;
      MR_Word ml_backend__rtti_to_mlds__Var_50;
      MR_Word ml_backend__rtti_to_mlds__Var_51;
      MR_Word ml_backend__rtti_to_mlds__Var_52;
      MR_Word ml_backend__rtti_to_mlds__Var_53;
      MR_Word ml_backend__rtti_to_mlds__Var_54;
      MR_Word ml_backend__rtti_to_mlds__Var_55;
      MR_String ml_backend__rtti_to_mlds__Var_56;
      MR_Integer ml_backend__rtti_to_mlds__Var_57;
      MR_Word ml_backend__rtti_to_mlds__Var_58;
      MR_Word ml_backend__rtti_to_mlds__Var_59;
      MR_Word ml_backend__rtti_to_mlds__Var_60;
      MR_Word ml_backend__rtti_to_mlds__Var_61;
      MR_Word ml_backend__rtti_to_mlds__Var_62;
      MR_Word ml_backend__rtti_to_mlds__Var_63;
      MR_Word ml_backend__rtti_to_mlds__Var_64;
      MR_Word ml_backend__rtti_to_mlds__Var_65;
      MR_Word ml_backend__rtti_to_mlds__Var_66;
      MR_Word ml_backend__rtti_to_mlds__Var_67;

      ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__RttiProcId_12, &ml_backend__rtti_to_mlds__PredLabel_38, &ml_backend__rtti_to_mlds__PredModule_39);
      ml_backend__rtti_to_mlds__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 0)));
      ml_backend__rtti_to_mlds__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 1)));
      ml_backend__rtti_to_mlds__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 2)));
      ml_backend__rtti_to_mlds__Var_56 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 3)));
      ml_backend__rtti_to_mlds__Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 4)));
      ml_backend__rtti_to_mlds__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 5)));
      ml_backend__rtti_to_mlds__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 6)));
      ml_backend__rtti_to_mlds__ProcId_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 7)));
      ml_backend__rtti_to_mlds__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 8)));
      ml_backend__rtti_to_mlds__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 9)));
      ml_backend__rtti_to_mlds__Var_62 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 10)))) & (MR_Integer) 7);
      ml_backend__rtti_to_mlds__Var_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      ml_backend__rtti_to_mlds__Var_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      ml_backend__rtti_to_mlds__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 11)));
      ml_backend__rtti_to_mlds__Var_66 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 12)))) & (MR_Integer) 1);
      ml_backend__rtti_to_mlds__Var_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      {
        ml_backend__rtti_to_mlds__ProcLabel_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ProcLabel_41, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__PredLabel_38));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ProcLabel_41, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__ProcId_40));
      }
      {
        ml_backend__rtti_to_mlds__FuncLabel_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__FuncLabel_42, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ProcLabel_41));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__FuncLabel_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        ml_backend__rtti_to_mlds__QualFuncLabel_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__QualFuncLabel_43, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__PredModule_39));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__QualFuncLabel_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__FuncLabel_42));
      }
      ml_backend__rtti_to_mlds__Params_44 = ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_f_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__RttiProcId_12);
      ml_backend__rtti_to_mlds__Signature_45 = ml_backend__mlds__mlds_get_func_signature_1_f_0(ml_backend__rtti_to_mlds__Params_44);
      {
        ml_backend__rtti_to_mlds__CodeAddr_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__CodeAddr_46, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__QualFuncLabel_43));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__CodeAddr_46, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Signature_45));
      }
      ml_backend__rtti_to_mlds__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__CodeAddr_46);
      {
        ml_backend__rtti_to_mlds__ProcAddrRval_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ProcAddrRval_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ProcAddrRval_47, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_50));
      }
      ml_backend__rtti_to_mlds__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__Params_44);
      {
        ml_backend__rtti_to_mlds__Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_51, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_52));
      }
      {
        ml_backend__rtti_to_mlds__ProcAddrArg_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ProcAddrArg_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ProcAddrArg_48, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_51));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ProcAddrArg_48, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__ProcAddrRval_47));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *ml_backend__rtti_to_mlds__Initializer_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ProcAddrArg_48));
      }
      *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14;
    }
    else
    {
      ml_backend__rtti_to_mlds__gen_wrapper_func_and_initializer_8_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__Target_8, (MR_Integer) 0, ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 2, ml_backend__rtti_to_mlds__Initializer_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15);
    }
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_wrapper_func_and_initializer_8_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_9,
  MR_Word ml_backend__rtti_to_mlds__Target_10,
  MR_Integer ml_backend__rtti_to_mlds__NumExtra_11,
  MR_Word ml_backend__rtti_to_mlds__RttiProcId_12,
  MR_Word ml_backend__rtti_to_mlds__ClosureKind_13,
  MR_Word * ml_backend__rtti_to_mlds__Initializer_14,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_24,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_25)
{
  {
    MR_Word ml_backend__rtti_to_mlds__PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 6)));
    MR_Integer ml_backend__rtti_to_mlds__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 7)));
    MR_Word ml_backend__rtti_to_mlds__ProcInfo_19;
    MR_Word ml_backend__rtti_to_mlds__Context_20;
    MR_Word ml_backend__rtti_to_mlds__WrapperFuncRval_21;
    MR_Word ml_backend__rtti_to_mlds__WrapperFuncType_22;
    MR_Word ml_backend__rtti_to_mlds__ClosureWrapperDefns_23;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_26_26;
    MR_Word ml_backend__rtti_to_mlds__Var_27;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_28_28;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_29_29;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_30;
    MR_Word ml_backend__rtti_to_mlds__Var_32;
    MR_Word ml_backend__rtti_to_mlds__Var_33;
    MR_Word ml_backend__rtti_to_mlds__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 0)));
    MR_Word ml_backend__rtti_to_mlds__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 1)));
    MR_Word ml_backend__rtti_to_mlds__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 2)));
    MR_String ml_backend__rtti_to_mlds__Var_37 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 3)));
    MR_Integer ml_backend__rtti_to_mlds__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 4)));
    MR_Word ml_backend__rtti_to_mlds__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 5)));
    MR_Word ml_backend__rtti_to_mlds__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 8)));
    MR_Word ml_backend__rtti_to_mlds__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 9)));
    MR_Word ml_backend__rtti_to_mlds__Var_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 10)))) & (MR_Integer) 7);
    MR_Word ml_backend__rtti_to_mlds__Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ml_backend__rtti_to_mlds__Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ml_backend__rtti_to_mlds__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 11)));
    MR_Word ml_backend__rtti_to_mlds__Var_47 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 12)))) & (MR_Integer) 1);
    MR_Word ml_backend__rtti_to_mlds__Var_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_12, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

    hlds__hlds_module__module_info_proc_info_4_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__PredId_17, ml_backend__rtti_to_mlds__ProcId_18, &ml_backend__rtti_to_mlds__ProcInfo_19);
    ml_backend__rtti_to_mlds__Var_27 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0);
    ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_26_26 = ml_backend__ml_gen_info__ml_gen_info_init_7_f_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__Target_10, ml_backend__rtti_to_mlds__Var_27, ml_backend__rtti_to_mlds__PredId_17, ml_backend__rtti_to_mlds__ProcId_18, ml_backend__rtti_to_mlds__ProcInfo_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_24);
    ml_backend__ml_gen_info__ml_gen_info_bump_counters_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_26_26, &ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_28_28);
    mercury__term__context_init_1_p_0(&ml_backend__rtti_to_mlds__Context_20);
    ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_p_0(ml_backend__rtti_to_mlds__PredId_17, ml_backend__rtti_to_mlds__ProcId_18, ml_backend__rtti_to_mlds__ClosureKind_13, ml_backend__rtti_to_mlds__NumExtra_11, ml_backend__rtti_to_mlds__Context_20, &ml_backend__rtti_to_mlds__WrapperFuncRval_21, &ml_backend__rtti_to_mlds__WrapperFuncType_22, ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_28_28, &ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_29_29);
    ml_backend__ml_gen_info__ml_gen_info_get_closure_wrapper_defns_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_29_29, &ml_backend__rtti_to_mlds__ClosureWrapperDefns_23);
    ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_29_29, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_30);
    ml_backend__ml_global_data__ml_global_data_add_closure_wrapper_func_defns_3_p_0(ml_backend__rtti_to_mlds__ClosureWrapperDefns_23, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_30, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_25);
    {
      ml_backend__rtti_to_mlds__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_33, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__WrapperFuncType_22));
    }
    {
      ml_backend__rtti_to_mlds__Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_32, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_33));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_32, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__WrapperFuncRval_21));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__rtti_to_mlds__Initializer_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_32));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

    ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = ml_backend__ml_util__gen_init_int_1_f_0(((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_5,
  MR_Word ml_backend__rtti_to_mlds__FunctorNumberMap_6,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_10,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_11)
{
  {
    MR_Word ml_backend__rtti_to_mlds__Initializer_8;
    MR_Word ml_backend__rtti_to_mlds__RttiId_23;
    MR_Word ml_backend__rtti_to_mlds__Name_30;

    ml_backend__rtti_to_mlds__Initializer_8 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[25], ml_backend__rtti_to_mlds__FunctorNumberMap_6);
    {
      ml_backend__rtti_to_mlds__RttiId_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_23, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_5));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
    }
    {
      ml_backend__rtti_to_mlds__Name_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_23));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_30, ml_backend__rtti_to_mlds__RttiId_23, ml_backend__rtti_to_mlds__Initializer_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_11);
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv1_Initializer_8;

    ml_backend__rtti_to_mlds__conv1_Initializer_8 = ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_element_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_Initializer_8));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_24;

    ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_maybe_res_name_ordered_table__1301__1_2_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv0_HeadVar__2_24);
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_24));
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
  MR_Word ml_backend__rtti_to_mlds__NameArityMap_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_16,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_17)
{
  {
    MR_Word ml_backend__rtti_to_mlds__TypeInfo_22_22 = (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[3];
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_28_28;
    MR_Word ml_backend__rtti_to_mlds__ArityMaps_10;
    MR_Word ml_backend__rtti_to_mlds__FunctorLists_11;
    MR_Word ml_backend__rtti_to_mlds__Functors_12;
    MR_Word ml_backend__rtti_to_mlds__ModuleName_13;
    MR_Word ml_backend__rtti_to_mlds__Initializer_14;
    MR_Word ml_backend__rtti_to_mlds__Var_19;
    MR_Word ml_backend__rtti_to_mlds__RttiId_37;
    MR_Word ml_backend__rtti_to_mlds__Name_44;

    mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__TypeInfo_22_22, ml_backend__rtti_to_mlds__NameArityMap_8, &ml_backend__rtti_to_mlds__ArityMaps_10);
    mercury__list__map_3_p_0(ml_backend__rtti_to_mlds__TypeInfo_22_22, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[6], (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[24], ml_backend__rtti_to_mlds__ArityMaps_10, &ml_backend__rtti_to_mlds__FunctorLists_11);
    ml_backend__rtti_to_mlds__TypeCtorInfo_28_28 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;
    mercury__list__condense_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_28_28, ml_backend__rtti_to_mlds__FunctorLists_11, &ml_backend__rtti_to_mlds__Functors_12);
    hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_13);
    {
      ml_backend__rtti_to_mlds__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_19, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[4]));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_19, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0_2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_19, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_13));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_19, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
    }
    ml_backend__rtti_to_mlds__Initializer_14 = ml_backend__ml_util__gen_init_array_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_28_28, ml_backend__rtti_to_mlds__Var_19, ml_backend__rtti_to_mlds__Functors_12);
    {
      ml_backend__rtti_to_mlds__RttiId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
    }
    {
      ml_backend__rtti_to_mlds__Name_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_37));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_44, ml_backend__rtti_to_mlds__RttiId_37, ml_backend__rtti_to_mlds__Initializer_14, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_16, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_17);
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_4(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv2_HeadVar__4_4;

    ml_backend__rtti_to_mlds__conv2_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_HeadVar__4_4));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_3(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__2_2;

    ml_backend__rtti_to_mlds__conv1_HeadVar__2_2 = backend_libs__rtti__res_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__2_2));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

    ml_backend__rtti_to_mlds__succeeded = backend_libs__rtti__res_addr_is_numeric_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    return ml_backend__rtti_to_mlds__succeeded;
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

    ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__res_addr_rep_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
  MR_Word ml_backend__rtti_to_mlds__ResFunctors_9,
  MR_Word ml_backend__rtti_to_mlds__DuByPtag_10,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_22,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_23)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0;
    MR_Word ml_backend__rtti_to_mlds__ResFunctorReps_12;
    MR_Word ml_backend__rtti_to_mlds__NumericResFunctorReps_13;
    MR_Word ml_backend__rtti_to_mlds__SymbolicResFunctorReps_14;
    MR_Integer ml_backend__rtti_to_mlds__NumNumericResFunctorReps_15;
    MR_Integer ml_backend__rtti_to_mlds__NumSymbolicResFunctorReps_16;
    MR_Word ml_backend__rtti_to_mlds__ModuleName_17;
    MR_Word ml_backend__rtti_to_mlds__ResAddrInitializer_18;
    MR_Word ml_backend__rtti_to_mlds__RttiId_20;
    MR_Word ml_backend__rtti_to_mlds__Initializer_21;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_26_26;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_28;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_30;
    MR_Word ml_backend__rtti_to_mlds__Var_31;
    MR_Word ml_backend__rtti_to_mlds__Var_32;
    MR_Word ml_backend__rtti_to_mlds__Var_33;
    MR_Word ml_backend__rtti_to_mlds__Var_34;
    MR_Word ml_backend__rtti_to_mlds__Var_35;
    MR_Word ml_backend__rtti_to_mlds__Var_36;
    MR_Word ml_backend__rtti_to_mlds__Var_37;
    MR_Word ml_backend__rtti_to_mlds__Var_38;
    MR_Word ml_backend__rtti_to_mlds__Var_39;
    MR_Word ml_backend__rtti_to_mlds__Var_41;
    MR_Word ml_backend__rtti_to_mlds__Var_42;
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_57;
    MR_Word ml_backend__rtti_to_mlds__Initializer_58;
    MR_Word ml_backend__rtti_to_mlds__Var_69;
    MR_Word ml_backend__rtti_to_mlds__RttiId_79;
    MR_Word ml_backend__rtti_to_mlds__Name_86;
    MR_Word ml_backend__rtti_to_mlds__Name_93;

    ml_backend__rtti_to_mlds__ResFunctorReps_12 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_reserved_functor_0, ml_backend__rtti_to_mlds__TypeCtorInfo_47_47, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[21], ml_backend__rtti_to_mlds__ResFunctors_9);
    mercury__list__filter_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_47_47, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[22], ml_backend__rtti_to_mlds__ResFunctorReps_12, &ml_backend__rtti_to_mlds__NumericResFunctorReps_13, &ml_backend__rtti_to_mlds__SymbolicResFunctorReps_14);
    mercury__list__length_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_47_47, ml_backend__rtti_to_mlds__NumericResFunctorReps_13, &ml_backend__rtti_to_mlds__NumNumericResFunctorReps_15);
    mercury__list__length_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_47_47, ml_backend__rtti_to_mlds__SymbolicResFunctorReps_14, &ml_backend__rtti_to_mlds__NumSymbolicResFunctorReps_16);
    hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_17);
    ml_backend__rtti_to_mlds__FunctorRttiNames_57 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_reserved_functor_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[23], ml_backend__rtti_to_mlds__ResFunctors_9);
    {
      ml_backend__rtti_to_mlds__Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_69, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_69, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_4));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_69, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_17));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_69, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
    }
    ml_backend__rtti_to_mlds__Initializer_58 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__Var_69, ml_backend__rtti_to_mlds__FunctorRttiNames_57);
    {
      ml_backend__rtti_to_mlds__RttiId_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_79, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
    }
    {
      ml_backend__rtti_to_mlds__Name_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_86, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_79));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_86, ml_backend__rtti_to_mlds__RttiId_79, ml_backend__rtti_to_mlds__Initializer_58, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_22, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_26_26);
    ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__NumSymbolicResFunctorReps_16 == (MR_Integer) 0);
    if (ml_backend__rtti_to_mlds__succeeded)
    {
      ml_backend__rtti_to_mlds__ResAddrInitializer_18 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)));
      ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_28 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_26_26;
    }
    else
    {
      ml_backend__rtti_to_mlds__gen_res_addrs_list_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__RttiTypeCtor_8, ml_backend__rtti_to_mlds__SymbolicResFunctorReps_14, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_26_26, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_28);
      ml_backend__rtti_to_mlds__ResAddrInitializer_18 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_17, ml_backend__rtti_to_mlds__RttiTypeCtor_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
    }
    ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__RttiTypeCtor_8, ml_backend__rtti_to_mlds__DuByPtag_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_28, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_30);
    {
      ml_backend__rtti_to_mlds__RttiId_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_20, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
    }
    {
      ml_backend__rtti_to_mlds__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_20));
    }
    {
      ml_backend__rtti_to_mlds__Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_31, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_32));
    }
    ml_backend__rtti_to_mlds__Var_34 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumNumericResFunctorReps_15);
    ml_backend__rtti_to_mlds__Var_36 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumSymbolicResFunctorReps_16);
    ml_backend__rtti_to_mlds__Var_39 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_17, ml_backend__rtti_to_mlds__RttiTypeCtor_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
    ml_backend__rtti_to_mlds__Var_42 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_17, ml_backend__rtti_to_mlds__RttiTypeCtor_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
    {
      ml_backend__rtti_to_mlds__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_41, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_42));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__rtti_to_mlds__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_38, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_39));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_38, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_41));
    }
    {
      ml_backend__rtti_to_mlds__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ResAddrInitializer_18));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_37, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_38));
    }
    {
      ml_backend__rtti_to_mlds__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_35, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_36));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_35, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_37));
    }
    {
      ml_backend__rtti_to_mlds__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_33, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_34));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_33, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_35));
    }
    {
      ml_backend__rtti_to_mlds__Initializer_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_21, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_31));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_33));
    }
    {
      ml_backend__rtti_to_mlds__Name_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_93, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_20));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_93, ml_backend__rtti_to_mlds__RttiId_20, ml_backend__rtti_to_mlds__Initializer_21, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_30, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_23);
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_res_addrs_list_5_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__3_3;

    ml_backend__rtti_to_mlds__conv0_HeadVar__3_3 = ml_backend__ml_util__gen_init_reserved_address_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__3_3));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_res_addrs_list_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
  MR_Word ml_backend__rtti_to_mlds__ResAddrs_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13)
{
  {
    MR_Word ml_backend__rtti_to_mlds__Initializer_10;
    MR_Word ml_backend__rtti_to_mlds__Var_14;
    MR_Word ml_backend__rtti_to_mlds__RttiId_25;
    MR_Word ml_backend__rtti_to_mlds__Name_32;

    {
      ml_backend__rtti_to_mlds__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_14, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_14, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_res_addrs_list_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_14, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_6));
    }
    ml_backend__rtti_to_mlds__Initializer_10 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0, ml_backend__rtti_to_mlds__Var_14, ml_backend__rtti_to_mlds__ResAddrs_8);
    {
      ml_backend__rtti_to_mlds__RttiId_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_25, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
    }
    {
      ml_backend__rtti_to_mlds__Name_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_25));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_32, ml_backend__rtti_to_mlds__RttiId_25, ml_backend__rtti_to_mlds__Initializer_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_3(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv2_HeadVar__4_4;

    ml_backend__rtti_to_mlds__conv2_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_HeadVar__4_4));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__2_2;

    ml_backend__rtti_to_mlds__conv1_HeadVar__2_2 = backend_libs__rtti__du_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__2_2));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_25;

    ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_name_ordered_table__1224__1_2_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv0_HeadVar__2_25);
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_25));
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
  MR_Word ml_backend__rtti_to_mlds__NameArityMap_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_17,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18)
{
  {
    MR_Word ml_backend__rtti_to_mlds__TypeInfo_23_23 = (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[2];
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_29_29;
    MR_Word ml_backend__rtti_to_mlds__ArityMaps_10;
    MR_Word ml_backend__rtti_to_mlds__FunctorLists_11;
    MR_Word ml_backend__rtti_to_mlds__Functors_12;
    MR_Word ml_backend__rtti_to_mlds__ModuleName_13;
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_14;
    MR_Word ml_backend__rtti_to_mlds__Initializer_15;
    MR_Word ml_backend__rtti_to_mlds__Var_36;
    MR_Word ml_backend__rtti_to_mlds__RttiId_46;
    MR_Word ml_backend__rtti_to_mlds__Name_53;

    mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__TypeInfo_23_23, ml_backend__rtti_to_mlds__NameArityMap_8, &ml_backend__rtti_to_mlds__ArityMaps_10);
    mercury__list__map_3_p_0(ml_backend__rtti_to_mlds__TypeInfo_23_23, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[5], (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[19], ml_backend__rtti_to_mlds__ArityMaps_10, &ml_backend__rtti_to_mlds__FunctorLists_11);
    ml_backend__rtti_to_mlds__TypeCtorInfo_29_29 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0;
    mercury__list__condense_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_29_29, ml_backend__rtti_to_mlds__FunctorLists_11, &ml_backend__rtti_to_mlds__Functors_12);
    hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_13);
    ml_backend__rtti_to_mlds__FunctorRttiNames_14 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_29_29, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[20], ml_backend__rtti_to_mlds__Functors_12);
    {
      ml_backend__rtti_to_mlds__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_36, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_36, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_3));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_36, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_13));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_36, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
    }
    ml_backend__rtti_to_mlds__Initializer_15 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__Var_36, ml_backend__rtti_to_mlds__FunctorRttiNames_14);
    {
      ml_backend__rtti_to_mlds__RttiId_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_46, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
    }
    {
      ml_backend__rtti_to_mlds__Name_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_53, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_46));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_53, ml_backend__rtti_to_mlds__RttiId_46, ml_backend__rtti_to_mlds__Initializer_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18);
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_19;

    ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_19);
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_19));
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
  MR_Word ml_backend__rtti_to_mlds__PtagMap_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_23,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_24)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;
    MR_Word ml_backend__rtti_to_mlds__ModuleName_10;
    MR_Word ml_backend__rtti_to_mlds__PtagList_11;
    MR_Word ml_backend__rtti_to_mlds__PtagInitPrefix_12;
    MR_Integer ml_backend__rtti_to_mlds__FirstPtag_13;
    MR_Word ml_backend__rtti_to_mlds__PtagInitializers_20;
    MR_Word ml_backend__rtti_to_mlds__Initializer_22;
    MR_Word ml_backend__rtti_to_mlds__Var_25;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_26_26;
    MR_Word ml_backend__rtti_to_mlds__Var_51;
    MR_Word ml_backend__rtti_to_mlds__RttiId_67;
    MR_Word ml_backend__rtti_to_mlds__Name_74;
    MR_Box ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_26_26;

    hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_10);
    mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0, ml_backend__rtti_to_mlds__PtagMap_8, &ml_backend__rtti_to_mlds__PtagList_11);
    {
      ml_backend__rtti_to_mlds__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_25, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_25, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_10));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_25, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
    }
    mercury__list__foldl_4_p_0((MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[1], (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__Var_25, ml_backend__rtti_to_mlds__PtagList_11, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_23)), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_26_26);
    ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_26_26 = ((MR_Word) ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_26_26);
    if ((ml_backend__rtti_to_mlds__PtagList_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      ml_backend__rtti_to_mlds__PtagInitPrefix_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      ml_backend__rtti_to_mlds__FirstPtag_13 = (MR_Integer) 0;
    }
    else
    {
      MR_Word ml_backend__rtti_to_mlds__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__PtagList_11, (MR_Integer) 0)));
      MR_Word ml_backend__rtti_to_mlds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__PtagList_11, (MR_Integer) 1)));
      MR_Word ml_backend__rtti_to_mlds__Var_14;

      ml_backend__rtti_to_mlds__FirstPtag_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_27, (MR_Integer) 0)));
      ml_backend__rtti_to_mlds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_27, (MR_Integer) 1)));
      ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__FirstPtag_13 == (MR_Integer) 0);
      if (ml_backend__rtti_to_mlds__succeeded)
        ml_backend__rtti_to_mlds__PtagInitPrefix_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__FirstPtag_13 == (MR_Integer) 1);
        if (ml_backend__rtti_to_mlds__succeeded)
        {
          MR_Word ml_backend__rtti_to_mlds__SecTagTargetPrefixes_16;
          MR_Word ml_backend__rtti_to_mlds__RttiElemId_19;
          MR_Word ml_backend__rtti_to_mlds__Var_30;
          MR_Word ml_backend__rtti_to_mlds__Var_31;
          MR_Word ml_backend__rtti_to_mlds__Var_32;
          MR_Word ml_backend__rtti_to_mlds__Var_33;
          MR_Word ml_backend__rtti_to_mlds__Var_34;
          MR_Word ml_backend__rtti_to_mlds__Var_36;
          MR_Word ml_backend__rtti_to_mlds__Var_37;
          MR_Word ml_backend__rtti_to_mlds__Var_39;
          MR_Word ml_backend__rtti_to_mlds__Var_40;
          MR_Word ml_backend__rtti_to_mlds__Var_41;
          MR_Word ml_backend__rtti_to_mlds__Var_42;
          MR_Word ml_backend__rtti_to_mlds__Var_43;
          MR_String ml_backend__rtti_to_mlds__Var_17;

          backend_libs__rtti__sectag_locn_to_string_3_p_0((MR_Integer) 0, &ml_backend__rtti_to_mlds__SecTagTargetPrefixes_16, &ml_backend__rtti_to_mlds__Var_17);
          {
            ml_backend__rtti_to_mlds__RttiElemId_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiElemId_19, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiElemId_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__rtti_to_mlds_scalar_common_1[7])));
          }
          {
            ml_backend__rtti_to_mlds__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiElemId_19));
          }
          {
            ml_backend__rtti_to_mlds__Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_31, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_32));
          }
          ml_backend__rtti_to_mlds__Var_34 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
          ml_backend__rtti_to_mlds__Var_37 = ml_backend__ml_util__gen_init_builtin_const_2_f_0(ml_backend__rtti_to_mlds__SecTagTargetPrefixes_16, (MR_String) "MR_SECTAG_VARIABLE");
          {
            ml_backend__rtti_to_mlds__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_43, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__rtti_to_mlds_scalar_common_1[8])));
          }
          {
            ml_backend__rtti_to_mlds__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_42, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_43));
          }
          {
            ml_backend__rtti_to_mlds__Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_41, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_42));
          }
          ml_backend__rtti_to_mlds__Var_40 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__Var_41);
          {
            ml_backend__rtti_to_mlds__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_39, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_40));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__rtti_to_mlds__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_36, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_37));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_36, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_39));
          }
          {
            ml_backend__rtti_to_mlds__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_33, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_34));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_33, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_36));
          }
          {
            ml_backend__rtti_to_mlds__Var_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Var_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_31));
            MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Var_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_33));
          }
          {
            ml_backend__rtti_to_mlds__PtagInitPrefix_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__PtagInitPrefix_12, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_30));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__PtagInitPrefix_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.gen_du_ptag_ordered_table\'/5", (MR_String) "bad ptag list");
            return;
          }
        }
      }
    }
    ml_backend__rtti_to_mlds__PtagInitializers_20 = ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0(ml_backend__rtti_to_mlds__ModuleName_10, ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__PtagList_11, ml_backend__rtti_to_mlds__FirstPtag_13);
    ml_backend__rtti_to_mlds__Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__rtti_to_mlds__PtagInitPrefix_12, ml_backend__rtti_to_mlds__PtagInitializers_20);
    {
      ml_backend__rtti_to_mlds__Initializer_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Initializer_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_51));
    }
    {
      ml_backend__rtti_to_mlds__RttiId_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_67, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
    }
    {
      ml_backend__rtti_to_mlds__Name_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_74, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_67));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_74, ml_backend__rtti_to_mlds__RttiId_67, ml_backend__rtti_to_mlds__Initializer_22, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_26_26, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_24);
  }
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

    ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_ptag_ordered_table_body__1189__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))));
    return ml_backend__rtti_to_mlds__succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleName_1,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_2,
  MR_Word ml_backend__rtti_to_mlds__HeadVar__3_3,
  MR_Integer ml_backend__rtti_to_mlds__CurPtag_4)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;
    MR_Word ml_backend__rtti_to_mlds__HeadVar__5_5;

    if ((ml_backend__rtti_to_mlds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ml_backend__rtti_to_mlds__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Integer ml_backend__rtti_to_mlds__Ptag_11;
      MR_Word ml_backend__rtti_to_mlds__SectagTable_12;
      MR_Word ml_backend__rtti_to_mlds__PtagTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ml_backend__rtti_to_mlds__Initializer_15;
      MR_Word ml_backend__rtti_to_mlds__Initializers_16;
      MR_Word ml_backend__rtti_to_mlds__SectagLocn_17;
      MR_Integer ml_backend__rtti_to_mlds__NumSharers_18;
      MR_Word ml_backend__rtti_to_mlds__RttiName_20;
      MR_Word ml_backend__rtti_to_mlds__RttiId_21;
      MR_Word ml_backend__rtti_to_mlds__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ml_backend__rtti_to_mlds__Var_23;
      MR_Word ml_backend__rtti_to_mlds__Var_27;
      MR_Word ml_backend__rtti_to_mlds__Var_28;
      MR_Word ml_backend__rtti_to_mlds__Var_29;
      MR_Word ml_backend__rtti_to_mlds__Var_30;
      MR_Word ml_backend__rtti_to_mlds__Var_31;
      MR_Word ml_backend__rtti_to_mlds__Var_32;
      MR_Word ml_backend__rtti_to_mlds__Var_33;
      MR_Word ml_backend__rtti_to_mlds__Var_34;
      MR_Word ml_backend__rtti_to_mlds__Var_35;
      MR_Integer ml_backend__rtti_to_mlds__Var_37;
      MR_Word ml_backend__rtti_to_mlds__TargetPrefixes_42;
      MR_String ml_backend__rtti_to_mlds__Name_43;
      MR_Word ml_backend__rtti_to_mlds___SectagMap_19;

      ml_backend__rtti_to_mlds__Ptag_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_22, (MR_Integer) 0)));
      ml_backend__rtti_to_mlds__SectagTable_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_22, (MR_Integer) 1)));
      {
        ml_backend__rtti_to_mlds__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_23, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[5]));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0_1));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_23, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__CurPtag_4));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_23, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Ptag_11));
      }
      mercury__require__expect_4_p_0(ml_backend__rtti_to_mlds__Var_23, (MR_String) "ml_backend.rtti_to_mlds", (MR_String) "function \140ml_backend.rtti_to_mlds.gen_du_ptag_ordered_table_body\'/4", (MR_String) "ptag mismatch");
      ml_backend__rtti_to_mlds__SectagLocn_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__SectagTable_12, (MR_Integer) 0)));
      ml_backend__rtti_to_mlds__NumSharers_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__SectagTable_12, (MR_Integer) 1)));
      ml_backend__rtti_to_mlds___SectagMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__SectagTable_12, (MR_Integer) 2)));
      {
        ml_backend__rtti_to_mlds__RttiName_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_20, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ptag_11));
      }
      {
        ml_backend__rtti_to_mlds__RttiId_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_21, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_2));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_20));
      }
      {
        ml_backend__rtti_to_mlds__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_28, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_21));
      }
      {
        ml_backend__rtti_to_mlds__Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_28));
      }
      ml_backend__rtti_to_mlds__Var_30 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumSharers_18);
      backend_libs__rtti__sectag_locn_to_string_3_p_0(ml_backend__rtti_to_mlds__SectagLocn_17, &ml_backend__rtti_to_mlds__TargetPrefixes_42, &ml_backend__rtti_to_mlds__Name_43);
      ml_backend__rtti_to_mlds__Var_32 = ml_backend__ml_util__gen_init_builtin_const_2_f_0(ml_backend__rtti_to_mlds__TargetPrefixes_42, ml_backend__rtti_to_mlds__Name_43);
      {
        ml_backend__rtti_to_mlds__Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_35, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ptag_11));
      }
      ml_backend__rtti_to_mlds__Var_34 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_1, ml_backend__rtti_to_mlds__RttiTypeCtor_2, ml_backend__rtti_to_mlds__Var_35);
      {
        ml_backend__rtti_to_mlds__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_33, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_34));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        ml_backend__rtti_to_mlds__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_31, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_32));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_31, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_33));
      }
      {
        ml_backend__rtti_to_mlds__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_29, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_30));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_29, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_31));
      }
      {
        ml_backend__rtti_to_mlds__Initializer_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_15, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_27));
        MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_15, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_29));
      }
      ml_backend__rtti_to_mlds__Var_37 = (ml_backend__rtti_to_mlds__CurPtag_4 + (MR_Integer) 1);
      ml_backend__rtti_to_mlds__Initializers_16 = ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0(ml_backend__rtti_to_mlds__ModuleName_1, ml_backend__rtti_to_mlds__RttiTypeCtor_2, ml_backend__rtti_to_mlds__PtagTail_13, ml_backend__rtti_to_mlds__Var_37);
      {
        ml_backend__rtti_to_mlds__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__5_5, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Initializer_15));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__5_5, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Initializers_16));
      }
    }
    return ml_backend__rtti_to_mlds__HeadVar__5_5;
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__4_4;

    ml_backend__rtti_to_mlds__conv1_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__4_4));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

    ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__foreign_enum_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumByName_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
{
  {
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_20_20 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;
    MR_Word ml_backend__rtti_to_mlds__Functors_10;
    MR_Word ml_backend__rtti_to_mlds__ModuleName_11;
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_12;
    MR_Word ml_backend__rtti_to_mlds__Initializer_13;
    MR_Word ml_backend__rtti_to_mlds__Var_27;
    MR_Word ml_backend__rtti_to_mlds__RttiId_37;
    MR_Word ml_backend__rtti_to_mlds__Name_44;

    mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, ml_backend__rtti_to_mlds__ForeignEnumByName_8, &ml_backend__rtti_to_mlds__Functors_10);
    hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_11);
    ml_backend__rtti_to_mlds__FunctorRttiNames_12 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[18], ml_backend__rtti_to_mlds__Functors_10);
    {
      ml_backend__rtti_to_mlds__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_27, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_27, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_11));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_27, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
    }
    ml_backend__rtti_to_mlds__Initializer_13 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__Var_27, ml_backend__rtti_to_mlds__FunctorRttiNames_12);
    {
      ml_backend__rtti_to_mlds__RttiId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
    }
    {
      ml_backend__rtti_to_mlds__Name_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_37));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_44, ml_backend__rtti_to_mlds__RttiId_37, ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__4_4;

    ml_backend__rtti_to_mlds__conv1_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__4_4));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

    ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__foreign_enum_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumByOrdinal_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
{
  {
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_20_20 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;
    MR_Word ml_backend__rtti_to_mlds__Functors_10;
    MR_Word ml_backend__rtti_to_mlds__ModuleName_11;
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_12;
    MR_Word ml_backend__rtti_to_mlds__Initializer_13;
    MR_Word ml_backend__rtti_to_mlds__Var_27;
    MR_Word ml_backend__rtti_to_mlds__RttiId_37;
    MR_Word ml_backend__rtti_to_mlds__Name_44;

    mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, ml_backend__rtti_to_mlds__ForeignEnumByOrdinal_8, &ml_backend__rtti_to_mlds__Functors_10);
    hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_11);
    ml_backend__rtti_to_mlds__FunctorRttiNames_12 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[17], ml_backend__rtti_to_mlds__Functors_10);
    {
      ml_backend__rtti_to_mlds__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_27, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_27, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_11));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_27, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
    }
    ml_backend__rtti_to_mlds__Initializer_13 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__Var_27, ml_backend__rtti_to_mlds__FunctorRttiNames_12);
    {
      ml_backend__rtti_to_mlds__RttiId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
    }
    {
      ml_backend__rtti_to_mlds__Name_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_37));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_44, ml_backend__rtti_to_mlds__RttiId_37, ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__4_4;

    ml_backend__rtti_to_mlds__conv1_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__4_4));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

    ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__enum_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
  MR_Word ml_backend__rtti_to_mlds__EnumByName_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
{
  {
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_20_20 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0;
    MR_Word ml_backend__rtti_to_mlds__Functors_10;
    MR_Word ml_backend__rtti_to_mlds__ModuleName_11;
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_12;
    MR_Word ml_backend__rtti_to_mlds__Initializer_13;
    MR_Word ml_backend__rtti_to_mlds__Var_27;
    MR_Word ml_backend__rtti_to_mlds__RttiId_37;
    MR_Word ml_backend__rtti_to_mlds__Name_44;

    mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, ml_backend__rtti_to_mlds__EnumByName_8, &ml_backend__rtti_to_mlds__Functors_10);
    hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_11);
    ml_backend__rtti_to_mlds__FunctorRttiNames_12 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[16], ml_backend__rtti_to_mlds__Functors_10);
    {
      ml_backend__rtti_to_mlds__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_27, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_27, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_11));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_27, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
    }
    ml_backend__rtti_to_mlds__Initializer_13 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__Var_27, ml_backend__rtti_to_mlds__FunctorRttiNames_12);
    {
      ml_backend__rtti_to_mlds__RttiId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
    }
    {
      ml_backend__rtti_to_mlds__Name_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_37));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_44, ml_backend__rtti_to_mlds__RttiId_37, ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__4_4;

    ml_backend__rtti_to_mlds__conv1_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__4_4));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

    ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__enum_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
  MR_Word ml_backend__rtti_to_mlds__EnumByValue_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
{
  {
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_20_20 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0;
    MR_Word ml_backend__rtti_to_mlds__Functors_10;
    MR_Word ml_backend__rtti_to_mlds__ModuleName_11;
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_12;
    MR_Word ml_backend__rtti_to_mlds__Initializer_13;
    MR_Word ml_backend__rtti_to_mlds__Var_27;
    MR_Word ml_backend__rtti_to_mlds__RttiId_37;
    MR_Word ml_backend__rtti_to_mlds__Name_44;

    mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, ml_backend__rtti_to_mlds__EnumByValue_8, &ml_backend__rtti_to_mlds__Functors_10);
    hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_11);
    ml_backend__rtti_to_mlds__FunctorRttiNames_12 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[15], ml_backend__rtti_to_mlds__Functors_10);
    {
      ml_backend__rtti_to_mlds__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_27, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0_2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_27, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_11));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_27, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
    }
    ml_backend__rtti_to_mlds__Initializer_13 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__Var_27, ml_backend__rtti_to_mlds__FunctorRttiNames_12);
    {
      ml_backend__rtti_to_mlds__RttiId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
    }
    {
      ml_backend__rtti_to_mlds__Name_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_37));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_44, ml_backend__rtti_to_mlds__RttiId_37, ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
  }
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(
  MR_Word ml_backend__rtti_to_mlds__RttiData_2)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;

    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
    {
      MR_Word ml_backend__rtti_to_mlds__PseudoTypeInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_2, (MR_Integer) 1)));

      if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_5)) == (MR_mktag((MR_Integer) 0))))
        ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
      else
      if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_5)) == (MR_mktag((MR_Integer) 3))))
        ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
      else
        ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
    }
    else
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
    {
      MR_Word ml_backend__rtti_to_mlds__TypeInfo_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_2, (MR_Integer) 1)));
      MR_Word ml_backend__rtti_to_mlds__Var_4;

      ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_3)) == (MR_mktag((MR_Integer) 0)));
      if (ml_backend__rtti_to_mlds__succeeded)
        ml_backend__rtti_to_mlds__Var_4 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_3), (MR_Integer) 0);
    }
    else
      ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
    ml_backend__rtti_to_mlds__succeeded = !(ml_backend__rtti_to_mlds__succeeded);
    return ml_backend__rtti_to_mlds__succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0(
  MR_Word ml_backend__rtti_to_mlds__DestType_5,
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
  MR_Word ml_backend__rtti_to_mlds__RttiData_7)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded = ((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word ml_backend__rtti_to_mlds__Initializer_8;
    MR_Integer ml_backend__rtti_to_mlds__VarNum_9;
    MR_Word ml_backend__rtti_to_mlds__Var_18;

    if (ml_backend__rtti_to_mlds__succeeded)
    {
      ml_backend__rtti_to_mlds__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 1)));
      ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Var_18)) == (MR_mktag((MR_Integer) 3)));
      if (ml_backend__rtti_to_mlds__succeeded)
        ml_backend__rtti_to_mlds__VarNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_18, (MR_Integer) 0)));
    }
    if (ml_backend__rtti_to_mlds__succeeded)
    {
      MR_Word ml_backend__rtti_to_mlds__Var_19;
      MR_Word ml_backend__rtti_to_mlds__Var_20;
      MR_Word ml_backend__rtti_to_mlds__Var_21;
      MR_Word ml_backend__rtti_to_mlds__Var_22;

      {
        ml_backend__rtti_to_mlds__Var_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Var_20, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__DestType_5));
      }
      {
        ml_backend__rtti_to_mlds__Var_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Var_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__VarNum_9));
      }
      {
        ml_backend__rtti_to_mlds__Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_22));
      }
      {
        ml_backend__rtti_to_mlds__Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_19, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_20));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_19, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_21));
      }
      {
        ml_backend__rtti_to_mlds__Initializer_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Initializer_8, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_19));
      }
    }
    else
    {
      MR_Word ml_backend__rtti_to_mlds__TCName_11;
      MR_Word ml_backend__rtti_to_mlds__InstanceModuleName_12;
      MR_String ml_backend__rtti_to_mlds__InstanceString_13;
      MR_Word ml_backend__rtti_to_mlds__Var_14;

      ml_backend__rtti_to_mlds__succeeded = ((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (ml_backend__rtti_to_mlds__succeeded)
      {
        ml_backend__rtti_to_mlds__TCName_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 1)));
        ml_backend__rtti_to_mlds__InstanceModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 2)));
        ml_backend__rtti_to_mlds__InstanceString_13 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 3)));
        ml_backend__rtti_to_mlds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 4)));
        {
          MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_15;
          MR_Word ml_backend__rtti_to_mlds__RttiId_16;
          MR_Word ml_backend__rtti_to_mlds__Rval_17;
          MR_Word ml_backend__rtti_to_mlds__Var_25;
          MR_Word ml_backend__rtti_to_mlds__Var_27;
          MR_Word ml_backend__rtti_to_mlds__Var_28;
          MR_Word ml_backend__rtti_to_mlds__Var_29;

          {
            ml_backend__rtti_to_mlds__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_25, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceModuleName_12));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceString_13));
          }
          {
            ml_backend__rtti_to_mlds__RttiId_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiId_16, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_11));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiId_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_25));
          }
          ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__InstanceModuleName_12);
          {
            ml_backend__rtti_to_mlds__Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_15));
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_27, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_16));
          }
          {
            ml_backend__rtti_to_mlds__Rval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_27));
          }
          {
            ml_backend__rtti_to_mlds__Var_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Var_29, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__DestType_5));
          }
          {
            ml_backend__rtti_to_mlds__Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_28, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_29));
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_28, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__Rval_17));
          }
          {
            ml_backend__rtti_to_mlds__Initializer_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Initializer_8, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_28));
          }
        }
      }
      else
      {
        MR_Word ml_backend__rtti_to_mlds__RttiId_31;

        backend_libs__rtti__rtti_data_to_id_2_p_0(ml_backend__rtti_to_mlds__RttiData_7, &ml_backend__rtti_to_mlds__RttiId_31);
        ml_backend__rtti_to_mlds__Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(ml_backend__rtti_to_mlds__DestType_5, ml_backend__rtti_to_mlds__ModuleName_6, ml_backend__rtti_to_mlds__RttiId_31);
      }
    }
    return ml_backend__rtti_to_mlds__Initializer_8;
  }
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(
  MR_Word ml_backend__rtti_to_mlds__DestType_5,
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
  MR_Word ml_backend__rtti_to_mlds__RttiId_7)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;
    MR_Word ml_backend__rtti_to_mlds__Initializer_8;
    MR_Word ml_backend__rtti_to_mlds__Var_11;
    MR_Word ml_backend__rtti_to_mlds__Var_12;
    MR_Word ml_backend__rtti_to_mlds__Var_13;

    {
      ml_backend__rtti_to_mlds__Var_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Var_12, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__DestType_5));
    }
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiId_7)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_7, (MR_Integer) 0)));
      MR_Word ml_backend__rtti_to_mlds__RttiName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_7, (MR_Integer) 1)));
      MR_Word ml_backend__rtti_to_mlds__ModuleName_36;
      MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_37;
      MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_41;
      MR_Word ml_backend__rtti_to_mlds__RttiId_42;
      MR_Word ml_backend__rtti_to_mlds__Var_44;

      if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiName_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_18, (MR_Integer) 0)))) == (MR_Integer) 12))))
      {
        MR_Word ml_backend__rtti_to_mlds__PseudoTypeInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_18, (MR_Integer) 1)));

        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_31)) == (MR_mktag((MR_Integer) 1))))
          ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
        else
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_31)) == (MR_mktag((MR_Integer) 2))))
          ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
        else
          ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiName_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_18, (MR_Integer) 0)))) == (MR_Integer) 11))))
      {
        MR_Word ml_backend__rtti_to_mlds__TypeInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_18, (MR_Integer) 1)));

        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_26)) == (MR_mktag((MR_Integer) 1))))
          ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
        else
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_26)) == (MR_mktag((MR_Integer) 2))))
          ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
        else
          ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
      }
      else
        ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
      if (ml_backend__rtti_to_mlds__succeeded)
      {
        ml_backend__rtti_to_mlds__ModuleName_36 = ml_backend__rtti_to_mlds__ModuleName_6;
        ml_backend__rtti_to_mlds__RttiTypeCtor_37 = ml_backend__rtti_to_mlds__RttiTypeCtor_17;
      }
      else
      {
        MR_Word ml_backend__rtti_to_mlds__RttiModuleName_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_17, (MR_Integer) 0)));
        MR_String ml_backend__rtti_to_mlds__RttiTypeName_39 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_17, (MR_Integer) 1)));
        MR_Integer ml_backend__rtti_to_mlds__RttiTypeArity_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_17, (MR_Integer) 2)));
        MR_String ml_backend__rtti_to_mlds__Var_43;

        ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiModuleName_38)) == (MR_mktag((MR_Integer) 0)));
        if (ml_backend__rtti_to_mlds__succeeded)
        {
          ml_backend__rtti_to_mlds__Var_43 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiModuleName_38, (MR_Integer) 0)));
          ml_backend__rtti_to_mlds__succeeded = (strcmp(ml_backend__rtti_to_mlds__Var_43, (MR_String) "") == 0);
        }
        if (ml_backend__rtti_to_mlds__succeeded)
        {
          ml_backend__rtti_to_mlds__ModuleName_36 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
          ml_backend__rtti_to_mlds__RttiTypeCtor_37 = ml_backend__rtti_to_mlds__RttiTypeCtor_17;
        }
        else
        {
          ml_backend__rtti_to_mlds__ModuleName_36 = ml_backend__rtti_to_mlds__RttiModuleName_38;
          ml_backend__rtti_to_mlds__RttiTypeCtor_37 = ml_backend__rtti_to_mlds__RttiTypeCtor_17;
        }
      }
      ml_backend__rtti_to_mlds__MLDS_ModuleName_41 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_36);
      {
        ml_backend__rtti_to_mlds__RttiId_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_42, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_37));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_42, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_18));
      }
      {
        ml_backend__rtti_to_mlds__Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_44, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_41));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_44, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_42));
      }
      {
        ml_backend__rtti_to_mlds__Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_13, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_44));
      }
    }
    else
    {
      MR_Word ml_backend__rtti_to_mlds__TCName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiId_7, (MR_Integer) 0)));
      MR_Word ml_backend__rtti_to_mlds__TCRttiName_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiId_7, (MR_Integer) 1)));

      ml_backend__rtti_to_mlds__Var_13 = ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_110_95_116_99_95_114_116_116_105_95_110_97_109_101_95_95_91_49_93_95_48_3_f_0(ml_backend__rtti_to_mlds__TCName_20, ml_backend__rtti_to_mlds__TCRttiName_21);
    }
    {
      ml_backend__rtti_to_mlds__Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_11, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_12));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_11, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_13));
    }
    {
      ml_backend__rtti_to_mlds__Initializer_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Initializer_8, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_11));
    }
    return ml_backend__rtti_to_mlds__Initializer_8;
  }
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_110_95_116_99_95_114_116_116_105_95_110_97_109_101_95_95_91_49_93_95_48_3_f_0(
  MR_Word ml_backend__rtti_to_mlds__TCName_6,
  MR_Word ml_backend__rtti_to_mlds__TCRttiName_7)
{
  {
    MR_Word ml_backend__rtti_to_mlds__Rval_8;
    MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_11;
    MR_Word ml_backend__rtti_to_mlds__RttiId_17;
    MR_Word ml_backend__rtti_to_mlds__Var_18;

    switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__rtti_to_mlds__TCRttiName_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__rtti_to_mlds__ModuleName_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
              MR_String ml_backend__rtti_to_mlds___ClassName_45 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
              MR_Integer ml_backend__rtti_to_mlds___Arity_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

              ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_44);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__rtti_to_mlds__ModuleName_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
              MR_String ml_backend__rtti_to_mlds___ClassName_55 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
              MR_Integer ml_backend__rtti_to_mlds___Arity_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

              ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_54);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__rtti_to_mlds__ModuleName_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
              MR_String ml_backend__rtti_to_mlds___ClassName_50 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
              MR_Integer ml_backend__rtti_to_mlds___Arity_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

              ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_49);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ml_backend__rtti_to_mlds__ModuleName_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
              MR_String ml_backend__rtti_to_mlds___ClassName_30 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
              MR_Integer ml_backend__rtti_to_mlds___Arity_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

              ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_29);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ml_backend__rtti_to_mlds__ModuleName_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
              MR_String ml_backend__rtti_to_mlds___ClassName_40 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
              MR_Integer ml_backend__rtti_to_mlds___Arity_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

              ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_39);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__rtti_to_mlds__InstanceModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)));
          MR_String ml_backend__rtti_to_mlds__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 1)));

          ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__InstanceModuleName_9);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__rtti_to_mlds__ModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
          MR_String ml_backend__rtti_to_mlds___ClassName_35 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
          MR_Integer ml_backend__rtti_to_mlds___Arity_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

          ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_34);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__rtti_to_mlds__ModuleName_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
              MR_String ml_backend__rtti_to_mlds___ClassName_60 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
              MR_Integer ml_backend__rtti_to_mlds___Arity_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

              ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_59);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__rtti_to_mlds__ModuleName_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
              MR_String ml_backend__rtti_to_mlds___ClassName_80 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
              MR_Integer ml_backend__rtti_to_mlds___Arity_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

              ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_79);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__rtti_to_mlds__ModuleName_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
              MR_String ml_backend__rtti_to_mlds___ClassName_65 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
              MR_Integer ml_backend__rtti_to_mlds___Arity_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

              ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_64);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ml_backend__rtti_to_mlds__ModuleName_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
              MR_String ml_backend__rtti_to_mlds___ClassName_70 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
              MR_Integer ml_backend__rtti_to_mlds___Arity_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

              ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_69);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ml_backend__rtti_to_mlds__ModuleName_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
              MR_String ml_backend__rtti_to_mlds___ClassName_75 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
              MR_Integer ml_backend__rtti_to_mlds___Arity_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

              ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_74);
            }
            break;
        }
        break;
    }
    {
      ml_backend__rtti_to_mlds__RttiId_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiId_17, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_6));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiId_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__TCRttiName_7));
    }
    {
      ml_backend__rtti_to_mlds__Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_18, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_11));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_18, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_17));
    }
    {
      ml_backend__rtti_to_mlds__Rval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_8, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_18));
    }
    return ml_backend__rtti_to_mlds__Rval_8;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_6(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_12;

    ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_12);
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_12));
  }
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_5(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

    ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    return ml_backend__rtti_to_mlds__succeeded;
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_4(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv5_HeadVar__2_2;

    ml_backend__rtti_to_mlds__conv5_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv5_HeadVar__2_2));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_3(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_12;

    ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_12);
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_12));
  }
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

    ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    return ml_backend__rtti_to_mlds__succeeded;
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__2_2;

    ml_backend__rtti_to_mlds__conv1_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__2_2));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_8,
  MR_Word ml_backend__rtti_to_mlds__Target_9,
  MR_Word ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_10,
  MR_Word ml_backend__rtti_to_mlds__Name_11,
  MR_Word ml_backend__rtti_to_mlds__RttiId_12,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_35,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_36)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;

    switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.gen_pseudo_type_info_defn\'/7", (MR_String) "plain_arity_zero_pseudo_type_info");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_10, (MR_Integer) 0)));
          MR_Word ml_backend__rtti_to_mlds__ArgTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_10, (MR_Integer) 1)));
          MR_Word ml_backend__rtti_to_mlds__PDupRvalTypeMap_17;
          MR_Word ml_backend__rtti_to_mlds__Var_18;
          MR_Box ml_backend__rtti_to_mlds__conv0_Var_18;

          ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_35, &ml_backend__rtti_to_mlds__PDupRvalTypeMap_17);
          ml_backend__rtti_to_mlds__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__rtti_to_mlds__PDupRvalTypeMap_17, ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_12)), &ml_backend__rtti_to_mlds__conv0_Var_18);
          if (ml_backend__rtti_to_mlds__succeeded)
          {
            ml_backend__rtti_to_mlds__Var_18 = ((MR_Word) ml_backend__rtti_to_mlds__conv0_Var_18);
            ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
          }
          if (ml_backend__rtti_to_mlds__succeeded)
            *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_36 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_35;
          else
          {
            MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_111_111 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
            MR_Word ml_backend__rtti_to_mlds__ArgRttiDatas_19;
            MR_Word ml_backend__rtti_to_mlds__RealRttiDatas_20;
            MR_Word ml_backend__rtti_to_mlds__ModuleName_21;
            MR_Word ml_backend__rtti_to_mlds__Initializer_22;
            MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_23;
            MR_Word ml_backend__rtti_to_mlds__Rval_24;
            MR_Word ml_backend__rtti_to_mlds__Type_25;
            MR_Word ml_backend__rtti_to_mlds__RvalType_26;
            MR_Word ml_backend__rtti_to_mlds__Var_61;
            MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_62_62;
            MR_Word ml_backend__rtti_to_mlds__Var_64;
            MR_Word ml_backend__rtti_to_mlds__Var_65;
            MR_Word ml_backend__rtti_to_mlds__Var_66;
            MR_Word ml_backend__rtti_to_mlds__Var_68;
            MR_Word ml_backend__rtti_to_mlds__Var_69;
            MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_72_72;
            MR_Word ml_backend__rtti_to_mlds__Var_73;
            MR_Box ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_62_62;

            ml_backend__rtti_to_mlds__ArgRttiDatas_19 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, ml_backend__rtti_to_mlds__TypeCtorInfo_111_111, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[11], ml_backend__rtti_to_mlds__ArgTypes_16);
            ml_backend__rtti_to_mlds__RealRttiDatas_20 = mercury__list__filter_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_111_111, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[12], ml_backend__rtti_to_mlds__ArgRttiDatas_19);
            {
              ml_backend__rtti_to_mlds__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_61, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_61, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_3));
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_61, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_8));
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_61, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Target_9));
            }
            mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_111_111, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__Var_61, ml_backend__rtti_to_mlds__RealRttiDatas_20, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_35)), &ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_62_62);
            ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_62_62 = ((MR_Word) ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_62_62);
            hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_8, &ml_backend__rtti_to_mlds__ModuleName_21);
            {
              ml_backend__rtti_to_mlds__Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_64, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_12));
            }
            {
              ml_backend__rtti_to_mlds__Type_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_64));
            }
            ml_backend__rtti_to_mlds__Var_66 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_21, ml_backend__rtti_to_mlds__RttiTypeCtor_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
            ml_backend__rtti_to_mlds__Var_69 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)), ml_backend__rtti_to_mlds__ModuleName_21, ml_backend__rtti_to_mlds__ArgRttiDatas_19);
            {
              ml_backend__rtti_to_mlds__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_68, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_69));
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              ml_backend__rtti_to_mlds__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_65, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_66));
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_65, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_68));
            }
            {
              ml_backend__rtti_to_mlds__Initializer_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_25));
              MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_22, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_65));
            }
            ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_11, ml_backend__rtti_to_mlds__RttiId_12, ml_backend__rtti_to_mlds__Initializer_22, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_62_62, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_72_72);
            ml_backend__rtti_to_mlds__MLDS_ModuleName_23 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_21);
            {
              ml_backend__rtti_to_mlds__Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_73, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_23));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_73, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_12));
            }
            {
              ml_backend__rtti_to_mlds__Rval_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_24, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_73));
            }
            {
              ml_backend__rtti_to_mlds__RvalType_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_26, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Rval_24));
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_26, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_25));
            }
            ml_backend__ml_global_data__ml_global_data_add_pdup_rtti_id_4_p_0(ml_backend__rtti_to_mlds__RttiId_12, ml_backend__rtti_to_mlds__RvalType_26, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_72_72, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_36);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__rtti_to_mlds__VarArityId_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_10, (MR_Integer) 0)));
          MR_Word ml_backend__rtti_to_mlds__ArgTypes_98 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_10, (MR_Integer) 1)));
          MR_Word ml_backend__rtti_to_mlds__PDupRvalTypeMap_99;
          MR_Word ml_backend__rtti_to_mlds__Var_28;
          MR_Box ml_backend__rtti_to_mlds__conv4_Var_28;

          ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_35, &ml_backend__rtti_to_mlds__PDupRvalTypeMap_99);
          ml_backend__rtti_to_mlds__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__rtti_to_mlds__PDupRvalTypeMap_99, ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_12)), &ml_backend__rtti_to_mlds__conv4_Var_28);
          if (ml_backend__rtti_to_mlds__succeeded)
          {
            ml_backend__rtti_to_mlds__Var_28 = ((MR_Word) ml_backend__rtti_to_mlds__conv4_Var_28);
            ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
          }
          if (ml_backend__rtti_to_mlds__succeeded)
            *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_36 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_35;
          else
          {
            MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_121_121 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
            MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_122_122 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
            MR_Word ml_backend__rtti_to_mlds__Globals_29;
            MR_Word ml_backend__rtti_to_mlds__TargetLang_30;
            MR_Word ml_backend__rtti_to_mlds__InitRttiName_31;
            MR_Word ml_backend__rtti_to_mlds__InitCastRttiDatasArray_32;
            MR_Word ml_backend__rtti_to_mlds__InitializerArgs_33;
            MR_Word ml_backend__rtti_to_mlds__Var_42;
            MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_43_43;
            MR_Word ml_backend__rtti_to_mlds__Var_54;
            MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55;
            MR_Word ml_backend__rtti_to_mlds__Var_56;
            MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_79;
            MR_Word ml_backend__rtti_to_mlds__ArgRttiDatas_80;
            MR_Word ml_backend__rtti_to_mlds__RealRttiDatas_81;
            MR_Word ml_backend__rtti_to_mlds__ModuleName_82;
            MR_Word ml_backend__rtti_to_mlds__Initializer_83;
            MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_84;
            MR_Word ml_backend__rtti_to_mlds__Rval_85;
            MR_Word ml_backend__rtti_to_mlds__Type_86;
            MR_Word ml_backend__rtti_to_mlds__RvalType_87;
            MR_Box ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_43_43;

            ml_backend__rtti_to_mlds__ArgRttiDatas_80 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_121_121, ml_backend__rtti_to_mlds__TypeCtorInfo_122_122, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[13], ml_backend__rtti_to_mlds__ArgTypes_98);
            ml_backend__rtti_to_mlds__RealRttiDatas_81 = mercury__list__filter_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_122_122, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[14], ml_backend__rtti_to_mlds__ArgRttiDatas_80);
            {
              ml_backend__rtti_to_mlds__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_42, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_42, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_7_p_0_6));
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_42, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_8));
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_42, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Target_9));
            }
            mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_122_122, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__Var_42, ml_backend__rtti_to_mlds__RealRttiDatas_81, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_35)), &ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_43_43);
            ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_43_43 = ((MR_Word) ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_43_43);
            ml_backend__rtti_to_mlds__RttiTypeCtor_79 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(ml_backend__rtti_to_mlds__VarArityId_27);
            hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_8, &ml_backend__rtti_to_mlds__ModuleName_82);
            hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_8, &ml_backend__rtti_to_mlds__Globals_29);
            libs__globals__get_target_2_p_0(ml_backend__rtti_to_mlds__Globals_29, &ml_backend__rtti_to_mlds__TargetLang_30);
            ml_backend__rtti_to_mlds__InitRttiName_31 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_82, ml_backend__rtti_to_mlds__RttiTypeCtor_79, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
            ml_backend__rtti_to_mlds__InitCastRttiDatasArray_32 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)), ml_backend__rtti_to_mlds__ModuleName_82, ml_backend__rtti_to_mlds__ArgRttiDatas_80);
            ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__TargetLang_30 == (MR_Integer) 2);
            if (ml_backend__rtti_to_mlds__succeeded)
            {
              MR_Word ml_backend__rtti_to_mlds__Var_46;

              {
                ml_backend__rtti_to_mlds__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_46, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitCastRttiDatasArray_32));
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ml_backend__rtti_to_mlds__InitializerArgs_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_33, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitRttiName_31));
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_33, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_46));
              }
            }
            else
            {
              MR_Word ml_backend__rtti_to_mlds__Var_48;
              MR_Word ml_backend__rtti_to_mlds__Var_49;
              MR_Integer ml_backend__rtti_to_mlds__Var_50;
              MR_Word ml_backend__rtti_to_mlds__Var_51;

              ml_backend__rtti_to_mlds__Var_50 = mercury__list__length_1_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_121_121, ml_backend__rtti_to_mlds__ArgTypes_98);
              ml_backend__rtti_to_mlds__Var_49 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Var_50);
              {
                ml_backend__rtti_to_mlds__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_51, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitCastRttiDatasArray_32));
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ml_backend__rtti_to_mlds__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_48, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_49));
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_48, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_51));
              }
              {
                ml_backend__rtti_to_mlds__InitializerArgs_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_33, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitRttiName_31));
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_33, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_48));
              }
            }
            {
              ml_backend__rtti_to_mlds__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_54, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_12));
            }
            {
              ml_backend__rtti_to_mlds__Type_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_86, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_54));
            }
            {
              ml_backend__rtti_to_mlds__Initializer_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_83, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_86));
              MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_83, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InitializerArgs_33));
            }
            ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_11, ml_backend__rtti_to_mlds__RttiId_12, ml_backend__rtti_to_mlds__Initializer_83, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_43_43, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55);
            ml_backend__rtti_to_mlds__MLDS_ModuleName_84 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_82);
            {
              ml_backend__rtti_to_mlds__Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_56, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_84));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_56, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_12));
            }
            {
              ml_backend__rtti_to_mlds__Rval_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_85, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_56));
            }
            {
              ml_backend__rtti_to_mlds__RvalType_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_87, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Rval_85));
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_87, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_86));
            }
            ml_backend__ml_global_data__ml_global_data_add_pdup_rtti_id_4_p_0(ml_backend__rtti_to_mlds__RttiId_12, ml_backend__rtti_to_mlds__RvalType_87, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_36);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.gen_pseudo_type_info_defn\'/7", (MR_String) "type_var");
            return;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_6(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_12;

    ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_12);
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_12));
  }
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_5(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

    ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    return ml_backend__rtti_to_mlds__succeeded;
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_4(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv5_HeadVar__2_2;

    ml_backend__rtti_to_mlds__conv5_HeadVar__2_2 = backend_libs__rtti__type_info_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv5_HeadVar__2_2));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_3(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_12;

    ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_12);
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_12));
  }
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

    ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    return ml_backend__rtti_to_mlds__succeeded;
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__2_2;

    ml_backend__rtti_to_mlds__conv1_HeadVar__2_2 = backend_libs__rtti__type_info_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__2_2));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_8,
  MR_Word ml_backend__rtti_to_mlds__Target_9,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeInfo_10,
  MR_Word ml_backend__rtti_to_mlds__Name_11,
  MR_Word ml_backend__rtti_to_mlds__RttiId_12,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_32,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_33)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;

    switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiTypeInfo_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.gen_type_info_defn\'/7", (MR_String) "plain_arity_zero_type_info");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiTypeInfo_10, (MR_Integer) 0)));
          MR_Word ml_backend__rtti_to_mlds__ArgTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiTypeInfo_10, (MR_Integer) 1)));
          MR_Word ml_backend__rtti_to_mlds__PDupRvalTypeMap_17;
          MR_Word ml_backend__rtti_to_mlds__Var_18;
          MR_Box ml_backend__rtti_to_mlds__conv0_Var_18;

          ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_32, &ml_backend__rtti_to_mlds__PDupRvalTypeMap_17);
          ml_backend__rtti_to_mlds__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__rtti_to_mlds__PDupRvalTypeMap_17, ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_12)), &ml_backend__rtti_to_mlds__conv0_Var_18);
          if (ml_backend__rtti_to_mlds__succeeded)
          {
            ml_backend__rtti_to_mlds__Var_18 = ((MR_Word) ml_backend__rtti_to_mlds__conv0_Var_18);
            ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
          }
          if (ml_backend__rtti_to_mlds__succeeded)
            *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_33 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_32;
          else
          {
            MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_105_105 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
            MR_Word ml_backend__rtti_to_mlds__ArgRttiDatas_19;
            MR_Word ml_backend__rtti_to_mlds__RealRttiDatas_20;
            MR_Word ml_backend__rtti_to_mlds__ModuleName_21;
            MR_Word ml_backend__rtti_to_mlds__Initializer_22;
            MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_23;
            MR_Word ml_backend__rtti_to_mlds__Rval_24;
            MR_Word ml_backend__rtti_to_mlds__Type_25;
            MR_Word ml_backend__rtti_to_mlds__RvalType_26;
            MR_Word ml_backend__rtti_to_mlds__Var_55;
            MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_56_56;
            MR_Word ml_backend__rtti_to_mlds__Var_58;
            MR_Word ml_backend__rtti_to_mlds__Var_59;
            MR_Word ml_backend__rtti_to_mlds__Var_60;
            MR_Word ml_backend__rtti_to_mlds__Var_62;
            MR_Word ml_backend__rtti_to_mlds__Var_63;
            MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_66_66;
            MR_Word ml_backend__rtti_to_mlds__Var_67;
            MR_Box ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_56_56;

            ml_backend__rtti_to_mlds__ArgRttiDatas_19 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, ml_backend__rtti_to_mlds__TypeCtorInfo_105_105, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[7], ml_backend__rtti_to_mlds__ArgTypes_16);
            ml_backend__rtti_to_mlds__RealRttiDatas_20 = mercury__list__filter_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_105_105, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[8], ml_backend__rtti_to_mlds__ArgRttiDatas_19);
            {
              ml_backend__rtti_to_mlds__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_55, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_55, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_3));
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_55, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_8));
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_55, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Target_9));
            }
            mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_105_105, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__Var_55, ml_backend__rtti_to_mlds__RealRttiDatas_20, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_32)), &ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_56_56);
            ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_56_56 = ((MR_Word) ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_56_56);
            hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_8, &ml_backend__rtti_to_mlds__ModuleName_21);
            {
              ml_backend__rtti_to_mlds__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_58, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_12));
            }
            {
              ml_backend__rtti_to_mlds__Type_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_58));
            }
            ml_backend__rtti_to_mlds__Var_60 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_21, ml_backend__rtti_to_mlds__RttiTypeCtor_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
            ml_backend__rtti_to_mlds__Var_63 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), ml_backend__rtti_to_mlds__ModuleName_21, ml_backend__rtti_to_mlds__ArgRttiDatas_19);
            {
              ml_backend__rtti_to_mlds__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_62, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_63));
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              ml_backend__rtti_to_mlds__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_59, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_60));
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_59, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_62));
            }
            {
              ml_backend__rtti_to_mlds__Initializer_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_25));
              MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_22, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_59));
            }
            ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_11, ml_backend__rtti_to_mlds__RttiId_12, ml_backend__rtti_to_mlds__Initializer_22, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_56_56, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_66_66);
            ml_backend__rtti_to_mlds__MLDS_ModuleName_23 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_21);
            {
              ml_backend__rtti_to_mlds__Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_67, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_23));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_67, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_12));
            }
            {
              ml_backend__rtti_to_mlds__Rval_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_24, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_67));
            }
            {
              ml_backend__rtti_to_mlds__RvalType_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_26, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Rval_24));
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_26, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_25));
            }
            ml_backend__ml_global_data__ml_global_data_add_pdup_rtti_id_4_p_0(ml_backend__rtti_to_mlds__RttiId_12, ml_backend__rtti_to_mlds__RvalType_26, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_66_66, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_33);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__rtti_to_mlds__VarArityId_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiTypeInfo_10, (MR_Integer) 0)));
          MR_Word ml_backend__rtti_to_mlds__ArgTypes_92 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiTypeInfo_10, (MR_Integer) 1)));
          MR_Word ml_backend__rtti_to_mlds__PDupRvalTypeMap_93;
          MR_Word ml_backend__rtti_to_mlds__Var_28;
          MR_Box ml_backend__rtti_to_mlds__conv4_Var_28;

          ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_32, &ml_backend__rtti_to_mlds__PDupRvalTypeMap_93);
          ml_backend__rtti_to_mlds__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__rtti_to_mlds__PDupRvalTypeMap_93, ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_12)), &ml_backend__rtti_to_mlds__conv4_Var_28);
          if (ml_backend__rtti_to_mlds__succeeded)
          {
            ml_backend__rtti_to_mlds__Var_28 = ((MR_Word) ml_backend__rtti_to_mlds__conv4_Var_28);
            ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
          }
          if (ml_backend__rtti_to_mlds__succeeded)
            *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_33 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_32;
          else
          {
            MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_115_115 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0;
            MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_116_116 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
            MR_Word ml_backend__rtti_to_mlds__InitRttiName_29;
            MR_Word ml_backend__rtti_to_mlds__InitCastRttiDatasArray_30;
            MR_Word ml_backend__rtti_to_mlds__InitializerArgs_31;
            MR_Word ml_backend__rtti_to_mlds__Var_36;
            MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_37_37;
            MR_Word ml_backend__rtti_to_mlds__Var_48;
            MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_49_49;
            MR_Word ml_backend__rtti_to_mlds__Var_50;
            MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_73;
            MR_Word ml_backend__rtti_to_mlds__ArgRttiDatas_74;
            MR_Word ml_backend__rtti_to_mlds__RealRttiDatas_75;
            MR_Word ml_backend__rtti_to_mlds__ModuleName_76;
            MR_Word ml_backend__rtti_to_mlds__Initializer_77;
            MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_78;
            MR_Word ml_backend__rtti_to_mlds__Rval_79;
            MR_Word ml_backend__rtti_to_mlds__Type_80;
            MR_Word ml_backend__rtti_to_mlds__RvalType_81;
            MR_Box ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_37_37;

            ml_backend__rtti_to_mlds__ArgRttiDatas_74 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_115_115, ml_backend__rtti_to_mlds__TypeCtorInfo_116_116, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[9], ml_backend__rtti_to_mlds__ArgTypes_92);
            ml_backend__rtti_to_mlds__RealRttiDatas_75 = mercury__list__filter_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_116_116, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[10], ml_backend__rtti_to_mlds__ArgRttiDatas_74);
            {
              ml_backend__rtti_to_mlds__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_36, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_36, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_info_defn_7_p_0_6));
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_36, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_8));
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_36, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Target_9));
            }
            mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_116_116, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__Var_36, ml_backend__rtti_to_mlds__RealRttiDatas_75, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_32)), &ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_37_37);
            ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_37_37 = ((MR_Word) ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_37_37);
            ml_backend__rtti_to_mlds__RttiTypeCtor_73 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(ml_backend__rtti_to_mlds__VarArityId_27);
            hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_8, &ml_backend__rtti_to_mlds__ModuleName_76);
            ml_backend__rtti_to_mlds__InitRttiName_29 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_76, ml_backend__rtti_to_mlds__RttiTypeCtor_73, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
            ml_backend__rtti_to_mlds__InitCastRttiDatasArray_30 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), ml_backend__rtti_to_mlds__ModuleName_76, ml_backend__rtti_to_mlds__ArgRttiDatas_74);
            switch (ml_backend__rtti_to_mlds__Target_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__rtti_to_mlds__Var_40;
                  MR_Word ml_backend__rtti_to_mlds__Var_41;
                  MR_Integer ml_backend__rtti_to_mlds__Var_42;
                  MR_Word ml_backend__rtti_to_mlds__Var_43;

                  ml_backend__rtti_to_mlds__Var_42 = mercury__list__length_1_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_115_115, ml_backend__rtti_to_mlds__ArgTypes_92);
                  ml_backend__rtti_to_mlds__Var_41 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Var_42);
                  {
                    ml_backend__rtti_to_mlds__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_43, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitCastRttiDatasArray_30));
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ml_backend__rtti_to_mlds__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_40, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_41));
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_40, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_43));
                  }
                  {
                    ml_backend__rtti_to_mlds__InitializerArgs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_31, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitRttiName_29));
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_31, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_40));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__rtti_to_mlds__Var_45;

                  {
                    ml_backend__rtti_to_mlds__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_45, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitCastRttiDatasArray_30));
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ml_backend__rtti_to_mlds__InitializerArgs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_31, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitRttiName_29));
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_31, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_45));
                  }
                }
                break;
            }
            {
              ml_backend__rtti_to_mlds__Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_48, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_12));
            }
            {
              ml_backend__rtti_to_mlds__Type_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_80, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_48));
            }
            {
              ml_backend__rtti_to_mlds__Initializer_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_77, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_80));
              MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_77, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InitializerArgs_31));
            }
            ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_11, ml_backend__rtti_to_mlds__RttiId_12, ml_backend__rtti_to_mlds__Initializer_77, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_37_37, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_49_49);
            ml_backend__rtti_to_mlds__MLDS_ModuleName_78 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_76);
            {
              ml_backend__rtti_to_mlds__Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_50, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_78));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_50, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_12));
            }
            {
              ml_backend__rtti_to_mlds__Rval_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_79, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_50));
            }
            {
              ml_backend__rtti_to_mlds__RvalType_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_81, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Rval_79));
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_81, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_80));
            }
            ml_backend__ml_global_data__ml_global_data_add_pdup_rtti_id_4_p_0(ml_backend__rtti_to_mlds__RttiId_12, ml_backend__rtti_to_mlds__RvalType_81, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_49_49, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_33);
          }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_Initializer_8;

    ml_backend__rtti_to_mlds__conv0_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_Initializer_8));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0(
  MR_Word ml_backend__rtti_to_mlds__Type_5,
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
  MR_Word ml_backend__rtti_to_mlds__RttiDatas_7)
{
  {
    MR_Word ml_backend__rtti_to_mlds__HeadVar__4_4;
    MR_Word ml_backend__rtti_to_mlds__Var_8;

    {
      ml_backend__rtti_to_mlds__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_8, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_8, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_8, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_5));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_8, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_6));
    }
    ml_backend__rtti_to_mlds__HeadVar__4_4 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, ml_backend__rtti_to_mlds__Var_8, ml_backend__rtti_to_mlds__RttiDatas_7);
    return ml_backend__rtti_to_mlds__HeadVar__4_4;
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_4(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv7_Initializer_8;

    ml_backend__rtti_to_mlds__conv7_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv7_Initializer_8));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_3(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_5,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_6)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv4_RttiId_14;
    MR_Word ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Counter_27;
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_29;

    ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv4_RttiId_14, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_3), &ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Counter_27, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_5), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_29);
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv4_RttiId_14));
    *ml_backend__rtti_to_mlds__wrapper_arg_4 = ((MR_Box) (ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Counter_27));
    *ml_backend__rtti_to_mlds__wrapper_arg_6 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_29));
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv1_RttiId_10;

    ml_backend__rtti_to_mlds__make_instance_constr_id_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv1_RttiId_10);
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_RttiId_10));
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

    ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_8,
  MR_Word ml_backend__rtti_to_mlds__Target_9,
  MR_Word ml_backend__rtti_to_mlds__Instance_10,
  MR_Word ml_backend__rtti_to_mlds__Name_11,
  MR_Word ml_backend__rtti_to_mlds__RttiId_12,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_34)
{
  {
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_61_61;
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_75_75;
    MR_Word ml_backend__rtti_to_mlds__TCName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Instance_10, (MR_Integer) 0)));
    MR_Word ml_backend__rtti_to_mlds__Types_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Instance_10, (MR_Integer) 1)));
    MR_Integer ml_backend__rtti_to_mlds__NumTypeVars_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Instance_10, (MR_Integer) 2)));
    MR_Word ml_backend__rtti_to_mlds__InstanceConstraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Instance_10, (MR_Integer) 3)));
    MR_Word ml_backend__rtti_to_mlds__TCDeclRttiId_19;
    MR_Integer ml_backend__rtti_to_mlds__NumInstanceConstraints_20;
    MR_Word ml_backend__rtti_to_mlds__InstanceTypesTCRttiName_21;
    MR_Word ml_backend__rtti_to_mlds__InstanceTypesRttiId_22;
    MR_Word ml_backend__rtti_to_mlds__InstanceConstrsTCRttiName_23;
    MR_Word ml_backend__rtti_to_mlds__InstanceConstrsRttiId_24;
    MR_Word ml_backend__rtti_to_mlds__ModuleName_25;
    MR_Word ml_backend__rtti_to_mlds__TypeRttiDatas_26;
    MR_Word ml_backend__rtti_to_mlds__TypesInitializer_27;
    MR_Word ml_backend__rtti_to_mlds__TCConstrIds_28;
    MR_Word ml_backend__rtti_to_mlds__ElementType_30;
    MR_Word ml_backend__rtti_to_mlds__InstanceConstrsInitializer_31;
    MR_Word ml_backend__rtti_to_mlds__Initializer_32;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_37_37;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_38_38;
    MR_Word ml_backend__rtti_to_mlds__Var_39;
    MR_Word ml_backend__rtti_to_mlds__Var_40;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_41_41;
    MR_Word ml_backend__rtti_to_mlds__Var_42;
    MR_Word ml_backend__rtti_to_mlds__Var_44;
    MR_Word ml_backend__rtti_to_mlds__Var_45;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_46_46;
    MR_Word ml_backend__rtti_to_mlds__Var_47;
    MR_Word ml_backend__rtti_to_mlds__Var_48;
    MR_Word ml_backend__rtti_to_mlds__Var_49;
    MR_Word ml_backend__rtti_to_mlds__Var_50;
    MR_Word ml_backend__rtti_to_mlds__Var_51;
    MR_Word ml_backend__rtti_to_mlds__Var_52;
    MR_Word ml_backend__rtti_to_mlds__Var_53;
    MR_Word ml_backend__rtti_to_mlds__Var_54;
    MR_Word ml_backend__rtti_to_mlds__Var_55;
    MR_Word ml_backend__rtti_to_mlds__Var_56;
    MR_Word ml_backend__rtti_to_mlds__Var_57;
    MR_Word ml_backend__rtti_to_mlds__Var_58;
    MR_Word ml_backend__rtti_to_mlds__Name_85;
    MR_Word ml_backend__rtti_to_mlds__Name_92;
    MR_Word ml_backend__rtti_to_mlds___Methods_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Instance_10, (MR_Integer) 4)));
    MR_Word ml_backend__rtti_to_mlds__Var_29;
    MR_Box ml_backend__rtti_to_mlds__conv6_Var_29;
    MR_Box ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_GlobalData_41_41;

    {
      ml_backend__rtti_to_mlds__TCDeclRttiId_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCDeclRttiId_19, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_14));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCDeclRttiId_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
    }
    ml_backend__rtti_to_mlds__TypeCtorInfo_61_61 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0;
    mercury__list__length_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_61_61, ml_backend__rtti_to_mlds__InstanceConstraints_17, &ml_backend__rtti_to_mlds__NumInstanceConstraints_20);
    {
      ml_backend__rtti_to_mlds__InstanceTypesTCRttiName_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__InstanceTypesTCRttiName_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__InstanceTypesTCRttiName_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Types_15));
    }
    {
      ml_backend__rtti_to_mlds__InstanceTypesRttiId_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InstanceTypesRttiId_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_14));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InstanceTypesRttiId_22, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceTypesTCRttiName_21));
    }
    {
      ml_backend__rtti_to_mlds__InstanceConstrsTCRttiName_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__InstanceConstrsTCRttiName_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__InstanceConstrsTCRttiName_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Types_15));
    }
    {
      ml_backend__rtti_to_mlds__InstanceConstrsRttiId_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InstanceConstrsRttiId_24, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_14));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InstanceConstrsRttiId_24, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceConstrsTCRttiName_23));
    }
    hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_8, &ml_backend__rtti_to_mlds__ModuleName_25);
    ml_backend__rtti_to_mlds__TypeRttiDatas_26 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[6], ml_backend__rtti_to_mlds__Types_15);
    ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_8, ml_backend__rtti_to_mlds__Target_9, ml_backend__rtti_to_mlds__TypeRttiDatas_26, &ml_backend__rtti_to_mlds__TypesInitializer_27, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_37_37);
    {
      ml_backend__rtti_to_mlds__Name_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_85, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceTypesRttiId_22));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_85, ml_backend__rtti_to_mlds__InstanceTypesRttiId_22, ml_backend__rtti_to_mlds__TypesInitializer_27, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_37_37, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_38_38);
    {
      ml_backend__rtti_to_mlds__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_42, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_42, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_42, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_14));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_42, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Types_15));
    }
    {
      ml_backend__rtti_to_mlds__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_39, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_39, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_3));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_39, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_8));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_39, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Target_9));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_39, 5) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_42));
    }
    ml_backend__rtti_to_mlds__Var_40 = mercury__counter__init_1_f_0((MR_Integer) 1);
    ml_backend__rtti_to_mlds__TypeCtorInfo_75_75 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0;
    mercury__list__map_foldl2_7_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_61_61, ml_backend__rtti_to_mlds__TypeCtorInfo_75_75, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__Var_39, ml_backend__rtti_to_mlds__InstanceConstraints_17, &ml_backend__rtti_to_mlds__TCConstrIds_28, ((MR_Box) (ml_backend__rtti_to_mlds__Var_40)), &ml_backend__rtti_to_mlds__conv6_Var_29, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_38_38)), &ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_GlobalData_41_41);
    ml_backend__rtti_to_mlds__Var_29 = ((MR_Word) ml_backend__rtti_to_mlds__conv6_Var_29);
    ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_41_41 = ((MR_Word) ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_GlobalData_41_41);
    {
      ml_backend__rtti_to_mlds__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceConstrsRttiId_24));
    }
    {
      ml_backend__rtti_to_mlds__ElementType_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ElementType_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ElementType_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_44));
    }
    {
      ml_backend__rtti_to_mlds__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_45, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_instance_defn_7_p_0_4));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_45, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ElementType_30));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_45, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_25));
    }
    ml_backend__rtti_to_mlds__InstanceConstrsInitializer_31 = ml_backend__ml_util__gen_init_array_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_75_75, ml_backend__rtti_to_mlds__Var_45, ml_backend__rtti_to_mlds__TCConstrIds_28);
    {
      ml_backend__rtti_to_mlds__Name_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_92, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceConstrsRttiId_24));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_92, ml_backend__rtti_to_mlds__InstanceConstrsRttiId_24, ml_backend__rtti_to_mlds__InstanceConstrsInitializer_31, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_41_41, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_46_46);
    {
      ml_backend__rtti_to_mlds__Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_48, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_12));
    }
    {
      ml_backend__rtti_to_mlds__Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_47, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_48));
    }
    ml_backend__rtti_to_mlds__Var_50 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ml_backend__rtti_to_mlds__ModuleName_25, ml_backend__rtti_to_mlds__TCDeclRttiId_19);
    ml_backend__rtti_to_mlds__Var_52 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumTypeVars_16);
    ml_backend__rtti_to_mlds__Var_54 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumInstanceConstraints_20);
    ml_backend__rtti_to_mlds__Var_56 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ml_backend__rtti_to_mlds__ModuleName_25, ml_backend__rtti_to_mlds__InstanceTypesRttiId_22);
    ml_backend__rtti_to_mlds__Var_58 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ml_backend__rtti_to_mlds__ModuleName_25, ml_backend__rtti_to_mlds__InstanceConstrsRttiId_24);
    {
      ml_backend__rtti_to_mlds__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_57, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_58));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__rtti_to_mlds__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_55, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_56));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_55, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_57));
    }
    {
      ml_backend__rtti_to_mlds__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_53, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_54));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_53, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_55));
    }
    {
      ml_backend__rtti_to_mlds__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_51, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_52));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_51, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_53));
    }
    {
      ml_backend__rtti_to_mlds__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_49, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_50));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_49, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_51));
    }
    {
      ml_backend__rtti_to_mlds__Initializer_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_47));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_32, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_49));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_11, ml_backend__rtti_to_mlds__RttiId_12, ml_backend__rtti_to_mlds__Initializer_32, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_46_46, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_34);
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_6_p_0_3(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv2_Initializer_8;

    ml_backend__rtti_to_mlds__conv2_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_Initializer_8));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_6_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_12;

    ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_12);
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_12));
  }
}

static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_6_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

    ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    return ml_backend__rtti_to_mlds__succeeded;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_6_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
  MR_Word ml_backend__rtti_to_mlds__Target_8,
  MR_Word ml_backend__rtti_to_mlds__PTIRttiDatas_9,
  MR_Word * ml_backend__rtti_to_mlds__Initializer_10,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_20_20 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
    MR_Word ml_backend__rtti_to_mlds__RealRttiDatas_12;
    MR_Word ml_backend__rtti_to_mlds__ModuleName_13;
    MR_Word ml_backend__rtti_to_mlds__Var_17;
    MR_Word ml_backend__rtti_to_mlds__Var_29;
    MR_Box ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_15;

    ml_backend__rtti_to_mlds__RealRttiDatas_12 = mercury__list__filter_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[5], ml_backend__rtti_to_mlds__PTIRttiDatas_9);
    {
      ml_backend__rtti_to_mlds__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_17, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_6_p_0_2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_17, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_7));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_17, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Target_8));
    }
    mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__Var_17, ml_backend__rtti_to_mlds__RealRttiDatas_12, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14)), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_15);
    *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15 = ((MR_Word) ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_15);
    hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_13);
    {
      ml_backend__rtti_to_mlds__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_29, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_29, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_6_p_0_3));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_29, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_29, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_13));
    }
    *ml_backend__rtti_to_mlds__Initializer_10 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, ml_backend__rtti_to_mlds__Var_29, ml_backend__rtti_to_mlds__PTIRttiDatas_9);
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0_3(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv6_Initializer_8;

    ml_backend__rtti_to_mlds__conv6_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv6_Initializer_8));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0_2(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_5,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_6)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv3_RttiId_14;
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Counter_27;
    MR_Word ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_29;

    ml_backend__rtti_to_mlds__gen_tc_constraint_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv3_RttiId_14, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_3), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Counter_27, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_5), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_29);
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv3_RttiId_14));
    *ml_backend__rtti_to_mlds__wrapper_arg_4 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Counter_27));
    *ml_backend__rtti_to_mlds__wrapper_arg_6 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_29));
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_RttiId_8;

    ml_backend__rtti_to_mlds__make_decl_super_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_RttiId_8);
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_RttiId_8));
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_8,
  MR_Word ml_backend__rtti_to_mlds__Target_9,
  MR_Word ml_backend__rtti_to_mlds__TCDecl_10,
  MR_Word ml_backend__rtti_to_mlds__Name_11,
  MR_Word ml_backend__rtti_to_mlds__RttiId_12,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_51,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52)
{
  {
    MR_Word ml_backend__rtti_to_mlds__TCId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCDecl_10, (MR_Integer) 0)));
    MR_Integer ml_backend__rtti_to_mlds__Version_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCDecl_10, (MR_Integer) 1)));
    MR_Word ml_backend__rtti_to_mlds__Supers_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCDecl_10, (MR_Integer) 2)));
    MR_Word ml_backend__rtti_to_mlds__TCName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCId_14, (MR_Integer) 0)));
    MR_Word ml_backend__rtti_to_mlds__TVarNames_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCId_14, (MR_Integer) 1)));
    MR_Word ml_backend__rtti_to_mlds__MethodIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCId_14, (MR_Integer) 2)));
    MR_Word ml_backend__rtti_to_mlds__ModuleSymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_17, (MR_Integer) 0)));
    MR_String ml_backend__rtti_to_mlds__ClassName_21 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_17, (MR_Integer) 1)));
    MR_Integer ml_backend__rtti_to_mlds__Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_17, (MR_Integer) 2)));
    MR_Word ml_backend__rtti_to_mlds__ModuleName_23;
    MR_Word ml_backend__rtti_to_mlds__TVarNamesRttiId_24;
    MR_Word ml_backend__rtti_to_mlds__TVarNamesInitializer_26;
    MR_Word ml_backend__rtti_to_mlds__MethodIdsRttiId_29;
    MR_Word ml_backend__rtti_to_mlds__MethodIdsInitializer_31;
    MR_Word ml_backend__rtti_to_mlds__TCIdRttiId_34;
    MR_String ml_backend__rtti_to_mlds__ModuleSymNameStr_35;
    MR_Integer ml_backend__rtti_to_mlds__NumTVars_36;
    MR_Integer ml_backend__rtti_to_mlds__NumMethods_37;
    MR_Word ml_backend__rtti_to_mlds__TCIdInitializer_38;
    MR_Word ml_backend__rtti_to_mlds__SupersInitType_47;
    MR_Word ml_backend__rtti_to_mlds__SupersInitializer_48;
    MR_Integer ml_backend__rtti_to_mlds__NumSupers_49;
    MR_Word ml_backend__rtti_to_mlds__Initializer_50;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_57_57;
    MR_Word ml_backend__rtti_to_mlds__Var_60;
    MR_Word ml_backend__rtti_to_mlds__Var_61;
    MR_Word ml_backend__rtti_to_mlds__Var_62;
    MR_Word ml_backend__rtti_to_mlds__Var_63;
    MR_Word ml_backend__rtti_to_mlds__Var_64;
    MR_Word ml_backend__rtti_to_mlds__Var_65;
    MR_Word ml_backend__rtti_to_mlds__Var_66;
    MR_Word ml_backend__rtti_to_mlds__Var_67;
    MR_Word ml_backend__rtti_to_mlds__Var_68;
    MR_Word ml_backend__rtti_to_mlds__Var_69;
    MR_Word ml_backend__rtti_to_mlds__Var_70;
    MR_Word ml_backend__rtti_to_mlds__Var_71;
    MR_Word ml_backend__rtti_to_mlds__Var_72;
    MR_Word ml_backend__rtti_to_mlds__Var_73;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_75_75;
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_83_83;
    MR_Word ml_backend__rtti_to_mlds__Var_84;
    MR_Word ml_backend__rtti_to_mlds__Var_85;
    MR_Word ml_backend__rtti_to_mlds__Var_86;
    MR_Word ml_backend__rtti_to_mlds__Var_87;
    MR_Word ml_backend__rtti_to_mlds__Var_88;
    MR_Word ml_backend__rtti_to_mlds__Var_89;
    MR_Word ml_backend__rtti_to_mlds__Var_90;
    MR_Word ml_backend__rtti_to_mlds__Var_91;
    MR_Word ml_backend__rtti_to_mlds__Var_92;
    MR_Word ml_backend__rtti_to_mlds__Var_93;

    hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_8, &ml_backend__rtti_to_mlds__ModuleName_23);
    {
      ml_backend__rtti_to_mlds__TVarNamesRttiId_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TVarNamesRttiId_24, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_17));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TVarNamesRttiId_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
    }
    if ((ml_backend__rtti_to_mlds__TVarNames_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word ml_backend__rtti_to_mlds__TVarNamesInitType_25;
      MR_Word ml_backend__rtti_to_mlds__Var_55;

      {
        ml_backend__rtti_to_mlds__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_55, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TVarNamesRttiId_24));
      }
      {
        ml_backend__rtti_to_mlds__TVarNamesInitType_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TVarNamesInitType_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TVarNamesInitType_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_55));
      }
      ml_backend__rtti_to_mlds__TVarNamesInitializer_26 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__TVarNamesInitType_25);
      ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_51;
    }
    else
    {
      ml_backend__rtti_to_mlds__gen_tc_id_var_names_4_p_0(ml_backend__rtti_to_mlds__TVarNamesRttiId_24, ml_backend__rtti_to_mlds__TVarNames_18, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_51, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54);
      ml_backend__rtti_to_mlds__TVarNamesInitializer_26 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ml_backend__rtti_to_mlds__ModuleName_23, ml_backend__rtti_to_mlds__TVarNamesRttiId_24);
    }
    {
      ml_backend__rtti_to_mlds__MethodIdsRttiId_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__MethodIdsRttiId_29, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_17));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__MethodIdsRttiId_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
    }
    if ((ml_backend__rtti_to_mlds__MethodIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word ml_backend__rtti_to_mlds__MethodIdsInitType_30;
      MR_Word ml_backend__rtti_to_mlds__Var_58;

      {
        ml_backend__rtti_to_mlds__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_58, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MethodIdsRttiId_29));
      }
      {
        ml_backend__rtti_to_mlds__MethodIdsInitType_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MethodIdsInitType_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MethodIdsInitType_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_58));
      }
      ml_backend__rtti_to_mlds__MethodIdsInitializer_31 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__MethodIdsInitType_30);
      ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_57_57 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54;
    }
    else
    {
      ml_backend__rtti_to_mlds__gen_tc_id_method_ids_5_p_0(ml_backend__rtti_to_mlds__MethodIdsRttiId_29, ml_backend__rtti_to_mlds__TCName_17, ml_backend__rtti_to_mlds__MethodIds_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_57_57);
      ml_backend__rtti_to_mlds__MethodIdsInitializer_31 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ml_backend__rtti_to_mlds__ModuleName_23, ml_backend__rtti_to_mlds__MethodIdsRttiId_29);
    }
    {
      ml_backend__rtti_to_mlds__TCIdRttiId_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCIdRttiId_34, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_17));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCIdRttiId_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    ml_backend__rtti_to_mlds__ModuleSymNameStr_35 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ml_backend__rtti_to_mlds__ModuleSymName_20);
    mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__TVarNames_18, &ml_backend__rtti_to_mlds__NumTVars_36);
    mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0, ml_backend__rtti_to_mlds__MethodIds_19, &ml_backend__rtti_to_mlds__NumMethods_37);
    {
      ml_backend__rtti_to_mlds__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_61, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCIdRttiId_34));
    }
    {
      ml_backend__rtti_to_mlds__Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_60, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_61));
    }
    ml_backend__rtti_to_mlds__Var_63 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__ModuleSymNameStr_35);
    ml_backend__rtti_to_mlds__Var_65 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__ClassName_21);
    ml_backend__rtti_to_mlds__Var_67 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Arity_22);
    ml_backend__rtti_to_mlds__Var_69 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumTVars_36);
    ml_backend__rtti_to_mlds__Var_71 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumMethods_37);
    {
      ml_backend__rtti_to_mlds__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_73, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MethodIdsInitializer_31));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__rtti_to_mlds__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_72, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TVarNamesInitializer_26));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_72, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_73));
    }
    {
      ml_backend__rtti_to_mlds__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_70, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_71));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_70, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_72));
    }
    {
      ml_backend__rtti_to_mlds__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_68, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_69));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_68, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_70));
    }
    {
      ml_backend__rtti_to_mlds__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_66, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_67));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_66, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_68));
    }
    {
      ml_backend__rtti_to_mlds__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_64, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_65));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_64, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_66));
    }
    {
      ml_backend__rtti_to_mlds__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_62, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_63));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_62, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_64));
    }
    {
      ml_backend__rtti_to_mlds__TCIdInitializer_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TCIdInitializer_38, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_60));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TCIdInitializer_38, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_62));
    }
    ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(ml_backend__rtti_to_mlds__TCIdRttiId_34, ml_backend__rtti_to_mlds__TCIdInitializer_38, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_57_57, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_75_75);
    if ((ml_backend__rtti_to_mlds__Supers_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_83_83 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_75_75;
    else
    {
      MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_108_108;
      MR_Word ml_backend__rtti_to_mlds__SuperRttiIds_41;
      MR_Word ml_backend__rtti_to_mlds__SuperArrayRttiId_44;
      MR_Word ml_backend__rtti_to_mlds__ElementType_45;
      MR_Word ml_backend__rtti_to_mlds__SuperArrayInitializer_46;
      MR_Word ml_backend__rtti_to_mlds__Var_76;
      MR_Word ml_backend__rtti_to_mlds__Var_77;
      MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_78_78;
      MR_Word ml_backend__rtti_to_mlds__Var_79;
      MR_Word ml_backend__rtti_to_mlds__Var_81;
      MR_Word ml_backend__rtti_to_mlds__Var_82;
      MR_Word ml_backend__rtti_to_mlds__Var_42;
      MR_Box ml_backend__rtti_to_mlds__conv5_Var_42;
      MR_Box ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_78_78;

      {
        ml_backend__rtti_to_mlds__Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_79, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_79, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0_1));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_79, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_17));
      }
      {
        ml_backend__rtti_to_mlds__Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_76, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_76, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0_2));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_76, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_8));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_76, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Target_9));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_76, 5) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_79));
      }
      ml_backend__rtti_to_mlds__Var_77 = mercury__counter__init_1_f_0((MR_Integer) 1);
      ml_backend__rtti_to_mlds__TypeCtorInfo_108_108 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0;
      mercury__list__map_foldl2_7_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, ml_backend__rtti_to_mlds__TypeCtorInfo_108_108, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__Var_76, ml_backend__rtti_to_mlds__Supers_16, &ml_backend__rtti_to_mlds__SuperRttiIds_41, ((MR_Box) (ml_backend__rtti_to_mlds__Var_77)), &ml_backend__rtti_to_mlds__conv5_Var_42, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_75_75)), &ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_78_78);
      ml_backend__rtti_to_mlds__Var_42 = ((MR_Word) ml_backend__rtti_to_mlds__conv5_Var_42);
      ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_78_78 = ((MR_Word) ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_78_78);
      {
        ml_backend__rtti_to_mlds__SuperArrayRttiId_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__SuperArrayRttiId_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_17));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__SuperArrayRttiId_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      }
      {
        ml_backend__rtti_to_mlds__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_81, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__SuperArrayRttiId_44));
      }
      {
        ml_backend__rtti_to_mlds__ElementType_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ElementType_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ElementType_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_81));
      }
      {
        ml_backend__rtti_to_mlds__Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_82, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[1]));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_82, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_decl_defn_7_p_0_3));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_82, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ElementType_45));
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_82, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_23));
      }
      ml_backend__rtti_to_mlds__SuperArrayInitializer_46 = ml_backend__ml_util__gen_init_array_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_108_108, ml_backend__rtti_to_mlds__Var_82, ml_backend__rtti_to_mlds__SuperRttiIds_41);
      ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(ml_backend__rtti_to_mlds__SuperArrayRttiId_44, ml_backend__rtti_to_mlds__SuperArrayInitializer_46, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_78_78, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_83_83);
    }
    {
      ml_backend__rtti_to_mlds__Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_84, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MethodIdsRttiId_29));
    }
    {
      ml_backend__rtti_to_mlds__SupersInitType_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__SupersInitType_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__SupersInitType_47, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_84));
    }
    ml_backend__rtti_to_mlds__SupersInitializer_48 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__SupersInitType_47);
    mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, ml_backend__rtti_to_mlds__Supers_16, &ml_backend__rtti_to_mlds__NumSupers_49);
    {
      ml_backend__rtti_to_mlds__Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_86, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_12));
    }
    {
      ml_backend__rtti_to_mlds__Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_85, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_86));
    }
    ml_backend__rtti_to_mlds__Var_88 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ml_backend__rtti_to_mlds__ModuleName_23, ml_backend__rtti_to_mlds__TCIdRttiId_34);
    ml_backend__rtti_to_mlds__Var_90 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Version_15);
    ml_backend__rtti_to_mlds__Var_92 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumSupers_49);
    {
      ml_backend__rtti_to_mlds__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_93, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__SupersInitializer_48));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__rtti_to_mlds__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_91, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_92));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_91, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_93));
    }
    {
      ml_backend__rtti_to_mlds__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_89, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_90));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_89, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_91));
    }
    {
      ml_backend__rtti_to_mlds__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_87, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_88));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Var_87, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_89));
    }
    {
      ml_backend__rtti_to_mlds__Initializer_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_50, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_85));
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_50, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_87));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_11, ml_backend__rtti_to_mlds__RttiId_12, ml_backend__rtti_to_mlds__Initializer_50, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_83_83, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52);
  }
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleName_1,
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_2)
{
  {
    MR_Word ml_backend__rtti_to_mlds__HeadVar__3_3;

    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ml_backend__rtti_to_mlds__RttiName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__HeadVar__2_2, (MR_Integer) 1)));

      ml_backend__rtti_to_mlds__HeadVar__3_3 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_1, ml_backend__rtti_to_mlds__RttiTypeCtor_5, ml_backend__rtti_to_mlds__RttiName_6);
    }
    else
    {
      MR_Word ml_backend__rtti_to_mlds__TCName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ml_backend__rtti_to_mlds__TCRttiName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ml_backend__rtti_to_mlds__Var_13;
      MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_20;
      MR_Word ml_backend__rtti_to_mlds__Var_27;

      switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ml_backend__rtti_to_mlds__TCRttiName_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__rtti_to_mlds__ModuleName_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
                MR_String ml_backend__rtti_to_mlds___ClassName_54 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
                MR_Integer ml_backend__rtti_to_mlds___Arity_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

                ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_53);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__rtti_to_mlds__ModuleName_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
                MR_String ml_backend__rtti_to_mlds___ClassName_64 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
                MR_Integer ml_backend__rtti_to_mlds___Arity_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

                ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_63);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ml_backend__rtti_to_mlds__ModuleName_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
                MR_String ml_backend__rtti_to_mlds___ClassName_59 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
                MR_Integer ml_backend__rtti_to_mlds___Arity_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

                ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_58);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ml_backend__rtti_to_mlds__ModuleName_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
                MR_String ml_backend__rtti_to_mlds___ClassName_39 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
                MR_Integer ml_backend__rtti_to_mlds___Arity_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

                ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_38);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ml_backend__rtti_to_mlds__ModuleName_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
                MR_String ml_backend__rtti_to_mlds___ClassName_49 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
                MR_Integer ml_backend__rtti_to_mlds___Arity_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

                ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_48);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__rtti_to_mlds__InstanceModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCRttiName_9, (MR_Integer) 0)));
            MR_String ml_backend__rtti_to_mlds__Var_19 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCRttiName_9, (MR_Integer) 1)));

            ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__InstanceModuleName_18);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ml_backend__rtti_to_mlds__ModuleName_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
            MR_String ml_backend__rtti_to_mlds___ClassName_44 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
            MR_Integer ml_backend__rtti_to_mlds___Arity_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

            ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_43);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_9, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__rtti_to_mlds__ModuleName_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
                MR_String ml_backend__rtti_to_mlds___ClassName_69 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
                MR_Integer ml_backend__rtti_to_mlds___Arity_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

                ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_68);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__rtti_to_mlds__ModuleName_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
                MR_String ml_backend__rtti_to_mlds___ClassName_89 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
                MR_Integer ml_backend__rtti_to_mlds___Arity_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

                ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_88);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ml_backend__rtti_to_mlds__ModuleName_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
                MR_String ml_backend__rtti_to_mlds___ClassName_74 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
                MR_Integer ml_backend__rtti_to_mlds___Arity_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

                ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_73);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ml_backend__rtti_to_mlds__ModuleName_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
                MR_String ml_backend__rtti_to_mlds___ClassName_79 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
                MR_Integer ml_backend__rtti_to_mlds___Arity_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

                ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_78);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ml_backend__rtti_to_mlds__ModuleName_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
                MR_String ml_backend__rtti_to_mlds___ClassName_84 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
                MR_Integer ml_backend__rtti_to_mlds___Arity_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

                ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_83);
              }
              break;
          }
          break;
      }
      {
        ml_backend__rtti_to_mlds__Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_20));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_27, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__HeadVar__2_2));
      }
      {
        ml_backend__rtti_to_mlds__Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_13, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_27));
      }
      {
        ml_backend__rtti_to_mlds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_13));
      }
    }
    return ml_backend__rtti_to_mlds__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleName_5,
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_6,
  MR_Word ml_backend__rtti_to_mlds__RttiName_7)
{
  {
    MR_bool ml_backend__rtti_to_mlds__succeeded;
    MR_Word ml_backend__rtti_to_mlds__HeadVar__4_4;
    MR_Word ml_backend__rtti_to_mlds__Var_8;
    MR_Word ml_backend__rtti_to_mlds__ModuleName_23;
    MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_24;
    MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_28;
    MR_Word ml_backend__rtti_to_mlds__RttiId_29;
    MR_Word ml_backend__rtti_to_mlds__Var_31;

    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_7, (MR_Integer) 0)))) == (MR_Integer) 12))))
    {
      MR_Word ml_backend__rtti_to_mlds__PseudoTypeInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_7, (MR_Integer) 1)));

      if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_18)) == (MR_mktag((MR_Integer) 1))))
        ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
      else
      if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_18)) == (MR_mktag((MR_Integer) 2))))
        ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
      else
        ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
    }
    else
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_7, (MR_Integer) 0)))) == (MR_Integer) 11))))
    {
      MR_Word ml_backend__rtti_to_mlds__TypeInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_7, (MR_Integer) 1)));

      if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_13)) == (MR_mktag((MR_Integer) 1))))
        ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
      else
      if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_13)) == (MR_mktag((MR_Integer) 2))))
        ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
      else
        ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
    }
    else
      ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
    if (ml_backend__rtti_to_mlds__succeeded)
    {
      ml_backend__rtti_to_mlds__ModuleName_23 = ml_backend__rtti_to_mlds__ModuleName_5;
      ml_backend__rtti_to_mlds__RttiTypeCtor_24 = ml_backend__rtti_to_mlds__RttiTypeCtor_6;
    }
    else
    {
      MR_Word ml_backend__rtti_to_mlds__RttiModuleName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_6, (MR_Integer) 0)));
      MR_String ml_backend__rtti_to_mlds__RttiTypeName_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_6, (MR_Integer) 1)));
      MR_Integer ml_backend__rtti_to_mlds__RttiTypeArity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_6, (MR_Integer) 2)));
      MR_String ml_backend__rtti_to_mlds__Var_30;

      ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiModuleName_25)) == (MR_mktag((MR_Integer) 0)));
      if (ml_backend__rtti_to_mlds__succeeded)
      {
        ml_backend__rtti_to_mlds__Var_30 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiModuleName_25, (MR_Integer) 0)));
        ml_backend__rtti_to_mlds__succeeded = (strcmp(ml_backend__rtti_to_mlds__Var_30, (MR_String) "") == 0);
      }
      if (ml_backend__rtti_to_mlds__succeeded)
      {
        ml_backend__rtti_to_mlds__ModuleName_23 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        ml_backend__rtti_to_mlds__RttiTypeCtor_24 = ml_backend__rtti_to_mlds__RttiTypeCtor_6;
      }
      else
      {
        ml_backend__rtti_to_mlds__ModuleName_23 = ml_backend__rtti_to_mlds__RttiModuleName_25;
        ml_backend__rtti_to_mlds__RttiTypeCtor_24 = ml_backend__rtti_to_mlds__RttiTypeCtor_6;
      }
    }
    ml_backend__rtti_to_mlds__MLDS_ModuleName_28 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_23);
    {
      ml_backend__rtti_to_mlds__RttiId_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_29, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_24));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_29, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_7));
    }
    {
      ml_backend__rtti_to_mlds__Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_31, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_28));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_31, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_29));
    }
    {
      ml_backend__rtti_to_mlds__Var_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Var_8, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_31));
    }
    {
      ml_backend__rtti_to_mlds__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__4_4, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_8));
    }
    return ml_backend__rtti_to_mlds__HeadVar__4_4;
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_ids_5_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_Initializer_6;

    ml_backend__rtti_to_mlds__conv0_Initializer_6 = ml_backend__rtti_to_mlds__gen_tc_id_method_id_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_Initializer_6));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_ids_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__RttiId_6,
  MR_Word ml_backend__rtti_to_mlds__TCName_7,
  MR_Word ml_backend__rtti_to_mlds__MethodIds_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12)
{
  {
    MR_Word ml_backend__rtti_to_mlds__Initializer_10;
    MR_Word ml_backend__rtti_to_mlds__Var_13;
    MR_Word ml_backend__rtti_to_mlds__Name_23;

    {
      ml_backend__rtti_to_mlds__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_13, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_13, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_tc_id_method_ids_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_13, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_7));
    }
    ml_backend__rtti_to_mlds__Initializer_10 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0, ml_backend__rtti_to_mlds__Var_13, ml_backend__rtti_to_mlds__MethodIds_8);
    {
      ml_backend__rtti_to_mlds__Name_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_23, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_6));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_23, ml_backend__rtti_to_mlds__RttiId_6, ml_backend__rtti_to_mlds__Initializer_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12);
  }
}

static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_var_names_4_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
{
  {
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

    ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = ml_backend__ml_util__gen_init_string_1_f_0(((MR_String) ml_backend__rtti_to_mlds__wrapper_arg_1));
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_var_names_4_p_0(
  MR_Word ml_backend__rtti_to_mlds__RttiId_5,
  MR_Word ml_backend__rtti_to_mlds__Names_6,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10)
{
  {
    MR_Word ml_backend__rtti_to_mlds__Initializer_8;
    MR_Word ml_backend__rtti_to_mlds__Name_21;

    ml_backend__rtti_to_mlds__Initializer_8 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[4], ml_backend__rtti_to_mlds__Names_6);
    {
      ml_backend__rtti_to_mlds__Name_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_21, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_5));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_21, ml_backend__rtti_to_mlds__RttiId_5, ml_backend__rtti_to_mlds__Initializer_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10);
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(
  MR_Word ml_backend__rtti_to_mlds__RttiId_5,
  MR_Word ml_backend__rtti_to_mlds__Initializer_6,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10)
{
  {
    MR_Word ml_backend__rtti_to_mlds__Name_8;

    {
      ml_backend__rtti_to_mlds__Name_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Name_8, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_5));
    }
    ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_8, ml_backend__rtti_to_mlds__RttiId_5, ml_backend__rtti_to_mlds__Initializer_6, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10);
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__Name_6,
  MR_Word ml_backend__rtti_to_mlds__RttiId_7,
  MR_Word ml_backend__rtti_to_mlds__Initializer_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_17,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18)
{
  {
    MR_Word ml_backend__rtti_to_mlds__Context_10;
    MR_Word ml_backend__rtti_to_mlds__Exported_11;
    MR_Word ml_backend__rtti_to_mlds__Access_12;
    MR_Word ml_backend__rtti_to_mlds__Flags_13;
    MR_Word ml_backend__rtti_to_mlds__MLDS_Type_15;
    MR_Word ml_backend__rtti_to_mlds__DataDefn_16;
    MR_Word ml_backend__rtti_to_mlds__Var_19;

    mercury__term__context_init_1_p_0(&ml_backend__rtti_to_mlds__Context_10);
    ml_backend__rtti_to_mlds__Exported_11 = backend_libs__rtti__rtti_id_is_exported_1_f_0(ml_backend__rtti_to_mlds__RttiId_7);
    switch (ml_backend__rtti_to_mlds__Exported_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__rtti_to_mlds__Access_12 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        ml_backend__rtti_to_mlds__Access_12 = (MR_Integer) 1;
        break;
    }
    {
      ml_backend__rtti_to_mlds__Flags_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Flags_13, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Access_12));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Flags_13, 1) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      ml_backend__rtti_to_mlds__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_19, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_7));
    }
    {
      ml_backend__rtti_to_mlds__MLDS_Type_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_Type_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_Type_15, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Var_19));
    }
    {
      ml_backend__rtti_to_mlds__DataDefn_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataDefn_16, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Name_6));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataDefn_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Context_10));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataDefn_16, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__Flags_13));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataDefn_16, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_Type_15));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataDefn_16, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Initializer_8));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataDefn_16, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    ml_backend__ml_global_data__ml_global_data_add_rtti_defn_3_p_0(ml_backend__rtti_to_mlds__DataDefn_16, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18);
  }
}

static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_5_p_0_1(
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
{
  {
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_12;

    ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_12);
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_12));
  }
}

void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_5_p_0(
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
  MR_Word ml_backend__rtti_to_mlds__Target_7,
  MR_Word ml_backend__rtti_to_mlds__RttiDatas_8,
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_10,
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_11)
{
  {
    MR_Word ml_backend__rtti_to_mlds__Var_12;
    MR_Box ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_11;

    {
      ml_backend__rtti_to_mlds__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_12, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_12, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_12, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_6));
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Var_12, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Target_7));
    }
    mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__Var_12, ml_backend__rtti_to_mlds__RttiDatas_8, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_10)), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_11);
    *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_11 = ((MR_Word) ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_11);
  }
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

/* :- end_module ml_backend.rtti_to_mlds. */
