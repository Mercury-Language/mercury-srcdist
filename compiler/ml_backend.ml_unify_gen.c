/*
** Automatically generated from `ml_unify_gen.m'
** by the Mercury compiler,
** version rotd-2018-01-15
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


// :- module ml_backend.ml_unify_gen.
// :- implementation.

/*
INIT mercury__ml_backend__ml_unify_gen__init
ENDINIT
*/

#include "ml_backend.ml_unify_gen.mih"


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
#include "backend_libs.arg_pack.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_class_info.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
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
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_type_gen.mih"
#include "ml_backend.mlds.mih"
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
#include "parse_tree.prog_out.mih"
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



struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0_s {
  MR_bool ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__succeeded;
  MR_Word ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__TypeCtor_35;
  MR_Word ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__Ctors_44;
  MR_Word ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__TagValues_45;
  jmp_buf ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__commit_0;
  MR_Word ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__Ctor_75;
  MR_Box ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__conv0_Ctor_75;
  jmp_buf ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__commit_1;
  MR_Word ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__Ctor_76;
  MR_Box ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__conv1_Ctor_76;
};


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_unify_gen__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_rval_0ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_rval_0ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_field_offset_0[1];

static const MR_NotagFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__notag_functor_desc_field_offset_0;

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_ml_const_struct_info_0_0[3];

static const MR_ConstString ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_names_ml_const_struct_info_0_0[3];

static const MR_DuArgLocn ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_locns_ml_const_struct_info_0_0[3];

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_ml_const_struct_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_ml_const_struct_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_ml_const_struct_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_ml_const_struct_info_0[1];

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_ml_const_struct_info_0[1];

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_take_addr_info_0_0[4];

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_take_addr_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_take_addr_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_take_addr_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_take_addr_info_0[1];

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_take_addr_info_0[1];

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__3040__1_1_f_0(
  MR_Word LambdaHeadVar__1_81);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_static_compound__2997__1_2_p_0(
  MR_Integer NumExtraArgs_35,
  MR_Integer HeadVar__2_68);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__2992__1_1_f_0(
  MR_Word LambdaHeadVar__1_61);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_ground_term_conjunct_compound__2726__1_1_f_0(
  MR_Word LambdaHeadVar__1_91);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_compound__2688__1_2_p_0(
  MR_Integer NumExtraArgs_43,
  MR_Integer HeadVar__2_78);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_ground_term_conjunct_compound__2683__1_1_f_0(
  MR_Word LambdaHeadVar__1_71);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_ground_term_conjunct_compound__2682__1_1_f_0(
  MR_Word LambdaHeadVar__1_68);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2571__6_2_p_0(
  MR_Word Args_25,
  MR_Word HeadVar__2_183);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2571__5_2_p_0(
  MR_Word Args_25,
  MR_Word HeadVar__2_170);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2571__4_2_p_0(
  MR_Word Args_25,
  MR_Word HeadVar__2_159);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2571__3_2_p_0(
  MR_Word Args_25,
  MR_Word HeadVar__2_148);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2571__2_2_p_0(
  MR_Word Args_25,
  MR_Word HeadVar__2_137);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2571__1_2_p_0(
  MR_Word Args_25,
  MR_Word HeadVar__2_115);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_tag_test_rval__2209__1_6_f_0(
  MR_Word ModuleInfo_7,
  MR_Word Target_8,
  MR_Word Type_10,
  MR_Word Rval_11,
  MR_Word LambdaHeadVar__1_63,
  MR_Word LambdaHeadVar__2_64);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_field_names_and_types__1550__1_2_f_0(
  MR_Word Context_11,
  MR_Word LambdaHeadVar__1_26);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_extra_arg_assign__1370__1_2_p_0(
  MR_Word HighLevelData_57,
  MR_Word HeadVar__2_67);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args_2__1314__1_2_p_0(
  MR_Word ConsArgWidth_48,
  MR_Word HeadVar__2_64);

static void MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__constructor_arg_types__1076__1_3_p_0(
  MR_Word LambdaHeadVar__1_32,
  MR_Word * LambdaHeadVar__2_33,
  MR_Word * LambdaHeadVar__3_34);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__832__1_2_p_0(
  MR_Integer PrimaryTag_54,
  MR_Integer LambdaHeadVar__1_85);

static void MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__815__1_3_p_0(
  MR_Word STATE_VARIABLE_Info_0_77,
  MR_Word LambdaHeadVar__1_82,
  MR_Integer * LambdaHeadVar__2_83);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_statically__757__1_1_f_0(
  MR_Word LambdaHeadVar__1_74);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__595__1_2_p_0(
  MR_Word TakeAddr_25,
  MR_Word HeadVar__2_45);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__204__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_74);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__236__1_2_p_0(
  MR_Word MaybeSizeProfInfo_37,
  MR_Word HeadVar__2_69);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__224__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_65);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__172__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_86);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____take_addr_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____take_addr_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____ml_const_struct_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____ml_const_struct_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____field_offset_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____field_offset_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_shift_combine_rval_type_8_p_0(
  MR_Word ArgA_9,
  MR_Integer Shift_10,
  MR_Word MaybeArgB_11,
  MR_Word * ArgC_12);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_shift_combine_rval_8_p_0(
  MR_Word RvalA_9,
  MR_Integer Shift_10,
  MR_Word MaybeRvalB_11,
  MR_Word * RvalC_12);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_6_p_0(
  MR_Word Info_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ConstStructMap_0_19,
  MR_Word * STATE_VARIABLE_ConstStructMap_20,
  MR_Word STATE_VARIABLE_GlobalData_0_21,
  MR_Word * STATE_VARIABLE_GlobalData_22);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_tag_11_p_0(
  MR_Word Info_12,
  MR_Integer ConstNum_13,
  MR_Word Type_14,
  MR_Word MLDS_Type_15,
  MR_Word ConsId_16,
  MR_Word ConsTag_17,
  MR_Word Args_18,
  MR_Word STATE_VARIABLE_ConstStructMap_0_67,
  MR_Word * STATE_VARIABLE_ConstStructMap_68,
  MR_Word STATE_VARIABLE_GlobalData_0_69,
  MR_Word * STATE_VARIABLE_GlobalData_70);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_arg_7_p_0(
  MR_Word Info_8,
  MR_Word ConstStructMap_9,
  MR_Word ConstArg_10,
  MR_Word DoubleWidth_11,
  MR_Word * Rval_12,
  MR_Word STATE_VARIABLE_GlobalData_0_23,
  MR_Word * STATE_VARIABLE_GlobalData_24);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_2(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(
  MR_Word Info_14,
  MR_Integer ConstNum_15,
  MR_Word Type_16,
  MR_Word MLDS_Type_17,
  MR_Word ConsId_18,
  MR_Word ConsTag_19,
  MR_Integer Ptag_20,
  MR_Word ExtraInitializers_21,
  MR_Word Args_22,
  MR_Word STATE_VARIABLE_ConstStructMap_0_56,
  MR_Word * STATE_VARIABLE_ConstStructMap_57,
  MR_Word STATE_VARIABLE_GlobalData_0_58,
  MR_Word * STATE_VARIABLE_GlobalData_59);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_args_6_p_0(
  MR_Word Info_1,
  MR_Word ConstStructMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6);

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_50_93_95_48_6_p_0(
  MR_Word ConsTag_9,
  MR_Word Type_10,
  MR_Word MLDS_Type_11,
  MR_Word * Rval_12);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_info_lookup_const_var_rval_3_p_0(
  MR_Word Info_4,
  MR_Word Var_5,
  MR_Word * Rval_6);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_structs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjuncts_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Target_2,
  MR_Word HighLevelData_3,
  MR_Word VarTypes_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_GlobalData_0_6,
  MR_Word * STATE_VARIABLE_GlobalData_7,
  MR_Word STATE_VARIABLE_GroundTermMap_0_8,
  MR_Word * STATE_VARIABLE_GroundTermMap_9);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_6(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word Target_17,
  MR_Word HighLevelData_18,
  MR_Word VarTypes_19,
  MR_Word Var_20,
  MR_Word VarType_21,
  MR_Word MLDS_Type_22,
  MR_Word ConsId_23,
  MR_Word ConsTag_24,
  MR_Word Args_25,
  MR_Word Context_26,
  MR_Word STATE_VARIABLE_GlobalData_0_78,
  MR_Word * STATE_VARIABLE_GlobalData_79,
  MR_Word STATE_VARIABLE_GroundTermMap_0_80,
  MR_Word * STATE_VARIABLE_GroundTermMap_81);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__int_tag_to_mlds_rval_const_3_f_0(
  MR_Word Type_5,
  MR_Word MLDS_Type_6,
  MR_Word IntTag_7);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_3(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0(
  MR_Word ModuleInfo_18,
  MR_Word Target_19,
  MR_Word HighLevelData_20,
  MR_Word VarTypes_21,
  MR_Word Var_22,
  MR_Word VarType_23,
  MR_Word MLDS_Type_24,
  MR_Word ConsId_25,
  MR_Word ConsTag_26,
  MR_Integer Ptag_27,
  MR_Word ExtraInitializers_28,
  MR_Word Args_29,
  MR_Word Context_30,
  MR_Word STATE_VARIABLE_GlobalData_0_63,
  MR_Word * STATE_VARIABLE_GlobalData_64,
  MR_Word STATE_VARIABLE_GroundTermMap_0_65,
  MR_Word * STATE_VARIABLE_GroundTermMap_66);

static void MR_CALL 
ml_backend__ml_unify_gen__construct_ground_term_initializers_lld_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6,
  MR_Word STATE_VARIABLE_GroundTermMap_0_7,
  MR_Word * STATE_VARIABLE_GroundTermMap_8);

static void MR_CALL 
ml_backend__ml_unify_gen__construct_ground_term_initializers_hld_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Context_12,
  MR_Word Args_13,
  MR_Word ConsArgTypes_14,
  MR_Word ConsArgWidths_15,
  MR_Word * ArgRvals_16,
  MR_Word STATE_VARIABLE_GlobalData_0_27,
  MR_Word * STATE_VARIABLE_GlobalData_28,
  MR_Word STATE_VARIABLE_GroundTermMap_0_29,
  MR_Word * STATE_VARIABLE_GroundTermMap_30);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_semi_deconstruct_8_p_0(
  MR_Word Var_9,
  MR_Word ConsId_10,
  MR_Word Args_11,
  MR_Word ArgModes_12,
  MR_Word Context_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_tag_test_rval_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_tag_test_rval_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word Target_8,
  MR_Word Tag_9,
  MR_Word Type_10,
  MR_Word Rval_11);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_int_tag_test_rval_4_f_0(
  MR_Word IntTag_6,
  MR_Word Type_7,
  MR_Word ModuleInfo_8,
  MR_Word Rval_9);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_1(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_4(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_5(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_7(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_6(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_8(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_det_deconstruct_8_p_0(
  MR_Word Var_9,
  MR_Word ConsId_10,
  MR_Word Args_11,
  MR_Word Modes_12,
  MR_Word Context_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_det_deconstruct_tag_10_p_0(
  MR_Word Tag_11,
  MR_Word Type_12,
  MR_Word Var_13,
  MR_Word ConsId_14,
  MR_Word Args_15,
  MR_Word Modes_16,
  MR_Word Context_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_65,
  MR_Word * STATE_VARIABLE_Info_66);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_direct_arg_deconstruct_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ArgMode_11,
  MR_Integer Ptag_12,
  MR_Word ArgLval_13,
  MR_Word ArgType_14,
  MR_Word VarLval_15,
  MR_Word VarType_16,
  MR_Word Context_17,
  MR_Word * Stmts_18);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_args_14_p_0(
  MR_Word ConsId_15,
  MR_Word Args_16,
  MR_Word Modes_17,
  MR_Word ArgTypes_18,
  MR_Word Fields_19,
  MR_Word VarType_20,
  MR_Word VarLval_21,
  MR_Word Offset_22,
  MR_Integer ArgNum_23,
  MR_Word Tag_24,
  MR_Word Context_25,
  MR_Word * Stmts_26,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_args_2_15_p_0(
  MR_Word ConsId_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word VarType_6,
  MR_Word VarLval_7,
  MR_Word Offset_8,
  MR_Integer ArgNum_9,
  MR_Word Tag_10,
  MR_Word Context_11,
  MR_Word STATE_VARIABLE_Stmts_0_12,
  MR_Word * STATE_VARIABLE_Stmts_13,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_construct_10_p_0(
  MR_Word Var_11,
  MR_Word ConsId_12,
  MR_Word Args_13,
  MR_Word ArgModes_14,
  MR_Word TakeAddr_15,
  MR_Word HowToConstruct_16,
  MR_Word Context_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_construct_tag_12_p_0(
  MR_Word Tag_13,
  MR_Word Type_14,
  MR_Word Var_15,
  MR_Word ConsId_16,
  MR_Word Args_17,
  MR_Word ArgModes_18,
  MR_Word TakeAddr_19,
  MR_Word HowToConstruct_20,
  MR_Word Context_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_82,
  MR_Word * STATE_VARIABLE_Info_83);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_direct_arg_construct_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ArgMode_11,
  MR_Integer Ptag_12,
  MR_Word ArgLval_13,
  MR_Word ArgType_14,
  MR_Word VarLval_15,
  MR_Word VarType_16,
  MR_Word Context_17,
  MR_Word * Stmts_18);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(
  MR_Word Type_5,
  MR_Word Tag_6,
  MR_Word Rval_7);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_compound_13_p_0(
  MR_Word ConsId_14,
  MR_Integer Ptag_15,
  MR_Word MaybeStag_16,
  MR_Word UsesBaseClass_17,
  MR_Word Var_18,
  MR_Word ArgVars_19,
  MR_Word ArgModes_20,
  MR_Word TakeAddr_21,
  MR_Word HowToConstruct_22,
  MR_Word Context_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_20_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_20_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_20_p_0(
  MR_Word MaybeConsId_21,
  MR_Word MaybeCtorName_22,
  MR_Integer Tag_23,
  MR_Word MaybeTag_24,
  MR_Word ExplicitSecTag_25,
  MR_Word Var_26,
  MR_Word VarLval_27,
  MR_Word VarType_28,
  MR_Word MLDS_Type_29,
  MR_Word ExtraRvals_30,
  MR_Word ExtraTypes_31,
  MR_Word ArgVars_32,
  MR_Word ArgTypes_33,
  MR_Word ArgModes_34,
  MR_Word TakeAddr_35,
  MR_Word CellToReuse_36,
  MR_Word Context_37,
  MR_Word * Stmts_38,
  MR_Word STATE_VARIABLE_Info_0_77,
  MR_Word * STATE_VARIABLE_Info_78);

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_101_119_95_111_98_106_101_99_116_95_100_121_110_97_109_105_99_97_108_108_121_95_95_91_53_93_95_48_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_101_119_95_111_98_106_101_99_116_95_100_121_110_97_109_105_99_97_108_108_121_95_95_91_53_93_95_48_18_p_0(
  MR_Word MaybeConsId_19,
  MR_Word MaybeCtorName_20,
  MR_Word MaybeTag_21,
  MR_Word ExplicitSecTag_22,
  MR_Word VarLval_24,
  MR_Word VarType_25,
  MR_Word MLDS_Type_26,
  MR_Word ExtraRvals_27,
  MR_Word ExtraTypes_28,
  MR_Word ArgVars_29,
  MR_Word ArgTypes_30,
  MR_Word ArgModes_31,
  MR_Word TakeAddr_32,
  MR_Word Context_33,
  MR_Word * Stmts_34,
  MR_Word STATE_VARIABLE_Info_0_72,
  MR_Word * STATE_VARIABLE_Info_73);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_expand_double_word_rvals_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_15_p_0(
  MR_Word Vars_16,
  MR_Word Lvals_17,
  MR_Word ArgTypes_18,
  MR_Word ConsArgTypes_19,
  MR_Word ConsArgWidths_20,
  MR_Word UniModes_21,
  MR_Integer NumExtraArgs_22,
  MR_Word TakeAddr_23,
  MR_Word ModuleInfo_24,
  MR_Word HighLevelData_25,
  MR_Word * STATE_VARIABLE_Rvals_30,
  MR_Word * STATE_VARIABLE_MLDS_Types_31,
  MR_Word * STATE_VARIABLE_TakeAddrInfos_32,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_33,
  MR_Word * STATE_VARIABLE_MayUseAtomic_34);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_2_16_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_2_16_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word ConsArgWidths_5,
  MR_Word HeadVar__6_6,
  MR_Integer HeadVar__7_7,
  MR_Integer HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word HeadVar__10_10,
  MR_Word HeadVar__11_11,
  MR_Word * HeadVar__12_12,
  MR_Word * HeadVar__13_13,
  MR_Word * HeadVar__14_14,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_15,
  MR_Word * STATE_VARIABLE_MayUseAtomic_16);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_16_p_0(
  MR_Word ConsId_17,
  MR_Word Args_18,
  MR_Word Modes_19,
  MR_Word ArgTypes_20,
  MR_Word Fields_21,
  MR_Word TakeAddr_22,
  MR_Word VarType_23,
  MR_Word VarLval_24,
  MR_Word Offset_25,
  MR_Integer ArgNum_26,
  MR_Word Tag_27,
  MR_Word Context_28,
  MR_Word * Stmts_29,
  MR_Word * TakeAddrInfos_30,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_arg_15_p_0(
  MR_Word ConsId_16,
  MR_Word ArgVar_17,
  MR_Word Mode_18,
  MR_Word ArgType_19,
  MR_Word CtorArg_20,
  MR_Word VarType_21,
  MR_Word VarLval_22,
  MR_Word Offset_23,
  MR_Integer ArgNum_24,
  MR_Word Tag_25,
  MR_Word Context_26,
  MR_Word STATE_VARIABLE_Stmts_0_49,
  MR_Word * STATE_VARIABLE_Stmts_50,
  MR_Word STATE_VARIABLE_Info_0_51,
  MR_Word * STATE_VARIABLE_Info_52);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_field_id_6_f_0(
  MR_Word Target_8,
  MR_Word Type_9,
  MR_Word Tag_10,
  MR_String ConsName_11,
  MR_Integer ConsArity_12,
  MR_Word FieldName_13);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_sub_unify_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word HighLevelData_13,
  MR_Word ArgMode_14,
  MR_Word ArgLval_15,
  MR_Word ArgType_16,
  MR_Word FieldLval_17,
  MR_Word FieldType_18,
  MR_Word FieldWidth_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_Stmts_0_48,
  MR_Word * STATE_VARIABLE_Stmts_49);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(
  MR_Word Rval_4,
  MR_Integer Mask_5);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_bitwise_or_2_f_0(
  MR_Word RvalA_4,
  MR_Word RvalB_5);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_rshift_2_f_0(
  MR_Word Rval_4,
  MR_Integer Shift_5);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_lshift_2_f_0(
  MR_Word Rval0_4,
  MR_Integer Shift_5);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_field_offset_pair_3_p_0(
  MR_Word FieldLval_4,
  MR_Word * FieldLvalA_5,
  MR_Word * FieldLvalB_6);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(
  MR_Word CurArg_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word HighLevelData_7,
  MR_Word FieldType_8,
  MR_Word FieldWidth_9,
  MR_Word * BoxedFieldType_10);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_field_names_and_types_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_field_names_and_types_5_p_0(
  MR_Word Info_6,
  MR_Word Type_7,
  MR_Word ConsId_8,
  MR_Word ArgTypes_9,
  MR_Word * Fields_10);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_tag_offset_and_argnum_4_p_0(
  MR_Word Tag_5,
  MR_Integer * TagBits_6,
  MR_Word * Offset_7,
  MR_Integer * ArgNum_8);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word VarType_3,
  MR_Word VarLval_4,
  MR_Integer Offset_5,
  MR_Word ConsIdTag_6,
  MR_Word Context_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_mktag_1_f_0(
  MR_Integer Tag_3);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_field_take_address_assigns_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CellLval_2,
  MR_Word CellType_3,
  MR_Word MaybeTag_4,
  MR_Word Context_5,
  MR_Word Info_6,
  MR_Word * HeadVar__7_7);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0(
  MR_Word MaybeConsId_16,
  MR_Word MaybeCtorName_17,
  MR_Word MaybeTag_18,
  MR_Word Var_19,
  MR_Word VarLval_20,
  MR_Word VarType_21,
  MR_Word MLDS_Type_22,
  MR_Word ExtraRvals_23,
  MR_Word ExtraTypes_24,
  MR_Word ArgVars_25,
  MR_Word ArgTypes_26,
  MR_Word Context_27,
  MR_Word * Stmts_28,
  MR_Word STATE_VARIABLE_Info_0_61,
  MR_Word * STATE_VARIABLE_Info_62);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_box_extra_const_rval_list_lld_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_GlobalData_0_6,
  MR_Word * STATE_VARIABLE_GlobalData_7);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_box_const_rval_list_lld_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_box_or_unbox_const_rval_list_hld_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ArgTypes_10,
  MR_Word FieldTypes_11,
  MR_Word ArgRvals_12,
  MR_Word Context_13,
  MR_Word * FieldRvals_14,
  MR_Word STATE_VARIABLE_GlobalData_0_24,
  MR_Word * STATE_VARIABLE_GlobalData_25);

static void MR_CALL 
ml_backend__ml_unify_gen__get_maybe_cons_id_arg_types_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unify_gen__get_maybe_cons_id_arg_types_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word MaybeConsId_8,
  MR_Word ArgTypes_9,
  MR_Word Type_10,
  MR_Word * ConsArgTypes_11,
  MR_Word * ConsArgWidths_12);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__get_const_type_for_cons_id_5_f_0(
  MR_Word Target_7,
  MR_Word HighLevelData_8,
  MR_Word MLDS_Type_9,
  MR_Word UsesBaseClass_10,
  MR_Word MaybeConsId_11);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_constant_6_p_0(
  MR_Word Tag_7,
  MR_Word VarType_8,
  MR_Word MLDS_VarType_9,
  MR_Word * Rval_10,
  MR_Word STATE_VARIABLE_Info_0_55,
  MR_Word * STATE_VARIABLE_Info_56);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____field_offset_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____field_offset_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____ml_const_struct_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____ml_const_struct_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____take_addr_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____take_addr_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_1[25][2];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_2[14][3];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_3[10][1];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_4[5][6];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_5[1][8];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_6[2][11];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_7[10][5];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_8[1][10];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_9[1][9];




static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_1[25][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_3[2])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_3[3])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 20)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 6))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 8))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 7))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 9))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_2[14][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[0])),
    ((MR_Box) (ml_backend__ml_unify_gen__get_maybe_cons_id_arg_types_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_6[0])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[0])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_6[1])),
    ((MR_Box) (ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_101_119_95_111_98_106_101_99_116_95_100_121_110_97_109_105_99_97_108_108_121_95_95_91_53_93_95_48_18_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[7])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[8])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_6[0])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[0])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[8])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_6[0])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[0])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_3[10][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_4[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_6[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&ml_backend__ml_unify_gen__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_rval_0ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_7[10][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_8[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_9[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_ml_const_struct_info_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0,
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_unify_gen__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_rval_0ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_rval_0ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_unify_gen__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_rval_0ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0
  }
};

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_field_offset_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__notag_functor_desc_field_offset_0 = {
  (MR_String) "offset",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_field_offset_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ml_backend__ml_unify_gen____Unify____field_offset_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen____Compare____field_offset_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen",
  (MR_String) "field_offset",
  {     &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__notag_functor_desc_field_offset_0 },
  {     &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__notag_functor_desc_field_offset_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_field_offset_0
};

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_ml_const_struct_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_names_ml_const_struct_info_0_0[3] = {
  (MR_String) "mcsi_module_info",
  (MR_String) "mcsi_target",
  (MR_String) "mcsi_high_level_data"
};

static const MR_DuArgLocn ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_locns_ml_const_struct_info_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 2,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_ml_const_struct_info_0_0 = {
  (MR_String) "ml_const_struct_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_ml_const_struct_info_0_0,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_names_ml_const_struct_info_0_0,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_locns_ml_const_struct_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_ml_const_struct_info_0_0[1] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_ml_const_struct_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_ml_const_struct_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_ml_const_struct_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_ml_const_struct_info_0[1] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_ml_const_struct_info_0_0
};

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_ml_const_struct_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_ml_const_struct_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_unify_gen____Unify____ml_const_struct_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen____Compare____ml_const_struct_info_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen",
  (MR_String) "ml_const_struct_info",
  {     ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_ml_const_struct_info_0 },
  {     ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_ml_const_struct_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_ml_const_struct_info_0
};

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_take_addr_info_0_0[4] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_field_offset_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
};

static const MR_DuFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_take_addr_info_0_0 = {
  (MR_String) "take_addr_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_take_addr_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_take_addr_info_0_0[1] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_take_addr_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_take_addr_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_take_addr_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_take_addr_info_0[1] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_take_addr_info_0_0
};

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_take_addr_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_take_addr_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_unify_gen____Unify____take_addr_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen____Compare____take_addr_info_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen",
  (MR_String) "take_addr_info",
  {     ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_name_ordered_take_addr_info_0 },
  {     ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_take_addr_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_take_addr_info_0
};

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__3040__1_1_f_0(
  MR_Word LambdaHeadVar__1_81)
{
  {
    MR_Word LambdaHeadVar__2_82;

    {
      LambdaHeadVar__2_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_82, 0) = ((MR_Box) (LambdaHeadVar__1_81));
    }
    return LambdaHeadVar__2_82;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_static_compound__2997__1_2_p_0(
  MR_Integer NumExtraArgs_35,
  MR_Integer HeadVar__2_68)
{
  {
    MR_bool succeeded = (NumExtraArgs_35 == HeadVar__2_68);

    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__2992__1_1_f_0(
  MR_Word LambdaHeadVar__1_61)
{
  {
    MR_Word LambdaHeadVar__2_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_61, (MR_Integer) 2)));
    MR_Word Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_61, (MR_Integer) 0)));
    MR_Word Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_61, (MR_Integer) 1)));
    MR_Word Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_61, (MR_Integer) 3)));

    return LambdaHeadVar__2_62;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_ground_term_conjunct_compound__2726__1_1_f_0(
  MR_Word LambdaHeadVar__1_91)
{
  {
    MR_Word LambdaHeadVar__2_92;

    {
      LambdaHeadVar__2_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_92, 0) = ((MR_Box) (LambdaHeadVar__1_91));
    }
    return LambdaHeadVar__2_92;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_compound__2688__1_2_p_0(
  MR_Integer NumExtraArgs_43,
  MR_Integer HeadVar__2_78)
{
  {
    MR_bool succeeded = (NumExtraArgs_43 == HeadVar__2_78);

    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_ground_term_conjunct_compound__2683__1_1_f_0(
  MR_Word LambdaHeadVar__1_71)
{
  {
    MR_Word LambdaHeadVar__2_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_71, (MR_Integer) 2)));
    MR_Word Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_71, (MR_Integer) 0)));
    MR_Word Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_71, (MR_Integer) 1)));
    MR_Word Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_71, (MR_Integer) 3)));

    return LambdaHeadVar__2_72;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_ground_term_conjunct_compound__2682__1_1_f_0(
  MR_Word LambdaHeadVar__1_68)
{
  {
    MR_Word LambdaHeadVar__2_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_68, (MR_Integer) 1)));
    MR_Word Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_68, (MR_Integer) 0)));
    MR_Word Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_68, (MR_Integer) 2)));
    MR_Word Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_68, (MR_Integer) 3)));

    return LambdaHeadVar__2_69;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2571__6_2_p_0(
  MR_Word Args_25,
  MR_Word HeadVar__2_183)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3], ((MR_Box) (Args_25)), ((MR_Box) (HeadVar__2_183)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2571__5_2_p_0(
  MR_Word Args_25,
  MR_Word HeadVar__2_170)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3], ((MR_Box) (Args_25)), ((MR_Box) (HeadVar__2_170)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2571__4_2_p_0(
  MR_Word Args_25,
  MR_Word HeadVar__2_159)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3], ((MR_Box) (Args_25)), ((MR_Box) (HeadVar__2_159)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2571__3_2_p_0(
  MR_Word Args_25,
  MR_Word HeadVar__2_148)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3], ((MR_Box) (Args_25)), ((MR_Box) (HeadVar__2_148)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2571__2_2_p_0(
  MR_Word Args_25,
  MR_Word HeadVar__2_137)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3], ((MR_Box) (Args_25)), ((MR_Box) (HeadVar__2_137)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2571__1_2_p_0(
  MR_Word Args_25,
  MR_Word HeadVar__2_115)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3], ((MR_Box) (Args_25)), ((MR_Box) (HeadVar__2_115)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_tag_test_rval__2209__1_6_f_0(
  MR_Word ModuleInfo_7,
  MR_Word Target_8,
  MR_Word Type_10,
  MR_Word Rval_11,
  MR_Word LambdaHeadVar__1_63,
  MR_Word LambdaHeadVar__2_64)
{
  {
    MR_Word LambdaHeadVar__3_65;
    MR_Word EqualRA_61;
    MR_Word Var_66;
    MR_Word Var_67;

    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
      MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (LambdaHeadVar__1_63));
    }
    EqualRA_61 = ml_backend__ml_unify_gen__ml_gen_tag_test_rval_5_f_0(ModuleInfo_7, Target_8, Var_66, Type_10, Rval_11);
    Var_67 = ml_backend__ml_code_util__ml_gen_not_1_f_0(EqualRA_61);
    LambdaHeadVar__3_65 = ml_backend__ml_code_util__ml_gen_and_2_f_0(Var_67, LambdaHeadVar__2_64);
    return LambdaHeadVar__3_65;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_field_names_and_types__1550__1_2_f_0(
  MR_Word Context_11,
  MR_Word LambdaHeadVar__1_26)
{
  {
    MR_Word LambdaHeadVar__2_27;

    {
      LambdaHeadVar__2_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_27, 1) = ((MR_Box) (LambdaHeadVar__1_26));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_27, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_27, 3) = ((MR_Box) (Context_11));
    }
    return LambdaHeadVar__2_27;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_extra_arg_assign__1370__1_2_p_0(
  MR_Word HighLevelData_57,
  MR_Word HeadVar__2_67)
{
  {
    MR_bool succeeded = (HighLevelData_57 == HeadVar__2_67);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args_2__1314__1_2_p_0(
  MR_Word ConsArgWidth_48,
  MR_Word HeadVar__2_64)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____arg_width_0_0(ConsArgWidth_48, HeadVar__2_64);
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__constructor_arg_types__1076__1_3_p_0(
  MR_Word LambdaHeadVar__1_32,
  MR_Word * LambdaHeadVar__2_33,
  MR_Word * LambdaHeadVar__3_34)
{
  {
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_32, (MR_Integer) 0)));
    MR_Word Var_23;

    *LambdaHeadVar__2_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_32, (MR_Integer) 1)));
    *LambdaHeadVar__3_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_32, (MR_Integer) 2)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_32, (MR_Integer) 3)));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__832__1_2_p_0(
  MR_Integer PrimaryTag_54,
  MR_Integer LambdaHeadVar__1_85)
{
  {
    MR_bool succeeded = (LambdaHeadVar__1_85 == PrimaryTag_54);

    succeeded = !(succeeded);
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__815__1_3_p_0(
  MR_Word STATE_VARIABLE_Info_0_77,
  MR_Word LambdaHeadVar__1_82,
  MR_Integer * LambdaHeadVar__2_83)
{
  {
    MR_Word ReuseConsIdTag_47;
    MR_Word _ReuseOffSet_48;
    MR_Integer _ReuseArgNum_49;

    ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_77, LambdaHeadVar__1_82, &ReuseConsIdTag_47);
    ml_backend__ml_unify_gen__ml_tag_offset_and_argnum_4_p_0(ReuseConsIdTag_47, LambdaHeadVar__2_83, &_ReuseOffSet_48, &_ReuseArgNum_49);
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_statically__757__1_1_f_0(
  MR_Word LambdaHeadVar__1_74)
{
  {
    MR_Word LambdaHeadVar__2_75;

    {
      LambdaHeadVar__2_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_75, 0) = ((MR_Box) (LambdaHeadVar__1_74));
    }
    return LambdaHeadVar__2_75;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__595__1_2_p_0(
  MR_Word TakeAddr_25,
  MR_Word HeadVar__2_45)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[1], ((MR_Box) (TakeAddr_25)), ((MR_Box) (HeadVar__2_45)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__204__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_74)
{
  {
    MR_bool succeeded = (CodeModel_8 == HeadVar__2_74);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__236__1_2_p_0(
  MR_Word MaybeSizeProfInfo_37,
  MR_Word HeadVar__2_69)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[0], ((MR_Box) (MaybeSizeProfInfo_37)), ((MR_Box) (HeadVar__2_69)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__224__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_65)
{
  {
    MR_bool succeeded = (CodeModel_8 == HeadVar__2_65);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__172__1_2_p_0(
  MR_Word CodeModel_8,
  MR_Word HeadVar__2_86)
{
  {
    MR_bool succeeded = (CodeModel_8 == HeadVar__2_86);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____take_addr_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word Var_12;

      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], &Var_12, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;
        MR_Integer Var_21 = (MR_Integer) ArgX2_6;
        MR_Integer Var_22 = (MR_Integer) ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_13, Var_21, Var_22);
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          ml_backend__mlds____Compare____mlds_type_0_0(&Var_14, ArgX3_8, ArgY3_9);
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
            ml_backend__mlds____Compare____mlds_type_0_0(HeadVar__1_1, ArgX4_10, ArgY4_11);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____take_addr_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer CastX_18;
      MR_Integer CastY_19;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        CastX_18 = (MR_Integer) ArgX2_5;
        CastY_19 = (MR_Integer) ArgY2_6;
        succeeded = (CastX_18 == CastY_19);
        if (succeeded)
          succeeded = MR_TRUE;
        else
        {
          MR_Integer ArgX1_16 = (MR_Integer) ArgX2_5;
          MR_Integer ArgY1_17 = (MR_Integer) ArgY2_6;

          succeeded = (ArgX1_16 == ArgY1_17);
        }
        if (succeeded)
        {
          succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
            succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ArgX4_9, ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____ml_const_struct_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 3);
      MR_Word ArgY2_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 3);
      MR_Word ArgX3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY3_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_10;

      hlds__hlds_module____Compare____module_info_0_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;
        MR_Integer Var_17 = (MR_Integer) ArgX2_6;
        MR_Integer Var_18 = (MR_Integer) ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_11, Var_17, Var_18);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          MR_Integer Var_19 = (MR_Integer) ArgX3_8;
          MR_Integer Var_20 = (MR_Integer) ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_19, Var_20);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____ml_const_struct_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 3);
      MR_Word ArgY2_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 3);
      MR_Word ArgX3_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____field_offset_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = (MR_Integer) HeadVar__2_2;
      MR_Integer ArgY1_5 = (MR_Integer) HeadVar__3_3;

      mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____field_offset_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer ArgY1_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (ArgX1_3 == ArgY1_4);
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_shift_combine_rval_type_8_p_0(
  MR_Word ArgA_9,
  MR_Integer Shift_10,
  MR_Word MaybeArgB_11,
  MR_Word * ArgC_12)
{
  {
    MR_bool succeeded;
    MR_Word RvalA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgA_9, (MR_Integer) 0)));
    MR_Word TypeA_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgA_9, (MR_Integer) 1)));
    MR_Word ShiftRvalA_17;
    MR_Word RvalC_20;
    MR_Word Var_33;
    MR_Word Var_29;

    succeeded = ((((MR_tag((MR_Word) RvalA_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalA_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), RvalA_15, (MR_Integer) 1)));
      succeeded = ((((MR_tag((MR_Word) Var_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_33, (MR_Integer) 0)))) == (MR_Integer) 20)));
      if (succeeded)
        Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_33, (MR_Integer) 1)));
    }
    if (succeeded)
    {
      ShiftRvalA_17 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[5]);
    }
    else
    {
      succeeded = (Shift_10 == (MR_Integer) 0);
      if (succeeded)
        ShiftRvalA_17 = RvalA_15;
      else
      {
        MR_Word Rval1_31;
        MR_Word Var_36;
        MR_Word Type_30;

        succeeded = ((((MR_tag((MR_Word) RvalA_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalA_15, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), RvalA_15, (MR_Integer) 1)));
          Rval1_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), RvalA_15, (MR_Integer) 2)));
          succeeded = ((MR_tag((MR_Word) Var_36)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
            Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0)));
        }
        if (succeeded)
        {
          MR_Word Rval2_32;
          MR_Word Var_39;
          MR_Word Var_40;

          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_40, 0) = ((MR_Box) (Shift_10));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (Var_40));
          }
          {
            Rval2_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Rval2_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), Rval2_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[6])));
            MR_hl_field(MR_mktag(3), Rval2_32, 2) = ((MR_Box) (Rval1_31));
            MR_hl_field(MR_mktag(3), Rval2_32, 3) = ((MR_Box) (Var_39));
          }
          {
            ShiftRvalA_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ShiftRvalA_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ShiftRvalA_17, 1) = ((MR_Box) (Var_36));
            MR_hl_field(MR_mktag(3), ShiftRvalA_17, 2) = ((MR_Box) (Rval2_32));
          }
        }
        else
        {
          MR_Word Var_44;
          MR_Word Var_45;

          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_45, 0) = ((MR_Box) (Shift_10));
          }
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Var_45));
          }
          {
            ShiftRvalA_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ShiftRvalA_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ShiftRvalA_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[6])));
            MR_hl_field(MR_mktag(3), ShiftRvalA_17, 2) = ((MR_Box) (RvalA_15));
            MR_hl_field(MR_mktag(3), ShiftRvalA_17, 3) = ((MR_Box) (Var_44));
          }
        }
      }
    }
    if ((MaybeArgB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      RvalC_20 = ShiftRvalA_17;
    else
    {
      MR_Word RvalB_18;
      MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeArgB_11, (MR_Integer) 0)));
      MR_Word UnboxRvalA_52;
      MR_Word STATE_VARIABLE_MaybeType_18_60;
      MR_Word Var_63;
      MR_Word _TypeB_19;
      MR_Word TypeA_50;
      MR_Word UnboxRvalA0_51;
      MR_Word Var_59;
      MR_Word UnboxRvalB0_54;
      MR_Word Var_61;
      MR_Word TypeB_53;

      RvalB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0)));
      _TypeB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1)));
      succeeded = ((((MR_tag((MR_Word) ShiftRvalA_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ShiftRvalA_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ShiftRvalA_17, (MR_Integer) 1)));
        UnboxRvalA0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ShiftRvalA_17, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_59)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
          TypeA_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_59, (MR_Integer) 0)));
      }
      if (succeeded)
      {
        UnboxRvalA_52 = UnboxRvalA0_51;
        {
          STATE_VARIABLE_MaybeType_18_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeType_18_60, 0) = ((MR_Box) (TypeA_50));
        }
      }
      else
      {
        UnboxRvalA_52 = ShiftRvalA_17;
        STATE_VARIABLE_MaybeType_18_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      Var_63 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[8]);
      succeeded = ((((MR_tag((MR_Word) RvalB_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalB_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), RvalB_18, (MR_Integer) 1)));
        UnboxRvalB0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), RvalB_18, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_61)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
          TypeB_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 0)));
      }
      if (succeeded)
      {
        MR_Word UnboxRval_56;

        {
          UnboxRval_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), UnboxRval_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), UnboxRval_56, 1) = ((MR_Box) (Var_63));
          MR_hl_field(MR_mktag(3), UnboxRval_56, 2) = ((MR_Box) (UnboxRvalA_52));
          MR_hl_field(MR_mktag(3), UnboxRval_56, 3) = ((MR_Box) (UnboxRvalB0_54));
        }
        {
          RvalC_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), RvalC_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), RvalC_20, 1) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(3), RvalC_20, 2) = ((MR_Box) (UnboxRval_56));
        }
      }
      else
      {
        MR_Word UnboxRval_71;

        {
          UnboxRval_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), UnboxRval_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), UnboxRval_71, 1) = ((MR_Box) (Var_63));
          MR_hl_field(MR_mktag(3), UnboxRval_71, 2) = ((MR_Box) (UnboxRvalA_52));
          MR_hl_field(MR_mktag(3), UnboxRval_71, 3) = ((MR_Box) (RvalB_18));
        }
        if ((STATE_VARIABLE_MaybeType_18_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          RvalC_20 = UnboxRval_71;
        else
        {
          MR_Word BoxType_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeType_18_60, (MR_Integer) 0)));
          MR_Word Var_67;

          {
            Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (BoxType_66));
          }
          {
            RvalC_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RvalC_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), RvalC_20, 1) = ((MR_Box) (Var_67));
            MR_hl_field(MR_mktag(3), RvalC_20, 2) = ((MR_Box) (UnboxRval_71));
          }
        }
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ArgC_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RvalC_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeA_16));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_shift_combine_rval_8_p_0(
  MR_Word RvalA_9,
  MR_Integer Shift_10,
  MR_Word MaybeRvalB_11,
  MR_Word * RvalC_12)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) RvalA_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalA_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word ShiftRvalA_15;
    MR_Word Var_28;
    MR_Word Var_24;

    if (succeeded)
    {
      Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), RvalA_9, (MR_Integer) 1)));
      succeeded = ((((MR_tag((MR_Word) Var_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_28, (MR_Integer) 0)))) == (MR_Integer) 20)));
      if (succeeded)
        Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_28, (MR_Integer) 1)));
    }
    if (succeeded)
    {
      ShiftRvalA_15 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[5]);
    }
    else
    {
      succeeded = (Shift_10 == (MR_Integer) 0);
      if (succeeded)
        ShiftRvalA_15 = RvalA_9;
      else
      {
        MR_Word Rval1_26;
        MR_Word Var_31;
        MR_Word Type_25;

        succeeded = ((((MR_tag((MR_Word) RvalA_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalA_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), RvalA_9, (MR_Integer) 1)));
          Rval1_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), RvalA_9, (MR_Integer) 2)));
          succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
            Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 0)));
        }
        if (succeeded)
        {
          MR_Word Rval2_27;
          MR_Word Var_34;
          MR_Word Var_35;

          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_35, 0) = ((MR_Box) (Shift_10));
          }
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Var_35));
          }
          {
            Rval2_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Rval2_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), Rval2_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[6])));
            MR_hl_field(MR_mktag(3), Rval2_27, 2) = ((MR_Box) (Rval1_26));
            MR_hl_field(MR_mktag(3), Rval2_27, 3) = ((MR_Box) (Var_34));
          }
          {
            ShiftRvalA_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ShiftRvalA_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ShiftRvalA_15, 1) = ((MR_Box) (Var_31));
            MR_hl_field(MR_mktag(3), ShiftRvalA_15, 2) = ((MR_Box) (Rval2_27));
          }
        }
        else
        {
          MR_Word Var_39;
          MR_Word Var_40;

          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_40, 0) = ((MR_Box) (Shift_10));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (Var_40));
          }
          {
            ShiftRvalA_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ShiftRvalA_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ShiftRvalA_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[6])));
            MR_hl_field(MR_mktag(3), ShiftRvalA_15, 2) = ((MR_Box) (RvalA_9));
            MR_hl_field(MR_mktag(3), ShiftRvalA_15, 3) = ((MR_Box) (Var_39));
          }
        }
      }
    }
    if ((MaybeRvalB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *RvalC_12 = ShiftRvalA_15;
    else
    {
      MR_Word RvalB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeRvalB_11, (MR_Integer) 0)));
      MR_Word UnboxRvalA_47;
      MR_Word STATE_VARIABLE_MaybeType_18_55;
      MR_Word Var_58;
      MR_Word TypeA_45;
      MR_Word UnboxRvalA0_46;
      MR_Word Var_54;
      MR_Word UnboxRvalB0_49;
      MR_Word Var_56;
      MR_Word TypeB_48;

      succeeded = ((((MR_tag((MR_Word) ShiftRvalA_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ShiftRvalA_15, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ShiftRvalA_15, (MR_Integer) 1)));
        UnboxRvalA0_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ShiftRvalA_15, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_54)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
          TypeA_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_54, (MR_Integer) 0)));
      }
      if (succeeded)
      {
        UnboxRvalA_47 = UnboxRvalA0_46;
        {
          STATE_VARIABLE_MaybeType_18_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeType_18_55, 0) = ((MR_Box) (TypeA_45));
        }
      }
      else
      {
        UnboxRvalA_47 = ShiftRvalA_15;
        STATE_VARIABLE_MaybeType_18_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      Var_58 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[8]);
      succeeded = ((((MR_tag((MR_Word) RvalB_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalB_16, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), RvalB_16, (MR_Integer) 1)));
        UnboxRvalB0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), RvalB_16, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_56)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
          TypeB_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 0)));
      }
      if (succeeded)
      {
        MR_Word UnboxRval_51;

        {
          UnboxRval_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), UnboxRval_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), UnboxRval_51, 1) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(3), UnboxRval_51, 2) = ((MR_Box) (UnboxRvalA_47));
          MR_hl_field(MR_mktag(3), UnboxRval_51, 3) = ((MR_Box) (UnboxRvalB0_49));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *RvalC_12 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (UnboxRval_51));
        }
      }
      else
      {
        MR_Word UnboxRval_66;

        {
          UnboxRval_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), UnboxRval_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), UnboxRval_66, 1) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(3), UnboxRval_66, 2) = ((MR_Box) (UnboxRvalA_47));
          MR_hl_field(MR_mktag(3), UnboxRval_66, 3) = ((MR_Box) (RvalB_16));
        }
        if ((STATE_VARIABLE_MaybeType_18_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *RvalC_12 = UnboxRval_66;
        else
        {
          MR_Word BoxType_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeType_18_55, (MR_Integer) 0)));
          MR_Word Var_62;

          {
            Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (BoxType_61));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *RvalC_12 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_62));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (UnboxRval_66));
          }
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_6_p_0(
  MR_Word Info_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ConstStructMap_0_19,
  MR_Word * STATE_VARIABLE_ConstStructMap_20,
  MR_Word STATE_VARIABLE_GlobalData_0_21,
  MR_Word * STATE_VARIABLE_GlobalData_22)
{
  {
    MR_Integer ConstNum_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word ConstStruct_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_9, (MR_Integer) 0)));
    MR_Word Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_9, (MR_Integer) 1)));
    MR_Word Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_9, (MR_Integer) 2)));
    MR_Word ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
    MR_Word MLDS_Type_17;
    MR_Word ConsTag_18;
    MR_Word _Inst_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_9, (MR_Integer) 3)));
    MR_Word Var_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) & (MR_Integer) 3);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    MLDS_Type_17 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_16, Type_14);
    ConsTag_18 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_16, ConsId_12);
    ml_backend__ml_unify_gen__ml_gen_const_struct_tag_11_p_0(Info_7, ConstNum_8, Type_14, MLDS_Type_17, ConsId_12, ConsTag_18, Args_13, STATE_VARIABLE_ConstStructMap_0_19, STATE_VARIABLE_ConstStructMap_20, STATE_VARIABLE_GlobalData_0_21, STATE_VARIABLE_GlobalData_22);
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_tag_11_p_0(
  MR_Word Info_12,
  MR_Integer ConstNum_13,
  MR_Word Type_14,
  MR_Word MLDS_Type_15,
  MR_Word ConsId_16,
  MR_Word ConsTag_17,
  MR_Word Args_18,
  MR_Word STATE_VARIABLE_ConstStructMap_0_67,
  MR_Word * STATE_VARIABLE_ConstStructMap_68,
  MR_Word STATE_VARIABLE_GlobalData_0_69,
  MR_Word * STATE_VARIABLE_GlobalData_70)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) ConsTag_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(Info_12, ConstNum_13, Type_14, MLDS_Type_15, ConsId_16, ConsTag_17, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Args_18, STATE_VARIABLE_ConstStructMap_0_67, STATE_VARIABLE_ConstStructMap_68, STATE_VARIABLE_GlobalData_0_69, STATE_VARIABLE_GlobalData_70);
            }
            break;
          case (MR_Integer) 1:
            if ((Args_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "no_tag arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1)));
              MR_Word Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0)));

              if ((Var_102 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word ArgRval_26;
                MR_Word Rval_27;
                MR_Word GroundTerm_28;

                ml_backend__ml_unify_gen__ml_gen_const_struct_arg_7_p_0(Info_12, STATE_VARIABLE_ConstStructMap_0_67, Var_103, (MR_Integer) 0, &ArgRval_26, STATE_VARIABLE_GlobalData_0_69, STATE_VARIABLE_GlobalData_70);
                Rval_27 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_15, ConsTag_17, ArgRval_26);
                {
                  GroundTerm_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_28, 0) = ((MR_Box) (Rval_27));
                  MR_hl_field(MR_mktag(0), GroundTerm_28, 1) = ((MR_Box) (Type_14));
                  MR_hl_field(MR_mktag(0), GroundTerm_28, 2) = ((MR_Box) (MLDS_Type_15));
                }
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ConstNum_13, ((MR_Box) (GroundTerm_28)), STATE_VARIABLE_ConstStructMap_0_67, STATE_VARIABLE_ConstStructMap_68);
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "no_tag arity != 1");
                  return;
                }
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "unexpected tag");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 14:
          case (MR_Integer) 15:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Integer Ptag_100 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1)));

              ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(Info_12, ConstNum_13, Type_14, MLDS_Type_15, ConsId_16, ConsTag_17, Ptag_100, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Args_18, STATE_VARIABLE_ConstStructMap_0_67, STATE_VARIABLE_ConstStructMap_68, STATE_VARIABLE_GlobalData_0_69, STATE_VARIABLE_GlobalData_70);
            }
            break;
          case (MR_Integer) 12:
            if ((Args_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "no_tag arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1)));
              MR_Word Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0)));

              if ((Var_102 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word ArgRval_26;
                MR_Word Rval_27;
                MR_Word GroundTerm_28;

                ml_backend__ml_unify_gen__ml_gen_const_struct_arg_7_p_0(Info_12, STATE_VARIABLE_ConstStructMap_0_67, Var_103, (MR_Integer) 0, &ArgRval_26, STATE_VARIABLE_GlobalData_0_69, STATE_VARIABLE_GlobalData_70);
                Rval_27 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_15, ConsTag_17, ArgRval_26);
                {
                  GroundTerm_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_28, 0) = ((MR_Box) (Rval_27));
                  MR_hl_field(MR_mktag(0), GroundTerm_28, 1) = ((MR_Box) (Type_14));
                  MR_hl_field(MR_mktag(0), GroundTerm_28, 2) = ((MR_Box) (MLDS_Type_15));
                }
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ConstNum_13, ((MR_Box) (GroundTerm_28)), STATE_VARIABLE_ConstStructMap_0_67, STATE_VARIABLE_ConstStructMap_68);
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "no_tag arity != 1");
                  return;
                }
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer Ptag_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1)));
              MR_Word ExtraInitializers_33;
              MR_Integer Stag_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 2)));
              MR_Word Target_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1)))) & (MR_Integer) 3);
              MR_Word UsesConstructors_36;
              MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 0)));
              MR_Word Var_89 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

              UsesConstructors_36 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_35);
              switch (UsesConstructors_36) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word StagRval0_37;
                    MR_Word HighLevelData_38;
                    MR_Word StagRval_39;
                    MR_Word Var_73;
                    MR_Word Var_76;
                    MR_Word Var_90;
                    MR_Word Var_91;

                    {
                      Var_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_73, 0) = ((MR_Box) (Stag_34));
                    }
                    {
                      StagRval0_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), StagRval0_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), StagRval0_37, 1) = ((MR_Box) (Var_73));
                    }
                    Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 0)));
                    Var_91 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1)))) & (MR_Integer) 3);
                    HighLevelData_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    switch (HighLevelData_38) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            StagRval_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), StagRval_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), StagRval_39, 1) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[9]));
                            MR_hl_field(MR_mktag(3), StagRval_39, 2) = ((MR_Box) (StagRval0_37));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        StagRval_39 = StagRval0_37;
                        break;
                    }
                    {
                      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (StagRval_39));
                    }
                    {
                      ExtraInitializers_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ExtraInitializers_33, 0) = ((MR_Box) (Var_76));
                      MR_hl_field(MR_mktag(1), ExtraInitializers_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  ExtraInitializers_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  break;
              }
              ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(Info_12, ConstNum_13, Type_14, MLDS_Type_15, ConsId_16, ConsTag_17, Ptag_32, ExtraInitializers_33, Args_18, STATE_VARIABLE_ConstStructMap_0_67, STATE_VARIABLE_ConstStructMap_68, STATE_VARIABLE_GlobalData_0_69, STATE_VARIABLE_GlobalData_70);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word ThisTag_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 2)));
              MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1)));
              MR_Word next_value_of_ConsTag_17 = ThisTag_22;

              // direct tailcall eliminated
              ConsTag_17 = next_value_of_ConsTag_17;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_arg_7_p_0(
  MR_Word Info_8,
  MR_Word ConstStructMap_9,
  MR_Word ConstArg_10,
  MR_Word DoubleWidth_11,
  MR_Word * Rval_12,
  MR_Word STATE_VARIABLE_GlobalData_0_23,
  MR_Word * STATE_VARIABLE_GlobalData_24)
{
  {
    MR_Word ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
    MR_Word Rval0_17;
    MR_Word MLDS_Type_19;
    MR_Word Var_25;
    MR_Word Var_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) & (MR_Integer) 3);
    MR_Word Var_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    if (((MR_tag((MR_Word) ConstArg_10)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Integer StructNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ConstArg_10, (MR_Integer) 0)));
      MR_Word GroundTerm_16;
      MR_Box conv0_GroundTerm_16;
      MR_Word _Type_18;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ConstStructMap_9, StructNum_15, &conv0_GroundTerm_16);
      GroundTerm_16 = ((MR_Word) conv0_GroundTerm_16);
      Rval0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_16, (MR_Integer) 0)));
      _Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_16, (MR_Integer) 1)));
      MLDS_Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_16, (MR_Integer) 2)));
    }
    else
    {
      MR_Word ConsId_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArg_10, (MR_Integer) 0)));
      MR_Word Type_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArg_10, (MR_Integer) 1)));
      MR_Word ConsTag_22;

      ConsTag_22 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_14, ConsId_20);
      MLDS_Type_19 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_14, Type_21);
      ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_50_93_95_48_6_p_0(ConsTag_22, Type_21, MLDS_Type_19, &Rval0_17);
    }
    Var_25 = mercury__term__context_init_0_f_0();
    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_14, Var_25, MLDS_Type_19, DoubleWidth_11, Rval0_17, Rval_12, STATE_VARIABLE_GlobalData_0_23, STATE_VARIABLE_GlobalData_24);
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_LambdaHeadVar__2_82;

    conv4_LambdaHeadVar__2_82 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__3040__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_82));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_RvalC_12;

    ml_backend__ml_unify_gen__ml_shift_combine_rval_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv1_RvalC_12);
    *wrapper_arg_4 = ((MR_Box) (conv1_RvalC_12));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_static_compound__2997__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_62;

    conv0_LambdaHeadVar__2_62 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__2992__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_62));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(
  MR_Word Info_14,
  MR_Integer ConstNum_15,
  MR_Word Type_16,
  MR_Word MLDS_Type_17,
  MR_Word ConsId_18,
  MR_Word ConsTag_19,
  MR_Integer Ptag_20,
  MR_Word ExtraInitializers_21,
  MR_Word Args_22,
  MR_Word STATE_VARIABLE_ConstStructMap_0_56,
  MR_Word * STATE_VARIABLE_ConstStructMap_57,
  MR_Word STATE_VARIABLE_GlobalData_0_58,
  MR_Word * STATE_VARIABLE_GlobalData_59)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word TypeCtorInfo_127_127;
    MR_Word TypeCtorInfo_128_128;
    MR_Word TypeCtorInfo_129_129;
    MR_Word Target_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1)))) & (MR_Integer) 3);
    MR_Word ModuleInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 0)));
    MR_Word ConsArgWidths_33;
    MR_Word HighLevelData_38;
    MR_Word ArgRvals1_40;
    MR_Word ArgRvals_41;
    MR_Word ArgInitializers_44;
    MR_Word SubInitializers_46;
    MR_Word ConstType_47;
    MR_Word Initializer_49;
    MR_Word ModuleName_50;
    MR_Word MLDS_ModuleName_51;
    MR_Word ConstDataAddrRval_52;
    MR_Word TaggedRval_53;
    MR_Word Rval_54;
    MR_Word GroundTerm_55;
    MR_Word STATE_VARIABLE_GlobalData_73_73;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_86;
    MR_Word Var_88;
    MR_Word Var_94 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_27;
    MR_Integer Var_28;
    MR_Word Var_29;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Box conv3_Var_42;
    MR_Box conv2_Var_43;
    MR_Word Var_48;

    if (succeeded)
    {
      Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_18, (MR_Integer) 1)));
      Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_18, (MR_Integer) 2)));
      Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_18, (MR_Integer) 3)));
      succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(Type_16);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word TypeCtor_30;
      MR_Word ConsDefn_31;

      parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_16, &TypeCtor_30);
      succeeded = check_hlds__type_util__get_cons_defn_4_p_0(ModuleInfo_26, TypeCtor_30, ConsId_18, &ConsDefn_31);
      if (succeeded)
      {
        MR_Word TypeCtorInfo_109_109 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
        MR_Word ConsArgDefns_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_31, (MR_Integer) 6)));
        MR_Integer NumExtraArgs_35;
        MR_Integer Var_63;
        MR_Integer Var_64;
        MR_Word Var_65;
        MR_Word Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_31, (MR_Integer) 0)));
        MR_Word Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_31, (MR_Integer) 1)));
        MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_31, (MR_Integer) 2)));
        MR_Word Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_31, (MR_Integer) 3)));
        MR_Word Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_31, (MR_Integer) 4)));
        MR_Word Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_31, (MR_Integer) 5)));
        MR_Word Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_31, (MR_Integer) 7)));

        ConsArgWidths_33 = mercury__list__map_2_f_0(TypeCtorInfo_109_109, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[11], ConsArgDefns_32);
        Var_63 = mercury__list__length_1_f_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, Args_22);
        Var_64 = mercury__list__length_1_f_0(TypeCtorInfo_109_109, ConsArgDefns_32);
        NumExtraArgs_35 = (Var_63 - Var_64);
        {
          Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[3]));
          MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_2));
          MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (NumExtraArgs_35));
          MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__require__expect_3_p_0(Var_65, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_static_compound\'/13", (MR_String) "extra args in static const struct");
      }
      else
      {
        MR_Word Var_36;

        succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(Type_16, &Var_36);
        if (succeeded)
        {
          MR_Integer Length_37;

          Length_37 = mercury__list__length_1_f_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, Args_22);
          ConsArgWidths_33 = mercury__list__duplicate_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, Length_37, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_static_compound\'/13", (MR_String) "get_cons_defn failed");
            return;
          }
        }
      }
    }
    else
    {
      MR_Integer Length_91;

      Length_91 = mercury__list__length_1_f_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, Args_22);
      ConsArgWidths_33 = mercury__list__duplicate_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, Length_91, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
    }
    Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 0)));
    Var_108 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1)))) & (MR_Integer) 3);
    HighLevelData_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    switch (HighLevelData_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 1:
        succeeded = (Target_25 == (MR_Integer) 2);
        break;
    }
    if (succeeded)
    {
      MR_Word ArgConsArgWidths_39;

      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, Args_22, ConsArgWidths_33, &ArgConsArgWidths_39);
      ml_backend__ml_unify_gen__ml_gen_const_struct_args_6_p_0(Info_14, STATE_VARIABLE_ConstStructMap_0_56, ArgConsArgWidths_39, &ArgRvals1_40, STATE_VARIABLE_GlobalData_0_58, &STATE_VARIABLE_GlobalData_73_73);
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "ml_unify_gen.m", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_static_compound\'/13", (MR_String) "Constant structures are not supported for this grade");
        return;
      }
    }
    TypeCtorInfo_127_127 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
    TypeCtorInfo_128_128 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
    backend_libs__arg_pack__pack_args_8_p_0(TypeCtorInfo_127_127, TypeCtorInfo_128_128, TypeCtorInfo_128_128, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[12], ConsArgWidths_33, ArgRvals1_40, &ArgRvals_41, ((MR_Box) ((MR_Integer) 0)), &conv3_Var_42, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_43);
    TypeCtorInfo_129_129 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
    ArgInitializers_44 = mercury__list__map_2_f_0(TypeCtorInfo_127_127, TypeCtorInfo_129_129, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[13], ArgRvals_41);
    SubInitializers_46 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_129_129, ExtraInitializers_21, ArgInitializers_44);
    Var_83 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ConsTag_19);
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (ConsId_18));
    }
    ConstType_47 = ml_backend__ml_unify_gen__get_const_type_for_cons_id_5_f_0(Target_25, HighLevelData_38, MLDS_Type_17, Var_83, Var_84);
    succeeded = ((((MR_tag((MR_Word) ConstType_47)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConstType_47, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (succeeded)
    {
      Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConstType_47, (MR_Integer) 1)));
      {
        Initializer_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Initializer_49, 0) = ((MR_Box) (SubInitializers_46));
      }
    }
    else
      {
        Initializer_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Initializer_49, 0) = ((MR_Box) (ConstType_47));
        MR_hl_field(MR_mktag(2), Initializer_49, 1) = ((MR_Box) (SubInitializers_46));
      }
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_26, &ModuleName_50);
    MLDS_ModuleName_51 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_50);
    Var_86 = mercury__term__context_init_0_f_0();
    ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0(MLDS_ModuleName_51, (MR_Integer) 0, ConstType_47, Initializer_49, Var_86, &ConstDataAddrRval_52, STATE_VARIABLE_GlobalData_73_73, STATE_VARIABLE_GlobalData_59);
    succeeded = (Ptag_20 == (MR_Integer) 0);
    if (succeeded)
      TaggedRval_53 = ConstDataAddrRval_52;
    else
      {
        TaggedRval_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TaggedRval_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), TaggedRval_53, 1) = ((MR_Box) (Ptag_20));
        MR_hl_field(MR_mktag(3), TaggedRval_53, 2) = ((MR_Box) (ConstDataAddrRval_52));
      }
    {
      Var_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_88, 0) = ((MR_Box) (MLDS_Type_17));
    }
    {
      Rval_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Rval_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Rval_54, 1) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(3), Rval_54, 2) = ((MR_Box) (TaggedRval_53));
    }
    {
      GroundTerm_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), GroundTerm_55, 0) = ((MR_Box) (Rval_54));
      MR_hl_field(MR_mktag(0), GroundTerm_55, 1) = ((MR_Box) (Type_16));
      MR_hl_field(MR_mktag(0), GroundTerm_55, 2) = ((MR_Box) (MLDS_Type_17));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ConstNum_15, ((MR_Box) (GroundTerm_55)), STATE_VARIABLE_ConstStructMap_0_56, STATE_VARIABLE_ConstStructMap_57);
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_args_6_p_0(
  MR_Word Info_1,
  MR_Word ConstStructMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6)
{
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_GlobalData_6 = STATE_VARIABLE_GlobalData_0_5;
  }
  else
  {
    MR_Word Arg_14;
    MR_Word ConsArgWidth_15;
    MR_Word ArgConsArgWidths_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word ArgRval_17;
    MR_Word ArgRvals_18;
    MR_Word DoubleWidth_20;
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word STATE_VARIABLE_GlobalData_24_24;
    MR_Word ModuleInfo_39;
    MR_Word Rval0_42;
    MR_Word MLDS_Type_44;
    MR_Word Var_48;
    MR_Word Var_50;
    MR_Word Var_51;

    Arg_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0)));
    ConsArgWidth_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 1)));
    switch (MR_tag((MR_Word) ConsArgWidth_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsArgWidth_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            DoubleWidth_20 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            DoubleWidth_20 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        DoubleWidth_20 = (MR_Integer) 0;
        break;
    }
    ModuleInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 0)));
    Var_50 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 1)))) & (MR_Integer) 3);
    Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    if (((MR_tag((MR_Word) Arg_14)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Integer StructNum_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Arg_14, (MR_Integer) 0)));
      MR_Word GroundTerm_41;
      MR_Box conv0_GroundTerm_41;
      MR_Word _Type_43;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ConstStructMap_2, StructNum_40, &conv0_GroundTerm_41);
      GroundTerm_41 = ((MR_Word) conv0_GroundTerm_41);
      Rval0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_41, (MR_Integer) 0)));
      _Type_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_41, (MR_Integer) 1)));
      MLDS_Type_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_41, (MR_Integer) 2)));
    }
    else
    {
      MR_Word ConsId_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), Arg_14, (MR_Integer) 0)));
      MR_Word Type_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), Arg_14, (MR_Integer) 1)));
      MR_Word ConsTag_47;

      ConsTag_47 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_39, ConsId_45);
      MLDS_Type_44 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_39, Type_46);
      ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_50_93_95_48_6_p_0(ConsTag_47, Type_46, MLDS_Type_44, &Rval0_42);
    }
    Var_48 = mercury__term__context_init_0_f_0();
    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_39, Var_48, MLDS_Type_44, DoubleWidth_20, Rval0_42, &ArgRval_17, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_24_24);
    ml_backend__ml_unify_gen__ml_gen_const_struct_args_6_p_0(Info_1, ConstStructMap_2, ArgConsArgWidths_16, &ArgRvals_18, STATE_VARIABLE_GlobalData_24_24, STATE_VARIABLE_GlobalData_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgRval_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgRvals_18));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_50_93_95_48_6_p_0(
  MR_Word ConsTag_9,
  MR_Word Type_10,
  MR_Word MLDS_Type_11,
  MR_Word * Rval_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) ConsTag_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_arg_tag\'/6", (MR_String) "unexpected tag");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_16 = ((MR_String) (MR_hl_field(MR_mktag(1), ConsTag_9, (MR_Integer) 0)));
          MR_Word Var_68;

          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (String_16));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Rval_12 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_68));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_15 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_9, (MR_Integer) 0)));
          MR_Word Var_69;

          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
            MR_hl_field(MR_mktag(3), Var_69, 1) = MR_box_float(Float_15);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Rval_12 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_69));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 1)));
              MR_Word RvalConst_14;

              switch (MR_tag((MR_Word) IntTag_13)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer Int_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), IntTag_13, (MR_Integer) 0)));
                    MR_Word Var_88;

                    Var_88 = parse_tree__builtin_lib_types__int_type_0_f_0();
                    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_10, Var_88);
                    if (succeeded)
                      {
                        RvalConst_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), RvalConst_14, 0) = ((MR_Box) (Int_78));
                      }
                    else
                    {
                      MR_Word Var_89;

                      Var_89 = parse_tree__builtin_lib_types__char_type_0_f_0();
                      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_10, Var_89);
                      if (succeeded)
                        {
                          RvalConst_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RvalConst_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                          MR_hl_field(MR_mktag(3), RvalConst_14, 1) = ((MR_Box) (Int_78));
                        }
                      else
                        {
                          RvalConst_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RvalConst_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                          MR_hl_field(MR_mktag(3), RvalConst_14, 1) = ((MR_Box) (Int_78));
                          MR_hl_field(MR_mktag(3), RvalConst_14, 2) = ((MR_Box) (MLDS_Type_11));
                        }
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Unsigned UInt_79 = ((MR_Unsigned) (MR_hl_field(MR_mktag(1), IntTag_13, (MR_Integer) 0)));

                    {
                      RvalConst_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalConst_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), RvalConst_14, 1) = ((MR_Box) (UInt_79));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    int8_t Int8_80 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(2), IntTag_13, (MR_Integer) 0)));

                    {
                      RvalConst_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalConst_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), RvalConst_14, 1) = ((MR_Box) (MR_Word) (Int8_80));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_13, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        uint8_t UInt8_81 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_13, (MR_Integer) 1)));

                        {
                          RvalConst_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RvalConst_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), RvalConst_14, 1) = ((MR_Box) (MR_Word) (UInt8_81));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        int16_t Int16_82 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_13, (MR_Integer) 1)));

                        {
                          RvalConst_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RvalConst_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                          MR_hl_field(MR_mktag(3), RvalConst_14, 1) = ((MR_Box) (MR_Word) (Int16_82));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        uint16_t UInt16_83 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_13, (MR_Integer) 1)));

                        {
                          RvalConst_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RvalConst_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), RvalConst_14, 1) = ((MR_Box) (MR_Word) (UInt16_83));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        int32_t Int32_84 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_13, (MR_Integer) 1)));

                        {
                          RvalConst_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RvalConst_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), RvalConst_14, 1) = ((MR_Box) (MR_Word) (Int32_84));
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        uint32_t UInt32_85 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_13, (MR_Integer) 1)));

                        {
                          RvalConst_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RvalConst_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                          MR_hl_field(MR_mktag(3), RvalConst_14, 1) = ((MR_Box) (MR_Word) (UInt32_85));
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Integer Int64_86 = ((MR_Integer) (MR_hl_field(MR_mktag(3), IntTag_13, (MR_Integer) 1)));

                        {
                          RvalConst_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RvalConst_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                          MR_hl_field(MR_mktag(3), RvalConst_14, 1) = ((MR_Box) (Int64_86));
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Integer UInt64_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), IntTag_13, (MR_Integer) 1)));

                        {
                          RvalConst_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RvalConst_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                          MR_hl_field(MR_mktag(3), RvalConst_14, 1) = ((MR_Box) (UInt64_87));
                        }
                      }
                      break;
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Rval_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (RvalConst_14));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 1)));
              MR_String ForeignTag_21 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 2)));
              MR_Word Var_60;

              {
                Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (ForeignLang_20));
                MR_hl_field(MR_mktag(3), Var_60, 2) = ((MR_Box) (ForeignTag_21));
                MR_hl_field(MR_mktag(3), Var_60, 3) = ((MR_Box) (MLDS_Type_11));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Rval_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_60));
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_arg_tag\'/6", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ModuleName0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 1)));
              MR_String TypeName_23 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 2)));
              MR_Integer TypeArity_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 3)));
              MR_Word ModuleName_25;
              MR_Word MLDS_Module_26;
              MR_Word RttiTypeCtor_27;
              MR_Word RttiId_28;
              MR_Word Const_29;
              MR_Word Var_58;
              MR_Word Var_59;

              ModuleName_25 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_22);
              MLDS_Module_26 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_25);
              {
                RttiTypeCtor_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RttiTypeCtor_27, 0) = ((MR_Box) (ModuleName_25));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_27, 1) = ((MR_Box) (TypeName_23));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_27, 2) = ((MR_Box) (TypeArity_24));
              }
              {
                RttiId_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RttiId_28, 0) = ((MR_Box) (RttiTypeCtor_27));
                MR_hl_field(MR_mktag(0), RttiId_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
              }
              {
                Const_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                MR_hl_field(MR_mktag(3), Const_29, 1) = ((MR_Box) (MLDS_Module_26));
                MR_hl_field(MR_mktag(3), Const_29, 2) = ((MR_Box) (RttiId_28));
              }
              {
                Var_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_58, 0) = ((MR_Box) (MLDS_Type_11));
              }
              {
                Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (Const_29));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_58));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_59));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ClassId_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 2)));
              MR_String Instance_31 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 3)));
              MR_Word TCName_32;
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word ModuleName_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 1)));
              MR_Word MLDS_Module_71;
              MR_Word RttiId_72;
              MR_Word Const_73;

              MLDS_Module_71 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_70);
              TCName_32 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_30);
              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (ModuleName_70));
                MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Instance_31));
              }
              {
                RttiId_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), RttiId_72, 0) = ((MR_Box) (TCName_32));
                MR_hl_field(MR_mktag(1), RttiId_72, 1) = ((MR_Box) (Var_54));
              }
              {
                Const_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                MR_hl_field(MR_mktag(3), Const_73, 1) = ((MR_Box) (MLDS_Module_71));
                MR_hl_field(MR_mktag(3), Const_73, 2) = ((MR_Box) (RttiId_72));
              }
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_55, 0) = ((MR_Box) (MLDS_Type_11));
              }
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (Const_73));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_55));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_56));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer Ptag_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 1)));
              MR_Integer Stag_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 2)));
              MR_Word Var_61;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word Var_66;
              MR_Word Var_67;

              {
                Var_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_61, 0) = ((MR_Box) (MLDS_Type_11));
              }
              {
                Var_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_67, 0) = ((MR_Box) (Stag_19));
              }
              {
                Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (Var_67));
              }
              {
                Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[0])));
                MR_hl_field(MR_mktag(3), Var_63, 2) = ((MR_Box) (Var_66));
              }
              {
                Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (Ptag_18));
                MR_hl_field(MR_mktag(3), Var_62, 2) = ((MR_Box) (Var_63));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_61));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_62));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ResAddr_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 1)));

              *Rval_12 = ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_114_101_115_101_114_118_101_100_95_97_100_100_114_101_115_115_95_95_91_49_93_95_48_3_f_0(ResAddr_17, MLDS_Type_11);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word ThisTag_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 2)));
              MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_9, (MR_Integer) 1)));
              MR_Word next_value_of_ConsTag_9 = ThisTag_34;

              // direct tailcall eliminated
              ConsTag_9 = next_value_of_ConsTag_9;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_info_lookup_const_var_rval_3_p_0(
  MR_Word Info_4,
  MR_Word Var_5,
  MR_Word * Rval_6)
{
  {
    MR_Word GroundTerm_7;
    MR_Word Var_8;
    MR_Word Var_9;

    ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_p_0(Info_4, Var_5, &GroundTerm_7);
    *Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_7, (MR_Integer) 0)));
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_7, (MR_Integer) 1)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_7, (MR_Integer) 2)));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_structs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ConstStructMap_20;
    MR_Word conv0_STATE_VARIABLE_GlobalData_22;

    ml_backend__ml_unify_gen__ml_gen_const_struct_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_ConstStructMap_20, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_GlobalData_22);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ConstStructMap_20));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_GlobalData_22));
  }
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_structs_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Target_7,
  MR_Word * ConstStructMap_8,
  MR_Word STATE_VARIABLE_GlobalData_0_15,
  MR_Word * STATE_VARIABLE_GlobalData_16)
{
  {
    MR_Word Globals_10;
    MR_Word HighLevelData_11;
    MR_Word Info_12;
    MR_Word ConstStructDb_13;
    MR_Word ConstStructs_14;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Box conv3_ConstStructMap_8;
    MR_Box conv2_STATE_VARIABLE_GlobalData_16;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 268, &HighLevelData_11);
    {
      Info_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_12, 0) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Info_12, 1) = ((MR_Box) ((Target_7 | ((HighLevelData_11 << (MR_Integer) 2)))));
    }
    hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_6, &ConstStructDb_13);
    hlds__const_struct__const_struct_db_get_structs_2_p_0(ConstStructDb_13, &ConstStructs_14);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_const_structs_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Info_12));
    }
    Var_19 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0);
    mercury__list__foldl2_6_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[0], (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[1], (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, Var_18, ConstStructs_14, ((MR_Box) (Var_19)), &conv3_ConstStructMap_8, ((MR_Box) (STATE_VARIABLE_GlobalData_0_15)), &conv2_STATE_VARIABLE_GlobalData_16);
    *ConstStructMap_8 = ((MR_Word) conv3_ConstStructMap_8);
    *STATE_VARIABLE_GlobalData_16 = ((MR_Word) conv2_STATE_VARIABLE_GlobalData_16);
  }
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_5_p_0(
  MR_Word TermVar_6,
  MR_Word Goal_7,
  MR_Word * Stmts_8,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 0)));
    MR_Word GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 1)));
    MR_Word NonLocals_12;
    MR_Word NonLocalList_13;

    NonLocals_12 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocals_12, &NonLocalList_13);
    if ((NonLocalList_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *Stmts_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
    }
    else
    {
      MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), NonLocalList_13, (MR_Integer) 1)));
      MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), NonLocalList_13, (MR_Integer) 0)));

      if ((Var_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], ((MR_Box) (Var_52)), ((MR_Box) (TermVar_6)));
        if (succeeded)
        {
          MR_Word Conjuncts_15;
          MR_Word Var_39;

          succeeded = ((((MR_tag((MR_Word) GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
            Conjuncts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
            succeeded = (Var_39 == (MR_Integer) 0);
          }
          if (succeeded)
          {
            MR_Word TypeInfo_49_49;
            MR_Word TypeCtorInfo_50_50;
            MR_Word ModuleInfo_16;
            MR_Word Target_17;
            MR_Word HighLevelData_18;
            MR_Word VarTypes_19;
            MR_Word GlobalData0_20;
            MR_Word GlobalData_21;
            MR_Word GroundTermMap_22;
            MR_Word TermVarGroundTerm_23;
            MR_Word TermVarLval_24;
            MR_Word TermVarRval_25;
            MR_Word Context_28;
            MR_Word Stmt_29;
            MR_Word Var_40;
            MR_Word STATE_VARIABLE_Info_41_41;
            MR_Box conv0_TermVarGroundTerm_23;
            MR_Word Var_26;
            MR_Word Var_27;

            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_33, &ModuleInfo_16);
            ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_33, &Target_17);
            ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_33, &HighLevelData_18);
            ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_33, &VarTypes_19);
            ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_33, &GlobalData0_20);
            TypeInfo_49_49 = (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2];
            TypeCtorInfo_50_50 = (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;
            Var_40 = mercury__map__init_0_f_0(TypeInfo_49_49, TypeCtorInfo_50_50);
            ml_backend__ml_unify_gen__ml_gen_ground_term_conjuncts_9_p_0(ModuleInfo_16, Target_17, HighLevelData_18, VarTypes_19, Conjuncts_15, GlobalData0_20, &GlobalData_21, Var_40, &GroundTermMap_22);
            ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_21, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_41_41);
            mercury__map__lookup_3_p_0(TypeInfo_49_49, TypeCtorInfo_50_50, GroundTermMap_22, ((MR_Box) (TermVar_6)), &conv0_TermVarGroundTerm_23);
            TermVarGroundTerm_23 = ((MR_Word) conv0_TermVarGroundTerm_23);
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(TermVar_6, TermVarGroundTerm_23, STATE_VARIABLE_Info_41_41, STATE_VARIABLE_Info_34);
            ml_backend__ml_code_util__ml_gen_var_3_p_0(*STATE_VARIABLE_Info_34, TermVar_6, &TermVarLval_24);
            TermVarRval_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), TermVarGroundTerm_23, (MR_Integer) 0)));
            Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), TermVarGroundTerm_23, (MR_Integer) 1)));
            Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), TermVarGroundTerm_23, (MR_Integer) 2)));
            Context_28 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
            Stmt_29 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(TermVarLval_24, TermVarRval_25, Context_28);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_29));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term\'/5", (MR_String) "malformed goal");
              return;
            }
          }
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term\'/5", (MR_String) "unexpected nonlocal");
            return;
          }
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term\'/5", (MR_String) "unexpected nonlocals");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjuncts_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Target_2,
  MR_Word HighLevelData_3,
  MR_Word VarTypes_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_GlobalData_0_6,
  MR_Word * STATE_VARIABLE_GlobalData_7,
  MR_Word STATE_VARIABLE_GroundTermMap_0_8,
  MR_Word * STATE_VARIABLE_GroundTermMap_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_GroundTermMap_9 = STATE_VARIABLE_GroundTermMap_0_8;
      *STATE_VARIABLE_GlobalData_7 = STATE_VARIABLE_GlobalData_0_6;
    }
    else
    {
      MR_Word Goal_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0)));
      MR_Word Goals_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_GlobalData_32_32;
      MR_Word STATE_VARIABLE_GroundTermMap_33_33;
      MR_Word GoalExpr_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_24, (MR_Integer) 0)));
      MR_Word GoalInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_24, (MR_Integer) 1)));
      MR_Word Var_54;
      MR_Word ConsId_55;
      MR_Word Args_56;
      MR_Word Unify_52;
      MR_Word SubInfo_60;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_53;
      MR_Word Var_57;
      MR_Word _HowToConstruct_58;
      MR_Word Var_59;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_GlobalData_0_6;
      MR_Word next_value_of_STATE_VARIABLE_GroundTermMap_0_8;

      succeeded = ((MR_tag((MR_Word) GoalExpr_47)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_47, (MR_Integer) 0)));
        Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_47, (MR_Integer) 1)));
        Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_47, (MR_Integer) 2)));
        Unify_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_47, (MR_Integer) 3)));
        Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_47, (MR_Integer) 4)));
        succeeded = ((MR_tag((MR_Word) Unify_52)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 0)));
          ConsId_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 1)));
          Args_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 2)));
          Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 3)));
          _HowToConstruct_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 4)));
          Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 5)));
          SubInfo_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 6)));
          succeeded = (SubInfo_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Word VarType_61;
        MR_Word MLDS_Type_62;
        MR_Word ConsTag_63;
        MR_Word Context_64;

        hlds__vartypes__lookup_var_type_3_p_0(VarTypes_4, Var_54, &VarType_61);
        MLDS_Type_62 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_1, VarType_61);
        ConsTag_63 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_1, ConsId_55);
        Context_64 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_48);
        ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0(ModuleInfo_1, Target_2, HighLevelData_3, VarTypes_4, Var_54, VarType_61, MLDS_Type_62, ConsId_55, ConsTag_63, Args_56, Context_64, STATE_VARIABLE_GlobalData_0_6, &STATE_VARIABLE_GlobalData_32_32, STATE_VARIABLE_GroundTermMap_0_8, &STATE_VARIABLE_GroundTermMap_33_33);
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct\'/9", (MR_String) "malformed goal");
          return;
        }
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__5_5 = Goals_25;
      next_value_of_STATE_VARIABLE_GlobalData_0_6 = STATE_VARIABLE_GlobalData_32_32;
      next_value_of_STATE_VARIABLE_GroundTermMap_0_8 = STATE_VARIABLE_GroundTermMap_33_33;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_GlobalData_0_6 = next_value_of_STATE_VARIABLE_GlobalData_0_6;
      STATE_VARIABLE_GroundTermMap_0_8 = next_value_of_STATE_VARIABLE_GroundTermMap_0_8;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_6(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2571__6_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2571__5_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2571__4_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2571__3_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2571__2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2571__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word Target_17,
  MR_Word HighLevelData_18,
  MR_Word VarTypes_19,
  MR_Word Var_20,
  MR_Word VarType_21,
  MR_Word MLDS_Type_22,
  MR_Word ConsId_23,
  MR_Word ConsTag_24,
  MR_Word Args_25,
  MR_Word Context_26,
  MR_Word STATE_VARIABLE_GlobalData_0_78,
  MR_Word * STATE_VARIABLE_GlobalData_79,
  MR_Word STATE_VARIABLE_GroundTermMap_0_80,
  MR_Word * STATE_VARIABLE_GroundTermMap_81)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) ConsTag_24)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_24)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0(ModuleInfo_16, Target_17, HighLevelData_18, VarTypes_19, Var_20, VarType_21, MLDS_Type_22, ConsId_23, ConsTag_24, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Args_25, Context_26, STATE_VARIABLE_GlobalData_0_78, STATE_VARIABLE_GlobalData_79, STATE_VARIABLE_GroundTermMap_0_80, STATE_VARIABLE_GroundTermMap_81);
            }
            break;
          case (MR_Integer) 1:
            if ((Args_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "no_tag arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_189 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_25, (MR_Integer) 1)));
              MR_Word Var_190 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_25, (MR_Integer) 0)));

              if ((Var_189 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word TypeInfo_124_124 = (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2];
                MR_Word TypeCtorInfo_125_125 = (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;
                MR_Word ArgGroundTerm_60;
                MR_Word ArgRval_61;
                MR_Word MLDS_ArgType_63;
                MR_Word Rval0_65;
                MR_Word Rval_66;
                MR_Word GroundTerm_67;
                MR_Word STATE_VARIABLE_GroundTermMap_95_95;
                MR_Box conv0_ArgGroundTerm_60;
                MR_Word _ArgType_62;

                mercury__map__det_remove_4_p_0(TypeInfo_124_124, TypeCtorInfo_125_125, ((MR_Box) (Var_190)), &conv0_ArgGroundTerm_60, STATE_VARIABLE_GroundTermMap_0_80, &STATE_VARIABLE_GroundTermMap_95_95);
                ArgGroundTerm_60 = ((MR_Word) conv0_ArgGroundTerm_60);
                ArgRval_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_60, (MR_Integer) 0)));
                _ArgType_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_60, (MR_Integer) 1)));
                MLDS_ArgType_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_60, (MR_Integer) 2)));
                ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_16, Context_26, MLDS_ArgType_63, (MR_Integer) 0, ArgRval_61, &Rval0_65, STATE_VARIABLE_GlobalData_0_78, STATE_VARIABLE_GlobalData_79);
                Rval_66 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_22, ConsTag_24, Rval0_65);
                {
                  GroundTerm_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_67, 0) = ((MR_Box) (Rval_66));
                  MR_hl_field(MR_mktag(0), GroundTerm_67, 1) = ((MR_Box) (VarType_21));
                  MR_hl_field(MR_mktag(0), GroundTerm_67, 2) = ((MR_Box) (MLDS_Type_22));
                }
                mercury__map__det_insert_4_p_0(TypeInfo_124_124, TypeCtorInfo_125_125, ((MR_Box) (Var_20)), ((MR_Box) (GroundTerm_67)), STATE_VARIABLE_GroundTermMap_95_95, STATE_VARIABLE_GroundTermMap_81);
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "no_tag arity != 1");
                  return;
                }
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_33 = ((MR_String) (MR_hl_field(MR_mktag(1), ConsTag_24, (MR_Integer) 0)));
          MR_Word Var_110;
          MR_Word ConstRval_178;
          MR_Word ConstGroundTerm_179;
          MR_Word Var_180;

          {
            Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), Var_110, 1) = ((MR_Box) (String_33));
          }
          {
            ConstRval_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConstRval_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ConstRval_178, 1) = ((MR_Box) (Var_110));
          }
          {
            Var_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_180, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[9]));
            MR_hl_field(MR_mktag(0), Var_180, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_6));
            MR_hl_field(MR_mktag(0), Var_180, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_180, 3) = ((MR_Box) (Args_25));
            MR_hl_field(MR_mktag(0), Var_180, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          mercury__require__expect_3_p_0(Var_180, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
          {
            ConstGroundTerm_179 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConstGroundTerm_179, 0) = ((MR_Box) (ConstRval_178));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_179, 1) = ((MR_Box) (VarType_21));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_179, 2) = ((MR_Box) (MLDS_Type_22));
          }
          mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_179)), STATE_VARIABLE_GroundTermMap_0_80, STATE_VARIABLE_GroundTermMap_81);
          *STATE_VARIABLE_GlobalData_79 = STATE_VARIABLE_GlobalData_0_78;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ConstRval_31;
          MR_Float Float_32 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_24, (MR_Integer) 0)));
          MR_Word ConstGroundTerm_39;
          MR_Word Var_111;
          MR_Word Var_112;

          {
            Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
            MR_hl_field(MR_mktag(3), Var_111, 1) = MR_box_float(Float_32);
          }
          {
            ConstRval_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConstRval_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ConstRval_31, 1) = ((MR_Box) (Var_111));
          }
          {
            Var_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[9]));
            MR_hl_field(MR_mktag(0), Var_112, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_1));
            MR_hl_field(MR_mktag(0), Var_112, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_112, 3) = ((MR_Box) (Args_25));
            MR_hl_field(MR_mktag(0), Var_112, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          mercury__require__expect_3_p_0(Var_112, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
          {
            ConstGroundTerm_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConstGroundTerm_39, 0) = ((MR_Box) (ConstRval_31));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_39, 1) = ((MR_Box) (VarType_21));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_39, 2) = ((MR_Box) (MLDS_Type_22));
          }
          mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_39)), STATE_VARIABLE_GroundTermMap_0_80, STATE_VARIABLE_GroundTermMap_81);
          *STATE_VARIABLE_GlobalData_79 = STATE_VARIABLE_GlobalData_0_78;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1)));
              MR_Word IntConst_30;
              MR_Word ConstRval_143;
              MR_Word ConstGroundTerm_144;
              MR_Word Var_145;

              IntConst_30 = ml_backend__ml_unify_gen__int_tag_to_mlds_rval_const_3_f_0(VarType_21, MLDS_Type_22, IntTag_29);
              {
                ConstRval_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstRval_143, 1) = ((MR_Box) (IntConst_30));
              }
              {
                Var_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_145, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[9]));
                MR_hl_field(MR_mktag(0), Var_145, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_3));
                MR_hl_field(MR_mktag(0), Var_145, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_145, 3) = ((MR_Box) (Args_25));
                MR_hl_field(MR_mktag(0), Var_145, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_145, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
              {
                ConstGroundTerm_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_144, 0) = ((MR_Box) (ConstRval_143));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_144, 1) = ((MR_Box) (VarType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_144, 2) = ((MR_Box) (MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_144)), STATE_VARIABLE_GroundTermMap_0_80, STATE_VARIABLE_GroundTermMap_81);
              *STATE_VARIABLE_GlobalData_79 = STATE_VARIABLE_GlobalData_0_78;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1)));
              MR_String ForeignTag_38 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 2)));
              MR_Word Var_102;
              MR_Word ConstRval_132;
              MR_Word ConstGroundTerm_133;
              MR_Word Var_134;

              {
                Var_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), Var_102, 1) = ((MR_Box) (ForeignLang_37));
                MR_hl_field(MR_mktag(3), Var_102, 2) = ((MR_Box) (ForeignTag_38));
                MR_hl_field(MR_mktag(3), Var_102, 3) = ((MR_Box) (MLDS_Type_22));
              }
              {
                ConstRval_132 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_132, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstRval_132, 1) = ((MR_Box) (Var_102));
              }
              {
                Var_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_134, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[9]));
                MR_hl_field(MR_mktag(0), Var_134, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_2));
                MR_hl_field(MR_mktag(0), Var_134, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_134, 3) = ((MR_Box) (Args_25));
                MR_hl_field(MR_mktag(0), Var_134, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_134, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
              {
                ConstGroundTerm_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_133, 0) = ((MR_Box) (ConstRval_132));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_133, 1) = ((MR_Box) (VarType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_133, 2) = ((MR_Box) (MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_133)), STATE_VARIABLE_GroundTermMap_0_80, STATE_VARIABLE_GroundTermMap_81);
              *STATE_VARIABLE_GlobalData_79 = STATE_VARIABLE_GlobalData_0_78;
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "pred_closure_tag");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "bad constant");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Integer Ptag_188 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1)));

              ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0(ModuleInfo_16, Target_17, HighLevelData_18, VarTypes_19, Var_20, VarType_21, MLDS_Type_22, ConsId_23, ConsTag_24, Ptag_188, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Args_25, Context_26, STATE_VARIABLE_GlobalData_0_78, STATE_VARIABLE_GlobalData_79, STATE_VARIABLE_GroundTermMap_0_80, STATE_VARIABLE_GroundTermMap_81);
            }
            break;
          case (MR_Integer) 12:
            if ((Args_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "no_tag arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_189 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_25, (MR_Integer) 1)));
              MR_Word Var_190 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_25, (MR_Integer) 0)));

              if ((Var_189 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word TypeInfo_124_124 = (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2];
                MR_Word TypeCtorInfo_125_125 = (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;
                MR_Word ArgGroundTerm_60;
                MR_Word ArgRval_61;
                MR_Word MLDS_ArgType_63;
                MR_Word Rval0_65;
                MR_Word Rval_66;
                MR_Word GroundTerm_67;
                MR_Word STATE_VARIABLE_GroundTermMap_95_95;
                MR_Box conv0_ArgGroundTerm_60;
                MR_Word _ArgType_62;

                mercury__map__det_remove_4_p_0(TypeInfo_124_124, TypeCtorInfo_125_125, ((MR_Box) (Var_190)), &conv0_ArgGroundTerm_60, STATE_VARIABLE_GroundTermMap_0_80, &STATE_VARIABLE_GroundTermMap_95_95);
                ArgGroundTerm_60 = ((MR_Word) conv0_ArgGroundTerm_60);
                ArgRval_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_60, (MR_Integer) 0)));
                _ArgType_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_60, (MR_Integer) 1)));
                MLDS_ArgType_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_60, (MR_Integer) 2)));
                ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_16, Context_26, MLDS_ArgType_63, (MR_Integer) 0, ArgRval_61, &Rval0_65, STATE_VARIABLE_GlobalData_0_78, STATE_VARIABLE_GlobalData_79);
                Rval_66 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_22, ConsTag_24, Rval0_65);
                {
                  GroundTerm_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_67, 0) = ((MR_Box) (Rval_66));
                  MR_hl_field(MR_mktag(0), GroundTerm_67, 1) = ((MR_Box) (VarType_21));
                  MR_hl_field(MR_mktag(0), GroundTerm_67, 2) = ((MR_Box) (MLDS_Type_22));
                }
                mercury__map__det_insert_4_p_0(TypeInfo_124_124, TypeCtorInfo_125_125, ((MR_Box) (Var_20)), ((MR_Box) (GroundTerm_67)), STATE_VARIABLE_GroundTermMap_95_95, STATE_VARIABLE_GroundTermMap_81);
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "no_tag arity != 1");
                  return;
                }
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ExtraInitializers_74;
              MR_Word UsesConstructors_75;
              MR_Integer Stag_117 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 2)));
              MR_Integer Ptag_119 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1)));

              UsesConstructors_75 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_17);
              switch (UsesConstructors_75) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word StagRval0_76;
                    MR_Word StagRval_77;
                    MR_Word Var_82;
                    MR_Word Var_85;

                    {
                      Var_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_82, 0) = ((MR_Box) (Stag_117));
                    }
                    {
                      StagRval0_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), StagRval0_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), StagRval0_76, 1) = ((MR_Box) (Var_82));
                    }
                    switch (HighLevelData_18) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            StagRval_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), StagRval_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), StagRval_77, 1) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[9]));
                            MR_hl_field(MR_mktag(3), StagRval_77, 2) = ((MR_Box) (StagRval0_76));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        StagRval_77 = StagRval0_76;
                        break;
                    }
                    {
                      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (StagRval_77));
                    }
                    {
                      ExtraInitializers_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ExtraInitializers_74, 0) = ((MR_Box) (Var_85));
                      MR_hl_field(MR_mktag(1), ExtraInitializers_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  ExtraInitializers_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  break;
              }
              ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0(ModuleInfo_16, Target_17, HighLevelData_18, VarTypes_19, Var_20, VarType_21, MLDS_Type_22, ConsId_23, ConsTag_24, Ptag_119, ExtraInitializers_74, Args_25, Context_26, STATE_VARIABLE_GlobalData_0_78, STATE_VARIABLE_GlobalData_79, STATE_VARIABLE_GroundTermMap_0_80, STATE_VARIABLE_GroundTermMap_81);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer Ptag_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1)));
              MR_Integer Stag_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 2)));
              MR_Word Var_103;
              MR_Word Var_104;
              MR_Word Var_105;
              MR_Word Var_108;
              MR_Word Var_109;
              MR_Word ConstRval_165;
              MR_Word ConstGroundTerm_166;
              MR_Word Var_167;

              {
                Var_103 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_103, 0) = ((MR_Box) (MLDS_Type_22));
              }
              {
                Var_109 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_109, 0) = ((MR_Box) (Stag_36));
              }
              {
                Var_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_108, 1) = ((MR_Box) (Var_109));
              }
              {
                Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[0])));
                MR_hl_field(MR_mktag(3), Var_105, 2) = ((MR_Box) (Var_108));
              }
              {
                Var_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_104, 1) = ((MR_Box) (Ptag_35));
                MR_hl_field(MR_mktag(3), Var_104, 2) = ((MR_Box) (Var_105));
              }
              {
                ConstRval_165 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_165, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ConstRval_165, 1) = ((MR_Box) (Var_103));
                MR_hl_field(MR_mktag(3), ConstRval_165, 2) = ((MR_Box) (Var_104));
              }
              {
                Var_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_167, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[9]));
                MR_hl_field(MR_mktag(0), Var_167, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_5));
                MR_hl_field(MR_mktag(0), Var_167, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_167, 3) = ((MR_Box) (Args_25));
                MR_hl_field(MR_mktag(0), Var_167, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_167, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
              {
                ConstGroundTerm_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_166, 0) = ((MR_Box) (ConstRval_165));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_166, 1) = ((MR_Box) (VarType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_166, 2) = ((MR_Box) (MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_166)), STATE_VARIABLE_GroundTermMap_0_80, STATE_VARIABLE_GroundTermMap_81);
              *STATE_VARIABLE_GlobalData_79 = STATE_VARIABLE_GlobalData_0_78;
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ResAddr_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1)));
              MR_Word ConstRval_154;
              MR_Word ConstGroundTerm_155;
              MR_Word Var_156;

              ConstRval_154 = ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_114_101_115_101_114_118_101_100_95_97_100_100_114_101_115_115_95_95_91_49_93_95_48_3_f_0(ResAddr_34, MLDS_Type_22);
              {
                Var_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_156, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[9]));
                MR_hl_field(MR_mktag(0), Var_156, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_4));
                MR_hl_field(MR_mktag(0), Var_156, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_156, 3) = ((MR_Box) (Args_25));
                MR_hl_field(MR_mktag(0), Var_156, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_156, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
              {
                ConstGroundTerm_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_155, 0) = ((MR_Box) (ConstRval_154));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_155, 1) = ((MR_Box) (VarType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_155, 2) = ((MR_Box) (MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_155)), STATE_VARIABLE_GroundTermMap_0_80, STATE_VARIABLE_GroundTermMap_81);
              *STATE_VARIABLE_GlobalData_79 = STATE_VARIABLE_GlobalData_0_78;
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word ThisTag_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 2)));
              MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1)));
              MR_Word next_value_of_ConsTag_24 = ThisTag_57;

              // direct tailcall eliminated
              ConsTag_24 = next_value_of_ConsTag_24;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__int_tag_to_mlds_rval_const_3_f_0(
  MR_Word Type_5,
  MR_Word MLDS_Type_6,
  MR_Word IntTag_7)
{
  {
    MR_bool succeeded;
    MR_Word Const_8;

    switch (MR_tag((MR_Word) IntTag_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer Int_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), IntTag_7, (MR_Integer) 0)));
          MR_Word Var_19;

          Var_19 = parse_tree__builtin_lib_types__int_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_5, Var_19);
          if (succeeded)
            {
              Const_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Const_8, 0) = ((MR_Box) (Int_9));
            }
          else
          {
            MR_Word Var_20;

            Var_20 = parse_tree__builtin_lib_types__char_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_5, Var_20);
            if (succeeded)
              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (Int_9));
              }
            else
              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (Int_9));
                MR_hl_field(MR_mktag(3), Const_8, 2) = ((MR_Box) (MLDS_Type_6));
              }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Unsigned UInt_10 = ((MR_Unsigned) (MR_hl_field(MR_mktag(1), IntTag_7, (MR_Integer) 0)));

          {
            Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (UInt_10));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          int8_t Int8_11 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(2), IntTag_7, (MR_Integer) 0)));

          {
            Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (MR_Word) (Int8_11));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              uint8_t UInt8_12 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 1)));

              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (MR_Word) (UInt8_12));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              int16_t Int16_13 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 1)));

              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (MR_Word) (Int16_13));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              uint16_t UInt16_14 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 1)));

              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (MR_Word) (UInt16_14));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              int32_t Int32_15 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 1)));

              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (MR_Word) (Int32_15));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              uint32_t UInt32_16 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 1)));

              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (MR_Word) (UInt32_16));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer Int64_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 1)));

              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (Int64_17));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer UInt64_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 1)));

              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (UInt64_18));
              }
            }
            break;
        }
        break;
    }
    return Const_8;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv5_LambdaHeadVar__2_92;

    conv5_LambdaHeadVar__2_92 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_ground_term_conjunct_compound__2726__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_92));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_RvalC_12;

    ml_backend__ml_unify_gen__ml_shift_combine_rval_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv2_RvalC_12);
    *wrapper_arg_4 = ((MR_Box) (conv2_RvalC_12));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_compound__2688__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_72;

    conv1_LambdaHeadVar__2_72 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_ground_term_conjunct_compound__2683__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_72));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_69;

    conv0_LambdaHeadVar__2_69 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_ground_term_conjunct_compound__2682__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_69));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0(
  MR_Word ModuleInfo_18,
  MR_Word Target_19,
  MR_Word HighLevelData_20,
  MR_Word VarTypes_21,
  MR_Word Var_22,
  MR_Word VarType_23,
  MR_Word MLDS_Type_24,
  MR_Word ConsId_25,
  MR_Word ConsTag_26,
  MR_Integer Ptag_27,
  MR_Word ExtraInitializers_28,
  MR_Word Args_29,
  MR_Word Context_30,
  MR_Word STATE_VARIABLE_GlobalData_0_63,
  MR_Word * STATE_VARIABLE_GlobalData_64,
  MR_Word STATE_VARIABLE_GroundTermMap_0_65,
  MR_Word * STATE_VARIABLE_GroundTermMap_66)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_135_135;
    MR_Word TypeCtorInfo_136_136;
    MR_Word TypeCtorInfo_137_137;
    MR_Word ArgTypes_33;
    MR_Word ConsArgTypes_40;
    MR_Word ConsArgWidths_42;
    MR_Word ArgRvals1_46;
    MR_Word ArgRvals_48;
    MR_Word ArgInitializers_51;
    MR_Word SubInitializers_53;
    MR_Word ConstType_54;
    MR_Word Initializer_56;
    MR_Word ModuleName_57;
    MR_Word MLDS_ModuleName_58;
    MR_Word ConstDataAddrRval_59;
    MR_Word TaggedRval_60;
    MR_Word Rval_61;
    MR_Word GroundTerm_62;
    MR_Word STATE_VARIABLE_GlobalData_85_85;
    MR_Word STATE_VARIABLE_GroundTermMap_86_86;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_97;
    MR_Word Var_34;
    MR_Integer Var_35;
    MR_Word Var_36;
    MR_Box conv4_Var_49;
    MR_Box conv3_Var_50;
    MR_Word Var_55;

    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_21, Args_29, &ArgTypes_33);
    succeeded = ((((MR_tag((MR_Word) ConsId_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_25, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_25, (MR_Integer) 1)));
      Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_25, (MR_Integer) 2)));
      Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_25, (MR_Integer) 3)));
      succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(VarType_23);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word TypeCtor_37;
      MR_Word ConsDefn_38;

      parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_23, &TypeCtor_37);
      succeeded = check_hlds__type_util__get_cons_defn_4_p_0(ModuleInfo_18, TypeCtor_37, ConsId_25, &ConsDefn_38);
      if (succeeded)
      {
        MR_Word TypeCtorInfo_116_116 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
        MR_Word TypeCtorInfo_117_117 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
        MR_Word ConsArgDefns_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_38, (MR_Integer) 6)));
        MR_Integer NumExtraArgs_43;
        MR_Integer Var_73;
        MR_Integer Var_74;
        MR_Word Var_75;
        MR_Word Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_38, (MR_Integer) 0)));
        MR_Word Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_38, (MR_Integer) 1)));
        MR_Word Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_38, (MR_Integer) 2)));
        MR_Word Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_38, (MR_Integer) 3)));
        MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_38, (MR_Integer) 4)));
        MR_Word Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_38, (MR_Integer) 5)));
        MR_Word Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_38, (MR_Integer) 7)));

        ConsArgTypes_40 = mercury__list__map_2_f_0(TypeCtorInfo_116_116, TypeCtorInfo_117_117, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[7], ConsArgDefns_39);
        ConsArgWidths_42 = mercury__list__map_2_f_0(TypeCtorInfo_116_116, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[8], ConsArgDefns_39);
        Var_73 = mercury__list__length_1_f_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], Args_29);
        Var_74 = mercury__list__length_1_f_0(TypeCtorInfo_117_117, ConsArgTypes_40);
        NumExtraArgs_43 = (Var_73 - Var_74);
        {
          Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[3]));
          MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_3));
          MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (NumExtraArgs_43));
          MR_hl_field(MR_mktag(0), Var_75, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__require__expect_3_p_0(Var_75, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_compound\'/17", (MR_String) "extra args in from_ground_term_construct scope");
      }
      else
      {
        MR_Word Var_44;

        succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(VarType_23, &Var_44);
        if (succeeded)
        {
          MR_Integer Length_45;

          Length_45 = mercury__list__length_1_f_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], Args_29);
          ConsArgTypes_40 = ml_backend__ml_code_util__ml_make_boxed_types_1_f_0(Length_45);
          ConsArgWidths_42 = mercury__list__duplicate_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, Length_45, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_compound\'/17", (MR_String) "get_cons_defn failed");
            return;
          }
        }
      }
    }
    else
    {
      MR_Integer Length_101;

      Length_101 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ArgTypes_33);
      ConsArgTypes_40 = ArgTypes_33;
      ConsArgWidths_42 = mercury__list__duplicate_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, Length_101, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
    }
    switch (HighLevelData_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgConsArgWidths_47;

          mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, Args_29, ConsArgWidths_42, &ArgConsArgWidths_47);
          ml_backend__ml_unify_gen__construct_ground_term_initializers_lld_8_p_0(ModuleInfo_18, Context_30, ArgConsArgWidths_47, &ArgRvals1_46, STATE_VARIABLE_GlobalData_0_63, &STATE_VARIABLE_GlobalData_85_85, STATE_VARIABLE_GroundTermMap_0_65, &STATE_VARIABLE_GroundTermMap_86_86);
        }
        break;
      case (MR_Integer) 1:
        ml_backend__ml_unify_gen__construct_ground_term_initializers_hld_10_p_0(ModuleInfo_18, Context_30, Args_29, ConsArgTypes_40, ConsArgWidths_42, &ArgRvals1_46, STATE_VARIABLE_GlobalData_0_63, &STATE_VARIABLE_GlobalData_85_85, STATE_VARIABLE_GroundTermMap_0_65, &STATE_VARIABLE_GroundTermMap_86_86);
        break;
    }
    TypeCtorInfo_135_135 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
    TypeCtorInfo_136_136 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
    backend_libs__arg_pack__pack_args_8_p_0(TypeCtorInfo_135_135, TypeCtorInfo_136_136, TypeCtorInfo_136_136, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[9], ConsArgWidths_42, ArgRvals1_46, &ArgRvals_48, ((MR_Box) ((MR_Integer) 0)), &conv4_Var_49, ((MR_Box) ((MR_Integer) 0)), &conv3_Var_50);
    TypeCtorInfo_137_137 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
    ArgInitializers_51 = mercury__list__map_2_f_0(TypeCtorInfo_135_135, TypeCtorInfo_137_137, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[10], ArgRvals_48);
    SubInitializers_53 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_137_137, ExtraInitializers_28, ArgInitializers_51);
    Var_93 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ConsTag_26);
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (ConsId_25));
    }
    ConstType_54 = ml_backend__ml_unify_gen__get_const_type_for_cons_id_5_f_0(Target_19, HighLevelData_20, MLDS_Type_24, Var_93, Var_94);
    succeeded = ((((MR_tag((MR_Word) ConstType_54)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConstType_54, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (succeeded)
    {
      Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConstType_54, (MR_Integer) 1)));
      {
        Initializer_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Initializer_56, 0) = ((MR_Box) (SubInitializers_53));
      }
    }
    else
      {
        Initializer_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Initializer_56, 0) = ((MR_Box) (ConstType_54));
        MR_hl_field(MR_mktag(2), Initializer_56, 1) = ((MR_Box) (SubInitializers_53));
      }
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_18, &ModuleName_57);
    MLDS_ModuleName_58 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_57);
    ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0(MLDS_ModuleName_58, (MR_Integer) 0, ConstType_54, Initializer_56, Context_30, &ConstDataAddrRval_59, STATE_VARIABLE_GlobalData_85_85, STATE_VARIABLE_GlobalData_64);
    succeeded = (Ptag_27 == (MR_Integer) 0);
    if (succeeded)
      TaggedRval_60 = ConstDataAddrRval_59;
    else
      {
        TaggedRval_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TaggedRval_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), TaggedRval_60, 1) = ((MR_Box) (Ptag_27));
        MR_hl_field(MR_mktag(3), TaggedRval_60, 2) = ((MR_Box) (ConstDataAddrRval_59));
      }
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_97, 0) = ((MR_Box) (MLDS_Type_24));
    }
    {
      Rval_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Rval_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Rval_61, 1) = ((MR_Box) (Var_97));
      MR_hl_field(MR_mktag(3), Rval_61, 2) = ((MR_Box) (TaggedRval_60));
    }
    {
      GroundTerm_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), GroundTerm_62, 0) = ((MR_Box) (Rval_61));
      MR_hl_field(MR_mktag(0), GroundTerm_62, 1) = ((MR_Box) (VarType_23));
      MR_hl_field(MR_mktag(0), GroundTerm_62, 2) = ((MR_Box) (MLDS_Type_24));
    }
    mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (Var_22)), ((MR_Box) (GroundTerm_62)), STATE_VARIABLE_GroundTermMap_86_86, STATE_VARIABLE_GroundTermMap_66);
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__construct_ground_term_initializers_lld_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6,
  MR_Word STATE_VARIABLE_GroundTermMap_0_7,
  MR_Word * STATE_VARIABLE_GroundTermMap_8)
{
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_GroundTermMap_8 = STATE_VARIABLE_GroundTermMap_0_7;
    *STATE_VARIABLE_GlobalData_6 = STATE_VARIABLE_GlobalData_0_5;
  }
  else
  {
    MR_Word Arg_19;
    MR_Word ConsArgWidth_20;
    MR_Word ArgConsArgWidths_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word ArgRval_22;
    MR_Word ArgRvals_23;
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word STATE_VARIABLE_GlobalData_31_31;
    MR_Word STATE_VARIABLE_GroundTermMap_32_32;
    MR_Word ArgGroundTerm_46;
    MR_Word ArgRval0_47;
    MR_Word MLDS_ArgType_49;
    MR_Word DoubleWidth_50;
    MR_Box conv0_ArgGroundTerm_46;
    MR_Word _ArgType_48;

    Arg_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0)));
    ConsArgWidth_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1)));
    mercury__map__det_remove_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (Arg_19)), &conv0_ArgGroundTerm_46, STATE_VARIABLE_GroundTermMap_0_7, &STATE_VARIABLE_GroundTermMap_32_32);
    ArgGroundTerm_46 = ((MR_Word) conv0_ArgGroundTerm_46);
    ArgRval0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_46, (MR_Integer) 0)));
    _ArgType_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_46, (MR_Integer) 1)));
    MLDS_ArgType_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_46, (MR_Integer) 2)));
    switch (MR_tag((MR_Word) ConsArgWidth_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsArgWidth_20)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            DoubleWidth_50 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            DoubleWidth_50 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        DoubleWidth_50 = (MR_Integer) 0;
        break;
    }
    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_1, Context_2, MLDS_ArgType_49, DoubleWidth_50, ArgRval0_47, &ArgRval_22, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_31_31);
    ml_backend__ml_unify_gen__construct_ground_term_initializers_lld_8_p_0(ModuleInfo_1, Context_2, ArgConsArgWidths_21, &ArgRvals_23, STATE_VARIABLE_GlobalData_31_31, STATE_VARIABLE_GlobalData_6, STATE_VARIABLE_GroundTermMap_32_32, STATE_VARIABLE_GroundTermMap_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgRval_22));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgRvals_23));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__construct_ground_term_initializers_hld_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Context_12,
  MR_Word Args_13,
  MR_Word ConsArgTypes_14,
  MR_Word ConsArgWidths_15,
  MR_Word * ArgRvals_16,
  MR_Word STATE_VARIABLE_GlobalData_0_27,
  MR_Word * STATE_VARIABLE_GlobalData_28,
  MR_Word STATE_VARIABLE_GroundTermMap_0_29,
  MR_Word * STATE_VARIABLE_GroundTermMap_30)
{
  {
    MR_bool succeeded = (Args_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (succeeded)
    {
      succeeded = (ConsArgTypes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (ConsArgWidths_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      *ArgRvals_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_GroundTermMap_30 = STATE_VARIABLE_GroundTermMap_0_29;
      *STATE_VARIABLE_GlobalData_28 = STATE_VARIABLE_GlobalData_0_27;
    }
    else
    {
      MR_Word Arg_19;
      MR_Word Args1_20;
      MR_Word ConsArgType_21;
      MR_Word ConsArgTypes1_22;
      MR_Word ConsArgWidth_23;
      MR_Word ConsArgWidths1_24;

      succeeded = ((MR_tag((MR_Word) Args_13)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Arg_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0)));
        Args1_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) ConsArgTypes_14)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ConsArgType_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConsArgTypes_14, (MR_Integer) 0)));
          ConsArgTypes1_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConsArgTypes_14, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) ConsArgWidths_15)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            ConsArgWidth_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConsArgWidths_15, (MR_Integer) 0)));
            ConsArgWidths1_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConsArgWidths_15, (MR_Integer) 1)));
          }
        }
      }
      if (succeeded)
      {
        MR_Word ArgRval_25;
        MR_Word ArgRvals1_26;
        MR_Word STATE_VARIABLE_GlobalData_31_31;
        MR_Word STATE_VARIABLE_GroundTermMap_32_32;
        MR_Word ArgGroundTerm_49;
        MR_Word ArgRval0_50;
        MR_Word ArgType_51;
        MR_Word BoxedArgType_53;
        MR_Box conv0_ArgGroundTerm_49;
        MR_Word _MLDS_ArgType_52;

        mercury__map__det_remove_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (Arg_19)), &conv0_ArgGroundTerm_49, STATE_VARIABLE_GroundTermMap_0_29, &STATE_VARIABLE_GroundTermMap_32_32);
        ArgGroundTerm_49 = ((MR_Word) conv0_ArgGroundTerm_49);
        ArgRval0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_49, (MR_Integer) 0)));
        ArgType_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_49, (MR_Integer) 1)));
        _MLDS_ArgType_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_49, (MR_Integer) 2)));
        ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(ModuleInfo_11, (MR_Integer) 1, ConsArgType_21, ConsArgWidth_23, &BoxedArgType_53);
        switch (MR_tag((MR_Word) BoxedArgType_53)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word MLDS_ArgType_70;

              MLDS_ArgType_70 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_11, ArgType_51);
              ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_11, Context_12, MLDS_ArgType_70, (MR_Integer) 0, ArgRval0_50, &ArgRval_25, STATE_VARIABLE_GlobalData_0_27, &STATE_VARIABLE_GlobalData_31_31);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_11, ArgType_51, BoxedArgType_53, (MR_Integer) 0, ArgRval0_50, &ArgRval_25);
              STATE_VARIABLE_GlobalData_31_31 = STATE_VARIABLE_GlobalData_0_27;
            }
            break;
          case (MR_Integer) 3:
            {
              ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_11, ArgType_51, BoxedArgType_53, (MR_Integer) 0, ArgRval0_50, &ArgRval_25);
              STATE_VARIABLE_GlobalData_31_31 = STATE_VARIABLE_GlobalData_0_27;
            }
            break;
        }
        ml_backend__ml_unify_gen__construct_ground_term_initializers_hld_10_p_0(ModuleInfo_11, Context_12, Args1_20, ConsArgTypes1_22, ConsArgWidths1_24, &ArgRvals1_26, STATE_VARIABLE_GlobalData_31_31, STATE_VARIABLE_GlobalData_28, STATE_VARIABLE_GroundTermMap_32_32, STATE_VARIABLE_GroundTermMap_30);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ArgRvals_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgRval_25));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgRvals1_26));
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.construct_ground_term_initializers_hld\'/10", (MR_String) "list length mismatch");
          return;
        }
      }
    }
  }
}

MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_reserved_address_3_f_0(
  MR_Word _ModuleInfo_5,
  MR_Word ResAddr_6,
  MR_Word MLDS_Type_7)
{
  {
    MR_Word Rval_8;

    Rval_8 = ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_114_101_115_101_114_118_101_100_95_97_100_100_114_101_115_115_95_95_91_49_93_95_48_3_f_0(ResAddr_6, MLDS_Type_7);
    return Rval_8;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(
  MR_Word Var_6,
  MR_Word TaggedConsId_7,
  MR_Word * TagTestExpression_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word VarLval_10;
    MR_Word Type_11;
    MR_Word Tag_13;
    MR_Word ModuleInfo_14;
    MR_Word Target_15;
    MR_Word Var_18;
    MR_Word _ConsId_12;

    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_16, Var_6, &VarLval_10);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_16, Var_6, &Type_11);
    _ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedConsId_7, (MR_Integer) 0)));
    Tag_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), TaggedConsId_7, (MR_Integer) 1)));
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_16, &ModuleInfo_14);
    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_16, &Target_15);
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_18, 0) = ((MR_Box) (VarLval_10));
    }
    *TagTestExpression_8 = ml_backend__ml_unify_gen__ml_gen_tag_test_rval_5_f_0(ModuleInfo_14, Target_15, Tag_13, Type_11, Var_18);
    *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__204__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__236__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__224__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__172__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0(
  MR_Word Unification_7,
  MR_Word CodeModel_8,
  MR_Word Context_9,
  MR_Word * Stmts_10,
  MR_Word STATE_VARIABLE_Info_0_49,
  MR_Word * STATE_VARIABLE_Info_50)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Unification_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_7, (MR_Integer) 0)));
          MR_Word ConsId_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_7, (MR_Integer) 1)));
          MR_Word Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_7, (MR_Integer) 2)));
          MR_Word ArgModes_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_7, (MR_Integer) 3)));
          MR_Word HowToConstruct_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_7, (MR_Integer) 4)));
          MR_Word SubInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_7, (MR_Integer) 6)));
          MR_Word TakeAddr_35;
          MR_Word Var_62;
          MR_Word _CellIsUnique_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_7, (MR_Integer) 5)));

          {
            Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[5]));
            MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_2));
            MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (CodeModel_8));
            MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_62, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/6", (MR_String) "construct not det");
          if ((SubInfo_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            TakeAddr_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
          {
            MR_Word MaybeTakeAddr_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), SubInfo_34, (MR_Integer) 0)));
            MR_Word MaybeSizeProfInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), SubInfo_34, (MR_Integer) 1)));
            MR_Word Var_66;

            if ((MaybeTakeAddr_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              TakeAddr_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              TakeAddr_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTakeAddr_36, (MR_Integer) 0)));
            {
              Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[6]));
              MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_3));
              MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (MaybeSizeProfInfo_37));
              MR_hl_field(MR_mktag(0), Var_66, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            mercury__require__expect_3_p_0(Var_66, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/6", (MR_String) "term size profiling not yet supported");
          }
          ml_backend__ml_unify_gen__ml_gen_construct_10_p_0(Var_28, ConsId_29, Args_30, ArgModes_31, TakeAddr_35, HowToConstruct_32, Context_9, Stmts_10, STATE_VARIABLE_Info_0_49, STATE_VARIABLE_Info_50);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CanFail_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_7, (MR_Integer) 4)));
          MR_Word CanCGC_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_7, (MR_Integer) 5)));
          MR_Word ExpectedCodeModel_40;
          MR_Word UnifyStmts_41;
          MR_Word Stmts0_45;
          MR_Word STATE_VARIABLE_Info_54_54;
          MR_Word Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_7, (MR_Integer) 0)));
          MR_Word ConsId_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_7, (MR_Integer) 1)));
          MR_Word Args_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_7, (MR_Integer) 2)));
          MR_Word ArgModes_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_7, (MR_Integer) 3)));

          switch (CanFail_38) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ExpectedCodeModel_40 = (MR_Integer) 1;
                ml_backend__ml_unify_gen__ml_gen_semi_deconstruct_8_p_0(Var_92, ConsId_93, Args_94, ArgModes_95, Context_9, &UnifyStmts_41, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_54_54);
              }
              break;
            case (MR_Integer) 1:
              {
                ExpectedCodeModel_40 = (MR_Integer) 0;
                ml_backend__ml_unify_gen__ml_gen_det_deconstruct_8_p_0(Var_92, ConsId_93, Args_94, ArgModes_95, Context_9, &UnifyStmts_41, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_54_54);
              }
              break;
          }
          switch (CanCGC_39) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word VarLval_42;
                MR_Word Delete_43;
                MR_Word CGCStmt_44;
                MR_Word Var_55;
                MR_Word Var_58;
                MR_Word Var_59;

                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_54_54, Var_92, &VarLval_42);
                {
                  Var_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_58, 0) = ((MR_Box) (VarLval_42));
                }
                {
                  Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[5])));
                  MR_hl_field(MR_mktag(3), Var_55, 2) = ((MR_Box) (Var_58));
                }
                {
                  Delete_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Delete_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Delete_43, 1) = ((MR_Box) (Var_55));
                }
                {
                  CGCStmt_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), CGCStmt_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                  MR_hl_field(MR_mktag(3), CGCStmt_44, 1) = ((MR_Box) (Delete_43));
                  MR_hl_field(MR_mktag(3), CGCStmt_44, 2) = ((MR_Box) (Context_9));
                }
                {
                  Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (CGCStmt_44));
                  MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                Stmts0_45 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, UnifyStmts_41, Var_59);
              }
              break;
            case (MR_Integer) 1:
              Stmts0_45 = UnifyStmts_41;
              break;
          }
          ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_p_0(CodeModel_8, ExpectedCodeModel_40, Context_9, Stmts0_45, Stmts_10, STATE_VARIABLE_Info_54_54, STATE_VARIABLE_Info_50);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TargetVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), Unification_7, (MR_Integer) 0)));
          MR_Word SourceVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), Unification_7, (MR_Integer) 1)));
          MR_Word Type_14;
          MR_Word ModuleInfo_15;
          MR_Word IsDummyType_16;
          MR_Word Var_83;
          MR_Word GroundTerm_20;

          {
            Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[5]));
            MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_1));
            MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_83, 3) = ((MR_Box) (CodeModel_8));
            MR_hl_field(MR_mktag(0), Var_83, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_83, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/6", (MR_String) "assign not det");
          ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_49, TargetVar_12, &Type_14);
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_49, &ModuleInfo_15);
          IsDummyType_16 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_15, Type_14);
          switch (IsDummyType_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *Stmts_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              {
                MR_Word TargetLval_17;
                MR_Word SourceLval_18;
                MR_Word Stmt_19;
                MR_Word Var_87;

                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_49, TargetVar_12, &TargetLval_17);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_49, SourceVar_13, &SourceLval_18);
                {
                  Var_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_87, 0) = ((MR_Box) (SourceLval_18));
                }
                Stmt_19 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(TargetLval_17, Var_87, Context_9);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *Stmts_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_19));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
              break;
          }
          succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_49, SourceVar_13, &GroundTerm_20);
          if (succeeded)
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(TargetVar_12, GroundTerm_20, STATE_VARIABLE_Info_0_49, STATE_VARIABLE_Info_50);
          else
            *STATE_VARIABLE_Info_50 = STATE_VARIABLE_Info_0_49;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Unification_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word VarA_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), Unification_7, (MR_Integer) 1)));
              MR_Word VarB_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), Unification_7, (MR_Integer) 2)));
              MR_Word EqualityOp_23;
              MR_Word VarALval_25;
              MR_Word VarBLval_26;
              MR_Word Test_27;
              MR_Word Var_71;
              MR_Word Var_79;
              MR_Word Var_80;
              MR_Word Type_90;
              MR_Word Stmt_91;
              MR_Word Var_75;

              {
                Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[5]));
                MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_4));
                MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (CodeModel_8));
                MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) ((MR_Integer) 1));
              }
              mercury__require__expect_3_p_0(Var_71, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/6", (MR_String) "simple_test not semidet");
              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_49, VarA_21, &Type_90);
              succeeded = ((MR_tag((MR_Word) Type_90)) == (MR_mktag((MR_Integer) 2)));
              if (succeeded)
              {
                Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), Type_90, (MR_Integer) 0)));
                succeeded = (Var_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              }
              if (succeeded)
                EqualityOp_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
              else
              {
                MR_Word Var_76;

                succeeded = ((MR_tag((MR_Word) Type_90)) == (MR_mktag((MR_Integer) 2)));
                if (succeeded)
                {
                  Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), Type_90, (MR_Integer) 0)));
                  succeeded = (Var_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                if (succeeded)
                  EqualityOp_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16));
                else
                {
                  MR_Word IntType_24;
                  MR_Word Var_77;

                  succeeded = ((MR_tag((MR_Word) Type_90)) == (MR_mktag((MR_Integer) 2)));
                  if (succeeded)
                  {
                    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), Type_90, (MR_Integer) 0)));
                    succeeded = ((MR_tag((MR_Word) Var_77)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                      IntType_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_77, (MR_Integer) 0)));
                  }
                  if (succeeded)
                    {
                      EqualityOp_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), EqualityOp_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                      MR_hl_field(MR_mktag(3), EqualityOp_23, 1) = ((MR_Box) (IntType_24));
                    }
                  else
                  {
                    EqualityOp_23 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[14]);
                  }
                }
              }
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_49, VarA_21, &VarALval_25);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_49, VarB_22, &VarBLval_26);
              {
                Var_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_79, 0) = ((MR_Box) (VarALval_25));
              }
              {
                Var_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_80, 0) = ((MR_Box) (VarBLval_26));
              }
              {
                Test_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Test_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), Test_27, 1) = ((MR_Box) (EqualityOp_23));
                MR_hl_field(MR_mktag(3), Test_27, 2) = ((MR_Box) (Var_79));
                MR_hl_field(MR_mktag(3), Test_27, 3) = ((MR_Box) (Var_80));
              }
              ml_backend__ml_code_util__ml_gen_set_success_5_p_0(Test_27, Context_9, &Stmt_91, STATE_VARIABLE_Info_0_49, STATE_VARIABLE_Info_50);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_91));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/6", (MR_String) "complicated unify");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_semi_deconstruct_8_p_0(
  MR_Word Var_9,
  MR_Word ConsId_10,
  MR_Word Args_11,
  MR_Word ArgModes_12,
  MR_Word Context_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  {
    MR_Word TagTestExpression_16;
    MR_Word SetTagTestResult_17;
    MR_Word SucceededExpression_18;
    MR_Word GetArgsStmts_19;
    MR_Word STATE_VARIABLE_Info_26_26;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word STATE_VARIABLE_Info_28_28;
    MR_Word Type_45;
    MR_Word Tag_46;
    MR_Word ModuleInfo_51;

    ml_backend__ml_unify_gen__ml_gen_tag_test_5_p_0(Var_9, ConsId_10, &TagTestExpression_16, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_26_26);
    ml_backend__ml_code_util__ml_gen_set_success_5_p_0(TagTestExpression_16, Context_13, &SetTagTestResult_17, STATE_VARIABLE_Info_26_26, &STATE_VARIABLE_Info_27_27);
    ml_backend__ml_code_util__ml_gen_test_success_3_p_0(&SucceededExpression_18, STATE_VARIABLE_Info_27_27, &STATE_VARIABLE_Info_28_28);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_28_28, Var_9, &Type_45);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_28_28, &ModuleInfo_51);
    Tag_46 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_51, ConsId_10);
    ml_backend__ml_unify_gen__ml_gen_det_deconstruct_tag_10_p_0(Tag_46, Type_45, Var_9, ConsId_10, Args_11, ArgModes_12, Context_13, &GetArgsStmts_19, STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Info_25);
    if ((GetArgsStmts_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Stmts_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SetTagTestResult_17));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
    {
      MR_Word GetArgs_22;
      MR_Word IfStmt_23;
      MR_Word Var_33;

      GetArgs_22 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), GetArgsStmts_19, Context_13);
      {
        IfStmt_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), IfStmt_23, 0) = ((MR_Box) (SucceededExpression_18));
        MR_hl_field(MR_mktag(2), IfStmt_23, 1) = ((MR_Box) (GetArgs_22));
        MR_hl_field(MR_mktag(2), IfStmt_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(2), IfStmt_23, 3) = ((MR_Box) (Context_13));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (IfStmt_23));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Stmts_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SetTagTestResult_17));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_33));
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_tag_test_5_p_0(
  MR_Word Var_6,
  MR_Word ConsId_7,
  MR_Word * TagTestExpression_8,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  {
    MR_Word VarLval_10;
    MR_Word Type_11;
    MR_Word Tag_12;
    MR_Word ModuleInfo_13;
    MR_Word Target_14;
    MR_Word Var_17;
    MR_Word ModuleInfo_21;

    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_15, Var_6, &VarLval_10);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_15, Var_6, &Type_11);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_15, &ModuleInfo_21);
    Tag_12 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_21, ConsId_7);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_15, &ModuleInfo_13);
    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_15, &Target_14);
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_17, 0) = ((MR_Box) (VarLval_10));
    }
    *TagTestExpression_8 = ml_backend__ml_unify_gen__ml_gen_tag_test_rval_5_f_0(ModuleInfo_13, Target_14, Tag_12, Type_11, Var_17);
    *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_tag_test_rval_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_65;

    conv0_LambdaHeadVar__3_65 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_tag_test_rval__2209__1_6_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_65));
    return wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_tag_test_rval_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word Target_8,
  MR_Word Tag_9,
  MR_Word Type_10,
  MR_Word Rval_11)
{
  {
    MR_bool succeeded;
    MR_Word TagTestRval_12;

    switch (MR_tag((MR_Word) Tag_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Tag_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              TagTestRval_12 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[24]);
            }
            break;
          case (MR_Integer) 1:
            {
              TagTestRval_12 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[24]);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_13 = ((MR_String) (MR_hl_field(MR_mktag(1), Tag_9, (MR_Integer) 0)));
          MR_Word Var_113;
          MR_Word Var_114;

          {
            Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), Var_114, 1) = ((MR_Box) (String_13));
          }
          {
            Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (Var_114));
          }
          {
            TagTestRval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TagTestRval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), TagTestRval_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(3), TagTestRval_12, 2) = ((MR_Box) (Rval_11));
            MR_hl_field(MR_mktag(3), TagTestRval_12, 3) = ((MR_Box) (Var_113));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_14 = MR_unbox_float((MR_hl_field(MR_mktag(2), Tag_9, (MR_Integer) 0)));
          MR_Word Var_110;
          MR_Word Var_111;

          {
            Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
            MR_hl_field(MR_mktag(3), Var_111, 1) = MR_box_float(Float_14);
          }
          {
            Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_110, 1) = ((MR_Box) (Var_111));
          }
          {
            TagTestRval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TagTestRval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), TagTestRval_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
            MR_hl_field(MR_mktag(3), TagTestRval_12, 2) = ((MR_Box) (Rval_11));
            MR_hl_field(MR_mktag(3), TagTestRval_12, 3) = ((MR_Box) (Var_110));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Tag_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_9, (MR_Integer) 1)));

              TagTestRval_12 = ml_backend__ml_unify_gen__ml_gen_int_tag_test_rval_4_f_0(IntTag_15, Type_10, ModuleInfo_7, Rval_11);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_9, (MR_Integer) 1)));
              MR_String ForeignVal_17 = ((MR_String) (MR_hl_field(MR_mktag(3), Tag_9, (MR_Integer) 2)));
              MR_Word MLDS_Type_18;
              MR_Word Const_19;
              MR_Word Var_106;

              MLDS_Type_18 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_7, Type_10);
              {
                Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), Var_106, 1) = ((MR_Box) (ForeignLang_16));
                MR_hl_field(MR_mktag(3), Var_106, 2) = ((MR_Box) (ForeignVal_17));
                MR_hl_field(MR_mktag(3), Var_106, 3) = ((MR_Box) (MLDS_Type_18));
              }
              {
                Const_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Const_19, 1) = ((MR_Box) (Var_106));
              }
              {
                TagTestRval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[14])));
                MR_hl_field(MR_mktag(3), TagTestRval_12, 2) = ((MR_Box) (Rval_11));
                MR_hl_field(MR_mktag(3), TagTestRval_12, 3) = ((MR_Box) (Const_19));
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_unify_gen.ml_gen_tag_test_rval\'/5", (MR_String) "bad tag");
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Integer UnsharedTagNum_121 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_9, (MR_Integer) 1)));
              MR_Word RvalTag_122;
              MR_Word UnsharedTag_123;
              MR_Word Var_128;
              MR_Word Var_129;

              {
                RvalTag_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RvalTag_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), RvalTag_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[8])));
                MR_hl_field(MR_mktag(3), RvalTag_122, 2) = ((MR_Box) (Rval_11));
              }
              {
                Var_129 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_129, 0) = ((MR_Box) (UnsharedTagNum_121));
              }
              {
                Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_128, 1) = ((MR_Box) (Var_129));
              }
              {
                UnsharedTag_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), UnsharedTag_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), UnsharedTag_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[1])));
                MR_hl_field(MR_mktag(3), UnsharedTag_123, 2) = ((MR_Box) (Var_128));
              }
              {
                TagTestRval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[14])));
                MR_hl_field(MR_mktag(3), TagTestRval_12, 2) = ((MR_Box) (RvalTag_122));
                MR_hl_field(MR_mktag(3), TagTestRval_12, 3) = ((MR_Box) (UnsharedTag_123));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer UnsharedTagNum_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_9, (MR_Integer) 1)));
              MR_Word RvalTag_40;
              MR_Word UnsharedTag_41;
              MR_Word Var_98;
              MR_Word Var_99;

              {
                RvalTag_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RvalTag_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), RvalTag_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[8])));
                MR_hl_field(MR_mktag(3), RvalTag_40, 2) = ((MR_Box) (Rval_11));
              }
              {
                Var_99 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_99, 0) = ((MR_Box) (UnsharedTagNum_39));
              }
              {
                Var_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_98, 1) = ((MR_Box) (Var_99));
              }
              {
                UnsharedTag_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), UnsharedTag_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), UnsharedTag_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[1])));
                MR_hl_field(MR_mktag(3), UnsharedTag_41, 2) = ((MR_Box) (Var_98));
              }
              {
                TagTestRval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[14])));
                MR_hl_field(MR_mktag(3), TagTestRval_12, 2) = ((MR_Box) (RvalTag_40));
                MR_hl_field(MR_mktag(3), TagTestRval_12, 3) = ((MR_Box) (UnsharedTag_41));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer PrimaryTagNum_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_9, (MR_Integer) 1)));
              MR_Integer SecondaryTagNum_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_9, (MR_Integer) 2)));
              MR_Word SecondaryTagField_44;
              MR_Word SecondaryTagTestRval_45;
              MR_Word Globals_46;
              MR_Integer NumTagBits_47;
              MR_Word Var_80;
              MR_Word Var_82;
              MR_Word Var_83;

              SecondaryTagField_44 = ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0(ModuleInfo_7, Target_8, PrimaryTagNum_42, Type_10, Rval_11);
              Var_80 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[14]);
              {
                Var_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_83, 0) = ((MR_Box) (SecondaryTagNum_43));
              }
              {
                Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (Var_83));
              }
              {
                SecondaryTagTestRval_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), SecondaryTagTestRval_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), SecondaryTagTestRval_45, 1) = ((MR_Box) (Var_80));
                MR_hl_field(MR_mktag(3), SecondaryTagTestRval_45, 2) = ((MR_Box) (SecondaryTagField_44));
                MR_hl_field(MR_mktag(3), SecondaryTagTestRval_45, 3) = ((MR_Box) (Var_82));
              }
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_46);
              libs__globals__lookup_int_option_3_p_0(Globals_46, (MR_Integer) 250, &NumTagBits_47);
              succeeded = (NumTagBits_47 == (MR_Integer) 0);
              if (succeeded)
                TagTestRval_12 = SecondaryTagTestRval_45;
              else
              {
                MR_Word RvalPTag_48;
                MR_Word PrimaryTagRval_49;
                MR_Word PrimaryTagTestRval_50;
                MR_Word Var_89;
                MR_Word Var_90;

                {
                  RvalPTag_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), RvalPTag_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), RvalPTag_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[8])));
                  MR_hl_field(MR_mktag(3), RvalPTag_48, 2) = ((MR_Box) (Rval_11));
                }
                {
                  Var_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_90, 0) = ((MR_Box) (PrimaryTagNum_42));
                }
                {
                  Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_89, 1) = ((MR_Box) (Var_90));
                }
                {
                  PrimaryTagRval_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), PrimaryTagRval_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), PrimaryTagRval_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[1])));
                  MR_hl_field(MR_mktag(3), PrimaryTagRval_49, 2) = ((MR_Box) (Var_89));
                }
                {
                  PrimaryTagTestRval_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), PrimaryTagTestRval_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), PrimaryTagTestRval_50, 1) = ((MR_Box) (Var_80));
                  MR_hl_field(MR_mktag(3), PrimaryTagTestRval_50, 2) = ((MR_Box) (RvalPTag_48));
                  MR_hl_field(MR_mktag(3), PrimaryTagTestRval_50, 3) = ((MR_Box) (PrimaryTagRval_49));
                }
                {
                  TagTestRval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), TagTestRval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), TagTestRval_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(3), TagTestRval_12, 2) = ((MR_Box) (PrimaryTagTestRval_50));
                  MR_hl_field(MR_mktag(3), TagTestRval_12, 3) = ((MR_Box) (SecondaryTagTestRval_45));
                }
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer Bits_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_9, (MR_Integer) 1)));
              MR_Integer Num_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_9, (MR_Integer) 2)));
              MR_Word Var_72;
              MR_Word Var_73;
              MR_Word Var_74;
              MR_Word Var_75;
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word MLDS_Type_115;

              MLDS_Type_115 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_7, Type_10);
              {
                Var_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_73, 0) = ((MR_Box) (MLDS_Type_115));
              }
              {
                Var_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_79, 0) = ((MR_Box) (Num_52));
              }
              {
                Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (Var_79));
              }
              {
                Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[0])));
                MR_hl_field(MR_mktag(3), Var_75, 2) = ((MR_Box) (Var_78));
              }
              {
                Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (Bits_51));
                MR_hl_field(MR_mktag(3), Var_74, 2) = ((MR_Box) (Var_75));
              }
              {
                Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (Var_73));
                MR_hl_field(MR_mktag(3), Var_72, 2) = ((MR_Box) (Var_74));
              }
              {
                TagTestRval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[14])));
                MR_hl_field(MR_mktag(3), TagTestRval_12, 2) = ((MR_Box) (Rval_11));
                MR_hl_field(MR_mktag(3), TagTestRval_12, 3) = ((MR_Box) (Var_72));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ReservedAddr_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_9, (MR_Integer) 1)));
              MR_Word ReservedAddrRval_54;
              MR_Word MLDS_Type_116;

              MLDS_Type_116 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_7, Type_10);
              ReservedAddrRval_54 = ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_114_101_115_101_114_118_101_100_95_97_100_100_114_101_115_115_95_95_91_49_93_95_48_3_f_0(ReservedAddr_53, MLDS_Type_116);
              {
                TagTestRval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[14])));
                MR_hl_field(MR_mktag(3), TagTestRval_12, 2) = ((MR_Box) (Rval_11));
                MR_hl_field(MR_mktag(3), TagTestRval_12, 3) = ((MR_Box) (ReservedAddrRval_54));
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word ReservedAddrs_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_9, (MR_Integer) 1)));
              MR_Word ThisTag_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_9, (MR_Integer) 2)));
              MR_Word CheckReservedAddrs_57;
              MR_Word MatchesThisTag_62;
              MR_Box conv1_TagTestRval_12;

              {
                CheckReservedAddrs_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), CheckReservedAddrs_57, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_8[0]));
                MR_hl_field(MR_mktag(0), CheckReservedAddrs_57, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_tag_test_rval_5_f_0_1));
                MR_hl_field(MR_mktag(0), CheckReservedAddrs_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), CheckReservedAddrs_57, 3) = ((MR_Box) (ModuleInfo_7));
                MR_hl_field(MR_mktag(0), CheckReservedAddrs_57, 4) = ((MR_Box) (Target_8));
                MR_hl_field(MR_mktag(0), CheckReservedAddrs_57, 5) = ((MR_Box) (Type_10));
                MR_hl_field(MR_mktag(0), CheckReservedAddrs_57, 6) = ((MR_Box) (Rval_11));
              }
              MatchesThisTag_62 = ml_backend__ml_unify_gen__ml_gen_tag_test_rval_5_f_0(ModuleInfo_7, Target_8, ThisTag_56, Type_10, Rval_11);
              conv1_TagTestRval_12 = mercury__list__foldr_3_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, CheckReservedAddrs_57, ReservedAddrs_55, ((MR_Box) (MatchesThisTag_62)));
              TagTestRval_12 = ((MR_Word) conv1_TagTestRval_12);
            }
            break;
        }
        break;
    }
    return TagTestRval_12;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_int_tag_test_rval_4_f_0(
  MR_Word IntTag_6,
  MR_Word Type_7,
  MR_Word ModuleInfo_8,
  MR_Word Rval_9)
{
  {
    MR_bool succeeded;
    MR_Word TagTestRval_10;

    switch (MR_tag((MR_Word) IntTag_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer Int_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), IntTag_6, (MR_Integer) 0)));
          MR_Word ConstRval_12;
          MR_Word Var_64;

          Var_64 = parse_tree__builtin_lib_types__int_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_7, Var_64);
          if (succeeded)
          {
            MR_Word Var_59;

            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_59, 0) = ((MR_Box) (Int_11));
            }
            {
              ConstRval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ConstRval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ConstRval_12, 1) = ((MR_Box) (Var_59));
            }
          }
          else
          {
            MR_Word Var_65;

            Var_65 = parse_tree__builtin_lib_types__char_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_7, Var_65);
            if (succeeded)
            {
              MR_Word Var_60;

              {
                Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (Int_11));
              }
              {
                ConstRval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstRval_12, 1) = ((MR_Box) (Var_60));
              }
            }
            else
            {
              MR_Word MLDS_Type_13;
              MR_Word Var_61;

              MLDS_Type_13 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_8, Type_7);
              {
                Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (Int_11));
                MR_hl_field(MR_mktag(3), Var_61, 2) = ((MR_Box) (MLDS_Type_13));
              }
              {
                ConstRval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstRval_12, 1) = ((MR_Box) (Var_61));
              }
            }
          }
          {
            TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[14])));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (ConstRval_12));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Unsigned UInt_14 = ((MR_Unsigned) (MR_hl_field(MR_mktag(1), IntTag_6, (MR_Integer) 0)));
          MR_Word Var_57;
          MR_Word Var_58;

          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (UInt_14));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (Var_58));
          }
          {
            TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[19])));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_57));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          int8_t Int8_15 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(2), IntTag_6, (MR_Integer) 0)));
          MR_Word Var_53;
          MR_Word Var_54;

          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (MR_Word) (Int8_15));
          }
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (Var_54));
          }
          {
            TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[18])));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
            MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_53));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              uint8_t UInt8_16 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_6, (MR_Integer) 1)));
              MR_Word Var_49;
              MR_Word Var_50;

              {
                Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (MR_Word) (UInt8_16));
              }
              {
                Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (Var_50));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[23])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_49));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              int16_t Int16_17 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_6, (MR_Integer) 1)));
              MR_Word Var_45;
              MR_Word Var_46;

              {
                Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (MR_Word) (Int16_17));
              }
              {
                Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Var_46));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[15])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_45));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              uint16_t UInt16_18 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_6, (MR_Integer) 1)));
              MR_Word Var_41;
              MR_Word Var_42;

              {
                Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (MR_Word) (UInt16_18));
              }
              {
                Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (Var_42));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[20])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_41));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              int32_t Int32_19 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_6, (MR_Integer) 1)));
              MR_Word Var_37;
              MR_Word Var_38;

              {
                Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (MR_Word) (Int32_19));
              }
              {
                Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (Var_38));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[16])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_37));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              uint32_t UInt32_20 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_6, (MR_Integer) 1)));
              MR_Word Var_33;
              MR_Word Var_34;

              {
                Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (MR_Word) (UInt32_20));
              }
              {
                Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (Var_34));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[21])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_33));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer Int64_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), IntTag_6, (MR_Integer) 1)));
              MR_Word Var_29;
              MR_Word Var_30;

              {
                Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Int64_21));
              }
              {
                Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (Var_30));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[17])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_29));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer UInt64_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), IntTag_6, (MR_Integer) 1)));
              MR_Word Var_25;
              MR_Word Var_26;

              {
                Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (UInt64_22));
              }
              {
                Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (Var_26));
              }
              {
                TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[22])));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 2) = ((MR_Box) (Rval_9));
                MR_hl_field(MR_mktag(3), TagTestRval_10, 3) = ((MR_Box) (Var_25));
              }
            }
            break;
        }
        break;
    }
    return TagTestRval_10;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_1(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0_s * env_ptr = (struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_3(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0_s * env_ptr = (struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0_s *) env_ptr_arg;

    (env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__Ctor_75 = ((MR_Word) (env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__conv0_Ctor_75);
    ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_2(env_ptr);
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_2(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0_s * env_ptr = (struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0_s *) env_ptr_arg;

    {
      MR_Integer Var_54;

      (env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__succeeded = ml_backend__ml_type_gen__ml_uses_secondary_tag_4_p_0((env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__TypeCtor_35, (env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__TagValues_45, (env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__Ctor_75, &Var_54);
      if ((env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__succeeded)
        ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_4(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0_s * env_ptr = (struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, &(env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__conv0_Ctor_75, (env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__Ctors_44, ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_3, env_ptr);
        }
        (env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_5(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0_s * env_ptr = (struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_7(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0_s * env_ptr = (struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0_s *) env_ptr_arg;

    (env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__Ctor_76 = ((MR_Word) (env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__conv1_Ctor_76);
    ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_6(env_ptr);
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_6(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0_s * env_ptr = (struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0_s *) env_ptr_arg;

    {
      MR_Integer Var_55;

      (env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__succeeded = ml_backend__ml_type_gen__ml_uses_secondary_tag_4_p_0((env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__TypeCtor_35, (env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__TagValues_45, (env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__Ctor_76, &Var_55);
      (env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__succeeded = !((env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__succeeded);
      if ((env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__succeeded)
        ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_5(env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_8(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0_s * env_ptr = (struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__commit_1) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, &(env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__conv1_Ctor_76, (env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__Ctors_44, ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_7, env_ptr);
        }
        (env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__succeeded = MR_TRUE;
  }
}

MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word Target_8,
  MR_Integer PrimaryTagVal_9,
  MR_Word VarType_10,
  MR_Word Rval_11)
{
  {
    struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0_s env;

    {
      MR_Word SecondaryTagField_12;
      MR_Word MLDS_VarType_13;
      MR_Word Globals_14;
      MR_Word HighLevelData_15;

      MLDS_VarType_13 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_7, VarType_10);
      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_14);
      libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 268, &HighLevelData_15);
      switch (HighLevelData_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_23;
            MR_Word Var_24;
            MR_Word Var_25;

            {
              Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (PrimaryTagVal_9));
            }
            {
              Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (Var_25));
              MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (Rval_11));
              MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[7]));
              MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
              MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (MLDS_VarType_13));
            }
            {
              Var_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_23, 0) = ((MR_Box) (Var_24));
            }
            {
              SecondaryTagField_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), SecondaryTagField_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), SecondaryTagField_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_3[4])));
              MR_hl_field(MR_mktag(3), SecondaryTagField_12, 2) = ((MR_Box) (Var_23));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word FieldId_16;
            MR_Word Var_18;
            MR_Word Var_19;
            MR_Word QualifiedTypeName_36;
            MR_Integer TypeArity_37;
            MR_Word MLDS_Module_38;
            MR_Word TypeQualKind_39;
            MR_String TypeName_40;
            MR_Word TypeTable_41;
            MR_Word TypeDefn_42;
            MR_Word TypeDefnBody_43;
            MR_Word ClassQualifier_56;
            MR_Word ClassQualKind_57;
            MR_String ClassName_58;
            MR_Integer ClassArity_59;
            MR_Word QualClassName_64;
            MR_Word ClassId_65;
            MR_Word ClassPtrType_66;
            MR_Word FieldQualifier_67;
            MR_Word QualifiedFieldName_68;
            MR_Word Var_72;

            parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_10, &(env).ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__TypeCtor_35);
            ml_backend__ml_type_gen__ml_gen_type_name_3_p_0((env).ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__TypeCtor_35, &QualifiedTypeName_36, &TypeArity_37);
            MLDS_Module_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualifiedTypeName_36, (MR_Integer) 0)));
            TypeQualKind_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualifiedTypeName_36, (MR_Integer) 1)));
            TypeName_40 = ((MR_String) (MR_hl_field(MR_mktag(0), QualifiedTypeName_36, (MR_Integer) 2)));
            hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_7, &TypeTable_41);
            hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_41, (env).ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__TypeCtor_35, &TypeDefn_42);
            hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_42, &TypeDefnBody_43);
            switch (MR_tag((MR_Word) TypeDefnBody_43)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_unify_gen.ml_gen_hl_tag_field_id\'/3", (MR_String) "non-du type");
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_46;
                  MR_Word Var_47;
                  MR_Word Var_48;
                  MR_Word Var_49;
                  MR_Word _ReservedTag_50;
                  MR_Word Var_51;
                  MR_Word Var_52;

                  (env).ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__Ctors_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_43, (MR_Integer) 0)));
                  (env).ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__TagValues_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_43, (MR_Integer) 1)));
                  Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_43, (MR_Integer) 2)));
                  Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_43, (MR_Integer) 3)));
                  Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_43, (MR_Integer) 4)));
                  Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_43, (MR_Integer) 5)));
                  _ReservedTag_50 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_43, (MR_Integer) 6)))) & (MR_Integer) 1);
                  Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_43, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeDefnBody_43, (MR_Integer) 7)));
                  ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_4(&env);
                  if ((env).ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__succeeded)
                    ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_8(&env);
                  if ((env).ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_6_f_0_env_0__succeeded)
                  {
                    ClassQualifier_56 = ml_backend__mlds__mlds_append_class_qualifier_module_qual_3_f_0(MLDS_Module_38, TypeName_40, TypeArity_37);
                    ClassQualKind_57 = TypeQualKind_39;
                    ClassName_58 = (MR_String) "tag_type";
                    ClassArity_59 = (MR_Integer) 0;
                  }
                  else
                  {
                    ClassQualifier_56 = MLDS_Module_38;
                    ClassQualKind_57 = (MR_Integer) 0;
                    ClassName_58 = TypeName_40;
                    ClassArity_59 = TypeArity_37;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_unify_gen.ml_gen_hl_tag_field_id\'/3", (MR_String) "non-du type");
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_unify_gen.ml_gen_hl_tag_field_id\'/3", (MR_String) "non-du type");
                }
                break;
            }
            {
              QualClassName_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), QualClassName_64, 0) = ((MR_Box) (ClassQualifier_56));
              MR_hl_field(MR_mktag(0), QualClassName_64, 1) = ((MR_Box) (ClassQualKind_57));
              MR_hl_field(MR_mktag(0), QualClassName_64, 2) = ((MR_Box) (ClassName_58));
            }
            {
              ClassId_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ClassId_65, 0) = ((MR_Box) (QualClassName_64));
              MR_hl_field(MR_mktag(0), ClassId_65, 1) = ((MR_Box) (ClassArity_59));
              MR_hl_field(MR_mktag(0), ClassId_65, 2) = ((MR_Box) ((MR_Integer) 0));
            }
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ClassId_65);
            {
              ClassPtrType_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ClassPtrType_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), ClassPtrType_66, 1) = ((MR_Box) (Var_72));
            }
            FieldQualifier_67 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(Target_8, ClassQualifier_56, ClassQualKind_57, ClassName_58, ClassArity_59);
            {
              QualifiedFieldName_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), QualifiedFieldName_68, 0) = ((MR_Box) (FieldQualifier_67));
              MR_hl_field(MR_mktag(0), QualifiedFieldName_68, 1) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), QualifiedFieldName_68, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            }
            {
              FieldId_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), FieldId_16, 0) = ((MR_Box) (QualifiedFieldName_68));
              MR_hl_field(MR_mktag(1), FieldId_16, 1) = ((MR_Box) (ClassPtrType_66));
            }
            {
              Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (PrimaryTagVal_9));
            }
            {
              Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (Var_19));
              MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (Rval_11));
              MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (FieldId_16));
              MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
              MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (MLDS_VarType_13));
            }
            {
              SecondaryTagField_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), SecondaryTagField_12, 0) = ((MR_Box) (Var_18));
            }
          }
          break;
      }
      return SecondaryTagField_12;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_det_deconstruct_8_p_0(
  MR_Word Var_9,
  MR_Word ConsId_10,
  MR_Word Args_11,
  MR_Word Modes_12,
  MR_Word Context_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  {
    MR_Word Type_16;
    MR_Word Tag_17;
    MR_Word ModuleInfo_24;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_18, Var_9, &Type_16);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_18, &ModuleInfo_24);
    Tag_17 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_24, ConsId_10);
    ml_backend__ml_unify_gen__ml_gen_det_deconstruct_tag_10_p_0(Tag_17, Type_16, Var_9, ConsId_10, Args_11, Modes_12, Context_13, Stmts_14, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_det_deconstruct_tag_10_p_0(
  MR_Word Tag_11,
  MR_Word Type_12,
  MR_Word Var_13,
  MR_Word ConsId_14,
  MR_Word Args_15,
  MR_Word Modes_16,
  MR_Word Context_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_65,
  MR_Word * STATE_VARIABLE_Info_66)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) Tag_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Tag_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_58;
              MR_Word Fields_59;
              MR_Word OffSet_61;
              MR_Integer ArgNum_62;
              MR_Word VarLval_97;
              MR_Integer Var_60;

              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_65, Var_13, &VarLval_97);
              ml_backend__ml_code_util__ml_variable_types_3_p_0(STATE_VARIABLE_Info_0_65, Args_15, &ArgTypes_58);
              ml_backend__ml_unify_gen__ml_field_names_and_types_5_p_0(STATE_VARIABLE_Info_0_65, Type_12, ConsId_14, ArgTypes_58, &Fields_59);
              ml_backend__ml_unify_gen__ml_tag_offset_and_argnum_4_p_0(Tag_11, &Var_60, &OffSet_61, &ArgNum_62);
              ml_backend__ml_unify_gen__ml_gen_unify_args_14_p_0(ConsId_14, Args_15, Modes_16, ArgTypes_58, Fields_59, Type_12, VarLval_97, OffSet_61, ArgNum_62, Tag_11, Context_17, Stmts_18, STATE_VARIABLE_Info_0_65, STATE_VARIABLE_Info_66);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Arg_47;
              MR_Word Mode_48;
              MR_Word Var_73;
              MR_Word Var_74;

              succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Arg_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
                Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
                succeeded = (Var_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Modes_16)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Mode_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_16, (MR_Integer) 0)));
                    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_16, (MR_Integer) 1)));
                    succeeded = (Var_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word ArgType_49;
                MR_Word ArgLval_50;
                MR_Word VarLval_51;
                MR_Word ModuleInfo_52;
                MR_Word HighLevelData_53;

                ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_65, Arg_47, &ArgType_49);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_65, Arg_47, &ArgLval_50);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_65, Var_13, &VarLval_51);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_65, &ModuleInfo_52);
                ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_65, &HighLevelData_53);
                ml_backend__ml_unify_gen__ml_gen_sub_unify_11_p_0(ModuleInfo_52, HighLevelData_53, Mode_48, ArgLval_50, ArgType_49, VarLval_51, Type_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Context_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Stmts_18);
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_det_deconstruct_tag\'/10", (MR_String) "no_tag: arity != 1");
                  return;
                }
              }
              *STATE_VARIABLE_Info_66 = STATE_VARIABLE_Info_0_65;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *Stmts_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *STATE_VARIABLE_Info_66 = STATE_VARIABLE_Info_0_65;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Tag_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 14:
          case (MR_Integer) 15:
            {
              *Stmts_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *STATE_VARIABLE_Info_66 = STATE_VARIABLE_Info_0_65;
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_det_deconstruct_tag\'/10", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
          case (MR_Integer) 13:
            {
              MR_Word ArgTypes_58;
              MR_Word Fields_59;
              MR_Word OffSet_61;
              MR_Integer ArgNum_62;
              MR_Word VarLval_97;
              MR_Integer Var_60;

              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_65, Var_13, &VarLval_97);
              ml_backend__ml_code_util__ml_variable_types_3_p_0(STATE_VARIABLE_Info_0_65, Args_15, &ArgTypes_58);
              ml_backend__ml_unify_gen__ml_field_names_and_types_5_p_0(STATE_VARIABLE_Info_0_65, Type_12, ConsId_14, ArgTypes_58, &Fields_59);
              ml_backend__ml_unify_gen__ml_tag_offset_and_argnum_4_p_0(Tag_11, &Var_60, &OffSet_61, &ArgNum_62);
              ml_backend__ml_unify_gen__ml_gen_unify_args_14_p_0(ConsId_14, Args_15, Modes_16, ArgTypes_58, Fields_59, Type_12, VarLval_97, OffSet_61, ArgNum_62, Tag_11, Context_17, Stmts_18, STATE_VARIABLE_Info_0_65, STATE_VARIABLE_Info_66);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer Ptag_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_11, (MR_Integer) 1)));
              MR_Word Arg_85;
              MR_Word Mode_86;
              MR_Word Var_69;
              MR_Word Var_70;

              succeeded = ((MR_tag((MR_Word) Args_15)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Arg_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0)));
                Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1)));
                succeeded = (Var_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Modes_16)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Mode_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_16, (MR_Integer) 0)));
                    Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_16, (MR_Integer) 1)));
                    succeeded = (Var_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word ArgType_81;
                MR_Word ArgLval_82;
                MR_Word VarLval_83;
                MR_Word ModuleInfo_84;

                ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_65, Arg_85, &ArgType_81);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_65, Arg_85, &ArgLval_82);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_65, Var_13, &VarLval_83);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_65, &ModuleInfo_84);
                ml_backend__ml_unify_gen__ml_gen_direct_arg_deconstruct_9_p_0(ModuleInfo_84, Mode_86, Ptag_54, ArgLval_82, ArgType_81, VarLval_83, Type_12, Context_17, Stmts_18);
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_det_deconstruct_tag\'/10", (MR_String) "direct_arg_tag: arity != 1");
                  return;
                }
              }
              *STATE_VARIABLE_Info_66 = STATE_VARIABLE_Info_0_65;
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word ThisTag_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_11, (MR_Integer) 2)));
              MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_11, (MR_Integer) 1)));
              MR_Word next_value_of_Tag_11 = ThisTag_64;

              // direct tailcall eliminated
              Tag_11 = next_value_of_Tag_11;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_direct_arg_deconstruct_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ArgMode_11,
  MR_Integer Ptag_12,
  MR_Word ArgLval_13,
  MR_Word ArgType_14,
  MR_Word VarLval_15,
  MR_Word VarType_16,
  MR_Word Context_17,
  MR_Word * Stmts_18)
{
  {
    MR_bool succeeded;
    MR_Word LeftFromToInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_11, (MR_Integer) 0)));
    MR_Word RightFromToInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_11, (MR_Integer) 1)));
    MR_Word LeftTopFunctorMode_21;
    MR_Word RightTopFunctorMode_22;

    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_10, LeftFromToInsts_19, ArgType_14, &LeftTopFunctorMode_21);
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_10, RightFromToInsts_20, ArgType_14, &RightTopFunctorMode_22);
    {
      MR_Word Var_29;

      Var_29 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_10, ArgType_14);
      succeeded = (Var_29 == (MR_Integer) 0);
    }
    if (!(succeeded))
    {
      MR_Word Var_28;

      Var_28 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_10, VarType_16);
      succeeded = (Var_28 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_deconstruct\'/9", (MR_String) "dummy unify");
        return;
      }
    }
    else
    {
      succeeded = (LeftTopFunctorMode_21 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (RightTopFunctorMode_22 == (MR_Integer) 0);
      if (succeeded)
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_deconstruct\'/9", (MR_String) "test in arg of [de]construction");
          return;
        }
      }
      else
      {
        succeeded = (LeftTopFunctorMode_21 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (RightTopFunctorMode_22 == (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word VarRval_23;
          MR_Word MLDS_Type_24;
          MR_Word CastRval_25;
          MR_Word Stmt_26;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_39;
          MR_Word Var_40;

          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_35, 0) = ((MR_Box) (VarLval_15));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, VarType_16, ArgType_14, (MR_Integer) 0, Var_35, &VarRval_23);
          MLDS_Type_24 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_10, ArgType_14);
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_36, 0) = ((MR_Box) (MLDS_Type_24));
          }
          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_40, 0) = ((MR_Box) (Ptag_12));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (Var_40));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
            MR_hl_field(MR_mktag(3), Var_37, 2) = ((MR_Box) (VarRval_23));
            MR_hl_field(MR_mktag(3), Var_37, 3) = ((MR_Box) (Var_39));
          }
          {
            CastRval_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastRval_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), CastRval_25, 1) = ((MR_Box) (Var_36));
            MR_hl_field(MR_mktag(3), CastRval_25, 2) = ((MR_Box) (Var_37));
          }
          Stmt_26 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_13, CastRval_25, Context_17);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_26));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        else
        {
          succeeded = (LeftTopFunctorMode_21 == (MR_Integer) 1);
          if (succeeded)
            succeeded = (RightTopFunctorMode_22 == (MR_Integer) 0);
          if (succeeded)
          {
            MR_Word ArgRval_27;
            MR_Word Var_43;
            MR_Word Var_44;
            MR_Word Var_45;
            MR_Word MLDS_Type_49;
            MR_Word CastRval_50;
            MR_Word Stmt_51;

            {
              Var_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_43, 0) = ((MR_Box) (ArgLval_13));
            }
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, ArgType_14, VarType_16, (MR_Integer) 0, Var_43, &ArgRval_27);
            MLDS_Type_49 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_10, VarType_16);
            {
              Var_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_44, 0) = ((MR_Box) (MLDS_Type_49));
            }
            {
              Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Ptag_12));
              MR_hl_field(MR_mktag(3), Var_45, 2) = ((MR_Box) (ArgRval_27));
            }
            {
              CastRval_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CastRval_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), CastRval_50, 1) = ((MR_Box) (Var_44));
              MR_hl_field(MR_mktag(3), CastRval_50, 2) = ((MR_Box) (Var_45));
            }
            Stmt_51 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_15, CastRval_50, Context_17);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_18 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_51));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          else
          {
            succeeded = (LeftTopFunctorMode_21 == (MR_Integer) 2);
            if (succeeded)
              succeeded = (RightTopFunctorMode_22 == (MR_Integer) 2);
            if (succeeded)
              *Stmts_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_deconstruct\'/9", (MR_String) "some strange unify");
                return;
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_args_14_p_0(
  MR_Word ConsId_15,
  MR_Word Args_16,
  MR_Word Modes_17,
  MR_Word ArgTypes_18,
  MR_Word Fields_19,
  MR_Word VarType_20,
  MR_Word VarLval_21,
  MR_Word Offset_22,
  MR_Integer ArgNum_23,
  MR_Word Tag_24,
  MR_Word Context_25,
  MR_Word * Stmts_26,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  {
    MR_bool succeeded;
    MR_Word Stmts0_28;
    MR_Word STATE_VARIABLE_Info_32_32;

    succeeded = ml_backend__ml_unify_gen__ml_gen_unify_args_2_15_p_0(ConsId_15, Args_16, Modes_17, ArgTypes_18, Fields_19, VarType_20, VarLval_21, Offset_22, ArgNum_23, Tag_24, Context_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Stmts0_28, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_32_32);
    if (succeeded)
    {
      *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_32_32;
      *Stmts_26 = Stmts0_28;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unify_args\'/14", (MR_String) "length mismatch");
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_args_2_15_p_0(
  MR_Word ConsId_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word VarType_6,
  MR_Word VarLval_7,
  MR_Word Offset_8,
  MR_Integer ArgNum_9,
  MR_Word Tag_10,
  MR_Word Context_11,
  MR_Word STATE_VARIABLE_Stmts_0_12,
  MR_Word * STATE_VARIABLE_Stmts_13,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      succeeded = (HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = (HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
          *STATE_VARIABLE_Stmts_13 = STATE_VARIABLE_Stmts_0_12;
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word Arg_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Mode_33;
      MR_Word Modes_34;
      MR_Word ArgType_35;
      MR_Word ArgTypes_36;
      MR_Word Field_37;
      MR_Word Fields_38;
      MR_Word Offset1_47;
      MR_Integer ArgNum1_48;
      MR_Integer Var_53;
      MR_Word STATE_VARIABLE_Stmts_54_54;
      MR_Word STATE_VARIABLE_Info_55_55;

      succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Mode_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        Modes_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ArgType_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
          ArgTypes_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) HeadVar__5_5)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Field_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0)));
            Fields_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1)));
            ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(Field_37, Fields_38, Offset_8, &Offset1_47);
            Var_53 = (MR_Integer) 1;
            ArgNum1_48 = (ArgNum_9 + Var_53);
            succeeded = ml_backend__ml_unify_gen__ml_gen_unify_args_2_15_p_0(ConsId_1, Args_32, Modes_34, ArgTypes_36, Fields_38, VarType_6, VarLval_7, Offset1_47, ArgNum1_48, Tag_10, Context_11, STATE_VARIABLE_Stmts_0_12, &STATE_VARIABLE_Stmts_54_54, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_55_55);
            if (succeeded)
            {
              ml_backend__ml_unify_gen__ml_gen_unify_arg_15_p_0(ConsId_1, Arg_31, Mode_33, ArgType_35, Field_37, VarType_6, VarLval_7, Offset_8, ArgNum_9, Tag_10, Context_11, STATE_VARIABLE_Stmts_54_54, STATE_VARIABLE_Stmts_13, STATE_VARIABLE_Info_55_55, STATE_VARIABLE_Info_15);
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_construct_10_p_0(
  MR_Word Var_11,
  MR_Word ConsId_12,
  MR_Word Args_13,
  MR_Word ArgModes_14,
  MR_Word TakeAddr_15,
  MR_Word HowToConstruct_16,
  MR_Word Context_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word Type_20;
    MR_Word Tag_21;
    MR_Word ModuleInfo_28;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_22, Var_11, &Type_20);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_22, &ModuleInfo_28);
    Tag_21 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_28, ConsId_12);
    ml_backend__ml_unify_gen__ml_gen_construct_tag_12_p_0(Tag_21, Type_20, Var_11, ConsId_12, Args_13, ArgModes_14, TakeAddr_15, HowToConstruct_16, Context_17, Stmts_18, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_construct_tag_12_p_0(
  MR_Word Tag_13,
  MR_Word Type_14,
  MR_Word Var_15,
  MR_Word ConsId_16,
  MR_Word Args_17,
  MR_Word ArgModes_18,
  MR_Word TakeAddr_19,
  MR_Word HowToConstruct_20,
  MR_Word Context_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_82,
  MR_Word * STATE_VARIABLE_Info_83)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) Tag_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Tag_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word UsesBaseClass_142;

              UsesBaseClass_142 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(Tag_13);
              ml_backend__ml_unify_gen__ml_gen_compound_13_p_0(ConsId_16, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), UsesBaseClass_142, Var_15, Args_17, ArgModes_18, TakeAddr_19, HowToConstruct_20, Context_21, Stmts_22, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgVar_27;
              MR_Word ArgMode_28;
              MR_Word Var_93;
              MR_Word Var_94;

              succeeded = ((MR_tag((MR_Word) Args_17)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ArgVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0)));
                Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1)));
                succeeded = (Var_93 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ArgModes_18)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgMode_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_18, (MR_Integer) 0)));
                    Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_18, (MR_Integer) 1)));
                    succeeded = (Var_94 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word VarLval_29;
                MR_Word ModuleInfo_30;
                MR_Word MLDS_Type_31;
                MR_Word ArgGroundTerm_32;

                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_82, Var_15, &VarLval_29);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_82, &ModuleInfo_30);
                MLDS_Type_31 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_30, Type_14);
                succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_82, ArgVar_27, &ArgGroundTerm_32);
                if (succeeded)
                {
                  MR_Word ArgRval_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_32, (MR_Integer) 0)));
                  MR_Word MLDS_ArgType_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_32, (MR_Integer) 2)));
                  MR_Word GlobalData0_36;
                  MR_Word Rval0_38;
                  MR_Word GlobalData_39;
                  MR_Word Rval_40;
                  MR_Word GroundTerm_41;
                  MR_Word Stmt_42;
                  MR_Word STATE_VARIABLE_Info_95_95;
                  MR_Word _ArgType_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_32, (MR_Integer) 1)));

                  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_82, &GlobalData0_36);
                  ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_30, Context_21, MLDS_ArgType_35, (MR_Integer) 0, ArgRval_33, &Rval0_38, GlobalData0_36, &GlobalData_39);
                  ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_39, STATE_VARIABLE_Info_0_82, &STATE_VARIABLE_Info_95_95);
                  Rval_40 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_31, Tag_13, Rval0_38);
                  {
                    GroundTerm_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), GroundTerm_41, 0) = ((MR_Box) (Rval_40));
                    MR_hl_field(MR_mktag(0), GroundTerm_41, 1) = ((MR_Box) (Type_14));
                    MR_hl_field(MR_mktag(0), GroundTerm_41, 2) = ((MR_Box) (MLDS_Type_31));
                  }
                  ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_15, GroundTerm_41, STATE_VARIABLE_Info_95_95, STATE_VARIABLE_Info_83);
                  Stmt_42 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_29, Rval_40, Context_21);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *Stmts_22 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_42));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                else
                {
                  MR_Word ArgLval_43;
                  MR_Word ArgType_44;

                  ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_82, ArgVar_27, &ArgLval_43);
                  ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_82, ArgVar_27, &ArgType_44);
                  if ((Tag_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
                  {
                    MR_Word ArgRval_105;
                    MR_Word Rval_106;
                    MR_Word Stmt_107;

                    {
                      ArgRval_105 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ArgRval_105, 0) = ((MR_Box) (ArgLval_43));
                    }
                    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_30, ArgType_44, Type_14, (MR_Integer) 0, ArgRval_105, &Rval_106);
                    Stmt_107 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_29, Rval_106, Context_21);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *Stmts_22 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_107));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  else
                  {
                    MR_Integer Ptag_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_13, (MR_Integer) 1)));
                    MR_Word VarType_46;

                    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_82, Var_15, &VarType_46);
                    ml_backend__ml_unify_gen__ml_gen_direct_arg_construct_9_p_0(ModuleInfo_30, ArgMode_28, Ptag_45, ArgLval_43, ArgType_44, VarLval_29, VarType_46, Context_21, Stmts_22);
                  }
                  *STATE_VARIABLE_Info_83 = STATE_VARIABLE_Info_0_82;
                }
              }
              else
              if ((Tag_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct_tag\'/12", (MR_String) "no_tag: arity != 1");
                  return;
                }
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct_tag\'/12", (MR_String) "direct_arg_tag: arity != 1");
                  return;
                }
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        if ((Args_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word STATE_VARIABLE_Info_86_86;
          MR_Word VarLval_121;
          MR_Word ModuleInfo_122;
          MR_Word MLDS_Type_123;
          MR_Word Rval_124;
          MR_Word GroundTerm_125;
          MR_Word Stmt_126;

          ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_82, Var_15, &VarLval_121);
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_82, &ModuleInfo_122);
          MLDS_Type_123 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_122, Type_14);
          ml_backend__ml_unify_gen__ml_gen_constant_6_p_0(Tag_13, Type_14, MLDS_Type_123, &Rval_124, STATE_VARIABLE_Info_0_82, &STATE_VARIABLE_Info_86_86);
          {
            GroundTerm_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), GroundTerm_125, 0) = ((MR_Box) (Rval_124));
            MR_hl_field(MR_mktag(0), GroundTerm_125, 1) = ((MR_Box) (Type_14));
            MR_hl_field(MR_mktag(0), GroundTerm_125, 2) = ((MR_Box) (MLDS_Type_123));
          }
          ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_15, GroundTerm_125, STATE_VARIABLE_Info_86_86, STATE_VARIABLE_Info_83);
          Stmt_126 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_121, Rval_124, Context_21);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_22 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_126));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct_tag\'/12", (MR_String) "bad constant term");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Tag_13, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 14:
          case (MR_Integer) 15:
            if ((Args_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word STATE_VARIABLE_Info_86_86;
              MR_Word VarLval_121;
              MR_Word ModuleInfo_122;
              MR_Word MLDS_Type_123;
              MR_Word Rval_124;
              MR_Word GroundTerm_125;
              MR_Word Stmt_126;

              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_82, Var_15, &VarLval_121);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_82, &ModuleInfo_122);
              MLDS_Type_123 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_122, Type_14);
              ml_backend__ml_unify_gen__ml_gen_constant_6_p_0(Tag_13, Type_14, MLDS_Type_123, &Rval_124, STATE_VARIABLE_Info_0_82, &STATE_VARIABLE_Info_86_86);
              {
                GroundTerm_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_125, 0) = ((MR_Box) (Rval_124));
                MR_hl_field(MR_mktag(0), GroundTerm_125, 1) = ((MR_Box) (Type_14));
                MR_hl_field(MR_mktag(0), GroundTerm_125, 2) = ((MR_Box) (MLDS_Type_123));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_15, GroundTerm_125, STATE_VARIABLE_Info_86_86, STATE_VARIABLE_Info_83);
              Stmt_126 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_121, Rval_124, Context_21);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_22 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_126));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct_tag\'/12", (MR_String) "bad constant term");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word PredId_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_13, (MR_Integer) 1)));
              MR_Integer ProcId_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_13, (MR_Integer) 2)));

              ml_backend__ml_closure_gen__ml_gen_closure_10_p_0(PredId_51, ProcId_52, Var_15, Args_17, ArgModes_18, HowToConstruct_20, Context_21, Stmts_22, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer ConstNum_146 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_13, (MR_Integer) 1)));
              MR_Word ConstStructMap_147;
              MR_Word GroundTerm0_148;
              MR_Word VarLval_152;
              MR_Word ModuleInfo_153;
              MR_Word MLDS_Type_154;
              MR_Word Rval_155;
              MR_Word GroundTerm_156;
              MR_Word Stmt_157;
              MR_Box conv1_GroundTerm0_148;
              MR_Word _Type_144;
              MR_Word _MLDS_Type_145;

              ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_82, &ConstStructMap_147);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ConstStructMap_147, ConstNum_146, &conv1_GroundTerm0_148);
              GroundTerm0_148 = ((MR_Word) conv1_GroundTerm0_148);
              Rval_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_148, (MR_Integer) 0)));
              _Type_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_148, (MR_Integer) 1)));
              _MLDS_Type_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_148, (MR_Integer) 2)));
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_82, Var_15, &VarLval_152);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_82, &ModuleInfo_153);
              MLDS_Type_154 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_153, Type_14);
              {
                GroundTerm_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_156, 0) = ((MR_Box) (Rval_155));
                MR_hl_field(MR_mktag(0), GroundTerm_156, 1) = ((MR_Box) (Type_14));
                MR_hl_field(MR_mktag(0), GroundTerm_156, 2) = ((MR_Box) (MLDS_Type_154));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_15, GroundTerm_156, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
              Stmt_157 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_152, Rval_155, Context_21);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_22 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_157));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer ConstNum_162 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_13, (MR_Integer) 1)));
              MR_Word ConstStructMap_163;
              MR_Word GroundTerm0_164;
              MR_Word VarLval_168;
              MR_Word ModuleInfo_169;
              MR_Word MLDS_Type_170;
              MR_Word Rval_171;
              MR_Word GroundTerm_172;
              MR_Word Stmt_173;
              MR_Box conv2_GroundTerm0_164;
              MR_Word _Type_160;
              MR_Word _MLDS_Type_161;

              ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_82, &ConstStructMap_163);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ConstStructMap_163, ConstNum_162, &conv2_GroundTerm0_164);
              GroundTerm0_164 = ((MR_Word) conv2_GroundTerm0_164);
              Rval_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_164, (MR_Integer) 0)));
              _Type_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_164, (MR_Integer) 1)));
              _MLDS_Type_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_164, (MR_Integer) 2)));
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_82, Var_15, &VarLval_168);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_82, &ModuleInfo_169);
              MLDS_Type_170 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_169, Type_14);
              {
                GroundTerm_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_172, 0) = ((MR_Box) (Rval_171));
                MR_hl_field(MR_mktag(0), GroundTerm_172, 1) = ((MR_Box) (Type_14));
                MR_hl_field(MR_mktag(0), GroundTerm_172, 2) = ((MR_Box) (MLDS_Type_170));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_15, GroundTerm_172, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
              Stmt_173 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_168, Rval_171, Context_21);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_22 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_173));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer ConstNum_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_13, (MR_Integer) 1)));
              MR_Word ConstStructMap_56;
              MR_Word GroundTerm0_57;
              MR_Word VarLval_115;
              MR_Word ModuleInfo_116;
              MR_Word MLDS_Type_117;
              MR_Word Rval_118;
              MR_Word GroundTerm_119;
              MR_Word Stmt_120;
              MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_13, (MR_Integer) 2)));
              MR_Box conv0_GroundTerm0_57;
              MR_Word _Type_58;
              MR_Word _MLDS_Type_59;

              ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_82, &ConstStructMap_56);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ConstStructMap_56, ConstNum_54, &conv0_GroundTerm0_57);
              GroundTerm0_57 = ((MR_Word) conv0_GroundTerm0_57);
              Rval_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_57, (MR_Integer) 0)));
              _Type_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_57, (MR_Integer) 1)));
              _MLDS_Type_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm0_57, (MR_Integer) 2)));
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_82, Var_15, &VarLval_115);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_82, &ModuleInfo_116);
              MLDS_Type_117 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_116, Type_14);
              {
                GroundTerm_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_119, 0) = ((MR_Box) (Rval_118));
                MR_hl_field(MR_mktag(0), GroundTerm_119, 1) = ((MR_Box) (Type_14));
                MR_hl_field(MR_mktag(0), GroundTerm_119, 2) = ((MR_Box) (MLDS_Type_117));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_15, GroundTerm_119, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
              Stmt_120 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_115, Rval_118, Context_21);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_22 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_120));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word UsesBaseClass_177;
              MR_Integer Ptag_178 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_13, (MR_Integer) 1)));

              UsesBaseClass_177 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(Tag_13);
              ml_backend__ml_unify_gen__ml_gen_compound_13_p_0(ConsId_16, Ptag_178, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), UsesBaseClass_177, Var_15, Args_17, ArgModes_18, TakeAddr_19, HowToConstruct_20, Context_21, Stmts_22, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ArgVar_27;
              MR_Word ArgMode_28;
              MR_Word Var_93;
              MR_Word Var_94;

              succeeded = ((MR_tag((MR_Word) Args_17)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ArgVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0)));
                Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1)));
                succeeded = (Var_93 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ArgModes_18)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgMode_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_18, (MR_Integer) 0)));
                    Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_18, (MR_Integer) 1)));
                    succeeded = (Var_94 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word VarLval_29;
                MR_Word ModuleInfo_30;
                MR_Word MLDS_Type_31;
                MR_Word ArgGroundTerm_32;

                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_82, Var_15, &VarLval_29);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_82, &ModuleInfo_30);
                MLDS_Type_31 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_30, Type_14);
                succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_82, ArgVar_27, &ArgGroundTerm_32);
                if (succeeded)
                {
                  MR_Word ArgRval_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_32, (MR_Integer) 0)));
                  MR_Word MLDS_ArgType_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_32, (MR_Integer) 2)));
                  MR_Word GlobalData0_36;
                  MR_Word Rval0_38;
                  MR_Word GlobalData_39;
                  MR_Word Rval_40;
                  MR_Word GroundTerm_41;
                  MR_Word Stmt_42;
                  MR_Word STATE_VARIABLE_Info_95_95;
                  MR_Word _ArgType_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgGroundTerm_32, (MR_Integer) 1)));

                  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_82, &GlobalData0_36);
                  ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_30, Context_21, MLDS_ArgType_35, (MR_Integer) 0, ArgRval_33, &Rval0_38, GlobalData0_36, &GlobalData_39);
                  ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_39, STATE_VARIABLE_Info_0_82, &STATE_VARIABLE_Info_95_95);
                  Rval_40 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(MLDS_Type_31, Tag_13, Rval0_38);
                  {
                    GroundTerm_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), GroundTerm_41, 0) = ((MR_Box) (Rval_40));
                    MR_hl_field(MR_mktag(0), GroundTerm_41, 1) = ((MR_Box) (Type_14));
                    MR_hl_field(MR_mktag(0), GroundTerm_41, 2) = ((MR_Box) (MLDS_Type_31));
                  }
                  ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_15, GroundTerm_41, STATE_VARIABLE_Info_95_95, STATE_VARIABLE_Info_83);
                  Stmt_42 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_29, Rval_40, Context_21);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *Stmts_22 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_42));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                else
                {
                  MR_Word ArgLval_43;
                  MR_Word ArgType_44;

                  ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_82, ArgVar_27, &ArgLval_43);
                  ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_82, ArgVar_27, &ArgType_44);
                  if ((Tag_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
                  {
                    MR_Word ArgRval_105;
                    MR_Word Rval_106;
                    MR_Word Stmt_107;

                    {
                      ArgRval_105 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ArgRval_105, 0) = ((MR_Box) (ArgLval_43));
                    }
                    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_30, ArgType_44, Type_14, (MR_Integer) 0, ArgRval_105, &Rval_106);
                    Stmt_107 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_29, Rval_106, Context_21);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *Stmts_22 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_107));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  else
                  {
                    MR_Integer Ptag_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_13, (MR_Integer) 1)));
                    MR_Word VarType_46;

                    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_82, Var_15, &VarType_46);
                    ml_backend__ml_unify_gen__ml_gen_direct_arg_construct_9_p_0(ModuleInfo_30, ArgMode_28, Ptag_45, ArgLval_43, ArgType_44, VarLval_29, VarType_46, Context_21, Stmts_22);
                  }
                  *STATE_VARIABLE_Info_83 = STATE_VARIABLE_Info_0_82;
                }
              }
              else
              if ((Tag_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct_tag\'/12", (MR_String) "no_tag: arity != 1");
                  return;
                }
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct_tag\'/12", (MR_String) "direct_arg_tag: arity != 1");
                  return;
                }
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word MaybeStag_48;
              MR_Integer Stag_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_13, (MR_Integer) 2)));
              MR_Word UsesBaseClass_50;
              MR_Integer Ptag_114 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_13, (MR_Integer) 1)));

              {
                MaybeStag_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeStag_48, 0) = ((MR_Box) (Stag_49));
              }
              UsesBaseClass_50 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(Tag_13);
              ml_backend__ml_unify_gen__ml_gen_compound_13_p_0(ConsId_16, Ptag_114, MaybeStag_48, UsesBaseClass_50, Var_15, Args_17, ArgModes_18, TakeAddr_19, HowToConstruct_20, Context_21, Stmts_22, STATE_VARIABLE_Info_0_82, STATE_VARIABLE_Info_83);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word ThisTag_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_13, (MR_Integer) 2)));
              MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_13, (MR_Integer) 1)));
              MR_Word next_value_of_Tag_13 = ThisTag_25;

              // direct tailcall eliminated
              Tag_13 = next_value_of_Tag_13;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_direct_arg_construct_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ArgMode_11,
  MR_Integer Ptag_12,
  MR_Word ArgLval_13,
  MR_Word ArgType_14,
  MR_Word VarLval_15,
  MR_Word VarType_16,
  MR_Word Context_17,
  MR_Word * Stmts_18)
{
  {
    MR_bool succeeded;
    MR_Word LeftFromToInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_11, (MR_Integer) 0)));
    MR_Word RightFromToInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_11, (MR_Integer) 1)));
    MR_Word LeftTopFunctorMode_21;
    MR_Word RightTopFunctorMode_22;

    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_10, LeftFromToInsts_19, ArgType_14, &LeftTopFunctorMode_21);
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_10, RightFromToInsts_20, ArgType_14, &RightTopFunctorMode_22);
    {
      MR_Word Var_29;

      Var_29 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_10, ArgType_14);
      succeeded = (Var_29 == (MR_Integer) 0);
    }
    if (!(succeeded))
    {
      MR_Word Var_28;

      Var_28 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_10, VarType_16);
      succeeded = (Var_28 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_construct\'/9", (MR_String) "dummy unify");
        return;
      }
    }
    else
    {
      succeeded = (LeftTopFunctorMode_21 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (RightTopFunctorMode_22 == (MR_Integer) 0);
      if (succeeded)
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_construct\'/9", (MR_String) "test in arg of [de]construction");
          return;
        }
      }
      else
      {
        succeeded = (LeftTopFunctorMode_21 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (RightTopFunctorMode_22 == (MR_Integer) 1);
        if (succeeded)
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_construct\'/9", (MR_String) "left-to-right data flow in construction");
            return;
          }
        }
        else
        {
          succeeded = (LeftTopFunctorMode_21 == (MR_Integer) 1);
          if (succeeded)
            succeeded = (RightTopFunctorMode_22 == (MR_Integer) 0);
          if (succeeded)
          {
            MR_Word ArgRval_23;
            MR_Word MLDS_Type_24;
            MR_Word CastRval_25;
            MR_Word Stmt_26;
            MR_Word Var_37;
            MR_Word Var_38;
            MR_Word Var_39;

            {
              Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_37, 0) = ((MR_Box) (ArgLval_13));
            }
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, ArgType_14, VarType_16, (MR_Integer) 0, Var_37, &ArgRval_23);
            MLDS_Type_24 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_10, VarType_16);
            {
              Var_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_38, 0) = ((MR_Box) (MLDS_Type_24));
            }
            {
              Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (Ptag_12));
              MR_hl_field(MR_mktag(3), Var_39, 2) = ((MR_Box) (ArgRval_23));
            }
            {
              CastRval_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CastRval_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), CastRval_25, 1) = ((MR_Box) (Var_38));
              MR_hl_field(MR_mktag(3), CastRval_25, 2) = ((MR_Box) (Var_39));
            }
            Stmt_26 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_15, CastRval_25, Context_17);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_18 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_26));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
          else
          {
            succeeded = (LeftTopFunctorMode_21 == (MR_Integer) 2);
            if (succeeded)
              succeeded = (RightTopFunctorMode_22 == (MR_Integer) 2);
            if (succeeded)
            {
              MR_Word MLDS_ArgType_27;
              MR_Word Var_42;
              MR_Word Var_43;
              MR_Word Var_44;
              MR_Word Var_45;
              MR_Word ArgRval_49;
              MR_Word MLDS_Type_50;
              MR_Word CastRval_51;
              MR_Word Stmt_52;

              MLDS_ArgType_27 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_10, ArgType_14);
              {
                Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
                MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (MLDS_ArgType_27));
              }
              {
                Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (Var_43));
              }
              ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, ArgType_14, VarType_16, (MR_Integer) 0, Var_42, &ArgRval_49);
              MLDS_Type_50 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_10, VarType_16);
              {
                Var_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_44, 0) = ((MR_Box) (MLDS_Type_50));
              }
              {
                Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Ptag_12));
                MR_hl_field(MR_mktag(3), Var_45, 2) = ((MR_Box) (ArgRval_49));
              }
              {
                CastRval_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastRval_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), CastRval_51, 1) = ((MR_Box) (Var_44));
                MR_hl_field(MR_mktag(3), CastRval_51, 2) = ((MR_Box) (Var_45));
              }
              Stmt_52 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_15, CastRval_51, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_52));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_construct\'/9", (MR_String) "some strange unify");
                return;
              }
            }
          }
        }
      }
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(
  MR_Word Type_5,
  MR_Word Tag_6,
  MR_Word Rval_7)
{
  {
    MR_Word CastRval_8;
    MR_Word TagRval_9;
    MR_Word Var_11;

    if ((Tag_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
      TagRval_9 = Rval_7;
    else
    {
      MR_Integer Ptag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_6, (MR_Integer) 1)));

      {
        TagRval_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TagRval_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), TagRval_9, 1) = ((MR_Box) (Ptag_10));
        MR_hl_field(MR_mktag(3), TagRval_9, 2) = ((MR_Box) (Rval_7));
      }
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_11, 0) = ((MR_Box) (Type_5));
    }
    {
      CastRval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CastRval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), CastRval_8, 1) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(3), CastRval_8, 2) = ((MR_Box) (TagRval_9));
    }
    return CastRval_8;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_compound_13_p_0(
  MR_Word ConsId_14,
  MR_Integer Ptag_15,
  MR_Word MaybeStag_16,
  MR_Word UsesBaseClass_17,
  MR_Word Var_18,
  MR_Word ArgVars_19,
  MR_Word ArgModes_20,
  MR_Word TakeAddr_21,
  MR_Word HowToConstruct_22,
  MR_Word Context_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  {
    MR_bool succeeded;
    MR_Word CompilationTarget_26;
    MR_Word MaybeCtorName_27;
    MR_Word ExplicitSecTag_31;
    MR_Word ExtraRvals_36;
    MR_Word ExtraArgTypes_37;
    MR_Word Var_44;

    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_38, &CompilationTarget_26);
    switch (UsesBaseClass_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word CtorName_28;
          MR_Word ConsId_55;
          MR_Word ModuleName_56;
          MR_Word ConsSymName_49;
          MR_Integer ConsArity_50;
          MR_Word TypeCtor_51;
          MR_Word SymModuleName_52;
          MR_String Var_53;

          succeeded = ((((MR_tag((MR_Word) ConsId_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_14, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            ConsSymName_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_14, (MR_Integer) 1)));
            ConsArity_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_14, (MR_Integer) 2)));
            TypeCtor_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_14, (MR_Integer) 3)));
            succeeded = ((MR_tag((MR_Word) ConsSymName_49)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              SymModuleName_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConsSymName_49, (MR_Integer) 0)));
              Var_53 = ((MR_String) (MR_hl_field(MR_mktag(1), ConsSymName_49, (MR_Integer) 1)));
            }
          }
          if (succeeded)
          {
            MR_String ConsName_54;

            ConsName_54 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(CompilationTarget_26, TypeCtor_51, ConsSymName_49, ConsArity_50);
            {
              ConsId_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ConsId_55, 0) = ((MR_Box) (ConsName_54));
              MR_hl_field(MR_mktag(0), ConsId_55, 1) = ((MR_Box) (ConsArity_50));
            }
            ModuleName_56 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(SymModuleName_52);
          }
          else
          {
            MR_String ConsName_61;

            ConsName_61 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_14);
            {
              ConsId_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ConsId_55, 0) = ((MR_Box) (ConsName_61));
              MR_hl_field(MR_mktag(0), ConsId_55, 1) = ((MR_Box) ((MR_Integer) 0));
            }
            ModuleName_56 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_3[6]);
          }
          {
            CtorName_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CtorName_28, 0) = ((MR_Box) (ModuleName_56));
            MR_hl_field(MR_mktag(0), CtorName_28, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), CtorName_28, 2) = ((MR_Box) (ConsId_55));
          }
          {
            MaybeCtorName_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeCtorName_27, 0) = ((MR_Box) (CtorName_28));
          }
        }
        break;
      case (MR_Integer) 1:
        MaybeCtorName_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
    if ((MaybeStag_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      ExplicitSecTag_31 = (MR_Integer) 0;
      ExtraRvals_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      ExtraArgTypes_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Integer Stag_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeStag_16, (MR_Integer) 0)));
      MR_Word UsesConstructors_30;

      UsesConstructors_30 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(CompilationTarget_26);
      switch (UsesConstructors_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word StagRval0_32;
            MR_Word StagRval_34;
            MR_Word Var_40;

            ExplicitSecTag_31 = (MR_Integer) 1;
            {
              Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_40, 0) = ((MR_Box) (Stag_29));
            }
            {
              StagRval0_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), StagRval0_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), StagRval0_32, 1) = ((MR_Box) (Var_40));
            }
            {
              StagRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), StagRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), StagRval_34, 1) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[4]));
              MR_hl_field(MR_mktag(3), StagRval_34, 2) = ((MR_Box) (StagRval0_32));
            }
            {
              ExtraRvals_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ExtraRvals_36, 0) = ((MR_Box) (StagRval_34));
              MR_hl_field(MR_mktag(1), ExtraRvals_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            ExtraArgTypes_37 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_1[13]);
          }
          break;
        case (MR_Integer) 1:
          {
            ExplicitSecTag_31 = (MR_Integer) 0;
            ExtraRvals_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            ExtraArgTypes_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          break;
      }
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (ConsId_14));
    }
    ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0(Var_44, MaybeCtorName_27, Ptag_15, ExplicitSecTag_31, Var_18, ExtraRvals_36, ExtraArgTypes_37, ArgVars_19, ArgModes_20, TakeAddr_21, HowToConstruct_22, Context_23, Stmts_24, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__595__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0(
  MR_Word MaybeConsId_16,
  MR_Word MaybeCtorName_17,
  MR_Integer Tag_18,
  MR_Word ExplicitSecTag_19,
  MR_Word Var_20,
  MR_Word ExtraRvals_21,
  MR_Word ExtraTypes_22,
  MR_Word ArgVars_23,
  MR_Word ArgModes_24,
  MR_Word TakeAddr_25,
  MR_Word HowToConstruct_26,
  MR_Word Context_27,
  MR_Word * Stmts_28,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  {
    MR_bool succeeded;
    MR_Word VarType_30;
    MR_Word MLDS_Type_31;
    MR_Word VarLval_32;
    MR_Word MaybeTag_33;
    MR_Word ArgTypes_34;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_37, Var_20, &VarType_30);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_37, VarType_30, &MLDS_Type_31);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_37, Var_20, &VarLval_32);
    succeeded = (Tag_18 == (MR_Integer) 0);
    if (succeeded)
      MaybeTag_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MaybeTag_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeTag_33, 0) = ((MR_Box) (Tag_18));
      }
    ml_backend__ml_code_util__ml_variable_types_3_p_0(STATE_VARIABLE_Info_0_37, ArgVars_23, &ArgTypes_34);
    switch (MR_tag((MR_Word) HowToConstruct_26)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HowToConstruct_26)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_42;

              {
                Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[4]));
                MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0_1));
                MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (TakeAddr_25));
                MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_42, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_new_object\'/15", (MR_String) "cannot take address of static object\'s field");
              ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0(MaybeConsId_16, MaybeCtorName_17, MaybeTag_33, Var_20, VarLval_32, VarType_30, MLDS_Type_31, ExtraRvals_21, ExtraTypes_22, ArgVars_23, ArgTypes_34, Context_27, Stmts_28, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
            }
            break;
          case (MR_Integer) 1:
            ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_101_119_95_111_98_106_101_99_116_95_100_121_110_97_109_105_99_97_108_108_121_95_95_91_53_93_95_48_18_p_0(MaybeConsId_16, MaybeCtorName_17, MaybeTag_33, ExplicitSecTag_19, VarLval_32, VarType_30, MLDS_Type_31, ExtraRvals_21, ExtraTypes_22, ArgVars_23, ArgTypes_34, ArgModes_24, TakeAddr_25, Context_27, Stmts_28, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CellToReuse_35 = (MR_Word) MR_body(((MR_Word) HowToConstruct_26), (MR_Integer) 1);

          ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_20_p_0(MaybeConsId_16, MaybeCtorName_17, Tag_18, MaybeTag_33, ExplicitSecTag_19, Var_20, VarLval_32, VarType_30, MLDS_Type_31, ExtraRvals_21, ExtraTypes_22, ArgVars_23, ArgTypes_34, ArgModes_24, TakeAddr_25, CellToReuse_35, Context_27, Stmts_28, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_new_object\'/15", (MR_String) "construct_in_region NYI");
            return;
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_20_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__832__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_20_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_LambdaHeadVar__2_83;

    ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__815__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_LambdaHeadVar__2_83);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_83));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_20_p_0(
  MR_Word MaybeConsId_21,
  MR_Word MaybeCtorName_22,
  MR_Integer Tag_23,
  MR_Word MaybeTag_24,
  MR_Word ExplicitSecTag_25,
  MR_Word Var_26,
  MR_Word VarLval_27,
  MR_Word VarType_28,
  MR_Word MLDS_Type_29,
  MR_Word ExtraRvals_30,
  MR_Word ExtraTypes_31,
  MR_Word ArgVars_32,
  MR_Word ArgTypes_33,
  MR_Word ArgModes_34,
  MR_Word TakeAddr_35,
  MR_Word CellToReuse_36,
  MR_Word Context_37,
  MR_Word * Stmts_38,
  MR_Word STATE_VARIABLE_Info_0_77,
  MR_Word * STATE_VARIABLE_Info_78)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_116_116;
    MR_Word TypeCtorInfo_117_117;
    MR_Word ReuseVar_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellToReuse_36, (MR_Integer) 0)));
    MR_Word ReuseConsIds_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellToReuse_36, (MR_Integer) 1)));
    MR_Word ConsId_44;
    MR_Word ReusePrimaryTags0_50;
    MR_Word ReusePrimaryTags_51;
    MR_Word ConsIdTag_52;
    MR_Word Fields_53;
    MR_Integer PrimaryTag_54;
    MR_Word OffSet_55;
    MR_Integer ArgNum_56;
    MR_Word Var1Lval_57;
    MR_Word Var2Lval_58;
    MR_Word DifferentTags_60;
    MR_Word Var2Rval_61;
    MR_Word CastVar2Rval_66;
    MR_Word HeapTestStmt_67;
    MR_Word ExtraRvalStmts_68;
    MR_Word FieldStmts_69;
    MR_Word TakeAddrInfos_70;
    MR_Word TakeAddrStmts_71;
    MR_Word ThenStmts_72;
    MR_Word ThenStmt_73;
    MR_Word DynamicStmts_74;
    MR_Word ElseStmt_75;
    MR_Word IfStmt_76;
    MR_Word Var_81;
    MR_Word Var_84;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word STATE_VARIABLE_Info_99_99;
    MR_Word STATE_VARIABLE_Info_100_100;
    MR_Word Var_101;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word _NeedsUpdates_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellToReuse_36, (MR_Integer) 2)));

    if ((MaybeConsId_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_new_object_reuse_cell\'/20", (MR_String) "unknown cons id");
        return;
      }
    }
    else
      ConsId_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeConsId_21, (MR_Integer) 0)));
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_20_p_0_1));
      MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (STATE_VARIABLE_Info_0_77));
    }
    TypeCtorInfo_116_116 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, TypeCtorInfo_116_116, Var_81, ReuseConsIds_41, &ReusePrimaryTags0_50);
    mercury__list__remove_dups_2_p_0(TypeCtorInfo_116_116, ReusePrimaryTags0_50, &ReusePrimaryTags_51);
    ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_77, ConsId_44, &ConsIdTag_52);
    ml_backend__ml_unify_gen__ml_field_names_and_types_5_p_0(STATE_VARIABLE_Info_0_77, VarType_28, ConsId_44, ArgTypes_33, &Fields_53);
    ml_backend__ml_unify_gen__ml_tag_offset_and_argnum_4_p_0(ConsIdTag_52, &PrimaryTag_54, &OffSet_55, &ArgNum_56);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_77, Var_26, &Var1Lval_57);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_77, ReuseVar_40, &Var2Lval_58);
    {
      Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[3]));
      MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_20_p_0_2));
      MR_hl_field(MR_mktag(0), Var_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_84, 3) = ((MR_Box) (PrimaryTag_54));
    }
    mercury__list__filter_3_p_0(TypeCtorInfo_116_116, Var_84, ReusePrimaryTags_51, &DifferentTags_60);
    if ((DifferentTags_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        Var2Rval_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var2Rval_61, 0) = ((MR_Box) (Var2Lval_58));
      }
    else
    {
      MR_Word Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), DifferentTags_60, (MR_Integer) 1)));
      MR_Integer Var_119 = ((MR_Integer) (MR_hl_field(MR_mktag(1), DifferentTags_60, (MR_Integer) 0)));

      if ((Var_118 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Var_92;
        MR_Word Var_94;
        MR_Word Var_95;

        {
          Var_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_94, 0) = ((MR_Box) (Var2Lval_58));
        }
        Var_95 = ml_backend__ml_unify_gen__ml_gen_mktag_1_f_0(Var_119);
        {
          Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          MR_hl_field(MR_mktag(3), Var_92, 2) = ((MR_Box) (Var_94));
          MR_hl_field(MR_mktag(3), Var_92, 3) = ((MR_Box) (Var_95));
        }
        {
          Var2Rval_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var2Rval_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var2Rval_61, 1) = ((MR_Box) (PrimaryTag_54));
          MR_hl_field(MR_mktag(3), Var2Rval_61, 2) = ((MR_Box) (Var_92));
        }
      }
      else
      {
        MR_Word Var_87;
        MR_Word Var_90;

        {
          Var_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_90, 0) = ((MR_Box) (Var2Lval_58));
        }
        {
          Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[5])));
          MR_hl_field(MR_mktag(3), Var_87, 2) = ((MR_Box) (Var_90));
        }
        {
          Var2Rval_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var2Rval_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var2Rval_61, 1) = ((MR_Box) (PrimaryTag_54));
          MR_hl_field(MR_mktag(3), Var2Rval_61, 2) = ((MR_Box) (Var_87));
        }
      }
    }
    {
      Var_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_96, 0) = ((MR_Box) (MLDS_Type_29));
    }
    {
      CastVar2Rval_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CastVar2Rval_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), CastVar2Rval_66, 1) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(3), CastVar2Rval_66, 2) = ((MR_Box) (Var2Rval_61));
    }
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_97, 1) = ((MR_Box) (Var1Lval_57));
      MR_hl_field(MR_mktag(3), Var_97, 2) = ((MR_Box) (CastVar2Rval_66));
    }
    {
      HeapTestStmt_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeapTestStmt_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), HeapTestStmt_67, 1) = ((MR_Box) (Var_97));
      MR_hl_field(MR_mktag(3), HeapTestStmt_67, 2) = ((MR_Box) (Context_37));
    }
    ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_10_p_0(ExtraRvals_30, ExtraTypes_31, VarType_28, VarLval_27, (MR_Integer) 0, ConsIdTag_52, Context_37, &ExtraRvalStmts_68, STATE_VARIABLE_Info_0_77, &STATE_VARIABLE_Info_99_99);
    ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_16_p_0(ConsId_44, ArgVars_32, ArgModes_34, ArgTypes_33, Fields_53, TakeAddr_35, VarType_28, VarLval_27, OffSet_55, ArgNum_56, ConsIdTag_52, Context_37, &FieldStmts_69, &TakeAddrInfos_70, STATE_VARIABLE_Info_99_99, &STATE_VARIABLE_Info_100_100);
    ml_backend__ml_unify_gen__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_70, VarLval_27, MLDS_Type_29, MaybeTag_24, Context_37, STATE_VARIABLE_Info_100_100, &TakeAddrStmts_71);
    TypeCtorInfo_117_117 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
    Var_101 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_117_117, FieldStmts_69, TakeAddrStmts_71);
    ThenStmts_72 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_117_117, ExtraRvalStmts_68, Var_101);
    {
      ThenStmt_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ThenStmt_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ThenStmt_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ThenStmt_73, 2) = ((MR_Box) (ThenStmts_72));
      MR_hl_field(MR_mktag(0), ThenStmt_73, 3) = ((MR_Box) (Context_37));
    }
    ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0(MaybeConsId_21, MaybeCtorName_22, Tag_23, ExplicitSecTag_25, Var_26, ExtraRvals_30, ExtraTypes_31, ArgVars_32, ArgModes_34, TakeAddr_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), Context_37, &DynamicStmts_74, STATE_VARIABLE_Info_100_100, STATE_VARIABLE_Info_78);
    {
      ElseStmt_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ElseStmt_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ElseStmt_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ElseStmt_75, 2) = ((MR_Box) (DynamicStmts_74));
      MR_hl_field(MR_mktag(0), ElseStmt_75, 3) = ((MR_Box) (Context_37));
    }
    {
      Var_108 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_108, 0) = ((MR_Box) (Var1Lval_57));
    }
    {
      Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (ElseStmt_75));
    }
    {
      IfStmt_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), IfStmt_76, 0) = ((MR_Box) (Var_108));
      MR_hl_field(MR_mktag(2), IfStmt_76, 1) = ((MR_Box) (ThenStmt_73));
      MR_hl_field(MR_mktag(2), IfStmt_76, 2) = ((MR_Box) (Var_109));
      MR_hl_field(MR_mktag(2), IfStmt_76, 3) = ((MR_Box) (Context_37));
    }
    {
      Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (IfStmt_76));
      MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_38 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeapTestStmt_67));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_110));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_101_119_95_111_98_106_101_99_116_95_100_121_110_97_109_105_99_97_108_108_121_95_95_91_53_93_95_48_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ArgC_12;

    ml_backend__ml_unify_gen__ml_shift_combine_rval_type_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv0_ArgC_12);
    *wrapper_arg_4 = ((MR_Box) (conv0_ArgC_12));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_101_119_95_111_98_106_101_99_116_95_100_121_110_97_109_105_99_97_108_108_121_95_95_91_53_93_95_48_18_p_0(
  MR_Word MaybeConsId_19,
  MR_Word MaybeCtorName_20,
  MR_Word MaybeTag_21,
  MR_Word ExplicitSecTag_22,
  MR_Word VarLval_24,
  MR_Word VarType_25,
  MR_Word MLDS_Type_26,
  MR_Word ExtraRvals_27,
  MR_Word ExtraTypes_28,
  MR_Word ArgVars_29,
  MR_Word ArgTypes_30,
  MR_Word ArgModes_31,
  MR_Word TakeAddr_32,
  MR_Word Context_33,
  MR_Word * Stmts_34,
  MR_Word STATE_VARIABLE_Info_0_72,
  MR_Word * STATE_VARIABLE_Info_73)
{
  {
    MR_Word TypeCtorInfo_83_83;
    MR_Word TypeCtorInfo_84_84;
    MR_Word TypeCtorInfo_94_94;
    MR_Word ArgLvals_36;
    MR_Word ModuleInfo_37;
    MR_Word ConsArgTypes_38;
    MR_Word ConsArgWidths_39;
    MR_Integer NumExtraRvals_40;
    MR_Word Globals_41;
    MR_Word UseAtomicCells_42;
    MR_Word MayUseAtomic0_43;
    MR_Word HighLevelData_44;
    MR_Word ArgRvals0_45;
    MR_Word MLDS_ArgTypes0_46;
    MR_Word TakeAddrInfos_47;
    MR_Word MayUseAtomic_48;
    MR_Word ArgsTypes0_49;
    MR_Word ArgWidths1_50;
    MR_Word ArgsTypes1_51;
    MR_Word ArgsTypes2_52;
    MR_Word ArgRvals2_55;
    MR_Word MLDS_ArgTypes2_56;
    MR_Word ArgRvals_57;
    MR_Word MLDS_ArgTypes_58;
    MR_Integer Size_59;
    MR_Word SizeInWordsRval_60;
    MR_Word ProfileMemory_61;
    MR_Word MaybeAllocId_68;
    MR_Word MakeNewObject_69;
    MR_Word MakeNewObjStmt_70;
    MR_Word TakeAddrStmts_71;
    MR_Word Var_78;
    MR_Word Var_82;
    MR_Box conv2_Var_53;
    MR_Box conv1_Var_54;

    ml_backend__ml_code_util__ml_gen_var_list_3_p_0(STATE_VARIABLE_Info_0_72, ArgVars_29, &ArgLvals_36);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_72, &ModuleInfo_37);
    ml_backend__ml_unify_gen__get_maybe_cons_id_arg_types_6_p_0(ModuleInfo_37, MaybeConsId_19, ArgTypes_30, VarType_25, &ConsArgTypes_38, &ConsArgWidths_39);
    TypeCtorInfo_83_83 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
    NumExtraRvals_40 = mercury__list__length_1_f_0(TypeCtorInfo_83_83, ExtraRvals_27);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_37, &Globals_41);
    libs__globals__lookup_bool_option_3_p_0(Globals_41, (MR_Integer) 462, &UseAtomicCells_42);
    switch (UseAtomicCells_42) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MayUseAtomic0_43 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        MayUseAtomic0_43 = (MR_Integer) 0;
        break;
    }
    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_72, &HighLevelData_44);
    ml_backend__ml_unify_gen__ml_gen_cons_args_15_p_0(ArgVars_29, ArgLvals_36, ArgTypes_30, ConsArgTypes_38, ConsArgWidths_39, ArgModes_31, NumExtraRvals_40, TakeAddr_32, ModuleInfo_37, HighLevelData_44, &ArgRvals0_45, &MLDS_ArgTypes0_46, &TakeAddrInfos_47, MayUseAtomic0_43, &MayUseAtomic_48);
    TypeCtorInfo_84_84 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0;
    mercury__assoc_list__from_corresponding_lists_3_p_0(TypeCtorInfo_83_83, TypeCtorInfo_84_84, ArgRvals0_45, MLDS_ArgTypes0_46, &ArgsTypes0_49);
    ml_backend__ml_unify_gen__ml_expand_double_word_rvals_4_p_0(ConsArgWidths_39, &ArgWidths1_50, ArgsTypes0_49, &ArgsTypes1_51);
    TypeCtorInfo_94_94 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
    backend_libs__arg_pack__pack_args_8_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[2], TypeCtorInfo_94_94, TypeCtorInfo_94_94, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[6], ArgWidths1_50, ArgsTypes1_51, &ArgsTypes2_52, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_53, ((MR_Box) ((MR_Integer) 0)), &conv1_Var_54);
    mercury__assoc_list__keys_and_values_3_p_0(TypeCtorInfo_83_83, TypeCtorInfo_84_84, ArgsTypes2_52, &ArgRvals2_55, &MLDS_ArgTypes2_56);
    ArgRvals_57 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_83_83, ExtraRvals_27, ArgRvals2_55);
    MLDS_ArgTypes_58 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_84_84, ExtraTypes_28, MLDS_ArgTypes2_56);
    mercury__list__length_2_p_0(TypeCtorInfo_83_83, ArgRvals_57, &Size_59);
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_78, 0) = ((MR_Box) (Size_59));
    }
    {
      SizeInWordsRval_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SizeInWordsRval_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), SizeInWordsRval_60, 1) = ((MR_Box) (Var_78));
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_41, (MR_Integer) 207, &ProfileMemory_61);
    switch (ProfileMemory_61) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeAllocId_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *STATE_VARIABLE_Info_73 = STATE_VARIABLE_Info_0_72;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PredProcId_62;
          MR_Word ProcLabel_64;
          MR_Word GlobalData0_65;
          MR_Word AllocId_66;
          MR_Word GlobalData_67;
          MR_Word Var_80;
          MR_Word _Module_63;

          ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_72, &PredProcId_62);
          ml_backend__ml_code_util__ml_gen_proc_label_4_p_0(ModuleInfo_37, PredProcId_62, &_Module_63, &ProcLabel_64);
          ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_72, &GlobalData0_65);
          Var_80 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ProcLabel_64);
          ml_backend__ml_global_data__ml_gen_alloc_site_7_p_0(Var_80, MaybeConsId_19, Size_59, Context_33, &AllocId_66, GlobalData0_65, &GlobalData_67);
          ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_67, STATE_VARIABLE_Info_0_72, STATE_VARIABLE_Info_73);
          {
            MaybeAllocId_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeAllocId_68, 0) = ((MR_Box) (AllocId_66));
          }
        }
        break;
    }
    {
      Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (SizeInWordsRval_60));
    }
    {
      MakeNewObject_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MakeNewObject_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), MakeNewObject_69, 1) = ((MR_Box) (VarLval_24));
      MR_hl_field(MR_mktag(3), MakeNewObject_69, 2) = ((MR_Box) (MaybeTag_21));
      MR_hl_field(MR_mktag(3), MakeNewObject_69, 3) = ((MR_Box) (ExplicitSecTag_22));
      MR_hl_field(MR_mktag(3), MakeNewObject_69, 4) = ((MR_Box) (MLDS_Type_26));
      MR_hl_field(MR_mktag(3), MakeNewObject_69, 5) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(3), MakeNewObject_69, 6) = ((MR_Box) (MaybeCtorName_20));
      MR_hl_field(MR_mktag(3), MakeNewObject_69, 7) = ((MR_Box) (ArgRvals_57));
      MR_hl_field(MR_mktag(3), MakeNewObject_69, 8) = ((MR_Box) (MLDS_ArgTypes_58));
      MR_hl_field(MR_mktag(3), MakeNewObject_69, 9) = ((MR_Box) (MayUseAtomic_48));
      MR_hl_field(MR_mktag(3), MakeNewObject_69, 10) = ((MR_Box) (MaybeAllocId_68));
    }
    {
      MakeNewObjStmt_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_70, 1) = ((MR_Box) (MakeNewObject_69));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_70, 2) = ((MR_Box) (Context_33));
    }
    ml_backend__ml_unify_gen__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_47, VarLval_24, MLDS_Type_26, MaybeTag_21, Context_33, *STATE_VARIABLE_Info_73, &TakeAddrStmts_71);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_34 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MakeNewObjStmt_70));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TakeAddrStmts_71));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_expand_double_word_rvals_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_expand_double_word_rvals\'/4", (MR_String) "list length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_expand_double_word_rvals\'/4", (MR_String) "list length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Rval0_8;
        MR_Word RvalsTypes0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Widths1_12;
        MR_Word RvalsTypes1_13;
        MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word Type0_9;

        Rval0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0)));
        Type0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 1)));
        ml_backend__ml_unify_gen__ml_expand_double_word_rvals_4_p_0(Var_52, &Widths1_12, RvalsTypes0_10, &RvalsTypes1_13);
        switch (MR_tag((MR_Word) Var_53)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Var_53)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__2_2 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_53));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Widths1_12));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_21));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RvalsTypes1_13));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word SubstType_18;
                  MR_Word RvalA_19;
                  MR_Word RvalB_20;
                  MR_Word Var_34;
                  MR_Word Var_36;
                  MR_Word Var_37;
                  MR_Word Var_38;
                  MR_Word Var_22;
                  MR_Word Var_17;

                  succeeded = ((((MR_tag((MR_Word) Rval0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval0_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval0_8, (MR_Integer) 1)));
                    succeeded = ((((MR_tag((MR_Word) Var_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 0)))) == (MR_Integer) 20)));
                    if (succeeded)
                      Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 1)));
                  }
                  if (succeeded)
                  {
                    SubstType_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
                    RvalA_19 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[12]);
                    RvalB_20 = RvalA_19;
                  }
                  else
                  {
                    SubstType_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                    {
                      RvalA_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalA_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), RvalA_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22))));
                      MR_hl_field(MR_mktag(3), RvalA_19, 2) = ((MR_Box) (Rval0_8));
                      MR_hl_field(MR_mktag(3), RvalA_19, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[5])));
                    }
                    {
                      RvalB_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalB_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), RvalB_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22))));
                      MR_hl_field(MR_mktag(3), RvalB_20, 2) = ((MR_Box) (Rval0_8));
                      MR_hl_field(MR_mktag(3), RvalB_20, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[10])));
                    }
                  }
                  {
                    Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Widths1_12));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__2_2 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_34));
                  }
                  {
                    Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (RvalA_19));
                    MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (SubstType_18));
                  }
                  {
                    Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (RvalB_20));
                    MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (SubstType_18));
                  }
                  {
                    Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
                    MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (RvalsTypes1_13));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_36));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_37));
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_53));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Widths1_12));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_21));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RvalsTypes1_13));
              }
            }
            break;
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_15_p_0(
  MR_Word Vars_16,
  MR_Word Lvals_17,
  MR_Word ArgTypes_18,
  MR_Word ConsArgTypes_19,
  MR_Word ConsArgWidths_20,
  MR_Word UniModes_21,
  MR_Integer NumExtraArgs_22,
  MR_Word TakeAddr_23,
  MR_Word ModuleInfo_24,
  MR_Word HighLevelData_25,
  MR_Word * STATE_VARIABLE_Rvals_30,
  MR_Word * STATE_VARIABLE_MLDS_Types_31,
  MR_Word * STATE_VARIABLE_TakeAddrInfos_32,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_33,
  MR_Word * STATE_VARIABLE_MayUseAtomic_34)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Rvals_36_36;
    MR_Word STATE_VARIABLE_MLDS_Types_37_37;
    MR_Word STATE_VARIABLE_TakeAddrInfos_38_38;
    MR_Word STATE_VARIABLE_MayUseAtomic_39_39;

    succeeded = ml_backend__ml_unify_gen__ml_gen_cons_args_2_16_p_0(Vars_16, Lvals_17, ArgTypes_18, ConsArgTypes_19, ConsArgWidths_20, UniModes_21, NumExtraArgs_22, (MR_Integer) 1, TakeAddr_23, ModuleInfo_24, HighLevelData_25, &STATE_VARIABLE_Rvals_36_36, &STATE_VARIABLE_MLDS_Types_37_37, &STATE_VARIABLE_TakeAddrInfos_38_38, STATE_VARIABLE_MayUseAtomic_0_33, &STATE_VARIABLE_MayUseAtomic_39_39);
    if (succeeded)
    {
      *STATE_VARIABLE_MayUseAtomic_34 = STATE_VARIABLE_MayUseAtomic_39_39;
      *STATE_VARIABLE_TakeAddrInfos_32 = STATE_VARIABLE_TakeAddrInfos_38_38;
      *STATE_VARIABLE_MLDS_Types_31 = STATE_VARIABLE_MLDS_Types_37_37;
      *STATE_VARIABLE_Rvals_30 = STATE_VARIABLE_Rvals_36_36;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_cons_args\'/15", (MR_String) "length mismatch");
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_2_16_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args_2__1314__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_2_16_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word ConsArgWidths_5,
  MR_Word HeadVar__6_6,
  MR_Integer HeadVar__7_7,
  MR_Integer HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word HeadVar__10_10,
  MR_Word HeadVar__11_11,
  MR_Word * HeadVar__12_12,
  MR_Word * HeadVar__13_13,
  MR_Word * HeadVar__14_14,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_15,
  MR_Word * STATE_VARIABLE_MayUseAtomic_16)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      succeeded = (HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = (HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          succeeded = (HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            succeeded = (HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (succeeded)
            {
              *HeadVar__12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *HeadVar__13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *HeadVar__14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *STATE_VARIABLE_MayUseAtomic_16 = STATE_VARIABLE_MayUseAtomic_0_15;
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    else
    {
      MR_Word TypeCtorInfo_81_81;
      MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Vars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Lval_28;
      MR_Word Lvals_29;
      MR_Word ArgType_30;
      MR_Word ArgTypes_31;
      MR_Word ConsArgType_32;
      MR_Word ConsArgTypes_33;
      MR_Word ArgMode_35;
      MR_Word ArgModes_36;
      MR_Word Rval_42;
      MR_Word Rvals_43;
      MR_Word MLDS_Type_44;
      MR_Word MLDS_Types_45;
      MR_Word ConsArgWidth_48;
      MR_Word BoxedArgType_49;
      MR_Word STATE_VARIABLE_MayUseAtomic_59_59;
      MR_Box conv0_ConsArgWidth_48;
      MR_Word STATE_VARIABLE_TakeAddr_60_60;
      MR_Integer Var_83;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Lval_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        Lvals_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ArgType_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
          ArgTypes_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            ConsArgType_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
            ConsArgTypes_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) HeadVar__6_6)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgMode_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0)));
              ArgModes_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1)));
              check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(HeadVar__10_10, ArgType_30, STATE_VARIABLE_MayUseAtomic_0_15, &STATE_VARIABLE_MayUseAtomic_59_59);
              TypeCtorInfo_81_81 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0;
              mercury__list__det_index1_3_p_0(TypeCtorInfo_81_81, ConsArgWidths_5, HeadVar__8_8, &conv0_ConsArgWidth_48);
              ConsArgWidth_48 = ((MR_Word) conv0_ConsArgWidth_48);
              ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(HeadVar__10_10, HeadVar__11_11, ConsArgType_32, ConsArgWidth_48, &BoxedArgType_49);
              MLDS_Type_44 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(HeadVar__10_10, BoxedArgType_49);
              succeeded = ((MR_tag((MR_Word) HeadVar__9_9)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_83 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__9_9, (MR_Integer) 0)));
                STATE_VARIABLE_TakeAddr_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__9_9, (MR_Integer) 1)));
                succeeded = (HeadVar__8_8 == Var_83);
              }
              if (succeeded)
              {
                MR_Word TakeAddrInfosTail_50;
                MR_Word Offset_51;
                MR_Word OrigMLDS_Type_52;
                MR_Word TakeAddrInfo_53;
                MR_Word Var_61;
                MR_Word Var_65;
                MR_Integer Var_66;
                MR_Word WidthsBeforeArg_89;
                MR_Word TypeCtorInfo_16_96;
                MR_Integer Var_91;
                MR_Integer Var_92;

                {
                  Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[2]));
                  MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_cons_args_2_16_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (ConsArgWidth_48));
                  MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                mercury__require__expect_3_p_0(Var_61, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_cons_args_2\'/16", (MR_String) "taking address of non word-sized argument");
                Var_66 = (HeadVar__8_8 + (MR_Integer) 1);
                {
                  Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
                  MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (MLDS_Type_44));
                }
                {
                  Rval_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Rval_42, 1) = ((MR_Box) (Var_65));
                }
                succeeded = ml_backend__ml_unify_gen__ml_gen_cons_args_2_16_p_0(Vars_27, Lvals_29, ArgTypes_31, ConsArgTypes_33, ConsArgWidths_5, ArgModes_36, HeadVar__7_7, Var_66, STATE_VARIABLE_TakeAddr_60_60, HeadVar__10_10, HeadVar__11_11, &Rvals_43, &MLDS_Types_45, &TakeAddrInfosTail_50, STATE_VARIABLE_MayUseAtomic_59_59, STATE_VARIABLE_MayUseAtomic_16);
                if (succeeded)
                {
                  Var_92 = (MR_Integer) 1;
                  Var_91 = (HeadVar__8_8 - Var_92);
                  TypeCtorInfo_16_96 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0;
                  succeeded = mercury__list__take_3_p_0(TypeCtorInfo_16_96, Var_91, ConsArgWidths_5, &WidthsBeforeArg_89);
                  if (succeeded)
                  {
                    MR_Integer WordsBeforeArg_90;
                    MR_Integer Var_93;

                    WordsBeforeArg_90 = backend_libs__arg_pack__count_distinct_words_1_f_0(WidthsBeforeArg_89);
                    Var_93 = (HeadVar__7_7 + WordsBeforeArg_90);
                    Offset_51 = (MR_Word) Var_93;
                  }
                  else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_unify_gen.ml_calc_field_offset\'/3", (MR_String) "more fields than arg_widths");
                  }
                  OrigMLDS_Type_52 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(HeadVar__10_10, ConsArgType_32);
                  {
                    TakeAddrInfo_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), TakeAddrInfo_53, 0) = ((MR_Box) (Var_26));
                    MR_hl_field(MR_mktag(0), TakeAddrInfo_53, 1) = ((MR_Box) (Offset_51));
                    MR_hl_field(MR_mktag(0), TakeAddrInfo_53, 2) = ((MR_Box) (OrigMLDS_Type_52));
                    MR_hl_field(MR_mktag(0), TakeAddrInfo_53, 3) = ((MR_Box) (MLDS_Type_44));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__14_14 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TakeAddrInfo_53));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TakeAddrInfosTail_50));
                  }
                  succeeded = MR_TRUE;
                }
              }
              else
              {
                MR_Word RHSInsts_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_35, (MR_Integer) 1)));
                MR_Integer Var_75;
                MR_Word _LHSInsts_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_35, (MR_Integer) 0)));
                MR_Word Var_70;
                MR_Word Var_71;
                MR_Word Var_84;

                check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(HeadVar__10_10, RHSInsts_55, ArgType_30, &Var_84);
                succeeded = ((MR_Integer) 0 == Var_84);
                if (succeeded)
                {
                  Var_70 = check_hlds__type_util__check_dummy_type_2_f_0(HeadVar__10_10, ArgType_30);
                  succeeded = (Var_70 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_71 = check_hlds__type_util__check_dummy_type_2_f_0(HeadVar__10_10, ConsArgType_32);
                    succeeded = (Var_71 == (MR_Integer) 1);
                  }
                }
                if (succeeded)
                {
                  MR_Word Var_73;

                  {
                    Var_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_73, 0) = ((MR_Box) (Lval_28));
                  }
                  ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(HeadVar__10_10, ArgType_30, BoxedArgType_49, (MR_Integer) 0, Var_73, &Rval_42);
                }
                else
                {
                  MR_Word Var_74;

                  {
                    Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
                    MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (MLDS_Type_44));
                  }
                  {
                    Rval_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Rval_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), Rval_42, 1) = ((MR_Box) (Var_74));
                  }
                }
                Var_75 = (HeadVar__8_8 + (MR_Integer) 1);
                succeeded = ml_backend__ml_unify_gen__ml_gen_cons_args_2_16_p_0(Vars_27, Lvals_29, ArgTypes_31, ConsArgTypes_33, ConsArgWidths_5, ArgModes_36, HeadVar__7_7, Var_75, HeadVar__9_9, HeadVar__10_10, HeadVar__11_11, &Rvals_43, &MLDS_Types_45, HeadVar__14_14, STATE_VARIABLE_MayUseAtomic_59_59, STATE_VARIABLE_MayUseAtomic_16);
              }
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__12_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Rval_42));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Rvals_43));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__13_13 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MLDS_Type_44));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MLDS_Types_45));
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_16_p_0(
  MR_Word ConsId_17,
  MR_Word Args_18,
  MR_Word Modes_19,
  MR_Word ArgTypes_20,
  MR_Word Fields_21,
  MR_Word TakeAddr_22,
  MR_Word VarType_23,
  MR_Word VarLval_24,
  MR_Word Offset_25,
  MR_Integer ArgNum_26,
  MR_Word Tag_27,
  MR_Word Context_28,
  MR_Word * Stmts_29,
  MR_Word * TakeAddrInfos_30,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54)
{
  {
    MR_bool succeeded = (Args_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (succeeded)
    {
      succeeded = (Modes_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = (ArgTypes_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
          succeeded = (Fields_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      *Stmts_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *TakeAddrInfos_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_0_53;
    }
    else
    {
      MR_Word Arg_32;
      MR_Word Args1_33;
      MR_Word Mode_34;
      MR_Word Modes1_35;
      MR_Word ArgType_36;
      MR_Word ArgTypes1_37;
      MR_Word Field_38;
      MR_Word Fields1_39;

      succeeded = ((MR_tag((MR_Word) Args_18)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Arg_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0)));
        Args1_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Modes_19)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Mode_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_19, (MR_Integer) 0)));
          Modes1_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_19, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) ArgTypes_20)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            ArgType_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_20, (MR_Integer) 0)));
            ArgTypes1_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_20, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Fields_21)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Field_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), Fields_21, (MR_Integer) 0)));
              Fields1_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), Fields_21, (MR_Integer) 1)));
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Offset1_40;
        MR_Integer ArgNum1_41;
        MR_Word TakeAddr1_42;
        MR_Integer Var_67;

        ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(Field_38, Fields1_39, Offset_25, &Offset1_40);
        ArgNum1_41 = (ArgNum_26 + (MR_Integer) 1);
        succeeded = ((MR_tag((MR_Word) TakeAddr_22)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(1), TakeAddr_22, (MR_Integer) 0)));
          TakeAddr1_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), TakeAddr_22, (MR_Integer) 1)));
          succeeded = (ArgNum_26 == Var_67);
        }
        if (succeeded)
        {
          MR_Word TakeAddrInfos0_43;
          MR_Word ModuleInfo_44;
          MR_Word HighLevelData_45;
          MR_Word FieldType_46;
          MR_Word FieldWidth_47;
          MR_Word BoxedFieldType_48;
          MR_Word MLDS_FieldType_49;
          MR_Word MLDS_BoxedFieldType_50;
          MR_Word TakeAddrInfo_51;
          MR_Word Var_61;
          MR_Word Var_63;

          ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_16_p_0(ConsId_17, Args1_33, Modes1_35, ArgTypes1_37, Fields1_39, TakeAddr1_42, VarType_23, VarLval_24, Offset1_40, ArgNum1_41, Tag_27, Context_28, Stmts_29, &TakeAddrInfos0_43, STATE_VARIABLE_Info_0_53, STATE_VARIABLE_Info_54);
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*STATE_VARIABLE_Info_54, &ModuleInfo_44);
          ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(*STATE_VARIABLE_Info_54, &HighLevelData_45);
          Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), Field_38, (MR_Integer) 0)));
          FieldType_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Field_38, (MR_Integer) 1)));
          FieldWidth_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Field_38, (MR_Integer) 2)));
          Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), Field_38, (MR_Integer) 3)));
          ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(ModuleInfo_44, HighLevelData_45, FieldType_46, FieldWidth_47, &BoxedFieldType_48);
          ml_backend__ml_code_util__ml_gen_type_3_p_0(*STATE_VARIABLE_Info_54, FieldType_46, &MLDS_FieldType_49);
          ml_backend__ml_code_util__ml_gen_type_3_p_0(*STATE_VARIABLE_Info_54, BoxedFieldType_48, &MLDS_BoxedFieldType_50);
          {
            TakeAddrInfo_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TakeAddrInfo_51, 0) = ((MR_Box) (Arg_32));
            MR_hl_field(MR_mktag(0), TakeAddrInfo_51, 1) = ((MR_Box) (Offset_25));
            MR_hl_field(MR_mktag(0), TakeAddrInfo_51, 2) = ((MR_Box) (MLDS_FieldType_49));
            MR_hl_field(MR_mktag(0), TakeAddrInfo_51, 3) = ((MR_Box) (MLDS_BoxedFieldType_50));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *TakeAddrInfos_30 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TakeAddrInfo_51));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TakeAddrInfos0_43));
          }
        }
        else
        {
          MR_Word Stmts0_52;
          MR_Word STATE_VARIABLE_Info_57_57;

          ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_16_p_0(ConsId_17, Args1_33, Modes1_35, ArgTypes1_37, Fields1_39, TakeAddr_22, VarType_23, VarLval_24, Offset1_40, ArgNum1_41, Tag_27, Context_28, &Stmts0_52, TakeAddrInfos_30, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_57_57);
          ml_backend__ml_unify_gen__ml_gen_unify_arg_15_p_0(ConsId_17, Arg_32, Mode_34, ArgType_36, Field_38, VarType_23, VarLval_24, Offset_25, ArgNum_26, Tag_27, Context_28, Stmts0_52, Stmts_29, STATE_VARIABLE_Info_57_57, STATE_VARIABLE_Info_54);
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unify_args_for_reuse\'/16", (MR_String) "length mismatch");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_arg_15_p_0(
  MR_Word ConsId_16,
  MR_Word ArgVar_17,
  MR_Word Mode_18,
  MR_Word ArgType_19,
  MR_Word CtorArg_20,
  MR_Word VarType_21,
  MR_Word VarLval_22,
  MR_Word Offset_23,
  MR_Integer ArgNum_24,
  MR_Word Tag_25,
  MR_Word Context_26,
  MR_Word STATE_VARIABLE_Stmts_0_49,
  MR_Word * STATE_VARIABLE_Stmts_50,
  MR_Word STATE_VARIABLE_Info_0_51,
  MR_Word * STATE_VARIABLE_Info_52)
{
  {
    MR_bool succeeded;
    MR_Word MaybeFieldName_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArg_20, (MR_Integer) 0)));
    MR_Word FieldType_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArg_20, (MR_Integer) 1)));
    MR_Word FieldWidth_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArg_20, (MR_Integer) 2)));
    MR_Word HighLevelData_32;
    MR_Word FieldId_34;
    MR_Word ModuleInfo_42;
    MR_Word BoxedFieldType_43;
    MR_Word MLDS_VarType_44;
    MR_Word MLDS_BoxedFieldType_45;
    MR_Word MaybePrimaryTag_46;
    MR_Word FieldLval_47;
    MR_Word ArgLval_48;
    MR_Word Var_59;
    MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorArg_20, (MR_Integer) 3)));

    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_51, &HighLevelData_32);
    switch (HighLevelData_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer OffsetInt_33 = (MR_Integer) Offset_23;
          MR_Word Var_57;
          MR_Word Var_58;

          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_58, 0) = ((MR_Box) (OffsetInt_33));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (Var_58));
          }
          {
            FieldId_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldId_34, 0) = ((MR_Box) (Var_57));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Target_35;
          MR_Word Var_36;

          ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_51, &Target_35);
          succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(VarType_21, &Var_36);
          if (succeeded)
          {
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Integer OffsetInt_61 = (MR_Integer) Offset_23;

            {
              Var_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_54, 0) = ((MR_Box) (OffsetInt_61));
            }
            {
              Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (Var_54));
            }
            {
              FieldId_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FieldId_34, 0) = ((MR_Box) (Var_53));
            }
          }
          else
          {
            MR_Word FieldName_37;
            MR_Word ConsName_38;
            MR_Integer ConsArity_39;
            MR_Word TypeCtor_40;

            FieldName_37 = ml_backend__ml_code_util__ml_gen_hld_field_name_2_f_0(MaybeFieldName_29, ArgNum_24);
            succeeded = ((((MR_tag((MR_Word) ConsId_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_16, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              ConsName_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_16, (MR_Integer) 1)));
              ConsArity_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_16, (MR_Integer) 2)));
              TypeCtor_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_16, (MR_Integer) 3)));
              {
                MR_String UnqualConsName_41;

                UnqualConsName_41 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(Target_35, TypeCtor_40, ConsName_38, ConsArity_39);
                FieldId_34 = ml_backend__ml_unify_gen__ml_gen_field_id_6_f_0(Target_35, VarType_21, Tag_25, UnqualConsName_41, ConsArity_39, FieldName_37);
              }
            }
            else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unify_arg\'/15", (MR_String) "invalid cons_id");
                return;
              }
            }
          }
        }
        break;
    }
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_51, &ModuleInfo_42);
    ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(ModuleInfo_42, HighLevelData_32, FieldType_30, FieldWidth_31, &BoxedFieldType_43);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_51, VarType_21, &MLDS_VarType_44);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_51, BoxedFieldType_43, &MLDS_BoxedFieldType_45);
    MaybePrimaryTag_46 = hlds__hlds_data__get_primary_tag_1_f_0(Tag_25);
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_59, 0) = ((MR_Box) (VarLval_22));
    }
    {
      FieldLval_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FieldLval_47, 0) = ((MR_Box) (MaybePrimaryTag_46));
      MR_hl_field(MR_mktag(0), FieldLval_47, 1) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), FieldLval_47, 2) = ((MR_Box) (FieldId_34));
      MR_hl_field(MR_mktag(0), FieldLval_47, 3) = ((MR_Box) (MLDS_BoxedFieldType_45));
      MR_hl_field(MR_mktag(0), FieldLval_47, 4) = ((MR_Box) (MLDS_VarType_44));
    }
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_51, ArgVar_17, &ArgLval_48);
    ml_backend__ml_unify_gen__ml_gen_sub_unify_11_p_0(ModuleInfo_42, HighLevelData_32, Mode_18, ArgLval_48, ArgType_19, FieldLval_47, BoxedFieldType_43, FieldWidth_31, Context_26, STATE_VARIABLE_Stmts_0_49, STATE_VARIABLE_Stmts_50);
    *STATE_VARIABLE_Info_52 = STATE_VARIABLE_Info_0_51;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_field_id_6_f_0(
  MR_Word Target_8,
  MR_Word Type_9,
  MR_Word Tag_10,
  MR_String ConsName_11,
  MR_Integer ConsArity_12,
  MR_Word FieldName_13)
{
  {
    MR_Word FieldId_14;
    MR_Word TypeCtor_15;
    MR_Word QualTypeName_16;
    MR_Integer TypeArity_17;
    MR_Word MLDS_Module_18;
    MR_Word QualKind_19;
    MR_String TypeName_20;
    MR_Word TypeQualifier_21;
    MR_Word UsesBaseClass_22;
    MR_Word ClassPtrType_24;
    MR_Word QualifiedFieldName_25;

    parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_9, &TypeCtor_15);
    ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_15, &QualTypeName_16, &TypeArity_17);
    MLDS_Module_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualTypeName_16, (MR_Integer) 0)));
    QualKind_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualTypeName_16, (MR_Integer) 1)));
    TypeName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), QualTypeName_16, (MR_Integer) 2)));
    TypeQualifier_21 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(Target_8, MLDS_Module_18, QualKind_19, TypeName_20, TypeArity_17);
    UsesBaseClass_22 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(Tag_10);
    switch (UsesBaseClass_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word QualConsName_26;
          MR_Word FieldQualifier_27;
          MR_Word Var_30;
          MR_Word ClassId_36;

          {
            QualConsName_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), QualConsName_26, 0) = ((MR_Box) (TypeQualifier_21));
            MR_hl_field(MR_mktag(0), QualConsName_26, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), QualConsName_26, 2) = ((MR_Box) (ConsName_11));
          }
          {
            ClassId_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ClassId_36, 0) = ((MR_Box) (QualConsName_26));
            MR_hl_field(MR_mktag(0), ClassId_36, 1) = ((MR_Box) (ConsArity_12));
            MR_hl_field(MR_mktag(0), ClassId_36, 2) = ((MR_Box) ((MR_Integer) 0));
          }
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ClassId_36);
          {
            ClassPtrType_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ClassPtrType_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), ClassPtrType_24, 1) = ((MR_Box) (Var_30));
          }
          FieldQualifier_27 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(Target_8, TypeQualifier_21, (MR_Integer) 1, ConsName_11, ConsArity_12);
          {
            QualifiedFieldName_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), QualifiedFieldName_25, 0) = ((MR_Box) (FieldQualifier_27));
            MR_hl_field(MR_mktag(0), QualifiedFieldName_25, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), QualifiedFieldName_25, 2) = ((MR_Box) (FieldName_13));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ClassId_23;
          MR_Word Var_34;

          {
            ClassId_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ClassId_23, 0) = ((MR_Box) (QualTypeName_16));
            MR_hl_field(MR_mktag(0), ClassId_23, 1) = ((MR_Box) (TypeArity_17));
            MR_hl_field(MR_mktag(0), ClassId_23, 2) = ((MR_Box) ((MR_Integer) 0));
          }
          Var_34 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ClassId_23);
          {
            ClassPtrType_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ClassPtrType_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), ClassPtrType_24, 1) = ((MR_Box) (Var_34));
          }
          {
            QualifiedFieldName_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), QualifiedFieldName_25, 0) = ((MR_Box) (TypeQualifier_21));
            MR_hl_field(MR_mktag(0), QualifiedFieldName_25, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), QualifiedFieldName_25, 2) = ((MR_Box) (FieldName_13));
          }
        }
        break;
    }
    {
      FieldId_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FieldId_14, 0) = ((MR_Box) (QualifiedFieldName_25));
      MR_hl_field(MR_mktag(1), FieldId_14, 1) = ((MR_Box) (ClassPtrType_24));
    }
    return FieldId_14;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_sub_unify_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word HighLevelData_13,
  MR_Word ArgMode_14,
  MR_Word ArgLval_15,
  MR_Word ArgType_16,
  MR_Word FieldLval_17,
  MR_Word FieldType_18,
  MR_Word FieldWidth_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_Stmts_0_48,
  MR_Word * STATE_VARIABLE_Stmts_49)
{
  {
    MR_bool succeeded;
    MR_Word LeftFromToInsts_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_14, (MR_Integer) 0)));
    MR_Word RightFromToInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_14, (MR_Integer) 1)));
    MR_Word LeftTopFunctorMode_24;
    MR_Word RightTopFunctorMode_25;

    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_12, LeftFromToInsts_22, ArgType_16, &LeftTopFunctorMode_24);
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_12, RightFromToInsts_23, ArgType_16, &RightTopFunctorMode_25);
    {
      MR_Word Var_51;

      Var_51 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_12, ArgType_16);
      succeeded = (Var_51 == (MR_Integer) 0);
    }
    if (!(succeeded))
    {
      MR_Word Var_50;

      Var_50 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_12, FieldType_18);
      succeeded = (Var_50 == (MR_Integer) 0);
    }
    if (succeeded)
      *STATE_VARIABLE_Stmts_49 = STATE_VARIABLE_Stmts_0_48;
    else
    {
      succeeded = (LeftTopFunctorMode_24 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (RightTopFunctorMode_25 == (MR_Integer) 0);
      if (succeeded)
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_sub_unify\'/11", (MR_String) "test in arg of [de]construction");
          return;
        }
      }
      else
      {
        succeeded = (LeftTopFunctorMode_24 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (RightTopFunctorMode_25 == (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word Stmt_30;

          switch (MR_tag((MR_Word) FieldWidth_19)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(FieldWidth_19)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word FieldRval_29;
                    MR_Word Var_60;

                    {
                      Var_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_60, 0) = ((MR_Box) (FieldLval_17));
                    }
                    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_12, FieldType_18, ArgType_16, (MR_Integer) 0, Var_60, &FieldRval_29);
                    switch (MR_tag((MR_Word) FieldWidth_19)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        Stmt_30 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_15, FieldRval_29, Context_20);
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Integer Mask_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), FieldWidth_19, (MR_Integer) 0)));
                          MR_Word UnpackRval_32;

                          UnpackRval_32 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(FieldRval_29, Mask_31);
                          Stmt_30 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_15, UnpackRval_32, Context_20);
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Integer Shift_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), FieldWidth_19, (MR_Integer) 0)));
                          MR_Word Var_61;
                          MR_Integer Mask_91 = ((MR_Integer) (MR_hl_field(MR_mktag(2), FieldWidth_19, (MR_Integer) 1)));
                          MR_Word UnpackRval_92;

                          Var_61 = ml_backend__ml_unify_gen__ml_rshift_2_f_0(FieldRval_29, Shift_33);
                          UnpackRval_92 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(Var_61, Mask_91);
                          Stmt_30 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_15, UnpackRval_92, Context_20);
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word FieldRval_93;
                    MR_Word FieldLvalA_34;
                    MR_Word FieldLvalB_35;

                    succeeded = ml_backend__ml_unify_gen__ml_field_offset_pair_3_p_0(FieldLval_17, &FieldLvalA_34, &FieldLvalB_35);
                    if (succeeded)
                    {
                      MR_Word Var_55;
                      MR_Word Var_56;

                      {
                        Var_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), Var_55, 0) = ((MR_Box) (FieldLvalA_34));
                      }
                      {
                        Var_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), Var_56, 0) = ((MR_Box) (FieldLvalB_35));
                      }
                      {
                        FieldRval_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), FieldRval_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), FieldRval_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23))));
                        MR_hl_field(MR_mktag(3), FieldRval_93, 2) = ((MR_Box) (Var_55));
                        MR_hl_field(MR_mktag(3), FieldRval_93, 3) = ((MR_Box) (Var_56));
                      }
                    }
                    else
                    {
                      MR_Word Var_58;

                      {
                        Var_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), Var_58, 0) = ((MR_Box) (FieldLval_17));
                      }
                      ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_12, FieldType_18, ArgType_16, (MR_Integer) 0, Var_58, &FieldRval_93);
                    }
                    Stmt_30 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_15, FieldRval_93, Context_20);
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word FieldRval_29;
                MR_Word Var_60;

                {
                  Var_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_60, 0) = ((MR_Box) (FieldLval_17));
                }
                ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_12, FieldType_18, ArgType_16, (MR_Integer) 0, Var_60, &FieldRval_29);
                switch (MR_tag((MR_Word) FieldWidth_19)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Stmt_30 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_15, FieldRval_29, Context_20);
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer Mask_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), FieldWidth_19, (MR_Integer) 0)));
                      MR_Word UnpackRval_32;

                      UnpackRval_32 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(FieldRval_29, Mask_31);
                      Stmt_30 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_15, UnpackRval_32, Context_20);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Integer Shift_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), FieldWidth_19, (MR_Integer) 0)));
                      MR_Word Var_61;
                      MR_Integer Mask_91 = ((MR_Integer) (MR_hl_field(MR_mktag(2), FieldWidth_19, (MR_Integer) 1)));
                      MR_Word UnpackRval_92;

                      Var_61 = ml_backend__ml_unify_gen__ml_rshift_2_f_0(FieldRval_29, Shift_33);
                      UnpackRval_92 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(Var_61, Mask_91);
                      Stmt_30 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_15, UnpackRval_92, Context_20);
                    }
                    break;
                }
              }
              break;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Stmts_49 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_30));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Stmts_0_48));
          }
        }
        else
        {
          succeeded = (LeftTopFunctorMode_24 == (MR_Integer) 1);
          if (succeeded)
            succeeded = (RightTopFunctorMode_25 == (MR_Integer) 0);
          if (succeeded)
          {
            MR_Word ArgRval_36;
            MR_Word Var_64;

            {
              Var_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_64, 0) = ((MR_Box) (ArgLval_15));
            }
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_12, ArgType_16, FieldType_18, (MR_Integer) 0, Var_64, &ArgRval_36);
            switch (MR_tag((MR_Word) FieldWidth_19)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(FieldWidth_19)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Stmt_94;

                      Stmt_94 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_17, ArgRval_36, Context_20);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *STATE_VARIABLE_Stmts_49 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_94));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Stmts_0_48));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word FieldLvalA_100;
                      MR_Word FieldLvalB_101;

                      succeeded = ml_backend__ml_unify_gen__ml_field_offset_pair_3_p_0(FieldLval_17, &FieldLvalA_100, &FieldLvalB_101);
                      if (succeeded)
                      {
                        MR_Word FloatWordA_41;
                        MR_Word FloatWordB_42;
                        MR_Word IntFieldType_43;
                        MR_Word ArgRvalA_44;
                        MR_Word ArgRvalB_45;
                        MR_Word StmtA_46;
                        MR_Word StmtB_47;
                        MR_Word Var_73;
                        MR_Word Var_75;
                        MR_Word Var_77;
                        MR_Word Var_80;

                        {
                          FloatWordA_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), FloatWordA_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                          MR_hl_field(MR_mktag(3), FloatWordA_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22))));
                          MR_hl_field(MR_mktag(3), FloatWordA_41, 2) = ((MR_Box) (ArgRval_36));
                          MR_hl_field(MR_mktag(3), FloatWordA_41, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[5])));
                        }
                        {
                          FloatWordB_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), FloatWordB_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                          MR_hl_field(MR_mktag(3), FloatWordB_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22))));
                          MR_hl_field(MR_mktag(3), FloatWordB_42, 2) = ((MR_Box) (ArgRval_36));
                          MR_hl_field(MR_mktag(3), FloatWordB_42, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[10])));
                        }
                        Var_73 = parse_tree__builtin_lib_types__int_type_0_f_0();
                        ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(ModuleInfo_12, HighLevelData_13, Var_73, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &IntFieldType_43);
                        Var_75 = parse_tree__builtin_lib_types__int_type_0_f_0();
                        ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_12, Var_75, IntFieldType_43, (MR_Integer) 0, FloatWordA_41, &ArgRvalA_44);
                        Var_77 = parse_tree__builtin_lib_types__int_type_0_f_0();
                        ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_12, Var_77, IntFieldType_43, (MR_Integer) 0, FloatWordB_42, &ArgRvalB_45);
                        StmtA_46 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLvalA_100, ArgRvalA_44, Context_20);
                        StmtB_47 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLvalB_101, ArgRvalB_45, Context_20);
                        {
                          Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (StmtB_47));
                          MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (STATE_VARIABLE_Stmts_0_48));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *STATE_VARIABLE_Stmts_49 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StmtA_46));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_80));
                        }
                      }
                      else
                      {
                        MR_Word Stmt_98;

                        Stmt_98 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_17, ArgRval_36, Context_20);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *STATE_VARIABLE_Stmts_49 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_98));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Stmts_0_48));
                        }
                      }
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word CastVal_37;
                  MR_Word MaskOld_38;
                  MR_Word ShiftNew_39;
                  MR_Word Combined_40;
                  MR_Word Var_84;
                  MR_Integer Var_85;
                  MR_Integer Var_86;
                  MR_Word Stmt_95;
                  MR_Integer Mask_96 = ((MR_Integer) (MR_hl_field(MR_mktag(1), FieldWidth_19, (MR_Integer) 0)));

                  {
                    Var_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_84, 0) = ((MR_Box) (FieldLval_17));
                  }
                  {
                    CastVal_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), CastVal_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), CastVal_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_3[4])));
                    MR_hl_field(MR_mktag(3), CastVal_37, 2) = ((MR_Box) (Var_84));
                  }
                  Var_86 = mercury__int__f_60_60_2_f_0(Mask_96, (MR_Integer) 0);
                  Var_85 = ~(Var_86);
                  MaskOld_38 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(CastVal_37, Var_85);
                  ShiftNew_39 = ml_backend__ml_unify_gen__ml_lshift_2_f_0(ArgRval_36, (MR_Integer) 0);
                  Combined_40 = ml_backend__ml_unify_gen__ml_bitwise_or_2_f_0(MaskOld_38, ShiftNew_39);
                  Stmt_95 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_17, Combined_40, Context_20);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_Stmts_49 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_95));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Stmts_0_48));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word CastVal_120;
                  MR_Word MaskOld_121;
                  MR_Word ShiftNew_122;
                  MR_Word Combined_123;
                  MR_Word Var_126;
                  MR_Integer Var_127;
                  MR_Integer Var_128;
                  MR_Word Stmt_129;
                  MR_Integer Mask_130 = ((MR_Integer) (MR_hl_field(MR_mktag(2), FieldWidth_19, (MR_Integer) 1)));
                  MR_Integer Shift_131 = ((MR_Integer) (MR_hl_field(MR_mktag(2), FieldWidth_19, (MR_Integer) 0)));

                  {
                    Var_126 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_126, 0) = ((MR_Box) (FieldLval_17));
                  }
                  {
                    CastVal_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), CastVal_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), CastVal_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_3[4])));
                    MR_hl_field(MR_mktag(3), CastVal_120, 2) = ((MR_Box) (Var_126));
                  }
                  Var_128 = mercury__int__f_60_60_2_f_0(Mask_130, Shift_131);
                  Var_127 = ~(Var_128);
                  MaskOld_121 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(CastVal_120, Var_127);
                  ShiftNew_122 = ml_backend__ml_unify_gen__ml_lshift_2_f_0(ArgRval_36, Shift_131);
                  Combined_123 = ml_backend__ml_unify_gen__ml_bitwise_or_2_f_0(MaskOld_121, ShiftNew_122);
                  Stmt_129 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_17, Combined_123, Context_20);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_Stmts_49 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_129));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Stmts_0_48));
                  }
                }
                break;
            }
          }
          else
          {
            succeeded = (LeftTopFunctorMode_24 == (MR_Integer) 2);
            if (succeeded)
              succeeded = (RightTopFunctorMode_25 == (MR_Integer) 2);
            if (!(succeeded))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_sub_unify\'/11", (MR_String) "some strange unify");
                return;
              }
            }
            *STATE_VARIABLE_Stmts_49 = STATE_VARIABLE_Stmts_0_48;
          }
        }
      }
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(
  MR_Word Rval_4,
  MR_Integer Mask_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_8;
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_9, 0) = ((MR_Box) (Mask_5));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_8, 1) = ((MR_Box) (Var_9));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[9])));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 2) = ((MR_Box) (Rval_4));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 3) = ((MR_Box) (Var_8));
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_bitwise_or_2_f_0(
  MR_Word RvalA_4,
  MR_Word RvalB_5)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) RvalA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word Rval_6;
    MR_Word UnboxRvalA_10;
    MR_Word STATE_VARIABLE_MaybeType_18_18;
    MR_Word Var_21;
    MR_Word TypeA_8;
    MR_Word UnboxRvalA0_9;
    MR_Word Var_17;
    MR_Word UnboxRvalB0_12;
    MR_Word Var_19;
    MR_Word TypeB_11;

    if (succeeded)
    {
      Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 1)));
      UnboxRvalA0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
        TypeA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0)));
    }
    if (succeeded)
    {
      UnboxRvalA_10 = UnboxRvalA0_9;
      {
        STATE_VARIABLE_MaybeType_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeType_18_18, 0) = ((MR_Box) (TypeA_8));
      }
    }
    else
    {
      UnboxRvalA_10 = RvalA_4;
      STATE_VARIABLE_MaybeType_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    Var_21 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[8]);
    succeeded = ((((MR_tag((MR_Word) RvalB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 1)));
      UnboxRvalB0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 2)));
      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
        TypeB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0)));
    }
    if (succeeded)
    {
      MR_Word UnboxRval_14;

      {
        UnboxRval_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), UnboxRval_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), UnboxRval_14, 1) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(3), UnboxRval_14, 2) = ((MR_Box) (UnboxRvalA_10));
        MR_hl_field(MR_mktag(3), UnboxRval_14, 3) = ((MR_Box) (UnboxRvalB0_12));
      }
      {
        Rval_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Rval_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), Rval_6, 1) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(3), Rval_6, 2) = ((MR_Box) (UnboxRval_14));
      }
    }
    else
    {
      MR_Word UnboxRval_29;

      {
        UnboxRval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), UnboxRval_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), UnboxRval_29, 1) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(3), UnboxRval_29, 2) = ((MR_Box) (UnboxRvalA_10));
        MR_hl_field(MR_mktag(3), UnboxRval_29, 3) = ((MR_Box) (RvalB_5));
      }
      if ((STATE_VARIABLE_MaybeType_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        Rval_6 = UnboxRval_29;
      else
      {
        MR_Word BoxType_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeType_18_18, (MR_Integer) 0)));
        MR_Word Var_25;

        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (BoxType_24));
        }
        {
          Rval_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Rval_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), Rval_6, 1) = ((MR_Box) (Var_25));
          MR_hl_field(MR_mktag(3), Rval_6, 2) = ((MR_Box) (UnboxRval_29));
        }
      }
    }
    return Rval_6;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_rshift_2_f_0(
  MR_Word Rval_4,
  MR_Integer Shift_5)
{
  {
    MR_bool succeeded = (Shift_5 == (MR_Integer) 0);
    MR_Word HeadVar__3_3;

    if (succeeded)
      HeadVar__3_3 = Rval_4;
    else
    {
      MR_Word Var_8;
      MR_Word Var_9;

      {
        Var_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_9, 0) = ((MR_Box) (Shift_5));
      }
      {
        Var_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_8, 1) = ((MR_Box) (Var_9));
      }
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[7])));
        MR_hl_field(MR_mktag(3), HeadVar__3_3, 2) = ((MR_Box) (Rval_4));
        MR_hl_field(MR_mktag(3), HeadVar__3_3, 3) = ((MR_Box) (Var_8));
      }
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_lshift_2_f_0(
  MR_Word Rval0_4,
  MR_Integer Shift_5)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Rval0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word Rval_6;
    MR_Word Var_11;
    MR_Word Var_7;

    if (succeeded)
    {
      Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 1)));
      succeeded = ((((MR_tag((MR_Word) Var_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_11, (MR_Integer) 0)))) == (MR_Integer) 20)));
      if (succeeded)
        Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_11, (MR_Integer) 1)));
    }
    if (succeeded)
    {
      Rval_6 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[5]);
    }
    else
    {
      succeeded = (Shift_5 == (MR_Integer) 0);
      if (succeeded)
        Rval_6 = Rval0_4;
      else
      {
        MR_Word Rval1_9;
        MR_Word Var_14;
        MR_Word Type_8;

        succeeded = ((((MR_tag((MR_Word) Rval0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 1)));
          Rval1_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval0_4, (MR_Integer) 2)));
          succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
            Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0)));
        }
        if (succeeded)
        {
          MR_Word Rval2_10;
          MR_Word Var_17;
          MR_Word Var_18;

          {
            Var_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_18, 0) = ((MR_Box) (Shift_5));
          }
          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (Var_18));
          }
          {
            Rval2_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Rval2_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), Rval2_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[6])));
            MR_hl_field(MR_mktag(3), Rval2_10, 2) = ((MR_Box) (Rval1_9));
            MR_hl_field(MR_mktag(3), Rval2_10, 3) = ((MR_Box) (Var_17));
          }
          {
            Rval_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Rval_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), Rval_6, 1) = ((MR_Box) (Var_14));
            MR_hl_field(MR_mktag(3), Rval_6, 2) = ((MR_Box) (Rval2_10));
          }
        }
        else
        {
          MR_Word Var_22;
          MR_Word Var_23;

          {
            Var_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_23, 0) = ((MR_Box) (Shift_5));
          }
          {
            Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (Var_23));
          }
          {
            Rval_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Rval_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), Rval_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[6])));
            MR_hl_field(MR_mktag(3), Rval_6, 2) = ((MR_Box) (Rval0_4));
            MR_hl_field(MR_mktag(3), Rval_6, 3) = ((MR_Box) (Var_22));
          }
        }
      }
    }
    return Rval_6;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_field_offset_pair_3_p_0(
  MR_Word FieldLval_4,
  MR_Word * FieldLvalA_5,
  MR_Word * FieldLvalB_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) FieldLval_4)) == (MR_mktag((MR_Integer) 0)));
    MR_Word Tag_7;
    MR_Word Address_8;
    MR_Word FieldIdA_9;
    MR_Word PtrType_11;
    MR_Word FieldOffsetA_12;
    MR_Word Var_10;
    MR_Integer Offset_13;
    MR_Word Var_16;

    if (succeeded)
    {
      Tag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldLval_4, (MR_Integer) 0)));
      Address_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldLval_4, (MR_Integer) 1)));
      FieldIdA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldLval_4, (MR_Integer) 2)));
      Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldLval_4, (MR_Integer) 3)));
      PtrType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldLval_4, (MR_Integer) 4)));
      succeeded = ((MR_tag((MR_Word) FieldIdA_9)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        FieldOffsetA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldIdA_9, (MR_Integer) 0)));
        succeeded = ((((MR_tag((MR_Word) FieldOffsetA_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldOffsetA_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldOffsetA_12, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_mktag((MR_Integer) 2)));
          if (succeeded)
            Offset_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_16, (MR_Integer) 0)));
        }
        if (succeeded)
        {
          MR_Word FieldIdB_14;
          MR_Word SubstType_15;
          MR_Word Var_17;
          MR_Word Var_18;
          MR_Integer Var_19 = (Offset_13 + (MR_Integer) 1);

          {
            Var_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_18, 0) = ((MR_Box) (Var_19));
          }
          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (Var_18));
          }
          {
            FieldIdB_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldIdB_14, 0) = ((MR_Box) (Var_17));
          }
          SubstType_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            *FieldLvalA_5 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Tag_7));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Address_8));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (FieldIdA_9));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (SubstType_15));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (PtrType_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            *FieldLvalB_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Tag_7));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Address_8));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (FieldIdB_14));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (SubstType_15));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (PtrType_11));
          }
        }
        else
        {
          mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_field_offset_pair\'/3", (MR_String) "unexpected field offset");
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(
  MR_Word CurArg_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__4_4 = HeadVar__3_3;
  else
  {
    MR_Word NextArg_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word CurWidth_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurArg_1, (MR_Integer) 2)));
    MR_Word NextWidth_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), NextArg_8, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurArg_1, (MR_Integer) 0)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurArg_1, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), CurArg_1, (MR_Integer) 3)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), NextArg_8, (MR_Integer) 0)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), NextArg_8, (MR_Integer) 1)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), NextArg_8, (MR_Integer) 3)));

    switch (MR_tag((MR_Word) CurWidth_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(CurWidth_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) NextWidth_18)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Int_21 = (MR_Integer) HeadVar__3_3;
                  MR_Integer Var_46 = (Int_21 + (MR_Integer) 1);

                  *HeadVar__4_4 = (MR_Word) Var_46;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer Int_21 = (MR_Integer) HeadVar__3_3;
                  MR_Integer Var_46 = (Int_21 + (MR_Integer) 1);

                  *HeadVar__4_4 = (MR_Word) Var_46;
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_next_field_offset\'/4", (MR_String) "partial_word_shifted follows full_word");
                    return;
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) NextWidth_18)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Var_42;
                  MR_Integer Int_48 = (MR_Integer) HeadVar__3_3;

                  Var_42 = (Int_48 + (MR_Integer) 2);
                  *HeadVar__4_4 = (MR_Word) Var_42;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer Var_42;
                  MR_Integer Int_48 = (MR_Integer) HeadVar__3_3;

                  Var_42 = (Int_48 + (MR_Integer) 2);
                  *HeadVar__4_4 = (MR_Word) Var_42;
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_next_field_offset\'/4", (MR_String) "partial_word_shifted follows double_word");
                    return;
                  }
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) NextWidth_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_next_field_offset\'/4", (MR_String) "partial_word_first not followed by partial_word_shifted");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_next_field_offset\'/4", (MR_String) "partial_word_first not followed by partial_word_shifted");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            *HeadVar__4_4 = HeadVar__3_3;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) NextWidth_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Var_36;
              MR_Integer Int_51 = (MR_Integer) HeadVar__3_3;

              Var_36 = (Int_51 + (MR_Integer) 1);
              *HeadVar__4_4 = (MR_Word) Var_36;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Var_36;
              MR_Integer Int_51 = (MR_Integer) HeadVar__3_3;

              Var_36 = (Int_51 + (MR_Integer) 1);
              *HeadVar__4_4 = (MR_Word) Var_36;
            }
            break;
          case (MR_Integer) 2:
            *HeadVar__4_4 = HeadVar__3_3;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word HighLevelData_7,
  MR_Word FieldType_8,
  MR_Word FieldWidth_9,
  MR_Word * BoxedFieldType_10)
{
  {
    MR_bool succeeded;

    switch (HighLevelData_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = (FieldWidth_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          succeeded = !(succeeded);
        }
        break;
      case (MR_Integer) 1:
        succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ModuleInfo_6, FieldType_8, FieldWidth_9);
        break;
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
      MR_Word TypeVarSet0_11;
      MR_Word TypeVar_12;
      MR_Word _TypeVarSet_13;

      mercury__varset__init_1_p_0(TypeCtorInfo_15_15, &TypeVarSet0_11);
      mercury__varset__new_var_3_p_0(TypeCtorInfo_15_15, &TypeVar_12, TypeVarSet0_11, &_TypeVarSet_13);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *BoxedFieldType_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeVar_12));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
      *BoxedFieldType_10 = FieldType_8;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_field_names_and_types_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_27;

    conv0_LambdaHeadVar__2_27 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_field_names_and_types__1550__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_27));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_field_names_and_types_5_p_0(
  MR_Word Info_6,
  MR_Word Type_7,
  MR_Word ConsId_8,
  MR_Word ArgTypes_9,
  MR_Word * Fields_10)
{
  {
    MR_bool succeeded;
    MR_Word Context_11;
    MR_Word MakeUnnamedField_12;
    MR_Integer TupleArity_15;
    MR_Word TypeCtorInfo_38_38;
    MR_Word Var_14;

    Context_11 = mercury__term__context_init_0_f_0();
    {
      MakeUnnamedField_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MakeUnnamedField_12, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), MakeUnnamedField_12, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_field_names_and_types_5_p_0_1));
      MR_hl_field(MR_mktag(0), MakeUnnamedField_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), MakeUnnamedField_12, 3) = ((MR_Box) (Context_11));
    }
    succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(Type_7, &Var_14);
    if (succeeded)
    {
      TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
      mercury__list__length_2_p_0(TypeCtorInfo_38_38, ArgTypes_9, &TupleArity_15);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word FieldTypes_16;

      FieldTypes_16 = ml_backend__ml_code_util__ml_make_boxed_types_1_f_0(TupleArity_15);
      *Fields_10 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, MakeUnnamedField_12, FieldTypes_16);
    }
    else
    {
      MR_Word TypeCtorInfo_41_41;
      MR_Word TypeCtorInfo_42_42;
      MR_Word ModuleInfo_17;
      MR_Word TypeCtor_18;
      MR_Word ConsDefn_19;
      MR_Word Fields0_20;
      MR_Integer NumArgs_21;
      MR_Integer NumFieldTypes0_22;
      MR_Integer NumExtraTypes_23;
      MR_Word ExtraFieldTypes_24;
      MR_Word ExtraFields_25;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;

      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_17);
      parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_7, &TypeCtor_18);
      check_hlds__type_util__get_cons_defn_det_4_p_0(ModuleInfo_17, TypeCtor_18, ConsId_8, &ConsDefn_19);
      Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_19, (MR_Integer) 0)));
      Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_19, (MR_Integer) 1)));
      Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_19, (MR_Integer) 2)));
      Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_19, (MR_Integer) 3)));
      Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_19, (MR_Integer) 4)));
      Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_19, (MR_Integer) 5)));
      Fields0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_19, (MR_Integer) 6)));
      Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_19, (MR_Integer) 7)));
      TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
      NumArgs_21 = mercury__list__length_1_f_0(TypeCtorInfo_41_41, ArgTypes_9);
      TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
      NumFieldTypes0_22 = mercury__list__length_1_f_0(TypeCtorInfo_42_42, Fields0_20);
      NumExtraTypes_23 = (NumArgs_21 - NumFieldTypes0_22);
      ExtraFieldTypes_24 = mercury__list__take_upto_2_f_0(TypeCtorInfo_41_41, NumExtraTypes_23, ArgTypes_9);
      ExtraFields_25 = mercury__list__map_2_f_0(TypeCtorInfo_41_41, TypeCtorInfo_42_42, MakeUnnamedField_12, ExtraFieldTypes_24);
      *Fields_10 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_42_42, ExtraFields_25, Fields0_20);
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_tag_offset_and_argnum_4_p_0(
  MR_Word Tag_5,
  MR_Integer * TagBits_6,
  MR_Word * Offset_7,
  MR_Integer * ArgNum_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) Tag_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Tag_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *TagBits_6 = (MR_Integer) 0;
              *Offset_7 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
              *ArgNum_8 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_tag_offset_and_argnum\'/4", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_tag_offset_and_argnum\'/4", (MR_String) "unexpected tag");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Tag_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 14:
          case (MR_Integer) 15:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_tag_offset_and_argnum\'/4", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word SubTag_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_5, (MR_Integer) 2)));
              MR_Integer Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_5, (MR_Integer) 1)));
              MR_Word next_value_of_Tag_5 = SubTag_45;

              // direct tailcall eliminated
              Tag_5 = next_value_of_Tag_5;
              continue;
            }
            break;
          case (MR_Integer) 11:
            {
              *TagBits_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_5, (MR_Integer) 1)));
              *Offset_7 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
              *ArgNum_8 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 12:
            {
              *TagBits_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_5, (MR_Integer) 1)));
              *Offset_7 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
              *ArgNum_8 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer _SecondaryTag_11;

              *TagBits_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_5, (MR_Integer) 1)));
              _SecondaryTag_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_5, (MR_Integer) 2)));
              *Offset_7 = (MR_Word) ((MR_Box) ((MR_Integer) 1));
              *ArgNum_8 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word SubTag_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_5, (MR_Integer) 2)));
              MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_5, (MR_Integer) 1)));
              MR_Word next_value_of_Tag_5 = SubTag_13;

              // direct tailcall eliminated
              Tag_5 = next_value_of_Tag_5;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_10_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_extra_arg_assign__1370__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word VarType_3,
  MR_Word VarLval_4,
  MR_Integer Offset_5,
  MR_Word ConsIdTag_6,
  MR_Word Context_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_extra_arg_assign\'/10", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

      if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_extra_arg_assign\'/10", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word ExtraType_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ExtraTypes_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        MR_Word Stmt_54;
        MR_Word Stmts_55;
        MR_Word HighLevelData_57;
        MR_Word MLDS_VarType_58;
        MR_Word FieldId_59;
        MR_Word MaybePrimaryTag_60;
        MR_Word FieldLval_61;
        MR_Word Var_64;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Integer Var_71;

        ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_9, &HighLevelData_57);
        {
          Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[1]));
          MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_10_p_0_1));
          MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (HighLevelData_57));
          MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__require__expect_3_p_0(Var_64, (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_extra_arg_assign\'/10", (MR_String) "high-level data");
        ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_9, VarType_3, &MLDS_VarType_58);
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_69, 0) = ((MR_Box) (Offset_5));
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (Var_69));
        }
        {
          FieldId_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FieldId_59, 0) = ((MR_Box) (Var_68));
        }
        MaybePrimaryTag_60 = hlds__hlds_data__get_primary_tag_1_f_0(ConsIdTag_6);
        {
          Var_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_70, 0) = ((MR_Box) (VarLval_4));
        }
        {
          FieldLval_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FieldLval_61, 0) = ((MR_Box) (MaybePrimaryTag_60));
          MR_hl_field(MR_mktag(0), FieldLval_61, 1) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(0), FieldLval_61, 2) = ((MR_Box) (FieldId_59));
          MR_hl_field(MR_mktag(0), FieldLval_61, 3) = ((MR_Box) (ExtraType_47));
          MR_hl_field(MR_mktag(0), FieldLval_61, 4) = ((MR_Box) (MLDS_VarType_58));
        }
        Stmt_54 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_61, Var_76, Context_7);
        Var_71 = (Offset_5 + (MR_Integer) 1);
        ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_10_p_0(Var_75, ExtraTypes_48, VarType_3, VarLval_4, Var_71, ConsIdTag_6, Context_7, &Stmts_55, STATE_VARIABLE_Info_0_9, STATE_VARIABLE_Info_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__8_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_54));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Stmts_55));
        }
      }
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_mktag_1_f_0(
  MR_Integer Tag_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_6;
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_7, 0) = ((MR_Box) (Tag_3));
    }
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_6, 1) = ((MR_Box) (Var_7));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[1])));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 2) = ((MR_Box) (Var_6));
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_field_take_address_assigns_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CellLval_2,
  MR_Word CellType_3,
  MR_Word MaybeTag_4,
  MR_Word Context_5,
  MR_Word Info_6,
  MR_Word * HeadVar__7_7)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word TakeAddrInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word TakeAddrInfos_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Assign_20;
    MR_Word Assigns_21;
    MR_Word AddrVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), TakeAddrInfo_13, (MR_Integer) 0)));
    MR_Word Offset_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), TakeAddrInfo_13, (MR_Integer) 1)));
    MR_Word FieldType_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), TakeAddrInfo_13, (MR_Integer) 3)));
    MR_Word ModuleInfo_26;
    MR_Word Globals_27;
    MR_Word HighLevelData_28;
    MR_Word _ConsArgType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), TakeAddrInfo_13, (MR_Integer) 2)));

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_26);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_26, &Globals_27);
    libs__globals__lookup_bool_option_3_p_0(Globals_27, (MR_Integer) 268, &HighLevelData_28);
    switch (HighLevelData_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer OffsetInt_29 = (MR_Integer) Offset_23;
          MR_Word SourceRval_30;
          MR_Word AddrLval_31;
          MR_Word AddrVarType_32;
          MR_Word MLDS_AddrVarType_33;
          MR_Word CastSourceRval_34;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_42;

          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_38, 0) = ((MR_Box) (CellLval_2));
          }
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_41, 0) = ((MR_Box) (OffsetInt_29));
          }
          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (Var_41));
          }
          {
            Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (Var_40));
          }
          {
            Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (MaybeTag_4));
            MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (Var_39));
            MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (FieldType_25));
            MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) (CellType_3));
          }
          {
            SourceRval_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SourceRval_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), SourceRval_30, 1) = ((MR_Box) (Var_37));
          }
          ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_6, AddrVar_22, &AddrLval_31);
          ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_6, AddrVar_22, &AddrVarType_32);
          MLDS_AddrVarType_33 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_26, AddrVarType_32);
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_42, 0) = ((MR_Box) (MLDS_AddrVarType_33));
          }
          {
            CastSourceRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastSourceRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), CastSourceRval_34, 1) = ((MR_Box) (Var_42));
            MR_hl_field(MR_mktag(3), CastSourceRval_34, 2) = ((MR_Box) (SourceRval_30));
          }
          Assign_20 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(AddrLval_31, CastSourceRval_34, Context_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_36;
          MR_Word AddrLval_43;

          ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_6, AddrVar_22, &AddrLval_43);
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_36, 0) = ((MR_Box) (CellLval_2));
          }
          Assign_20 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(AddrLval_43, Var_36, Context_5);
        }
        break;
    }
    ml_backend__ml_unify_gen__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_14, CellLval_2, CellType_3, MaybeTag_4, Context_5, Info_6, &Assigns_21);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Assign_20));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Assigns_21));
    }
  }
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(
  MR_Word Info_4,
  MR_Word ConsId_5,
  MR_Word * Tag_6)
{
  {
    MR_Word ModuleInfo_7;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_4, &ModuleInfo_7);
    *Tag_6 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_7, ConsId_5);
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_LambdaHeadVar__2_75;

    conv6_LambdaHeadVar__2_75 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_statically__757__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_75));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_RvalC_12;

    ml_backend__ml_unify_gen__ml_shift_combine_rval_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv3_RvalC_12);
    *wrapper_arg_4 = ((MR_Box) (conv3_RvalC_12));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_BoxedFieldType_10;

    ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_BoxedFieldType_10);
    *wrapper_arg_3 = ((MR_Box) (conv2_BoxedFieldType_10));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Rval_6;

    ml_backend__ml_unify_gen__ml_gen_info_lookup_const_var_rval_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv1_Rval_6);
    *wrapper_arg_2 = ((MR_Box) (conv1_Rval_6));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0(
  MR_Word MaybeConsId_16,
  MR_Word MaybeCtorName_17,
  MR_Word MaybeTag_18,
  MR_Word Var_19,
  MR_Word VarLval_20,
  MR_Word VarType_21,
  MR_Word MLDS_Type_22,
  MR_Word ExtraRvals_23,
  MR_Word ExtraTypes_24,
  MR_Word ArgVars_25,
  MR_Word ArgTypes_26,
  MR_Word Context_27,
  MR_Word * Stmts_28,
  MR_Word STATE_VARIABLE_Info_0_61,
  MR_Word * STATE_VARIABLE_Info_62)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_105_105;
    MR_Word TypeCtorInfo_106_106;
    MR_Word ModuleInfo_30;
    MR_Word HighLevelData_31;
    MR_Word Target_32;
    MR_Word ConsArgTypes_33;
    MR_Word ConsArgWidths_34;
    MR_Word ExtraArgRvals_37;
    MR_Word ArgRvals1_39;
    MR_Word UsesBaseClass_43;
    MR_Word ConstType_44;
    MR_Word ArgRvals_45;
    MR_Word AllArgRvals_48;
    MR_Word ArgInits_49;
    MR_Word Initializer_52;
    MR_Word ModuleName_53;
    MR_Word MLDS_ModuleName_54;
    MR_Word ConstAddrRval_55;
    MR_Word TaggedRval_56;
    MR_Word Rval_58;
    MR_Word GroundTerm_59;
    MR_Word AssignStmt_60;
    MR_Word STATE_VARIABLE_GlobalData_63_63;
    MR_Word STATE_VARIABLE_GlobalData_69_69;
    MR_Word STATE_VARIABLE_GlobalData_77_77;
    MR_Word STATE_VARIABLE_Info_78_78;
    MR_Word Var_79;
    MR_Box conv5_Var_46;
    MR_Box conv4_Var_47;
    MR_Word Var_51;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_61, &ModuleInfo_30);
    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_61, &HighLevelData_31);
    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_61, &Target_32);
    ml_backend__ml_unify_gen__get_maybe_cons_id_arg_types_6_p_0(ModuleInfo_30, MaybeConsId_16, ArgTypes_26, VarType_21, &ConsArgTypes_33, &ConsArgWidths_34);
    ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_61, &STATE_VARIABLE_GlobalData_63_63);
    switch (HighLevelData_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorInfo_86_86;
          MR_Word ArgGroundTerms_36;
          MR_Word ArgGroundTermsWidths_38;
          MR_Word Var_67;
          MR_Word STATE_VARIABLE_GlobalData_68_68;

          {
            Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_1));
            MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (STATE_VARIABLE_Info_0_61));
          }
          TypeCtorInfo_86_86 = (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;
          mercury__list__map_3_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], TypeCtorInfo_86_86, Var_67, ArgVars_25, &ArgGroundTerms_36);
          ml_backend__ml_unify_gen__ml_gen_box_extra_const_rval_list_lld_7_p_0(ModuleInfo_30, Context_27, ExtraTypes_24, ExtraRvals_23, &ExtraArgRvals_37, STATE_VARIABLE_GlobalData_63_63, &STATE_VARIABLE_GlobalData_68_68);
          mercury__assoc_list__from_corresponding_lists_3_p_0(TypeCtorInfo_86_86, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, ArgGroundTerms_36, ConsArgWidths_34, &ArgGroundTermsWidths_38);
          ml_backend__ml_unify_gen__ml_gen_box_const_rval_list_lld_6_p_0(ModuleInfo_30, Context_27, ArgGroundTermsWidths_38, &ArgRvals1_39, STATE_VARIABLE_GlobalData_68_68, &STATE_VARIABLE_GlobalData_69_69);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_95_95;
          MR_Word ArgRvals0_40;
          MR_Word FieldTypes_41;
          MR_Word Var_64;
          MR_Word Var_65;

          {
            Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[2]));
            MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_2));
            MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (STATE_VARIABLE_Info_0_61));
          }
          mercury__list__map_3_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, Var_64, ArgVars_25, &ArgRvals0_40);
          {
            Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_3));
            MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (ModuleInfo_30));
            MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) (HighLevelData_31));
          }
          TypeCtorInfo_95_95 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
          mercury__list__map_corresponding_4_p_0(TypeCtorInfo_95_95, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, TypeCtorInfo_95_95, Var_65, ConsArgTypes_33, ConsArgWidths_34, &FieldTypes_41);
          ml_backend__ml_unify_gen__ml_gen_box_or_unbox_const_rval_list_hld_8_p_0(ModuleInfo_30, ArgTypes_26, FieldTypes_41, ArgRvals0_40, Context_27, &ArgRvals1_39, STATE_VARIABLE_GlobalData_63_63, &STATE_VARIABLE_GlobalData_69_69);
          ExtraArgRvals_37 = ExtraRvals_23;
        }
        break;
    }
    if ((MaybeCtorName_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      UsesBaseClass_43 = (MR_Integer) 1;
    else
      UsesBaseClass_43 = (MR_Integer) 0;
    ConstType_44 = ml_backend__ml_unify_gen__get_const_type_for_cons_id_5_f_0(Target_32, HighLevelData_31, MLDS_Type_22, UsesBaseClass_43, MaybeConsId_16);
    TypeCtorInfo_105_105 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
    TypeCtorInfo_106_106 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
    backend_libs__arg_pack__pack_args_8_p_0(TypeCtorInfo_105_105, TypeCtorInfo_106_106, TypeCtorInfo_106_106, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[4], ConsArgWidths_34, ArgRvals1_39, &ArgRvals_45, ((MR_Box) ((MR_Integer) 0)), &conv5_Var_46, ((MR_Box) ((MR_Integer) 0)), &conv4_Var_47);
    AllArgRvals_48 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_105_105, ExtraArgRvals_37, ArgRvals_45);
    ArgInits_49 = mercury__list__map_2_f_0(TypeCtorInfo_105_105, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[5], AllArgRvals_48);
    succeeded = ((((MR_tag((MR_Word) ConstType_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConstType_44, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (succeeded)
    {
      Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConstType_44, (MR_Integer) 1)));
      {
        Initializer_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Initializer_52, 0) = ((MR_Box) (ArgInits_49));
      }
    }
    else
      {
        Initializer_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Initializer_52, 0) = ((MR_Box) (ConstType_44));
        MR_hl_field(MR_mktag(2), Initializer_52, 1) = ((MR_Box) (ArgInits_49));
      }
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_30, &ModuleName_53);
    MLDS_ModuleName_54 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_53);
    ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0(MLDS_ModuleName_54, (MR_Integer) 0, ConstType_44, Initializer_52, Context_27, &ConstAddrRval_55, STATE_VARIABLE_GlobalData_69_69, &STATE_VARIABLE_GlobalData_77_77);
    ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(STATE_VARIABLE_GlobalData_77_77, STATE_VARIABLE_Info_0_61, &STATE_VARIABLE_Info_78_78);
    if ((MaybeTag_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      TaggedRval_56 = ConstAddrRval_55;
    else
    {
      MR_Integer Tag_57 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeTag_18, (MR_Integer) 0)));

      {
        TaggedRval_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TaggedRval_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), TaggedRval_56, 1) = ((MR_Box) (Tag_57));
        MR_hl_field(MR_mktag(3), TaggedRval_56, 2) = ((MR_Box) (ConstAddrRval_55));
      }
    }
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_79, 0) = ((MR_Box) (MLDS_Type_22));
    }
    {
      Rval_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Rval_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Rval_58, 1) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(3), Rval_58, 2) = ((MR_Box) (TaggedRval_56));
    }
    {
      GroundTerm_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), GroundTerm_59, 0) = ((MR_Box) (Rval_58));
      MR_hl_field(MR_mktag(0), GroundTerm_59, 1) = ((MR_Box) (VarType_21));
      MR_hl_field(MR_mktag(0), GroundTerm_59, 2) = ((MR_Box) (MLDS_Type_22));
    }
    ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_19, GroundTerm_59, STATE_VARIABLE_Info_78_78, STATE_VARIABLE_Info_62);
    AssignStmt_60 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_20, Rval_58, Context_27);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_28 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AssignStmt_60));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_box_extra_const_rval_list_lld_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_GlobalData_0_6,
  MR_Word * STATE_VARIABLE_GlobalData_7)
{
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_GlobalData_7 = STATE_VARIABLE_GlobalData_0_6;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_box_extra_const_rval_list_lld\'/7", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

    if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_box_extra_const_rval_list_lld\'/7", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Rval_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
      MR_Word Rvals_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
      MR_Word BoxedRval_19;
      MR_Word BoxedRvals_20;
      MR_Word STATE_VARIABLE_GlobalData_25_25;

      ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_1, Context_2, Var_48, (MR_Integer) 0, Rval_17, &BoxedRval_19, STATE_VARIABLE_GlobalData_0_6, &STATE_VARIABLE_GlobalData_25_25);
      ml_backend__ml_unify_gen__ml_gen_box_extra_const_rval_list_lld_7_p_0(ModuleInfo_1, Context_2, Var_47, Rvals_18, &BoxedRvals_20, STATE_VARIABLE_GlobalData_25_25, STATE_VARIABLE_GlobalData_7);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BoxedRval_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoxedRvals_20));
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_box_const_rval_list_lld_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6)
{
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_GlobalData_6 = STATE_VARIABLE_GlobalData_0_5;
  }
  else
  {
    MR_Word GroundTerm_14;
    MR_Word ArgWidth_15;
    MR_Word GroundTerms_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word BoxedRval_17;
    MR_Word BoxedRvals_18;
    MR_Word Rval_20;
    MR_Word MLDS_Type_22;
    MR_Word DoubleWidth_23;
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word STATE_VARIABLE_GlobalData_27_27;
    MR_Word _MercuryType_21;

    GroundTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0)));
    ArgWidth_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 1)));
    Rval_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_14, (MR_Integer) 0)));
    _MercuryType_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_14, (MR_Integer) 1)));
    MLDS_Type_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_14, (MR_Integer) 2)));
    switch (MR_tag((MR_Word) ArgWidth_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ArgWidth_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            DoubleWidth_23 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            DoubleWidth_23 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        DoubleWidth_23 = (MR_Integer) 0;
        break;
    }
    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_1, Context_2, MLDS_Type_22, DoubleWidth_23, Rval_20, &BoxedRval_17, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_27_27);
    ml_backend__ml_unify_gen__ml_gen_box_const_rval_list_lld_6_p_0(ModuleInfo_1, Context_2, GroundTerms_16, &BoxedRvals_18, STATE_VARIABLE_GlobalData_27_27, STATE_VARIABLE_GlobalData_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BoxedRval_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoxedRvals_18));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_box_or_unbox_const_rval_list_hld_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ArgTypes_10,
  MR_Word FieldTypes_11,
  MR_Word ArgRvals_12,
  MR_Word Context_13,
  MR_Word * FieldRvals_14,
  MR_Word STATE_VARIABLE_GlobalData_0_24,
  MR_Word * STATE_VARIABLE_GlobalData_25)
{
  {
    MR_bool succeeded = (ArgTypes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (succeeded)
    {
      succeeded = (FieldTypes_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (ArgRvals_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      *FieldRvals_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_GlobalData_25 = STATE_VARIABLE_GlobalData_0_24;
    }
    else
    {
      MR_Word ArgType_16;
      MR_Word ArgTypesTail_17;
      MR_Word FieldType_18;
      MR_Word FieldTypesTail_19;
      MR_Word ArgRval_20;
      MR_Word ArgRvalsTail_21;

      succeeded = ((MR_tag((MR_Word) ArgTypes_10)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_10, (MR_Integer) 0)));
        ArgTypesTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypes_10, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) FieldTypes_11)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          FieldType_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), FieldTypes_11, (MR_Integer) 0)));
          FieldTypesTail_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), FieldTypes_11, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) ArgRvals_12)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            ArgRval_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgRvals_12, (MR_Integer) 0)));
            ArgRvalsTail_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgRvals_12, (MR_Integer) 1)));
          }
        }
      }
      if (succeeded)
      {
        MR_Word FieldRval_22;
        MR_Word FieldRvalsTail_23;
        MR_Word STATE_VARIABLE_GlobalData_26_26;

        switch (MR_tag((MR_Word) FieldType_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word MLDS_ArgType_41;

              MLDS_ArgType_41 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_9, ArgType_16);
              ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_9, Context_13, MLDS_ArgType_41, (MR_Integer) 0, ArgRval_20, &FieldRval_22, STATE_VARIABLE_GlobalData_0_24, &STATE_VARIABLE_GlobalData_26_26);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_9, ArgType_16, FieldType_18, (MR_Integer) 0, ArgRval_20, &FieldRval_22);
              STATE_VARIABLE_GlobalData_26_26 = STATE_VARIABLE_GlobalData_0_24;
            }
            break;
          case (MR_Integer) 3:
            {
              ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_9, ArgType_16, FieldType_18, (MR_Integer) 0, ArgRval_20, &FieldRval_22);
              STATE_VARIABLE_GlobalData_26_26 = STATE_VARIABLE_GlobalData_0_24;
            }
            break;
        }
        ml_backend__ml_unify_gen__ml_gen_box_or_unbox_const_rval_list_hld_8_p_0(ModuleInfo_9, ArgTypesTail_17, FieldTypesTail_19, ArgRvalsTail_21, Context_13, &FieldRvalsTail_23, STATE_VARIABLE_GlobalData_26_26, STATE_VARIABLE_GlobalData_25);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *FieldRvals_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FieldRval_22));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FieldRvalsTail_23));
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_box_or_unbox_const_rval_list_hld\'/8", (MR_String) "list length mismatch");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__get_maybe_cons_id_arg_types_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_33;
    MR_Word conv0_LambdaHeadVar__3_34;

    ml_backend__ml_unify_gen__IntroducedFrom__pred__constructor_arg_types__1076__1_3_p_0(((MR_Word) wrapper_arg_1), &conv1_LambdaHeadVar__2_33, &conv0_LambdaHeadVar__3_34);
    *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_33));
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_34));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__get_maybe_cons_id_arg_types_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word MaybeConsId_8,
  MR_Word ArgTypes_9,
  MR_Word Type_10,
  MR_Word * ConsArgTypes_11,
  MR_Word * ConsArgWidths_12)
{
  {
    MR_bool succeeded;

    if ((MaybeConsId_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer Length_14;

      Length_14 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ArgTypes_9);
      *ConsArgTypes_11 = ml_backend__ml_code_util__ml_make_boxed_types_1_f_0(Length_14);
      *ConsArgWidths_12 = mercury__list__duplicate_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, Length_14, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
    }
    else
    {
      MR_Word ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeConsId_8, (MR_Integer) 0)));
      MR_Word Var_24;
      MR_Integer Var_25;
      MR_Word Var_26;

      succeeded = ((((MR_tag((MR_Word) ConsId_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_13, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_13, (MR_Integer) 1)));
        Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_13, (MR_Integer) 2)));
        Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_13, (MR_Integer) 3)));
        succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(Type_10);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word TypeCtor_27;
        MR_Word ConsDefn_28;

        parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_10, &TypeCtor_27);
        succeeded = check_hlds__type_util__get_cons_defn_4_p_0(ModuleInfo_7, TypeCtor_27, ConsId_13, &ConsDefn_28);
        if (succeeded)
        {
          MR_Word TypeCtorInfo_54_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
          MR_Word TypeCtorInfo_55_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0;
          MR_Word ConsArgDefns_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_28, (MR_Integer) 6)));
          MR_Word ConsArgTypes0_35;
          MR_Word ConsArgWidths0_36;
          MR_Integer NumExtraArgs_37;
          MR_Word ExtraArgTypes_38;
          MR_Word ExtraArgWidths_39;
          MR_Integer Var_46;
          MR_Integer Var_47;
          MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_28, (MR_Integer) 0)));
          MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_28, (MR_Integer) 1)));
          MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_28, (MR_Integer) 2)));
          MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_28, (MR_Integer) 3)));
          MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_28, (MR_Integer) 4)));
          MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_28, (MR_Integer) 5)));
          MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_28, (MR_Integer) 7)));

          mercury__list__map2_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, TypeCtorInfo_54_65, TypeCtorInfo_55_66, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[3], ConsArgDefns_29, &ConsArgTypes0_35, &ConsArgWidths0_36);
          Var_46 = mercury__list__length_1_f_0(TypeCtorInfo_54_65, ArgTypes_9);
          Var_47 = mercury__list__length_1_f_0(TypeCtorInfo_54_65, ConsArgTypes0_35);
          NumExtraArgs_37 = (Var_46 - Var_47);
          ExtraArgTypes_38 = mercury__list__take_upto_2_f_0(TypeCtorInfo_54_65, NumExtraArgs_37, ArgTypes_9);
          ExtraArgWidths_39 = mercury__list__duplicate_2_f_0(TypeCtorInfo_55_66, NumExtraArgs_37, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
          *ConsArgTypes_11 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_54_65, ExtraArgTypes_38, ConsArgTypes0_35);
          *ConsArgWidths_12 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_55_66, ExtraArgWidths_39, ConsArgWidths0_36);
        }
        else
        {
          MR_Word Var_40;

          succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(Type_10, &Var_40);
          if (succeeded)
          {
            MR_Integer Length_41;

            Length_41 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ArgTypes_9);
            *ConsArgTypes_11 = ml_backend__ml_code_util__ml_make_boxed_types_1_f_0(Length_41);
            *ConsArgWidths_12 = mercury__list__duplicate_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, Length_41, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.constructor_arg_types\'/6", (MR_String) "get_cons_defn failed");
              return;
            }
          }
        }
      }
      else
      {
        MR_Integer Length_56;

        *ConsArgTypes_11 = ArgTypes_9;
        Length_56 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ArgTypes_9);
        *ConsArgWidths_12 = mercury__list__duplicate_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, Length_56, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
      }
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__get_const_type_for_cons_id_5_f_0(
  MR_Word Target_7,
  MR_Word HighLevelData_8,
  MR_Word MLDS_Type_9,
  MR_Word UsesBaseClass_10,
  MR_Word MaybeConsId_11)
{
  {
    MR_bool succeeded;
    MR_Word ConstType_12;

    switch (HighLevelData_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ConstType_12 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[4]);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorCategory_14;
          MR_Word Var_13;
          MR_Word Var_15;
          MR_Word Var_16;

          succeeded = (Target_7 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1)));
              TypeCtorCategory_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 2)));
              Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3)));
              succeeded = ((((MR_tag((MR_Word) TypeCtorCategory_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeCtorCategory_14, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
                Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeCtorCategory_14, (MR_Integer) 1)));
            }
          }
          if (succeeded)
          {
            ConstType_12 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[4]);
          }
          else
          {
            MR_Word CtorSymName_18;
            MR_Integer CtorArity_19;
            MR_Word QualTypeName_21;
            MR_Integer TypeArity_22;
            MR_Word ConsId_17;
            MR_Word _TypeCtor_20;

            succeeded = (UsesBaseClass_10 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) MaybeConsId_11)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeConsId_11, (MR_Integer) 0)));
                succeeded = ((((MR_tag((MR_Word) ConsId_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  CtorSymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_17, (MR_Integer) 1)));
                  CtorArity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_17, (MR_Integer) 2)));
                  _TypeCtor_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_17, (MR_Integer) 3)));
                  if (((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 1))))
                  {
                    MR_Word Var_48 = (MR_Word) MR_body(((MR_Word) MLDS_Type_9), (MR_Integer) 1);
                    MR_Word Var_23;

                    QualTypeName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 0)));
                    TypeArity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 1)));
                    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 2)));
                    succeeded = MR_TRUE;
                  }
                  else
                  if (((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0)))) == (MR_Integer) 0))))
                  {
                    MR_Word MercuryType_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1)));
                    MR_Word TypeCtor_27;
                    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 2)));
                    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3)));
                    MR_Word Var_25;

                    succeeded = ((((MR_tag((MR_Word) Var_47)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_47, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_47, (MR_Integer) 1)));
                      succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(MercuryType_24, &TypeCtor_27);
                      if (succeeded)
                      {
                        ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_27, &QualTypeName_21, &TypeArity_22);
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  else
                    succeeded = MR_FALSE;
                }
              }
            }
            if (succeeded)
            {
              MR_String UnqualTypeName_30 = ((MR_String) (MR_hl_field(MR_mktag(0), QualTypeName_21, (MR_Integer) 2)));
              MR_String CtorName_31;
              MR_Word MLDS_Module_32;
              MR_String TypeName_34;
              MR_Word ClassQualifier_35;
              MR_Word QualClassName_36;
              MR_Word ClassId_37;
              MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualTypeName_21, (MR_Integer) 0)));
              MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualTypeName_21, (MR_Integer) 1)));
              MR_Word _QualKind_33;

              CtorName_31 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_unqual_type_5_f_0(Target_7, UnqualTypeName_30, TypeArity_22, CtorSymName_18, CtorArity_19);
              MLDS_Module_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualTypeName_21, (MR_Integer) 0)));
              _QualKind_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualTypeName_21, (MR_Integer) 1)));
              TypeName_34 = ((MR_String) (MR_hl_field(MR_mktag(0), QualTypeName_21, (MR_Integer) 2)));
              ClassQualifier_35 = ml_backend__mlds__mlds_append_class_qualifier_module_qual_3_f_0(MLDS_Module_32, TypeName_34, TypeArity_22);
              {
                QualClassName_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), QualClassName_36, 0) = ((MR_Box) (ClassQualifier_35));
                MR_hl_field(MR_mktag(0), QualClassName_36, 1) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), QualClassName_36, 2) = ((MR_Box) (CtorName_31));
              }
              {
                ClassId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ClassId_37, 0) = ((MR_Box) (QualClassName_36));
                MR_hl_field(MR_mktag(0), ClassId_37, 1) = ((MR_Box) (CtorArity_19));
                MR_hl_field(MR_mktag(0), ClassId_37, 2) = ((MR_Box) ((MR_Integer) 0));
              }
              ConstType_12 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ClassId_37);
            }
            else
            {
              MR_Word TypeCtor_61;
              MR_Word Var_51;
              MR_Word MercuryType_58;
              MR_Word Var_39;
              MR_Word Var_38;

              succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                MercuryType_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1)));
                Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 2)));
                Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3)));
                succeeded = ((((MR_tag((MR_Word) Var_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_51, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_51, (MR_Integer) 1)));
                  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(MercuryType_58, &TypeCtor_61);
                }
              }
              if (succeeded)
              {
                MR_Word ClassName_40;
                MR_Integer ClassArity_41;
                MR_Word ClassId_59;

                ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_61, &ClassName_40, &ClassArity_41);
                {
                  ClassId_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ClassId_59, 0) = ((MR_Box) (ClassName_40));
                  MR_hl_field(MR_mktag(0), ClassId_59, 1) = ((MR_Box) (ClassArity_41));
                  MR_hl_field(MR_mktag(0), ClassId_59, 2) = ((MR_Box) ((MR_Integer) 0));
                }
                ConstType_12 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ClassId_59);
              }
              else
              {
                MR_Word Var_53;
                MR_Word Var_42;
                MR_Word Var_43;

                succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1)));
                  Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 2)));
                  Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3)));
                  succeeded = (Var_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                }
                if (succeeded)
                {
                  ConstType_12 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[4]);
                }
                else
                {
                  MR_Word Var_55;
                  MR_Word Var_44;
                  MR_Word Var_45;

                  succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1)));
                    Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 2)));
                    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3)));
                    succeeded = (Var_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  if (succeeded)
                  {
                    ConstType_12 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[4]);
                  }
                  else
                    ConstType_12 = MLDS_Type_9;
                }
              }
            }
          }
        }
        break;
    }
    return ConstType_12;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_constant_6_p_0(
  MR_Word Tag_7,
  MR_Word VarType_8,
  MR_Word MLDS_VarType_9,
  MR_Word * Rval_10,
  MR_Word STATE_VARIABLE_Info_0_55,
  MR_Word * STATE_VARIABLE_Info_56)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) Tag_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_constant\'/6", (MR_String) "unexpected tag");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_14 = ((MR_String) (MR_hl_field(MR_mktag(1), Tag_7, (MR_Integer) 0)));
          MR_Word Var_82;

          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (String_14));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Rval_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_82));
          }
          *STATE_VARIABLE_Info_56 = STATE_VARIABLE_Info_0_55;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_13 = MR_unbox_float((MR_hl_field(MR_mktag(2), Tag_7, (MR_Integer) 0)));
          MR_Word Var_83;

          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
            MR_hl_field(MR_mktag(3), Var_83, 1) = MR_box_float(Float_13);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Rval_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_83));
          }
          *STATE_VARIABLE_Info_56 = STATE_VARIABLE_Info_0_55;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 1)));

              *Rval_10 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(IntTag_12, VarType_8, MLDS_VarType_9);
              *STATE_VARIABLE_Info_56 = STATE_VARIABLE_Info_0_55;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 1)));
              MR_String ForeignTag_16 = ((MR_String) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 2)));
              MR_Word Var_81;

              {
                Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (ForeignLang_15));
                MR_hl_field(MR_mktag(3), Var_81, 2) = ((MR_Box) (ForeignTag_16));
                MR_hl_field(MR_mktag(3), Var_81, 3) = ((MR_Box) (MLDS_VarType_9));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Rval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_81));
              }
              *STATE_VARIABLE_Info_56 = STATE_VARIABLE_Info_0_55;
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_constant\'/6", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ModuleName0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 1)));
              MR_String TypeName_20 = ((MR_String) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 2)));
              MR_Integer TypeArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 3)));
              MR_Word ModuleName_22;
              MR_Word MLDS_Module_23;
              MR_Word RttiTypeCtor_24;
              MR_Word RttiId_25;
              MR_Word Const_26;
              MR_Word Var_72;
              MR_Word Var_73;

              ModuleName_22 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_19);
              MLDS_Module_23 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_22);
              {
                RttiTypeCtor_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RttiTypeCtor_24, 0) = ((MR_Box) (ModuleName_22));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_24, 1) = ((MR_Box) (TypeName_20));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_24, 2) = ((MR_Box) (TypeArity_21));
              }
              {
                RttiId_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RttiId_25, 0) = ((MR_Box) (RttiTypeCtor_24));
                MR_hl_field(MR_mktag(0), RttiId_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
              }
              {
                Const_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                MR_hl_field(MR_mktag(3), Const_26, 1) = ((MR_Box) (MLDS_Module_23));
                MR_hl_field(MR_mktag(3), Const_26, 2) = ((MR_Box) (RttiId_25));
              }
              {
                Var_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_72, 0) = ((MR_Box) (MLDS_VarType_9));
              }
              {
                Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (Const_26));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_72));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_73));
              }
              *STATE_VARIABLE_Info_56 = STATE_VARIABLE_Info_0_55;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ClassId_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 2)));
              MR_String Instance_28 = ((MR_String) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 3)));
              MR_Word TCName_29;
              MR_Word Var_68;
              MR_Word Var_69;
              MR_Word Var_70;
              MR_Word ModuleName_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 1)));
              MR_Word MLDS_Module_85;
              MR_Word RttiId_86;
              MR_Word Const_87;

              MLDS_Module_85 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_84);
              TCName_29 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_27);
              {
                Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (ModuleName_84));
                MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Instance_28));
              }
              {
                RttiId_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), RttiId_86, 0) = ((MR_Box) (TCName_29));
                MR_hl_field(MR_mktag(1), RttiId_86, 1) = ((MR_Box) (Var_68));
              }
              {
                Const_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                MR_hl_field(MR_mktag(3), Const_87, 1) = ((MR_Box) (MLDS_Module_85));
                MR_hl_field(MR_mktag(3), Const_87, 2) = ((MR_Box) (RttiId_86));
              }
              {
                Var_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_69, 0) = ((MR_Box) (MLDS_VarType_9));
              }
              {
                Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (Const_87));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_69));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_70));
              }
              *STATE_VARIABLE_Info_56 = STATE_VARIABLE_Info_0_55;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word PredId_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 1)));
              MR_Integer ProcId_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 2)));
              MR_Word ModuleInfo_32;
              MR_Word PredLabel_33;
              MR_Word PredModule_34;
              MR_Word ProcLabel_35;
              MR_Word QualProcLabel_36;
              MR_Word Var_64;
              MR_Word Var_66;
              MR_Word Var_67;
              MR_Word Const_88;

              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_55, &ModuleInfo_32);
              {
                Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (PredId_30));
                MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (ProcId_31));
              }
              ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_32, Var_64, &PredLabel_33, &PredModule_34);
              {
                ProcLabel_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ProcLabel_35, 0) = ((MR_Box) (PredLabel_33));
                MR_hl_field(MR_mktag(0), ProcLabel_35, 1) = ((MR_Box) (ProcId_31));
              }
              {
                QualProcLabel_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), QualProcLabel_36, 0) = ((MR_Box) (PredModule_34));
                MR_hl_field(MR_mktag(0), QualProcLabel_36, 1) = ((MR_Box) (ProcLabel_35));
              }
              {
                Const_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
                MR_hl_field(MR_mktag(3), Const_88, 1) = ((MR_Box) (QualProcLabel_36));
                MR_hl_field(MR_mktag(3), Const_88, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_66, 0) = ((MR_Box) (MLDS_VarType_9));
              }
              {
                Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (Const_88));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_66));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_67));
              }
              *STATE_VARIABLE_Info_56 = STATE_VARIABLE_Info_0_55;
            }
            break;
          case (MR_Integer) 9:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_constant\'/6", (MR_String) "deep_profiling_proc_layout_tag NYI");
                return;
              }
            }
            break;
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_constant\'/6", (MR_String) "table_io_entry_tag NYI");
                return;
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer Bits1_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 1)));
              MR_Integer Num1_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 2)));
              MR_Word Var_74;
              MR_Word Var_75;
              MR_Word Var_76;
              MR_Word Var_79;
              MR_Word Var_80;

              {
                Var_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_74, 0) = ((MR_Box) (MLDS_VarType_9));
              }
              {
                Var_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_80, 0) = ((MR_Box) (Num1_18));
              }
              {
                Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (Var_80));
              }
              {
                Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_3[0])));
                MR_hl_field(MR_mktag(3), Var_76, 2) = ((MR_Box) (Var_79));
              }
              {
                Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (Bits1_17));
                MR_hl_field(MR_mktag(3), Var_75, 2) = ((MR_Box) (Var_76));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_74));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_75));
              }
              *STATE_VARIABLE_Info_56 = STATE_VARIABLE_Info_0_55;
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ReservedAddr_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 1)));
              MR_Word ModuleInfo_89;

              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_55, &ModuleInfo_89);
              *Rval_10 = ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_114_101_115_101_114_118_101_100_95_97_100_100_114_101_115_115_95_95_91_49_93_95_48_3_f_0(ReservedAddr_41, MLDS_VarType_9);
              *STATE_VARIABLE_Info_56 = STATE_VARIABLE_Info_0_55;
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word ThisTag_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 2)));
              MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_7, (MR_Integer) 1)));
              MR_Word next_value_of_Tag_7 = ThisTag_43;

              // direct tailcall eliminated
              Tag_7 = next_value_of_Tag_7;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

MR_Word MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_114_101_115_101_114_118_101_100_95_97_100_100_114_101_115_115_95_95_91_49_93_95_48_3_f_0(
  MR_Word ResAddr_6,
  MR_Word MLDS_Type_7)
{
  {
    MR_Word Rval_8;

    switch (MR_tag((MR_Word) ResAddr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_18;

          {
            Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
            MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (MLDS_Type_7));
          }
          {
            Rval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Rval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Rval_8, 1) = ((MR_Box) (Var_18));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Int_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ResAddr_6, (MR_Integer) 0)));
          MR_Word Var_15;
          MR_Word Var_16;
          MR_Word Var_17;

          {
            Var_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_15, 0) = ((MR_Box) (MLDS_Type_7));
          }
          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_17, 0) = ((MR_Box) (Int_9));
          }
          {
            Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_16, 1) = ((MR_Box) (Var_17));
          }
          {
            Rval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Rval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), Rval_8, 1) = ((MR_Box) (Var_15));
            MR_hl_field(MR_mktag(3), Rval_8, 2) = ((MR_Box) (Var_16));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_unify_gen.ml_gen_reserved_address\'/3", (MR_String) "reserved_object");
        }
        break;
    }
    return Rval_8;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____field_offset_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen____Unify____field_offset_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____field_offset_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen____Compare____field_offset_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____ml_const_struct_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen____Unify____ml_const_struct_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____ml_const_struct_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen____Compare____ml_const_struct_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____take_addr_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen____Unify____take_addr_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____take_addr_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen____Compare____take_addr_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__ml_unify_gen__init(void)
{
}

void mercury__ml_backend__ml_unify_gen__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_field_offset_0);
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_ml_const_struct_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_take_addr_info_0);
}

void mercury__ml_backend__ml_unify_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_unify_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_unify_gen.
