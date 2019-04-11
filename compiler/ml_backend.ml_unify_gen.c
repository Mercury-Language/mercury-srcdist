/*
** Automatically generated from `ml_unify_gen.m'
** by the Mercury compiler,
** version rotd-2017-07-04
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


/* :- module ml_backend.ml_unify_gen. */
/* :- implementation. */

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
#include "ml_backend.ml_target_util.mih"
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



struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0_s {
  MR_bool ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__succeeded;
  MR_Word ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__TypeCtor_33;
  MR_Word ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__Ctors_44;
  MR_Word ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__TagValues_45;
  jmp_buf ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__commit_0;
  MR_Word ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__Ctor_75;
  MR_Box ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__conv0_Ctor_75;
  jmp_buf ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__commit_1;
  MR_Word ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__Ctor_76;
  MR_Box ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__conv1_Ctor_76;
};


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_unify_gen__pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_rval_0ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_pair__ti_pair_2ml_backend__mlds__type_ctor_info_mlds_rval_0ml_backend__mlds__type_ctor_info_mlds_type_0;

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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____field_offset_0_0_10001(
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____field_offset_0_0_10001(
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____ml_const_struct_info_0_0_10001(
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____ml_const_struct_info_0_0_10001(
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____take_addr_info_0_0_10001(
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____take_addr_info_0_0_10001(
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_50_93_95_48_6_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_7,
  MR_Word ml_backend__ml_unify_gen__ConsTag_9,
  MR_Word ml_backend__ml_unify_gen__Type_10,
  MR_Word ml_backend__ml_unify_gen__MLDS_Type_11,
  MR_Word * ml_backend__ml_unify_gen__Rval_12);

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_101_119_95_111_98_106_101_99_116_95_100_121_110_97_109_105_99_97_108_108_121_95_95_91_53_93_95_48_18_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_4,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_5,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_6,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_7,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_8);

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_101_119_95_111_98_106_101_99_116_95_100_121_110_97_109_105_99_97_108_108_121_95_95_91_53_93_95_48_18_p_0(
  MR_Word ml_backend__ml_unify_gen__MaybeConsId_19,
  MR_Word ml_backend__ml_unify_gen__MaybeCtorName_20,
  MR_Word ml_backend__ml_unify_gen__MaybeTag_21,
  MR_Word ml_backend__ml_unify_gen__ExplicitSecTag_22,
  MR_Word ml_backend__ml_unify_gen__VarLval_24,
  MR_Word ml_backend__ml_unify_gen__VarType_25,
  MR_Word ml_backend__ml_unify_gen__MLDS_Type_26,
  MR_Word ml_backend__ml_unify_gen__ExtraRvals_27,
  MR_Word ml_backend__ml_unify_gen__ExtraTypes_28,
  MR_Word ml_backend__ml_unify_gen__ArgVars_29,
  MR_Word ml_backend__ml_unify_gen__ArgTypes_30,
  MR_Word ml_backend__ml_unify_gen__ArgModes_31,
  MR_Word ml_backend__ml_unify_gen__TakeAddr_32,
  MR_Word ml_backend__ml_unify_gen__Context_33,
  MR_Word * ml_backend__ml_unify_gen__Statements_34,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_74,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_75);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__3014__1_1_f_0(
  MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__1_83);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_static_compound__2971__1_2_p_0(
  MR_Integer ml_backend__ml_unify_gen__NumExtraArgs_35,
  MR_Integer ml_backend__ml_unify_gen__HeadVar__2_69);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__2966__1_1_f_0(
  MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__1_61);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_ground_term_conjunct_compound__2698__1_1_f_0(
  MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__1_93);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_compound__2660__1_2_p_0(
  MR_Integer ml_backend__ml_unify_gen__NumExtraArgs_43,
  MR_Integer ml_backend__ml_unify_gen__HeadVar__2_79);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_ground_term_conjunct_compound__2655__1_1_f_0(
  MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__1_71);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_ground_term_conjunct_compound__2654__1_1_f_0(
  MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__1_68);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2543__7_2_p_0(
  MR_Word ml_backend__ml_unify_gen__Args_25,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_212);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2543__6_2_p_0(
  MR_Word ml_backend__ml_unify_gen__Args_25,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_200);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2543__5_2_p_0(
  MR_Word ml_backend__ml_unify_gen__Args_25,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_186);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2543__4_2_p_0(
  MR_Word ml_backend__ml_unify_gen__Args_25,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_174);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2543__3_2_p_0(
  MR_Word ml_backend__ml_unify_gen__Args_25,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_162);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2543__2_2_p_0(
  MR_Word ml_backend__ml_unify_gen__Args_25,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_150);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2543__1_2_p_0(
  MR_Word ml_backend__ml_unify_gen__Args_25,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_123);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_tag_test_rval__2291__1_5_f_0(
  MR_Word ml_backend__ml_unify_gen__Type_7,
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_8,
  MR_Word ml_backend__ml_unify_gen__Rval_9,
  MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__1_63,
  MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__2_64);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_field_names_and_types__1627__1_2_f_0(
  MR_Word ml_backend__ml_unify_gen__Context_11,
  MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__1_26);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_extra_arg_assign__1445__1_2_p_0(
  MR_Word ml_backend__ml_unify_gen__HighLevelData_59,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_70);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args_2__1388__1_2_p_0(
  MR_Word ml_backend__ml_unify_gen__ConsArgWidth_48,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_65);

static void MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__constructor_arg_types__1150__1_3_p_0(
  MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__1_32,
  MR_Word * ml_backend__ml_unify_gen__LambdaHeadVar__2_33,
  MR_Word * ml_backend__ml_unify_gen__LambdaHeadVar__3_34);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__902__1_2_p_0(
  MR_Integer ml_backend__ml_unify_gen__PrimaryTag_54,
  MR_Integer ml_backend__ml_unify_gen__LambdaHeadVar__1_91);

static void MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__885__1_3_p_0(
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_82,
  MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__1_88,
  MR_Integer * ml_backend__ml_unify_gen__LambdaHeadVar__2_89);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_statically__827__1_1_f_0(
  MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__1_74);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__664__1_2_p_0(
  MR_Word ml_backend__ml_unify_gen__TakeAddr_25,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_47);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__205__1_2_p_0(
  MR_Word ml_backend__ml_unify_gen__CodeModel_8,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_79);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__236__1_2_p_0(
  MR_Word ml_backend__ml_unify_gen__MaybeSizeProfInfo_36,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_73);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__223__1_2_p_0(
  MR_Word ml_backend__ml_unify_gen__CodeModel_8,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_68);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__172__1_2_p_0(
  MR_Word ml_backend__ml_unify_gen__CodeModel_8,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_89);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____take_addr_info_0_0(
  MR_Word * ml_backend__ml_unify_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_unify_gen__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____take_addr_info_0_0(
  MR_Word ml_backend__ml_unify_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____ml_const_struct_info_0_0(
  MR_Word * ml_backend__ml_unify_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_unify_gen__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____ml_const_struct_info_0_0(
  MR_Word ml_backend__ml_unify_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____field_offset_0_0(
  MR_Word * ml_backend__ml_unify_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_unify_gen__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____field_offset_0_0(
  MR_Word ml_backend__ml_unify_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(
  MR_Word ml_backend__ml_unify_gen__Rval_4,
  MR_Integer ml_backend__ml_unify_gen__Mask_5);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_bitwise_or_2_f_0(
  MR_Word ml_backend__ml_unify_gen__RvalA_4,
  MR_Word ml_backend__ml_unify_gen__RvalB_5);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_rshift_2_f_0(
  MR_Word ml_backend__ml_unify_gen__Rval_4,
  MR_Integer ml_backend__ml_unify_gen__Shift_5);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_lshift_2_f_0(
  MR_Word ml_backend__ml_unify_gen__Rval0_4,
  MR_Integer ml_backend__ml_unify_gen__Shift_5);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_shift_combine_rval_type_8_p_0(
  MR_Word ml_backend__ml_unify_gen__ArgA_9,
  MR_Integer ml_backend__ml_unify_gen__Shift_10,
  MR_Word ml_backend__ml_unify_gen__MaybeArgB_11,
  MR_Word * ml_backend__ml_unify_gen__ArgC_12);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_shift_combine_rval_8_p_0(
  MR_Word ml_backend__ml_unify_gen__RvalA_9,
  MR_Integer ml_backend__ml_unify_gen__Shift_10,
  MR_Word ml_backend__ml_unify_gen__MaybeRvalB_11,
  MR_Word * ml_backend__ml_unify_gen__RvalC_12);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_expand_double_word_rvals_4_p_0(
  MR_Word ml_backend__ml_unify_gen__HeadVar__1_1,
  MR_Word * ml_backend__ml_unify_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_unify_gen__HeadVar__3_3,
  MR_Word * ml_backend__ml_unify_gen__HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_arg_7_p_0(
  MR_Word ml_backend__ml_unify_gen__Info_8,
  MR_Word ml_backend__ml_unify_gen__ConstStructMap_9,
  MR_Word ml_backend__ml_unify_gen__ConstArg_10,
  MR_Word ml_backend__ml_unify_gen__DoubleWidth_11,
  MR_Word * ml_backend__ml_unify_gen__Rval_12,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_23,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_24);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_args_6_p_0(
  MR_Word ml_backend__ml_unify_gen__Info_1,
  MR_Word ml_backend__ml_unify_gen__ConstStructMap_2,
  MR_Word ml_backend__ml_unify_gen__HeadVar__3_3,
  MR_Word * ml_backend__ml_unify_gen__HeadVar__4_4,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_5,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_6);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_4(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_3(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_4,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_5,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_6,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_7,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_8);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_2(
  MR_Box ml_backend__ml_unify_gen__closure_arg);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(
  MR_Word ml_backend__ml_unify_gen__Info_14,
  MR_Integer ml_backend__ml_unify_gen__ConstNum_15,
  MR_Word ml_backend__ml_unify_gen__Type_16,
  MR_Word ml_backend__ml_unify_gen__MLDS_Type_17,
  MR_Word ml_backend__ml_unify_gen__ConsId_18,
  MR_Word ml_backend__ml_unify_gen__ConsTag_19,
  MR_Integer ml_backend__ml_unify_gen__Ptag_20,
  MR_Word ml_backend__ml_unify_gen__ExtraInitializers_21,
  MR_Word ml_backend__ml_unify_gen__Args_22,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_0_56,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_57,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_58,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_59);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_tag_11_p_0(
  MR_Word ml_backend__ml_unify_gen__Info_12,
  MR_Integer ml_backend__ml_unify_gen__ConstNum_13,
  MR_Word ml_backend__ml_unify_gen__Type_14,
  MR_Word ml_backend__ml_unify_gen__MLDS_Type_15,
  MR_Word ml_backend__ml_unify_gen__ConsId_16,
  MR_Word ml_backend__ml_unify_gen__ConsTag_17,
  MR_Word ml_backend__ml_unify_gen__Args_18,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_0_68,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_69,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_70,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_71);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_6_p_0(
  MR_Word ml_backend__ml_unify_gen__Info_7,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_0_19,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_20,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_21,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_22);

static void MR_CALL 
ml_backend__ml_unify_gen__construct_ground_term_initializers_lld_8_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_1,
  MR_Word ml_backend__ml_unify_gen__Context_2,
  MR_Word ml_backend__ml_unify_gen__HeadVar__3_3,
  MR_Word * ml_backend__ml_unify_gen__HeadVar__4_4,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_5,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_6,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_7,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_8);

static void MR_CALL 
ml_backend__ml_unify_gen__construct_ground_term_initializers_hld_10_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_11,
  MR_Word ml_backend__ml_unify_gen__Context_12,
  MR_Word ml_backend__ml_unify_gen__Args_13,
  MR_Word ml_backend__ml_unify_gen__ConsArgTypes_14,
  MR_Word ml_backend__ml_unify_gen__ConsArgWidths_15,
  MR_Word * ml_backend__ml_unify_gen__ArgRvals_16,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_27,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_28,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_29,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_30);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_5(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_4(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_4,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_5,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_6,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_7,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_8);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_3(
  MR_Box ml_backend__ml_unify_gen__closure_arg);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_2(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_18,
  MR_Word ml_backend__ml_unify_gen__Target_19,
  MR_Word ml_backend__ml_unify_gen__HighLevelData_20,
  MR_Word ml_backend__ml_unify_gen__VarTypes_21,
  MR_Word ml_backend__ml_unify_gen__Var_22,
  MR_Word ml_backend__ml_unify_gen__VarType_23,
  MR_Word ml_backend__ml_unify_gen__MLDS_Type_24,
  MR_Word ml_backend__ml_unify_gen__ConsId_25,
  MR_Word ml_backend__ml_unify_gen__ConsTag_26,
  MR_Integer ml_backend__ml_unify_gen__Ptag_27,
  MR_Word ml_backend__ml_unify_gen__ExtraInitializers_28,
  MR_Word ml_backend__ml_unify_gen__Args_29,
  MR_Word ml_backend__ml_unify_gen__Context_30,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_63,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_64,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_65,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_66);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_7(
  MR_Box ml_backend__ml_unify_gen__closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_6(
  MR_Box ml_backend__ml_unify_gen__closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_5(
  MR_Box ml_backend__ml_unify_gen__closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_4(
  MR_Box ml_backend__ml_unify_gen__closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_3(
  MR_Box ml_backend__ml_unify_gen__closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_2(
  MR_Box ml_backend__ml_unify_gen__closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_16,
  MR_Word ml_backend__ml_unify_gen__Target_17,
  MR_Word ml_backend__ml_unify_gen__HighLevelData_18,
  MR_Word ml_backend__ml_unify_gen__VarTypes_19,
  MR_Word ml_backend__ml_unify_gen__Var_20,
  MR_Word ml_backend__ml_unify_gen__VarType_21,
  MR_Word ml_backend__ml_unify_gen__MLDS_Type_22,
  MR_Word ml_backend__ml_unify_gen__ConsId_23,
  MR_Word ml_backend__ml_unify_gen__ConsTag_24,
  MR_Word ml_backend__ml_unify_gen__Args_25,
  MR_Word ml_backend__ml_unify_gen__Context_26,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_78,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_79,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_80,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_81);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjuncts_9_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_1,
  MR_Word ml_backend__ml_unify_gen__Target_2,
  MR_Word ml_backend__ml_unify_gen__HighLevelData_3,
  MR_Word ml_backend__ml_unify_gen__VarTypes_4,
  MR_Word ml_backend__ml_unify_gen__HeadVar__5_5,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_6,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_7,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_8,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_9);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_field_id_6_f_0(
  MR_Word ml_backend__ml_unify_gen__Target_8,
  MR_Word ml_backend__ml_unify_gen__Type_9,
  MR_Word ml_backend__ml_unify_gen__Tag_10,
  MR_String ml_backend__ml_unify_gen__ConsName_11,
  MR_Integer ml_backend__ml_unify_gen__ConsArity_12,
  MR_String ml_backend__ml_unify_gen__FieldName_13);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_tag_test_rval_4_f_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_tag_test_rval_4_f_0(
  MR_Word ml_backend__ml_unify_gen__Tag_6,
  MR_Word ml_backend__ml_unify_gen__Type_7,
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_8,
  MR_Word ml_backend__ml_unify_gen__Rval_9);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_semi_deconstruct_8_p_0(
  MR_Word ml_backend__ml_unify_gen__Var_9,
  MR_Word ml_backend__ml_unify_gen__ConsId_10,
  MR_Word ml_backend__ml_unify_gen__Args_11,
  MR_Word ml_backend__ml_unify_gen__ArgModes_12,
  MR_Word ml_backend__ml_unify_gen__Context_13,
  MR_Word * ml_backend__ml_unify_gen__Statements_14,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_25,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_26);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_direct_arg_deconstruct_9_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_10,
  MR_Word ml_backend__ml_unify_gen__ArgMode_11,
  MR_Integer ml_backend__ml_unify_gen__Ptag_12,
  MR_Word ml_backend__ml_unify_gen__ArgLval_13,
  MR_Word ml_backend__ml_unify_gen__ArgType_14,
  MR_Word ml_backend__ml_unify_gen__VarLval_15,
  MR_Word ml_backend__ml_unify_gen__VarType_16,
  MR_Word ml_backend__ml_unify_gen__Context_17,
  MR_Word * ml_backend__ml_unify_gen__Statements_18);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_direct_arg_construct_9_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_10,
  MR_Word ml_backend__ml_unify_gen__ArgMode_11,
  MR_Integer ml_backend__ml_unify_gen__Ptag_12,
  MR_Word ml_backend__ml_unify_gen__ArgLval_13,
  MR_Word ml_backend__ml_unify_gen__ArgType_14,
  MR_Word ml_backend__ml_unify_gen__VarLval_15,
  MR_Word ml_backend__ml_unify_gen__VarType_16,
  MR_Word ml_backend__ml_unify_gen__Context_17,
  MR_Word * ml_backend__ml_unify_gen__Statements_18);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_field_offset_pair_3_p_0(
  MR_Word ml_backend__ml_unify_gen__FieldLval_4,
  MR_Word * ml_backend__ml_unify_gen__FieldLvalA_5,
  MR_Word * ml_backend__ml_unify_gen__FieldLvalB_6);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_sub_unify_11_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_12,
  MR_Word ml_backend__ml_unify_gen__HighLevelData_13,
  MR_Word ml_backend__ml_unify_gen__ArgMode_14,
  MR_Word ml_backend__ml_unify_gen__ArgLval_15,
  MR_Word ml_backend__ml_unify_gen__ArgType_16,
  MR_Word ml_backend__ml_unify_gen__FieldLval_17,
  MR_Word ml_backend__ml_unify_gen__FieldType_18,
  MR_Word ml_backend__ml_unify_gen__FieldWidth_19,
  MR_Word ml_backend__ml_unify_gen__Context_20,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_0_48,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_49);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_arg_15_p_0(
  MR_Word ml_backend__ml_unify_gen__ConsId_16,
  MR_Word ml_backend__ml_unify_gen__ArgVar_17,
  MR_Word ml_backend__ml_unify_gen__Mode_18,
  MR_Word ml_backend__ml_unify_gen__ArgType_19,
  MR_Word ml_backend__ml_unify_gen__CtorArg_20,
  MR_Word ml_backend__ml_unify_gen__VarType_21,
  MR_Word ml_backend__ml_unify_gen__VarLval_22,
  MR_Word ml_backend__ml_unify_gen__Offset_23,
  MR_Integer ml_backend__ml_unify_gen__ArgNum_24,
  MR_Word ml_backend__ml_unify_gen__Tag_25,
  MR_Word ml_backend__ml_unify_gen__Context_26,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_0_49,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_50,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_51,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_52);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_16_p_0(
  MR_Word ml_backend__ml_unify_gen__ConsId_17,
  MR_Word ml_backend__ml_unify_gen__Args_18,
  MR_Word ml_backend__ml_unify_gen__Modes_19,
  MR_Word ml_backend__ml_unify_gen__ArgTypes_20,
  MR_Word ml_backend__ml_unify_gen__Fields_21,
  MR_Word ml_backend__ml_unify_gen__TakeAddr_22,
  MR_Word ml_backend__ml_unify_gen__VarType_23,
  MR_Word ml_backend__ml_unify_gen__VarLval_24,
  MR_Word ml_backend__ml_unify_gen__Offset_25,
  MR_Integer ml_backend__ml_unify_gen__ArgNum_26,
  MR_Word ml_backend__ml_unify_gen__Tag_27,
  MR_Word ml_backend__ml_unify_gen__Context_28,
  MR_Word * ml_backend__ml_unify_gen__Statements_29,
  MR_Word * ml_backend__ml_unify_gen__TakeAddrInfos_30,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_53,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_54);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(
  MR_Word ml_backend__ml_unify_gen__CurArg_1,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_unify_gen__HeadVar__3_3,
  MR_Word * ml_backend__ml_unify_gen__HeadVar__4_4);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_args_2_15_p_0(
  MR_Word ml_backend__ml_unify_gen__ConsId_1,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_unify_gen__HeadVar__3_3,
  MR_Word ml_backend__ml_unify_gen__HeadVar__4_4,
  MR_Word ml_backend__ml_unify_gen__HeadVar__5_5,
  MR_Word ml_backend__ml_unify_gen__VarType_6,
  MR_Word ml_backend__ml_unify_gen__VarLval_7,
  MR_Word ml_backend__ml_unify_gen__Offset_8,
  MR_Integer ml_backend__ml_unify_gen__ArgNum_9,
  MR_Word ml_backend__ml_unify_gen__Tag_10,
  MR_Word ml_backend__ml_unify_gen__Context_11,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_0_12,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_13,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_14,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_15);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_args_14_p_0(
  MR_Word ml_backend__ml_unify_gen__ConsId_15,
  MR_Word ml_backend__ml_unify_gen__Args_16,
  MR_Word ml_backend__ml_unify_gen__Modes_17,
  MR_Word ml_backend__ml_unify_gen__ArgTypes_18,
  MR_Word ml_backend__ml_unify_gen__Fields_19,
  MR_Word ml_backend__ml_unify_gen__VarType_20,
  MR_Word ml_backend__ml_unify_gen__VarLval_21,
  MR_Word ml_backend__ml_unify_gen__Offset_22,
  MR_Integer ml_backend__ml_unify_gen__ArgNum_23,
  MR_Word ml_backend__ml_unify_gen__Tag_24,
  MR_Word ml_backend__ml_unify_gen__Context_25,
  MR_Word * ml_backend__ml_unify_gen__Statements_26,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_29,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_30);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_field_names_and_types_5_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_field_names_and_types_5_p_0(
  MR_Word ml_backend__ml_unify_gen__Info_6,
  MR_Word ml_backend__ml_unify_gen__Type_7,
  MR_Word ml_backend__ml_unify_gen__ConsId_8,
  MR_Word ml_backend__ml_unify_gen__ArgTypes_9,
  MR_Word * ml_backend__ml_unify_gen__Fields_10);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_tag_offset_and_argnum_4_p_0(
  MR_Word ml_backend__ml_unify_gen__Tag_5,
  MR_Integer * ml_backend__ml_unify_gen__TagBits_6,
  MR_Word * ml_backend__ml_unify_gen__Offset_7,
  MR_Integer * ml_backend__ml_unify_gen__ArgNum_8);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_det_deconstruct_tag_10_p_0(
  MR_Word ml_backend__ml_unify_gen__Tag_11,
  MR_Word ml_backend__ml_unify_gen__Type_12,
  MR_Word ml_backend__ml_unify_gen__Var_13,
  MR_Word ml_backend__ml_unify_gen__ConsId_14,
  MR_Word ml_backend__ml_unify_gen__Args_15,
  MR_Word ml_backend__ml_unify_gen__Modes_16,
  MR_Word ml_backend__ml_unify_gen__Context_17,
  MR_Word * ml_backend__ml_unify_gen__Statements_18,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_66,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_67);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_det_deconstruct_8_p_0(
  MR_Word ml_backend__ml_unify_gen__Var_9,
  MR_Word ml_backend__ml_unify_gen__ConsId_10,
  MR_Word ml_backend__ml_unify_gen__Args_11,
  MR_Word ml_backend__ml_unify_gen__Modes_12,
  MR_Word ml_backend__ml_unify_gen__Context_13,
  MR_Word * ml_backend__ml_unify_gen__Statements_14,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_18,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_19);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_10_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_10_p_0(
  MR_Word ml_backend__ml_unify_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_unify_gen__VarType_3,
  MR_Word ml_backend__ml_unify_gen__VarLval_4,
  MR_Integer ml_backend__ml_unify_gen__Offset_5,
  MR_Word ml_backend__ml_unify_gen__ConsIdTag_6,
  MR_Word ml_backend__ml_unify_gen__Context_7,
  MR_Word * ml_backend__ml_unify_gen__HeadVar__8_8,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_9,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_10);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_calc_field_offset_3_f_0(
  MR_Integer ml_backend__ml_unify_gen__NumExtraArgs_5,
  MR_Word ml_backend__ml_unify_gen__ConsArgWidths_6,
  MR_Integer ml_backend__ml_unify_gen__ArgNum_7);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_2_16_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_2_16_p_0(
  MR_Word ml_backend__ml_unify_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_unify_gen__HeadVar__3_3,
  MR_Word ml_backend__ml_unify_gen__HeadVar__4_4,
  MR_Word ml_backend__ml_unify_gen__ConsArgWidths_5,
  MR_Word ml_backend__ml_unify_gen__HeadVar__6_6,
  MR_Integer ml_backend__ml_unify_gen__HeadVar__7_7,
  MR_Integer ml_backend__ml_unify_gen__HeadVar__8_8,
  MR_Word ml_backend__ml_unify_gen__HeadVar__9_9,
  MR_Word ml_backend__ml_unify_gen__HeadVar__10_10,
  MR_Word ml_backend__ml_unify_gen__HeadVar__11_11,
  MR_Word * ml_backend__ml_unify_gen__HeadVar__12_12,
  MR_Word * ml_backend__ml_unify_gen__HeadVar__13_13,
  MR_Word * ml_backend__ml_unify_gen__HeadVar__14_14,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_MayUseAtomic_0_15,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_MayUseAtomic_16);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_15_p_0(
  MR_Word ml_backend__ml_unify_gen__Vars_16,
  MR_Word ml_backend__ml_unify_gen__Lvals_17,
  MR_Word ml_backend__ml_unify_gen__ArgTypes_18,
  MR_Word ml_backend__ml_unify_gen__ConsArgTypes_19,
  MR_Word ml_backend__ml_unify_gen__ConsArgWidths_20,
  MR_Word ml_backend__ml_unify_gen__UniModes_21,
  MR_Integer ml_backend__ml_unify_gen__NumExtraArgs_22,
  MR_Word ml_backend__ml_unify_gen__TakeAddr_23,
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_24,
  MR_Word ml_backend__ml_unify_gen__HighLevelData_25,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Rvals_30,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_MLDS_Types_31,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_TakeAddrInfos_32,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_MayUseAtomic_0_33,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_MayUseAtomic_34);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_box_extra_const_rval_list_lld_7_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_1,
  MR_Word ml_backend__ml_unify_gen__Context_2,
  MR_Word ml_backend__ml_unify_gen__HeadVar__3_3,
  MR_Word ml_backend__ml_unify_gen__HeadVar__4_4,
  MR_Word * ml_backend__ml_unify_gen__HeadVar__5_5,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_6,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_7);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_box_const_rval_list_lld_6_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_1,
  MR_Word ml_backend__ml_unify_gen__Context_2,
  MR_Word ml_backend__ml_unify_gen__HeadVar__3_3,
  MR_Word * ml_backend__ml_unify_gen__HeadVar__4_4,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_5,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_6);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_box_or_unbox_const_rval_list_hld_8_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_9,
  MR_Word ml_backend__ml_unify_gen__ArgTypes_10,
  MR_Word ml_backend__ml_unify_gen__FieldTypes_11,
  MR_Word ml_backend__ml_unify_gen__ArgRvals_12,
  MR_Word ml_backend__ml_unify_gen__Context_13,
  MR_Word * ml_backend__ml_unify_gen__FieldRvals_14,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_24,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_25);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(
  MR_Word ml_backend__ml_unify_gen__Type_5,
  MR_Word ml_backend__ml_unify_gen__Tag_6,
  MR_Word ml_backend__ml_unify_gen__Rval_7);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_mktag_1_f_0(
  MR_Integer ml_backend__ml_unify_gen__Tag_3);

static void MR_CALL 
ml_backend__ml_unify_gen__get_maybe_cons_id_arg_types_6_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unify_gen__get_maybe_cons_id_arg_types_6_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_7,
  MR_Word ml_backend__ml_unify_gen__MaybeConsId_8,
  MR_Word ml_backend__ml_unify_gen__ArgTypes_9,
  MR_Word ml_backend__ml_unify_gen__Type_10,
  MR_Word * ml_backend__ml_unify_gen__ConsArgTypes_11,
  MR_Word * ml_backend__ml_unify_gen__ConsArgWidths_12);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_6,
  MR_Word ml_backend__ml_unify_gen__HighLevelData_7,
  MR_Word ml_backend__ml_unify_gen__FieldType_8,
  MR_Word ml_backend__ml_unify_gen__FieldWidth_9,
  MR_Word * ml_backend__ml_unify_gen__BoxedFieldType_10);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__get_const_type_for_cons_id_5_f_0(
  MR_Word ml_backend__ml_unify_gen__Target_7,
  MR_Word ml_backend__ml_unify_gen__HighLevelData_8,
  MR_Word ml_backend__ml_unify_gen__MLDS_Type_9,
  MR_Word ml_backend__ml_unify_gen__UsesBaseClass_10,
  MR_Word ml_backend__ml_unify_gen__MaybeConsId_11);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_field_take_address_assigns_7_p_0(
  MR_Word ml_backend__ml_unify_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_unify_gen__CellLval_2,
  MR_Word ml_backend__ml_unify_gen__CellType_3,
  MR_Word ml_backend__ml_unify_gen__MaybeTag_4,
  MR_Word ml_backend__ml_unify_gen__Context_5,
  MR_Word ml_backend__ml_unify_gen__Info_6,
  MR_Word * ml_backend__ml_unify_gen__HeadVar__7_7);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_20_p_0_2(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_20_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_20_p_0(
  MR_Word ml_backend__ml_unify_gen__MaybeConsId_21,
  MR_Word ml_backend__ml_unify_gen__MaybeCtorName_22,
  MR_Integer ml_backend__ml_unify_gen__Tag_23,
  MR_Word ml_backend__ml_unify_gen__MaybeTag_24,
  MR_Word ml_backend__ml_unify_gen__ExplicitSecTag_25,
  MR_Word ml_backend__ml_unify_gen__Var_26,
  MR_Word ml_backend__ml_unify_gen__VarLval_27,
  MR_Word ml_backend__ml_unify_gen__VarType_28,
  MR_Word ml_backend__ml_unify_gen__MLDS_Type_29,
  MR_Word ml_backend__ml_unify_gen__ExtraRvals_30,
  MR_Word ml_backend__ml_unify_gen__ExtraTypes_31,
  MR_Word ml_backend__ml_unify_gen__ArgVars_32,
  MR_Word ml_backend__ml_unify_gen__ArgTypes_33,
  MR_Word ml_backend__ml_unify_gen__ArgModes_34,
  MR_Word ml_backend__ml_unify_gen__TakeAddr_35,
  MR_Word ml_backend__ml_unify_gen__CellToReuse_36,
  MR_Word ml_backend__ml_unify_gen__Context_37,
  MR_Word * ml_backend__ml_unify_gen__Statements_38,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_82,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_83);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_5(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_4(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_4,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_5,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_6,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_7,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_8);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_3(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_2(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0(
  MR_Word ml_backend__ml_unify_gen__MaybeConsId_16,
  MR_Word ml_backend__ml_unify_gen__MaybeCtorName_17,
  MR_Word ml_backend__ml_unify_gen__MaybeTag_18,
  MR_Word ml_backend__ml_unify_gen__Var_19,
  MR_Word ml_backend__ml_unify_gen__VarLval_20,
  MR_Word ml_backend__ml_unify_gen__VarType_21,
  MR_Word ml_backend__ml_unify_gen__MLDS_Type_22,
  MR_Word ml_backend__ml_unify_gen__ExtraRvals_23,
  MR_Word ml_backend__ml_unify_gen__ExtraTypes_24,
  MR_Word ml_backend__ml_unify_gen__ArgVars_25,
  MR_Word ml_backend__ml_unify_gen__ArgTypes_26,
  MR_Word ml_backend__ml_unify_gen__Context_27,
  MR_Word * ml_backend__ml_unify_gen__Statements_28,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_61,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_62);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_compound_13_p_0(
  MR_Word ml_backend__ml_unify_gen__ConsId_14,
  MR_Integer ml_backend__ml_unify_gen__Ptag_15,
  MR_Word ml_backend__ml_unify_gen__MaybeStag_16,
  MR_Word ml_backend__ml_unify_gen__UsesBaseClass_17,
  MR_Word ml_backend__ml_unify_gen__Var_18,
  MR_Word ml_backend__ml_unify_gen__ArgVars_19,
  MR_Word ml_backend__ml_unify_gen__ArgModes_20,
  MR_Word ml_backend__ml_unify_gen__TakeAddr_21,
  MR_Word ml_backend__ml_unify_gen__HowToConstruct_22,
  MR_Word ml_backend__ml_unify_gen__Context_23,
  MR_Word * ml_backend__ml_unify_gen__Statements_24,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_38,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_39);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_constant_6_p_0(
  MR_Word ml_backend__ml_unify_gen__Tag_7,
  MR_Word ml_backend__ml_unify_gen__VarType_8,
  MR_Word ml_backend__ml_unify_gen__MLDS_VarType_9,
  MR_Word * ml_backend__ml_unify_gen__Rval_10,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_53,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_54);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_info_lookup_const_var_rval_3_p_0(
  MR_Word ml_backend__ml_unify_gen__Info_4,
  MR_Word ml_backend__ml_unify_gen__Var_5,
  MR_Word * ml_backend__ml_unify_gen__Rval_6);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_construct_tag_12_p_0(
  MR_Word ml_backend__ml_unify_gen__Tag_13,
  MR_Word ml_backend__ml_unify_gen__Type_14,
  MR_Word ml_backend__ml_unify_gen__Var_15,
  MR_Word ml_backend__ml_unify_gen__ConsId_16,
  MR_Word ml_backend__ml_unify_gen__Args_17,
  MR_Word ml_backend__ml_unify_gen__ArgModes_18,
  MR_Word ml_backend__ml_unify_gen__TakeAddr_19,
  MR_Word ml_backend__ml_unify_gen__HowToConstruct_20,
  MR_Word ml_backend__ml_unify_gen__Context_21,
  MR_Word * ml_backend__ml_unify_gen__Statements_22,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_84);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_construct_10_p_0(
  MR_Word ml_backend__ml_unify_gen__Var_11,
  MR_Word ml_backend__ml_unify_gen__ConsId_12,
  MR_Word ml_backend__ml_unify_gen__Args_13,
  MR_Word ml_backend__ml_unify_gen__ArgModes_14,
  MR_Word ml_backend__ml_unify_gen__TakeAddr_15,
  MR_Word ml_backend__ml_unify_gen__HowToConstruct_16,
  MR_Word ml_backend__ml_unify_gen__Context_17,
  MR_Word * ml_backend__ml_unify_gen__Statements_18,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_22,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_23);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_structs_4_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_5);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0_1(
  void * ml_backend__ml_unify_gen__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0_3(
  void * ml_backend__ml_unify_gen__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0_2(
  void * ml_backend__ml_unify_gen__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0_4(
  void * ml_backend__ml_unify_gen__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0_5(
  void * ml_backend__ml_unify_gen__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0_7(
  void * ml_backend__ml_unify_gen__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0_6(
  void * ml_backend__ml_unify_gen__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0_8(
  void * ml_backend__ml_unify_gen__env_ptr_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_4(
  MR_Box ml_backend__ml_unify_gen__closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_3(
  MR_Box ml_backend__ml_unify_gen__closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_2(
  MR_Box ml_backend__ml_unify_gen__closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg);


static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_1[11][2];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_2[14][3];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_3[10][5];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_4[10][1];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_5[2][9];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_6[5][6];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_7[1][8];

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_8[2][11];




static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_1[11][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_4[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_scalar_common_4[7])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[9])))
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
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_8[0])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[3])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_6[3])),
    ((MR_Box) (ml_backend__ml_unify_gen__get_maybe_cons_id_arg_types_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[8])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[9])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_8[0])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[3])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[9])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_8[0])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[3])),
    ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_8[1])),
    ((MR_Box) (ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_101_119_95_111_98_106_101_99_116_95_100_121_110_97_109_105_99_97_108_108_121_95_95_91_53_93_95_48_18_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_3[10][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_4[10][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[4])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_5[2][9] = {
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_6[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_7[1][8] = {
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

static /* final */ const MR_Box ml_backend__ml_unify_gen_scalar_common_8[2][11] = {
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
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

static const MR_Integer ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__functor_number_map_field_offset_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__notag_functor_desc_field_offset_0 = {
  (MR_String) "offset",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__type_ctor_info_field_offset_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
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
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_compilation_target_0,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_ml_const_struct_info_0_0,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_names_ml_const_struct_info_0_0,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_locns_ml_const_struct_info_0_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_ml_const_struct_info_0_0[1] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_ml_const_struct_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_ml_const_struct_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__field_types_take_addr_info_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_stag_ordered_take_addr_info_0_0[1] = {
  &ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_functor_desc_take_addr_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_unify_gen__ml_backend__ml_unify_gen__du_ptag_ordered_take_addr_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____field_offset_0_0_10001(
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    {
      ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen____Unify____field_offset_0_0(((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_2));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____field_offset_0_0_10001(
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_unify_gen__conv0_HeadVar__1_1;

    {
      ml_backend__ml_unify_gen____Compare____field_offset_0_0(&ml_backend__ml_unify_gen__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_2), ((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_3));
    }
    *ml_backend__ml_unify_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_unify_gen__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____ml_const_struct_info_0_0_10001(
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    {
      ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen____Unify____ml_const_struct_info_0_0(((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_2));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____ml_const_struct_info_0_0_10001(
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_unify_gen__conv0_HeadVar__1_1;

    {
      ml_backend__ml_unify_gen____Compare____ml_const_struct_info_0_0(&ml_backend__ml_unify_gen__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_2), ((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_3));
    }
    *ml_backend__ml_unify_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_unify_gen__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____take_addr_info_0_0_10001(
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    {
      ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen____Unify____take_addr_info_0_0(((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_2));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____take_addr_info_0_0_10001(
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_unify_gen__conv0_HeadVar__1_1;

    {
      ml_backend__ml_unify_gen____Compare____take_addr_info_0_0(&ml_backend__ml_unify_gen__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_2), ((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_3));
    }
    *ml_backend__ml_unify_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_unify_gen__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_50_93_95_48_6_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_7,
  MR_Word ml_backend__ml_unify_gen__ConsTag_9,
  MR_Word ml_backend__ml_unify_gen__Type_10,
  MR_Word ml_backend__ml_unify_gen__MLDS_Type_11,
  MR_Word * ml_backend__ml_unify_gen__Rval_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_unify_gen__succeeded;

        switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__ConsTag_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_arg_tag\'/6", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ml_backend__ml_unify_gen__String_16 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ConsTag_9, (MR_Integer) 0)));
              MR_Word ml_backend__ml_unify_gen__Var_74;

              {
                ml_backend__ml_unify_gen__Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_74, 1) = ((MR_Box) (ml_backend__ml_unify_gen__String_16));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_unify_gen__Rval_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_74));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Float ml_backend__ml_unify_gen__Float_15 = MR_unbox_float((MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__ConsTag_9, (MR_Integer) 0)));
              MR_Word ml_backend__ml_unify_gen__Var_75;

              {
                ml_backend__ml_unify_gen__Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_75, 1) = MR_box_float(ml_backend__ml_unify_gen__Float_15);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_unify_gen__Rval_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_75));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_9, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer ml_backend__ml_unify_gen__Int_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_9, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_unify_gen__Var_83;

                  {
                    ml_backend__ml_unify_gen__Var_83 = parse_tree__builtin_lib_types__int_type_0_f_0();
                  }
                  {
                    ml_backend__ml_unify_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_unify_gen__Type_10, ml_backend__ml_unify_gen__Var_83);
                  }
                  if (ml_backend__ml_unify_gen__succeeded)
                    {
                      MR_Word ml_backend__ml_unify_gen__Var_77;

                      {
                        ml_backend__ml_unify_gen__Var_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_77, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Int_13));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *ml_backend__ml_unify_gen__Rval_12 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_77));
                      }
                    }
                  else
                    {
                      MR_Word ml_backend__ml_unify_gen__Var_84;

                      {
                        ml_backend__ml_unify_gen__Var_84 = parse_tree__builtin_lib_types__char_type_0_f_0();
                      }
                      {
                        ml_backend__ml_unify_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_unify_gen__Type_10, ml_backend__ml_unify_gen__Var_84);
                      }
                      if (ml_backend__ml_unify_gen__succeeded)
                        {
                          MR_Word ml_backend__ml_unify_gen__Var_78;

                          {
                            ml_backend__ml_unify_gen__Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_78, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Int_13));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *ml_backend__ml_unify_gen__Rval_12 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_78));
                          }
                        }
                      else
                        {
                          MR_Word ml_backend__ml_unify_gen__Var_79;

                          {
                            ml_backend__ml_unify_gen__Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_79, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Int_13));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_79, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_11));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *ml_backend__ml_unify_gen__Rval_12 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_79));
                          }
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Unsigned ml_backend__ml_unify_gen__UInt_14 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_9, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_unify_gen__Var_76;

                  {
                    ml_backend__ml_unify_gen__Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_76, 1) = ((MR_Box) (ml_backend__ml_unify_gen__UInt_14));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__ml_unify_gen__Rval_12 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_76));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__ml_unify_gen__ForeignLang_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_9, (MR_Integer) 1)));
                  MR_String ml_backend__ml_unify_gen__ForeignTag_21 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_9, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_unify_gen__Var_66;

                  {
                    ml_backend__ml_unify_gen__Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_66, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ForeignLang_20));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_66, 2) = ((MR_Box) (ml_backend__ml_unify_gen__ForeignTag_21));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_66, 3) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_11));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__ml_unify_gen__Rval_12 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_66));
                  }
                }
                break;
              case (MR_Integer) 3:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
              case (MR_Integer) 8:
              case (MR_Integer) 9:
              case (MR_Integer) 10:
              case (MR_Integer) 11:
              case (MR_Integer) 12:
              case (MR_Integer) 13:
              case (MR_Integer) 14:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_arg_tag\'/6", (MR_String) "unexpected tag");
                    return;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ml_backend__ml_unify_gen__ModuleName0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_9, (MR_Integer) 1)));
                  MR_String ml_backend__ml_unify_gen__TypeName_23 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_9, (MR_Integer) 2)));
                  MR_Integer ml_backend__ml_unify_gen__TypeArity_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_9, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_unify_gen__ModuleName_25;
                  MR_Word ml_backend__ml_unify_gen__MLDS_Module_26;
                  MR_Word ml_backend__ml_unify_gen__RttiTypeCtor_27;
                  MR_Word ml_backend__ml_unify_gen__DataAddr_28;
                  MR_Word ml_backend__ml_unify_gen__Var_60;
                  MR_Word ml_backend__ml_unify_gen__Var_61;
                  MR_Word ml_backend__ml_unify_gen__Var_63;
                  MR_Word ml_backend__ml_unify_gen__Var_64;
                  MR_Word ml_backend__ml_unify_gen__Var_65;

                  {
                    ml_backend__ml_unify_gen__ModuleName_25 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ml_backend__ml_unify_gen__ModuleName0_22);
                  }
                  {
                    ml_backend__ml_unify_gen__MLDS_Module_26 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_unify_gen__ModuleName_25);
                  }
                  {
                    ml_backend__ml_unify_gen__RttiTypeCtor_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__RttiTypeCtor_27, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ModuleName_25));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__RttiTypeCtor_27, 1) = ((MR_Box) (ml_backend__ml_unify_gen__TypeName_23));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__RttiTypeCtor_27, 2) = ((MR_Box) (ml_backend__ml_unify_gen__TypeArity_24));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_61, 0) = ((MR_Box) (ml_backend__ml_unify_gen__RttiTypeCtor_27));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_60, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_61));
                  }
                  {
                    ml_backend__ml_unify_gen__DataAddr_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__DataAddr_28, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Module_26));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__DataAddr_28, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_60));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_63, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_11));
                  }
                  ml_backend__ml_unify_gen__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_unify_gen__DataAddr_28);
                  {
                    ml_backend__ml_unify_gen__Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_64, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_65));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__ml_unify_gen__Rval_12 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_63));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_64));
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ml_backend__ml_unify_gen__ClassId_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_9, (MR_Integer) 2)));
                  MR_String ml_backend__ml_unify_gen__Instance_30 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_9, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_unify_gen__TCName_31;
                  MR_Word ml_backend__ml_unify_gen__Var_54;
                  MR_Word ml_backend__ml_unify_gen__Var_55;
                  MR_Word ml_backend__ml_unify_gen__Var_56;
                  MR_Word ml_backend__ml_unify_gen__Var_57;
                  MR_Word ml_backend__ml_unify_gen__Var_58;
                  MR_Word ml_backend__ml_unify_gen__Var_59;
                  MR_Word ml_backend__ml_unify_gen__ModuleName_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_9, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_unify_gen__MLDS_Module_81;
                  MR_Word ml_backend__ml_unify_gen__DataAddr_82;

                  {
                    ml_backend__ml_unify_gen__MLDS_Module_81 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_unify_gen__ModuleName_80);
                  }
                  {
                    ml_backend__ml_unify_gen__TCName_31 = backend_libs__type_class_info__generate_class_name_1_f_0(ml_backend__ml_unify_gen__ClassId_29);
                  }
                  {
                    ml_backend__ml_unify_gen__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_56, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ModuleName_80));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_56, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Instance_30));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_55, 0) = ((MR_Box) (ml_backend__ml_unify_gen__TCName_31));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_55, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_56));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_54, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_55));
                  }
                  {
                    ml_backend__ml_unify_gen__DataAddr_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__DataAddr_82, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Module_81));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__DataAddr_82, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_54));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_57, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_11));
                  }
                  ml_backend__ml_unify_gen__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_unify_gen__DataAddr_82);
                  {
                    ml_backend__ml_unify_gen__Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_58, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_59));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__ml_unify_gen__Rval_12 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_57));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_58));
                  }
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_Integer ml_backend__ml_unify_gen__Ptag_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_9, (MR_Integer) 1)));
                  MR_Integer ml_backend__ml_unify_gen__Stag_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_9, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_unify_gen__Var_67;
                  MR_Word ml_backend__ml_unify_gen__Var_68;
                  MR_Word ml_backend__ml_unify_gen__Var_69;
                  MR_Word ml_backend__ml_unify_gen__Var_72;
                  MR_Word ml_backend__ml_unify_gen__Var_73;

                  {
                    ml_backend__ml_unify_gen__Var_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_67, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_11));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_73, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Stag_19));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_72, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_73));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_4[4])));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_69, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_72));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_68, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Ptag_18));
                    MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_68, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_69));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__ml_unify_gen__Rval_12 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_67));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_68));
                  }
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_Word ml_backend__ml_unify_gen__ResAddr_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_9, (MR_Integer) 1)));

                  {
                    *ml_backend__ml_unify_gen__Rval_12 = ml_backend__ml_unify_gen__ml_gen_reserved_address_3_f_0(ml_backend__ml_unify_gen__ModuleInfo_7, ml_backend__ml_unify_gen__ResAddr_17, ml_backend__ml_unify_gen__MLDS_Type_11);
                  }
                }
                break;
              case (MR_Integer) 17:
                {
                  MR_Word ml_backend__ml_unify_gen__ThisTag_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_9, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_unify_gen__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_9, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_unify_gen__next_value_of_ConsTag_9 = ml_backend__ml_unify_gen__ThisTag_33;

                    ml_backend__ml_unify_gen__ConsTag_9 = ml_backend__ml_unify_gen__next_value_of_ConsTag_9;
                  }
                  continue;
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_101_119_95_111_98_106_101_99_116_95_100_121_110_97_109_105_99_97_108_108_121_95_95_91_53_93_95_48_18_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_4,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_5,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_6,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_7,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_8)
{
  {
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;
    MR_Word ml_backend__ml_unify_gen__conv0_ArgC_12;

    {
      ml_backend__ml_unify_gen__ml_shift_combine_rval_type_8_p_0(((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_1), ((MR_Integer) ml_backend__ml_unify_gen__wrapper_arg_2), ((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_3), &ml_backend__ml_unify_gen__conv0_ArgC_12);
    }
    *ml_backend__ml_unify_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_unify_gen__conv0_ArgC_12));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_101_119_95_111_98_106_101_99_116_95_100_121_110_97_109_105_99_97_108_108_121_95_95_91_53_93_95_48_18_p_0(
  MR_Word ml_backend__ml_unify_gen__MaybeConsId_19,
  MR_Word ml_backend__ml_unify_gen__MaybeCtorName_20,
  MR_Word ml_backend__ml_unify_gen__MaybeTag_21,
  MR_Word ml_backend__ml_unify_gen__ExplicitSecTag_22,
  MR_Word ml_backend__ml_unify_gen__VarLval_24,
  MR_Word ml_backend__ml_unify_gen__VarType_25,
  MR_Word ml_backend__ml_unify_gen__MLDS_Type_26,
  MR_Word ml_backend__ml_unify_gen__ExtraRvals_27,
  MR_Word ml_backend__ml_unify_gen__ExtraTypes_28,
  MR_Word ml_backend__ml_unify_gen__ArgVars_29,
  MR_Word ml_backend__ml_unify_gen__ArgTypes_30,
  MR_Word ml_backend__ml_unify_gen__ArgModes_31,
  MR_Word ml_backend__ml_unify_gen__TakeAddr_32,
  MR_Word ml_backend__ml_unify_gen__Context_33,
  MR_Word * ml_backend__ml_unify_gen__Statements_34,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_74,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_75)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_86_86;
    MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_87_87;
    MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_97_97;
    MR_Word ml_backend__ml_unify_gen__ArgLvals_36;
    MR_Word ml_backend__ml_unify_gen__ModuleInfo_37;
    MR_Word ml_backend__ml_unify_gen__ConsArgTypes_38;
    MR_Word ml_backend__ml_unify_gen__ConsArgWidths_39;
    MR_Integer ml_backend__ml_unify_gen__NumExtraRvals_40;
    MR_Word ml_backend__ml_unify_gen__Globals_41;
    MR_Word ml_backend__ml_unify_gen__UseAtomicCells_42;
    MR_Word ml_backend__ml_unify_gen__MayUseAtomic0_43;
    MR_Word ml_backend__ml_unify_gen__HighLevelData_44;
    MR_Word ml_backend__ml_unify_gen__ArgRvals0_45;
    MR_Word ml_backend__ml_unify_gen__MLDS_ArgTypes0_46;
    MR_Word ml_backend__ml_unify_gen__TakeAddrInfos_47;
    MR_Word ml_backend__ml_unify_gen__MayUseAtomic_48;
    MR_Word ml_backend__ml_unify_gen__ArgsTypes0_49;
    MR_Word ml_backend__ml_unify_gen__ArgWidths1_50;
    MR_Word ml_backend__ml_unify_gen__ArgsTypes1_51;
    MR_Word ml_backend__ml_unify_gen__ArgsTypes2_52;
    MR_Word ml_backend__ml_unify_gen__ArgRvals2_55;
    MR_Word ml_backend__ml_unify_gen__MLDS_ArgTypes2_56;
    MR_Word ml_backend__ml_unify_gen__ArgRvals_57;
    MR_Word ml_backend__ml_unify_gen__MLDS_ArgTypes_58;
    MR_Integer ml_backend__ml_unify_gen__Size_59;
    MR_Word ml_backend__ml_unify_gen__SizeInWordsRval_60;
    MR_Word ml_backend__ml_unify_gen__ProfileMemory_61;
    MR_Word ml_backend__ml_unify_gen__MaybeAllocId_69;
    MR_Word ml_backend__ml_unify_gen__MakeNewObject_70;
    MR_Word ml_backend__ml_unify_gen__Stmt_71;
    MR_Word ml_backend__ml_unify_gen__Statement_72;
    MR_Word ml_backend__ml_unify_gen__TakeAddrStatements_73;
    MR_Word ml_backend__ml_unify_gen__Var_80;
    MR_Word ml_backend__ml_unify_gen__Var_84;
    MR_Word ml_backend__ml_unify_gen__Var_85;
    MR_Box ml_backend__ml_unify_gen__conv2_Var_53;
    MR_Box ml_backend__ml_unify_gen__conv1_Var_54;

    {
      ml_backend__ml_code_util__ml_gen_var_list_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_74, ml_backend__ml_unify_gen__ArgVars_29, &ml_backend__ml_unify_gen__ArgLvals_36);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_74, &ml_backend__ml_unify_gen__ModuleInfo_37);
    }
    {
      ml_backend__ml_unify_gen__get_maybe_cons_id_arg_types_6_p_0(ml_backend__ml_unify_gen__ModuleInfo_37, ml_backend__ml_unify_gen__MaybeConsId_19, ml_backend__ml_unify_gen__ArgTypes_30, ml_backend__ml_unify_gen__VarType_25, &ml_backend__ml_unify_gen__ConsArgTypes_38, &ml_backend__ml_unify_gen__ConsArgWidths_39);
    }
    ml_backend__ml_unify_gen__TypeCtorInfo_86_86 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
    {
      ml_backend__ml_unify_gen__NumExtraRvals_40 = mercury__list__length_1_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_86_86, ml_backend__ml_unify_gen__ExtraRvals_27);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_unify_gen__ModuleInfo_37, &ml_backend__ml_unify_gen__Globals_41);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_unify_gen__Globals_41, (MR_Integer) 459, &ml_backend__ml_unify_gen__UseAtomicCells_42);
    }
    switch (ml_backend__ml_unify_gen__UseAtomicCells_42) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_unify_gen__MayUseAtomic0_43 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ml_backend__ml_unify_gen__MayUseAtomic0_43 = (MR_Integer) 0;
        break;
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_74, &ml_backend__ml_unify_gen__HighLevelData_44);
    }
    {
      ml_backend__ml_unify_gen__ml_gen_cons_args_15_p_0(ml_backend__ml_unify_gen__ArgVars_29, ml_backend__ml_unify_gen__ArgLvals_36, ml_backend__ml_unify_gen__ArgTypes_30, ml_backend__ml_unify_gen__ConsArgTypes_38, ml_backend__ml_unify_gen__ConsArgWidths_39, ml_backend__ml_unify_gen__ArgModes_31, ml_backend__ml_unify_gen__NumExtraRvals_40, ml_backend__ml_unify_gen__TakeAddr_32, ml_backend__ml_unify_gen__ModuleInfo_37, ml_backend__ml_unify_gen__HighLevelData_44, &ml_backend__ml_unify_gen__ArgRvals0_45, &ml_backend__ml_unify_gen__MLDS_ArgTypes0_46, &ml_backend__ml_unify_gen__TakeAddrInfos_47, ml_backend__ml_unify_gen__MayUseAtomic0_43, &ml_backend__ml_unify_gen__MayUseAtomic_48);
    }
    ml_backend__ml_unify_gen__TypeCtorInfo_87_87 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0;
    {
      mercury__assoc_list__from_corresponding_lists_3_p_0(ml_backend__ml_unify_gen__TypeCtorInfo_86_86, ml_backend__ml_unify_gen__TypeCtorInfo_87_87, ml_backend__ml_unify_gen__ArgRvals0_45, ml_backend__ml_unify_gen__MLDS_ArgTypes0_46, &ml_backend__ml_unify_gen__ArgsTypes0_49);
    }
    {
      ml_backend__ml_unify_gen__ml_expand_double_word_rvals_4_p_0(ml_backend__ml_unify_gen__ConsArgWidths_39, &ml_backend__ml_unify_gen__ArgWidths1_50, ml_backend__ml_unify_gen__ArgsTypes0_49, &ml_backend__ml_unify_gen__ArgsTypes1_51);
    }
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    ml_backend__ml_unify_gen__TypeCtorInfo_97_97 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
    {
      backend_libs__arg_pack__pack_args_8_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[2], ml_backend__ml_unify_gen__TypeCtorInfo_97_97, ml_backend__ml_unify_gen__TypeCtorInfo_97_97, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[13], ml_backend__ml_unify_gen__ArgWidths1_50, ml_backend__ml_unify_gen__ArgsTypes1_51, &ml_backend__ml_unify_gen__ArgsTypes2_52, ((MR_Box) ((MR_Integer) 0)), &ml_backend__ml_unify_gen__conv2_Var_53, ((MR_Box) ((MR_Integer) 0)), &ml_backend__ml_unify_gen__conv1_Var_54);
    }
    {
      mercury__assoc_list__keys_and_values_3_p_0(ml_backend__ml_unify_gen__TypeCtorInfo_86_86, ml_backend__ml_unify_gen__TypeCtorInfo_87_87, ml_backend__ml_unify_gen__ArgsTypes2_52, &ml_backend__ml_unify_gen__ArgRvals2_55, &ml_backend__ml_unify_gen__MLDS_ArgTypes2_56);
    }
    {
      ml_backend__ml_unify_gen__ArgRvals_57 = mercury__list__f_43_43_2_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_86_86, ml_backend__ml_unify_gen__ExtraRvals_27, ml_backend__ml_unify_gen__ArgRvals2_55);
    }
    {
      ml_backend__ml_unify_gen__MLDS_ArgTypes_58 = mercury__list__f_43_43_2_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_87_87, ml_backend__ml_unify_gen__ExtraTypes_28, ml_backend__ml_unify_gen__MLDS_ArgTypes2_56);
    }
    {
      mercury__list__length_2_p_0(ml_backend__ml_unify_gen__TypeCtorInfo_86_86, ml_backend__ml_unify_gen__ArgRvals_57, &ml_backend__ml_unify_gen__Size_59);
    }
    {
      ml_backend__ml_unify_gen__Var_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_80, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Size_59));
    }
    {
      ml_backend__ml_unify_gen__SizeInWordsRval_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__SizeInWordsRval_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__SizeInWordsRval_60, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_80));
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_unify_gen__Globals_41, (MR_Integer) 204, &ml_backend__ml_unify_gen__ProfileMemory_61);
    }
    switch (ml_backend__ml_unify_gen__ProfileMemory_61) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ml_backend__ml_unify_gen__MaybeAllocId_69 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_75 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_74;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_unify_gen__PredId_62;
          MR_Integer ml_backend__ml_unify_gen__ProcId_63;
          MR_Word ml_backend__ml_unify_gen__GlobalData0_64;
          MR_Word ml_backend__ml_unify_gen__ProcLabel_66;
          MR_Word ml_backend__ml_unify_gen__AllocId_67;
          MR_Word ml_backend__ml_unify_gen__GlobalData_68;
          MR_Word ml_backend__ml_unify_gen__Var_82;
          MR_Word ml_backend__ml_unify_gen___Module_65;

          {
            ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_74, &ml_backend__ml_unify_gen__PredId_62);
          }
          {
            ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_74, &ml_backend__ml_unify_gen__ProcId_63);
          }
          {
            ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_74, &ml_backend__ml_unify_gen__GlobalData0_64);
          }
          {
            ml_backend__ml_code_util__ml_gen_proc_label_5_p_0(ml_backend__ml_unify_gen__ModuleInfo_37, ml_backend__ml_unify_gen__PredId_62, ml_backend__ml_unify_gen__ProcId_63, &ml_backend__ml_unify_gen___Module_65, &ml_backend__ml_unify_gen__ProcLabel_66);
          }
          ml_backend__ml_unify_gen__Var_82 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_unify_gen__ProcLabel_66);
          {
            ml_backend__ml_global_data__ml_gen_alloc_site_7_p_0(ml_backend__ml_unify_gen__Var_82, ml_backend__ml_unify_gen__MaybeConsId_19, ml_backend__ml_unify_gen__Size_59, ml_backend__ml_unify_gen__Context_33, &ml_backend__ml_unify_gen__AllocId_67, ml_backend__ml_unify_gen__GlobalData0_64, &ml_backend__ml_unify_gen__GlobalData_68);
          }
          {
            ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_unify_gen__GlobalData_68, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_74, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_75);
          }
          {
            ml_backend__ml_unify_gen__MaybeAllocId_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__MaybeAllocId_69, 0) = ((MR_Box) (ml_backend__ml_unify_gen__AllocId_67));
          }
        }
        break;
    }
    {
      ml_backend__ml_unify_gen__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_84, 0) = ((MR_Box) (ml_backend__ml_unify_gen__SizeInWordsRval_60));
    }
    {
      ml_backend__ml_unify_gen__MakeNewObject_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__MakeNewObject_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__MakeNewObject_70, 1) = ((MR_Box) (ml_backend__ml_unify_gen__VarLval_24));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__MakeNewObject_70, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MaybeTag_21));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__MakeNewObject_70, 3) = ((MR_Box) (ml_backend__ml_unify_gen__ExplicitSecTag_22));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__MakeNewObject_70, 4) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_26));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__MakeNewObject_70, 5) = ((MR_Box) (ml_backend__ml_unify_gen__Var_84));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__MakeNewObject_70, 6) = ((MR_Box) (ml_backend__ml_unify_gen__MaybeCtorName_20));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__MakeNewObject_70, 7) = ((MR_Box) (ml_backend__ml_unify_gen__ArgRvals_57));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__MakeNewObject_70, 8) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_ArgTypes_58));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__MakeNewObject_70, 9) = ((MR_Box) (ml_backend__ml_unify_gen__MayUseAtomic_48));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__MakeNewObject_70, 10) = ((MR_Box) (ml_backend__ml_unify_gen__MaybeAllocId_69));
    }
    {
      ml_backend__ml_unify_gen__Stmt_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Stmt_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Stmt_71, 1) = ((MR_Box) (ml_backend__ml_unify_gen__MakeNewObject_70));
    }
    {
      ml_backend__ml_unify_gen__Var_85 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_unify_gen__Context_33);
    }
    {
      ml_backend__ml_unify_gen__Statement_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Statement_72, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Stmt_71));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Statement_72, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_85));
    }
    {
      ml_backend__ml_unify_gen__ml_gen_field_take_address_assigns_7_p_0(ml_backend__ml_unify_gen__TakeAddrInfos_47, ml_backend__ml_unify_gen__VarLval_24, ml_backend__ml_unify_gen__MLDS_Type_26, ml_backend__ml_unify_gen__MaybeTag_21, ml_backend__ml_unify_gen__Context_33, *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_75, &ml_backend__ml_unify_gen__TakeAddrStatements_73);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_unify_gen__Statements_34 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Statement_72));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__TakeAddrStatements_73));
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__3014__1_1_f_0(
  MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__1_83)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__2_84;

    {
      ml_backend__ml_unify_gen__LambdaHeadVar__2_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__LambdaHeadVar__2_84, 0) = ((MR_Box) (ml_backend__ml_unify_gen__LambdaHeadVar__1_83));
    }
    return ml_backend__ml_unify_gen__LambdaHeadVar__2_84;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_static_compound__2971__1_2_p_0(
  MR_Integer ml_backend__ml_unify_gen__NumExtraArgs_35,
  MR_Integer ml_backend__ml_unify_gen__HeadVar__2_69)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__NumExtraArgs_35 == ml_backend__ml_unify_gen__HeadVar__2_69);

    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__2966__1_1_f_0(
  MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__1_61)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__2_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__LambdaHeadVar__1_61, (MR_Integer) 2)));
    MR_Word ml_backend__ml_unify_gen__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__LambdaHeadVar__1_61, (MR_Integer) 0)));
    MR_Word ml_backend__ml_unify_gen__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__LambdaHeadVar__1_61, (MR_Integer) 1)));
    MR_Word ml_backend__ml_unify_gen__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__LambdaHeadVar__1_61, (MR_Integer) 3)));

    return ml_backend__ml_unify_gen__LambdaHeadVar__2_62;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_ground_term_conjunct_compound__2698__1_1_f_0(
  MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__1_93)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__2_94;

    {
      ml_backend__ml_unify_gen__LambdaHeadVar__2_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__LambdaHeadVar__2_94, 0) = ((MR_Box) (ml_backend__ml_unify_gen__LambdaHeadVar__1_93));
    }
    return ml_backend__ml_unify_gen__LambdaHeadVar__2_94;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_compound__2660__1_2_p_0(
  MR_Integer ml_backend__ml_unify_gen__NumExtraArgs_43,
  MR_Integer ml_backend__ml_unify_gen__HeadVar__2_79)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__NumExtraArgs_43 == ml_backend__ml_unify_gen__HeadVar__2_79);

    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_ground_term_conjunct_compound__2655__1_1_f_0(
  MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__1_71)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__2_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__LambdaHeadVar__1_71, (MR_Integer) 2)));
    MR_Word ml_backend__ml_unify_gen__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__LambdaHeadVar__1_71, (MR_Integer) 0)));
    MR_Word ml_backend__ml_unify_gen__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__LambdaHeadVar__1_71, (MR_Integer) 1)));
    MR_Word ml_backend__ml_unify_gen__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__LambdaHeadVar__1_71, (MR_Integer) 3)));

    return ml_backend__ml_unify_gen__LambdaHeadVar__2_72;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_ground_term_conjunct_compound__2654__1_1_f_0(
  MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__1_68)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__2_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__LambdaHeadVar__1_68, (MR_Integer) 1)));
    MR_Word ml_backend__ml_unify_gen__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__LambdaHeadVar__1_68, (MR_Integer) 0)));
    MR_Word ml_backend__ml_unify_gen__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__LambdaHeadVar__1_68, (MR_Integer) 2)));
    MR_Word ml_backend__ml_unify_gen__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__LambdaHeadVar__1_68, (MR_Integer) 3)));

    return ml_backend__ml_unify_gen__LambdaHeadVar__2_69;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2543__7_2_p_0(
  MR_Word ml_backend__ml_unify_gen__Args_25,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_212)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    {
      ml_backend__ml_unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3], ((MR_Box) (ml_backend__ml_unify_gen__Args_25)), ((MR_Box) (ml_backend__ml_unify_gen__HeadVar__2_212)));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2543__6_2_p_0(
  MR_Word ml_backend__ml_unify_gen__Args_25,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_200)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    {
      ml_backend__ml_unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3], ((MR_Box) (ml_backend__ml_unify_gen__Args_25)), ((MR_Box) (ml_backend__ml_unify_gen__HeadVar__2_200)));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2543__5_2_p_0(
  MR_Word ml_backend__ml_unify_gen__Args_25,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_186)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    {
      ml_backend__ml_unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3], ((MR_Box) (ml_backend__ml_unify_gen__Args_25)), ((MR_Box) (ml_backend__ml_unify_gen__HeadVar__2_186)));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2543__4_2_p_0(
  MR_Word ml_backend__ml_unify_gen__Args_25,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_174)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    {
      ml_backend__ml_unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3], ((MR_Box) (ml_backend__ml_unify_gen__Args_25)), ((MR_Box) (ml_backend__ml_unify_gen__HeadVar__2_174)));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2543__3_2_p_0(
  MR_Word ml_backend__ml_unify_gen__Args_25,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_162)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    {
      ml_backend__ml_unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3], ((MR_Box) (ml_backend__ml_unify_gen__Args_25)), ((MR_Box) (ml_backend__ml_unify_gen__HeadVar__2_162)));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2543__2_2_p_0(
  MR_Word ml_backend__ml_unify_gen__Args_25,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_150)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    {
      ml_backend__ml_unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3], ((MR_Box) (ml_backend__ml_unify_gen__Args_25)), ((MR_Box) (ml_backend__ml_unify_gen__HeadVar__2_150)));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2543__1_2_p_0(
  MR_Word ml_backend__ml_unify_gen__Args_25,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_123)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    {
      ml_backend__ml_unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[3], ((MR_Box) (ml_backend__ml_unify_gen__Args_25)), ((MR_Box) (ml_backend__ml_unify_gen__HeadVar__2_123)));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_tag_test_rval__2291__1_5_f_0(
  MR_Word ml_backend__ml_unify_gen__Type_7,
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_8,
  MR_Word ml_backend__ml_unify_gen__Rval_9,
  MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__1_63,
  MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__2_64)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__3_65;
    MR_Word ml_backend__ml_unify_gen__EqualRA_61;
    MR_Word ml_backend__ml_unify_gen__Var_66;
    MR_Word ml_backend__ml_unify_gen__Var_67;

    {
      ml_backend__ml_unify_gen__Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_66, 1) = ((MR_Box) (ml_backend__ml_unify_gen__LambdaHeadVar__1_63));
    }
    {
      ml_backend__ml_unify_gen__EqualRA_61 = ml_backend__ml_unify_gen__ml_gen_tag_test_rval_4_f_0(ml_backend__ml_unify_gen__Var_66, ml_backend__ml_unify_gen__Type_7, ml_backend__ml_unify_gen__ModuleInfo_8, ml_backend__ml_unify_gen__Rval_9);
    }
    {
      ml_backend__ml_unify_gen__Var_67 = ml_backend__ml_code_util__ml_gen_not_1_f_0(ml_backend__ml_unify_gen__EqualRA_61);
    }
    {
      ml_backend__ml_unify_gen__LambdaHeadVar__3_65 = ml_backend__ml_code_util__ml_gen_and_2_f_0(ml_backend__ml_unify_gen__Var_67, ml_backend__ml_unify_gen__LambdaHeadVar__2_64);
    }
    return ml_backend__ml_unify_gen__LambdaHeadVar__3_65;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_field_names_and_types__1627__1_2_f_0(
  MR_Word ml_backend__ml_unify_gen__Context_11,
  MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__1_26)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__2_27;

    {
      ml_backend__ml_unify_gen__LambdaHeadVar__2_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__LambdaHeadVar__2_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__LambdaHeadVar__2_27, 1) = ((MR_Box) (ml_backend__ml_unify_gen__LambdaHeadVar__1_26));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__LambdaHeadVar__2_27, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__LambdaHeadVar__2_27, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Context_11));
    }
    return ml_backend__ml_unify_gen__LambdaHeadVar__2_27;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_extra_arg_assign__1445__1_2_p_0(
  MR_Word ml_backend__ml_unify_gen__HighLevelData_59,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_70)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__HighLevelData_59 == ml_backend__ml_unify_gen__HeadVar__2_70);

    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args_2__1388__1_2_p_0(
  MR_Word ml_backend__ml_unify_gen__ConsArgWidth_48,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_65)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    {
      ml_backend__ml_unify_gen__succeeded = parse_tree__prog_data____Unify____arg_width_0_0(ml_backend__ml_unify_gen__ConsArgWidth_48, ml_backend__ml_unify_gen__HeadVar__2_65);
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__constructor_arg_types__1150__1_3_p_0(
  MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__1_32,
  MR_Word * ml_backend__ml_unify_gen__LambdaHeadVar__2_33,
  MR_Word * ml_backend__ml_unify_gen__LambdaHeadVar__3_34)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__LambdaHeadVar__1_32, (MR_Integer) 0)));
    MR_Word ml_backend__ml_unify_gen__Var_23;

    *ml_backend__ml_unify_gen__LambdaHeadVar__2_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__LambdaHeadVar__1_32, (MR_Integer) 1)));
    *ml_backend__ml_unify_gen__LambdaHeadVar__3_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__LambdaHeadVar__1_32, (MR_Integer) 2)));
    ml_backend__ml_unify_gen__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__LambdaHeadVar__1_32, (MR_Integer) 3)));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__902__1_2_p_0(
  MR_Integer ml_backend__ml_unify_gen__PrimaryTag_54,
  MR_Integer ml_backend__ml_unify_gen__LambdaHeadVar__1_91)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__LambdaHeadVar__1_91 == ml_backend__ml_unify_gen__PrimaryTag_54);

    ml_backend__ml_unify_gen__succeeded = !(ml_backend__ml_unify_gen__succeeded);
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__885__1_3_p_0(
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_82,
  MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__1_88,
  MR_Integer * ml_backend__ml_unify_gen__LambdaHeadVar__2_89)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__ReuseConsIdTag_47;
    MR_Word ml_backend__ml_unify_gen___ReuseOffSet_48;
    MR_Integer ml_backend__ml_unify_gen___ReuseArgNum_49;

    {
      ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_82, ml_backend__ml_unify_gen__LambdaHeadVar__1_88, &ml_backend__ml_unify_gen__ReuseConsIdTag_47);
    }
    {
      ml_backend__ml_unify_gen__ml_tag_offset_and_argnum_4_p_0(ml_backend__ml_unify_gen__ReuseConsIdTag_47, ml_backend__ml_unify_gen__LambdaHeadVar__2_89, &ml_backend__ml_unify_gen___ReuseOffSet_48, &ml_backend__ml_unify_gen___ReuseArgNum_49);
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_statically__827__1_1_f_0(
  MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__1_74)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__LambdaHeadVar__2_75;

    {
      ml_backend__ml_unify_gen__LambdaHeadVar__2_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__LambdaHeadVar__2_75, 0) = ((MR_Box) (ml_backend__ml_unify_gen__LambdaHeadVar__1_74));
    }
    return ml_backend__ml_unify_gen__LambdaHeadVar__2_75;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__664__1_2_p_0(
  MR_Word ml_backend__ml_unify_gen__TakeAddr_25,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_47)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    {
      ml_backend__ml_unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[1], ((MR_Box) (ml_backend__ml_unify_gen__TakeAddr_25)), ((MR_Box) (ml_backend__ml_unify_gen__HeadVar__2_47)));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__205__1_2_p_0(
  MR_Word ml_backend__ml_unify_gen__CodeModel_8,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_79)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__CodeModel_8 == ml_backend__ml_unify_gen__HeadVar__2_79);

    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__236__1_2_p_0(
  MR_Word ml_backend__ml_unify_gen__MaybeSizeProfInfo_36,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_73)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    {
      ml_backend__ml_unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[0], ((MR_Box) (ml_backend__ml_unify_gen__MaybeSizeProfInfo_36)), ((MR_Box) (ml_backend__ml_unify_gen__HeadVar__2_73)));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__223__1_2_p_0(
  MR_Word ml_backend__ml_unify_gen__CodeModel_8,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_68)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__CodeModel_8 == ml_backend__ml_unify_gen__HeadVar__2_68);

    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__172__1_2_p_0(
  MR_Word ml_backend__ml_unify_gen__CodeModel_8,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_89)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__CodeModel_8 == ml_backend__ml_unify_gen__HeadVar__2_89);

    return ml_backend__ml_unify_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____take_addr_info_0_0(
  MR_Word * ml_backend__ml_unify_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_unify_gen__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Integer ml_backend__ml_unify_gen__CastX_15 = (MR_Integer) ml_backend__ml_unify_gen__HeadVar__2_2;
    MR_Integer ml_backend__ml_unify_gen__CastY_16 = (MR_Integer) ml_backend__ml_unify_gen__HeadVar__3_3;

    ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__CastX_15 == ml_backend__ml_unify_gen__CastY_16);
    if (ml_backend__ml_unify_gen__succeeded)
      *ml_backend__ml_unify_gen__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ml_backend__ml_unify_gen__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_unify_gen__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_unify_gen__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_unify_gen__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_unify_gen__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_unify_gen__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ml_backend__ml_unify_gen__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_unify_gen__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ml_backend__ml_unify_gen__Var_12;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], &ml_backend__ml_unify_gen__Var_12, ((MR_Box) (ml_backend__ml_unify_gen__ArgX1_4)), ((MR_Box) (ml_backend__ml_unify_gen__ArgY1_5)));
        }
        ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_12 == (MR_Integer) 0);
        ml_backend__ml_unify_gen__succeeded = !(ml_backend__ml_unify_gen__succeeded);
        if (ml_backend__ml_unify_gen__succeeded)
          *ml_backend__ml_unify_gen__HeadVar__1_1 = ml_backend__ml_unify_gen__Var_12;
        else
          {
            MR_Word ml_backend__ml_unify_gen__Var_13;
            MR_Integer ml_backend__ml_unify_gen__Var_21 = (MR_Integer) ml_backend__ml_unify_gen__ArgX2_6;
            MR_Integer ml_backend__ml_unify_gen__Var_22 = (MR_Integer) ml_backend__ml_unify_gen__ArgY2_7;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_unify_gen__Var_13, ml_backend__ml_unify_gen__Var_21, ml_backend__ml_unify_gen__Var_22);
            }
            ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_13 == (MR_Integer) 0);
            ml_backend__ml_unify_gen__succeeded = !(ml_backend__ml_unify_gen__succeeded);
            if (ml_backend__ml_unify_gen__succeeded)
              *ml_backend__ml_unify_gen__HeadVar__1_1 = ml_backend__ml_unify_gen__Var_13;
            else
              {
                MR_Word ml_backend__ml_unify_gen__Var_14;

                {
                  ml_backend__mlds____Compare____mlds_type_0_0(&ml_backend__ml_unify_gen__Var_14, ml_backend__ml_unify_gen__ArgX3_8, ml_backend__ml_unify_gen__ArgY3_9);
                }
                ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_14 == (MR_Integer) 0);
                ml_backend__ml_unify_gen__succeeded = !(ml_backend__ml_unify_gen__succeeded);
                if (ml_backend__ml_unify_gen__succeeded)
                  *ml_backend__ml_unify_gen__HeadVar__1_1 = ml_backend__ml_unify_gen__Var_14;
                else
                  {
                    ml_backend__mlds____Compare____mlds_type_0_0(ml_backend__ml_unify_gen__HeadVar__1_1, ml_backend__ml_unify_gen__ArgX4_10, ml_backend__ml_unify_gen__ArgY4_11);
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____take_addr_info_0_0(
  MR_Word ml_backend__ml_unify_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Integer ml_backend__ml_unify_gen__CastX_11 = (MR_Integer) ml_backend__ml_unify_gen__HeadVar__1_1;
    MR_Integer ml_backend__ml_unify_gen__CastY_12 = (MR_Integer) ml_backend__ml_unify_gen__HeadVar__2_2;

    ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__CastX_11 == ml_backend__ml_unify_gen__CastY_12);
    if (ml_backend__ml_unify_gen__succeeded)
      ml_backend__ml_unify_gen__succeeded = MR_TRUE;
    else
      {
        MR_Word ml_backend__ml_unify_gen__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_unify_gen__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_unify_gen__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_unify_gen__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_unify_gen__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ml_backend__ml_unify_gen__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_unify_gen__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ml_backend__ml_unify_gen__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer ml_backend__ml_unify_gen__CastX_18;
        MR_Integer ml_backend__ml_unify_gen__CastY_19;

        {
          ml_backend__ml_unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], ((MR_Box) (ml_backend__ml_unify_gen__ArgX1_3)), ((MR_Box) (ml_backend__ml_unify_gen__ArgY1_4)));
        }
        if (ml_backend__ml_unify_gen__succeeded)
          {
            ml_backend__ml_unify_gen__CastX_18 = (MR_Integer) ml_backend__ml_unify_gen__ArgX2_5;
            ml_backend__ml_unify_gen__CastY_19 = (MR_Integer) ml_backend__ml_unify_gen__ArgY2_6;
            ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__CastX_18 == ml_backend__ml_unify_gen__CastY_19);
            if (ml_backend__ml_unify_gen__succeeded)
              ml_backend__ml_unify_gen__succeeded = MR_TRUE;
            else
              {
                MR_Integer ml_backend__ml_unify_gen__ArgX1_16 = (MR_Integer) ml_backend__ml_unify_gen__ArgX2_5;
                MR_Integer ml_backend__ml_unify_gen__ArgY1_17 = (MR_Integer) ml_backend__ml_unify_gen__ArgY2_6;

                ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__ArgX1_16 == ml_backend__ml_unify_gen__ArgY1_17);
              }
            if (ml_backend__ml_unify_gen__succeeded)
              {
                {
                  ml_backend__ml_unify_gen__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_unify_gen__ArgX3_7, ml_backend__ml_unify_gen__ArgY3_8);
                }
                if (ml_backend__ml_unify_gen__succeeded)
                  {
                    ml_backend__ml_unify_gen__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_unify_gen__ArgX4_9, ml_backend__ml_unify_gen__ArgY4_10);
                  }
              }
          }
      }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____ml_const_struct_info_0_0(
  MR_Word * ml_backend__ml_unify_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_unify_gen__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Integer ml_backend__ml_unify_gen__CastX_12 = (MR_Integer) ml_backend__ml_unify_gen__HeadVar__2_2;
    MR_Integer ml_backend__ml_unify_gen__CastY_13 = (MR_Integer) ml_backend__ml_unify_gen__HeadVar__3_3;

    ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__CastX_12 == ml_backend__ml_unify_gen__CastY_13);
    if (ml_backend__ml_unify_gen__succeeded)
      *ml_backend__ml_unify_gen__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ml_backend__ml_unify_gen__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_unify_gen__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_unify_gen__ArgX2_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 3);
        MR_Word ml_backend__ml_unify_gen__ArgY2_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 3);
        MR_Word ml_backend__ml_unify_gen__ArgX3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ml_backend__ml_unify_gen__ArgY3_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ml_backend__ml_unify_gen__Var_10;

        {
          hlds__hlds_module____Compare____module_info_0_0(&ml_backend__ml_unify_gen__Var_10, ml_backend__ml_unify_gen__ArgX1_4, ml_backend__ml_unify_gen__ArgY1_5);
        }
        ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_10 == (MR_Integer) 0);
        ml_backend__ml_unify_gen__succeeded = !(ml_backend__ml_unify_gen__succeeded);
        if (ml_backend__ml_unify_gen__succeeded)
          *ml_backend__ml_unify_gen__HeadVar__1_1 = ml_backend__ml_unify_gen__Var_10;
        else
          {
            MR_Word ml_backend__ml_unify_gen__Var_11;
            MR_Integer ml_backend__ml_unify_gen__Var_17 = (MR_Integer) ml_backend__ml_unify_gen__ArgX2_6;
            MR_Integer ml_backend__ml_unify_gen__Var_18 = (MR_Integer) ml_backend__ml_unify_gen__ArgY2_7;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_unify_gen__Var_11, ml_backend__ml_unify_gen__Var_17, ml_backend__ml_unify_gen__Var_18);
            }
            ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_11 == (MR_Integer) 0);
            ml_backend__ml_unify_gen__succeeded = !(ml_backend__ml_unify_gen__succeeded);
            if (ml_backend__ml_unify_gen__succeeded)
              *ml_backend__ml_unify_gen__HeadVar__1_1 = ml_backend__ml_unify_gen__Var_11;
            else
              {
                MR_Integer ml_backend__ml_unify_gen__Var_19 = (MR_Integer) ml_backend__ml_unify_gen__ArgX3_8;
                MR_Integer ml_backend__ml_unify_gen__Var_20 = (MR_Integer) ml_backend__ml_unify_gen__ArgY3_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_unify_gen__HeadVar__1_1, ml_backend__ml_unify_gen__Var_19, ml_backend__ml_unify_gen__Var_20);
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____ml_const_struct_info_0_0(
  MR_Word ml_backend__ml_unify_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Integer ml_backend__ml_unify_gen__CastX_9 = (MR_Integer) ml_backend__ml_unify_gen__HeadVar__1_1;
    MR_Integer ml_backend__ml_unify_gen__CastY_10 = (MR_Integer) ml_backend__ml_unify_gen__HeadVar__2_2;

    ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__CastX_9 == ml_backend__ml_unify_gen__CastY_10);
    if (ml_backend__ml_unify_gen__succeeded)
      ml_backend__ml_unify_gen__succeeded = MR_TRUE;
    else
      {
        MR_Word ml_backend__ml_unify_gen__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_unify_gen__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_unify_gen__ArgX2_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 3);
        MR_Word ml_backend__ml_unify_gen__ArgY2_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 3);
        MR_Word ml_backend__ml_unify_gen__ArgX3_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ml_backend__ml_unify_gen__ArgY3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

        {
          ml_backend__ml_unify_gen__succeeded = hlds__hlds_module____Unify____module_info_0_0(ml_backend__ml_unify_gen__ArgX1_3, ml_backend__ml_unify_gen__ArgY1_4);
        }
        if (ml_backend__ml_unify_gen__succeeded)
          {
            ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__ArgX2_5 == ml_backend__ml_unify_gen__ArgY2_6);
            if (ml_backend__ml_unify_gen__succeeded)
              ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__ArgX3_7 == ml_backend__ml_unify_gen__ArgY3_8);
          }
      }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen____Compare____field_offset_0_0(
  MR_Word * ml_backend__ml_unify_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_unify_gen__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Integer ml_backend__ml_unify_gen__CastX_6 = (MR_Integer) ml_backend__ml_unify_gen__HeadVar__2_2;
    MR_Integer ml_backend__ml_unify_gen__CastY_7 = (MR_Integer) ml_backend__ml_unify_gen__HeadVar__3_3;

    ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__CastX_6 == ml_backend__ml_unify_gen__CastY_7);
    if (ml_backend__ml_unify_gen__succeeded)
      *ml_backend__ml_unify_gen__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer ml_backend__ml_unify_gen__ArgX1_4 = (MR_Integer) ml_backend__ml_unify_gen__HeadVar__2_2;
        MR_Integer ml_backend__ml_unify_gen__ArgY1_5 = (MR_Integer) ml_backend__ml_unify_gen__HeadVar__3_3;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_unify_gen__HeadVar__1_1, ml_backend__ml_unify_gen__ArgX1_4, ml_backend__ml_unify_gen__ArgY1_5);
        }
      }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen____Unify____field_offset_0_0(
  MR_Word ml_backend__ml_unify_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Integer ml_backend__ml_unify_gen__CastX_5 = (MR_Integer) ml_backend__ml_unify_gen__HeadVar__1_1;
    MR_Integer ml_backend__ml_unify_gen__CastY_6 = (MR_Integer) ml_backend__ml_unify_gen__HeadVar__2_2;

    ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__CastX_5 == ml_backend__ml_unify_gen__CastY_6);
    if (ml_backend__ml_unify_gen__succeeded)
      ml_backend__ml_unify_gen__succeeded = MR_TRUE;
    else
      {
        MR_Integer ml_backend__ml_unify_gen__ArgX1_3 = (MR_Integer) ml_backend__ml_unify_gen__HeadVar__1_1;
        MR_Integer ml_backend__ml_unify_gen__ArgY1_4 = (MR_Integer) ml_backend__ml_unify_gen__HeadVar__2_2;

        ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__ArgX1_3 == ml_backend__ml_unify_gen__ArgY1_4);
      }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(
  MR_Word ml_backend__ml_unify_gen__Rval_4,
  MR_Integer ml_backend__ml_unify_gen__Mask_5)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__HeadVar__3_3;
    MR_Word ml_backend__ml_unify_gen__Var_7;
    MR_Word ml_backend__ml_unify_gen__Var_8;

    {
      ml_backend__ml_unify_gen__Var_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_8, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Mask_5));
    }
    {
      ml_backend__ml_unify_gen__Var_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_7, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_8));
    }
    {
      ml_backend__ml_unify_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__HeadVar__3_3, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_4));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__HeadVar__3_3, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Var_7));
    }
    return ml_backend__ml_unify_gen__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_bitwise_or_2_f_0(
  MR_Word ml_backend__ml_unify_gen__RvalA_4,
  MR_Word ml_backend__ml_unify_gen__RvalB_5)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__RvalA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalA_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word ml_backend__ml_unify_gen__Rval_6;
    MR_Word ml_backend__ml_unify_gen__UnboxRvalA_10;
    MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_MaybeType_18_18;
    MR_Word ml_backend__ml_unify_gen__Var_21;
    MR_Word ml_backend__ml_unify_gen__TypeA_8;
    MR_Word ml_backend__ml_unify_gen__UnboxRvalA0_9;
    MR_Word ml_backend__ml_unify_gen__Var_17;
    MR_Word ml_backend__ml_unify_gen__UnboxRvalB0_12;
    MR_Word ml_backend__ml_unify_gen__Var_19;
    MR_Word ml_backend__ml_unify_gen__TypeB_11;

    if (ml_backend__ml_unify_gen__succeeded)
      {
        ml_backend__ml_unify_gen__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalA_4, (MR_Integer) 1)));
        ml_backend__ml_unify_gen__UnboxRvalA0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalA_4, (MR_Integer) 2)));
        ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__Var_17)) == (MR_mktag((MR_Integer) 0)));
        if (ml_backend__ml_unify_gen__succeeded)
          ml_backend__ml_unify_gen__TypeA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_17, (MR_Integer) 0)));
      }
    if (ml_backend__ml_unify_gen__succeeded)
      {
        ml_backend__ml_unify_gen__UnboxRvalA_10 = ml_backend__ml_unify_gen__UnboxRvalA0_9;
        {
          ml_backend__ml_unify_gen__STATE_VARIABLE_MaybeType_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__STATE_VARIABLE_MaybeType_18_18, 0) = ((MR_Box) (ml_backend__ml_unify_gen__TypeA_8));
        }
      }
    else
      {
        ml_backend__ml_unify_gen__UnboxRvalA_10 = ml_backend__ml_unify_gen__RvalA_4;
        ml_backend__ml_unify_gen__STATE_VARIABLE_MaybeType_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    ml_backend__ml_unify_gen__Var_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
    ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__RvalB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalB_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (ml_backend__ml_unify_gen__succeeded)
      {
        ml_backend__ml_unify_gen__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalB_5, (MR_Integer) 1)));
        ml_backend__ml_unify_gen__UnboxRvalB0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalB_5, (MR_Integer) 2)));
        ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__Var_19)) == (MR_mktag((MR_Integer) 0)));
        if (ml_backend__ml_unify_gen__succeeded)
          ml_backend__ml_unify_gen__TypeB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_19, (MR_Integer) 0)));
      }
    if (ml_backend__ml_unify_gen__succeeded)
      {
        MR_Word ml_backend__ml_unify_gen__UnboxRval_14;

        {
          ml_backend__ml_unify_gen__UnboxRval_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnboxRval_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnboxRval_14, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_21));
          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnboxRval_14, 2) = ((MR_Box) (ml_backend__ml_unify_gen__UnboxRvalA_10));
          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnboxRval_14, 3) = ((MR_Box) (ml_backend__ml_unify_gen__UnboxRvalB0_12));
        }
        {
          ml_backend__ml_unify_gen__Rval_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_6, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_19));
          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_6, 2) = ((MR_Box) (ml_backend__ml_unify_gen__UnboxRval_14));
        }
      }
    else
      {
        MR_Word ml_backend__ml_unify_gen__UnboxRval_28;

        {
          ml_backend__ml_unify_gen__UnboxRval_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnboxRval_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnboxRval_28, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_21));
          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnboxRval_28, 2) = ((MR_Box) (ml_backend__ml_unify_gen__UnboxRvalA_10));
          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnboxRval_28, 3) = ((MR_Box) (ml_backend__ml_unify_gen__RvalB_5));
        }
        if ((ml_backend__ml_unify_gen__STATE_VARIABLE_MaybeType_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ml_backend__ml_unify_gen__Rval_6 = ml_backend__ml_unify_gen__UnboxRval_28;
        else
          {
            MR_Word ml_backend__ml_unify_gen__BoxType_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__STATE_VARIABLE_MaybeType_18_18, (MR_Integer) 0)));
            MR_Word ml_backend__ml_unify_gen__Var_24;

            {
              ml_backend__ml_unify_gen__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_24, 0) = ((MR_Box) (ml_backend__ml_unify_gen__BoxType_23));
            }
            {
              ml_backend__ml_unify_gen__Rval_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_6, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_24));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_6, 2) = ((MR_Box) (ml_backend__ml_unify_gen__UnboxRval_28));
            }
          }
      }
    return ml_backend__ml_unify_gen__Rval_6;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_rshift_2_f_0(
  MR_Word ml_backend__ml_unify_gen__Rval_4,
  MR_Integer ml_backend__ml_unify_gen__Shift_5)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Shift_5 == (MR_Integer) 0);
    MR_Word ml_backend__ml_unify_gen__HeadVar__3_3;

    if (ml_backend__ml_unify_gen__succeeded)
      ml_backend__ml_unify_gen__HeadVar__3_3 = ml_backend__ml_unify_gen__Rval_4;
    else
      {
        MR_Word ml_backend__ml_unify_gen__Var_7;
        MR_Word ml_backend__ml_unify_gen__Var_8;

        {
          ml_backend__ml_unify_gen__Var_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_8, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Shift_5));
        }
        {
          ml_backend__ml_unify_gen__Var_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_7, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_8));
        }
        {
          ml_backend__ml_unify_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__HeadVar__3_3, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_4));
          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__HeadVar__3_3, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Var_7));
        }
      }
    return ml_backend__ml_unify_gen__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_lshift_2_f_0(
  MR_Word ml_backend__ml_unify_gen__Rval0_4,
  MR_Integer ml_backend__ml_unify_gen__Shift_5)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__Rval0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval0_4, (MR_Integer) 0)))) == (MR_Integer) 0)));
    MR_Word ml_backend__ml_unify_gen__Rval_6;
    MR_Word ml_backend__ml_unify_gen__Var_11;
    MR_Word ml_backend__ml_unify_gen__Var_7;

    if (ml_backend__ml_unify_gen__succeeded)
      {
        ml_backend__ml_unify_gen__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval0_4, (MR_Integer) 1)));
        ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__Var_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_11, (MR_Integer) 0)))) == (MR_Integer) 9)));
        if (ml_backend__ml_unify_gen__succeeded)
          ml_backend__ml_unify_gen__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_11, (MR_Integer) 1)));
      }
    if (ml_backend__ml_unify_gen__succeeded)
      {
        ml_backend__ml_unify_gen__Rval_6 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[4]);
      }
    else
      {
        ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Shift_5 == (MR_Integer) 0);
        if (ml_backend__ml_unify_gen__succeeded)
          ml_backend__ml_unify_gen__Rval_6 = ml_backend__ml_unify_gen__Rval0_4;
        else
          {
            MR_Word ml_backend__ml_unify_gen__Rval1_9;
            MR_Word ml_backend__ml_unify_gen__Var_14;
            MR_Word ml_backend__ml_unify_gen__Type_8;

            ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__Rval0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval0_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (ml_backend__ml_unify_gen__succeeded)
              {
                ml_backend__ml_unify_gen__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval0_4, (MR_Integer) 1)));
                ml_backend__ml_unify_gen__Rval1_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval0_4, (MR_Integer) 2)));
                ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__Var_14)) == (MR_mktag((MR_Integer) 0)));
                if (ml_backend__ml_unify_gen__succeeded)
                  ml_backend__ml_unify_gen__Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_14, (MR_Integer) 0)));
              }
            if (ml_backend__ml_unify_gen__succeeded)
              {
                MR_Word ml_backend__ml_unify_gen__Rval2_10;
                MR_Word ml_backend__ml_unify_gen__Var_16;
                MR_Word ml_backend__ml_unify_gen__Var_17;

                {
                  ml_backend__ml_unify_gen__Var_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_17, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Shift_5));
                }
                {
                  ml_backend__ml_unify_gen__Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_16, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_17));
                }
                {
                  ml_backend__ml_unify_gen__Rval2_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval2_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval2_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval2_10, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Rval1_9));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval2_10, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Var_16));
                }
                {
                  ml_backend__ml_unify_gen__Rval_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_6, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_14));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_6, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Rval2_10));
                }
              }
            else
              {
                MR_Word ml_backend__ml_unify_gen__Var_20;
                MR_Word ml_backend__ml_unify_gen__Var_21;

                {
                  ml_backend__ml_unify_gen__Var_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_21, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Shift_5));
                }
                {
                  ml_backend__ml_unify_gen__Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_20, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_21));
                }
                {
                  ml_backend__ml_unify_gen__Rval_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_6, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Rval0_4));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_6, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Var_20));
                }
              }
          }
      }
    return ml_backend__ml_unify_gen__Rval_6;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_shift_combine_rval_type_8_p_0(
  MR_Word ml_backend__ml_unify_gen__ArgA_9,
  MR_Integer ml_backend__ml_unify_gen__Shift_10,
  MR_Word ml_backend__ml_unify_gen__MaybeArgB_11,
  MR_Word * ml_backend__ml_unify_gen__ArgC_12)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__RvalA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgA_9, (MR_Integer) 0)));
    MR_Word ml_backend__ml_unify_gen__TypeA_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgA_9, (MR_Integer) 1)));
    MR_Word ml_backend__ml_unify_gen__ShiftRvalA_17;
    MR_Word ml_backend__ml_unify_gen__RvalC_20;
    MR_Word ml_backend__ml_unify_gen__Var_33;
    MR_Word ml_backend__ml_unify_gen__Var_29;

    ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__RvalA_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalA_15, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (ml_backend__ml_unify_gen__succeeded)
      {
        ml_backend__ml_unify_gen__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalA_15, (MR_Integer) 1)));
        ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__Var_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_33, (MR_Integer) 0)))) == (MR_Integer) 9)));
        if (ml_backend__ml_unify_gen__succeeded)
          ml_backend__ml_unify_gen__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_33, (MR_Integer) 1)));
      }
    if (ml_backend__ml_unify_gen__succeeded)
      {
        ml_backend__ml_unify_gen__ShiftRvalA_17 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[4]);
      }
    else
      {
        ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Shift_10 == (MR_Integer) 0);
        if (ml_backend__ml_unify_gen__succeeded)
          ml_backend__ml_unify_gen__ShiftRvalA_17 = ml_backend__ml_unify_gen__RvalA_15;
        else
          {
            MR_Word ml_backend__ml_unify_gen__Rval1_31;
            MR_Word ml_backend__ml_unify_gen__Var_36;
            MR_Word ml_backend__ml_unify_gen__Type_30;

            ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__RvalA_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalA_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (ml_backend__ml_unify_gen__succeeded)
              {
                ml_backend__ml_unify_gen__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalA_15, (MR_Integer) 1)));
                ml_backend__ml_unify_gen__Rval1_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalA_15, (MR_Integer) 2)));
                ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__Var_36)) == (MR_mktag((MR_Integer) 0)));
                if (ml_backend__ml_unify_gen__succeeded)
                  ml_backend__ml_unify_gen__Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_36, (MR_Integer) 0)));
              }
            if (ml_backend__ml_unify_gen__succeeded)
              {
                MR_Word ml_backend__ml_unify_gen__Rval2_32;
                MR_Word ml_backend__ml_unify_gen__Var_38;
                MR_Word ml_backend__ml_unify_gen__Var_39;

                {
                  ml_backend__ml_unify_gen__Var_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_39, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Shift_10));
                }
                {
                  ml_backend__ml_unify_gen__Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_38, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_39));
                }
                {
                  ml_backend__ml_unify_gen__Rval2_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval2_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval2_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval2_32, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Rval1_31));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval2_32, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Var_38));
                }
                {
                  ml_backend__ml_unify_gen__ShiftRvalA_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ShiftRvalA_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ShiftRvalA_17, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_36));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ShiftRvalA_17, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Rval2_32));
                }
              }
            else
              {
                MR_Word ml_backend__ml_unify_gen__Var_42;
                MR_Word ml_backend__ml_unify_gen__Var_43;

                {
                  ml_backend__ml_unify_gen__Var_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_43, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Shift_10));
                }
                {
                  ml_backend__ml_unify_gen__Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_42, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_43));
                }
                {
                  ml_backend__ml_unify_gen__ShiftRvalA_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ShiftRvalA_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ShiftRvalA_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ShiftRvalA_17, 2) = ((MR_Box) (ml_backend__ml_unify_gen__RvalA_15));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ShiftRvalA_17, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Var_42));
                }
              }
          }
      }
    if ((ml_backend__ml_unify_gen__MaybeArgB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ml_backend__ml_unify_gen__RvalC_20 = ml_backend__ml_unify_gen__ShiftRvalA_17;
    else
      {
        MR_Word ml_backend__ml_unify_gen__RvalB_18;
        MR_Word ml_backend__ml_unify_gen__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__MaybeArgB_11, (MR_Integer) 0)));
        MR_Word ml_backend__ml_unify_gen__UnboxRvalA_50;
        MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_MaybeType_18_58;
        MR_Word ml_backend__ml_unify_gen__Var_61;
        MR_Word ml_backend__ml_unify_gen___TypeB_19;
        MR_Word ml_backend__ml_unify_gen__TypeA_48;
        MR_Word ml_backend__ml_unify_gen__UnboxRvalA0_49;
        MR_Word ml_backend__ml_unify_gen__Var_57;
        MR_Word ml_backend__ml_unify_gen__UnboxRvalB0_52;
        MR_Word ml_backend__ml_unify_gen__Var_59;
        MR_Word ml_backend__ml_unify_gen__TypeB_51;

        ml_backend__ml_unify_gen__RvalB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_25, (MR_Integer) 0)));
        ml_backend__ml_unify_gen___TypeB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_25, (MR_Integer) 1)));
        ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__ShiftRvalA_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ShiftRvalA_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (ml_backend__ml_unify_gen__succeeded)
          {
            ml_backend__ml_unify_gen__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ShiftRvalA_17, (MR_Integer) 1)));
            ml_backend__ml_unify_gen__UnboxRvalA0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ShiftRvalA_17, (MR_Integer) 2)));
            ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__Var_57)) == (MR_mktag((MR_Integer) 0)));
            if (ml_backend__ml_unify_gen__succeeded)
              ml_backend__ml_unify_gen__TypeA_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_57, (MR_Integer) 0)));
          }
        if (ml_backend__ml_unify_gen__succeeded)
          {
            ml_backend__ml_unify_gen__UnboxRvalA_50 = ml_backend__ml_unify_gen__UnboxRvalA0_49;
            {
              ml_backend__ml_unify_gen__STATE_VARIABLE_MaybeType_18_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__STATE_VARIABLE_MaybeType_18_58, 0) = ((MR_Box) (ml_backend__ml_unify_gen__TypeA_48));
            }
          }
        else
          {
            ml_backend__ml_unify_gen__UnboxRvalA_50 = ml_backend__ml_unify_gen__ShiftRvalA_17;
            ml_backend__ml_unify_gen__STATE_VARIABLE_MaybeType_18_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        ml_backend__ml_unify_gen__Var_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
        ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__RvalB_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalB_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (ml_backend__ml_unify_gen__succeeded)
          {
            ml_backend__ml_unify_gen__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalB_18, (MR_Integer) 1)));
            ml_backend__ml_unify_gen__UnboxRvalB0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalB_18, (MR_Integer) 2)));
            ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__Var_59)) == (MR_mktag((MR_Integer) 0)));
            if (ml_backend__ml_unify_gen__succeeded)
              ml_backend__ml_unify_gen__TypeB_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_59, (MR_Integer) 0)));
          }
        if (ml_backend__ml_unify_gen__succeeded)
          {
            MR_Word ml_backend__ml_unify_gen__UnboxRval_54;

            {
              ml_backend__ml_unify_gen__UnboxRval_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnboxRval_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnboxRval_54, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_61));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnboxRval_54, 2) = ((MR_Box) (ml_backend__ml_unify_gen__UnboxRvalA_50));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnboxRval_54, 3) = ((MR_Box) (ml_backend__ml_unify_gen__UnboxRvalB0_52));
            }
            {
              ml_backend__ml_unify_gen__RvalC_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalC_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalC_20, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_59));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalC_20, 2) = ((MR_Box) (ml_backend__ml_unify_gen__UnboxRval_54));
            }
          }
        else
          {
            MR_Word ml_backend__ml_unify_gen__UnboxRval_68;

            {
              ml_backend__ml_unify_gen__UnboxRval_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnboxRval_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnboxRval_68, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_61));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnboxRval_68, 2) = ((MR_Box) (ml_backend__ml_unify_gen__UnboxRvalA_50));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnboxRval_68, 3) = ((MR_Box) (ml_backend__ml_unify_gen__RvalB_18));
            }
            if ((ml_backend__ml_unify_gen__STATE_VARIABLE_MaybeType_18_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              ml_backend__ml_unify_gen__RvalC_20 = ml_backend__ml_unify_gen__UnboxRval_68;
            else
              {
                MR_Word ml_backend__ml_unify_gen__BoxType_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__STATE_VARIABLE_MaybeType_18_58, (MR_Integer) 0)));
                MR_Word ml_backend__ml_unify_gen__Var_64;

                {
                  ml_backend__ml_unify_gen__Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_64, 0) = ((MR_Box) (ml_backend__ml_unify_gen__BoxType_63));
                }
                {
                  ml_backend__ml_unify_gen__RvalC_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalC_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalC_20, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_64));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalC_20, 2) = ((MR_Box) (ml_backend__ml_unify_gen__UnboxRval_68));
                }
              }
          }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_unify_gen__ArgC_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__RvalC_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__TypeA_16));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_shift_combine_rval_8_p_0(
  MR_Word ml_backend__ml_unify_gen__RvalA_9,
  MR_Integer ml_backend__ml_unify_gen__Shift_10,
  MR_Word ml_backend__ml_unify_gen__MaybeRvalB_11,
  MR_Word * ml_backend__ml_unify_gen__RvalC_12)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__RvalA_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalA_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
    MR_Word ml_backend__ml_unify_gen__ShiftRvalA_15;
    MR_Word ml_backend__ml_unify_gen__Var_28;
    MR_Word ml_backend__ml_unify_gen__Var_24;

    if (ml_backend__ml_unify_gen__succeeded)
      {
        ml_backend__ml_unify_gen__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalA_9, (MR_Integer) 1)));
        ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__Var_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_28, (MR_Integer) 0)))) == (MR_Integer) 9)));
        if (ml_backend__ml_unify_gen__succeeded)
          ml_backend__ml_unify_gen__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_28, (MR_Integer) 1)));
      }
    if (ml_backend__ml_unify_gen__succeeded)
      {
        ml_backend__ml_unify_gen__ShiftRvalA_15 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[4]);
      }
    else
      {
        ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Shift_10 == (MR_Integer) 0);
        if (ml_backend__ml_unify_gen__succeeded)
          ml_backend__ml_unify_gen__ShiftRvalA_15 = ml_backend__ml_unify_gen__RvalA_9;
        else
          {
            MR_Word ml_backend__ml_unify_gen__Rval1_26;
            MR_Word ml_backend__ml_unify_gen__Var_31;
            MR_Word ml_backend__ml_unify_gen__Type_25;

            ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__RvalA_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalA_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (ml_backend__ml_unify_gen__succeeded)
              {
                ml_backend__ml_unify_gen__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalA_9, (MR_Integer) 1)));
                ml_backend__ml_unify_gen__Rval1_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalA_9, (MR_Integer) 2)));
                ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__Var_31)) == (MR_mktag((MR_Integer) 0)));
                if (ml_backend__ml_unify_gen__succeeded)
                  ml_backend__ml_unify_gen__Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_31, (MR_Integer) 0)));
              }
            if (ml_backend__ml_unify_gen__succeeded)
              {
                MR_Word ml_backend__ml_unify_gen__Rval2_27;
                MR_Word ml_backend__ml_unify_gen__Var_33;
                MR_Word ml_backend__ml_unify_gen__Var_34;

                {
                  ml_backend__ml_unify_gen__Var_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_34, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Shift_10));
                }
                {
                  ml_backend__ml_unify_gen__Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_33, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_34));
                }
                {
                  ml_backend__ml_unify_gen__Rval2_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval2_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval2_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval2_27, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Rval1_26));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval2_27, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Var_33));
                }
                {
                  ml_backend__ml_unify_gen__ShiftRvalA_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ShiftRvalA_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ShiftRvalA_15, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_31));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ShiftRvalA_15, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Rval2_27));
                }
              }
            else
              {
                MR_Word ml_backend__ml_unify_gen__Var_37;
                MR_Word ml_backend__ml_unify_gen__Var_38;

                {
                  ml_backend__ml_unify_gen__Var_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_38, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Shift_10));
                }
                {
                  ml_backend__ml_unify_gen__Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_37, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_38));
                }
                {
                  ml_backend__ml_unify_gen__ShiftRvalA_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ShiftRvalA_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ShiftRvalA_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ShiftRvalA_15, 2) = ((MR_Box) (ml_backend__ml_unify_gen__RvalA_9));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ShiftRvalA_15, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Var_37));
                }
              }
          }
      }
    if ((ml_backend__ml_unify_gen__MaybeRvalB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ml_backend__ml_unify_gen__RvalC_12 = ml_backend__ml_unify_gen__ShiftRvalA_15;
    else
      {
        MR_Word ml_backend__ml_unify_gen__RvalB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__MaybeRvalB_11, (MR_Integer) 0)));
        MR_Word ml_backend__ml_unify_gen__UnboxRvalA_45;
        MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_MaybeType_18_53;
        MR_Word ml_backend__ml_unify_gen__Var_56;
        MR_Word ml_backend__ml_unify_gen__TypeA_43;
        MR_Word ml_backend__ml_unify_gen__UnboxRvalA0_44;
        MR_Word ml_backend__ml_unify_gen__Var_52;
        MR_Word ml_backend__ml_unify_gen__UnboxRvalB0_47;
        MR_Word ml_backend__ml_unify_gen__Var_54;
        MR_Word ml_backend__ml_unify_gen__TypeB_46;

        ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__ShiftRvalA_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ShiftRvalA_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (ml_backend__ml_unify_gen__succeeded)
          {
            ml_backend__ml_unify_gen__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ShiftRvalA_15, (MR_Integer) 1)));
            ml_backend__ml_unify_gen__UnboxRvalA0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ShiftRvalA_15, (MR_Integer) 2)));
            ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__Var_52)) == (MR_mktag((MR_Integer) 0)));
            if (ml_backend__ml_unify_gen__succeeded)
              ml_backend__ml_unify_gen__TypeA_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_52, (MR_Integer) 0)));
          }
        if (ml_backend__ml_unify_gen__succeeded)
          {
            ml_backend__ml_unify_gen__UnboxRvalA_45 = ml_backend__ml_unify_gen__UnboxRvalA0_44;
            {
              ml_backend__ml_unify_gen__STATE_VARIABLE_MaybeType_18_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__STATE_VARIABLE_MaybeType_18_53, 0) = ((MR_Box) (ml_backend__ml_unify_gen__TypeA_43));
            }
          }
        else
          {
            ml_backend__ml_unify_gen__UnboxRvalA_45 = ml_backend__ml_unify_gen__ShiftRvalA_15;
            ml_backend__ml_unify_gen__STATE_VARIABLE_MaybeType_18_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        ml_backend__ml_unify_gen__Var_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
        ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__RvalB_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalB_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (ml_backend__ml_unify_gen__succeeded)
          {
            ml_backend__ml_unify_gen__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalB_16, (MR_Integer) 1)));
            ml_backend__ml_unify_gen__UnboxRvalB0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalB_16, (MR_Integer) 2)));
            ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__Var_54)) == (MR_mktag((MR_Integer) 0)));
            if (ml_backend__ml_unify_gen__succeeded)
              ml_backend__ml_unify_gen__TypeB_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_54, (MR_Integer) 0)));
          }
        if (ml_backend__ml_unify_gen__succeeded)
          {
            MR_Word ml_backend__ml_unify_gen__UnboxRval_49;

            {
              ml_backend__ml_unify_gen__UnboxRval_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnboxRval_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnboxRval_49, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_56));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnboxRval_49, 2) = ((MR_Box) (ml_backend__ml_unify_gen__UnboxRvalA_45));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnboxRval_49, 3) = ((MR_Box) (ml_backend__ml_unify_gen__UnboxRvalB0_47));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_unify_gen__RvalC_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_54));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_unify_gen__UnboxRval_49));
            }
          }
        else
          {
            MR_Word ml_backend__ml_unify_gen__UnboxRval_63;

            {
              ml_backend__ml_unify_gen__UnboxRval_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnboxRval_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnboxRval_63, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_56));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnboxRval_63, 2) = ((MR_Box) (ml_backend__ml_unify_gen__UnboxRvalA_45));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnboxRval_63, 3) = ((MR_Box) (ml_backend__ml_unify_gen__RvalB_16));
            }
            if ((ml_backend__ml_unify_gen__STATE_VARIABLE_MaybeType_18_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *ml_backend__ml_unify_gen__RvalC_12 = ml_backend__ml_unify_gen__UnboxRval_63;
            else
              {
                MR_Word ml_backend__ml_unify_gen__BoxType_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__STATE_VARIABLE_MaybeType_18_53, (MR_Integer) 0)));
                MR_Word ml_backend__ml_unify_gen__Var_59;

                {
                  ml_backend__ml_unify_gen__Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_59, 0) = ((MR_Box) (ml_backend__ml_unify_gen__BoxType_58));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *ml_backend__ml_unify_gen__RvalC_12 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_59));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_unify_gen__UnboxRval_63));
                }
              }
          }
      }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_expand_double_word_rvals_4_p_0(
  MR_Word ml_backend__ml_unify_gen__HeadVar__1_1,
  MR_Word * ml_backend__ml_unify_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_unify_gen__HeadVar__3_3,
  MR_Word * ml_backend__ml_unify_gen__HeadVar__4_4)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    if ((ml_backend__ml_unify_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ml_backend__ml_unify_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *ml_backend__ml_unify_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ml_backend__ml_unify_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_expand_double_word_rvals\'/4", (MR_String) "list length mismatch");
            return;
          }
        }
    else
      {
        MR_Word ml_backend__ml_unify_gen__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_unify_gen__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__1_1, (MR_Integer) 0)));

        if ((ml_backend__ml_unify_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_expand_double_word_rvals\'/4", (MR_String) "list length mismatch");
              return;
            }
          }
        else
          {
            MR_Word ml_backend__ml_unify_gen__Rval0_8;
            MR_Word ml_backend__ml_unify_gen__RvalsTypes0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word ml_backend__ml_unify_gen__Widths1_12;
            MR_Word ml_backend__ml_unify_gen__RvalsTypes1_13;
            MR_Word ml_backend__ml_unify_gen__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word ml_backend__ml_unify_gen__Type0_9;

            ml_backend__ml_unify_gen__Rval0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_21, (MR_Integer) 0)));
            ml_backend__ml_unify_gen__Type0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_21, (MR_Integer) 1)));
            {
              ml_backend__ml_unify_gen__ml_expand_double_word_rvals_4_p_0(ml_backend__ml_unify_gen__Var_54, &ml_backend__ml_unify_gen__Widths1_12, ml_backend__ml_unify_gen__RvalsTypes0_10, &ml_backend__ml_unify_gen__RvalsTypes1_13);
            }
            switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__Var_55)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(ml_backend__ml_unify_gen__Var_55)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *ml_backend__ml_unify_gen__HeadVar__2_2 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Var_55));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Widths1_12));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *ml_backend__ml_unify_gen__HeadVar__4_4 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Var_21));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__RvalsTypes1_13));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ml_backend__ml_unify_gen__SubstType_18;
                      MR_Word ml_backend__ml_unify_gen__RvalA_19;
                      MR_Word ml_backend__ml_unify_gen__RvalB_20;
                      MR_Word ml_backend__ml_unify_gen__Var_34;
                      MR_Word ml_backend__ml_unify_gen__Var_36;
                      MR_Word ml_backend__ml_unify_gen__Var_37;
                      MR_Word ml_backend__ml_unify_gen__Var_38;
                      MR_Word ml_backend__ml_unify_gen__Var_22;
                      MR_Word ml_backend__ml_unify_gen__Var_17;

                      ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__Rval0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval0_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (ml_backend__ml_unify_gen__succeeded)
                        {
                          ml_backend__ml_unify_gen__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval0_8, (MR_Integer) 1)));
                          ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__Var_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_22, (MR_Integer) 0)))) == (MR_Integer) 9)));
                          if (ml_backend__ml_unify_gen__succeeded)
                            ml_backend__ml_unify_gen__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_22, (MR_Integer) 1)));
                        }
                      if (ml_backend__ml_unify_gen__succeeded)
                        {
                          ml_backend__ml_unify_gen__SubstType_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
                          ml_backend__ml_unify_gen__RvalA_19 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[10]);
                          ml_backend__ml_unify_gen__RvalB_20 = ml_backend__ml_unify_gen__RvalA_19;
                        }
                      else
                        {
                          ml_backend__ml_unify_gen__SubstType_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                          {
                            ml_backend__ml_unify_gen__RvalA_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalA_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalA_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 54))));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalA_19, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Rval0_8));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalA_19, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[4])));
                          }
                          {
                            ml_backend__ml_unify_gen__RvalB_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalB_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalB_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 54))));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalB_20, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Rval0_8));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalB_20, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[7])));
                          }
                        }
                      {
                        ml_backend__ml_unify_gen__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_34, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Widths1_12));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *ml_backend__ml_unify_gen__HeadVar__2_2 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_34));
                      }
                      {
                        ml_backend__ml_unify_gen__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_36, 0) = ((MR_Box) (ml_backend__ml_unify_gen__RvalA_19));
                        MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_36, 1) = ((MR_Box) (ml_backend__ml_unify_gen__SubstType_18));
                      }
                      {
                        ml_backend__ml_unify_gen__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_38, 0) = ((MR_Box) (ml_backend__ml_unify_gen__RvalB_20));
                        MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_38, 1) = ((MR_Box) (ml_backend__ml_unify_gen__SubstType_18));
                      }
                      {
                        ml_backend__ml_unify_gen__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_37, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Var_38));
                        MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_37, 1) = ((MR_Box) (ml_backend__ml_unify_gen__RvalsTypes1_13));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *ml_backend__ml_unify_gen__HeadVar__4_4 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Var_36));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_37));
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
                    *ml_backend__ml_unify_gen__HeadVar__2_2 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Var_55));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Widths1_12));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__ml_unify_gen__HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Var_21));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__RvalsTypes1_13));
                  }
                }
                break;
            }
          }
      }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_arg_7_p_0(
  MR_Word ml_backend__ml_unify_gen__Info_8,
  MR_Word ml_backend__ml_unify_gen__ConstStructMap_9,
  MR_Word ml_backend__ml_unify_gen__ConstArg_10,
  MR_Word ml_backend__ml_unify_gen__DoubleWidth_11,
  MR_Word * ml_backend__ml_unify_gen__Rval_12,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_23,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_24)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Info_8, (MR_Integer) 0)));
    MR_Word ml_backend__ml_unify_gen__Rval0_17;
    MR_Word ml_backend__ml_unify_gen__MLDS_Type_19;
    MR_Word ml_backend__ml_unify_gen__Var_25;
    MR_Word ml_backend__ml_unify_gen__Var_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Info_8, (MR_Integer) 1)))) & (MR_Integer) 3);
    MR_Word ml_backend__ml_unify_gen__Var_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Info_8, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    if (((MR_tag((MR_Word) ml_backend__ml_unify_gen__ConstArg_10)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Integer ml_backend__ml_unify_gen__StructNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstArg_10, (MR_Integer) 0)));
        MR_Word ml_backend__ml_unify_gen__GroundTerm_16;
        MR_Box ml_backend__ml_unify_gen__conv0_GroundTerm_16;
        MR_Word ml_backend__ml_unify_gen___Type_18;

        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ml_backend__ml_unify_gen__ConstStructMap_9, ml_backend__ml_unify_gen__StructNum_15, &ml_backend__ml_unify_gen__conv0_GroundTerm_16);
        }
        ml_backend__ml_unify_gen__GroundTerm_16 = ((MR_Word) ml_backend__ml_unify_gen__conv0_GroundTerm_16);
        ml_backend__ml_unify_gen__Rval0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_16, (MR_Integer) 0)));
        ml_backend__ml_unify_gen___Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_16, (MR_Integer) 1)));
        ml_backend__ml_unify_gen__MLDS_Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_16, (MR_Integer) 2)));
      }
    else
      {
        MR_Word ml_backend__ml_unify_gen__ConsId_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ConstArg_10, (MR_Integer) 0)));
        MR_Word ml_backend__ml_unify_gen__Type_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ConstArg_10, (MR_Integer) 1)));
        MR_Word ml_backend__ml_unify_gen__ConsTag_22;

        {
          ml_backend__ml_unify_gen__ConsTag_22 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_14, ml_backend__ml_unify_gen__ConsId_20);
        }
        {
          ml_backend__ml_unify_gen__MLDS_Type_19 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_14, ml_backend__ml_unify_gen__Type_21);
        }
        {
          ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_50_93_95_48_6_p_0(ml_backend__ml_unify_gen__ModuleInfo_14, ml_backend__ml_unify_gen__ConsTag_22, ml_backend__ml_unify_gen__Type_21, ml_backend__ml_unify_gen__MLDS_Type_19, &ml_backend__ml_unify_gen__Rval0_17);
        }
      }
    {
      ml_backend__ml_unify_gen__Var_25 = mercury__term__context_init_0_f_0();
    }
    {
      ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ml_backend__ml_unify_gen__ModuleInfo_14, ml_backend__ml_unify_gen__Var_25, ml_backend__ml_unify_gen__MLDS_Type_19, ml_backend__ml_unify_gen__DoubleWidth_11, ml_backend__ml_unify_gen__Rval0_17, ml_backend__ml_unify_gen__Rval_12, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_23, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_24);
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_args_6_p_0(
  MR_Word ml_backend__ml_unify_gen__Info_1,
  MR_Word ml_backend__ml_unify_gen__ConstStructMap_2,
  MR_Word ml_backend__ml_unify_gen__HeadVar__3_3,
  MR_Word * ml_backend__ml_unify_gen__HeadVar__4_4,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_5,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_6)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    if ((ml_backend__ml_unify_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_unify_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_6 = ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_5;
      }
    else
      {
        MR_Word ml_backend__ml_unify_gen__Arg_14;
        MR_Word ml_backend__ml_unify_gen__ConsArgWidth_15;
        MR_Word ml_backend__ml_unify_gen__ArgConsArgWidths_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_unify_gen__ArgRval_17;
        MR_Word ml_backend__ml_unify_gen__ArgRvals_18;
        MR_Word ml_backend__ml_unify_gen__DoubleWidth_20;
        MR_Word ml_backend__ml_unify_gen__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_24_24;
        MR_Word ml_backend__ml_unify_gen__ModuleInfo_39;
        MR_Word ml_backend__ml_unify_gen__Rval0_42;
        MR_Word ml_backend__ml_unify_gen__MLDS_Type_44;
        MR_Word ml_backend__ml_unify_gen__Var_48;
        MR_Word ml_backend__ml_unify_gen__Var_50;
        MR_Word ml_backend__ml_unify_gen__Var_51;

        ml_backend__ml_unify_gen__Arg_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_23, (MR_Integer) 0)));
        ml_backend__ml_unify_gen__ConsArgWidth_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_23, (MR_Integer) 1)));
        switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__ConsArgWidth_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ml_backend__ml_unify_gen__ConsArgWidth_15)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ml_backend__ml_unify_gen__DoubleWidth_20 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                ml_backend__ml_unify_gen__DoubleWidth_20 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            ml_backend__ml_unify_gen__DoubleWidth_20 = (MR_Integer) 0;
            break;
        }
        ml_backend__ml_unify_gen__ModuleInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Info_1, (MR_Integer) 0)));
        ml_backend__ml_unify_gen__Var_50 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Info_1, (MR_Integer) 1)))) & (MR_Integer) 3);
        ml_backend__ml_unify_gen__Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Info_1, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        if (((MR_tag((MR_Word) ml_backend__ml_unify_gen__Arg_14)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Integer ml_backend__ml_unify_gen__StructNum_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Arg_14, (MR_Integer) 0)));
            MR_Word ml_backend__ml_unify_gen__GroundTerm_41;
            MR_Box ml_backend__ml_unify_gen__conv0_GroundTerm_41;
            MR_Word ml_backend__ml_unify_gen___Type_43;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ml_backend__ml_unify_gen__ConstStructMap_2, ml_backend__ml_unify_gen__StructNum_40, &ml_backend__ml_unify_gen__conv0_GroundTerm_41);
            }
            ml_backend__ml_unify_gen__GroundTerm_41 = ((MR_Word) ml_backend__ml_unify_gen__conv0_GroundTerm_41);
            ml_backend__ml_unify_gen__Rval0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_41, (MR_Integer) 0)));
            ml_backend__ml_unify_gen___Type_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_41, (MR_Integer) 1)));
            ml_backend__ml_unify_gen__MLDS_Type_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_41, (MR_Integer) 2)));
          }
        else
          {
            MR_Word ml_backend__ml_unify_gen__ConsId_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Arg_14, (MR_Integer) 0)));
            MR_Word ml_backend__ml_unify_gen__Type_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Arg_14, (MR_Integer) 1)));
            MR_Word ml_backend__ml_unify_gen__ConsTag_47;

            {
              ml_backend__ml_unify_gen__ConsTag_47 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_39, ml_backend__ml_unify_gen__ConsId_45);
            }
            {
              ml_backend__ml_unify_gen__MLDS_Type_44 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_39, ml_backend__ml_unify_gen__Type_46);
            }
            {
              ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_50_93_95_48_6_p_0(ml_backend__ml_unify_gen__ModuleInfo_39, ml_backend__ml_unify_gen__ConsTag_47, ml_backend__ml_unify_gen__Type_46, ml_backend__ml_unify_gen__MLDS_Type_44, &ml_backend__ml_unify_gen__Rval0_42);
            }
          }
        {
          ml_backend__ml_unify_gen__Var_48 = mercury__term__context_init_0_f_0();
        }
        {
          ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ml_backend__ml_unify_gen__ModuleInfo_39, ml_backend__ml_unify_gen__Var_48, ml_backend__ml_unify_gen__MLDS_Type_44, ml_backend__ml_unify_gen__DoubleWidth_20, ml_backend__ml_unify_gen__Rval0_42, &ml_backend__ml_unify_gen__ArgRval_17, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_5, &ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_24_24);
        }
        {
          ml_backend__ml_unify_gen__ml_gen_const_struct_args_6_p_0(ml_backend__ml_unify_gen__Info_1, ml_backend__ml_unify_gen__ConstStructMap_2, ml_backend__ml_unify_gen__ArgConsArgWidths_16, &ml_backend__ml_unify_gen__ArgRvals_18, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_24_24, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_unify_gen__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ArgRval_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ArgRvals_18));
        }
      }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_4(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_unify_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;
    MR_Word ml_backend__ml_unify_gen__conv4_LambdaHeadVar__2_84;

    {
      ml_backend__ml_unify_gen__conv4_LambdaHeadVar__2_84 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__3014__1_1_f_0(((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_1));
    }
    ml_backend__ml_unify_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_unify_gen__conv4_LambdaHeadVar__2_84));
    return ml_backend__ml_unify_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_3(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_4,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_5,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_6,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_7,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_8)
{
  {
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;
    MR_Word ml_backend__ml_unify_gen__conv1_RvalC_12;

    {
      ml_backend__ml_unify_gen__ml_shift_combine_rval_8_p_0(((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_1), ((MR_Integer) ml_backend__ml_unify_gen__wrapper_arg_2), ((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_3), &ml_backend__ml_unify_gen__conv1_RvalC_12);
    }
    *ml_backend__ml_unify_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_unify_gen__conv1_RvalC_12));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_2(
  MR_Box ml_backend__ml_unify_gen__closure_arg)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;

    {
      ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_const_static_compound__2971__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_unify_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;
    MR_Word ml_backend__ml_unify_gen__conv0_LambdaHeadVar__2_62;

    {
      ml_backend__ml_unify_gen__conv0_LambdaHeadVar__2_62 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_const_static_compound__2966__1_1_f_0(((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_1));
    }
    ml_backend__ml_unify_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_unify_gen__conv0_LambdaHeadVar__2_62));
    return ml_backend__ml_unify_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(
  MR_Word ml_backend__ml_unify_gen__Info_14,
  MR_Integer ml_backend__ml_unify_gen__ConstNum_15,
  MR_Word ml_backend__ml_unify_gen__Type_16,
  MR_Word ml_backend__ml_unify_gen__MLDS_Type_17,
  MR_Word ml_backend__ml_unify_gen__ConsId_18,
  MR_Word ml_backend__ml_unify_gen__ConsTag_19,
  MR_Integer ml_backend__ml_unify_gen__Ptag_20,
  MR_Word ml_backend__ml_unify_gen__ExtraInitializers_21,
  MR_Word ml_backend__ml_unify_gen__Args_22,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_0_56,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_57,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_58,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_59)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__ConsId_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsId_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_129_129;
    MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_130_130;
    MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_131_131;
    MR_Word ml_backend__ml_unify_gen__Target_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Info_14, (MR_Integer) 1)))) & (MR_Integer) 3);
    MR_Word ml_backend__ml_unify_gen__ModuleInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Info_14, (MR_Integer) 0)));
    MR_Word ml_backend__ml_unify_gen__ConsArgWidths_33;
    MR_Word ml_backend__ml_unify_gen__HighLevelData_38;
    MR_Word ml_backend__ml_unify_gen__ArgRvals1_40;
    MR_Word ml_backend__ml_unify_gen__ArgRvals_41;
    MR_Word ml_backend__ml_unify_gen__ArgInitializers_44;
    MR_Word ml_backend__ml_unify_gen__SubInitializers_46;
    MR_Word ml_backend__ml_unify_gen__ConstType_47;
    MR_Word ml_backend__ml_unify_gen__Initializer_49;
    MR_Word ml_backend__ml_unify_gen__ModuleName_50;
    MR_Word ml_backend__ml_unify_gen__MLDS_ModuleName_51;
    MR_Word ml_backend__ml_unify_gen__ConstDataAddrRval_52;
    MR_Word ml_backend__ml_unify_gen__TaggedRval_53;
    MR_Word ml_backend__ml_unify_gen__Rval_54;
    MR_Word ml_backend__ml_unify_gen__GroundTerm_55;
    MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_75_75;
    MR_Word ml_backend__ml_unify_gen__Var_85;
    MR_Word ml_backend__ml_unify_gen__Var_86;
    MR_Word ml_backend__ml_unify_gen__Var_88;
    MR_Word ml_backend__ml_unify_gen__Var_90;
    MR_Word ml_backend__ml_unify_gen__Var_96 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Info_14, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ml_backend__ml_unify_gen__Var_27;
    MR_Integer ml_backend__ml_unify_gen__Var_28;
    MR_Word ml_backend__ml_unify_gen__Var_29;
    MR_Word ml_backend__ml_unify_gen__Var_109;
    MR_Word ml_backend__ml_unify_gen__Var_110;
    MR_Box ml_backend__ml_unify_gen__conv3_Var_42;
    MR_Box ml_backend__ml_unify_gen__conv2_Var_43;
    MR_Word ml_backend__ml_unify_gen__Var_48;

    if (ml_backend__ml_unify_gen__succeeded)
      {
        ml_backend__ml_unify_gen__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsId_18, (MR_Integer) 1)));
        ml_backend__ml_unify_gen__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsId_18, (MR_Integer) 2)));
        ml_backend__ml_unify_gen__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsId_18, (MR_Integer) 3)));
        {
          ml_backend__ml_unify_gen__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(ml_backend__ml_unify_gen__Type_16);
        }
        ml_backend__ml_unify_gen__succeeded = !(ml_backend__ml_unify_gen__succeeded);
      }
    if (ml_backend__ml_unify_gen__succeeded)
      {
        MR_Word ml_backend__ml_unify_gen__TypeCtor_30;
        MR_Word ml_backend__ml_unify_gen__ConsDefn_31;

        {
          parse_tree__prog_type__type_to_ctor_det_2_p_0(ml_backend__ml_unify_gen__Type_16, &ml_backend__ml_unify_gen__TypeCtor_30);
        }
        {
          ml_backend__ml_unify_gen__succeeded = check_hlds__type_util__get_cons_defn_4_p_0(ml_backend__ml_unify_gen__ModuleInfo_26, ml_backend__ml_unify_gen__TypeCtor_30, ml_backend__ml_unify_gen__ConsId_18, &ml_backend__ml_unify_gen__ConsDefn_31);
        }
        if (ml_backend__ml_unify_gen__succeeded)
          {
            MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_111_111 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
            MR_Word ml_backend__ml_unify_gen__ConsArgDefns_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_31, (MR_Integer) 6)));
            MR_Integer ml_backend__ml_unify_gen__NumExtraArgs_35;
            MR_Integer ml_backend__ml_unify_gen__Var_63;
            MR_Integer ml_backend__ml_unify_gen__Var_64;
            MR_Word ml_backend__ml_unify_gen__Var_65;
            MR_Word ml_backend__ml_unify_gen__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_31, (MR_Integer) 0)));
            MR_Word ml_backend__ml_unify_gen__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_31, (MR_Integer) 1)));
            MR_Word ml_backend__ml_unify_gen__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_31, (MR_Integer) 2)));
            MR_Word ml_backend__ml_unify_gen__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_31, (MR_Integer) 3)));
            MR_Word ml_backend__ml_unify_gen__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_31, (MR_Integer) 4)));
            MR_Word ml_backend__ml_unify_gen__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_31, (MR_Integer) 5)));
            MR_Word ml_backend__ml_unify_gen__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_31, (MR_Integer) 7)));

            {
              ml_backend__ml_unify_gen__ConsArgWidths_33 = mercury__list__map_2_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_111_111, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[10], ml_backend__ml_unify_gen__ConsArgDefns_32);
            }
            {
              ml_backend__ml_unify_gen__Var_63 = mercury__list__length_1_f_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, ml_backend__ml_unify_gen__Args_22);
            }
            {
              ml_backend__ml_unify_gen__Var_64 = mercury__list__length_1_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_111_111, ml_backend__ml_unify_gen__ConsArgDefns_32);
            }
            ml_backend__ml_unify_gen__NumExtraArgs_35 = (ml_backend__ml_unify_gen__Var_63 - ml_backend__ml_unify_gen__Var_64);
            {
              ml_backend__ml_unify_gen__Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_65, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[4]));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_65, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0_2));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_65, 3) = ((MR_Box) (ml_backend__ml_unify_gen__NumExtraArgs_35));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_65, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            {
              mercury__require__expect_4_p_0(ml_backend__ml_unify_gen__Var_65, (MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_static_compound\'/13", (MR_String) "extra args in static const struct");
            }
          }
        else
          {
            MR_Word ml_backend__ml_unify_gen__Var_36;

            {
              ml_backend__ml_unify_gen__succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(ml_backend__ml_unify_gen__Type_16, &ml_backend__ml_unify_gen__Var_36);
            }
            if (ml_backend__ml_unify_gen__succeeded)
              {
                MR_Integer ml_backend__ml_unify_gen__Length_37;

                {
                  ml_backend__ml_unify_gen__Length_37 = mercury__list__length_1_f_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, ml_backend__ml_unify_gen__Args_22);
                }
                {
                  ml_backend__ml_unify_gen__ConsArgWidths_33 = mercury__list__duplicate_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, ml_backend__ml_unify_gen__Length_37, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
                }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_static_compound\'/13", (MR_String) "get_cons_defn failed");
                  return;
                }
              }
          }
      }
    else
      {
        MR_Integer ml_backend__ml_unify_gen__Length_93;

        {
          ml_backend__ml_unify_gen__Length_93 = mercury__list__length_1_f_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, ml_backend__ml_unify_gen__Args_22);
        }
        {
          ml_backend__ml_unify_gen__ConsArgWidths_33 = mercury__list__duplicate_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, ml_backend__ml_unify_gen__Length_93, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
        }
      }
    ml_backend__ml_unify_gen__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Info_14, (MR_Integer) 0)));
    ml_backend__ml_unify_gen__Var_110 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Info_14, (MR_Integer) 1)))) & (MR_Integer) 3);
    ml_backend__ml_unify_gen__HighLevelData_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Info_14, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    switch (ml_backend__ml_unify_gen__HighLevelData_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_unify_gen__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 1:
        ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Target_25 == (MR_Integer) 2);
        break;
    }
    if (ml_backend__ml_unify_gen__succeeded)
      {
        MR_Word ml_backend__ml_unify_gen__ArgConsArgWidths_39;

        {
          mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, ml_backend__ml_unify_gen__Args_22, ml_backend__ml_unify_gen__ConsArgWidths_33, &ml_backend__ml_unify_gen__ArgConsArgWidths_39);
        }
        {
          ml_backend__ml_unify_gen__ml_gen_const_struct_args_6_p_0(ml_backend__ml_unify_gen__Info_14, ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_0_56, ml_backend__ml_unify_gen__ArgConsArgWidths_39, &ml_backend__ml_unify_gen__ArgRvals1_40, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_58, &ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_75_75);
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ml_unify_gen.m", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_static_compound\'/13", (MR_String) "Constant structures are not supported for this grade");
          return;
        }
      }
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    ml_backend__ml_unify_gen__TypeCtorInfo_129_129 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
    ml_backend__ml_unify_gen__TypeCtorInfo_130_130 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
    {
      backend_libs__arg_pack__pack_args_8_p_0(ml_backend__ml_unify_gen__TypeCtorInfo_129_129, ml_backend__ml_unify_gen__TypeCtorInfo_130_130, ml_backend__ml_unify_gen__TypeCtorInfo_130_130, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[11], ml_backend__ml_unify_gen__ConsArgWidths_33, ml_backend__ml_unify_gen__ArgRvals1_40, &ml_backend__ml_unify_gen__ArgRvals_41, ((MR_Box) ((MR_Integer) 0)), &ml_backend__ml_unify_gen__conv3_Var_42, ((MR_Box) ((MR_Integer) 0)), &ml_backend__ml_unify_gen__conv2_Var_43);
    }
    ml_backend__ml_unify_gen__TypeCtorInfo_131_131 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
    {
      ml_backend__ml_unify_gen__ArgInitializers_44 = mercury__list__map_2_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_129_129, ml_backend__ml_unify_gen__TypeCtorInfo_131_131, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[12], ml_backend__ml_unify_gen__ArgRvals_41);
    }
    {
      ml_backend__ml_unify_gen__SubInitializers_46 = mercury__list__f_43_43_2_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_131_131, ml_backend__ml_unify_gen__ExtraInitializers_21, ml_backend__ml_unify_gen__ArgInitializers_44);
    }
    {
      ml_backend__ml_unify_gen__Var_85 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ml_backend__ml_unify_gen__ConsTag_19);
    }
    {
      ml_backend__ml_unify_gen__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_86, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ConsId_18));
    }
    {
      ml_backend__ml_unify_gen__ConstType_47 = ml_backend__ml_unify_gen__get_const_type_for_cons_id_5_f_0(ml_backend__ml_unify_gen__Target_25, ml_backend__ml_unify_gen__HighLevelData_38, ml_backend__ml_unify_gen__MLDS_Type_17, ml_backend__ml_unify_gen__Var_85, ml_backend__ml_unify_gen__Var_86);
    }
    ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__ConstType_47)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstType_47, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (ml_backend__ml_unify_gen__succeeded)
      {
        ml_backend__ml_unify_gen__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstType_47, (MR_Integer) 1)));
        {
          ml_backend__ml_unify_gen__Initializer_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Initializer_49, 0) = ((MR_Box) (ml_backend__ml_unify_gen__SubInitializers_46));
        }
      }
    else
      {
        ml_backend__ml_unify_gen__Initializer_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Initializer_49, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ConstType_47));
        MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Initializer_49, 1) = ((MR_Box) (ml_backend__ml_unify_gen__SubInitializers_46));
      }
    {
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_unify_gen__ModuleInfo_26, &ml_backend__ml_unify_gen__ModuleName_50);
    }
    {
      ml_backend__ml_unify_gen__MLDS_ModuleName_51 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_unify_gen__ModuleName_50);
    }
    {
      ml_backend__ml_unify_gen__Var_88 = mercury__term__context_init_0_f_0();
    }
    {
      ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0(ml_backend__ml_unify_gen__MLDS_ModuleName_51, (MR_Integer) 0, ml_backend__ml_unify_gen__ConstType_47, ml_backend__ml_unify_gen__Initializer_49, ml_backend__ml_unify_gen__Var_88, &ml_backend__ml_unify_gen__ConstDataAddrRval_52, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_75_75, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_59);
    }
    ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Ptag_20 == (MR_Integer) 0);
    if (ml_backend__ml_unify_gen__succeeded)
      ml_backend__ml_unify_gen__TaggedRval_53 = ml_backend__ml_unify_gen__ConstDataAddrRval_52;
    else
      {
        ml_backend__ml_unify_gen__TaggedRval_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__TaggedRval_53, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Ptag_20));
        MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__TaggedRval_53, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ConstDataAddrRval_52));
      }
    {
      ml_backend__ml_unify_gen__Var_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_90, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_17));
    }
    {
      ml_backend__ml_unify_gen__Rval_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_54, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_90));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_54, 2) = ((MR_Box) (ml_backend__ml_unify_gen__TaggedRval_53));
    }
    {
      ml_backend__ml_unify_gen__GroundTerm_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_55, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_54));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_55, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Type_16));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_55, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_17));
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ml_backend__ml_unify_gen__ConstNum_15, ((MR_Box) (ml_backend__ml_unify_gen__GroundTerm_55)), ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_0_56, ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_57);
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_tag_11_p_0(
  MR_Word ml_backend__ml_unify_gen__Info_12,
  MR_Integer ml_backend__ml_unify_gen__ConstNum_13,
  MR_Word ml_backend__ml_unify_gen__Type_14,
  MR_Word ml_backend__ml_unify_gen__MLDS_Type_15,
  MR_Word ml_backend__ml_unify_gen__ConsId_16,
  MR_Word ml_backend__ml_unify_gen__ConsTag_17,
  MR_Word ml_backend__ml_unify_gen__Args_18,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_0_68,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_69,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_70,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_71)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_unify_gen__succeeded;

        switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__ConsTag_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ml_backend__ml_unify_gen__ConsTag_17)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(ml_backend__ml_unify_gen__Info_12, ml_backend__ml_unify_gen__ConstNum_13, ml_backend__ml_unify_gen__Type_14, ml_backend__ml_unify_gen__MLDS_Type_15, ml_backend__ml_unify_gen__ConsId_16, ml_backend__ml_unify_gen__ConsTag_17, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_unify_gen__Args_18, ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_0_68, ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_69, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_70, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_71);
                  }
                }
                break;
              case (MR_Integer) 1:
                if ((ml_backend__ml_unify_gen__Args_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "no_tag arity != 1");
                      return;
                    }
                  }
                else
                  {
                    MR_Word ml_backend__ml_unify_gen__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Args_18, (MR_Integer) 1)));
                    MR_Word ml_backend__ml_unify_gen__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Args_18, (MR_Integer) 0)));

                    if ((ml_backend__ml_unify_gen__Var_107 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word ml_backend__ml_unify_gen__ArgRval_26;
                        MR_Word ml_backend__ml_unify_gen__Rval_27;
                        MR_Word ml_backend__ml_unify_gen__GroundTerm_28;

                        {
                          ml_backend__ml_unify_gen__ml_gen_const_struct_arg_7_p_0(ml_backend__ml_unify_gen__Info_12, ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_0_68, ml_backend__ml_unify_gen__Var_108, (MR_Integer) 0, &ml_backend__ml_unify_gen__ArgRval_26, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_70, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_71);
                        }
                        {
                          ml_backend__ml_unify_gen__Rval_27 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(ml_backend__ml_unify_gen__MLDS_Type_15, ml_backend__ml_unify_gen__ConsTag_17, ml_backend__ml_unify_gen__ArgRval_26);
                        }
                        {
                          ml_backend__ml_unify_gen__GroundTerm_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_28, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_27));
                          MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_28, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Type_14));
                          MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_28, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_15));
                        }
                        {
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ml_backend__ml_unify_gen__ConstNum_13, ((MR_Box) (ml_backend__ml_unify_gen__GroundTerm_28)), ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_0_68, ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_69);
                        }
                      }
                    else
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "no_tag arity != 1");
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
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_17, (MR_Integer) 0)))) {
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
              case (MR_Integer) 11:
              case (MR_Integer) 15:
              case (MR_Integer) 16:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "unexpected tag");
                    return;
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Integer ml_backend__ml_unify_gen__Ptag_105 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_17, (MR_Integer) 1)));

                  {
                    ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(ml_backend__ml_unify_gen__Info_12, ml_backend__ml_unify_gen__ConstNum_13, ml_backend__ml_unify_gen__Type_14, ml_backend__ml_unify_gen__MLDS_Type_15, ml_backend__ml_unify_gen__ConsId_16, ml_backend__ml_unify_gen__ConsTag_17, ml_backend__ml_unify_gen__Ptag_105, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_unify_gen__Args_18, ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_0_68, ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_69, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_70, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_71);
                  }
                }
                break;
              case (MR_Integer) 13:
                if ((ml_backend__ml_unify_gen__Args_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "no_tag arity != 1");
                      return;
                    }
                  }
                else
                  {
                    MR_Word ml_backend__ml_unify_gen__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Args_18, (MR_Integer) 1)));
                    MR_Word ml_backend__ml_unify_gen__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Args_18, (MR_Integer) 0)));

                    if ((ml_backend__ml_unify_gen__Var_107 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word ml_backend__ml_unify_gen__ArgRval_26;
                        MR_Word ml_backend__ml_unify_gen__Rval_27;
                        MR_Word ml_backend__ml_unify_gen__GroundTerm_28;

                        {
                          ml_backend__ml_unify_gen__ml_gen_const_struct_arg_7_p_0(ml_backend__ml_unify_gen__Info_12, ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_0_68, ml_backend__ml_unify_gen__Var_108, (MR_Integer) 0, &ml_backend__ml_unify_gen__ArgRval_26, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_70, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_71);
                        }
                        {
                          ml_backend__ml_unify_gen__Rval_27 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(ml_backend__ml_unify_gen__MLDS_Type_15, ml_backend__ml_unify_gen__ConsTag_17, ml_backend__ml_unify_gen__ArgRval_26);
                        }
                        {
                          ml_backend__ml_unify_gen__GroundTerm_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_28, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_27));
                          MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_28, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Type_14));
                          MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_28, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_15));
                        }
                        {
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ml_backend__ml_unify_gen__ConstNum_13, ((MR_Box) (ml_backend__ml_unify_gen__GroundTerm_28)), ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_0_68, ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_69);
                        }
                      }
                    else
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_const_struct_tag\'/11", (MR_String) "no_tag arity != 1");
                          return;
                        }
                      }
                  }
                break;
              case (MR_Integer) 14:
                {
                  MR_Integer ml_backend__ml_unify_gen__Ptag_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_17, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_unify_gen__ExtraInitializers_33;
                  MR_Integer ml_backend__ml_unify_gen__Stag_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_17, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_unify_gen__Target_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Info_12, (MR_Integer) 1)))) & (MR_Integer) 3);
                  MR_Word ml_backend__ml_unify_gen__UsesConstructors_36;
                  MR_Word ml_backend__ml_unify_gen__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Info_12, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_unify_gen__Var_92 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Info_12, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

                  {
                    ml_backend__ml_unify_gen__UsesConstructors_36 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(ml_backend__ml_unify_gen__Target_35);
                  }
                  switch (ml_backend__ml_unify_gen__UsesConstructors_36) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__ml_unify_gen__StagRval0_37;
                        MR_Word ml_backend__ml_unify_gen__HighLevelData_38;
                        MR_Word ml_backend__ml_unify_gen__StagRval_39;
                        MR_Word ml_backend__ml_unify_gen__Var_75;
                        MR_Word ml_backend__ml_unify_gen__Var_78;
                        MR_Word ml_backend__ml_unify_gen__Var_93;
                        MR_Word ml_backend__ml_unify_gen__Var_94;

                        {
                          ml_backend__ml_unify_gen__Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_75, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Stag_34));
                        }
                        {
                          ml_backend__ml_unify_gen__StagRval0_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__StagRval0_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__StagRval0_37, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_75));
                        }
                        ml_backend__ml_unify_gen__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Info_12, (MR_Integer) 0)));
                        ml_backend__ml_unify_gen__Var_94 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Info_12, (MR_Integer) 1)))) & (MR_Integer) 3);
                        ml_backend__ml_unify_gen__HighLevelData_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Info_12, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                        switch (ml_backend__ml_unify_gen__HighLevelData_38) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              {
                                ml_backend__ml_unify_gen__StagRval_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__StagRval_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__StagRval_39, 1) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[9]));
                                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__StagRval_39, 2) = ((MR_Box) (ml_backend__ml_unify_gen__StagRval0_37));
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            ml_backend__ml_unify_gen__StagRval_39 = ml_backend__ml_unify_gen__StagRval0_37;
                            break;
                        }
                        {
                          ml_backend__ml_unify_gen__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_78, 0) = ((MR_Box) (ml_backend__ml_unify_gen__StagRval_39));
                        }
                        {
                          ml_backend__ml_unify_gen__ExtraInitializers_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ExtraInitializers_33, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Var_78));
                          MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ExtraInitializers_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      ml_backend__ml_unify_gen__ExtraInitializers_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      break;
                  }
                  {
                    ml_backend__ml_unify_gen__ml_gen_const_static_compound_13_p_0(ml_backend__ml_unify_gen__Info_12, ml_backend__ml_unify_gen__ConstNum_13, ml_backend__ml_unify_gen__Type_14, ml_backend__ml_unify_gen__MLDS_Type_15, ml_backend__ml_unify_gen__ConsId_16, ml_backend__ml_unify_gen__ConsTag_17, ml_backend__ml_unify_gen__Ptag_32, ml_backend__ml_unify_gen__ExtraInitializers_33, ml_backend__ml_unify_gen__Args_18, ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_0_68, ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_69, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_70, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_71);
                  }
                }
                break;
              case (MR_Integer) 17:
                {
                  MR_Word ml_backend__ml_unify_gen__ThisTag_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_17, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_unify_gen__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_17, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_unify_gen__next_value_of_ConsTag_17 = ml_backend__ml_unify_gen__ThisTag_22;

                    ml_backend__ml_unify_gen__ConsTag_17 = ml_backend__ml_unify_gen__next_value_of_ConsTag_17;
                  }
                  continue;
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_struct_6_p_0(
  MR_Word ml_backend__ml_unify_gen__Info_7,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_0_19,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_20,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_21,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_22)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Integer ml_backend__ml_unify_gen__ConstNum_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word ml_backend__ml_unify_gen__ConstStruct_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word ml_backend__ml_unify_gen__ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstStruct_9, (MR_Integer) 0)));
    MR_Word ml_backend__ml_unify_gen__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstStruct_9, (MR_Integer) 1)));
    MR_Word ml_backend__ml_unify_gen__Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstStruct_9, (MR_Integer) 2)));
    MR_Word ml_backend__ml_unify_gen__ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Info_7, (MR_Integer) 0)));
    MR_Word ml_backend__ml_unify_gen__MLDS_Type_17;
    MR_Word ml_backend__ml_unify_gen__ConsTag_18;
    MR_Word ml_backend__ml_unify_gen___Inst_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstStruct_9, (MR_Integer) 3)));
    MR_Word ml_backend__ml_unify_gen__Var_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Info_7, (MR_Integer) 1)))) & (MR_Integer) 3);
    MR_Word ml_backend__ml_unify_gen__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Info_7, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    {
      ml_backend__ml_unify_gen__MLDS_Type_17 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_16, ml_backend__ml_unify_gen__Type_14);
    }
    {
      ml_backend__ml_unify_gen__ConsTag_18 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_16, ml_backend__ml_unify_gen__ConsId_12);
    }
    {
      ml_backend__ml_unify_gen__ml_gen_const_struct_tag_11_p_0(ml_backend__ml_unify_gen__Info_7, ml_backend__ml_unify_gen__ConstNum_8, ml_backend__ml_unify_gen__Type_14, ml_backend__ml_unify_gen__MLDS_Type_17, ml_backend__ml_unify_gen__ConsId_12, ml_backend__ml_unify_gen__ConsTag_18, ml_backend__ml_unify_gen__Args_13, ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_0_19, ml_backend__ml_unify_gen__STATE_VARIABLE_ConstStructMap_20, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_21, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_22);
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__construct_ground_term_initializers_lld_8_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_1,
  MR_Word ml_backend__ml_unify_gen__Context_2,
  MR_Word ml_backend__ml_unify_gen__HeadVar__3_3,
  MR_Word * ml_backend__ml_unify_gen__HeadVar__4_4,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_5,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_6,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_7,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_8)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    if ((ml_backend__ml_unify_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_unify_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_8 = ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_7;
        *ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_6 = ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_5;
      }
    else
      {
        MR_Word ml_backend__ml_unify_gen__Arg_19;
        MR_Word ml_backend__ml_unify_gen__ConsArgWidth_20;
        MR_Word ml_backend__ml_unify_gen__ArgConsArgWidths_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_unify_gen__ArgRval_22;
        MR_Word ml_backend__ml_unify_gen__ArgRvals_23;
        MR_Word ml_backend__ml_unify_gen__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_31_31;
        MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_32_32;
        MR_Word ml_backend__ml_unify_gen__ArgGroundTerm_46;
        MR_Word ml_backend__ml_unify_gen__ArgRval0_47;
        MR_Word ml_backend__ml_unify_gen__MLDS_ArgType_49;
        MR_Word ml_backend__ml_unify_gen__DoubleWidth_50;
        MR_Box ml_backend__ml_unify_gen__conv0_ArgGroundTerm_46;
        MR_Word ml_backend__ml_unify_gen___ArgType_48;

        ml_backend__ml_unify_gen__Arg_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_30, (MR_Integer) 0)));
        ml_backend__ml_unify_gen__ConsArgWidth_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_30, (MR_Integer) 1)));
        {
          mercury__map__det_remove_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (ml_backend__ml_unify_gen__Arg_19)), &ml_backend__ml_unify_gen__conv0_ArgGroundTerm_46, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_7, &ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_32_32);
        }
        ml_backend__ml_unify_gen__ArgGroundTerm_46 = ((MR_Word) ml_backend__ml_unify_gen__conv0_ArgGroundTerm_46);
        ml_backend__ml_unify_gen__ArgRval0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgGroundTerm_46, (MR_Integer) 0)));
        ml_backend__ml_unify_gen___ArgType_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgGroundTerm_46, (MR_Integer) 1)));
        ml_backend__ml_unify_gen__MLDS_ArgType_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgGroundTerm_46, (MR_Integer) 2)));
        switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__ConsArgWidth_20)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ml_backend__ml_unify_gen__ConsArgWidth_20)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ml_backend__ml_unify_gen__DoubleWidth_50 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                ml_backend__ml_unify_gen__DoubleWidth_50 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            ml_backend__ml_unify_gen__DoubleWidth_50 = (MR_Integer) 0;
            break;
        }
        {
          ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ml_backend__ml_unify_gen__ModuleInfo_1, ml_backend__ml_unify_gen__Context_2, ml_backend__ml_unify_gen__MLDS_ArgType_49, ml_backend__ml_unify_gen__DoubleWidth_50, ml_backend__ml_unify_gen__ArgRval0_47, &ml_backend__ml_unify_gen__ArgRval_22, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_5, &ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_31_31);
        }
        {
          ml_backend__ml_unify_gen__construct_ground_term_initializers_lld_8_p_0(ml_backend__ml_unify_gen__ModuleInfo_1, ml_backend__ml_unify_gen__Context_2, ml_backend__ml_unify_gen__ArgConsArgWidths_21, &ml_backend__ml_unify_gen__ArgRvals_23, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_31_31, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_6, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_32_32, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_unify_gen__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ArgRval_22));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ArgRvals_23));
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__construct_ground_term_initializers_hld_10_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_11,
  MR_Word ml_backend__ml_unify_gen__Context_12,
  MR_Word ml_backend__ml_unify_gen__Args_13,
  MR_Word ml_backend__ml_unify_gen__ConsArgTypes_14,
  MR_Word ml_backend__ml_unify_gen__ConsArgWidths_15,
  MR_Word * ml_backend__ml_unify_gen__ArgRvals_16,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_27,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_28,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_29,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_30)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Args_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (ml_backend__ml_unify_gen__succeeded)
      {
        ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__ConsArgTypes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (ml_backend__ml_unify_gen__succeeded)
          ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__ConsArgWidths_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (ml_backend__ml_unify_gen__succeeded)
      {
        *ml_backend__ml_unify_gen__ArgRvals_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_30 = ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_29;
        *ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_28 = ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_27;
      }
    else
      {
        MR_Word ml_backend__ml_unify_gen__Arg_19;
        MR_Word ml_backend__ml_unify_gen__Args1_20;
        MR_Word ml_backend__ml_unify_gen__ConsArgType_21;
        MR_Word ml_backend__ml_unify_gen__ConsArgTypes1_22;
        MR_Word ml_backend__ml_unify_gen__ConsArgWidth_23;
        MR_Word ml_backend__ml_unify_gen__ConsArgWidths1_24;

        ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__Args_13)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_unify_gen__succeeded)
          {
            ml_backend__ml_unify_gen__Arg_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Args_13, (MR_Integer) 0)));
            ml_backend__ml_unify_gen__Args1_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Args_13, (MR_Integer) 1)));
            ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__ConsArgTypes_14)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__ml_unify_gen__succeeded)
              {
                ml_backend__ml_unify_gen__ConsArgType_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ConsArgTypes_14, (MR_Integer) 0)));
                ml_backend__ml_unify_gen__ConsArgTypes1_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ConsArgTypes_14, (MR_Integer) 1)));
                ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__ConsArgWidths_15)) == (MR_mktag((MR_Integer) 1)));
                if (ml_backend__ml_unify_gen__succeeded)
                  {
                    ml_backend__ml_unify_gen__ConsArgWidth_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ConsArgWidths_15, (MR_Integer) 0)));
                    ml_backend__ml_unify_gen__ConsArgWidths1_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ConsArgWidths_15, (MR_Integer) 1)));
                  }
              }
          }
        if (ml_backend__ml_unify_gen__succeeded)
          {
            MR_Word ml_backend__ml_unify_gen__ArgRval_25;
            MR_Word ml_backend__ml_unify_gen__ArgRvals1_26;
            MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_31_31;
            MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_32_32;
            MR_Word ml_backend__ml_unify_gen__ArgGroundTerm_50;
            MR_Word ml_backend__ml_unify_gen__ArgRval0_51;
            MR_Word ml_backend__ml_unify_gen__ArgType_52;
            MR_Word ml_backend__ml_unify_gen__BoxedArgType_54;
            MR_Box ml_backend__ml_unify_gen__conv0_ArgGroundTerm_50;
            MR_Word ml_backend__ml_unify_gen___MLDS_ArgType_53;

            {
              mercury__map__det_remove_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (ml_backend__ml_unify_gen__Arg_19)), &ml_backend__ml_unify_gen__conv0_ArgGroundTerm_50, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_29, &ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_32_32);
            }
            ml_backend__ml_unify_gen__ArgGroundTerm_50 = ((MR_Word) ml_backend__ml_unify_gen__conv0_ArgGroundTerm_50);
            ml_backend__ml_unify_gen__ArgRval0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgGroundTerm_50, (MR_Integer) 0)));
            ml_backend__ml_unify_gen__ArgType_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgGroundTerm_50, (MR_Integer) 1)));
            ml_backend__ml_unify_gen___MLDS_ArgType_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgGroundTerm_50, (MR_Integer) 2)));
            {
              ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(ml_backend__ml_unify_gen__ModuleInfo_11, (MR_Integer) 1, ml_backend__ml_unify_gen__ConsArgType_21, ml_backend__ml_unify_gen__ConsArgWidth_23, &ml_backend__ml_unify_gen__BoxedArgType_54);
            }
            switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__BoxedArgType_54)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_unify_gen__MLDS_ArgType_71;

                  {
                    ml_backend__ml_unify_gen__MLDS_ArgType_71 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_11, ml_backend__ml_unify_gen__ArgType_52);
                  }
                  {
                    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ml_backend__ml_unify_gen__ModuleInfo_11, ml_backend__ml_unify_gen__Context_12, ml_backend__ml_unify_gen__MLDS_ArgType_71, (MR_Integer) 0, ml_backend__ml_unify_gen__ArgRval0_51, &ml_backend__ml_unify_gen__ArgRval_25, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_27, &ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_31_31);
                  }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  {
                    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_unify_gen__ModuleInfo_11, ml_backend__ml_unify_gen__ArgType_52, ml_backend__ml_unify_gen__BoxedArgType_54, (MR_Integer) 0, ml_backend__ml_unify_gen__ArgRval0_51, &ml_backend__ml_unify_gen__ArgRval_25);
                  }
                  ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_31_31 = ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_27;
                }
                break;
              case (MR_Integer) 3:
                {
                  {
                    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_unify_gen__ModuleInfo_11, ml_backend__ml_unify_gen__ArgType_52, ml_backend__ml_unify_gen__BoxedArgType_54, (MR_Integer) 0, ml_backend__ml_unify_gen__ArgRval0_51, &ml_backend__ml_unify_gen__ArgRval_25);
                  }
                  ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_31_31 = ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_27;
                }
                break;
            }
            {
              ml_backend__ml_unify_gen__construct_ground_term_initializers_hld_10_p_0(ml_backend__ml_unify_gen__ModuleInfo_11, ml_backend__ml_unify_gen__Context_12, ml_backend__ml_unify_gen__Args1_20, ml_backend__ml_unify_gen__ConsArgTypes1_22, ml_backend__ml_unify_gen__ConsArgWidths1_24, &ml_backend__ml_unify_gen__ArgRvals1_26, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_31_31, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_28, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_32_32, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_30);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_unify_gen__ArgRvals_16 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ArgRval_25));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ArgRvals1_26));
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.construct_ground_term_initializers_hld\'/10", (MR_String) "list length mismatch");
              return;
            }
          }
      }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_5(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_unify_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;
    MR_Word ml_backend__ml_unify_gen__conv5_LambdaHeadVar__2_94;

    {
      ml_backend__ml_unify_gen__conv5_LambdaHeadVar__2_94 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_ground_term_conjunct_compound__2698__1_1_f_0(((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_1));
    }
    ml_backend__ml_unify_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_unify_gen__conv5_LambdaHeadVar__2_94));
    return ml_backend__ml_unify_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_4(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_4,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_5,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_6,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_7,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_8)
{
  {
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;
    MR_Word ml_backend__ml_unify_gen__conv2_RvalC_12;

    {
      ml_backend__ml_unify_gen__ml_shift_combine_rval_8_p_0(((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_1), ((MR_Integer) ml_backend__ml_unify_gen__wrapper_arg_2), ((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_3), &ml_backend__ml_unify_gen__conv2_RvalC_12);
    }
    *ml_backend__ml_unify_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_unify_gen__conv2_RvalC_12));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_3(
  MR_Box ml_backend__ml_unify_gen__closure_arg)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;

    {
      ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_compound__2660__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_2(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_unify_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;
    MR_Word ml_backend__ml_unify_gen__conv1_LambdaHeadVar__2_72;

    {
      ml_backend__ml_unify_gen__conv1_LambdaHeadVar__2_72 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_ground_term_conjunct_compound__2655__1_1_f_0(((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_1));
    }
    ml_backend__ml_unify_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_unify_gen__conv1_LambdaHeadVar__2_72));
    return ml_backend__ml_unify_gen__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_unify_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;
    MR_Word ml_backend__ml_unify_gen__conv0_LambdaHeadVar__2_69;

    {
      ml_backend__ml_unify_gen__conv0_LambdaHeadVar__2_69 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_ground_term_conjunct_compound__2654__1_1_f_0(((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_1));
    }
    ml_backend__ml_unify_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_unify_gen__conv0_LambdaHeadVar__2_69));
    return ml_backend__ml_unify_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_18,
  MR_Word ml_backend__ml_unify_gen__Target_19,
  MR_Word ml_backend__ml_unify_gen__HighLevelData_20,
  MR_Word ml_backend__ml_unify_gen__VarTypes_21,
  MR_Word ml_backend__ml_unify_gen__Var_22,
  MR_Word ml_backend__ml_unify_gen__VarType_23,
  MR_Word ml_backend__ml_unify_gen__MLDS_Type_24,
  MR_Word ml_backend__ml_unify_gen__ConsId_25,
  MR_Word ml_backend__ml_unify_gen__ConsTag_26,
  MR_Integer ml_backend__ml_unify_gen__Ptag_27,
  MR_Word ml_backend__ml_unify_gen__ExtraInitializers_28,
  MR_Word ml_backend__ml_unify_gen__Args_29,
  MR_Word ml_backend__ml_unify_gen__Context_30,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_63,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_64,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_65,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_66)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_137_137;
    MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_138_138;
    MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_139_139;
    MR_Word ml_backend__ml_unify_gen__ArgTypes_33;
    MR_Word ml_backend__ml_unify_gen__ConsArgTypes_40;
    MR_Word ml_backend__ml_unify_gen__ConsArgWidths_42;
    MR_Word ml_backend__ml_unify_gen__ArgRvals1_46;
    MR_Word ml_backend__ml_unify_gen__ArgRvals_48;
    MR_Word ml_backend__ml_unify_gen__ArgInitializers_51;
    MR_Word ml_backend__ml_unify_gen__SubInitializers_53;
    MR_Word ml_backend__ml_unify_gen__ConstType_54;
    MR_Word ml_backend__ml_unify_gen__Initializer_56;
    MR_Word ml_backend__ml_unify_gen__ModuleName_57;
    MR_Word ml_backend__ml_unify_gen__MLDS_ModuleName_58;
    MR_Word ml_backend__ml_unify_gen__ConstDataAddrRval_59;
    MR_Word ml_backend__ml_unify_gen__TaggedRval_60;
    MR_Word ml_backend__ml_unify_gen__Rval_61;
    MR_Word ml_backend__ml_unify_gen__GroundTerm_62;
    MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_87_87;
    MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_88_88;
    MR_Word ml_backend__ml_unify_gen__Var_95;
    MR_Word ml_backend__ml_unify_gen__Var_96;
    MR_Word ml_backend__ml_unify_gen__Var_99;
    MR_Word ml_backend__ml_unify_gen__Var_34;
    MR_Integer ml_backend__ml_unify_gen__Var_35;
    MR_Word ml_backend__ml_unify_gen__Var_36;
    MR_Box ml_backend__ml_unify_gen__conv4_Var_49;
    MR_Box ml_backend__ml_unify_gen__conv3_Var_50;
    MR_Word ml_backend__ml_unify_gen__Var_55;

    {
      hlds__vartypes__lookup_var_types_3_p_0(ml_backend__ml_unify_gen__VarTypes_21, ml_backend__ml_unify_gen__Args_29, &ml_backend__ml_unify_gen__ArgTypes_33);
    }
    ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__ConsId_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsId_25, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (ml_backend__ml_unify_gen__succeeded)
      {
        ml_backend__ml_unify_gen__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsId_25, (MR_Integer) 1)));
        ml_backend__ml_unify_gen__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsId_25, (MR_Integer) 2)));
        ml_backend__ml_unify_gen__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsId_25, (MR_Integer) 3)));
        {
          ml_backend__ml_unify_gen__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(ml_backend__ml_unify_gen__VarType_23);
        }
        ml_backend__ml_unify_gen__succeeded = !(ml_backend__ml_unify_gen__succeeded);
      }
    if (ml_backend__ml_unify_gen__succeeded)
      {
        MR_Word ml_backend__ml_unify_gen__TypeCtor_37;
        MR_Word ml_backend__ml_unify_gen__ConsDefn_38;

        {
          parse_tree__prog_type__type_to_ctor_det_2_p_0(ml_backend__ml_unify_gen__VarType_23, &ml_backend__ml_unify_gen__TypeCtor_37);
        }
        {
          ml_backend__ml_unify_gen__succeeded = check_hlds__type_util__get_cons_defn_4_p_0(ml_backend__ml_unify_gen__ModuleInfo_18, ml_backend__ml_unify_gen__TypeCtor_37, ml_backend__ml_unify_gen__ConsId_25, &ml_backend__ml_unify_gen__ConsDefn_38);
        }
        if (ml_backend__ml_unify_gen__succeeded)
          {
            MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_118_118 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
            MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_119_119 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
            MR_Word ml_backend__ml_unify_gen__ConsArgDefns_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_38, (MR_Integer) 6)));
            MR_Integer ml_backend__ml_unify_gen__NumExtraArgs_43;
            MR_Integer ml_backend__ml_unify_gen__Var_73;
            MR_Integer ml_backend__ml_unify_gen__Var_74;
            MR_Word ml_backend__ml_unify_gen__Var_75;
            MR_Word ml_backend__ml_unify_gen__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_38, (MR_Integer) 0)));
            MR_Word ml_backend__ml_unify_gen__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_38, (MR_Integer) 1)));
            MR_Word ml_backend__ml_unify_gen__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_38, (MR_Integer) 2)));
            MR_Word ml_backend__ml_unify_gen__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_38, (MR_Integer) 3)));
            MR_Word ml_backend__ml_unify_gen__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_38, (MR_Integer) 4)));
            MR_Word ml_backend__ml_unify_gen__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_38, (MR_Integer) 5)));
            MR_Word ml_backend__ml_unify_gen__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_38, (MR_Integer) 7)));

            {
              ml_backend__ml_unify_gen__ConsArgTypes_40 = mercury__list__map_2_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_118_118, ml_backend__ml_unify_gen__TypeCtorInfo_119_119, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[6], ml_backend__ml_unify_gen__ConsArgDefns_39);
            }
            {
              ml_backend__ml_unify_gen__ConsArgWidths_42 = mercury__list__map_2_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_118_118, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[7], ml_backend__ml_unify_gen__ConsArgDefns_39);
            }
            {
              ml_backend__ml_unify_gen__Var_73 = mercury__list__length_1_f_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], ml_backend__ml_unify_gen__Args_29);
            }
            {
              ml_backend__ml_unify_gen__Var_74 = mercury__list__length_1_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_119_119, ml_backend__ml_unify_gen__ConsArgTypes_40);
            }
            ml_backend__ml_unify_gen__NumExtraArgs_43 = (ml_backend__ml_unify_gen__Var_73 - ml_backend__ml_unify_gen__Var_74);
            {
              ml_backend__ml_unify_gen__Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_75, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[4]));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_75, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0_3));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_75, 3) = ((MR_Box) (ml_backend__ml_unify_gen__NumExtraArgs_43));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_75, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            {
              mercury__require__expect_4_p_0(ml_backend__ml_unify_gen__Var_75, (MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_compound\'/17", (MR_String) "extra args in from_ground_term_construct scope");
            }
          }
        else
          {
            MR_Word ml_backend__ml_unify_gen__Var_44;

            {
              ml_backend__ml_unify_gen__succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(ml_backend__ml_unify_gen__VarType_23, &ml_backend__ml_unify_gen__Var_44);
            }
            if (ml_backend__ml_unify_gen__succeeded)
              {
                MR_Integer ml_backend__ml_unify_gen__Length_45;

                {
                  ml_backend__ml_unify_gen__Length_45 = mercury__list__length_1_f_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], ml_backend__ml_unify_gen__Args_29);
                }
                {
                  ml_backend__ml_unify_gen__ConsArgTypes_40 = ml_backend__ml_code_util__ml_make_boxed_types_1_f_0(ml_backend__ml_unify_gen__Length_45);
                }
                {
                  ml_backend__ml_unify_gen__ConsArgWidths_42 = mercury__list__duplicate_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, ml_backend__ml_unify_gen__Length_45, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
                }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_compound\'/17", (MR_String) "get_cons_defn failed");
                  return;
                }
              }
          }
      }
    else
      {
        MR_Integer ml_backend__ml_unify_gen__Length_103;

        {
          ml_backend__ml_unify_gen__Length_103 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ml_backend__ml_unify_gen__ArgTypes_33);
        }
        ml_backend__ml_unify_gen__ConsArgTypes_40 = ml_backend__ml_unify_gen__ArgTypes_33;
        {
          ml_backend__ml_unify_gen__ConsArgWidths_42 = mercury__list__duplicate_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, ml_backend__ml_unify_gen__Length_103, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
        }
      }
    switch (ml_backend__ml_unify_gen__HighLevelData_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_unify_gen__ArgConsArgWidths_47;

          {
            mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, ml_backend__ml_unify_gen__Args_29, ml_backend__ml_unify_gen__ConsArgWidths_42, &ml_backend__ml_unify_gen__ArgConsArgWidths_47);
          }
          {
            ml_backend__ml_unify_gen__construct_ground_term_initializers_lld_8_p_0(ml_backend__ml_unify_gen__ModuleInfo_18, ml_backend__ml_unify_gen__Context_30, ml_backend__ml_unify_gen__ArgConsArgWidths_47, &ml_backend__ml_unify_gen__ArgRvals1_46, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_63, &ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_87_87, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_65, &ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_88_88);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          ml_backend__ml_unify_gen__construct_ground_term_initializers_hld_10_p_0(ml_backend__ml_unify_gen__ModuleInfo_18, ml_backend__ml_unify_gen__Context_30, ml_backend__ml_unify_gen__Args_29, ml_backend__ml_unify_gen__ConsArgTypes_40, ml_backend__ml_unify_gen__ConsArgWidths_42, &ml_backend__ml_unify_gen__ArgRvals1_46, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_63, &ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_87_87, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_65, &ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_88_88);
        }
        break;
    }
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    ml_backend__ml_unify_gen__TypeCtorInfo_137_137 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
    ml_backend__ml_unify_gen__TypeCtorInfo_138_138 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
    {
      backend_libs__arg_pack__pack_args_8_p_0(ml_backend__ml_unify_gen__TypeCtorInfo_137_137, ml_backend__ml_unify_gen__TypeCtorInfo_138_138, ml_backend__ml_unify_gen__TypeCtorInfo_138_138, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[8], ml_backend__ml_unify_gen__ConsArgWidths_42, ml_backend__ml_unify_gen__ArgRvals1_46, &ml_backend__ml_unify_gen__ArgRvals_48, ((MR_Box) ((MR_Integer) 0)), &ml_backend__ml_unify_gen__conv4_Var_49, ((MR_Box) ((MR_Integer) 0)), &ml_backend__ml_unify_gen__conv3_Var_50);
    }
    ml_backend__ml_unify_gen__TypeCtorInfo_139_139 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
    {
      ml_backend__ml_unify_gen__ArgInitializers_51 = mercury__list__map_2_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_137_137, ml_backend__ml_unify_gen__TypeCtorInfo_139_139, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[9], ml_backend__ml_unify_gen__ArgRvals_48);
    }
    {
      ml_backend__ml_unify_gen__SubInitializers_53 = mercury__list__f_43_43_2_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_139_139, ml_backend__ml_unify_gen__ExtraInitializers_28, ml_backend__ml_unify_gen__ArgInitializers_51);
    }
    {
      ml_backend__ml_unify_gen__Var_95 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ml_backend__ml_unify_gen__ConsTag_26);
    }
    {
      ml_backend__ml_unify_gen__Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_96, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ConsId_25));
    }
    {
      ml_backend__ml_unify_gen__ConstType_54 = ml_backend__ml_unify_gen__get_const_type_for_cons_id_5_f_0(ml_backend__ml_unify_gen__Target_19, ml_backend__ml_unify_gen__HighLevelData_20, ml_backend__ml_unify_gen__MLDS_Type_24, ml_backend__ml_unify_gen__Var_95, ml_backend__ml_unify_gen__Var_96);
    }
    ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__ConstType_54)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstType_54, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (ml_backend__ml_unify_gen__succeeded)
      {
        ml_backend__ml_unify_gen__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstType_54, (MR_Integer) 1)));
        {
          ml_backend__ml_unify_gen__Initializer_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Initializer_56, 0) = ((MR_Box) (ml_backend__ml_unify_gen__SubInitializers_53));
        }
      }
    else
      {
        ml_backend__ml_unify_gen__Initializer_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Initializer_56, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ConstType_54));
        MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Initializer_56, 1) = ((MR_Box) (ml_backend__ml_unify_gen__SubInitializers_53));
      }
    {
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_unify_gen__ModuleInfo_18, &ml_backend__ml_unify_gen__ModuleName_57);
    }
    {
      ml_backend__ml_unify_gen__MLDS_ModuleName_58 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_unify_gen__ModuleName_57);
    }
    {
      ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0(ml_backend__ml_unify_gen__MLDS_ModuleName_58, (MR_Integer) 0, ml_backend__ml_unify_gen__ConstType_54, ml_backend__ml_unify_gen__Initializer_56, ml_backend__ml_unify_gen__Context_30, &ml_backend__ml_unify_gen__ConstDataAddrRval_59, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_87_87, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_64);
    }
    ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Ptag_27 == (MR_Integer) 0);
    if (ml_backend__ml_unify_gen__succeeded)
      ml_backend__ml_unify_gen__TaggedRval_60 = ml_backend__ml_unify_gen__ConstDataAddrRval_59;
    else
      {
        ml_backend__ml_unify_gen__TaggedRval_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__TaggedRval_60, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Ptag_27));
        MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__TaggedRval_60, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ConstDataAddrRval_59));
      }
    {
      ml_backend__ml_unify_gen__Var_99 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_99, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_24));
    }
    {
      ml_backend__ml_unify_gen__Rval_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_61, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_99));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_61, 2) = ((MR_Box) (ml_backend__ml_unify_gen__TaggedRval_60));
    }
    {
      ml_backend__ml_unify_gen__GroundTerm_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_62, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_61));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_62, 1) = ((MR_Box) (ml_backend__ml_unify_gen__VarType_23));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_62, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_24));
    }
    {
      mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (ml_backend__ml_unify_gen__Var_22)), ((MR_Box) (ml_backend__ml_unify_gen__GroundTerm_62)), ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_88_88, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_66);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_7(
  MR_Box ml_backend__ml_unify_gen__closure_arg)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;

    {
      ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2543__7_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_6(
  MR_Box ml_backend__ml_unify_gen__closure_arg)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;

    {
      ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2543__6_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_5(
  MR_Box ml_backend__ml_unify_gen__closure_arg)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;

    {
      ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2543__5_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_4(
  MR_Box ml_backend__ml_unify_gen__closure_arg)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;

    {
      ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2543__4_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_3(
  MR_Box ml_backend__ml_unify_gen__closure_arg)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;

    {
      ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2543__3_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_2(
  MR_Box ml_backend__ml_unify_gen__closure_arg)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;

    {
      ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2543__2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;

    {
      ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__2543__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_16,
  MR_Word ml_backend__ml_unify_gen__Target_17,
  MR_Word ml_backend__ml_unify_gen__HighLevelData_18,
  MR_Word ml_backend__ml_unify_gen__VarTypes_19,
  MR_Word ml_backend__ml_unify_gen__Var_20,
  MR_Word ml_backend__ml_unify_gen__VarType_21,
  MR_Word ml_backend__ml_unify_gen__MLDS_Type_22,
  MR_Word ml_backend__ml_unify_gen__ConsId_23,
  MR_Word ml_backend__ml_unify_gen__ConsTag_24,
  MR_Word ml_backend__ml_unify_gen__Args_25,
  MR_Word ml_backend__ml_unify_gen__Context_26,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_78,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_79,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_80,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_81)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_unify_gen__succeeded;

        switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__ConsTag_24)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ml_backend__ml_unify_gen__ConsTag_24)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0(ml_backend__ml_unify_gen__ModuleInfo_16, ml_backend__ml_unify_gen__Target_17, ml_backend__ml_unify_gen__HighLevelData_18, ml_backend__ml_unify_gen__VarTypes_19, ml_backend__ml_unify_gen__Var_20, ml_backend__ml_unify_gen__VarType_21, ml_backend__ml_unify_gen__MLDS_Type_22, ml_backend__ml_unify_gen__ConsId_23, ml_backend__ml_unify_gen__ConsTag_24, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_unify_gen__Args_25, ml_backend__ml_unify_gen__Context_26, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_78, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_79, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_80, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_81);
                  }
                }
                break;
              case (MR_Integer) 1:
                if ((ml_backend__ml_unify_gen__Args_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "no_tag arity != 1");
                      return;
                    }
                  }
                else
                  {
                    MR_Word ml_backend__ml_unify_gen__Var_218 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Args_25, (MR_Integer) 1)));
                    MR_Word ml_backend__ml_unify_gen__Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Args_25, (MR_Integer) 0)));

                    if ((ml_backend__ml_unify_gen__Var_218 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word ml_backend__ml_unify_gen__TypeInfo_132_132 = (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2];
                        MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_133_133 = (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;
                        MR_Word ml_backend__ml_unify_gen__ArgGroundTerm_60;
                        MR_Word ml_backend__ml_unify_gen__ArgRval_61;
                        MR_Word ml_backend__ml_unify_gen__MLDS_ArgType_63;
                        MR_Word ml_backend__ml_unify_gen__Rval0_65;
                        MR_Word ml_backend__ml_unify_gen__Rval_66;
                        MR_Word ml_backend__ml_unify_gen__GroundTerm_67;
                        MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_97_97;
                        MR_Box ml_backend__ml_unify_gen__conv0_ArgGroundTerm_60;
                        MR_Word ml_backend__ml_unify_gen___ArgType_62;

                        {
                          mercury__map__det_remove_4_p_0(ml_backend__ml_unify_gen__TypeInfo_132_132, ml_backend__ml_unify_gen__TypeCtorInfo_133_133, ((MR_Box) (ml_backend__ml_unify_gen__Var_219)), &ml_backend__ml_unify_gen__conv0_ArgGroundTerm_60, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_80, &ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_97_97);
                        }
                        ml_backend__ml_unify_gen__ArgGroundTerm_60 = ((MR_Word) ml_backend__ml_unify_gen__conv0_ArgGroundTerm_60);
                        ml_backend__ml_unify_gen__ArgRval_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgGroundTerm_60, (MR_Integer) 0)));
                        ml_backend__ml_unify_gen___ArgType_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgGroundTerm_60, (MR_Integer) 1)));
                        ml_backend__ml_unify_gen__MLDS_ArgType_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgGroundTerm_60, (MR_Integer) 2)));
                        {
                          ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ml_backend__ml_unify_gen__ModuleInfo_16, ml_backend__ml_unify_gen__Context_26, ml_backend__ml_unify_gen__MLDS_ArgType_63, (MR_Integer) 0, ml_backend__ml_unify_gen__ArgRval_61, &ml_backend__ml_unify_gen__Rval0_65, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_78, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_79);
                        }
                        {
                          ml_backend__ml_unify_gen__Rval_66 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(ml_backend__ml_unify_gen__MLDS_Type_22, ml_backend__ml_unify_gen__ConsTag_24, ml_backend__ml_unify_gen__Rval0_65);
                        }
                        {
                          ml_backend__ml_unify_gen__GroundTerm_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_67, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_66));
                          MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_67, 1) = ((MR_Box) (ml_backend__ml_unify_gen__VarType_21));
                          MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_67, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_22));
                        }
                        {
                          mercury__map__det_insert_4_p_0(ml_backend__ml_unify_gen__TypeInfo_132_132, ml_backend__ml_unify_gen__TypeCtorInfo_133_133, ((MR_Box) (ml_backend__ml_unify_gen__Var_20)), ((MR_Box) (ml_backend__ml_unify_gen__GroundTerm_67)), ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_97_97, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_81);
                        }
                      }
                    else
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "no_tag arity != 1");
                          return;
                        }
                      }
                  }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ml_backend__ml_unify_gen__String_33 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ConsTag_24, (MR_Integer) 0)));
              MR_Word ml_backend__ml_unify_gen__Var_113;
              MR_Word ml_backend__ml_unify_gen__ConstRval_194;
              MR_Word ml_backend__ml_unify_gen__ConstGroundTerm_195;
              MR_Word ml_backend__ml_unify_gen__Var_196;

              {
                ml_backend__ml_unify_gen__Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_113, 1) = ((MR_Box) (ml_backend__ml_unify_gen__String_33));
              }
              {
                ml_backend__ml_unify_gen__ConstRval_194 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstRval_194, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstRval_194, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_113));
              }
              {
                ml_backend__ml_unify_gen__Var_196 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_196, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[7]));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_196, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_6));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_196, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_196, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Args_25));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_196, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                mercury__require__expect_4_p_0(ml_backend__ml_unify_gen__Var_196, (MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
              }
              {
                ml_backend__ml_unify_gen__ConstGroundTerm_195 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstGroundTerm_195, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ConstRval_194));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstGroundTerm_195, 1) = ((MR_Box) (ml_backend__ml_unify_gen__VarType_21));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstGroundTerm_195, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_22));
              }
              {
                mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (ml_backend__ml_unify_gen__Var_20)), ((MR_Box) (ml_backend__ml_unify_gen__ConstGroundTerm_195)), ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_80, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_81);
              }
              *ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_79 = ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_78;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_unify_gen__ConstRval_30;
              MR_Float ml_backend__ml_unify_gen__Float_32 = MR_unbox_float((MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__ConsTag_24, (MR_Integer) 0)));
              MR_Word ml_backend__ml_unify_gen__ConstGroundTerm_39;
              MR_Word ml_backend__ml_unify_gen__Var_114;
              MR_Word ml_backend__ml_unify_gen__Var_119;

              {
                ml_backend__ml_unify_gen__Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_114, 1) = MR_box_float(ml_backend__ml_unify_gen__Float_32);
              }
              {
                ml_backend__ml_unify_gen__ConstRval_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstRval_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstRval_30, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_114));
              }
              {
                ml_backend__ml_unify_gen__Var_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_119, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[7]));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_119, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_1));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_119, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_119, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Args_25));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_119, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                mercury__require__expect_4_p_0(ml_backend__ml_unify_gen__Var_119, (MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
              }
              {
                ml_backend__ml_unify_gen__ConstGroundTerm_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstGroundTerm_39, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ConstRval_30));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstGroundTerm_39, 1) = ((MR_Box) (ml_backend__ml_unify_gen__VarType_21));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstGroundTerm_39, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_22));
              }
              {
                mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (ml_backend__ml_unify_gen__Var_20)), ((MR_Box) (ml_backend__ml_unify_gen__ConstGroundTerm_39)), ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_80, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_81);
              }
              *ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_79 = ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_78;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_24, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer ml_backend__ml_unify_gen__Int_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_24, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_unify_gen__ConstRval_156;
                  MR_Word ml_backend__ml_unify_gen__ConstGroundTerm_157;
                  MR_Word ml_backend__ml_unify_gen__Var_158;
                  MR_Word ml_backend__ml_unify_gen__Var_134;

                  {
                    ml_backend__ml_unify_gen__Var_134 = parse_tree__builtin_lib_types__int_type_0_f_0();
                  }
                  {
                    ml_backend__ml_unify_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_unify_gen__VarType_21, ml_backend__ml_unify_gen__Var_134);
                  }
                  if (ml_backend__ml_unify_gen__succeeded)
                    {
                      MR_Word ml_backend__ml_unify_gen__Var_116;

                      {
                        ml_backend__ml_unify_gen__Var_116 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_116, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Int_29));
                      }
                      {
                        ml_backend__ml_unify_gen__ConstRval_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstRval_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstRval_156, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_116));
                      }
                    }
                  else
                    {
                      MR_Word ml_backend__ml_unify_gen__Var_135;

                      {
                        ml_backend__ml_unify_gen__Var_135 = parse_tree__builtin_lib_types__char_type_0_f_0();
                      }
                      {
                        ml_backend__ml_unify_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_unify_gen__VarType_21, ml_backend__ml_unify_gen__Var_135);
                      }
                      if (ml_backend__ml_unify_gen__succeeded)
                        {
                          MR_Word ml_backend__ml_unify_gen__Var_117;

                          {
                            ml_backend__ml_unify_gen__Var_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_117, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Int_29));
                          }
                          {
                            ml_backend__ml_unify_gen__ConstRval_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstRval_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstRval_156, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_117));
                          }
                        }
                      else
                        {
                          MR_Word ml_backend__ml_unify_gen__Var_118;

                          {
                            ml_backend__ml_unify_gen__Var_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_118, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Int_29));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_118, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_22));
                          }
                          {
                            ml_backend__ml_unify_gen__ConstRval_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstRval_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstRval_156, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_118));
                          }
                        }
                    }
                  {
                    ml_backend__ml_unify_gen__Var_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_158, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[7]));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_158, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_3));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_158, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_158, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Args_25));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_158, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    mercury__require__expect_4_p_0(ml_backend__ml_unify_gen__Var_158, (MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
                  }
                  {
                    ml_backend__ml_unify_gen__ConstGroundTerm_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstGroundTerm_157, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ConstRval_156));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstGroundTerm_157, 1) = ((MR_Box) (ml_backend__ml_unify_gen__VarType_21));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstGroundTerm_157, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_22));
                  }
                  {
                    mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (ml_backend__ml_unify_gen__Var_20)), ((MR_Box) (ml_backend__ml_unify_gen__ConstGroundTerm_157)), ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_80, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_81);
                  }
                  *ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_79 = ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_78;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Unsigned ml_backend__ml_unify_gen__UInt_31 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_24, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_unify_gen__Var_115;
                  MR_Word ml_backend__ml_unify_gen__ConstRval_206;
                  MR_Word ml_backend__ml_unify_gen__ConstGroundTerm_207;
                  MR_Word ml_backend__ml_unify_gen__Var_208;

                  {
                    ml_backend__ml_unify_gen__Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_115, 1) = ((MR_Box) (ml_backend__ml_unify_gen__UInt_31));
                  }
                  {
                    ml_backend__ml_unify_gen__ConstRval_206 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstRval_206, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstRval_206, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_115));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_208 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_208, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[7]));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_208, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_7));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_208, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_208, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Args_25));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_208, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    mercury__require__expect_4_p_0(ml_backend__ml_unify_gen__Var_208, (MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
                  }
                  {
                    ml_backend__ml_unify_gen__ConstGroundTerm_207 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstGroundTerm_207, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ConstRval_206));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstGroundTerm_207, 1) = ((MR_Box) (ml_backend__ml_unify_gen__VarType_21));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstGroundTerm_207, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_22));
                  }
                  {
                    mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (ml_backend__ml_unify_gen__Var_20)), ((MR_Box) (ml_backend__ml_unify_gen__ConstGroundTerm_207)), ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_80, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_81);
                  }
                  *ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_79 = ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_78;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__ml_unify_gen__ForeignLang_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_24, (MR_Integer) 1)));
                  MR_String ml_backend__ml_unify_gen__ForeignTag_38 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_24, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_unify_gen__Var_105;
                  MR_Word ml_backend__ml_unify_gen__ConstRval_144;
                  MR_Word ml_backend__ml_unify_gen__ConstGroundTerm_145;
                  MR_Word ml_backend__ml_unify_gen__Var_146;

                  {
                    ml_backend__ml_unify_gen__Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_105, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ForeignLang_37));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_105, 2) = ((MR_Box) (ml_backend__ml_unify_gen__ForeignTag_38));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_105, 3) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_22));
                  }
                  {
                    ml_backend__ml_unify_gen__ConstRval_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstRval_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstRval_144, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_105));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_146, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[7]));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_146, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_2));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_146, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_146, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Args_25));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_146, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    mercury__require__expect_4_p_0(ml_backend__ml_unify_gen__Var_146, (MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
                  }
                  {
                    ml_backend__ml_unify_gen__ConstGroundTerm_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstGroundTerm_145, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ConstRval_144));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstGroundTerm_145, 1) = ((MR_Box) (ml_backend__ml_unify_gen__VarType_21));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstGroundTerm_145, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_22));
                  }
                  {
                    mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (ml_backend__ml_unify_gen__Var_20)), ((MR_Box) (ml_backend__ml_unify_gen__ConstGroundTerm_145)), ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_80, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_81);
                  }
                  *ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_79 = ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_78;
                }
                break;
              case (MR_Integer) 3:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "pred_closure_tag");
                    return;
                  }
                }
                break;
              case (MR_Integer) 4:
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
              case (MR_Integer) 8:
              case (MR_Integer) 9:
              case (MR_Integer) 10:
              case (MR_Integer) 11:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "bad constant");
                    return;
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Integer ml_backend__ml_unify_gen__Ptag_217 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_24, (MR_Integer) 1)));

                  {
                    ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0(ml_backend__ml_unify_gen__ModuleInfo_16, ml_backend__ml_unify_gen__Target_17, ml_backend__ml_unify_gen__HighLevelData_18, ml_backend__ml_unify_gen__VarTypes_19, ml_backend__ml_unify_gen__Var_20, ml_backend__ml_unify_gen__VarType_21, ml_backend__ml_unify_gen__MLDS_Type_22, ml_backend__ml_unify_gen__ConsId_23, ml_backend__ml_unify_gen__ConsTag_24, ml_backend__ml_unify_gen__Ptag_217, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_unify_gen__Args_25, ml_backend__ml_unify_gen__Context_26, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_78, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_79, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_80, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_81);
                  }
                }
                break;
              case (MR_Integer) 13:
                if ((ml_backend__ml_unify_gen__Args_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "no_tag arity != 1");
                      return;
                    }
                  }
                else
                  {
                    MR_Word ml_backend__ml_unify_gen__Var_218 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Args_25, (MR_Integer) 1)));
                    MR_Word ml_backend__ml_unify_gen__Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Args_25, (MR_Integer) 0)));

                    if ((ml_backend__ml_unify_gen__Var_218 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word ml_backend__ml_unify_gen__TypeInfo_132_132 = (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2];
                        MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_133_133 = (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;
                        MR_Word ml_backend__ml_unify_gen__ArgGroundTerm_60;
                        MR_Word ml_backend__ml_unify_gen__ArgRval_61;
                        MR_Word ml_backend__ml_unify_gen__MLDS_ArgType_63;
                        MR_Word ml_backend__ml_unify_gen__Rval0_65;
                        MR_Word ml_backend__ml_unify_gen__Rval_66;
                        MR_Word ml_backend__ml_unify_gen__GroundTerm_67;
                        MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_97_97;
                        MR_Box ml_backend__ml_unify_gen__conv0_ArgGroundTerm_60;
                        MR_Word ml_backend__ml_unify_gen___ArgType_62;

                        {
                          mercury__map__det_remove_4_p_0(ml_backend__ml_unify_gen__TypeInfo_132_132, ml_backend__ml_unify_gen__TypeCtorInfo_133_133, ((MR_Box) (ml_backend__ml_unify_gen__Var_219)), &ml_backend__ml_unify_gen__conv0_ArgGroundTerm_60, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_80, &ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_97_97);
                        }
                        ml_backend__ml_unify_gen__ArgGroundTerm_60 = ((MR_Word) ml_backend__ml_unify_gen__conv0_ArgGroundTerm_60);
                        ml_backend__ml_unify_gen__ArgRval_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgGroundTerm_60, (MR_Integer) 0)));
                        ml_backend__ml_unify_gen___ArgType_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgGroundTerm_60, (MR_Integer) 1)));
                        ml_backend__ml_unify_gen__MLDS_ArgType_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgGroundTerm_60, (MR_Integer) 2)));
                        {
                          ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ml_backend__ml_unify_gen__ModuleInfo_16, ml_backend__ml_unify_gen__Context_26, ml_backend__ml_unify_gen__MLDS_ArgType_63, (MR_Integer) 0, ml_backend__ml_unify_gen__ArgRval_61, &ml_backend__ml_unify_gen__Rval0_65, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_78, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_79);
                        }
                        {
                          ml_backend__ml_unify_gen__Rval_66 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(ml_backend__ml_unify_gen__MLDS_Type_22, ml_backend__ml_unify_gen__ConsTag_24, ml_backend__ml_unify_gen__Rval0_65);
                        }
                        {
                          ml_backend__ml_unify_gen__GroundTerm_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_67, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_66));
                          MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_67, 1) = ((MR_Box) (ml_backend__ml_unify_gen__VarType_21));
                          MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_67, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_22));
                        }
                        {
                          mercury__map__det_insert_4_p_0(ml_backend__ml_unify_gen__TypeInfo_132_132, ml_backend__ml_unify_gen__TypeCtorInfo_133_133, ((MR_Box) (ml_backend__ml_unify_gen__Var_20)), ((MR_Box) (ml_backend__ml_unify_gen__GroundTerm_67)), ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_97_97, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_81);
                        }
                      }
                    else
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "no_tag arity != 1");
                          return;
                        }
                      }
                  }
                break;
              case (MR_Integer) 14:
                {
                  MR_Word ml_backend__ml_unify_gen__ExtraInitializers_74;
                  MR_Word ml_backend__ml_unify_gen__UsesConstructors_75;
                  MR_Integer ml_backend__ml_unify_gen__Stag_125 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_24, (MR_Integer) 2)));
                  MR_Integer ml_backend__ml_unify_gen__Ptag_127 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_24, (MR_Integer) 1)));

                  {
                    ml_backend__ml_unify_gen__UsesConstructors_75 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(ml_backend__ml_unify_gen__Target_17);
                  }
                  switch (ml_backend__ml_unify_gen__UsesConstructors_75) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__ml_unify_gen__StagRval0_76;
                        MR_Word ml_backend__ml_unify_gen__StagRval_77;
                        MR_Word ml_backend__ml_unify_gen__Var_82;
                        MR_Word ml_backend__ml_unify_gen__Var_85;

                        {
                          ml_backend__ml_unify_gen__Var_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_82, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Stag_125));
                        }
                        {
                          ml_backend__ml_unify_gen__StagRval0_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__StagRval0_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__StagRval0_76, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_82));
                        }
                        switch (ml_backend__ml_unify_gen__HighLevelData_18) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              {
                                ml_backend__ml_unify_gen__StagRval_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__StagRval_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__StagRval_77, 1) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[9]));
                                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__StagRval_77, 2) = ((MR_Box) (ml_backend__ml_unify_gen__StagRval0_76));
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            ml_backend__ml_unify_gen__StagRval_77 = ml_backend__ml_unify_gen__StagRval0_76;
                            break;
                        }
                        {
                          ml_backend__ml_unify_gen__Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_85, 0) = ((MR_Box) (ml_backend__ml_unify_gen__StagRval_77));
                        }
                        {
                          ml_backend__ml_unify_gen__ExtraInitializers_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ExtraInitializers_74, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Var_85));
                          MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ExtraInitializers_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      ml_backend__ml_unify_gen__ExtraInitializers_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      break;
                  }
                  {
                    ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_compound_17_p_0(ml_backend__ml_unify_gen__ModuleInfo_16, ml_backend__ml_unify_gen__Target_17, ml_backend__ml_unify_gen__HighLevelData_18, ml_backend__ml_unify_gen__VarTypes_19, ml_backend__ml_unify_gen__Var_20, ml_backend__ml_unify_gen__VarType_21, ml_backend__ml_unify_gen__MLDS_Type_22, ml_backend__ml_unify_gen__ConsId_23, ml_backend__ml_unify_gen__ConsTag_24, ml_backend__ml_unify_gen__Ptag_127, ml_backend__ml_unify_gen__ExtraInitializers_74, ml_backend__ml_unify_gen__Args_25, ml_backend__ml_unify_gen__Context_26, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_78, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_79, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_80, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_81);
                  }
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_Integer ml_backend__ml_unify_gen__Ptag_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_24, (MR_Integer) 1)));
                  MR_Integer ml_backend__ml_unify_gen__Stag_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_24, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_unify_gen__Var_106;
                  MR_Word ml_backend__ml_unify_gen__Var_107;
                  MR_Word ml_backend__ml_unify_gen__Var_108;
                  MR_Word ml_backend__ml_unify_gen__Var_111;
                  MR_Word ml_backend__ml_unify_gen__Var_112;
                  MR_Word ml_backend__ml_unify_gen__ConstRval_180;
                  MR_Word ml_backend__ml_unify_gen__ConstGroundTerm_181;
                  MR_Word ml_backend__ml_unify_gen__Var_182;

                  {
                    ml_backend__ml_unify_gen__Var_106 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_106, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_22));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_112 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_112, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Stag_36));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_111, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_112));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_4[4])));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_108, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_111));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_107 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_107, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Ptag_35));
                    MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_107, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_108));
                  }
                  {
                    ml_backend__ml_unify_gen__ConstRval_180 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstRval_180, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstRval_180, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_106));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstRval_180, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_107));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_182 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_182, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[7]));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_182, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_5));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_182, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_182, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Args_25));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_182, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    mercury__require__expect_4_p_0(ml_backend__ml_unify_gen__Var_182, (MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
                  }
                  {
                    ml_backend__ml_unify_gen__ConstGroundTerm_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstGroundTerm_181, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ConstRval_180));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstGroundTerm_181, 1) = ((MR_Box) (ml_backend__ml_unify_gen__VarType_21));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstGroundTerm_181, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_22));
                  }
                  {
                    mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (ml_backend__ml_unify_gen__Var_20)), ((MR_Box) (ml_backend__ml_unify_gen__ConstGroundTerm_181)), ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_80, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_81);
                  }
                  *ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_79 = ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_78;
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_Word ml_backend__ml_unify_gen__ResAddr_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_24, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_unify_gen__ConstRval_168;
                  MR_Word ml_backend__ml_unify_gen__ConstGroundTerm_169;
                  MR_Word ml_backend__ml_unify_gen__Var_170;

                  {
                    ml_backend__ml_unify_gen__ConstRval_168 = ml_backend__ml_unify_gen__ml_gen_reserved_address_3_f_0(ml_backend__ml_unify_gen__ModuleInfo_16, ml_backend__ml_unify_gen__ResAddr_34, ml_backend__ml_unify_gen__MLDS_Type_22);
                  }
                  {
                    ml_backend__ml_unify_gen__Var_170 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_170, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[7]));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_170, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0_4));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_170, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_170, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Args_25));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_170, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    mercury__require__expect_4_p_0(ml_backend__ml_unify_gen__Var_170, (MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
                  }
                  {
                    ml_backend__ml_unify_gen__ConstGroundTerm_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstGroundTerm_169, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ConstRval_168));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstGroundTerm_169, 1) = ((MR_Box) (ml_backend__ml_unify_gen__VarType_21));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConstGroundTerm_169, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_22));
                  }
                  {
                    mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ((MR_Box) (ml_backend__ml_unify_gen__Var_20)), ((MR_Box) (ml_backend__ml_unify_gen__ConstGroundTerm_169)), ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_80, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_81);
                  }
                  *ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_79 = ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_78;
                }
                break;
              case (MR_Integer) 17:
                {
                  MR_Word ml_backend__ml_unify_gen__ThisTag_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_24, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_unify_gen__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsTag_24, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_unify_gen__next_value_of_ConsTag_24 = ml_backend__ml_unify_gen__ThisTag_57;

                    ml_backend__ml_unify_gen__ConsTag_24 = ml_backend__ml_unify_gen__next_value_of_ConsTag_24;
                  }
                  continue;
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_conjuncts_9_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_1,
  MR_Word ml_backend__ml_unify_gen__Target_2,
  MR_Word ml_backend__ml_unify_gen__HighLevelData_3,
  MR_Word ml_backend__ml_unify_gen__VarTypes_4,
  MR_Word ml_backend__ml_unify_gen__HeadVar__5_5,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_6,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_7,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_8,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_unify_gen__succeeded;

        if ((ml_backend__ml_unify_gen__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_9 = ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_8;
            *ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_7 = ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_6;
          }
        else
          {
            MR_Word ml_backend__ml_unify_gen__Goal_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__5_5, (MR_Integer) 0)));
            MR_Word ml_backend__ml_unify_gen__Goals_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__5_5, (MR_Integer) 1)));
            MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_32_32;
            MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_33_33;
            MR_Word ml_backend__ml_unify_gen__GoalExpr_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Goal_24, (MR_Integer) 0)));
            MR_Word ml_backend__ml_unify_gen__GoalInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Goal_24, (MR_Integer) 1)));
            MR_Word ml_backend__ml_unify_gen__Var_54;
            MR_Word ml_backend__ml_unify_gen__ConsId_55;
            MR_Word ml_backend__ml_unify_gen__Args_56;
            MR_Word ml_backend__ml_unify_gen__Unify_52;
            MR_Word ml_backend__ml_unify_gen__SubInfo_60;
            MR_Word ml_backend__ml_unify_gen__Var_49;
            MR_Word ml_backend__ml_unify_gen__Var_50;
            MR_Word ml_backend__ml_unify_gen__Var_51;
            MR_Word ml_backend__ml_unify_gen__Var_53;
            MR_Word ml_backend__ml_unify_gen__Var_57;
            MR_Word ml_backend__ml_unify_gen___HowToConstruct_58;
            MR_Word ml_backend__ml_unify_gen__Var_59;

            ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__GoalExpr_47)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__ml_unify_gen__succeeded)
              {
                ml_backend__ml_unify_gen__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__GoalExpr_47, (MR_Integer) 0)));
                ml_backend__ml_unify_gen__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__GoalExpr_47, (MR_Integer) 1)));
                ml_backend__ml_unify_gen__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__GoalExpr_47, (MR_Integer) 2)));
                ml_backend__ml_unify_gen__Unify_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__GoalExpr_47, (MR_Integer) 3)));
                ml_backend__ml_unify_gen__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__GoalExpr_47, (MR_Integer) 4)));
                ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__Unify_52)) == (MR_mktag((MR_Integer) 0)));
                if (ml_backend__ml_unify_gen__succeeded)
                  {
                    ml_backend__ml_unify_gen__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Unify_52, (MR_Integer) 0)));
                    ml_backend__ml_unify_gen__ConsId_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Unify_52, (MR_Integer) 1)));
                    ml_backend__ml_unify_gen__Args_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Unify_52, (MR_Integer) 2)));
                    ml_backend__ml_unify_gen__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Unify_52, (MR_Integer) 3)));
                    ml_backend__ml_unify_gen___HowToConstruct_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Unify_52, (MR_Integer) 4)));
                    ml_backend__ml_unify_gen__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Unify_52, (MR_Integer) 5)));
                    ml_backend__ml_unify_gen__SubInfo_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Unify_52, (MR_Integer) 6)));
                    ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__SubInfo_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
            if (ml_backend__ml_unify_gen__succeeded)
              {
                MR_Word ml_backend__ml_unify_gen__VarType_61;
                MR_Word ml_backend__ml_unify_gen__MLDS_Type_62;
                MR_Word ml_backend__ml_unify_gen__ConsTag_63;
                MR_Word ml_backend__ml_unify_gen__Context_64;

                {
                  hlds__vartypes__lookup_var_type_3_p_0(ml_backend__ml_unify_gen__VarTypes_4, ml_backend__ml_unify_gen__Var_54, &ml_backend__ml_unify_gen__VarType_61);
                }
                {
                  ml_backend__ml_unify_gen__MLDS_Type_62 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_1, ml_backend__ml_unify_gen__VarType_61);
                }
                {
                  ml_backend__ml_unify_gen__ConsTag_63 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_1, ml_backend__ml_unify_gen__ConsId_55);
                }
                {
                  ml_backend__ml_unify_gen__Context_64 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_unify_gen__GoalInfo_48);
                }
                {
                  ml_backend__ml_unify_gen__ml_gen_ground_term_conjunct_tag_15_p_0(ml_backend__ml_unify_gen__ModuleInfo_1, ml_backend__ml_unify_gen__Target_2, ml_backend__ml_unify_gen__HighLevelData_3, ml_backend__ml_unify_gen__VarTypes_4, ml_backend__ml_unify_gen__Var_54, ml_backend__ml_unify_gen__VarType_61, ml_backend__ml_unify_gen__MLDS_Type_62, ml_backend__ml_unify_gen__ConsId_55, ml_backend__ml_unify_gen__ConsTag_63, ml_backend__ml_unify_gen__Args_56, ml_backend__ml_unify_gen__Context_64, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_6, &ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_32_32, ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_8, &ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_33_33);
                }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term_conjunct\'/9", (MR_String) "malformed goal");
                  return;
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_unify_gen__next_value_of_HeadVar__5_5 = ml_backend__ml_unify_gen__Goals_25;
              MR_Word ml_backend__ml_unify_gen__next_value_of_STATE_VARIABLE_GlobalData_0_6 = ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_32_32;
              MR_Word ml_backend__ml_unify_gen__next_value_of_STATE_VARIABLE_GroundTermMap_0_8 = ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_33_33;

              ml_backend__ml_unify_gen__STATE_VARIABLE_GroundTermMap_0_8 = ml_backend__ml_unify_gen__next_value_of_STATE_VARIABLE_GroundTermMap_0_8;
              ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_6 = ml_backend__ml_unify_gen__next_value_of_STATE_VARIABLE_GlobalData_0_6;
              ml_backend__ml_unify_gen__HeadVar__5_5 = ml_backend__ml_unify_gen__next_value_of_HeadVar__5_5;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_field_id_6_f_0(
  MR_Word ml_backend__ml_unify_gen__Target_8,
  MR_Word ml_backend__ml_unify_gen__Type_9,
  MR_Word ml_backend__ml_unify_gen__Tag_10,
  MR_String ml_backend__ml_unify_gen__ConsName_11,
  MR_Integer ml_backend__ml_unify_gen__ConsArity_12,
  MR_String ml_backend__ml_unify_gen__FieldName_13)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__FieldId_14;
    MR_Word ml_backend__ml_unify_gen__TypeCtor_15;
    MR_Word ml_backend__ml_unify_gen__QualTypeName_16;
    MR_Integer ml_backend__ml_unify_gen__TypeArity_17;
    MR_Word ml_backend__ml_unify_gen__MLDS_Module_18;
    MR_Word ml_backend__ml_unify_gen__QualKind_19;
    MR_String ml_backend__ml_unify_gen__TypeName_20;
    MR_Word ml_backend__ml_unify_gen__TypeQualifier_21;
    MR_Word ml_backend__ml_unify_gen__UsesBaseClass_22;
    MR_Word ml_backend__ml_unify_gen__ClassPtrType_23;
    MR_Word ml_backend__ml_unify_gen__QualifiedFieldName_24;

    {
      parse_tree__prog_type__type_to_ctor_det_2_p_0(ml_backend__ml_unify_gen__Type_9, &ml_backend__ml_unify_gen__TypeCtor_15);
    }
    {
      ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(ml_backend__ml_unify_gen__TypeCtor_15, &ml_backend__ml_unify_gen__QualTypeName_16, &ml_backend__ml_unify_gen__TypeArity_17);
    }
    ml_backend__ml_unify_gen__MLDS_Module_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualTypeName_16, (MR_Integer) 0)));
    ml_backend__ml_unify_gen__QualKind_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualTypeName_16, (MR_Integer) 1)));
    ml_backend__ml_unify_gen__TypeName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualTypeName_16, (MR_Integer) 2)));
    {
      ml_backend__ml_unify_gen__TypeQualifier_21 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(ml_backend__ml_unify_gen__Target_8, ml_backend__ml_unify_gen__MLDS_Module_18, ml_backend__ml_unify_gen__QualKind_19, ml_backend__ml_unify_gen__TypeName_20, ml_backend__ml_unify_gen__TypeArity_17);
    }
    {
      ml_backend__ml_unify_gen__UsesBaseClass_22 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ml_backend__ml_unify_gen__Tag_10);
    }
    switch (ml_backend__ml_unify_gen__UsesBaseClass_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_unify_gen__QualConsName_25;
          MR_Word ml_backend__ml_unify_gen__FieldQualifier_26;
          MR_Word ml_backend__ml_unify_gen__Var_28;

          {
            ml_backend__ml_unify_gen__QualConsName_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualConsName_25, 0) = ((MR_Box) (ml_backend__ml_unify_gen__TypeQualifier_21));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualConsName_25, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualConsName_25, 2) = ((MR_Box) (ml_backend__ml_unify_gen__ConsName_11));
          }
          {
            ml_backend__ml_unify_gen__Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_28, 1) = ((MR_Box) (ml_backend__ml_unify_gen__QualConsName_25));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_28, 2) = ((MR_Box) (ml_backend__ml_unify_gen__ConsArity_12));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_28, 3) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            ml_backend__ml_unify_gen__ClassPtrType_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ClassPtrType_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ClassPtrType_23, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_28));
          }
          {
            ml_backend__ml_unify_gen__FieldQualifier_26 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(ml_backend__ml_unify_gen__Target_8, ml_backend__ml_unify_gen__TypeQualifier_21, (MR_Integer) 1, ml_backend__ml_unify_gen__ConsName_11, ml_backend__ml_unify_gen__ConsArity_12);
          }
          {
            ml_backend__ml_unify_gen__QualifiedFieldName_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualifiedFieldName_24, 0) = ((MR_Box) (ml_backend__ml_unify_gen__FieldQualifier_26));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualifiedFieldName_24, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualifiedFieldName_24, 2) = ((MR_Box) (ml_backend__ml_unify_gen__FieldName_13));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_unify_gen__Var_32;

          {
            ml_backend__ml_unify_gen__Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_32, 1) = ((MR_Box) (ml_backend__ml_unify_gen__QualTypeName_16));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_32, 2) = ((MR_Box) (ml_backend__ml_unify_gen__TypeArity_17));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_32, 3) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            ml_backend__ml_unify_gen__ClassPtrType_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ClassPtrType_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ClassPtrType_23, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_32));
          }
          {
            ml_backend__ml_unify_gen__QualifiedFieldName_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualifiedFieldName_24, 0) = ((MR_Box) (ml_backend__ml_unify_gen__TypeQualifier_21));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualifiedFieldName_24, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualifiedFieldName_24, 2) = ((MR_Box) (ml_backend__ml_unify_gen__FieldName_13));
          }
        }
        break;
    }
    {
      ml_backend__ml_unify_gen__FieldId_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__FieldId_14, 0) = ((MR_Box) (ml_backend__ml_unify_gen__QualifiedFieldName_24));
      MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__FieldId_14, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ClassPtrType_23));
    }
    return ml_backend__ml_unify_gen__FieldId_14;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_tag_test_rval_4_f_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_unify_gen__wrapper_arg_3;
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;
    MR_Word ml_backend__ml_unify_gen__conv0_LambdaHeadVar__3_65;

    {
      ml_backend__ml_unify_gen__conv0_LambdaHeadVar__3_65 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_tag_test_rval__2291__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_2));
    }
    ml_backend__ml_unify_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_unify_gen__conv0_LambdaHeadVar__3_65));
    return ml_backend__ml_unify_gen__wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_tag_test_rval_4_f_0(
  MR_Word ml_backend__ml_unify_gen__Tag_6,
  MR_Word ml_backend__ml_unify_gen__Type_7,
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_8,
  MR_Word ml_backend__ml_unify_gen__Rval_9)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__TagTestRval_10;

    switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__Tag_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__ml_unify_gen__Tag_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ml_backend__ml_unify_gen__TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[8]);
            }
            break;
          case (MR_Integer) 1:
            {
              ml_backend__ml_unify_gen__TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[8]);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ml_backend__ml_unify_gen__String_11 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Tag_6, (MR_Integer) 0)));
          MR_Word ml_backend__ml_unify_gen__Var_115;
          MR_Word ml_backend__ml_unify_gen__Var_116;

          {
            ml_backend__ml_unify_gen__Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_116, 1) = ((MR_Box) (ml_backend__ml_unify_gen__String_11));
          }
          {
            ml_backend__ml_unify_gen__Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_115, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_116));
          }
          {
            ml_backend__ml_unify_gen__TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_9));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Var_115));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float ml_backend__ml_unify_gen__Float_12 = MR_unbox_float((MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Tag_6, (MR_Integer) 0)));
          MR_Word ml_backend__ml_unify_gen__Var_112;
          MR_Word ml_backend__ml_unify_gen__Var_113;

          {
            ml_backend__ml_unify_gen__Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_113, 1) = MR_box_float(ml_backend__ml_unify_gen__Float_12);
          }
          {
            ml_backend__ml_unify_gen__Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_112, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_113));
          }
          {
            ml_backend__ml_unify_gen__TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 48))));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_9));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Var_112));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ml_backend__ml_unify_gen__Int_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_6, (MR_Integer) 1)));
              MR_Word ml_backend__ml_unify_gen__ConstRval_14;
              MR_Word ml_backend__ml_unify_gen__Var_124;

              {
                ml_backend__ml_unify_gen__Var_124 = parse_tree__builtin_lib_types__int_type_0_f_0();
              }
              {
                ml_backend__ml_unify_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_unify_gen__Type_7, ml_backend__ml_unify_gen__Var_124);
              }
              if (ml_backend__ml_unify_gen__succeeded)
                {
                  MR_Word ml_backend__ml_unify_gen__Var_107;

                  {
                    ml_backend__ml_unify_gen__Var_107 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_107, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Int_13));
                  }
                  {
                    ml_backend__ml_unify_gen__ConstRval_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstRval_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstRval_14, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_107));
                  }
                }
              else
                {
                  MR_Word ml_backend__ml_unify_gen__Var_125;

                  {
                    ml_backend__ml_unify_gen__Var_125 = parse_tree__builtin_lib_types__char_type_0_f_0();
                  }
                  {
                    ml_backend__ml_unify_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_unify_gen__Type_7, ml_backend__ml_unify_gen__Var_125);
                  }
                  if (ml_backend__ml_unify_gen__succeeded)
                    {
                      MR_Word ml_backend__ml_unify_gen__Var_108;

                      {
                        ml_backend__ml_unify_gen__Var_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_108, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Int_13));
                      }
                      {
                        ml_backend__ml_unify_gen__ConstRval_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstRval_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstRval_14, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_108));
                      }
                    }
                  else
                    {
                      MR_Word ml_backend__ml_unify_gen__MLDS_Type_15;
                      MR_Word ml_backend__ml_unify_gen__Var_109;

                      {
                        ml_backend__ml_unify_gen__MLDS_Type_15 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_8, ml_backend__ml_unify_gen__Type_7);
                      }
                      {
                        ml_backend__ml_unify_gen__Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_109, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Int_13));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_109, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_15));
                      }
                      {
                        ml_backend__ml_unify_gen__ConstRval_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstRval_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstRval_14, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_109));
                      }
                    }
                }
              {
                ml_backend__ml_unify_gen__TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_9));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 3) = ((MR_Box) (ml_backend__ml_unify_gen__ConstRval_14));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Unsigned ml_backend__ml_unify_gen__UInt_16 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_6, (MR_Integer) 1)));
              MR_Word ml_backend__ml_unify_gen__Var_105;
              MR_Word ml_backend__ml_unify_gen__Var_106;

              {
                ml_backend__ml_unify_gen__Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_106, 1) = ((MR_Box) (ml_backend__ml_unify_gen__UInt_16));
              }
              {
                ml_backend__ml_unify_gen__Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_105, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_106));
              }
              {
                ml_backend__ml_unify_gen__TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 28))));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_9));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Var_105));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_unify_gen__ForeignLang_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_6, (MR_Integer) 1)));
              MR_String ml_backend__ml_unify_gen__ForeignVal_18 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_6, (MR_Integer) 2)));
              MR_Word ml_backend__ml_unify_gen__Const_19;
              MR_Word ml_backend__ml_unify_gen__Var_102;
              MR_Word ml_backend__ml_unify_gen__MLDS_Type_117;

              {
                ml_backend__ml_unify_gen__MLDS_Type_117 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_8, ml_backend__ml_unify_gen__Type_7);
              }
              {
                ml_backend__ml_unify_gen__Var_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_102, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ForeignLang_17));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_102, 2) = ((MR_Box) (ml_backend__ml_unify_gen__ForeignVal_18));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_102, 3) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_117));
              }
              {
                ml_backend__ml_unify_gen__Const_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Const_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Const_19, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_102));
              }
              {
                ml_backend__ml_unify_gen__TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_9));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Const_19));
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
          case (MR_Integer) 11:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "function \140ml_backend.ml_unify_gen.ml_gen_tag_test_rval\'/4", (MR_String) "bad tag");
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer ml_backend__ml_unify_gen__UnsharedTagNum_126 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_6, (MR_Integer) 1)));
              MR_Word ml_backend__ml_unify_gen__RvalTag_127;
              MR_Word ml_backend__ml_unify_gen__UnsharedTag_128;
              MR_Word ml_backend__ml_unify_gen__Var_133;
              MR_Word ml_backend__ml_unify_gen__Var_134;

              {
                ml_backend__ml_unify_gen__RvalTag_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalTag_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalTag_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_4[8])));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalTag_127, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_9));
              }
              {
                ml_backend__ml_unify_gen__Var_134 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_134, 0) = ((MR_Box) (ml_backend__ml_unify_gen__UnsharedTagNum_126));
              }
              {
                ml_backend__ml_unify_gen__Var_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_133, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_134));
              }
              {
                ml_backend__ml_unify_gen__UnsharedTag_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnsharedTag_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnsharedTag_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_4[6])));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnsharedTag_128, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_133));
              }
              {
                ml_backend__ml_unify_gen__TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 2) = ((MR_Box) (ml_backend__ml_unify_gen__RvalTag_127));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 3) = ((MR_Box) (ml_backend__ml_unify_gen__UnsharedTag_128));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer ml_backend__ml_unify_gen__UnsharedTagNum_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_6, (MR_Integer) 1)));
              MR_Word ml_backend__ml_unify_gen__RvalTag_40;
              MR_Word ml_backend__ml_unify_gen__UnsharedTag_41;
              MR_Word ml_backend__ml_unify_gen__Var_94;
              MR_Word ml_backend__ml_unify_gen__Var_95;

              {
                ml_backend__ml_unify_gen__RvalTag_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalTag_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalTag_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_4[8])));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalTag_40, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_9));
              }
              {
                ml_backend__ml_unify_gen__Var_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_95, 0) = ((MR_Box) (ml_backend__ml_unify_gen__UnsharedTagNum_39));
              }
              {
                ml_backend__ml_unify_gen__Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_94, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_95));
              }
              {
                ml_backend__ml_unify_gen__UnsharedTag_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnsharedTag_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnsharedTag_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_4[6])));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__UnsharedTag_41, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_94));
              }
              {
                ml_backend__ml_unify_gen__TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 2) = ((MR_Box) (ml_backend__ml_unify_gen__RvalTag_40));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 3) = ((MR_Box) (ml_backend__ml_unify_gen__UnsharedTag_41));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer ml_backend__ml_unify_gen__PrimaryTagNum_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_6, (MR_Integer) 1)));
              MR_Integer ml_backend__ml_unify_gen__SecondaryTagNum_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_6, (MR_Integer) 2)));
              MR_Word ml_backend__ml_unify_gen__SecondaryTagField_44;
              MR_Word ml_backend__ml_unify_gen__SecondaryTagTestRval_45;
              MR_Word ml_backend__ml_unify_gen__Globals_46;
              MR_Integer ml_backend__ml_unify_gen__NumTagBits_47;
              MR_Word ml_backend__ml_unify_gen__Var_79;
              MR_Word ml_backend__ml_unify_gen__Var_80;

              {
                ml_backend__ml_unify_gen__SecondaryTagField_44 = ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0(ml_backend__ml_unify_gen__ModuleInfo_8, ml_backend__ml_unify_gen__PrimaryTagNum_42, ml_backend__ml_unify_gen__Type_7, ml_backend__ml_unify_gen__Rval_9);
              }
              {
                ml_backend__ml_unify_gen__Var_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_80, 0) = ((MR_Box) (ml_backend__ml_unify_gen__SecondaryTagNum_43));
              }
              {
                ml_backend__ml_unify_gen__Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_79, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_80));
              }
              {
                ml_backend__ml_unify_gen__SecondaryTagTestRval_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__SecondaryTagTestRval_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__SecondaryTagTestRval_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__SecondaryTagTestRval_45, 2) = ((MR_Box) (ml_backend__ml_unify_gen__SecondaryTagField_44));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__SecondaryTagTestRval_45, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Var_79));
              }
              {
                hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_unify_gen__ModuleInfo_8, &ml_backend__ml_unify_gen__Globals_46);
              }
              {
                libs__globals__lookup_int_option_3_p_0(ml_backend__ml_unify_gen__Globals_46, (MR_Integer) 247, &ml_backend__ml_unify_gen__NumTagBits_47);
              }
              ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__NumTagBits_47 == (MR_Integer) 0);
              if (ml_backend__ml_unify_gen__succeeded)
                ml_backend__ml_unify_gen__TagTestRval_10 = ml_backend__ml_unify_gen__SecondaryTagTestRval_45;
              else
                {
                  MR_Word ml_backend__ml_unify_gen__RvalPTag_48;
                  MR_Word ml_backend__ml_unify_gen__PrimaryTagRval_49;
                  MR_Word ml_backend__ml_unify_gen__PrimaryTagTestRval_50;
                  MR_Word ml_backend__ml_unify_gen__Var_86;
                  MR_Word ml_backend__ml_unify_gen__Var_87;

                  {
                    ml_backend__ml_unify_gen__RvalPTag_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalPTag_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalPTag_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_4[8])));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__RvalPTag_48, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_9));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_87, 0) = ((MR_Box) (ml_backend__ml_unify_gen__PrimaryTagNum_42));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_86, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_87));
                  }
                  {
                    ml_backend__ml_unify_gen__PrimaryTagRval_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__PrimaryTagRval_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__PrimaryTagRval_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_4[6])));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__PrimaryTagRval_49, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_86));
                  }
                  {
                    ml_backend__ml_unify_gen__PrimaryTagTestRval_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__PrimaryTagTestRval_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__PrimaryTagTestRval_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__PrimaryTagTestRval_50, 2) = ((MR_Box) (ml_backend__ml_unify_gen__RvalPTag_48));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__PrimaryTagTestRval_50, 3) = ((MR_Box) (ml_backend__ml_unify_gen__PrimaryTagRval_49));
                  }
                  {
                    ml_backend__ml_unify_gen__TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 2) = ((MR_Box) (ml_backend__ml_unify_gen__PrimaryTagTestRval_50));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 3) = ((MR_Box) (ml_backend__ml_unify_gen__SecondaryTagTestRval_45));
                  }
                }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Integer ml_backend__ml_unify_gen__Bits_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_6, (MR_Integer) 1)));
              MR_Integer ml_backend__ml_unify_gen__Num_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_6, (MR_Integer) 2)));
              MR_Word ml_backend__ml_unify_gen__Var_70;
              MR_Word ml_backend__ml_unify_gen__Var_71;
              MR_Word ml_backend__ml_unify_gen__Var_72;
              MR_Word ml_backend__ml_unify_gen__Var_73;
              MR_Word ml_backend__ml_unify_gen__Var_76;
              MR_Word ml_backend__ml_unify_gen__Var_77;
              MR_Word ml_backend__ml_unify_gen__MLDS_Type_118;

              {
                ml_backend__ml_unify_gen__MLDS_Type_118 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_8, ml_backend__ml_unify_gen__Type_7);
              }
              {
                ml_backend__ml_unify_gen__Var_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_71, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_118));
              }
              {
                ml_backend__ml_unify_gen__Var_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_77, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Num_52));
              }
              {
                ml_backend__ml_unify_gen__Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_76, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_77));
              }
              {
                ml_backend__ml_unify_gen__Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_4[4])));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_73, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_76));
              }
              {
                ml_backend__ml_unify_gen__Var_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_72, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Bits_51));
                MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_72, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_73));
              }
              {
                ml_backend__ml_unify_gen__Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_70, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_71));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_70, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_72));
              }
              {
                ml_backend__ml_unify_gen__TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_9));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Var_70));
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word ml_backend__ml_unify_gen__ReservedAddr_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_6, (MR_Integer) 1)));
              MR_Word ml_backend__ml_unify_gen__ReservedAddrRval_54;
              MR_Word ml_backend__ml_unify_gen__MLDS_Type_119;

              {
                ml_backend__ml_unify_gen__MLDS_Type_119 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_8, ml_backend__ml_unify_gen__Type_7);
              }
              {
                ml_backend__ml_unify_gen__ReservedAddrRval_54 = ml_backend__ml_unify_gen__ml_gen_reserved_address_3_f_0(ml_backend__ml_unify_gen__ModuleInfo_8, ml_backend__ml_unify_gen__ReservedAddr_53, ml_backend__ml_unify_gen__MLDS_Type_119);
              }
              {
                ml_backend__ml_unify_gen__TagTestRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_9));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TagTestRval_10, 3) = ((MR_Box) (ml_backend__ml_unify_gen__ReservedAddrRval_54));
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ml_backend__ml_unify_gen__ReservedAddrs_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_6, (MR_Integer) 1)));
              MR_Word ml_backend__ml_unify_gen__ThisTag_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_6, (MR_Integer) 2)));
              MR_Word ml_backend__ml_unify_gen__CheckReservedAddrs_57;
              MR_Word ml_backend__ml_unify_gen__MatchesThisTag_62;
              MR_Box ml_backend__ml_unify_gen__conv1_TagTestRval_10;

              {
                ml_backend__ml_unify_gen__CheckReservedAddrs_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__CheckReservedAddrs_57, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__CheckReservedAddrs_57, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_tag_test_rval_4_f_0_1));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__CheckReservedAddrs_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__CheckReservedAddrs_57, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Type_7));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__CheckReservedAddrs_57, 4) = ((MR_Box) (ml_backend__ml_unify_gen__ModuleInfo_8));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__CheckReservedAddrs_57, 5) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_9));
              }
              {
                ml_backend__ml_unify_gen__MatchesThisTag_62 = ml_backend__ml_unify_gen__ml_gen_tag_test_rval_4_f_0(ml_backend__ml_unify_gen__ThisTag_56, ml_backend__ml_unify_gen__Type_7, ml_backend__ml_unify_gen__ModuleInfo_8, ml_backend__ml_unify_gen__Rval_9);
              }
              {
                ml_backend__ml_unify_gen__conv1_TagTestRval_10 = mercury__list__foldr_3_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ml_backend__ml_unify_gen__CheckReservedAddrs_57, ml_backend__ml_unify_gen__ReservedAddrs_55, ((MR_Box) (ml_backend__ml_unify_gen__MatchesThisTag_62)));
              }
              ml_backend__ml_unify_gen__TagTestRval_10 = ((MR_Word) ml_backend__ml_unify_gen__conv1_TagTestRval_10);
            }
            break;
        }
        break;
    }
    return ml_backend__ml_unify_gen__TagTestRval_10;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_semi_deconstruct_8_p_0(
  MR_Word ml_backend__ml_unify_gen__Var_9,
  MR_Word ml_backend__ml_unify_gen__ConsId_10,
  MR_Word ml_backend__ml_unify_gen__Args_11,
  MR_Word ml_backend__ml_unify_gen__ArgModes_12,
  MR_Word ml_backend__ml_unify_gen__Context_13,
  MR_Word * ml_backend__ml_unify_gen__Statements_14,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_25,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_26)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__TagTestExpression_16;
    MR_Word ml_backend__ml_unify_gen__SetTagTestResult_17;
    MR_Word ml_backend__ml_unify_gen__SucceededExpression_18;
    MR_Word ml_backend__ml_unify_gen__GetArgsStatements_19;
    MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_27_27;
    MR_Word ml_backend__ml_unify_gen__Type_44;
    MR_Word ml_backend__ml_unify_gen__Tag_45;
    MR_Word ml_backend__ml_unify_gen__ModuleInfo_50;

    {
      ml_backend__ml_unify_gen__ml_gen_tag_test_5_p_0(ml_backend__ml_unify_gen__Var_9, ml_backend__ml_unify_gen__ConsId_10, &ml_backend__ml_unify_gen__TagTestExpression_16, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_25, &ml_backend__ml_unify_gen__STATE_VARIABLE_Info_27_27);
    }
    {
      ml_backend__ml_code_util__ml_gen_set_success_4_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_27_27, ml_backend__ml_unify_gen__TagTestExpression_16, ml_backend__ml_unify_gen__Context_13, &ml_backend__ml_unify_gen__SetTagTestResult_17);
    }
    {
      ml_backend__ml_code_util__ml_gen_test_success_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_27_27, &ml_backend__ml_unify_gen__SucceededExpression_18);
    }
    {
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_27_27, ml_backend__ml_unify_gen__Var_9, &ml_backend__ml_unify_gen__Type_44);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_27_27, &ml_backend__ml_unify_gen__ModuleInfo_50);
    }
    {
      ml_backend__ml_unify_gen__Tag_45 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_50, ml_backend__ml_unify_gen__ConsId_10);
    }
    {
      ml_backend__ml_unify_gen__ml_gen_det_deconstruct_tag_10_p_0(ml_backend__ml_unify_gen__Tag_45, ml_backend__ml_unify_gen__Type_44, ml_backend__ml_unify_gen__Var_9, ml_backend__ml_unify_gen__ConsId_10, ml_backend__ml_unify_gen__Args_11, ml_backend__ml_unify_gen__ArgModes_12, ml_backend__ml_unify_gen__Context_13, &ml_backend__ml_unify_gen__GetArgsStatements_19, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_27_27, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_26);
    }
    if ((ml_backend__ml_unify_gen__GetArgsStatements_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_unify_gen__Statements_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__SetTagTestResult_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    else
      {
        MR_Word ml_backend__ml_unify_gen__GetArgs_22;
        MR_Word ml_backend__ml_unify_gen__IfStmt_23;
        MR_Word ml_backend__ml_unify_gen__IfStatement_24;
        MR_Word ml_backend__ml_unify_gen__Var_31;
        MR_Word ml_backend__ml_unify_gen__Var_32;

        {
          ml_backend__ml_unify_gen__GetArgs_22 = ml_backend__ml_code_util__ml_gen_block_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_unify_gen__GetArgsStatements_19, ml_backend__ml_unify_gen__Context_13);
        }
        {
          ml_backend__ml_unify_gen__IfStmt_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__IfStmt_23, 0) = ((MR_Box) (ml_backend__ml_unify_gen__SucceededExpression_18));
          MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__IfStmt_23, 1) = ((MR_Box) (ml_backend__ml_unify_gen__GetArgs_22));
          MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__IfStmt_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ml_backend__ml_unify_gen__Var_31 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_unify_gen__Context_13);
        }
        {
          ml_backend__ml_unify_gen__IfStatement_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__IfStatement_24, 0) = ((MR_Box) (ml_backend__ml_unify_gen__IfStmt_23));
          MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__IfStatement_24, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_31));
        }
        {
          ml_backend__ml_unify_gen__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_32, 0) = ((MR_Box) (ml_backend__ml_unify_gen__IfStatement_24));
          MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_unify_gen__Statements_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__SetTagTestResult_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_32));
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_direct_arg_deconstruct_9_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_10,
  MR_Word ml_backend__ml_unify_gen__ArgMode_11,
  MR_Integer ml_backend__ml_unify_gen__Ptag_12,
  MR_Word ml_backend__ml_unify_gen__ArgLval_13,
  MR_Word ml_backend__ml_unify_gen__ArgType_14,
  MR_Word ml_backend__ml_unify_gen__VarLval_15,
  MR_Word ml_backend__ml_unify_gen__VarType_16,
  MR_Word ml_backend__ml_unify_gen__Context_17,
  MR_Word * ml_backend__ml_unify_gen__Statements_18)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__LeftFromToInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgMode_11, (MR_Integer) 0)));
    MR_Word ml_backend__ml_unify_gen__RightFromToInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgMode_11, (MR_Integer) 1)));
    MR_Word ml_backend__ml_unify_gen__LeftTopFunctorMode_21;
    MR_Word ml_backend__ml_unify_gen__RightTopFunctorMode_22;

    {
      check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ml_backend__ml_unify_gen__ModuleInfo_10, ml_backend__ml_unify_gen__LeftFromToInsts_19, ml_backend__ml_unify_gen__ArgType_14, &ml_backend__ml_unify_gen__LeftTopFunctorMode_21);
    }
    {
      check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ml_backend__ml_unify_gen__ModuleInfo_10, ml_backend__ml_unify_gen__RightFromToInsts_20, ml_backend__ml_unify_gen__ArgType_14, &ml_backend__ml_unify_gen__RightTopFunctorMode_22);
    }
    {
      MR_Word ml_backend__ml_unify_gen__Var_29;

      {
        ml_backend__ml_unify_gen__Var_29 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_10, ml_backend__ml_unify_gen__ArgType_14);
      }
      ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_29 == (MR_Integer) 0);
    }
    if (!(ml_backend__ml_unify_gen__succeeded))
      {
        MR_Word ml_backend__ml_unify_gen__Var_28;

        {
          ml_backend__ml_unify_gen__Var_28 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_10, ml_backend__ml_unify_gen__VarType_16);
        }
        ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_28 == (MR_Integer) 0);
      }
    if (ml_backend__ml_unify_gen__succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_deconstruct\'/9", (MR_String) "dummy unify");
          return;
        }
      }
    else
      {
        ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__LeftTopFunctorMode_21 == (MR_Integer) 0);
        if (ml_backend__ml_unify_gen__succeeded)
          ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__RightTopFunctorMode_22 == (MR_Integer) 0);
        if (ml_backend__ml_unify_gen__succeeded)
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_deconstruct\'/9", (MR_String) "test in arg of [de]construction");
              return;
            }
          }
        else
          {
            ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__LeftTopFunctorMode_21 == (MR_Integer) 0);
            if (ml_backend__ml_unify_gen__succeeded)
              ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__RightTopFunctorMode_22 == (MR_Integer) 1);
            if (ml_backend__ml_unify_gen__succeeded)
              {
                MR_Word ml_backend__ml_unify_gen__VarRval_23;
                MR_Word ml_backend__ml_unify_gen__MLDS_Type_24;
                MR_Word ml_backend__ml_unify_gen__CastRval_25;
                MR_Word ml_backend__ml_unify_gen__Statement_26;
                MR_Word ml_backend__ml_unify_gen__Var_37;
                MR_Word ml_backend__ml_unify_gen__Var_38;
                MR_Word ml_backend__ml_unify_gen__Var_39;
                MR_Word ml_backend__ml_unify_gen__Var_41;
                MR_Word ml_backend__ml_unify_gen__Var_42;

                {
                  ml_backend__ml_unify_gen__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_37, 0) = ((MR_Box) (ml_backend__ml_unify_gen__VarLval_15));
                }
                {
                  ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_unify_gen__ModuleInfo_10, ml_backend__ml_unify_gen__VarType_16, ml_backend__ml_unify_gen__ArgType_14, (MR_Integer) 0, ml_backend__ml_unify_gen__Var_37, &ml_backend__ml_unify_gen__VarRval_23);
                }
                {
                  ml_backend__ml_unify_gen__MLDS_Type_24 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_10, ml_backend__ml_unify_gen__ArgType_14);
                }
                {
                  ml_backend__ml_unify_gen__Var_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_38, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_24));
                }
                {
                  ml_backend__ml_unify_gen__Var_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_42, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Ptag_12));
                }
                {
                  ml_backend__ml_unify_gen__Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_41, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_42));
                }
                {
                  ml_backend__ml_unify_gen__Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_39, 2) = ((MR_Box) (ml_backend__ml_unify_gen__VarRval_23));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_39, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Var_41));
                }
                {
                  ml_backend__ml_unify_gen__CastRval_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastRval_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastRval_25, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_38));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastRval_25, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_39));
                }
                {
                  ml_backend__ml_unify_gen__Statement_26 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__ArgLval_13, ml_backend__ml_unify_gen__CastRval_25, ml_backend__ml_unify_gen__Context_17);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ml_backend__ml_unify_gen__Statements_18 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Statement_26));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            else
              {
                ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__LeftTopFunctorMode_21 == (MR_Integer) 1);
                if (ml_backend__ml_unify_gen__succeeded)
                  ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__RightTopFunctorMode_22 == (MR_Integer) 0);
                if (ml_backend__ml_unify_gen__succeeded)
                  {
                    MR_Word ml_backend__ml_unify_gen__ArgRval_27;
                    MR_Word ml_backend__ml_unify_gen__Var_45;
                    MR_Word ml_backend__ml_unify_gen__Var_46;
                    MR_Word ml_backend__ml_unify_gen__Var_47;
                    MR_Word ml_backend__ml_unify_gen__MLDS_Type_52;
                    MR_Word ml_backend__ml_unify_gen__CastRval_53;
                    MR_Word ml_backend__ml_unify_gen__Statement_54;

                    {
                      ml_backend__ml_unify_gen__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_45, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ArgLval_13));
                    }
                    {
                      ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_unify_gen__ModuleInfo_10, ml_backend__ml_unify_gen__ArgType_14, ml_backend__ml_unify_gen__VarType_16, (MR_Integer) 0, ml_backend__ml_unify_gen__Var_45, &ml_backend__ml_unify_gen__ArgRval_27);
                    }
                    {
                      ml_backend__ml_unify_gen__MLDS_Type_52 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_10, ml_backend__ml_unify_gen__VarType_16);
                    }
                    {
                      ml_backend__ml_unify_gen__Var_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_46, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_52));
                    }
                    {
                      ml_backend__ml_unify_gen__Var_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_47, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Ptag_12));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_47, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ArgRval_27));
                    }
                    {
                      ml_backend__ml_unify_gen__CastRval_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastRval_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastRval_53, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_46));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastRval_53, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_47));
                    }
                    {
                      ml_backend__ml_unify_gen__Statement_54 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__VarLval_15, ml_backend__ml_unify_gen__CastRval_53, ml_backend__ml_unify_gen__Context_17);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ml_backend__ml_unify_gen__Statements_18 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Statement_54));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                else
                  {
                    ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__LeftTopFunctorMode_21 == (MR_Integer) 2);
                    if (ml_backend__ml_unify_gen__succeeded)
                      ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__RightTopFunctorMode_22 == (MR_Integer) 2);
                    if (ml_backend__ml_unify_gen__succeeded)
                      *ml_backend__ml_unify_gen__Statements_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    else
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_deconstruct\'/9", (MR_String) "some strange unify");
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
ml_backend__ml_unify_gen__ml_gen_direct_arg_construct_9_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_10,
  MR_Word ml_backend__ml_unify_gen__ArgMode_11,
  MR_Integer ml_backend__ml_unify_gen__Ptag_12,
  MR_Word ml_backend__ml_unify_gen__ArgLval_13,
  MR_Word ml_backend__ml_unify_gen__ArgType_14,
  MR_Word ml_backend__ml_unify_gen__VarLval_15,
  MR_Word ml_backend__ml_unify_gen__VarType_16,
  MR_Word ml_backend__ml_unify_gen__Context_17,
  MR_Word * ml_backend__ml_unify_gen__Statements_18)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__LeftFromToInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgMode_11, (MR_Integer) 0)));
    MR_Word ml_backend__ml_unify_gen__RightFromToInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgMode_11, (MR_Integer) 1)));
    MR_Word ml_backend__ml_unify_gen__LeftTopFunctorMode_21;
    MR_Word ml_backend__ml_unify_gen__RightTopFunctorMode_22;

    {
      check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ml_backend__ml_unify_gen__ModuleInfo_10, ml_backend__ml_unify_gen__LeftFromToInsts_19, ml_backend__ml_unify_gen__ArgType_14, &ml_backend__ml_unify_gen__LeftTopFunctorMode_21);
    }
    {
      check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ml_backend__ml_unify_gen__ModuleInfo_10, ml_backend__ml_unify_gen__RightFromToInsts_20, ml_backend__ml_unify_gen__ArgType_14, &ml_backend__ml_unify_gen__RightTopFunctorMode_22);
    }
    {
      MR_Word ml_backend__ml_unify_gen__Var_29;

      {
        ml_backend__ml_unify_gen__Var_29 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_10, ml_backend__ml_unify_gen__ArgType_14);
      }
      ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_29 == (MR_Integer) 0);
    }
    if (!(ml_backend__ml_unify_gen__succeeded))
      {
        MR_Word ml_backend__ml_unify_gen__Var_28;

        {
          ml_backend__ml_unify_gen__Var_28 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_10, ml_backend__ml_unify_gen__VarType_16);
        }
        ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_28 == (MR_Integer) 0);
      }
    if (ml_backend__ml_unify_gen__succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_construct\'/9", (MR_String) "dummy unify");
          return;
        }
      }
    else
      {
        ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__LeftTopFunctorMode_21 == (MR_Integer) 0);
        if (ml_backend__ml_unify_gen__succeeded)
          ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__RightTopFunctorMode_22 == (MR_Integer) 0);
        if (ml_backend__ml_unify_gen__succeeded)
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_construct\'/9", (MR_String) "test in arg of [de]construction");
              return;
            }
          }
        else
          {
            ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__LeftTopFunctorMode_21 == (MR_Integer) 0);
            if (ml_backend__ml_unify_gen__succeeded)
              ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__RightTopFunctorMode_22 == (MR_Integer) 1);
            if (ml_backend__ml_unify_gen__succeeded)
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_construct\'/9", (MR_String) "left-to-right data flow in construction");
                  return;
                }
              }
            else
              {
                ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__LeftTopFunctorMode_21 == (MR_Integer) 1);
                if (ml_backend__ml_unify_gen__succeeded)
                  ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__RightTopFunctorMode_22 == (MR_Integer) 0);
                if (ml_backend__ml_unify_gen__succeeded)
                  {
                    MR_Word ml_backend__ml_unify_gen__ArgRval_23;
                    MR_Word ml_backend__ml_unify_gen__MLDS_Type_24;
                    MR_Word ml_backend__ml_unify_gen__CastRval_25;
                    MR_Word ml_backend__ml_unify_gen__Statement_26;
                    MR_Word ml_backend__ml_unify_gen__Var_40;
                    MR_Word ml_backend__ml_unify_gen__Var_41;
                    MR_Word ml_backend__ml_unify_gen__Var_42;

                    {
                      ml_backend__ml_unify_gen__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_40, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ArgLval_13));
                    }
                    {
                      ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_unify_gen__ModuleInfo_10, ml_backend__ml_unify_gen__ArgType_14, ml_backend__ml_unify_gen__VarType_16, (MR_Integer) 0, ml_backend__ml_unify_gen__Var_40, &ml_backend__ml_unify_gen__ArgRval_23);
                    }
                    {
                      ml_backend__ml_unify_gen__MLDS_Type_24 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_10, ml_backend__ml_unify_gen__VarType_16);
                    }
                    {
                      ml_backend__ml_unify_gen__Var_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_41, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_24));
                    }
                    {
                      ml_backend__ml_unify_gen__Var_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_42, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Ptag_12));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_42, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ArgRval_23));
                    }
                    {
                      ml_backend__ml_unify_gen__CastRval_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastRval_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastRval_25, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_41));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastRval_25, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_42));
                    }
                    {
                      ml_backend__ml_unify_gen__Statement_26 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__VarLval_15, ml_backend__ml_unify_gen__CastRval_25, ml_backend__ml_unify_gen__Context_17);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ml_backend__ml_unify_gen__Statements_18 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Statement_26));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                else
                  {
                    ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__LeftTopFunctorMode_21 == (MR_Integer) 2);
                    if (ml_backend__ml_unify_gen__succeeded)
                      ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__RightTopFunctorMode_22 == (MR_Integer) 2);
                    if (ml_backend__ml_unify_gen__succeeded)
                      {
                        MR_Word ml_backend__ml_unify_gen__MLDS_ArgType_27;
                        MR_Word ml_backend__ml_unify_gen__Var_45;
                        MR_Word ml_backend__ml_unify_gen__Var_46;
                        MR_Word ml_backend__ml_unify_gen__Var_47;
                        MR_Word ml_backend__ml_unify_gen__Var_48;
                        MR_Word ml_backend__ml_unify_gen__ArgRval_53;
                        MR_Word ml_backend__ml_unify_gen__MLDS_Type_54;
                        MR_Word ml_backend__ml_unify_gen__CastRval_55;
                        MR_Word ml_backend__ml_unify_gen__Statement_56;

                        {
                          ml_backend__ml_unify_gen__MLDS_ArgType_27 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_10, ml_backend__ml_unify_gen__ArgType_14);
                        }
                        {
                          ml_backend__ml_unify_gen__Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_46, 1) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_ArgType_27));
                        }
                        {
                          ml_backend__ml_unify_gen__Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_45, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_46));
                        }
                        {
                          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_unify_gen__ModuleInfo_10, ml_backend__ml_unify_gen__ArgType_14, ml_backend__ml_unify_gen__VarType_16, (MR_Integer) 0, ml_backend__ml_unify_gen__Var_45, &ml_backend__ml_unify_gen__ArgRval_53);
                        }
                        {
                          ml_backend__ml_unify_gen__MLDS_Type_54 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_10, ml_backend__ml_unify_gen__VarType_16);
                        }
                        {
                          ml_backend__ml_unify_gen__Var_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_47, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_54));
                        }
                        {
                          ml_backend__ml_unify_gen__Var_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_48, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Ptag_12));
                          MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_48, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ArgRval_53));
                        }
                        {
                          ml_backend__ml_unify_gen__CastRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastRval_55, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_47));
                          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastRval_55, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_48));
                        }
                        {
                          ml_backend__ml_unify_gen__Statement_56 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__VarLval_15, ml_backend__ml_unify_gen__CastRval_55, ml_backend__ml_unify_gen__Context_17);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *ml_backend__ml_unify_gen__Statements_18 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Statement_56));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                      }
                    else
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_direct_arg_construct\'/9", (MR_String) "some strange unify");
                          return;
                        }
                      }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_field_offset_pair_3_p_0(
  MR_Word ml_backend__ml_unify_gen__FieldLval_4,
  MR_Word * ml_backend__ml_unify_gen__FieldLvalA_5,
  MR_Word * ml_backend__ml_unify_gen__FieldLvalB_6)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__FieldLval_4)) == (MR_mktag((MR_Integer) 0)));
    MR_Word ml_backend__ml_unify_gen__Tag_7;
    MR_Word ml_backend__ml_unify_gen__Address_8;
    MR_Word ml_backend__ml_unify_gen__FieldIdA_9;
    MR_Word ml_backend__ml_unify_gen__PtrType_11;
    MR_Word ml_backend__ml_unify_gen__FieldOffsetA_12;
    MR_Word ml_backend__ml_unify_gen__Var_10;
    MR_Integer ml_backend__ml_unify_gen__Offset_13;
    MR_Word ml_backend__ml_unify_gen__Var_16;

    if (ml_backend__ml_unify_gen__succeeded)
      {
        ml_backend__ml_unify_gen__Tag_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__FieldLval_4, (MR_Integer) 0)));
        ml_backend__ml_unify_gen__Address_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__FieldLval_4, (MR_Integer) 1)));
        ml_backend__ml_unify_gen__FieldIdA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__FieldLval_4, (MR_Integer) 2)));
        ml_backend__ml_unify_gen__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__FieldLval_4, (MR_Integer) 3)));
        ml_backend__ml_unify_gen__PtrType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__FieldLval_4, (MR_Integer) 4)));
        ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__FieldIdA_9)) == (MR_mktag((MR_Integer) 0)));
        if (ml_backend__ml_unify_gen__succeeded)
          {
            ml_backend__ml_unify_gen__FieldOffsetA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__FieldIdA_9, (MR_Integer) 0)));
            ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__FieldOffsetA_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__FieldOffsetA_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (ml_backend__ml_unify_gen__succeeded)
              {
                ml_backend__ml_unify_gen__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__FieldOffsetA_12, (MR_Integer) 1)));
                ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__Var_16)) == (MR_mktag((MR_Integer) 2)));
                if (ml_backend__ml_unify_gen__succeeded)
                  ml_backend__ml_unify_gen__Offset_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_16, (MR_Integer) 0)));
              }
            if (ml_backend__ml_unify_gen__succeeded)
              {
                MR_Word ml_backend__ml_unify_gen__FieldIdB_14;
                MR_Word ml_backend__ml_unify_gen__SubstType_15;
                MR_Word ml_backend__ml_unify_gen__Var_17;
                MR_Word ml_backend__ml_unify_gen__Var_18;
                MR_Integer ml_backend__ml_unify_gen__Var_19 = (ml_backend__ml_unify_gen__Offset_13 + (MR_Integer) 1);

                {
                  ml_backend__ml_unify_gen__Var_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_18, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Var_19));
                }
                {
                  ml_backend__ml_unify_gen__Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_17, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_18));
                }
                {
                  ml_backend__ml_unify_gen__FieldIdB_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__FieldIdB_14, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Var_17));
                }
                ml_backend__ml_unify_gen__SubstType_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  *ml_backend__ml_unify_gen__FieldLvalA_5 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Tag_7));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Address_8));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_unify_gen__FieldIdA_9));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_unify_gen__SubstType_15));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_unify_gen__PtrType_11));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  *ml_backend__ml_unify_gen__FieldLvalB_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Tag_7));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Address_8));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_unify_gen__FieldIdB_14));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_unify_gen__SubstType_15));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_unify_gen__PtrType_11));
                }
              }
            else
              {
                {
                  mercury__require__sorry_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_field_offset_pair\'/3", (MR_String) "unexpected field offset");
                }
              }
            ml_backend__ml_unify_gen__succeeded = MR_TRUE;
          }
      }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_sub_unify_11_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_12,
  MR_Word ml_backend__ml_unify_gen__HighLevelData_13,
  MR_Word ml_backend__ml_unify_gen__ArgMode_14,
  MR_Word ml_backend__ml_unify_gen__ArgLval_15,
  MR_Word ml_backend__ml_unify_gen__ArgType_16,
  MR_Word ml_backend__ml_unify_gen__FieldLval_17,
  MR_Word ml_backend__ml_unify_gen__FieldType_18,
  MR_Word ml_backend__ml_unify_gen__FieldWidth_19,
  MR_Word ml_backend__ml_unify_gen__Context_20,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_0_48,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_49)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__LeftFromToInsts_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgMode_14, (MR_Integer) 0)));
    MR_Word ml_backend__ml_unify_gen__RightFromToInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgMode_14, (MR_Integer) 1)));
    MR_Word ml_backend__ml_unify_gen__LeftTopFunctorMode_24;
    MR_Word ml_backend__ml_unify_gen__RightTopFunctorMode_25;

    {
      check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ml_backend__ml_unify_gen__ModuleInfo_12, ml_backend__ml_unify_gen__LeftFromToInsts_22, ml_backend__ml_unify_gen__ArgType_16, &ml_backend__ml_unify_gen__LeftTopFunctorMode_24);
    }
    {
      check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ml_backend__ml_unify_gen__ModuleInfo_12, ml_backend__ml_unify_gen__RightFromToInsts_23, ml_backend__ml_unify_gen__ArgType_16, &ml_backend__ml_unify_gen__RightTopFunctorMode_25);
    }
    {
      MR_Word ml_backend__ml_unify_gen__Var_51;

      {
        ml_backend__ml_unify_gen__Var_51 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_12, ml_backend__ml_unify_gen__ArgType_16);
      }
      ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_51 == (MR_Integer) 0);
    }
    if (!(ml_backend__ml_unify_gen__succeeded))
      {
        MR_Word ml_backend__ml_unify_gen__Var_50;

        {
          ml_backend__ml_unify_gen__Var_50 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_12, ml_backend__ml_unify_gen__FieldType_18);
        }
        ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_50 == (MR_Integer) 0);
      }
    if (ml_backend__ml_unify_gen__succeeded)
      *ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_49 = ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_0_48;
    else
      {
        ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__LeftTopFunctorMode_24 == (MR_Integer) 0);
        if (ml_backend__ml_unify_gen__succeeded)
          ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__RightTopFunctorMode_25 == (MR_Integer) 0);
        if (ml_backend__ml_unify_gen__succeeded)
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_sub_unify\'/11", (MR_String) "test in arg of [de]construction");
              return;
            }
          }
        else
          {
            ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__LeftTopFunctorMode_24 == (MR_Integer) 0);
            if (ml_backend__ml_unify_gen__succeeded)
              ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__RightTopFunctorMode_25 == (MR_Integer) 1);
            if (ml_backend__ml_unify_gen__succeeded)
              {
                MR_Word ml_backend__ml_unify_gen__Statement_30;

                switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__FieldWidth_19)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(ml_backend__ml_unify_gen__FieldWidth_19)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ml_backend__ml_unify_gen__FieldRval_29;
                          MR_Word ml_backend__ml_unify_gen__Var_61;

                          {
                            ml_backend__ml_unify_gen__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_61, 0) = ((MR_Box) (ml_backend__ml_unify_gen__FieldLval_17));
                          }
                          {
                            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_unify_gen__ModuleInfo_12, ml_backend__ml_unify_gen__FieldType_18, ml_backend__ml_unify_gen__ArgType_16, (MR_Integer) 0, ml_backend__ml_unify_gen__Var_61, &ml_backend__ml_unify_gen__FieldRval_29);
                          }
                          switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__FieldWidth_19)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              {
                                ml_backend__ml_unify_gen__Statement_30 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__ArgLval_15, ml_backend__ml_unify_gen__FieldRval_29, ml_backend__ml_unify_gen__Context_20);
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_Integer ml_backend__ml_unify_gen__Mask_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__FieldWidth_19, (MR_Integer) 0)));
                                MR_Word ml_backend__ml_unify_gen__UnpackRval_32;

                                {
                                  ml_backend__ml_unify_gen__UnpackRval_32 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(ml_backend__ml_unify_gen__FieldRval_29, ml_backend__ml_unify_gen__Mask_31);
                                }
                                {
                                  ml_backend__ml_unify_gen__Statement_30 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__ArgLval_15, ml_backend__ml_unify_gen__UnpackRval_32, ml_backend__ml_unify_gen__Context_20);
                                }
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                                MR_Integer ml_backend__ml_unify_gen__Shift_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__FieldWidth_19, (MR_Integer) 0)));
                                MR_Word ml_backend__ml_unify_gen__Var_62;
                                MR_Integer ml_backend__ml_unify_gen__Mask_93 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__FieldWidth_19, (MR_Integer) 1)));
                                MR_Word ml_backend__ml_unify_gen__UnpackRval_94;

                                {
                                  ml_backend__ml_unify_gen__Var_62 = ml_backend__ml_unify_gen__ml_rshift_2_f_0(ml_backend__ml_unify_gen__FieldRval_29, ml_backend__ml_unify_gen__Shift_33);
                                }
                                {
                                  ml_backend__ml_unify_gen__UnpackRval_94 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(ml_backend__ml_unify_gen__Var_62, ml_backend__ml_unify_gen__Mask_93);
                                }
                                {
                                  ml_backend__ml_unify_gen__Statement_30 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__ArgLval_15, ml_backend__ml_unify_gen__UnpackRval_94, ml_backend__ml_unify_gen__Context_20);
                                }
                              }
                              break;
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ml_backend__ml_unify_gen__FieldRval_95;
                          MR_Word ml_backend__ml_unify_gen__FieldLvalA_34;
                          MR_Word ml_backend__ml_unify_gen__FieldLvalB_35;

                          {
                            ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen__ml_field_offset_pair_3_p_0(ml_backend__ml_unify_gen__FieldLval_17, &ml_backend__ml_unify_gen__FieldLvalA_34, &ml_backend__ml_unify_gen__FieldLvalB_35);
                          }
                          if (ml_backend__ml_unify_gen__succeeded)
                            {
                              MR_Word ml_backend__ml_unify_gen__Var_56;
                              MR_Word ml_backend__ml_unify_gen__Var_57;

                              {
                                ml_backend__ml_unify_gen__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_56, 0) = ((MR_Box) (ml_backend__ml_unify_gen__FieldLvalA_34));
                              }
                              {
                                ml_backend__ml_unify_gen__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_57, 0) = ((MR_Box) (ml_backend__ml_unify_gen__FieldLvalB_35));
                              }
                              {
                                ml_backend__ml_unify_gen__FieldRval_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__FieldRval_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__FieldRval_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 55))));
                                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__FieldRval_95, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_56));
                                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__FieldRval_95, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Var_57));
                              }
                            }
                          else
                            {
                              MR_Word ml_backend__ml_unify_gen__Var_59;

                              {
                                ml_backend__ml_unify_gen__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_59, 0) = ((MR_Box) (ml_backend__ml_unify_gen__FieldLval_17));
                              }
                              {
                                ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_unify_gen__ModuleInfo_12, ml_backend__ml_unify_gen__FieldType_18, ml_backend__ml_unify_gen__ArgType_16, (MR_Integer) 0, ml_backend__ml_unify_gen__Var_59, &ml_backend__ml_unify_gen__FieldRval_95);
                              }
                            }
                          {
                            ml_backend__ml_unify_gen__Statement_30 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__ArgLval_15, ml_backend__ml_unify_gen__FieldRval_95, ml_backend__ml_unify_gen__Context_20);
                          }
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      MR_Word ml_backend__ml_unify_gen__FieldRval_29;
                      MR_Word ml_backend__ml_unify_gen__Var_61;

                      {
                        ml_backend__ml_unify_gen__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_61, 0) = ((MR_Box) (ml_backend__ml_unify_gen__FieldLval_17));
                      }
                      {
                        ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_unify_gen__ModuleInfo_12, ml_backend__ml_unify_gen__FieldType_18, ml_backend__ml_unify_gen__ArgType_16, (MR_Integer) 0, ml_backend__ml_unify_gen__Var_61, &ml_backend__ml_unify_gen__FieldRval_29);
                      }
                      switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__FieldWidth_19)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            ml_backend__ml_unify_gen__Statement_30 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__ArgLval_15, ml_backend__ml_unify_gen__FieldRval_29, ml_backend__ml_unify_gen__Context_20);
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Integer ml_backend__ml_unify_gen__Mask_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__FieldWidth_19, (MR_Integer) 0)));
                            MR_Word ml_backend__ml_unify_gen__UnpackRval_32;

                            {
                              ml_backend__ml_unify_gen__UnpackRval_32 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(ml_backend__ml_unify_gen__FieldRval_29, ml_backend__ml_unify_gen__Mask_31);
                            }
                            {
                              ml_backend__ml_unify_gen__Statement_30 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__ArgLval_15, ml_backend__ml_unify_gen__UnpackRval_32, ml_backend__ml_unify_gen__Context_20);
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Integer ml_backend__ml_unify_gen__Shift_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__FieldWidth_19, (MR_Integer) 0)));
                            MR_Word ml_backend__ml_unify_gen__Var_62;
                            MR_Integer ml_backend__ml_unify_gen__Mask_93 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__FieldWidth_19, (MR_Integer) 1)));
                            MR_Word ml_backend__ml_unify_gen__UnpackRval_94;

                            {
                              ml_backend__ml_unify_gen__Var_62 = ml_backend__ml_unify_gen__ml_rshift_2_f_0(ml_backend__ml_unify_gen__FieldRval_29, ml_backend__ml_unify_gen__Shift_33);
                            }
                            {
                              ml_backend__ml_unify_gen__UnpackRval_94 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(ml_backend__ml_unify_gen__Var_62, ml_backend__ml_unify_gen__Mask_93);
                            }
                            {
                              ml_backend__ml_unify_gen__Statement_30 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__ArgLval_15, ml_backend__ml_unify_gen__UnpackRval_94, ml_backend__ml_unify_gen__Context_20);
                            }
                          }
                          break;
                      }
                    }
                    break;
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_49 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Statement_30));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_0_48));
                }
              }
            else
              {
                ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__LeftTopFunctorMode_24 == (MR_Integer) 1);
                if (ml_backend__ml_unify_gen__succeeded)
                  ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__RightTopFunctorMode_25 == (MR_Integer) 0);
                if (ml_backend__ml_unify_gen__succeeded)
                  {
                    MR_Word ml_backend__ml_unify_gen__ArgRval_36;
                    MR_Word ml_backend__ml_unify_gen__Var_65;

                    {
                      ml_backend__ml_unify_gen__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_65, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ArgLval_15));
                    }
                    {
                      ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_unify_gen__ModuleInfo_12, ml_backend__ml_unify_gen__ArgType_16, ml_backend__ml_unify_gen__FieldType_18, (MR_Integer) 0, ml_backend__ml_unify_gen__Var_65, &ml_backend__ml_unify_gen__ArgRval_36);
                    }
                    switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__FieldWidth_19)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(ml_backend__ml_unify_gen__FieldWidth_19)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word ml_backend__ml_unify_gen__Statement_96;

                              {
                                ml_backend__ml_unify_gen__Statement_96 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__FieldLval_17, ml_backend__ml_unify_gen__ArgRval_36, ml_backend__ml_unify_gen__Context_20);
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                *ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_49 = base;
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Statement_96));
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_0_48));
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word ml_backend__ml_unify_gen__FieldLvalA_102;
                              MR_Word ml_backend__ml_unify_gen__FieldLvalB_103;

                              {
                                ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen__ml_field_offset_pair_3_p_0(ml_backend__ml_unify_gen__FieldLval_17, &ml_backend__ml_unify_gen__FieldLvalA_102, &ml_backend__ml_unify_gen__FieldLvalB_103);
                              }
                              if (ml_backend__ml_unify_gen__succeeded)
                                {
                                  MR_Word ml_backend__ml_unify_gen__FloatWordA_41;
                                  MR_Word ml_backend__ml_unify_gen__FloatWordB_42;
                                  MR_Word ml_backend__ml_unify_gen__IntFieldType_43;
                                  MR_Word ml_backend__ml_unify_gen__ArgRvalA_44;
                                  MR_Word ml_backend__ml_unify_gen__ArgRvalB_45;
                                  MR_Word ml_backend__ml_unify_gen__StatementA_46;
                                  MR_Word ml_backend__ml_unify_gen__StatementB_47;
                                  MR_Word ml_backend__ml_unify_gen__Var_74;
                                  MR_Word ml_backend__ml_unify_gen__Var_76;
                                  MR_Word ml_backend__ml_unify_gen__Var_78;
                                  MR_Word ml_backend__ml_unify_gen__Var_81;

                                  {
                                    ml_backend__ml_unify_gen__FloatWordA_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__FloatWordA_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__FloatWordA_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 54))));
                                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__FloatWordA_41, 2) = ((MR_Box) (ml_backend__ml_unify_gen__ArgRval_36));
                                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__FloatWordA_41, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[4])));
                                  }
                                  {
                                    ml_backend__ml_unify_gen__FloatWordB_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__FloatWordB_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__FloatWordB_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 54))));
                                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__FloatWordB_42, 2) = ((MR_Box) (ml_backend__ml_unify_gen__ArgRval_36));
                                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__FloatWordB_42, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[7])));
                                  }
                                  {
                                    ml_backend__ml_unify_gen__Var_74 = parse_tree__builtin_lib_types__int_type_0_f_0();
                                  }
                                  {
                                    ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(ml_backend__ml_unify_gen__ModuleInfo_12, ml_backend__ml_unify_gen__HighLevelData_13, ml_backend__ml_unify_gen__Var_74, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_unify_gen__IntFieldType_43);
                                  }
                                  {
                                    ml_backend__ml_unify_gen__Var_76 = parse_tree__builtin_lib_types__int_type_0_f_0();
                                  }
                                  {
                                    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_unify_gen__ModuleInfo_12, ml_backend__ml_unify_gen__Var_76, ml_backend__ml_unify_gen__IntFieldType_43, (MR_Integer) 0, ml_backend__ml_unify_gen__FloatWordA_41, &ml_backend__ml_unify_gen__ArgRvalA_44);
                                  }
                                  {
                                    ml_backend__ml_unify_gen__Var_78 = parse_tree__builtin_lib_types__int_type_0_f_0();
                                  }
                                  {
                                    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_unify_gen__ModuleInfo_12, ml_backend__ml_unify_gen__Var_78, ml_backend__ml_unify_gen__IntFieldType_43, (MR_Integer) 0, ml_backend__ml_unify_gen__FloatWordB_42, &ml_backend__ml_unify_gen__ArgRvalB_45);
                                  }
                                  {
                                    ml_backend__ml_unify_gen__StatementA_46 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__FieldLvalA_102, ml_backend__ml_unify_gen__ArgRvalA_44, ml_backend__ml_unify_gen__Context_20);
                                  }
                                  {
                                    ml_backend__ml_unify_gen__StatementB_47 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__FieldLvalB_103, ml_backend__ml_unify_gen__ArgRvalB_45, ml_backend__ml_unify_gen__Context_20);
                                  }
                                  {
                                    ml_backend__ml_unify_gen__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_81, 0) = ((MR_Box) (ml_backend__ml_unify_gen__StatementB_47));
                                    MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_81, 1) = ((MR_Box) (ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_0_48));
                                  }
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    *ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_49 = base;
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__StatementA_46));
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_81));
                                  }
                                }
                              else
                                {
                                  MR_Word ml_backend__ml_unify_gen__Statement_100;

                                  {
                                    ml_backend__ml_unify_gen__Statement_100 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__FieldLval_17, ml_backend__ml_unify_gen__ArgRval_36, ml_backend__ml_unify_gen__Context_20);
                                  }
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    *ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_49 = base;
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Statement_100));
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_0_48));
                                  }
                                }
                            }
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ml_backend__ml_unify_gen__CastVal_37;
                          MR_Word ml_backend__ml_unify_gen__MaskOld_38;
                          MR_Word ml_backend__ml_unify_gen__ShiftNew_39;
                          MR_Word ml_backend__ml_unify_gen__Combined_40;
                          MR_Word ml_backend__ml_unify_gen__Var_85;
                          MR_Integer ml_backend__ml_unify_gen__Var_86;
                          MR_Integer ml_backend__ml_unify_gen__Var_87;
                          MR_Word ml_backend__ml_unify_gen__Statement_97;
                          MR_Integer ml_backend__ml_unify_gen__Mask_98 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__FieldWidth_19, (MR_Integer) 0)));

                          {
                            ml_backend__ml_unify_gen__Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_85, 0) = ((MR_Box) (ml_backend__ml_unify_gen__FieldLval_17));
                          }
                          {
                            ml_backend__ml_unify_gen__CastVal_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastVal_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastVal_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_4[1])));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastVal_37, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_85));
                          }
                          {
                            ml_backend__ml_unify_gen__Var_87 = mercury__int__f_60_60_2_f_0(ml_backend__ml_unify_gen__Mask_98, (MR_Integer) 0);
                          }
                          ml_backend__ml_unify_gen__Var_86 = ~(ml_backend__ml_unify_gen__Var_87);
                          {
                            ml_backend__ml_unify_gen__MaskOld_38 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(ml_backend__ml_unify_gen__CastVal_37, ml_backend__ml_unify_gen__Var_86);
                          }
                          {
                            ml_backend__ml_unify_gen__ShiftNew_39 = ml_backend__ml_unify_gen__ml_lshift_2_f_0(ml_backend__ml_unify_gen__ArgRval_36, (MR_Integer) 0);
                          }
                          {
                            ml_backend__ml_unify_gen__Combined_40 = ml_backend__ml_unify_gen__ml_bitwise_or_2_f_0(ml_backend__ml_unify_gen__MaskOld_38, ml_backend__ml_unify_gen__ShiftNew_39);
                          }
                          {
                            ml_backend__ml_unify_gen__Statement_97 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__FieldLval_17, ml_backend__ml_unify_gen__Combined_40, ml_backend__ml_unify_gen__Context_20);
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_49 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Statement_97));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_0_48));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word ml_backend__ml_unify_gen__CastVal_122;
                          MR_Word ml_backend__ml_unify_gen__MaskOld_123;
                          MR_Word ml_backend__ml_unify_gen__ShiftNew_124;
                          MR_Word ml_backend__ml_unify_gen__Combined_125;
                          MR_Word ml_backend__ml_unify_gen__Var_128;
                          MR_Integer ml_backend__ml_unify_gen__Var_129;
                          MR_Integer ml_backend__ml_unify_gen__Var_130;
                          MR_Word ml_backend__ml_unify_gen__Statement_131;
                          MR_Integer ml_backend__ml_unify_gen__Mask_132 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__FieldWidth_19, (MR_Integer) 1)));
                          MR_Integer ml_backend__ml_unify_gen__Shift_133 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__FieldWidth_19, (MR_Integer) 0)));

                          {
                            ml_backend__ml_unify_gen__Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_128, 0) = ((MR_Box) (ml_backend__ml_unify_gen__FieldLval_17));
                          }
                          {
                            ml_backend__ml_unify_gen__CastVal_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastVal_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastVal_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_4[1])));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastVal_122, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_128));
                          }
                          {
                            ml_backend__ml_unify_gen__Var_130 = mercury__int__f_60_60_2_f_0(ml_backend__ml_unify_gen__Mask_132, ml_backend__ml_unify_gen__Shift_133);
                          }
                          ml_backend__ml_unify_gen__Var_129 = ~(ml_backend__ml_unify_gen__Var_130);
                          {
                            ml_backend__ml_unify_gen__MaskOld_123 = ml_backend__ml_unify_gen__ml_bitwise_and_2_f_0(ml_backend__ml_unify_gen__CastVal_122, ml_backend__ml_unify_gen__Var_129);
                          }
                          {
                            ml_backend__ml_unify_gen__ShiftNew_124 = ml_backend__ml_unify_gen__ml_lshift_2_f_0(ml_backend__ml_unify_gen__ArgRval_36, ml_backend__ml_unify_gen__Shift_133);
                          }
                          {
                            ml_backend__ml_unify_gen__Combined_125 = ml_backend__ml_unify_gen__ml_bitwise_or_2_f_0(ml_backend__ml_unify_gen__MaskOld_123, ml_backend__ml_unify_gen__ShiftNew_124);
                          }
                          {
                            ml_backend__ml_unify_gen__Statement_131 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__FieldLval_17, ml_backend__ml_unify_gen__Combined_125, ml_backend__ml_unify_gen__Context_20);
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_49 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Statement_131));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_0_48));
                          }
                        }
                        break;
                    }
                  }
                else
                  {
                    ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__LeftTopFunctorMode_24 == (MR_Integer) 2);
                    if (ml_backend__ml_unify_gen__succeeded)
                      ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__RightTopFunctorMode_25 == (MR_Integer) 2);
                    if (ml_backend__ml_unify_gen__succeeded)
                      {
                      }
                    else
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_sub_unify\'/11", (MR_String) "some strange unify");
                          return;
                        }
                      }
                    *ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_49 = ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_0_48;
                  }
              }
          }
      }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_arg_15_p_0(
  MR_Word ml_backend__ml_unify_gen__ConsId_16,
  MR_Word ml_backend__ml_unify_gen__ArgVar_17,
  MR_Word ml_backend__ml_unify_gen__Mode_18,
  MR_Word ml_backend__ml_unify_gen__ArgType_19,
  MR_Word ml_backend__ml_unify_gen__CtorArg_20,
  MR_Word ml_backend__ml_unify_gen__VarType_21,
  MR_Word ml_backend__ml_unify_gen__VarLval_22,
  MR_Word ml_backend__ml_unify_gen__Offset_23,
  MR_Integer ml_backend__ml_unify_gen__ArgNum_24,
  MR_Word ml_backend__ml_unify_gen__Tag_25,
  MR_Word ml_backend__ml_unify_gen__Context_26,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_0_49,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_50,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_51,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_52)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__MaybeFieldName_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__CtorArg_20, (MR_Integer) 0)));
    MR_Word ml_backend__ml_unify_gen__FieldType_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__CtorArg_20, (MR_Integer) 1)));
    MR_Word ml_backend__ml_unify_gen__FieldWidth_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__CtorArg_20, (MR_Integer) 2)));
    MR_Word ml_backend__ml_unify_gen__HighLevelData_32;
    MR_Word ml_backend__ml_unify_gen__FieldId_34;
    MR_Word ml_backend__ml_unify_gen__ModuleInfo_42;
    MR_Word ml_backend__ml_unify_gen__BoxedFieldType_43;
    MR_Word ml_backend__ml_unify_gen__MLDS_VarType_44;
    MR_Word ml_backend__ml_unify_gen__MLDS_BoxedFieldType_45;
    MR_Word ml_backend__ml_unify_gen__MaybePrimaryTag_46;
    MR_Word ml_backend__ml_unify_gen__FieldLval_47;
    MR_Word ml_backend__ml_unify_gen__ArgLval_48;
    MR_Word ml_backend__ml_unify_gen__Var_60;
    MR_Word ml_backend__ml_unify_gen__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__CtorArg_20, (MR_Integer) 3)));

    {
      ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_51, &ml_backend__ml_unify_gen__HighLevelData_32);
    }
    switch (ml_backend__ml_unify_gen__HighLevelData_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer ml_backend__ml_unify_gen__OffsetInt_33 = (MR_Integer) ml_backend__ml_unify_gen__Offset_23;
          MR_Word ml_backend__ml_unify_gen__Var_58;
          MR_Word ml_backend__ml_unify_gen__Var_59;

          {
            ml_backend__ml_unify_gen__Var_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_59, 0) = ((MR_Box) (ml_backend__ml_unify_gen__OffsetInt_33));
          }
          {
            ml_backend__ml_unify_gen__Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_58, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_59));
          }
          {
            ml_backend__ml_unify_gen__FieldId_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__FieldId_34, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Var_58));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_unify_gen__Target_35;
          MR_Word ml_backend__ml_unify_gen__Var_36;

          {
            ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_51, &ml_backend__ml_unify_gen__Target_35);
          }
          {
            ml_backend__ml_unify_gen__succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(ml_backend__ml_unify_gen__VarType_21, &ml_backend__ml_unify_gen__Var_36);
          }
          if (ml_backend__ml_unify_gen__succeeded)
            {
              MR_Word ml_backend__ml_unify_gen__Var_53;
              MR_Word ml_backend__ml_unify_gen__Var_54;
              MR_Integer ml_backend__ml_unify_gen__OffsetInt_62 = (MR_Integer) ml_backend__ml_unify_gen__Offset_23;

              {
                ml_backend__ml_unify_gen__Var_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_54, 0) = ((MR_Box) (ml_backend__ml_unify_gen__OffsetInt_62));
              }
              {
                ml_backend__ml_unify_gen__Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_53, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_54));
              }
              {
                ml_backend__ml_unify_gen__FieldId_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__FieldId_34, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Var_53));
              }
            }
          else
            {
              MR_String ml_backend__ml_unify_gen__FieldName_37;
              MR_Word ml_backend__ml_unify_gen__ConsName_38;
              MR_Integer ml_backend__ml_unify_gen__ConsArity_39;
              MR_Word ml_backend__ml_unify_gen__TypeCtor_40;

              {
                ml_backend__ml_unify_gen__FieldName_37 = ml_backend__ml_code_util__ml_gen_hld_field_name_2_f_0(ml_backend__ml_unify_gen__MaybeFieldName_29, ml_backend__ml_unify_gen__ArgNum_24);
              }
              ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__ConsId_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsId_16, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (ml_backend__ml_unify_gen__succeeded)
                {
                  ml_backend__ml_unify_gen__ConsName_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsId_16, (MR_Integer) 1)));
                  ml_backend__ml_unify_gen__ConsArity_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsId_16, (MR_Integer) 2)));
                  ml_backend__ml_unify_gen__TypeCtor_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsId_16, (MR_Integer) 3)));
                  {
                    MR_String ml_backend__ml_unify_gen__UnqualConsName_41;

                    {
                      ml_backend__ml_unify_gen__UnqualConsName_41 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(ml_backend__ml_unify_gen__Target_35, ml_backend__ml_unify_gen__TypeCtor_40, ml_backend__ml_unify_gen__ConsName_38, ml_backend__ml_unify_gen__ConsArity_39);
                    }
                    {
                      ml_backend__ml_unify_gen__FieldId_34 = ml_backend__ml_unify_gen__ml_gen_field_id_6_f_0(ml_backend__ml_unify_gen__Target_35, ml_backend__ml_unify_gen__VarType_21, ml_backend__ml_unify_gen__Tag_25, ml_backend__ml_unify_gen__UnqualConsName_41, ml_backend__ml_unify_gen__ConsArity_39, ml_backend__ml_unify_gen__FieldName_37);
                    }
                  }
                }
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unify_arg\'/15", (MR_String) "invalid cons_id");
                    return;
                  }
                }
            }
        }
        break;
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_51, &ml_backend__ml_unify_gen__ModuleInfo_42);
    }
    {
      ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(ml_backend__ml_unify_gen__ModuleInfo_42, ml_backend__ml_unify_gen__HighLevelData_32, ml_backend__ml_unify_gen__FieldType_30, ml_backend__ml_unify_gen__FieldWidth_31, &ml_backend__ml_unify_gen__BoxedFieldType_43);
    }
    {
      ml_backend__ml_code_util__ml_gen_type_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_51, ml_backend__ml_unify_gen__VarType_21, &ml_backend__ml_unify_gen__MLDS_VarType_44);
    }
    {
      ml_backend__ml_code_util__ml_gen_type_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_51, ml_backend__ml_unify_gen__BoxedFieldType_43, &ml_backend__ml_unify_gen__MLDS_BoxedFieldType_45);
    }
    {
      ml_backend__ml_unify_gen__MaybePrimaryTag_46 = hlds__hlds_data__get_primary_tag_1_f_0(ml_backend__ml_unify_gen__Tag_25);
    }
    {
      ml_backend__ml_unify_gen__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_60, 0) = ((MR_Box) (ml_backend__ml_unify_gen__VarLval_22));
    }
    {
      ml_backend__ml_unify_gen__FieldLval_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__FieldLval_47, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MaybePrimaryTag_46));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__FieldLval_47, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_60));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__FieldLval_47, 2) = ((MR_Box) (ml_backend__ml_unify_gen__FieldId_34));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__FieldLval_47, 3) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_BoxedFieldType_45));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__FieldLval_47, 4) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_VarType_44));
    }
    {
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_51, ml_backend__ml_unify_gen__ArgVar_17, &ml_backend__ml_unify_gen__ArgLval_48);
    }
    {
      ml_backend__ml_unify_gen__ml_gen_sub_unify_11_p_0(ml_backend__ml_unify_gen__ModuleInfo_42, ml_backend__ml_unify_gen__HighLevelData_32, ml_backend__ml_unify_gen__Mode_18, ml_backend__ml_unify_gen__ArgLval_48, ml_backend__ml_unify_gen__ArgType_19, ml_backend__ml_unify_gen__FieldLval_47, ml_backend__ml_unify_gen__BoxedFieldType_43, ml_backend__ml_unify_gen__FieldWidth_31, ml_backend__ml_unify_gen__Context_26, ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_0_49, ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_50);
    }
    *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_52 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_51;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_16_p_0(
  MR_Word ml_backend__ml_unify_gen__ConsId_17,
  MR_Word ml_backend__ml_unify_gen__Args_18,
  MR_Word ml_backend__ml_unify_gen__Modes_19,
  MR_Word ml_backend__ml_unify_gen__ArgTypes_20,
  MR_Word ml_backend__ml_unify_gen__Fields_21,
  MR_Word ml_backend__ml_unify_gen__TakeAddr_22,
  MR_Word ml_backend__ml_unify_gen__VarType_23,
  MR_Word ml_backend__ml_unify_gen__VarLval_24,
  MR_Word ml_backend__ml_unify_gen__Offset_25,
  MR_Integer ml_backend__ml_unify_gen__ArgNum_26,
  MR_Word ml_backend__ml_unify_gen__Tag_27,
  MR_Word ml_backend__ml_unify_gen__Context_28,
  MR_Word * ml_backend__ml_unify_gen__Statements_29,
  MR_Word * ml_backend__ml_unify_gen__TakeAddrInfos_30,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_53,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_54)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Args_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (ml_backend__ml_unify_gen__succeeded)
      {
        ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Modes_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (ml_backend__ml_unify_gen__succeeded)
          {
            ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__ArgTypes_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (ml_backend__ml_unify_gen__succeeded)
              ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Fields_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
      }
    if (ml_backend__ml_unify_gen__succeeded)
      {
        *ml_backend__ml_unify_gen__Statements_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_unify_gen__TakeAddrInfos_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_54 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_53;
      }
    else
      {
        MR_Word ml_backend__ml_unify_gen__Arg_32;
        MR_Word ml_backend__ml_unify_gen__Args1_33;
        MR_Word ml_backend__ml_unify_gen__Mode_34;
        MR_Word ml_backend__ml_unify_gen__Modes1_35;
        MR_Word ml_backend__ml_unify_gen__ArgType_36;
        MR_Word ml_backend__ml_unify_gen__ArgTypes1_37;
        MR_Word ml_backend__ml_unify_gen__Field_38;
        MR_Word ml_backend__ml_unify_gen__Fields1_39;

        ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__Args_18)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_unify_gen__succeeded)
          {
            ml_backend__ml_unify_gen__Arg_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Args_18, (MR_Integer) 0)));
            ml_backend__ml_unify_gen__Args1_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Args_18, (MR_Integer) 1)));
            ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__Modes_19)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__ml_unify_gen__succeeded)
              {
                ml_backend__ml_unify_gen__Mode_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Modes_19, (MR_Integer) 0)));
                ml_backend__ml_unify_gen__Modes1_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Modes_19, (MR_Integer) 1)));
                ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__ArgTypes_20)) == (MR_mktag((MR_Integer) 1)));
                if (ml_backend__ml_unify_gen__succeeded)
                  {
                    ml_backend__ml_unify_gen__ArgType_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ArgTypes_20, (MR_Integer) 0)));
                    ml_backend__ml_unify_gen__ArgTypes1_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ArgTypes_20, (MR_Integer) 1)));
                    ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__Fields_21)) == (MR_mktag((MR_Integer) 1)));
                    if (ml_backend__ml_unify_gen__succeeded)
                      {
                        ml_backend__ml_unify_gen__Field_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Fields_21, (MR_Integer) 0)));
                        ml_backend__ml_unify_gen__Fields1_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Fields_21, (MR_Integer) 1)));
                      }
                  }
              }
          }
        if (ml_backend__ml_unify_gen__succeeded)
          {
            MR_Word ml_backend__ml_unify_gen__Offset1_40;
            MR_Integer ml_backend__ml_unify_gen__ArgNum1_41;
            MR_Word ml_backend__ml_unify_gen__TakeAddr1_42;
            MR_Integer ml_backend__ml_unify_gen__Var_68;

            {
              ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(ml_backend__ml_unify_gen__Field_38, ml_backend__ml_unify_gen__Fields1_39, ml_backend__ml_unify_gen__Offset_25, &ml_backend__ml_unify_gen__Offset1_40);
            }
            ml_backend__ml_unify_gen__ArgNum1_41 = (ml_backend__ml_unify_gen__ArgNum_26 + (MR_Integer) 1);
            ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__TakeAddr_22)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__ml_unify_gen__succeeded)
              {
                ml_backend__ml_unify_gen__Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__TakeAddr_22, (MR_Integer) 0)));
                ml_backend__ml_unify_gen__TakeAddr1_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__TakeAddr_22, (MR_Integer) 1)));
                ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__ArgNum_26 == ml_backend__ml_unify_gen__Var_68);
              }
            if (ml_backend__ml_unify_gen__succeeded)
              {
                MR_Word ml_backend__ml_unify_gen__TakeAddrInfos0_43;
                MR_Word ml_backend__ml_unify_gen__ModuleInfo_44;
                MR_Word ml_backend__ml_unify_gen__HighLevelData_45;
                MR_Word ml_backend__ml_unify_gen__FieldType_46;
                MR_Word ml_backend__ml_unify_gen__FieldWidth_47;
                MR_Word ml_backend__ml_unify_gen__BoxedFieldType_48;
                MR_Word ml_backend__ml_unify_gen__MLDS_FieldType_49;
                MR_Word ml_backend__ml_unify_gen__MLDS_BoxedFieldType_50;
                MR_Word ml_backend__ml_unify_gen__TakeAddrInfo_51;
                MR_Word ml_backend__ml_unify_gen__Var_62;
                MR_Word ml_backend__ml_unify_gen__Var_64;

                {
                  ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_16_p_0(ml_backend__ml_unify_gen__ConsId_17, ml_backend__ml_unify_gen__Args1_33, ml_backend__ml_unify_gen__Modes1_35, ml_backend__ml_unify_gen__ArgTypes1_37, ml_backend__ml_unify_gen__Fields1_39, ml_backend__ml_unify_gen__TakeAddr1_42, ml_backend__ml_unify_gen__VarType_23, ml_backend__ml_unify_gen__VarLval_24, ml_backend__ml_unify_gen__Offset1_40, ml_backend__ml_unify_gen__ArgNum1_41, ml_backend__ml_unify_gen__Tag_27, ml_backend__ml_unify_gen__Context_28, ml_backend__ml_unify_gen__Statements_29, &ml_backend__ml_unify_gen__TakeAddrInfos0_43, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_53, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_54);
                }
                {
                  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*ml_backend__ml_unify_gen__STATE_VARIABLE_Info_54, &ml_backend__ml_unify_gen__ModuleInfo_44);
                }
                {
                  ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(*ml_backend__ml_unify_gen__STATE_VARIABLE_Info_54, &ml_backend__ml_unify_gen__HighLevelData_45);
                }
                ml_backend__ml_unify_gen__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Field_38, (MR_Integer) 0)));
                ml_backend__ml_unify_gen__FieldType_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Field_38, (MR_Integer) 1)));
                ml_backend__ml_unify_gen__FieldWidth_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Field_38, (MR_Integer) 2)));
                ml_backend__ml_unify_gen__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Field_38, (MR_Integer) 3)));
                {
                  ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(ml_backend__ml_unify_gen__ModuleInfo_44, ml_backend__ml_unify_gen__HighLevelData_45, ml_backend__ml_unify_gen__FieldType_46, ml_backend__ml_unify_gen__FieldWidth_47, &ml_backend__ml_unify_gen__BoxedFieldType_48);
                }
                {
                  ml_backend__ml_code_util__ml_gen_type_3_p_0(*ml_backend__ml_unify_gen__STATE_VARIABLE_Info_54, ml_backend__ml_unify_gen__FieldType_46, &ml_backend__ml_unify_gen__MLDS_FieldType_49);
                }
                {
                  ml_backend__ml_code_util__ml_gen_type_3_p_0(*ml_backend__ml_unify_gen__STATE_VARIABLE_Info_54, ml_backend__ml_unify_gen__BoxedFieldType_48, &ml_backend__ml_unify_gen__MLDS_BoxedFieldType_50);
                }
                {
                  ml_backend__ml_unify_gen__TakeAddrInfo_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__TakeAddrInfo_51, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Arg_32));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__TakeAddrInfo_51, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Offset_25));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__TakeAddrInfo_51, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_FieldType_49));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__TakeAddrInfo_51, 3) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_BoxedFieldType_50));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ml_backend__ml_unify_gen__TakeAddrInfos_30 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__TakeAddrInfo_51));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__TakeAddrInfos0_43));
                }
              }
            else
              {
                MR_Word ml_backend__ml_unify_gen__Statements0_52;
                MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_57_57;

                {
                  ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_16_p_0(ml_backend__ml_unify_gen__ConsId_17, ml_backend__ml_unify_gen__Args1_33, ml_backend__ml_unify_gen__Modes1_35, ml_backend__ml_unify_gen__ArgTypes1_37, ml_backend__ml_unify_gen__Fields1_39, ml_backend__ml_unify_gen__TakeAddr_22, ml_backend__ml_unify_gen__VarType_23, ml_backend__ml_unify_gen__VarLval_24, ml_backend__ml_unify_gen__Offset1_40, ml_backend__ml_unify_gen__ArgNum1_41, ml_backend__ml_unify_gen__Tag_27, ml_backend__ml_unify_gen__Context_28, &ml_backend__ml_unify_gen__Statements0_52, ml_backend__ml_unify_gen__TakeAddrInfos_30, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_53, &ml_backend__ml_unify_gen__STATE_VARIABLE_Info_57_57);
                }
                {
                  ml_backend__ml_unify_gen__ml_gen_unify_arg_15_p_0(ml_backend__ml_unify_gen__ConsId_17, ml_backend__ml_unify_gen__Arg_32, ml_backend__ml_unify_gen__Mode_34, ml_backend__ml_unify_gen__ArgType_36, ml_backend__ml_unify_gen__Field_38, ml_backend__ml_unify_gen__VarType_23, ml_backend__ml_unify_gen__VarLval_24, ml_backend__ml_unify_gen__Offset_25, ml_backend__ml_unify_gen__ArgNum_26, ml_backend__ml_unify_gen__Tag_27, ml_backend__ml_unify_gen__Context_28, ml_backend__ml_unify_gen__Statements0_52, ml_backend__ml_unify_gen__Statements_29, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_57_57, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_54);
                }
              }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unify_args_for_reuse\'/16", (MR_String) "length mismatch");
              return;
            }
          }
      }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(
  MR_Word ml_backend__ml_unify_gen__CurArg_1,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_unify_gen__HeadVar__3_3,
  MR_Word * ml_backend__ml_unify_gen__HeadVar__4_4)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    if ((ml_backend__ml_unify_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ml_backend__ml_unify_gen__HeadVar__4_4 = ml_backend__ml_unify_gen__HeadVar__3_3;
    else
      {
        MR_Word ml_backend__ml_unify_gen__NextArg_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_unify_gen__CurWidth_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__CurArg_1, (MR_Integer) 2)));
        MR_Word ml_backend__ml_unify_gen__NextWidth_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__NextArg_8, (MR_Integer) 2)));
        MR_Word ml_backend__ml_unify_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_unify_gen__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__CurArg_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_unify_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__CurArg_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_unify_gen__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__CurArg_1, (MR_Integer) 3)));
        MR_Word ml_backend__ml_unify_gen__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__NextArg_8, (MR_Integer) 0)));
        MR_Word ml_backend__ml_unify_gen__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__NextArg_8, (MR_Integer) 1)));
        MR_Word ml_backend__ml_unify_gen__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__NextArg_8, (MR_Integer) 3)));

        switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__CurWidth_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ml_backend__ml_unify_gen__CurWidth_14)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__NextWidth_18)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Integer ml_backend__ml_unify_gen__Int_21 = (MR_Integer) ml_backend__ml_unify_gen__HeadVar__3_3;
                      MR_Integer ml_backend__ml_unify_gen__Var_49 = (ml_backend__ml_unify_gen__Int_21 + (MR_Integer) 1);

                      *ml_backend__ml_unify_gen__HeadVar__4_4 = (MR_Word) ml_backend__ml_unify_gen__Var_49;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer ml_backend__ml_unify_gen__Int_21 = (MR_Integer) ml_backend__ml_unify_gen__HeadVar__3_3;
                      MR_Integer ml_backend__ml_unify_gen__Var_49 = (ml_backend__ml_unify_gen__Int_21 + (MR_Integer) 1);

                      *ml_backend__ml_unify_gen__HeadVar__4_4 = (MR_Word) ml_backend__ml_unify_gen__Var_49;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_next_field_offset\'/4", (MR_String) "partial_word_shifted follows full_word");
                        return;
                      }
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__NextWidth_18)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Integer ml_backend__ml_unify_gen__Var_44;
                      MR_Integer ml_backend__ml_unify_gen__Int_51 = (MR_Integer) ml_backend__ml_unify_gen__HeadVar__3_3;

                      ml_backend__ml_unify_gen__Var_44 = (ml_backend__ml_unify_gen__Int_51 + (MR_Integer) 2);
                      *ml_backend__ml_unify_gen__HeadVar__4_4 = (MR_Word) ml_backend__ml_unify_gen__Var_44;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer ml_backend__ml_unify_gen__Var_44;
                      MR_Integer ml_backend__ml_unify_gen__Int_51 = (MR_Integer) ml_backend__ml_unify_gen__HeadVar__3_3;

                      ml_backend__ml_unify_gen__Var_44 = (ml_backend__ml_unify_gen__Int_51 + (MR_Integer) 2);
                      *ml_backend__ml_unify_gen__HeadVar__4_4 = (MR_Word) ml_backend__ml_unify_gen__Var_44;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_next_field_offset\'/4", (MR_String) "partial_word_shifted follows double_word");
                        return;
                      }
                    }
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__NextWidth_18)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_next_field_offset\'/4", (MR_String) "partial_word_first not followed by partial_word_shifted");
                    return;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_next_field_offset\'/4", (MR_String) "partial_word_first not followed by partial_word_shifted");
                    return;
                  }
                }
                break;
              case (MR_Integer) 2:
                *ml_backend__ml_unify_gen__HeadVar__4_4 = ml_backend__ml_unify_gen__HeadVar__3_3;
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__NextWidth_18)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer ml_backend__ml_unify_gen__Var_36;
                  MR_Integer ml_backend__ml_unify_gen__Int_54 = (MR_Integer) ml_backend__ml_unify_gen__HeadVar__3_3;

                  ml_backend__ml_unify_gen__Var_36 = (ml_backend__ml_unify_gen__Int_54 + (MR_Integer) 1);
                  *ml_backend__ml_unify_gen__HeadVar__4_4 = (MR_Word) ml_backend__ml_unify_gen__Var_36;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ml_backend__ml_unify_gen__Var_36;
                  MR_Integer ml_backend__ml_unify_gen__Int_54 = (MR_Integer) ml_backend__ml_unify_gen__HeadVar__3_3;

                  ml_backend__ml_unify_gen__Var_36 = (ml_backend__ml_unify_gen__Int_54 + (MR_Integer) 1);
                  *ml_backend__ml_unify_gen__HeadVar__4_4 = (MR_Word) ml_backend__ml_unify_gen__Var_36;
                }
                break;
              case (MR_Integer) 2:
                *ml_backend__ml_unify_gen__HeadVar__4_4 = ml_backend__ml_unify_gen__HeadVar__3_3;
                break;
            }
            break;
        }
      }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_args_2_15_p_0(
  MR_Word ml_backend__ml_unify_gen__ConsId_1,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_unify_gen__HeadVar__3_3,
  MR_Word ml_backend__ml_unify_gen__HeadVar__4_4,
  MR_Word ml_backend__ml_unify_gen__HeadVar__5_5,
  MR_Word ml_backend__ml_unify_gen__VarType_6,
  MR_Word ml_backend__ml_unify_gen__VarLval_7,
  MR_Word ml_backend__ml_unify_gen__Offset_8,
  MR_Integer ml_backend__ml_unify_gen__ArgNum_9,
  MR_Word ml_backend__ml_unify_gen__Tag_10,
  MR_Word ml_backend__ml_unify_gen__Context_11,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_0_12,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_13,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_14,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_15)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    if ((ml_backend__ml_unify_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (ml_backend__ml_unify_gen__succeeded)
          {
            ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (ml_backend__ml_unify_gen__succeeded)
              {
                *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_15 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_14;
                *ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_13 = ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_0_12;
                ml_backend__ml_unify_gen__succeeded = MR_TRUE;
              }
          }
      }
    else
      {
        MR_Word ml_backend__ml_unify_gen__Arg_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_unify_gen__Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_unify_gen__Mode_33;
        MR_Word ml_backend__ml_unify_gen__Modes_34;
        MR_Word ml_backend__ml_unify_gen__ArgType_35;
        MR_Word ml_backend__ml_unify_gen__ArgTypes_36;
        MR_Word ml_backend__ml_unify_gen__Field_37;
        MR_Word ml_backend__ml_unify_gen__Fields_38;
        MR_Word ml_backend__ml_unify_gen__Offset1_47;
        MR_Integer ml_backend__ml_unify_gen__ArgNum1_48;
        MR_Integer ml_backend__ml_unify_gen__Var_53;
        MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_54_54;
        MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_55_55;

        ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_unify_gen__succeeded)
          {
            ml_backend__ml_unify_gen__Mode_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__3_3, (MR_Integer) 0)));
            ml_backend__ml_unify_gen__Modes_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__3_3, (MR_Integer) 1)));
            ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__ml_unify_gen__succeeded)
              {
                ml_backend__ml_unify_gen__ArgType_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__4_4, (MR_Integer) 0)));
                ml_backend__ml_unify_gen__ArgTypes_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__4_4, (MR_Integer) 1)));
                ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__HeadVar__5_5)) == (MR_mktag((MR_Integer) 1)));
                if (ml_backend__ml_unify_gen__succeeded)
                  {
                    ml_backend__ml_unify_gen__Field_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__5_5, (MR_Integer) 0)));
                    ml_backend__ml_unify_gen__Fields_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__5_5, (MR_Integer) 1)));
                    {
                      ml_backend__ml_unify_gen__ml_next_field_offset_4_p_0(ml_backend__ml_unify_gen__Field_37, ml_backend__ml_unify_gen__Fields_38, ml_backend__ml_unify_gen__Offset_8, &ml_backend__ml_unify_gen__Offset1_47);
                    }
                    ml_backend__ml_unify_gen__Var_53 = (MR_Integer) 1;
                    ml_backend__ml_unify_gen__ArgNum1_48 = (ml_backend__ml_unify_gen__ArgNum_9 + ml_backend__ml_unify_gen__Var_53);
                    {
                      ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen__ml_gen_unify_args_2_15_p_0(ml_backend__ml_unify_gen__ConsId_1, ml_backend__ml_unify_gen__Args_32, ml_backend__ml_unify_gen__Modes_34, ml_backend__ml_unify_gen__ArgTypes_36, ml_backend__ml_unify_gen__Fields_38, ml_backend__ml_unify_gen__VarType_6, ml_backend__ml_unify_gen__VarLval_7, ml_backend__ml_unify_gen__Offset1_47, ml_backend__ml_unify_gen__ArgNum1_48, ml_backend__ml_unify_gen__Tag_10, ml_backend__ml_unify_gen__Context_11, ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_0_12, &ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_54_54, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_14, &ml_backend__ml_unify_gen__STATE_VARIABLE_Info_55_55);
                    }
                    if (ml_backend__ml_unify_gen__succeeded)
                      {
                        {
                          ml_backend__ml_unify_gen__ml_gen_unify_arg_15_p_0(ml_backend__ml_unify_gen__ConsId_1, ml_backend__ml_unify_gen__Arg_31, ml_backend__ml_unify_gen__Mode_33, ml_backend__ml_unify_gen__ArgType_35, ml_backend__ml_unify_gen__Field_37, ml_backend__ml_unify_gen__VarType_6, ml_backend__ml_unify_gen__VarLval_7, ml_backend__ml_unify_gen__Offset_8, ml_backend__ml_unify_gen__ArgNum_9, ml_backend__ml_unify_gen__Tag_10, ml_backend__ml_unify_gen__Context_11, ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_54_54, ml_backend__ml_unify_gen__STATE_VARIABLE_Statements_13, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_55_55, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_15);
                        }
                        ml_backend__ml_unify_gen__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unify_args_14_p_0(
  MR_Word ml_backend__ml_unify_gen__ConsId_15,
  MR_Word ml_backend__ml_unify_gen__Args_16,
  MR_Word ml_backend__ml_unify_gen__Modes_17,
  MR_Word ml_backend__ml_unify_gen__ArgTypes_18,
  MR_Word ml_backend__ml_unify_gen__Fields_19,
  MR_Word ml_backend__ml_unify_gen__VarType_20,
  MR_Word ml_backend__ml_unify_gen__VarLval_21,
  MR_Word ml_backend__ml_unify_gen__Offset_22,
  MR_Integer ml_backend__ml_unify_gen__ArgNum_23,
  MR_Word ml_backend__ml_unify_gen__Tag_24,
  MR_Word ml_backend__ml_unify_gen__Context_25,
  MR_Word * ml_backend__ml_unify_gen__Statements_26,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_29,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_30)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__Statements0_28;
    MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_32_32;

    {
      ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen__ml_gen_unify_args_2_15_p_0(ml_backend__ml_unify_gen__ConsId_15, ml_backend__ml_unify_gen__Args_16, ml_backend__ml_unify_gen__Modes_17, ml_backend__ml_unify_gen__ArgTypes_18, ml_backend__ml_unify_gen__Fields_19, ml_backend__ml_unify_gen__VarType_20, ml_backend__ml_unify_gen__VarLval_21, ml_backend__ml_unify_gen__Offset_22, ml_backend__ml_unify_gen__ArgNum_23, ml_backend__ml_unify_gen__Tag_24, ml_backend__ml_unify_gen__Context_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_unify_gen__Statements0_28, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_29, &ml_backend__ml_unify_gen__STATE_VARIABLE_Info_32_32);
    }
    if (ml_backend__ml_unify_gen__succeeded)
      {
        *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_30 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_32_32;
        *ml_backend__ml_unify_gen__Statements_26 = ml_backend__ml_unify_gen__Statements0_28;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unify_args\'/14", (MR_String) "length mismatch");
          return;
        }
      }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_field_names_and_types_5_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_unify_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;
    MR_Word ml_backend__ml_unify_gen__conv0_LambdaHeadVar__2_27;

    {
      ml_backend__ml_unify_gen__conv0_LambdaHeadVar__2_27 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_field_names_and_types__1627__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_1));
    }
    ml_backend__ml_unify_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_unify_gen__conv0_LambdaHeadVar__2_27));
    return ml_backend__ml_unify_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_field_names_and_types_5_p_0(
  MR_Word ml_backend__ml_unify_gen__Info_6,
  MR_Word ml_backend__ml_unify_gen__Type_7,
  MR_Word ml_backend__ml_unify_gen__ConsId_8,
  MR_Word ml_backend__ml_unify_gen__ArgTypes_9,
  MR_Word * ml_backend__ml_unify_gen__Fields_10)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__Context_11;
    MR_Word ml_backend__ml_unify_gen__MakeUnnamedField_12;
    MR_Integer ml_backend__ml_unify_gen__TupleArity_15;
    MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_38_38;
    MR_Word ml_backend__ml_unify_gen__Var_14;

    {
      ml_backend__ml_unify_gen__Context_11 = mercury__term__context_init_0_f_0();
    }
    {
      ml_backend__ml_unify_gen__MakeUnnamedField_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__MakeUnnamedField_12, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_6[4]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__MakeUnnamedField_12, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_field_names_and_types_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__MakeUnnamedField_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__MakeUnnamedField_12, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Context_11));
    }
    {
      ml_backend__ml_unify_gen__succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(ml_backend__ml_unify_gen__Type_7, &ml_backend__ml_unify_gen__Var_14);
    }
    if (ml_backend__ml_unify_gen__succeeded)
      {
        ml_backend__ml_unify_gen__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
        {
          mercury__list__length_2_p_0(ml_backend__ml_unify_gen__TypeCtorInfo_38_38, ml_backend__ml_unify_gen__ArgTypes_9, &ml_backend__ml_unify_gen__TupleArity_15);
        }
        ml_backend__ml_unify_gen__succeeded = MR_TRUE;
      }
    if (ml_backend__ml_unify_gen__succeeded)
      {
        MR_Word ml_backend__ml_unify_gen__FieldTypes_16;

        {
          ml_backend__ml_unify_gen__FieldTypes_16 = ml_backend__ml_code_util__ml_make_boxed_types_1_f_0(ml_backend__ml_unify_gen__TupleArity_15);
        }
        {
          *ml_backend__ml_unify_gen__Fields_10 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, ml_backend__ml_unify_gen__MakeUnnamedField_12, ml_backend__ml_unify_gen__FieldTypes_16);
        }
      }
    else
      {
        MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_41_41;
        MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_42_42;
        MR_Word ml_backend__ml_unify_gen__ModuleInfo_17;
        MR_Word ml_backend__ml_unify_gen__TypeCtor_18;
        MR_Word ml_backend__ml_unify_gen__ConsDefn_19;
        MR_Word ml_backend__ml_unify_gen__Fields0_20;
        MR_Integer ml_backend__ml_unify_gen__NumArgs_21;
        MR_Integer ml_backend__ml_unify_gen__NumFieldTypes0_22;
        MR_Integer ml_backend__ml_unify_gen__NumExtraTypes_23;
        MR_Word ml_backend__ml_unify_gen__ExtraFieldTypes_24;
        MR_Word ml_backend__ml_unify_gen__ExtraFields_25;
        MR_Word ml_backend__ml_unify_gen__Var_31;
        MR_Word ml_backend__ml_unify_gen__Var_32;
        MR_Word ml_backend__ml_unify_gen__Var_33;
        MR_Word ml_backend__ml_unify_gen__Var_34;
        MR_Word ml_backend__ml_unify_gen__Var_35;
        MR_Word ml_backend__ml_unify_gen__Var_36;
        MR_Word ml_backend__ml_unify_gen__Var_37;

        {
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_unify_gen__Info_6, &ml_backend__ml_unify_gen__ModuleInfo_17);
        }
        {
          parse_tree__prog_type__type_to_ctor_det_2_p_0(ml_backend__ml_unify_gen__Type_7, &ml_backend__ml_unify_gen__TypeCtor_18);
        }
        {
          check_hlds__type_util__get_cons_defn_det_4_p_0(ml_backend__ml_unify_gen__ModuleInfo_17, ml_backend__ml_unify_gen__TypeCtor_18, ml_backend__ml_unify_gen__ConsId_8, &ml_backend__ml_unify_gen__ConsDefn_19);
        }
        ml_backend__ml_unify_gen__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_19, (MR_Integer) 0)));
        ml_backend__ml_unify_gen__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_19, (MR_Integer) 1)));
        ml_backend__ml_unify_gen__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_19, (MR_Integer) 2)));
        ml_backend__ml_unify_gen__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_19, (MR_Integer) 3)));
        ml_backend__ml_unify_gen__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_19, (MR_Integer) 4)));
        ml_backend__ml_unify_gen__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_19, (MR_Integer) 5)));
        ml_backend__ml_unify_gen__Fields0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_19, (MR_Integer) 6)));
        ml_backend__ml_unify_gen__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_19, (MR_Integer) 7)));
        ml_backend__ml_unify_gen__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
        {
          ml_backend__ml_unify_gen__NumArgs_21 = mercury__list__length_1_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_41_41, ml_backend__ml_unify_gen__ArgTypes_9);
        }
        ml_backend__ml_unify_gen__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
        {
          ml_backend__ml_unify_gen__NumFieldTypes0_22 = mercury__list__length_1_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_42_42, ml_backend__ml_unify_gen__Fields0_20);
        }
        ml_backend__ml_unify_gen__NumExtraTypes_23 = (ml_backend__ml_unify_gen__NumArgs_21 - ml_backend__ml_unify_gen__NumFieldTypes0_22);
        {
          ml_backend__ml_unify_gen__ExtraFieldTypes_24 = mercury__list__take_upto_2_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_41_41, ml_backend__ml_unify_gen__NumExtraTypes_23, ml_backend__ml_unify_gen__ArgTypes_9);
        }
        {
          ml_backend__ml_unify_gen__ExtraFields_25 = mercury__list__map_2_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_41_41, ml_backend__ml_unify_gen__TypeCtorInfo_42_42, ml_backend__ml_unify_gen__MakeUnnamedField_12, ml_backend__ml_unify_gen__ExtraFieldTypes_24);
        }
        {
          *ml_backend__ml_unify_gen__Fields_10 = mercury__list__f_43_43_2_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_42_42, ml_backend__ml_unify_gen__ExtraFields_25, ml_backend__ml_unify_gen__Fields0_20);
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_tag_offset_and_argnum_4_p_0(
  MR_Word ml_backend__ml_unify_gen__Tag_5,
  MR_Integer * ml_backend__ml_unify_gen__TagBits_6,
  MR_Word * ml_backend__ml_unify_gen__Offset_7,
  MR_Integer * ml_backend__ml_unify_gen__ArgNum_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_unify_gen__succeeded;

        switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__Tag_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ml_backend__ml_unify_gen__Tag_5)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *ml_backend__ml_unify_gen__TagBits_6 = (MR_Integer) 0;
                  *ml_backend__ml_unify_gen__Offset_7 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
                  *ml_backend__ml_unify_gen__ArgNum_8 = (MR_Integer) 1;
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_tag_offset_and_argnum\'/4", (MR_String) "unexpected tag");
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
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_tag_offset_and_argnum\'/4", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_5, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 4:
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
              case (MR_Integer) 9:
              case (MR_Integer) 10:
              case (MR_Integer) 11:
              case (MR_Integer) 15:
              case (MR_Integer) 16:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_tag_offset_and_argnum\'/4", (MR_String) "unexpected tag");
                    return;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word ml_backend__ml_unify_gen__SubTag_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_5, (MR_Integer) 2)));
                  MR_Integer ml_backend__ml_unify_gen__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_5, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_unify_gen__next_value_of_Tag_5 = ml_backend__ml_unify_gen__SubTag_47;

                    ml_backend__ml_unify_gen__Tag_5 = ml_backend__ml_unify_gen__next_value_of_Tag_5;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 12:
                {
                  *ml_backend__ml_unify_gen__TagBits_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_5, (MR_Integer) 1)));
                  *ml_backend__ml_unify_gen__Offset_7 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
                  *ml_backend__ml_unify_gen__ArgNum_8 = (MR_Integer) 1;
                }
                break;
              case (MR_Integer) 13:
                {
                  *ml_backend__ml_unify_gen__TagBits_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_5, (MR_Integer) 1)));
                  *ml_backend__ml_unify_gen__Offset_7 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
                  *ml_backend__ml_unify_gen__ArgNum_8 = (MR_Integer) 1;
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_Integer ml_backend__ml_unify_gen___SecondaryTag_11;

                  *ml_backend__ml_unify_gen__TagBits_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_5, (MR_Integer) 1)));
                  ml_backend__ml_unify_gen___SecondaryTag_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_5, (MR_Integer) 2)));
                  *ml_backend__ml_unify_gen__Offset_7 = (MR_Word) ((MR_Box) ((MR_Integer) 1));
                  *ml_backend__ml_unify_gen__ArgNum_8 = (MR_Integer) 1;
                }
                break;
              case (MR_Integer) 17:
                {
                  MR_Word ml_backend__ml_unify_gen__SubTag_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_5, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_unify_gen__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_5, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_unify_gen__next_value_of_Tag_5 = ml_backend__ml_unify_gen__SubTag_13;

                    ml_backend__ml_unify_gen__Tag_5 = ml_backend__ml_unify_gen__next_value_of_Tag_5;
                  }
                  continue;
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_det_deconstruct_tag_10_p_0(
  MR_Word ml_backend__ml_unify_gen__Tag_11,
  MR_Word ml_backend__ml_unify_gen__Type_12,
  MR_Word ml_backend__ml_unify_gen__Var_13,
  MR_Word ml_backend__ml_unify_gen__ConsId_14,
  MR_Word ml_backend__ml_unify_gen__Args_15,
  MR_Word ml_backend__ml_unify_gen__Modes_16,
  MR_Word ml_backend__ml_unify_gen__Context_17,
  MR_Word * ml_backend__ml_unify_gen__Statements_18,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_66,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_67)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_unify_gen__succeeded;

        switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__Tag_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ml_backend__ml_unify_gen__Tag_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_unify_gen__ArgTypes_59;
                  MR_Word ml_backend__ml_unify_gen__Fields_60;
                  MR_Word ml_backend__ml_unify_gen__OffSet_62;
                  MR_Integer ml_backend__ml_unify_gen__ArgNum_63;
                  MR_Word ml_backend__ml_unify_gen__VarLval_101;
                  MR_Integer ml_backend__ml_unify_gen__Var_61;

                  {
                    ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_66, ml_backend__ml_unify_gen__Var_13, &ml_backend__ml_unify_gen__VarLval_101);
                  }
                  {
                    ml_backend__ml_code_util__ml_variable_types_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_66, ml_backend__ml_unify_gen__Args_15, &ml_backend__ml_unify_gen__ArgTypes_59);
                  }
                  {
                    ml_backend__ml_unify_gen__ml_field_names_and_types_5_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_66, ml_backend__ml_unify_gen__Type_12, ml_backend__ml_unify_gen__ConsId_14, ml_backend__ml_unify_gen__ArgTypes_59, &ml_backend__ml_unify_gen__Fields_60);
                  }
                  {
                    ml_backend__ml_unify_gen__ml_tag_offset_and_argnum_4_p_0(ml_backend__ml_unify_gen__Tag_11, &ml_backend__ml_unify_gen__Var_61, &ml_backend__ml_unify_gen__OffSet_62, &ml_backend__ml_unify_gen__ArgNum_63);
                  }
                  {
                    ml_backend__ml_unify_gen__ml_gen_unify_args_14_p_0(ml_backend__ml_unify_gen__ConsId_14, ml_backend__ml_unify_gen__Args_15, ml_backend__ml_unify_gen__Modes_16, ml_backend__ml_unify_gen__ArgTypes_59, ml_backend__ml_unify_gen__Fields_60, ml_backend__ml_unify_gen__Type_12, ml_backend__ml_unify_gen__VarLval_101, ml_backend__ml_unify_gen__OffSet_62, ml_backend__ml_unify_gen__ArgNum_63, ml_backend__ml_unify_gen__Tag_11, ml_backend__ml_unify_gen__Context_17, ml_backend__ml_unify_gen__Statements_18, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_66, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_67);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_unify_gen__Arg_48;
                  MR_Word ml_backend__ml_unify_gen__Mode_49;
                  MR_Word ml_backend__ml_unify_gen__Var_75;
                  MR_Word ml_backend__ml_unify_gen__Var_76;

                  ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__Args_15)) == (MR_mktag((MR_Integer) 1)));
                  if (ml_backend__ml_unify_gen__succeeded)
                    {
                      ml_backend__ml_unify_gen__Arg_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Args_15, (MR_Integer) 0)));
                      ml_backend__ml_unify_gen__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Args_15, (MR_Integer) 1)));
                      ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (ml_backend__ml_unify_gen__succeeded)
                        {
                          ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__Modes_16)) == (MR_mktag((MR_Integer) 1)));
                          if (ml_backend__ml_unify_gen__succeeded)
                            {
                              ml_backend__ml_unify_gen__Mode_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Modes_16, (MR_Integer) 0)));
                              ml_backend__ml_unify_gen__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Modes_16, (MR_Integer) 1)));
                              ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                        }
                    }
                  if (ml_backend__ml_unify_gen__succeeded)
                    {
                      MR_Word ml_backend__ml_unify_gen__ArgType_50;
                      MR_Word ml_backend__ml_unify_gen__ArgLval_51;
                      MR_Word ml_backend__ml_unify_gen__VarLval_52;
                      MR_Word ml_backend__ml_unify_gen__ModuleInfo_53;
                      MR_Word ml_backend__ml_unify_gen__HighLevelData_54;

                      {
                        ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_66, ml_backend__ml_unify_gen__Arg_48, &ml_backend__ml_unify_gen__ArgType_50);
                      }
                      {
                        ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_66, ml_backend__ml_unify_gen__Arg_48, &ml_backend__ml_unify_gen__ArgLval_51);
                      }
                      {
                        ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_66, ml_backend__ml_unify_gen__Var_13, &ml_backend__ml_unify_gen__VarLval_52);
                      }
                      {
                        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_66, &ml_backend__ml_unify_gen__ModuleInfo_53);
                      }
                      {
                        ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_66, &ml_backend__ml_unify_gen__HighLevelData_54);
                      }
                      {
                        ml_backend__ml_unify_gen__ml_gen_sub_unify_11_p_0(ml_backend__ml_unify_gen__ModuleInfo_53, ml_backend__ml_unify_gen__HighLevelData_54, ml_backend__ml_unify_gen__Mode_49, ml_backend__ml_unify_gen__ArgLval_51, ml_backend__ml_unify_gen__ArgType_50, ml_backend__ml_unify_gen__VarLval_52, ml_backend__ml_unify_gen__Type_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_unify_gen__Context_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_unify_gen__Statements_18);
                      }
                    }
                  else
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_det_deconstruct_tag\'/10", (MR_String) "no_tag: arity != 1");
                        return;
                      }
                    }
                  *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_67 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_66;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *ml_backend__ml_unify_gen__Statements_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_67 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_66;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_11, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 15:
              case (MR_Integer) 16:
                {
                  *ml_backend__ml_unify_gen__Statements_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_67 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_66;
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
              case (MR_Integer) 11:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_det_deconstruct_tag\'/10", (MR_String) "unexpected tag");
                    return;
                  }
                }
                break;
              case (MR_Integer) 12:
              case (MR_Integer) 14:
                {
                  MR_Word ml_backend__ml_unify_gen__ArgTypes_59;
                  MR_Word ml_backend__ml_unify_gen__Fields_60;
                  MR_Word ml_backend__ml_unify_gen__OffSet_62;
                  MR_Integer ml_backend__ml_unify_gen__ArgNum_63;
                  MR_Word ml_backend__ml_unify_gen__VarLval_101;
                  MR_Integer ml_backend__ml_unify_gen__Var_61;

                  {
                    ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_66, ml_backend__ml_unify_gen__Var_13, &ml_backend__ml_unify_gen__VarLval_101);
                  }
                  {
                    ml_backend__ml_code_util__ml_variable_types_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_66, ml_backend__ml_unify_gen__Args_15, &ml_backend__ml_unify_gen__ArgTypes_59);
                  }
                  {
                    ml_backend__ml_unify_gen__ml_field_names_and_types_5_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_66, ml_backend__ml_unify_gen__Type_12, ml_backend__ml_unify_gen__ConsId_14, ml_backend__ml_unify_gen__ArgTypes_59, &ml_backend__ml_unify_gen__Fields_60);
                  }
                  {
                    ml_backend__ml_unify_gen__ml_tag_offset_and_argnum_4_p_0(ml_backend__ml_unify_gen__Tag_11, &ml_backend__ml_unify_gen__Var_61, &ml_backend__ml_unify_gen__OffSet_62, &ml_backend__ml_unify_gen__ArgNum_63);
                  }
                  {
                    ml_backend__ml_unify_gen__ml_gen_unify_args_14_p_0(ml_backend__ml_unify_gen__ConsId_14, ml_backend__ml_unify_gen__Args_15, ml_backend__ml_unify_gen__Modes_16, ml_backend__ml_unify_gen__ArgTypes_59, ml_backend__ml_unify_gen__Fields_60, ml_backend__ml_unify_gen__Type_12, ml_backend__ml_unify_gen__VarLval_101, ml_backend__ml_unify_gen__OffSet_62, ml_backend__ml_unify_gen__ArgNum_63, ml_backend__ml_unify_gen__Tag_11, ml_backend__ml_unify_gen__Context_17, ml_backend__ml_unify_gen__Statements_18, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_66, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_67);
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Integer ml_backend__ml_unify_gen__Ptag_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_11, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_unify_gen__Arg_89;
                  MR_Word ml_backend__ml_unify_gen__Mode_90;
                  MR_Word ml_backend__ml_unify_gen__Var_70;
                  MR_Word ml_backend__ml_unify_gen__Var_71;

                  ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__Args_15)) == (MR_mktag((MR_Integer) 1)));
                  if (ml_backend__ml_unify_gen__succeeded)
                    {
                      ml_backend__ml_unify_gen__Arg_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Args_15, (MR_Integer) 0)));
                      ml_backend__ml_unify_gen__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Args_15, (MR_Integer) 1)));
                      ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (ml_backend__ml_unify_gen__succeeded)
                        {
                          ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__Modes_16)) == (MR_mktag((MR_Integer) 1)));
                          if (ml_backend__ml_unify_gen__succeeded)
                            {
                              ml_backend__ml_unify_gen__Mode_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Modes_16, (MR_Integer) 0)));
                              ml_backend__ml_unify_gen__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Modes_16, (MR_Integer) 1)));
                              ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                        }
                    }
                  if (ml_backend__ml_unify_gen__succeeded)
                    {
                      MR_Word ml_backend__ml_unify_gen__ArgType_85;
                      MR_Word ml_backend__ml_unify_gen__ArgLval_86;
                      MR_Word ml_backend__ml_unify_gen__VarLval_87;
                      MR_Word ml_backend__ml_unify_gen__ModuleInfo_88;

                      {
                        ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_66, ml_backend__ml_unify_gen__Arg_89, &ml_backend__ml_unify_gen__ArgType_85);
                      }
                      {
                        ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_66, ml_backend__ml_unify_gen__Arg_89, &ml_backend__ml_unify_gen__ArgLval_86);
                      }
                      {
                        ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_66, ml_backend__ml_unify_gen__Var_13, &ml_backend__ml_unify_gen__VarLval_87);
                      }
                      {
                        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_66, &ml_backend__ml_unify_gen__ModuleInfo_88);
                      }
                      {
                        ml_backend__ml_unify_gen__ml_gen_direct_arg_deconstruct_9_p_0(ml_backend__ml_unify_gen__ModuleInfo_88, ml_backend__ml_unify_gen__Mode_90, ml_backend__ml_unify_gen__Ptag_55, ml_backend__ml_unify_gen__ArgLval_86, ml_backend__ml_unify_gen__ArgType_85, ml_backend__ml_unify_gen__VarLval_87, ml_backend__ml_unify_gen__Type_12, ml_backend__ml_unify_gen__Context_17, ml_backend__ml_unify_gen__Statements_18);
                      }
                    }
                  else
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_det_deconstruct_tag\'/10", (MR_String) "direct_arg_tag: arity != 1");
                        return;
                      }
                    }
                  *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_67 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_66;
                }
                break;
              case (MR_Integer) 17:
                {
                  MR_Word ml_backend__ml_unify_gen__ThisTag_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_11, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_unify_gen__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_11, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_unify_gen__next_value_of_Tag_11 = ml_backend__ml_unify_gen__ThisTag_65;

                    ml_backend__ml_unify_gen__Tag_11 = ml_backend__ml_unify_gen__next_value_of_Tag_11;
                  }
                  continue;
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_det_deconstruct_8_p_0(
  MR_Word ml_backend__ml_unify_gen__Var_9,
  MR_Word ml_backend__ml_unify_gen__ConsId_10,
  MR_Word ml_backend__ml_unify_gen__Args_11,
  MR_Word ml_backend__ml_unify_gen__Modes_12,
  MR_Word ml_backend__ml_unify_gen__Context_13,
  MR_Word * ml_backend__ml_unify_gen__Statements_14,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_18,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_19)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__Type_16;
    MR_Word ml_backend__ml_unify_gen__Tag_17;
    MR_Word ml_backend__ml_unify_gen__ModuleInfo_24;

    {
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_18, ml_backend__ml_unify_gen__Var_9, &ml_backend__ml_unify_gen__Type_16);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_18, &ml_backend__ml_unify_gen__ModuleInfo_24);
    }
    {
      ml_backend__ml_unify_gen__Tag_17 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_24, ml_backend__ml_unify_gen__ConsId_10);
    }
    {
      ml_backend__ml_unify_gen__ml_gen_det_deconstruct_tag_10_p_0(ml_backend__ml_unify_gen__Tag_17, ml_backend__ml_unify_gen__Type_16, ml_backend__ml_unify_gen__Var_9, ml_backend__ml_unify_gen__ConsId_10, ml_backend__ml_unify_gen__Args_11, ml_backend__ml_unify_gen__Modes_12, ml_backend__ml_unify_gen__Context_13, ml_backend__ml_unify_gen__Statements_14, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_18, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_19);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_10_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;

    {
      ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_extra_arg_assign__1445__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_10_p_0(
  MR_Word ml_backend__ml_unify_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_unify_gen__VarType_3,
  MR_Word ml_backend__ml_unify_gen__VarLval_4,
  MR_Integer ml_backend__ml_unify_gen__Offset_5,
  MR_Word ml_backend__ml_unify_gen__ConsIdTag_6,
  MR_Word ml_backend__ml_unify_gen__Context_7,
  MR_Word * ml_backend__ml_unify_gen__HeadVar__8_8,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_9,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_10)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    if ((ml_backend__ml_unify_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ml_backend__ml_unify_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *ml_backend__ml_unify_gen__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_10 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_9;
        }
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_extra_arg_assign\'/10", (MR_String) "length mismatch");
            return;
          }
        }
    else
      {
        MR_Word ml_backend__ml_unify_gen__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_unify_gen__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__1_1, (MR_Integer) 0)));

        if ((ml_backend__ml_unify_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_extra_arg_assign\'/10", (MR_String) "length mismatch");
              return;
            }
          }
        else
          {
            MR_Word ml_backend__ml_unify_gen__ExtraType_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ml_backend__ml_unify_gen__ExtraTypes_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ml_backend__ml_unify_gen__Statement_56;
            MR_Word ml_backend__ml_unify_gen__Statements_57;
            MR_Word ml_backend__ml_unify_gen__HighLevelData_59;
            MR_Word ml_backend__ml_unify_gen__MLDS_VarType_60;
            MR_Word ml_backend__ml_unify_gen__FieldId_61;
            MR_Word ml_backend__ml_unify_gen__MaybePrimaryTag_62;
            MR_Word ml_backend__ml_unify_gen__FieldLval_63;
            MR_Word ml_backend__ml_unify_gen__Var_66;
            MR_Word ml_backend__ml_unify_gen__Var_71;
            MR_Word ml_backend__ml_unify_gen__Var_72;
            MR_Word ml_backend__ml_unify_gen__Var_73;
            MR_Integer ml_backend__ml_unify_gen__Var_74;

            {
              ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_9, &ml_backend__ml_unify_gen__HighLevelData_59);
            }
            {
              ml_backend__ml_unify_gen__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_66, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[6]));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_66, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_10_p_0_1));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_66, 3) = ((MR_Box) (ml_backend__ml_unify_gen__HighLevelData_59));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_66, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            {
              mercury__require__expect_4_p_0(ml_backend__ml_unify_gen__Var_66, (MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_extra_arg_assign\'/10", (MR_String) "high-level data");
            }
            {
              ml_backend__ml_code_util__ml_gen_type_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_9, ml_backend__ml_unify_gen__VarType_3, &ml_backend__ml_unify_gen__MLDS_VarType_60);
            }
            {
              ml_backend__ml_unify_gen__Var_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_72, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Offset_5));
            }
            {
              ml_backend__ml_unify_gen__Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_71, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_72));
            }
            {
              ml_backend__ml_unify_gen__FieldId_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__FieldId_61, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Var_71));
            }
            {
              ml_backend__ml_unify_gen__MaybePrimaryTag_62 = hlds__hlds_data__get_primary_tag_1_f_0(ml_backend__ml_unify_gen__ConsIdTag_6);
            }
            {
              ml_backend__ml_unify_gen__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_73, 0) = ((MR_Box) (ml_backend__ml_unify_gen__VarLval_4));
            }
            {
              ml_backend__ml_unify_gen__FieldLval_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__FieldLval_63, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MaybePrimaryTag_62));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__FieldLval_63, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_73));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__FieldLval_63, 2) = ((MR_Box) (ml_backend__ml_unify_gen__FieldId_61));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__FieldLval_63, 3) = ((MR_Box) (ml_backend__ml_unify_gen__ExtraType_49));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__FieldLval_63, 4) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_VarType_60));
            }
            {
              ml_backend__ml_unify_gen__Statement_56 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__FieldLval_63, ml_backend__ml_unify_gen__Var_79, ml_backend__ml_unify_gen__Context_7);
            }
            ml_backend__ml_unify_gen__Var_74 = (ml_backend__ml_unify_gen__Offset_5 + (MR_Integer) 1);
            {
              ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_10_p_0(ml_backend__ml_unify_gen__Var_78, ml_backend__ml_unify_gen__ExtraTypes_50, ml_backend__ml_unify_gen__VarType_3, ml_backend__ml_unify_gen__VarLval_4, ml_backend__ml_unify_gen__Var_74, ml_backend__ml_unify_gen__ConsIdTag_6, ml_backend__ml_unify_gen__Context_7, &ml_backend__ml_unify_gen__Statements_57, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_9, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_10);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_unify_gen__HeadVar__8_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Statement_56));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Statements_57));
            }
          }
      }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_calc_field_offset_3_f_0(
  MR_Integer ml_backend__ml_unify_gen__NumExtraArgs_5,
  MR_Word ml_backend__ml_unify_gen__ConsArgWidths_6,
  MR_Integer ml_backend__ml_unify_gen__ArgNum_7)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__Offset_8;
    MR_Word ml_backend__ml_unify_gen__WidthsBeforeArg_9;
    MR_Integer ml_backend__ml_unify_gen__Var_11 = (ml_backend__ml_unify_gen__ArgNum_7 - (MR_Integer) 1);

    {
      ml_backend__ml_unify_gen__succeeded = mercury__list__take_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, ml_backend__ml_unify_gen__Var_11, ml_backend__ml_unify_gen__ConsArgWidths_6, &ml_backend__ml_unify_gen__WidthsBeforeArg_9);
    }
    if (ml_backend__ml_unify_gen__succeeded)
      {
        MR_Integer ml_backend__ml_unify_gen__WordsBeforeArg_10;
        MR_Integer ml_backend__ml_unify_gen__Var_13;

        {
          ml_backend__ml_unify_gen__WordsBeforeArg_10 = backend_libs__arg_pack__count_distinct_words_1_f_0(ml_backend__ml_unify_gen__WidthsBeforeArg_9);
        }
        ml_backend__ml_unify_gen__Var_13 = (ml_backend__ml_unify_gen__NumExtraArgs_5 + ml_backend__ml_unify_gen__WordsBeforeArg_10);
        ml_backend__ml_unify_gen__Offset_8 = (MR_Word) ml_backend__ml_unify_gen__Var_13;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "function \140ml_backend.ml_unify_gen.ml_calc_field_offset\'/3", (MR_String) "more fields than arg_widths");
        }
      }
    return ml_backend__ml_unify_gen__Offset_8;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_2_16_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;

    {
      ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_cons_args_2__1388__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_2_16_p_0(
  MR_Word ml_backend__ml_unify_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_unify_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_unify_gen__HeadVar__3_3,
  MR_Word ml_backend__ml_unify_gen__HeadVar__4_4,
  MR_Word ml_backend__ml_unify_gen__ConsArgWidths_5,
  MR_Word ml_backend__ml_unify_gen__HeadVar__6_6,
  MR_Integer ml_backend__ml_unify_gen__HeadVar__7_7,
  MR_Integer ml_backend__ml_unify_gen__HeadVar__8_8,
  MR_Word ml_backend__ml_unify_gen__HeadVar__9_9,
  MR_Word ml_backend__ml_unify_gen__HeadVar__10_10,
  MR_Word ml_backend__ml_unify_gen__HeadVar__11_11,
  MR_Word * ml_backend__ml_unify_gen__HeadVar__12_12,
  MR_Word * ml_backend__ml_unify_gen__HeadVar__13_13,
  MR_Word * ml_backend__ml_unify_gen__HeadVar__14_14,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_MayUseAtomic_0_15,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_MayUseAtomic_16)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    if ((ml_backend__ml_unify_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (ml_backend__ml_unify_gen__succeeded)
          {
            ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (ml_backend__ml_unify_gen__succeeded)
              {
                ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (ml_backend__ml_unify_gen__succeeded)
                  {
                    ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (ml_backend__ml_unify_gen__succeeded)
                      {
                        *ml_backend__ml_unify_gen__HeadVar__12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        *ml_backend__ml_unify_gen__HeadVar__13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        *ml_backend__ml_unify_gen__HeadVar__14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        *ml_backend__ml_unify_gen__STATE_VARIABLE_MayUseAtomic_16 = ml_backend__ml_unify_gen__STATE_VARIABLE_MayUseAtomic_0_15;
                        ml_backend__ml_unify_gen__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    else
      {
        MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_82_82;
        MR_Word ml_backend__ml_unify_gen__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_unify_gen__Vars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_unify_gen__Lval_28;
        MR_Word ml_backend__ml_unify_gen__Lvals_29;
        MR_Word ml_backend__ml_unify_gen__ArgType_30;
        MR_Word ml_backend__ml_unify_gen__ArgTypes_31;
        MR_Word ml_backend__ml_unify_gen__ConsArgType_32;
        MR_Word ml_backend__ml_unify_gen__ConsArgTypes_33;
        MR_Word ml_backend__ml_unify_gen__ArgMode_35;
        MR_Word ml_backend__ml_unify_gen__ArgModes_36;
        MR_Word ml_backend__ml_unify_gen__Rval_42;
        MR_Word ml_backend__ml_unify_gen__Rvals_43;
        MR_Word ml_backend__ml_unify_gen__MLDS_Type_44;
        MR_Word ml_backend__ml_unify_gen__MLDS_Types_45;
        MR_Word ml_backend__ml_unify_gen__ConsArgWidth_48;
        MR_Word ml_backend__ml_unify_gen__BoxedArgType_49;
        MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_MayUseAtomic_59_59;
        MR_Box ml_backend__ml_unify_gen__conv0_ConsArgWidth_48;
        MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_TakeAddr_60_60;
        MR_Integer ml_backend__ml_unify_gen__Var_84;

        ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_unify_gen__succeeded)
          {
            ml_backend__ml_unify_gen__Lval_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__2_2, (MR_Integer) 0)));
            ml_backend__ml_unify_gen__Lvals_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__2_2, (MR_Integer) 1)));
            ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__ml_unify_gen__succeeded)
              {
                ml_backend__ml_unify_gen__ArgType_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__3_3, (MR_Integer) 0)));
                ml_backend__ml_unify_gen__ArgTypes_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__3_3, (MR_Integer) 1)));
                ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
                if (ml_backend__ml_unify_gen__succeeded)
                  {
                    ml_backend__ml_unify_gen__ConsArgType_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__4_4, (MR_Integer) 0)));
                    ml_backend__ml_unify_gen__ConsArgTypes_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__4_4, (MR_Integer) 1)));
                    ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__HeadVar__6_6)) == (MR_mktag((MR_Integer) 1)));
                    if (ml_backend__ml_unify_gen__succeeded)
                      {
                        ml_backend__ml_unify_gen__ArgMode_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__6_6, (MR_Integer) 0)));
                        ml_backend__ml_unify_gen__ArgModes_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__6_6, (MR_Integer) 1)));
                        {
                          check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ml_backend__ml_unify_gen__HeadVar__10_10, ml_backend__ml_unify_gen__ArgType_30, ml_backend__ml_unify_gen__STATE_VARIABLE_MayUseAtomic_0_15, &ml_backend__ml_unify_gen__STATE_VARIABLE_MayUseAtomic_59_59);
                        }
                        ml_backend__ml_unify_gen__TypeCtorInfo_82_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0;
                        {
                          mercury__list__det_index1_3_p_0(ml_backend__ml_unify_gen__TypeCtorInfo_82_82, ml_backend__ml_unify_gen__ConsArgWidths_5, ml_backend__ml_unify_gen__HeadVar__8_8, &ml_backend__ml_unify_gen__conv0_ConsArgWidth_48);
                        }
                        ml_backend__ml_unify_gen__ConsArgWidth_48 = ((MR_Word) ml_backend__ml_unify_gen__conv0_ConsArgWidth_48);
                        {
                          ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(ml_backend__ml_unify_gen__HeadVar__10_10, ml_backend__ml_unify_gen__HeadVar__11_11, ml_backend__ml_unify_gen__ConsArgType_32, ml_backend__ml_unify_gen__ConsArgWidth_48, &ml_backend__ml_unify_gen__BoxedArgType_49);
                        }
                        {
                          ml_backend__ml_unify_gen__MLDS_Type_44 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__HeadVar__10_10, ml_backend__ml_unify_gen__BoxedArgType_49);
                        }
                        ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__HeadVar__9_9)) == (MR_mktag((MR_Integer) 1)));
                        if (ml_backend__ml_unify_gen__succeeded)
                          {
                            ml_backend__ml_unify_gen__Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__9_9, (MR_Integer) 0)));
                            ml_backend__ml_unify_gen__STATE_VARIABLE_TakeAddr_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__9_9, (MR_Integer) 1)));
                            ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__HeadVar__8_8 == ml_backend__ml_unify_gen__Var_84);
                          }
                        if (ml_backend__ml_unify_gen__succeeded)
                          {
                            MR_Word ml_backend__ml_unify_gen__TakeAddrInfosTail_50;
                            MR_Word ml_backend__ml_unify_gen__Offset_51;
                            MR_Word ml_backend__ml_unify_gen__OrigMLDS_Type_52;
                            MR_Word ml_backend__ml_unify_gen__TakeAddrInfo_53;
                            MR_Word ml_backend__ml_unify_gen__Var_61;
                            MR_Word ml_backend__ml_unify_gen__Var_66;
                            MR_Integer ml_backend__ml_unify_gen__Var_67;

                            {
                              ml_backend__ml_unify_gen__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_61, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[5]));
                              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_61, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_cons_args_2_16_p_0_1));
                              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_61, 3) = ((MR_Box) (ml_backend__ml_unify_gen__ConsArgWidth_48));
                              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_61, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                            {
                              mercury__require__expect_4_p_0(ml_backend__ml_unify_gen__Var_61, (MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_cons_args_2\'/16", (MR_String) "taking address of non word-sized argument");
                            }
                            ml_backend__ml_unify_gen__Var_67 = (ml_backend__ml_unify_gen__HeadVar__8_8 + (MR_Integer) 1);
                            {
                              ml_backend__ml_unify_gen__Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_66, 1) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_44));
                            }
                            {
                              ml_backend__ml_unify_gen__Rval_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_42, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_66));
                            }
                            {
                              ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen__ml_gen_cons_args_2_16_p_0(ml_backend__ml_unify_gen__Vars_27, ml_backend__ml_unify_gen__Lvals_29, ml_backend__ml_unify_gen__ArgTypes_31, ml_backend__ml_unify_gen__ConsArgTypes_33, ml_backend__ml_unify_gen__ConsArgWidths_5, ml_backend__ml_unify_gen__ArgModes_36, ml_backend__ml_unify_gen__HeadVar__7_7, ml_backend__ml_unify_gen__Var_67, ml_backend__ml_unify_gen__STATE_VARIABLE_TakeAddr_60_60, ml_backend__ml_unify_gen__HeadVar__10_10, ml_backend__ml_unify_gen__HeadVar__11_11, &ml_backend__ml_unify_gen__Rvals_43, &ml_backend__ml_unify_gen__MLDS_Types_45, &ml_backend__ml_unify_gen__TakeAddrInfosTail_50, ml_backend__ml_unify_gen__STATE_VARIABLE_MayUseAtomic_59_59, ml_backend__ml_unify_gen__STATE_VARIABLE_MayUseAtomic_16);
                            }
                            if (ml_backend__ml_unify_gen__succeeded)
                              {
                                {
                                  ml_backend__ml_unify_gen__Offset_51 = ml_backend__ml_unify_gen__ml_calc_field_offset_3_f_0(ml_backend__ml_unify_gen__HeadVar__7_7, ml_backend__ml_unify_gen__ConsArgWidths_5, ml_backend__ml_unify_gen__HeadVar__8_8);
                                }
                                {
                                  ml_backend__ml_unify_gen__OrigMLDS_Type_52 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__HeadVar__10_10, ml_backend__ml_unify_gen__ConsArgType_32);
                                }
                                {
                                  ml_backend__ml_unify_gen__TakeAddrInfo_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__TakeAddrInfo_53, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Var_26));
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__TakeAddrInfo_53, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Offset_51));
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__TakeAddrInfo_53, 2) = ((MR_Box) (ml_backend__ml_unify_gen__OrigMLDS_Type_52));
                                  MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__TakeAddrInfo_53, 3) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_44));
                                }
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  *ml_backend__ml_unify_gen__HeadVar__14_14 = base;
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__TakeAddrInfo_53));
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__TakeAddrInfosTail_50));
                                }
                                ml_backend__ml_unify_gen__succeeded = MR_TRUE;
                              }
                          }
                        else
                          {
                            MR_Word ml_backend__ml_unify_gen__RHSInsts_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgMode_35, (MR_Integer) 1)));
                            MR_Integer ml_backend__ml_unify_gen__Var_76;
                            MR_Word ml_backend__ml_unify_gen___LHSInsts_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgMode_35, (MR_Integer) 0)));
                            MR_Word ml_backend__ml_unify_gen__Var_71;
                            MR_Word ml_backend__ml_unify_gen__Var_72;
                            MR_Word ml_backend__ml_unify_gen__Var_85;

                            {
                              check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ml_backend__ml_unify_gen__HeadVar__10_10, ml_backend__ml_unify_gen__RHSInsts_55, ml_backend__ml_unify_gen__ArgType_30, &ml_backend__ml_unify_gen__Var_85);
                            }
                            ml_backend__ml_unify_gen__succeeded = ((MR_Integer) 0 == ml_backend__ml_unify_gen__Var_85);
                            if (ml_backend__ml_unify_gen__succeeded)
                              {
                                {
                                  ml_backend__ml_unify_gen__Var_71 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_unify_gen__HeadVar__10_10, ml_backend__ml_unify_gen__ArgType_30);
                                }
                                ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_71 == (MR_Integer) 1);
                                if (ml_backend__ml_unify_gen__succeeded)
                                  {
                                    {
                                      ml_backend__ml_unify_gen__Var_72 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_unify_gen__HeadVar__10_10, ml_backend__ml_unify_gen__ConsArgType_32);
                                    }
                                    ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_72 == (MR_Integer) 1);
                                  }
                              }
                            if (ml_backend__ml_unify_gen__succeeded)
                              {
                                MR_Word ml_backend__ml_unify_gen__Var_74;

                                {
                                  ml_backend__ml_unify_gen__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_74, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Lval_28));
                                }
                                {
                                  ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_unify_gen__HeadVar__10_10, ml_backend__ml_unify_gen__ArgType_30, ml_backend__ml_unify_gen__BoxedArgType_49, (MR_Integer) 0, ml_backend__ml_unify_gen__Var_74, &ml_backend__ml_unify_gen__Rval_42);
                                }
                              }
                            else
                              {
                                MR_Word ml_backend__ml_unify_gen__Var_75;

                                {
                                  ml_backend__ml_unify_gen__Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_75, 1) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_44));
                                }
                                {
                                  ml_backend__ml_unify_gen__Rval_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_42, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_75));
                                }
                              }
                            ml_backend__ml_unify_gen__Var_76 = (ml_backend__ml_unify_gen__HeadVar__8_8 + (MR_Integer) 1);
                            {
                              ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen__ml_gen_cons_args_2_16_p_0(ml_backend__ml_unify_gen__Vars_27, ml_backend__ml_unify_gen__Lvals_29, ml_backend__ml_unify_gen__ArgTypes_31, ml_backend__ml_unify_gen__ConsArgTypes_33, ml_backend__ml_unify_gen__ConsArgWidths_5, ml_backend__ml_unify_gen__ArgModes_36, ml_backend__ml_unify_gen__HeadVar__7_7, ml_backend__ml_unify_gen__Var_76, ml_backend__ml_unify_gen__HeadVar__9_9, ml_backend__ml_unify_gen__HeadVar__10_10, ml_backend__ml_unify_gen__HeadVar__11_11, &ml_backend__ml_unify_gen__Rvals_43, &ml_backend__ml_unify_gen__MLDS_Types_45, ml_backend__ml_unify_gen__HeadVar__14_14, ml_backend__ml_unify_gen__STATE_VARIABLE_MayUseAtomic_59_59, ml_backend__ml_unify_gen__STATE_VARIABLE_MayUseAtomic_16);
                            }
                          }
                        if (ml_backend__ml_unify_gen__succeeded)
                          {
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *ml_backend__ml_unify_gen__HeadVar__12_12 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_42));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Rvals_43));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *ml_backend__ml_unify_gen__HeadVar__13_13 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_44));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Types_45));
                            }
                            ml_backend__ml_unify_gen__succeeded = MR_TRUE;
                          }
                      }
                  }
              }
          }
      }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_cons_args_15_p_0(
  MR_Word ml_backend__ml_unify_gen__Vars_16,
  MR_Word ml_backend__ml_unify_gen__Lvals_17,
  MR_Word ml_backend__ml_unify_gen__ArgTypes_18,
  MR_Word ml_backend__ml_unify_gen__ConsArgTypes_19,
  MR_Word ml_backend__ml_unify_gen__ConsArgWidths_20,
  MR_Word ml_backend__ml_unify_gen__UniModes_21,
  MR_Integer ml_backend__ml_unify_gen__NumExtraArgs_22,
  MR_Word ml_backend__ml_unify_gen__TakeAddr_23,
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_24,
  MR_Word ml_backend__ml_unify_gen__HighLevelData_25,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Rvals_30,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_MLDS_Types_31,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_TakeAddrInfos_32,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_MayUseAtomic_0_33,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_MayUseAtomic_34)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Rvals_36_36;
    MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_MLDS_Types_37_37;
    MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_TakeAddrInfos_38_38;
    MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_MayUseAtomic_39_39;

    {
      ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen__ml_gen_cons_args_2_16_p_0(ml_backend__ml_unify_gen__Vars_16, ml_backend__ml_unify_gen__Lvals_17, ml_backend__ml_unify_gen__ArgTypes_18, ml_backend__ml_unify_gen__ConsArgTypes_19, ml_backend__ml_unify_gen__ConsArgWidths_20, ml_backend__ml_unify_gen__UniModes_21, ml_backend__ml_unify_gen__NumExtraArgs_22, (MR_Integer) 1, ml_backend__ml_unify_gen__TakeAddr_23, ml_backend__ml_unify_gen__ModuleInfo_24, ml_backend__ml_unify_gen__HighLevelData_25, &ml_backend__ml_unify_gen__STATE_VARIABLE_Rvals_36_36, &ml_backend__ml_unify_gen__STATE_VARIABLE_MLDS_Types_37_37, &ml_backend__ml_unify_gen__STATE_VARIABLE_TakeAddrInfos_38_38, ml_backend__ml_unify_gen__STATE_VARIABLE_MayUseAtomic_0_33, &ml_backend__ml_unify_gen__STATE_VARIABLE_MayUseAtomic_39_39);
    }
    if (ml_backend__ml_unify_gen__succeeded)
      {
        *ml_backend__ml_unify_gen__STATE_VARIABLE_MayUseAtomic_34 = ml_backend__ml_unify_gen__STATE_VARIABLE_MayUseAtomic_39_39;
        *ml_backend__ml_unify_gen__STATE_VARIABLE_TakeAddrInfos_32 = ml_backend__ml_unify_gen__STATE_VARIABLE_TakeAddrInfos_38_38;
        *ml_backend__ml_unify_gen__STATE_VARIABLE_MLDS_Types_31 = ml_backend__ml_unify_gen__STATE_VARIABLE_MLDS_Types_37_37;
        *ml_backend__ml_unify_gen__STATE_VARIABLE_Rvals_30 = ml_backend__ml_unify_gen__STATE_VARIABLE_Rvals_36_36;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_cons_args\'/15", (MR_String) "length mismatch");
          return;
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_box_extra_const_rval_list_lld_7_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_1,
  MR_Word ml_backend__ml_unify_gen__Context_2,
  MR_Word ml_backend__ml_unify_gen__HeadVar__3_3,
  MR_Word ml_backend__ml_unify_gen__HeadVar__4_4,
  MR_Word * ml_backend__ml_unify_gen__HeadVar__5_5,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_6,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_7)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    if ((ml_backend__ml_unify_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ml_backend__ml_unify_gen__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *ml_backend__ml_unify_gen__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_7 = ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_6;
        }
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_box_extra_const_rval_list_lld\'/7", (MR_String) "length mismatch");
            return;
          }
        }
    else
      {
        MR_Word ml_backend__ml_unify_gen__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_unify_gen__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__3_3, (MR_Integer) 0)));

        if ((ml_backend__ml_unify_gen__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_box_extra_const_rval_list_lld\'/7", (MR_String) "length mismatch");
              return;
            }
          }
        else
          {
            MR_Word ml_backend__ml_unify_gen__Rval_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word ml_backend__ml_unify_gen__Rvals_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word ml_backend__ml_unify_gen__BoxedRval_19;
            MR_Word ml_backend__ml_unify_gen__BoxedRvals_20;
            MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_25_25;

            {
              ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ml_backend__ml_unify_gen__ModuleInfo_1, ml_backend__ml_unify_gen__Context_2, ml_backend__ml_unify_gen__Var_50, (MR_Integer) 0, ml_backend__ml_unify_gen__Rval_17, &ml_backend__ml_unify_gen__BoxedRval_19, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_6, &ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_25_25);
            }
            {
              ml_backend__ml_unify_gen__ml_gen_box_extra_const_rval_list_lld_7_p_0(ml_backend__ml_unify_gen__ModuleInfo_1, ml_backend__ml_unify_gen__Context_2, ml_backend__ml_unify_gen__Var_49, ml_backend__ml_unify_gen__Rvals_18, &ml_backend__ml_unify_gen__BoxedRvals_20, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_25_25, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_7);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_unify_gen__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__BoxedRval_19));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__BoxedRvals_20));
            }
          }
      }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_box_const_rval_list_lld_6_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_1,
  MR_Word ml_backend__ml_unify_gen__Context_2,
  MR_Word ml_backend__ml_unify_gen__HeadVar__3_3,
  MR_Word * ml_backend__ml_unify_gen__HeadVar__4_4,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_5,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_6)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    if ((ml_backend__ml_unify_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_unify_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_6 = ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_5;
      }
    else
      {
        MR_Word ml_backend__ml_unify_gen__GroundTerm_14;
        MR_Word ml_backend__ml_unify_gen__ArgWidth_15;
        MR_Word ml_backend__ml_unify_gen__GroundTerms_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_unify_gen__BoxedRval_17;
        MR_Word ml_backend__ml_unify_gen__BoxedRvals_18;
        MR_Word ml_backend__ml_unify_gen__Rval_20;
        MR_Word ml_backend__ml_unify_gen__MLDS_Type_22;
        MR_Word ml_backend__ml_unify_gen__DoubleWidth_23;
        MR_Word ml_backend__ml_unify_gen__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_27_27;
        MR_Word ml_backend__ml_unify_gen___MercuryType_21;

        ml_backend__ml_unify_gen__GroundTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_26, (MR_Integer) 0)));
        ml_backend__ml_unify_gen__ArgWidth_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_26, (MR_Integer) 1)));
        ml_backend__ml_unify_gen__Rval_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_14, (MR_Integer) 0)));
        ml_backend__ml_unify_gen___MercuryType_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_14, (MR_Integer) 1)));
        ml_backend__ml_unify_gen__MLDS_Type_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_14, (MR_Integer) 2)));
        switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__ArgWidth_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ml_backend__ml_unify_gen__ArgWidth_15)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ml_backend__ml_unify_gen__DoubleWidth_23 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                ml_backend__ml_unify_gen__DoubleWidth_23 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            ml_backend__ml_unify_gen__DoubleWidth_23 = (MR_Integer) 0;
            break;
        }
        {
          ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ml_backend__ml_unify_gen__ModuleInfo_1, ml_backend__ml_unify_gen__Context_2, ml_backend__ml_unify_gen__MLDS_Type_22, ml_backend__ml_unify_gen__DoubleWidth_23, ml_backend__ml_unify_gen__Rval_20, &ml_backend__ml_unify_gen__BoxedRval_17, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_5, &ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_27_27);
        }
        {
          ml_backend__ml_unify_gen__ml_gen_box_const_rval_list_lld_6_p_0(ml_backend__ml_unify_gen__ModuleInfo_1, ml_backend__ml_unify_gen__Context_2, ml_backend__ml_unify_gen__GroundTerms_16, &ml_backend__ml_unify_gen__BoxedRvals_18, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_27_27, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_unify_gen__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__BoxedRval_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__BoxedRvals_18));
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_box_or_unbox_const_rval_list_hld_8_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_9,
  MR_Word ml_backend__ml_unify_gen__ArgTypes_10,
  MR_Word ml_backend__ml_unify_gen__FieldTypes_11,
  MR_Word ml_backend__ml_unify_gen__ArgRvals_12,
  MR_Word ml_backend__ml_unify_gen__Context_13,
  MR_Word * ml_backend__ml_unify_gen__FieldRvals_14,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_24,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_25)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__ArgTypes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (ml_backend__ml_unify_gen__succeeded)
      {
        ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__FieldTypes_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (ml_backend__ml_unify_gen__succeeded)
          ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__ArgRvals_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (ml_backend__ml_unify_gen__succeeded)
      {
        *ml_backend__ml_unify_gen__FieldRvals_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_25 = ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_24;
      }
    else
      {
        MR_Word ml_backend__ml_unify_gen__ArgType_16;
        MR_Word ml_backend__ml_unify_gen__ArgTypesTail_17;
        MR_Word ml_backend__ml_unify_gen__FieldType_18;
        MR_Word ml_backend__ml_unify_gen__FieldTypesTail_19;
        MR_Word ml_backend__ml_unify_gen__ArgRval_20;
        MR_Word ml_backend__ml_unify_gen__ArgRvalsTail_21;

        ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__ArgTypes_10)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_unify_gen__succeeded)
          {
            ml_backend__ml_unify_gen__ArgType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ArgTypes_10, (MR_Integer) 0)));
            ml_backend__ml_unify_gen__ArgTypesTail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ArgTypes_10, (MR_Integer) 1)));
            ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__FieldTypes_11)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__ml_unify_gen__succeeded)
              {
                ml_backend__ml_unify_gen__FieldType_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__FieldTypes_11, (MR_Integer) 0)));
                ml_backend__ml_unify_gen__FieldTypesTail_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__FieldTypes_11, (MR_Integer) 1)));
                ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__ArgRvals_12)) == (MR_mktag((MR_Integer) 1)));
                if (ml_backend__ml_unify_gen__succeeded)
                  {
                    ml_backend__ml_unify_gen__ArgRval_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ArgRvals_12, (MR_Integer) 0)));
                    ml_backend__ml_unify_gen__ArgRvalsTail_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ArgRvals_12, (MR_Integer) 1)));
                  }
              }
          }
        if (ml_backend__ml_unify_gen__succeeded)
          {
            MR_Word ml_backend__ml_unify_gen__FieldRval_22;
            MR_Word ml_backend__ml_unify_gen__FieldRvalsTail_23;
            MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_26_26;

            switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__FieldType_18)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_unify_gen__MLDS_ArgType_42;

                  {
                    ml_backend__ml_unify_gen__MLDS_ArgType_42 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_9, ml_backend__ml_unify_gen__ArgType_16);
                  }
                  {
                    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ml_backend__ml_unify_gen__ModuleInfo_9, ml_backend__ml_unify_gen__Context_13, ml_backend__ml_unify_gen__MLDS_ArgType_42, (MR_Integer) 0, ml_backend__ml_unify_gen__ArgRval_20, &ml_backend__ml_unify_gen__FieldRval_22, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_24, &ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_26_26);
                  }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  {
                    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_unify_gen__ModuleInfo_9, ml_backend__ml_unify_gen__ArgType_16, ml_backend__ml_unify_gen__FieldType_18, (MR_Integer) 0, ml_backend__ml_unify_gen__ArgRval_20, &ml_backend__ml_unify_gen__FieldRval_22);
                  }
                  ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_26_26 = ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_24;
                }
                break;
              case (MR_Integer) 3:
                {
                  {
                    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_unify_gen__ModuleInfo_9, ml_backend__ml_unify_gen__ArgType_16, ml_backend__ml_unify_gen__FieldType_18, (MR_Integer) 0, ml_backend__ml_unify_gen__ArgRval_20, &ml_backend__ml_unify_gen__FieldRval_22);
                  }
                  ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_26_26 = ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_24;
                }
                break;
            }
            {
              ml_backend__ml_unify_gen__ml_gen_box_or_unbox_const_rval_list_hld_8_p_0(ml_backend__ml_unify_gen__ModuleInfo_9, ml_backend__ml_unify_gen__ArgTypesTail_17, ml_backend__ml_unify_gen__FieldTypesTail_19, ml_backend__ml_unify_gen__ArgRvalsTail_21, ml_backend__ml_unify_gen__Context_13, &ml_backend__ml_unify_gen__FieldRvalsTail_23, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_26_26, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_25);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_unify_gen__FieldRvals_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__FieldRval_22));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__FieldRvalsTail_23));
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_box_or_unbox_const_rval_list_hld\'/8", (MR_String) "list length mismatch");
              return;
            }
          }
      }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(
  MR_Word ml_backend__ml_unify_gen__Type_5,
  MR_Word ml_backend__ml_unify_gen__Tag_6,
  MR_Word ml_backend__ml_unify_gen__Rval_7)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__CastRval_8;
    MR_Word ml_backend__ml_unify_gen__TagRval_9;
    MR_Word ml_backend__ml_unify_gen__Var_11;

    if ((ml_backend__ml_unify_gen__Tag_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
      ml_backend__ml_unify_gen__TagRval_9 = ml_backend__ml_unify_gen__Rval_7;
    else
      {
        MR_Integer ml_backend__ml_unify_gen__Ptag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_6, (MR_Integer) 1)));

        {
          ml_backend__ml_unify_gen__TagRval_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__TagRval_9, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Ptag_10));
          MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__TagRval_9, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_7));
        }
      }
    {
      ml_backend__ml_unify_gen__Var_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_11, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Type_5));
    }
    {
      ml_backend__ml_unify_gen__CastRval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastRval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastRval_8, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_11));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastRval_8, 2) = ((MR_Box) (ml_backend__ml_unify_gen__TagRval_9));
    }
    return ml_backend__ml_unify_gen__CastRval_8;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_mktag_1_f_0(
  MR_Integer ml_backend__ml_unify_gen__Tag_3)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__HeadVar__2_2;
    MR_Word ml_backend__ml_unify_gen__Var_6;
    MR_Word ml_backend__ml_unify_gen__Var_7;

    {
      ml_backend__ml_unify_gen__Var_7 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_7, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Tag_3));
    }
    {
      ml_backend__ml_unify_gen__Var_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_6, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_7));
    }
    {
      ml_backend__ml_unify_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_4[6])));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__HeadVar__2_2, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_6));
    }
    return ml_backend__ml_unify_gen__HeadVar__2_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__get_maybe_cons_id_arg_types_6_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;
    MR_Word ml_backend__ml_unify_gen__conv1_LambdaHeadVar__2_33;
    MR_Word ml_backend__ml_unify_gen__conv0_LambdaHeadVar__3_34;

    {
      ml_backend__ml_unify_gen__IntroducedFrom__pred__constructor_arg_types__1150__1_3_p_0(((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_1), &ml_backend__ml_unify_gen__conv1_LambdaHeadVar__2_33, &ml_backend__ml_unify_gen__conv0_LambdaHeadVar__3_34);
    }
    *ml_backend__ml_unify_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_unify_gen__conv1_LambdaHeadVar__2_33));
    *ml_backend__ml_unify_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_unify_gen__conv0_LambdaHeadVar__3_34));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__get_maybe_cons_id_arg_types_6_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_7,
  MR_Word ml_backend__ml_unify_gen__MaybeConsId_8,
  MR_Word ml_backend__ml_unify_gen__ArgTypes_9,
  MR_Word ml_backend__ml_unify_gen__Type_10,
  MR_Word * ml_backend__ml_unify_gen__ConsArgTypes_11,
  MR_Word * ml_backend__ml_unify_gen__ConsArgWidths_12)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    if ((ml_backend__ml_unify_gen__MaybeConsId_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer ml_backend__ml_unify_gen__Length_14;

        {
          ml_backend__ml_unify_gen__Length_14 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ml_backend__ml_unify_gen__ArgTypes_9);
        }
        {
          *ml_backend__ml_unify_gen__ConsArgTypes_11 = ml_backend__ml_code_util__ml_make_boxed_types_1_f_0(ml_backend__ml_unify_gen__Length_14);
        }
        {
          *ml_backend__ml_unify_gen__ConsArgWidths_12 = mercury__list__duplicate_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, ml_backend__ml_unify_gen__Length_14, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
        }
      }
    else
      {
        MR_Word ml_backend__ml_unify_gen__ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__MaybeConsId_8, (MR_Integer) 0)));
        MR_Word ml_backend__ml_unify_gen__Var_24;
        MR_Integer ml_backend__ml_unify_gen__Var_25;
        MR_Word ml_backend__ml_unify_gen__Var_26;

        ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__ConsId_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsId_13, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (ml_backend__ml_unify_gen__succeeded)
          {
            ml_backend__ml_unify_gen__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsId_13, (MR_Integer) 1)));
            ml_backend__ml_unify_gen__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsId_13, (MR_Integer) 2)));
            ml_backend__ml_unify_gen__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsId_13, (MR_Integer) 3)));
            {
              ml_backend__ml_unify_gen__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(ml_backend__ml_unify_gen__Type_10);
            }
            ml_backend__ml_unify_gen__succeeded = !(ml_backend__ml_unify_gen__succeeded);
          }
        if (ml_backend__ml_unify_gen__succeeded)
          {
            MR_Word ml_backend__ml_unify_gen__TypeCtor_27;
            MR_Word ml_backend__ml_unify_gen__ConsDefn_28;

            {
              parse_tree__prog_type__type_to_ctor_det_2_p_0(ml_backend__ml_unify_gen__Type_10, &ml_backend__ml_unify_gen__TypeCtor_27);
            }
            {
              ml_backend__ml_unify_gen__succeeded = check_hlds__type_util__get_cons_defn_4_p_0(ml_backend__ml_unify_gen__ModuleInfo_7, ml_backend__ml_unify_gen__TypeCtor_27, ml_backend__ml_unify_gen__ConsId_13, &ml_backend__ml_unify_gen__ConsDefn_28);
            }
            if (ml_backend__ml_unify_gen__succeeded)
              {
                MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_55_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_56_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0;
                MR_Word ml_backend__ml_unify_gen__ConsArgDefns_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_28, (MR_Integer) 6)));
                MR_Word ml_backend__ml_unify_gen__ConsArgTypes0_35;
                MR_Word ml_backend__ml_unify_gen__ConsArgWidths0_36;
                MR_Integer ml_backend__ml_unify_gen__NumExtraArgs_37;
                MR_Word ml_backend__ml_unify_gen__ExtraArgTypes_38;
                MR_Word ml_backend__ml_unify_gen__ExtraArgWidths_39;
                MR_Integer ml_backend__ml_unify_gen__Var_46;
                MR_Integer ml_backend__ml_unify_gen__Var_47;
                MR_Word ml_backend__ml_unify_gen__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_28, (MR_Integer) 0)));
                MR_Word ml_backend__ml_unify_gen__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_28, (MR_Integer) 1)));
                MR_Word ml_backend__ml_unify_gen__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_28, (MR_Integer) 2)));
                MR_Word ml_backend__ml_unify_gen__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_28, (MR_Integer) 3)));
                MR_Word ml_backend__ml_unify_gen__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_28, (MR_Integer) 4)));
                MR_Word ml_backend__ml_unify_gen__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_28, (MR_Integer) 5)));
                MR_Word ml_backend__ml_unify_gen__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsDefn_28, (MR_Integer) 7)));

                {
                  mercury__list__map2_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, ml_backend__ml_unify_gen__TypeCtorInfo_55_66, ml_backend__ml_unify_gen__TypeCtorInfo_56_67, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[5], ml_backend__ml_unify_gen__ConsArgDefns_29, &ml_backend__ml_unify_gen__ConsArgTypes0_35, &ml_backend__ml_unify_gen__ConsArgWidths0_36);
                }
                {
                  ml_backend__ml_unify_gen__Var_46 = mercury__list__length_1_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_55_66, ml_backend__ml_unify_gen__ArgTypes_9);
                }
                {
                  ml_backend__ml_unify_gen__Var_47 = mercury__list__length_1_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_55_66, ml_backend__ml_unify_gen__ConsArgTypes0_35);
                }
                ml_backend__ml_unify_gen__NumExtraArgs_37 = (ml_backend__ml_unify_gen__Var_46 - ml_backend__ml_unify_gen__Var_47);
                {
                  ml_backend__ml_unify_gen__ExtraArgTypes_38 = mercury__list__take_upto_2_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_55_66, ml_backend__ml_unify_gen__NumExtraArgs_37, ml_backend__ml_unify_gen__ArgTypes_9);
                }
                {
                  ml_backend__ml_unify_gen__ExtraArgWidths_39 = mercury__list__duplicate_2_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_56_67, ml_backend__ml_unify_gen__NumExtraArgs_37, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
                }
                {
                  *ml_backend__ml_unify_gen__ConsArgTypes_11 = mercury__list__f_43_43_2_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_55_66, ml_backend__ml_unify_gen__ExtraArgTypes_38, ml_backend__ml_unify_gen__ConsArgTypes0_35);
                }
                {
                  *ml_backend__ml_unify_gen__ConsArgWidths_12 = mercury__list__f_43_43_2_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_56_67, ml_backend__ml_unify_gen__ExtraArgWidths_39, ml_backend__ml_unify_gen__ConsArgWidths0_36);
                }
              }
            else
              {
                MR_Word ml_backend__ml_unify_gen__Var_40;

                {
                  ml_backend__ml_unify_gen__succeeded = parse_tree__prog_type__type_is_tuple_2_p_0(ml_backend__ml_unify_gen__Type_10, &ml_backend__ml_unify_gen__Var_40);
                }
                if (ml_backend__ml_unify_gen__succeeded)
                  {
                    MR_Integer ml_backend__ml_unify_gen__Length_41;

                    {
                      ml_backend__ml_unify_gen__Length_41 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ml_backend__ml_unify_gen__ArgTypes_9);
                    }
                    {
                      *ml_backend__ml_unify_gen__ConsArgTypes_11 = ml_backend__ml_code_util__ml_make_boxed_types_1_f_0(ml_backend__ml_unify_gen__Length_41);
                    }
                    {
                      *ml_backend__ml_unify_gen__ConsArgWidths_12 = mercury__list__duplicate_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, ml_backend__ml_unify_gen__Length_41, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
                    }
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.constructor_arg_types\'/6", (MR_String) "get_cons_defn failed");
                      return;
                    }
                  }
              }
          }
        else
          {
            MR_Integer ml_backend__ml_unify_gen__Length_57;

            *ml_backend__ml_unify_gen__ConsArgTypes_11 = ml_backend__ml_unify_gen__ArgTypes_9;
            {
              ml_backend__ml_unify_gen__Length_57 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ml_backend__ml_unify_gen__ArgTypes_9);
            }
            {
              *ml_backend__ml_unify_gen__ConsArgWidths_12 = mercury__list__duplicate_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, ml_backend__ml_unify_gen__Length_57, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
            }
          }
      }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_6,
  MR_Word ml_backend__ml_unify_gen__HighLevelData_7,
  MR_Word ml_backend__ml_unify_gen__FieldType_8,
  MR_Word ml_backend__ml_unify_gen__FieldWidth_9,
  MR_Word * ml_backend__ml_unify_gen__BoxedFieldType_10)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    switch (ml_backend__ml_unify_gen__HighLevelData_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__FieldWidth_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          ml_backend__ml_unify_gen__succeeded = !(ml_backend__ml_unify_gen__succeeded);
        }
        break;
      case (MR_Integer) 1:
        {
          ml_backend__ml_unify_gen__succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ml_backend__ml_unify_gen__ModuleInfo_6, ml_backend__ml_unify_gen__FieldType_8, ml_backend__ml_unify_gen__FieldWidth_9);
        }
        break;
    }
    if (ml_backend__ml_unify_gen__succeeded)
      {
        MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
        MR_Word ml_backend__ml_unify_gen__TypeVarSet0_11;
        MR_Word ml_backend__ml_unify_gen__TypeVar_12;
        MR_Word ml_backend__ml_unify_gen___TypeVarSet_13;

        {
          mercury__varset__init_1_p_0(ml_backend__ml_unify_gen__TypeCtorInfo_15_15, &ml_backend__ml_unify_gen__TypeVarSet0_11);
        }
        {
          mercury__varset__new_var_3_p_0(ml_backend__ml_unify_gen__TypeCtorInfo_15_15, &ml_backend__ml_unify_gen__TypeVar_12, ml_backend__ml_unify_gen__TypeVarSet0_11, &ml_backend__ml_unify_gen___TypeVarSet_13);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *ml_backend__ml_unify_gen__BoxedFieldType_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__TypeVar_12));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    else
      *ml_backend__ml_unify_gen__BoxedFieldType_10 = ml_backend__ml_unify_gen__FieldType_8;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen__get_const_type_for_cons_id_5_f_0(
  MR_Word ml_backend__ml_unify_gen__Target_7,
  MR_Word ml_backend__ml_unify_gen__HighLevelData_8,
  MR_Word ml_backend__ml_unify_gen__MLDS_Type_9,
  MR_Word ml_backend__ml_unify_gen__UsesBaseClass_10,
  MR_Word ml_backend__ml_unify_gen__MaybeConsId_11)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__ConstType_12;

    switch (ml_backend__ml_unify_gen__HighLevelData_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ml_backend__ml_unify_gen__ConstType_12 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[6]);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_unify_gen__TypeCtorCategory_14;
          MR_Word ml_backend__ml_unify_gen__Var_13;
          MR_Word ml_backend__ml_unify_gen__Var_15;
          MR_Word ml_backend__ml_unify_gen__Var_16;

          ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Target_7 == (MR_Integer) 0);
          if (ml_backend__ml_unify_gen__succeeded)
            {
              ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__MLDS_Type_9)) == (MR_mktag((MR_Integer) 2)));
              if (ml_backend__ml_unify_gen__succeeded)
                {
                  ml_backend__ml_unify_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__MLDS_Type_9, (MR_Integer) 0)));
                  ml_backend__ml_unify_gen__TypeCtorCategory_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__MLDS_Type_9, (MR_Integer) 1)));
                  ml_backend__ml_unify_gen__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__MLDS_Type_9, (MR_Integer) 2)));
                  ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__TypeCtorCategory_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TypeCtorCategory_14, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (ml_backend__ml_unify_gen__succeeded)
                    ml_backend__ml_unify_gen__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__TypeCtorCategory_14, (MR_Integer) 1)));
                }
            }
          if (ml_backend__ml_unify_gen__succeeded)
            {
              ml_backend__ml_unify_gen__ConstType_12 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[6]);
            }
          else
            {
              MR_Word ml_backend__ml_unify_gen__CtorSymName_18;
              MR_Integer ml_backend__ml_unify_gen__CtorArity_19;
              MR_Word ml_backend__ml_unify_gen__QualTypeName_21;
              MR_Integer ml_backend__ml_unify_gen__TypeArity_22;
              MR_Word ml_backend__ml_unify_gen__ConsId_17;
              MR_Word ml_backend__ml_unify_gen___TypeCtor_20;

              ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__UsesBaseClass_10 == (MR_Integer) 0);
              if (ml_backend__ml_unify_gen__succeeded)
                {
                  ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__MaybeConsId_11)) == (MR_mktag((MR_Integer) 1)));
                  if (ml_backend__ml_unify_gen__succeeded)
                    {
                      ml_backend__ml_unify_gen__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__MaybeConsId_11, (MR_Integer) 0)));
                      ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__ConsId_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsId_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
                      if (ml_backend__ml_unify_gen__succeeded)
                        {
                          ml_backend__ml_unify_gen__CtorSymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsId_17, (MR_Integer) 1)));
                          ml_backend__ml_unify_gen__CtorArity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsId_17, (MR_Integer) 2)));
                          ml_backend__ml_unify_gen___TypeCtor_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsId_17, (MR_Integer) 3)));
                          if (((MR_tag((MR_Word) ml_backend__ml_unify_gen__MLDS_Type_9)) == (MR_mktag((MR_Integer) 2))))
                            {
                              MR_Word ml_backend__ml_unify_gen__MercuryType_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__MLDS_Type_9, (MR_Integer) 0)));
                              MR_Word ml_backend__ml_unify_gen__TypeCtor_27;
                              MR_Word ml_backend__ml_unify_gen__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__MLDS_Type_9, (MR_Integer) 1)));
                              MR_Word ml_backend__ml_unify_gen__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__MLDS_Type_9, (MR_Integer) 2)));
                              MR_Word ml_backend__ml_unify_gen__Var_25;

                              ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__Var_45)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_45, (MR_Integer) 0)))) == (MR_Integer) 1)));
                              if (ml_backend__ml_unify_gen__succeeded)
                                {
                                  ml_backend__ml_unify_gen__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_45, (MR_Integer) 1)));
                                  {
                                    ml_backend__ml_unify_gen__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ml_backend__ml_unify_gen__MercuryType_24, &ml_backend__ml_unify_gen__TypeCtor_27);
                                  }
                                  if (ml_backend__ml_unify_gen__succeeded)
                                    {
                                      {
                                        ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(ml_backend__ml_unify_gen__TypeCtor_27, &ml_backend__ml_unify_gen__QualTypeName_21, &ml_backend__ml_unify_gen__TypeArity_22);
                                      }
                                      ml_backend__ml_unify_gen__succeeded = MR_TRUE;
                                    }
                                }
                            }
                          else
                          if (((((MR_tag((MR_Word) ml_backend__ml_unify_gen__MLDS_Type_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__MLDS_Type_9, (MR_Integer) 0)))) == (MR_Integer) 3))))
                            {
                              MR_Word ml_backend__ml_unify_gen__Var_23;

                              ml_backend__ml_unify_gen__QualTypeName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__MLDS_Type_9, (MR_Integer) 1)));
                              ml_backend__ml_unify_gen__TypeArity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__MLDS_Type_9, (MR_Integer) 2)));
                              ml_backend__ml_unify_gen__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__MLDS_Type_9, (MR_Integer) 3)));
                              ml_backend__ml_unify_gen__succeeded = MR_TRUE;
                            }
                          else
                            ml_backend__ml_unify_gen__succeeded = MR_FALSE;
                        }
                    }
                }
              if (ml_backend__ml_unify_gen__succeeded)
                {
                  MR_String ml_backend__ml_unify_gen__UnqualTypeName_30 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualTypeName_21, (MR_Integer) 2)));
                  MR_String ml_backend__ml_unify_gen__CtorName_31;
                  MR_Word ml_backend__ml_unify_gen__MLDS_Module_32;
                  MR_String ml_backend__ml_unify_gen__TypeName_34;
                  MR_Word ml_backend__ml_unify_gen__ClassQualifier_35;
                  MR_Word ml_backend__ml_unify_gen__Var_47;
                  MR_Word ml_backend__ml_unify_gen__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualTypeName_21, (MR_Integer) 0)));
                  MR_Word ml_backend__ml_unify_gen__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualTypeName_21, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_unify_gen___QualKind_33;

                  {
                    ml_backend__ml_unify_gen__CtorName_31 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_unqual_type_5_f_0(ml_backend__ml_unify_gen__Target_7, ml_backend__ml_unify_gen__UnqualTypeName_30, ml_backend__ml_unify_gen__TypeArity_22, ml_backend__ml_unify_gen__CtorSymName_18, ml_backend__ml_unify_gen__CtorArity_19);
                  }
                  ml_backend__ml_unify_gen__MLDS_Module_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualTypeName_21, (MR_Integer) 0)));
                  ml_backend__ml_unify_gen___QualKind_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualTypeName_21, (MR_Integer) 1)));
                  ml_backend__ml_unify_gen__TypeName_34 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualTypeName_21, (MR_Integer) 2)));
                  {
                    ml_backend__ml_unify_gen__ClassQualifier_35 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(ml_backend__ml_unify_gen__Target_7, ml_backend__ml_unify_gen__MLDS_Module_32, (MR_Integer) 0, ml_backend__ml_unify_gen__TypeName_34, ml_backend__ml_unify_gen__TypeArity_22);
                  }
                  {
                    ml_backend__ml_unify_gen__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_47, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ClassQualifier_35));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_47, 1) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_47, 2) = ((MR_Box) (ml_backend__ml_unify_gen__CtorName_31));
                  }
                  {
                    ml_backend__ml_unify_gen__ConstType_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstType_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstType_12, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_47));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstType_12, 2) = ((MR_Box) (ml_backend__ml_unify_gen__CtorArity_19));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstType_12, 3) = ((MR_Box) ((MR_Integer) 0));
                  }
                }
              else
                {
                  MR_Word ml_backend__ml_unify_gen__TypeCtor_59;
                  MR_Word ml_backend__ml_unify_gen__Var_50;
                  MR_Word ml_backend__ml_unify_gen__MercuryType_57;
                  MR_Word ml_backend__ml_unify_gen__Var_37;
                  MR_Word ml_backend__ml_unify_gen__Var_36;

                  ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__MLDS_Type_9)) == (MR_mktag((MR_Integer) 2)));
                  if (ml_backend__ml_unify_gen__succeeded)
                    {
                      ml_backend__ml_unify_gen__MercuryType_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__MLDS_Type_9, (MR_Integer) 0)));
                      ml_backend__ml_unify_gen__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__MLDS_Type_9, (MR_Integer) 1)));
                      ml_backend__ml_unify_gen__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__MLDS_Type_9, (MR_Integer) 2)));
                      ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__Var_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_50, (MR_Integer) 0)))) == (MR_Integer) 1)));
                      if (ml_backend__ml_unify_gen__succeeded)
                        {
                          ml_backend__ml_unify_gen__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_50, (MR_Integer) 1)));
                          {
                            ml_backend__ml_unify_gen__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ml_backend__ml_unify_gen__MercuryType_57, &ml_backend__ml_unify_gen__TypeCtor_59);
                          }
                        }
                    }
                  if (ml_backend__ml_unify_gen__succeeded)
                    {
                      MR_Word ml_backend__ml_unify_gen__ClassName_38;
                      MR_Integer ml_backend__ml_unify_gen__ClassArity_39;

                      {
                        ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(ml_backend__ml_unify_gen__TypeCtor_59, &ml_backend__ml_unify_gen__ClassName_38, &ml_backend__ml_unify_gen__ClassArity_39);
                      }
                      {
                        ml_backend__ml_unify_gen__ConstType_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstType_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstType_12, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ClassName_38));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstType_12, 2) = ((MR_Box) (ml_backend__ml_unify_gen__ClassArity_39));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstType_12, 3) = ((MR_Box) ((MR_Integer) 0));
                      }
                    }
                  else
                    {
                      MR_Word ml_backend__ml_unify_gen__Var_52;
                      MR_Word ml_backend__ml_unify_gen__Var_40;
                      MR_Word ml_backend__ml_unify_gen__Var_41;

                      ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__MLDS_Type_9)) == (MR_mktag((MR_Integer) 2)));
                      if (ml_backend__ml_unify_gen__succeeded)
                        {
                          ml_backend__ml_unify_gen__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__MLDS_Type_9, (MR_Integer) 0)));
                          ml_backend__ml_unify_gen__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__MLDS_Type_9, (MR_Integer) 1)));
                          ml_backend__ml_unify_gen__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__MLDS_Type_9, (MR_Integer) 2)));
                          ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                        }
                      if (ml_backend__ml_unify_gen__succeeded)
                        {
                          ml_backend__ml_unify_gen__ConstType_12 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[6]);
                        }
                      else
                        {
                          MR_Word ml_backend__ml_unify_gen__Var_54;
                          MR_Word ml_backend__ml_unify_gen__Var_42;
                          MR_Word ml_backend__ml_unify_gen__Var_43;

                          ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__MLDS_Type_9)) == (MR_mktag((MR_Integer) 2)));
                          if (ml_backend__ml_unify_gen__succeeded)
                            {
                              ml_backend__ml_unify_gen__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__MLDS_Type_9, (MR_Integer) 0)));
                              ml_backend__ml_unify_gen__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__MLDS_Type_9, (MR_Integer) 1)));
                              ml_backend__ml_unify_gen__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__MLDS_Type_9, (MR_Integer) 2)));
                              ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                          if (ml_backend__ml_unify_gen__succeeded)
                            {
                              ml_backend__ml_unify_gen__ConstType_12 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_1[6]);
                            }
                          else
                            ml_backend__ml_unify_gen__ConstType_12 = ml_backend__ml_unify_gen__MLDS_Type_9;
                        }
                    }
                }
            }
        }
        break;
    }
    return ml_backend__ml_unify_gen__ConstType_12;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_field_take_address_assigns_7_p_0(
  MR_Word ml_backend__ml_unify_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_unify_gen__CellLval_2,
  MR_Word ml_backend__ml_unify_gen__CellType_3,
  MR_Word ml_backend__ml_unify_gen__MaybeTag_4,
  MR_Word ml_backend__ml_unify_gen__Context_5,
  MR_Word ml_backend__ml_unify_gen__Info_6,
  MR_Word * ml_backend__ml_unify_gen__HeadVar__7_7)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    if ((ml_backend__ml_unify_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ml_backend__ml_unify_gen__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ml_backend__ml_unify_gen__TakeAddrInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_unify_gen__TakeAddrInfos_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_unify_gen__Assign_20;
        MR_Word ml_backend__ml_unify_gen__Assigns_21;
        MR_Word ml_backend__ml_unify_gen__AddrVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__TakeAddrInfo_13, (MR_Integer) 0)));
        MR_Word ml_backend__ml_unify_gen__Offset_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__TakeAddrInfo_13, (MR_Integer) 1)));
        MR_Word ml_backend__ml_unify_gen__FieldType_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__TakeAddrInfo_13, (MR_Integer) 3)));
        MR_Word ml_backend__ml_unify_gen__ModuleInfo_26;
        MR_Word ml_backend__ml_unify_gen__Globals_27;
        MR_Word ml_backend__ml_unify_gen__HighLevelData_28;
        MR_Word ml_backend__ml_unify_gen___ConsArgType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__TakeAddrInfo_13, (MR_Integer) 2)));

        {
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_unify_gen__Info_6, &ml_backend__ml_unify_gen__ModuleInfo_26);
        }
        {
          hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_unify_gen__ModuleInfo_26, &ml_backend__ml_unify_gen__Globals_27);
        }
        {
          libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_unify_gen__Globals_27, (MR_Integer) 264, &ml_backend__ml_unify_gen__HighLevelData_28);
        }
        switch (ml_backend__ml_unify_gen__HighLevelData_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ml_backend__ml_unify_gen__OffsetInt_29 = (MR_Integer) ml_backend__ml_unify_gen__Offset_23;
              MR_Word ml_backend__ml_unify_gen__SourceRval_30;
              MR_Word ml_backend__ml_unify_gen__AddrLval_31;
              MR_Word ml_backend__ml_unify_gen__AddrVarType_32;
              MR_Word ml_backend__ml_unify_gen__MLDS_AddrVarType_33;
              MR_Word ml_backend__ml_unify_gen__CastSourceRval_34;
              MR_Word ml_backend__ml_unify_gen__Var_37;
              MR_Word ml_backend__ml_unify_gen__Var_38;
              MR_Word ml_backend__ml_unify_gen__Var_39;
              MR_Word ml_backend__ml_unify_gen__Var_40;
              MR_Word ml_backend__ml_unify_gen__Var_41;
              MR_Word ml_backend__ml_unify_gen__Var_42;

              {
                ml_backend__ml_unify_gen__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_38, 0) = ((MR_Box) (ml_backend__ml_unify_gen__CellLval_2));
              }
              {
                ml_backend__ml_unify_gen__Var_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_41, 0) = ((MR_Box) (ml_backend__ml_unify_gen__OffsetInt_29));
              }
              {
                ml_backend__ml_unify_gen__Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_40, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_41));
              }
              {
                ml_backend__ml_unify_gen__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_39, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Var_40));
              }
              {
                ml_backend__ml_unify_gen__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_37, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MaybeTag_4));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_37, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_38));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_37, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_39));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_37, 3) = ((MR_Box) (ml_backend__ml_unify_gen__FieldType_25));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_37, 4) = ((MR_Box) (ml_backend__ml_unify_gen__CellType_3));
              }
              {
                ml_backend__ml_unify_gen__SourceRval_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__SourceRval_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__SourceRval_30, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_37));
              }
              {
                ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__Info_6, ml_backend__ml_unify_gen__AddrVar_22, &ml_backend__ml_unify_gen__AddrLval_31);
              }
              {
                ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_unify_gen__Info_6, ml_backend__ml_unify_gen__AddrVar_22, &ml_backend__ml_unify_gen__AddrVarType_32);
              }
              {
                ml_backend__ml_unify_gen__MLDS_AddrVarType_33 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_26, ml_backend__ml_unify_gen__AddrVarType_32);
              }
              {
                ml_backend__ml_unify_gen__Var_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_42, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_AddrVarType_33));
              }
              {
                ml_backend__ml_unify_gen__CastSourceRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastSourceRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastSourceRval_34, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_42));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastSourceRval_34, 2) = ((MR_Box) (ml_backend__ml_unify_gen__SourceRval_30));
              }
              {
                ml_backend__ml_unify_gen__Assign_20 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__AddrLval_31, ml_backend__ml_unify_gen__CastSourceRval_34, ml_backend__ml_unify_gen__Context_5);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_unify_gen__Var_36;
              MR_Word ml_backend__ml_unify_gen__AddrLval_43;

              {
                ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__Info_6, ml_backend__ml_unify_gen__AddrVar_22, &ml_backend__ml_unify_gen__AddrLval_43);
              }
              {
                ml_backend__ml_unify_gen__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_36, 0) = ((MR_Box) (ml_backend__ml_unify_gen__CellLval_2));
              }
              {
                ml_backend__ml_unify_gen__Assign_20 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__AddrLval_43, ml_backend__ml_unify_gen__Var_36, ml_backend__ml_unify_gen__Context_5);
              }
            }
            break;
        }
        {
          ml_backend__ml_unify_gen__ml_gen_field_take_address_assigns_7_p_0(ml_backend__ml_unify_gen__TakeAddrInfos_14, ml_backend__ml_unify_gen__CellLval_2, ml_backend__ml_unify_gen__CellType_3, ml_backend__ml_unify_gen__MaybeTag_4, ml_backend__ml_unify_gen__Context_5, ml_backend__ml_unify_gen__Info_6, &ml_backend__ml_unify_gen__Assigns_21);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_unify_gen__HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Assign_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Assigns_21));
        }
      }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_20_p_0_2(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;

    {
      ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__902__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 3))), ((MR_Integer) ml_backend__ml_unify_gen__wrapper_arg_1));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_20_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;
    MR_Integer ml_backend__ml_unify_gen__conv0_LambdaHeadVar__2_89;

    {
      ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__885__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_1), &ml_backend__ml_unify_gen__conv0_LambdaHeadVar__2_89);
    }
    *ml_backend__ml_unify_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_unify_gen__conv0_LambdaHeadVar__2_89));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_20_p_0(
  MR_Word ml_backend__ml_unify_gen__MaybeConsId_21,
  MR_Word ml_backend__ml_unify_gen__MaybeCtorName_22,
  MR_Integer ml_backend__ml_unify_gen__Tag_23,
  MR_Word ml_backend__ml_unify_gen__MaybeTag_24,
  MR_Word ml_backend__ml_unify_gen__ExplicitSecTag_25,
  MR_Word ml_backend__ml_unify_gen__Var_26,
  MR_Word ml_backend__ml_unify_gen__VarLval_27,
  MR_Word ml_backend__ml_unify_gen__VarType_28,
  MR_Word ml_backend__ml_unify_gen__MLDS_Type_29,
  MR_Word ml_backend__ml_unify_gen__ExtraRvals_30,
  MR_Word ml_backend__ml_unify_gen__ExtraTypes_31,
  MR_Word ml_backend__ml_unify_gen__ArgVars_32,
  MR_Word ml_backend__ml_unify_gen__ArgTypes_33,
  MR_Word ml_backend__ml_unify_gen__ArgModes_34,
  MR_Word ml_backend__ml_unify_gen__TakeAddr_35,
  MR_Word ml_backend__ml_unify_gen__CellToReuse_36,
  MR_Word ml_backend__ml_unify_gen__Context_37,
  MR_Word * ml_backend__ml_unify_gen__Statements_38,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_82,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_83)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_121_121;
    MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_122_122;
    MR_Word ml_backend__ml_unify_gen__ReuseVar_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__CellToReuse_36, (MR_Integer) 0)));
    MR_Word ml_backend__ml_unify_gen__ReuseConsIds_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__CellToReuse_36, (MR_Integer) 1)));
    MR_Word ml_backend__ml_unify_gen__ConsId_44;
    MR_Word ml_backend__ml_unify_gen__ReusePrimaryTags0_50;
    MR_Word ml_backend__ml_unify_gen__ReusePrimaryTags_51;
    MR_Word ml_backend__ml_unify_gen__ConsIdTag_52;
    MR_Word ml_backend__ml_unify_gen__Fields_53;
    MR_Integer ml_backend__ml_unify_gen__PrimaryTag_54;
    MR_Word ml_backend__ml_unify_gen__OffSet_55;
    MR_Integer ml_backend__ml_unify_gen__ArgNum_56;
    MR_Word ml_backend__ml_unify_gen__Var1Lval_57;
    MR_Word ml_backend__ml_unify_gen__Var2Lval_58;
    MR_Word ml_backend__ml_unify_gen__DifferentTags_60;
    MR_Word ml_backend__ml_unify_gen__Var2Rval_61;
    MR_Word ml_backend__ml_unify_gen__CastVar2Rval_66;
    MR_Word ml_backend__ml_unify_gen__MLDS_Context_67;
    MR_Word ml_backend__ml_unify_gen__HeapTestStmt_68;
    MR_Word ml_backend__ml_unify_gen__HeapTestStatement_69;
    MR_Word ml_backend__ml_unify_gen__ExtraRvalStatements_70;
    MR_Word ml_backend__ml_unify_gen__FieldStatements_71;
    MR_Word ml_backend__ml_unify_gen__TakeAddrInfos_72;
    MR_Word ml_backend__ml_unify_gen__TakeAddrStatements_73;
    MR_Word ml_backend__ml_unify_gen__ThenStatements_74;
    MR_Word ml_backend__ml_unify_gen__ThenStmt_75;
    MR_Word ml_backend__ml_unify_gen__ThenStatement_76;
    MR_Word ml_backend__ml_unify_gen__DynamicStmts_77;
    MR_Word ml_backend__ml_unify_gen__ElseStmt_78;
    MR_Word ml_backend__ml_unify_gen__ElseStatement_79;
    MR_Word ml_backend__ml_unify_gen__IfStmt_80;
    MR_Word ml_backend__ml_unify_gen__IfStatement_81;
    MR_Word ml_backend__ml_unify_gen__Var_87;
    MR_Word ml_backend__ml_unify_gen__Var_90;
    MR_Word ml_backend__ml_unify_gen__Var_102;
    MR_Word ml_backend__ml_unify_gen__Var_103;
    MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_105_105;
    MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_106_106;
    MR_Word ml_backend__ml_unify_gen__Var_107;
    MR_Word ml_backend__ml_unify_gen__Var_112;
    MR_Word ml_backend__ml_unify_gen__Var_113;
    MR_Word ml_backend__ml_unify_gen__Var_114;
    MR_Word ml_backend__ml_unify_gen__Var_115;
    MR_Word ml_backend__ml_unify_gen___NeedsUpdates_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__CellToReuse_36, (MR_Integer) 2)));

    if ((ml_backend__ml_unify_gen__MaybeConsId_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_new_object_reuse_cell\'/20", (MR_String) "unknown cons id");
          return;
        }
      }
    else
      ml_backend__ml_unify_gen__ConsId_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__MaybeConsId_21, (MR_Integer) 0)));
    {
      ml_backend__ml_unify_gen__Var_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_87, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_87, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_20_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_87, 3) = ((MR_Box) (ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_82));
    }
    ml_backend__ml_unify_gen__TypeCtorInfo_121_121 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, ml_backend__ml_unify_gen__TypeCtorInfo_121_121, ml_backend__ml_unify_gen__Var_87, ml_backend__ml_unify_gen__ReuseConsIds_41, &ml_backend__ml_unify_gen__ReusePrimaryTags0_50);
    }
    {
      mercury__list__remove_dups_2_p_0(ml_backend__ml_unify_gen__TypeCtorInfo_121_121, ml_backend__ml_unify_gen__ReusePrimaryTags0_50, &ml_backend__ml_unify_gen__ReusePrimaryTags_51);
    }
    {
      ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_82, ml_backend__ml_unify_gen__ConsId_44, &ml_backend__ml_unify_gen__ConsIdTag_52);
    }
    {
      ml_backend__ml_unify_gen__ml_field_names_and_types_5_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_82, ml_backend__ml_unify_gen__VarType_28, ml_backend__ml_unify_gen__ConsId_44, ml_backend__ml_unify_gen__ArgTypes_33, &ml_backend__ml_unify_gen__Fields_53);
    }
    {
      ml_backend__ml_unify_gen__ml_tag_offset_and_argnum_4_p_0(ml_backend__ml_unify_gen__ConsIdTag_52, &ml_backend__ml_unify_gen__PrimaryTag_54, &ml_backend__ml_unify_gen__OffSet_55, &ml_backend__ml_unify_gen__ArgNum_56);
    }
    {
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_82, ml_backend__ml_unify_gen__Var_26, &ml_backend__ml_unify_gen__Var1Lval_57);
    }
    {
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_82, ml_backend__ml_unify_gen__ReuseVar_40, &ml_backend__ml_unify_gen__Var2Lval_58);
    }
    {
      ml_backend__ml_unify_gen__Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_90, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_90, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_20_p_0_2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_90, 3) = ((MR_Box) (ml_backend__ml_unify_gen__PrimaryTag_54));
    }
    {
      mercury__list__filter_3_p_0(ml_backend__ml_unify_gen__TypeCtorInfo_121_121, ml_backend__ml_unify_gen__Var_90, ml_backend__ml_unify_gen__ReusePrimaryTags_51, &ml_backend__ml_unify_gen__DifferentTags_60);
    }
    if ((ml_backend__ml_unify_gen__DifferentTags_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ml_backend__ml_unify_gen__Var2Rval_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var2Rval_61, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Var2Lval_58));
      }
    else
      {
        MR_Word ml_backend__ml_unify_gen__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__DifferentTags_60, (MR_Integer) 1)));
        MR_Integer ml_backend__ml_unify_gen__Var_124 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__DifferentTags_60, (MR_Integer) 0)));

        if ((ml_backend__ml_unify_gen__Var_123 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word ml_backend__ml_unify_gen__Var_98;
            MR_Word ml_backend__ml_unify_gen__Var_100;
            MR_Word ml_backend__ml_unify_gen__Var_101;

            {
              ml_backend__ml_unify_gen__Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_100, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Var2Lval_58));
            }
            {
              ml_backend__ml_unify_gen__Var_101 = ml_backend__ml_unify_gen__ml_gen_mktag_1_f_0(ml_backend__ml_unify_gen__Var_124);
            }
            {
              ml_backend__ml_unify_gen__Var_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_98, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_100));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_98, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Var_101));
            }
            {
              ml_backend__ml_unify_gen__Var2Rval_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var2Rval_61, 0) = ((MR_Box) (ml_backend__ml_unify_gen__PrimaryTag_54));
              MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var2Rval_61, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_98));
            }
          }
        else
          {
            MR_Word ml_backend__ml_unify_gen__Var_93;
            MR_Word ml_backend__ml_unify_gen__Var_96;

            {
              ml_backend__ml_unify_gen__Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_96, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Var2Lval_58));
            }
            {
              ml_backend__ml_unify_gen__Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_4[0])));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_93, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_96));
            }
            {
              ml_backend__ml_unify_gen__Var2Rval_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var2Rval_61, 0) = ((MR_Box) (ml_backend__ml_unify_gen__PrimaryTag_54));
              MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var2Rval_61, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_93));
            }
          }
      }
    {
      ml_backend__ml_unify_gen__Var_102 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_102, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_29));
    }
    {
      ml_backend__ml_unify_gen__CastVar2Rval_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastVar2Rval_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastVar2Rval_66, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_102));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastVar2Rval_66, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var2Rval_61));
    }
    {
      ml_backend__ml_unify_gen__MLDS_Context_67 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_unify_gen__Context_37);
    }
    {
      ml_backend__ml_unify_gen__Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_103, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var1Lval_57));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_103, 2) = ((MR_Box) (ml_backend__ml_unify_gen__CastVar2Rval_66));
    }
    {
      ml_backend__ml_unify_gen__HeapTestStmt_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__HeapTestStmt_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__HeapTestStmt_68, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_103));
    }
    {
      ml_backend__ml_unify_gen__HeapTestStatement_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeapTestStatement_69, 0) = ((MR_Box) (ml_backend__ml_unify_gen__HeapTestStmt_68));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__HeapTestStatement_69, 1) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Context_67));
    }
    {
      ml_backend__ml_unify_gen__ml_gen_extra_arg_assign_10_p_0(ml_backend__ml_unify_gen__ExtraRvals_30, ml_backend__ml_unify_gen__ExtraTypes_31, ml_backend__ml_unify_gen__VarType_28, ml_backend__ml_unify_gen__VarLval_27, (MR_Integer) 0, ml_backend__ml_unify_gen__ConsIdTag_52, ml_backend__ml_unify_gen__Context_37, &ml_backend__ml_unify_gen__ExtraRvalStatements_70, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_82, &ml_backend__ml_unify_gen__STATE_VARIABLE_Info_105_105);
    }
    {
      ml_backend__ml_unify_gen__ml_gen_unify_args_for_reuse_16_p_0(ml_backend__ml_unify_gen__ConsId_44, ml_backend__ml_unify_gen__ArgVars_32, ml_backend__ml_unify_gen__ArgModes_34, ml_backend__ml_unify_gen__ArgTypes_33, ml_backend__ml_unify_gen__Fields_53, ml_backend__ml_unify_gen__TakeAddr_35, ml_backend__ml_unify_gen__VarType_28, ml_backend__ml_unify_gen__VarLval_27, ml_backend__ml_unify_gen__OffSet_55, ml_backend__ml_unify_gen__ArgNum_56, ml_backend__ml_unify_gen__ConsIdTag_52, ml_backend__ml_unify_gen__Context_37, &ml_backend__ml_unify_gen__FieldStatements_71, &ml_backend__ml_unify_gen__TakeAddrInfos_72, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_105_105, &ml_backend__ml_unify_gen__STATE_VARIABLE_Info_106_106);
    }
    {
      ml_backend__ml_unify_gen__ml_gen_field_take_address_assigns_7_p_0(ml_backend__ml_unify_gen__TakeAddrInfos_72, ml_backend__ml_unify_gen__VarLval_27, ml_backend__ml_unify_gen__MLDS_Type_29, ml_backend__ml_unify_gen__MaybeTag_24, ml_backend__ml_unify_gen__Context_37, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_106_106, &ml_backend__ml_unify_gen__TakeAddrStatements_73);
    }
    ml_backend__ml_unify_gen__TypeCtorInfo_122_122 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
    {
      ml_backend__ml_unify_gen__Var_107 = mercury__list__f_43_43_2_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_122_122, ml_backend__ml_unify_gen__FieldStatements_71, ml_backend__ml_unify_gen__TakeAddrStatements_73);
    }
    {
      ml_backend__ml_unify_gen__ThenStatements_74 = mercury__list__f_43_43_2_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_122_122, ml_backend__ml_unify_gen__ExtraRvalStatements_70, ml_backend__ml_unify_gen__Var_107);
    }
    {
      ml_backend__ml_unify_gen__ThenStmt_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ThenStmt_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ThenStmt_75, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ThenStatements_74));
    }
    {
      ml_backend__ml_unify_gen__ThenStatement_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ThenStatement_76, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ThenStmt_75));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ThenStatement_76, 1) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Context_67));
    }
    {
      ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0(ml_backend__ml_unify_gen__MaybeConsId_21, ml_backend__ml_unify_gen__MaybeCtorName_22, ml_backend__ml_unify_gen__Tag_23, ml_backend__ml_unify_gen__ExplicitSecTag_25, ml_backend__ml_unify_gen__Var_26, ml_backend__ml_unify_gen__ExtraRvals_30, ml_backend__ml_unify_gen__ExtraTypes_31, ml_backend__ml_unify_gen__ArgVars_32, ml_backend__ml_unify_gen__ArgModes_34, ml_backend__ml_unify_gen__TakeAddr_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), ml_backend__ml_unify_gen__Context_37, &ml_backend__ml_unify_gen__DynamicStmts_77, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_106_106, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_83);
    }
    {
      ml_backend__ml_unify_gen__ElseStmt_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ElseStmt_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ElseStmt_78, 1) = ((MR_Box) (ml_backend__ml_unify_gen__DynamicStmts_77));
    }
    {
      ml_backend__ml_unify_gen__ElseStatement_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ElseStatement_79, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ElseStmt_78));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ElseStatement_79, 1) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Context_67));
    }
    {
      ml_backend__ml_unify_gen__Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_112, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Var1Lval_57));
    }
    {
      ml_backend__ml_unify_gen__Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_113, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ElseStatement_79));
    }
    {
      ml_backend__ml_unify_gen__IfStmt_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__IfStmt_80, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Var_112));
      MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__IfStmt_80, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ThenStatement_76));
      MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__IfStmt_80, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_113));
    }
    {
      ml_backend__ml_unify_gen__Var_114 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_unify_gen__Context_37);
    }
    {
      ml_backend__ml_unify_gen__IfStatement_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__IfStatement_81, 0) = ((MR_Box) (ml_backend__ml_unify_gen__IfStmt_80));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__IfStatement_81, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_114));
    }
    {
      ml_backend__ml_unify_gen__Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_115, 0) = ((MR_Box) (ml_backend__ml_unify_gen__IfStatement_81));
      MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_unify_gen__Statements_38 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__HeapTestStatement_69));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_115));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_5(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_unify_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;
    MR_Word ml_backend__ml_unify_gen__conv6_LambdaHeadVar__2_75;

    {
      ml_backend__ml_unify_gen__conv6_LambdaHeadVar__2_75 = ml_backend__ml_unify_gen__IntroducedFrom__func__ml_gen_new_object_statically__827__1_1_f_0(((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_1));
    }
    ml_backend__ml_unify_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_unify_gen__conv6_LambdaHeadVar__2_75));
    return ml_backend__ml_unify_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_4(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_4,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_5,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_6,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_7,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_8)
{
  {
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;
    MR_Word ml_backend__ml_unify_gen__conv3_RvalC_12;

    {
      ml_backend__ml_unify_gen__ml_shift_combine_rval_8_p_0(((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_1), ((MR_Integer) ml_backend__ml_unify_gen__wrapper_arg_2), ((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_3), &ml_backend__ml_unify_gen__conv3_RvalC_12);
    }
    *ml_backend__ml_unify_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_unify_gen__conv3_RvalC_12));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_3(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;
    MR_Word ml_backend__ml_unify_gen__conv2_BoxedFieldType_10;

    {
      ml_backend__ml_unify_gen__ml_type_as_field_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_2), &ml_backend__ml_unify_gen__conv2_BoxedFieldType_10);
    }
    *ml_backend__ml_unify_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_unify_gen__conv2_BoxedFieldType_10));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_2(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;
    MR_Word ml_backend__ml_unify_gen__conv1_Rval_6;

    {
      ml_backend__ml_unify_gen__ml_gen_info_lookup_const_var_rval_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_1), &ml_backend__ml_unify_gen__conv1_Rval_6);
    }
    *ml_backend__ml_unify_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_unify_gen__conv1_Rval_6));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;
    MR_Word ml_backend__ml_unify_gen__conv0_HeadVar__3_3;

    {
      ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_1), &ml_backend__ml_unify_gen__conv0_HeadVar__3_3);
    }
    *ml_backend__ml_unify_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_unify_gen__conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0(
  MR_Word ml_backend__ml_unify_gen__MaybeConsId_16,
  MR_Word ml_backend__ml_unify_gen__MaybeCtorName_17,
  MR_Word ml_backend__ml_unify_gen__MaybeTag_18,
  MR_Word ml_backend__ml_unify_gen__Var_19,
  MR_Word ml_backend__ml_unify_gen__VarLval_20,
  MR_Word ml_backend__ml_unify_gen__VarType_21,
  MR_Word ml_backend__ml_unify_gen__MLDS_Type_22,
  MR_Word ml_backend__ml_unify_gen__ExtraRvals_23,
  MR_Word ml_backend__ml_unify_gen__ExtraTypes_24,
  MR_Word ml_backend__ml_unify_gen__ArgVars_25,
  MR_Word ml_backend__ml_unify_gen__ArgTypes_26,
  MR_Word ml_backend__ml_unify_gen__Context_27,
  MR_Word * ml_backend__ml_unify_gen__Statements_28,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_61,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_62)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_105_105;
    MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_106_106;
    MR_Word ml_backend__ml_unify_gen__ModuleInfo_30;
    MR_Word ml_backend__ml_unify_gen__HighLevelData_31;
    MR_Word ml_backend__ml_unify_gen__Target_32;
    MR_Word ml_backend__ml_unify_gen__ConsArgTypes_33;
    MR_Word ml_backend__ml_unify_gen__ConsArgWidths_34;
    MR_Word ml_backend__ml_unify_gen__ExtraArgRvals_37;
    MR_Word ml_backend__ml_unify_gen__ArgRvals1_39;
    MR_Word ml_backend__ml_unify_gen__UsesBaseClass_43;
    MR_Word ml_backend__ml_unify_gen__ConstType_44;
    MR_Word ml_backend__ml_unify_gen__ArgRvals_45;
    MR_Word ml_backend__ml_unify_gen__AllArgRvals_48;
    MR_Word ml_backend__ml_unify_gen__ArgInits_49;
    MR_Word ml_backend__ml_unify_gen__Initializer_52;
    MR_Word ml_backend__ml_unify_gen__ModuleName_53;
    MR_Word ml_backend__ml_unify_gen__MLDS_ModuleName_54;
    MR_Word ml_backend__ml_unify_gen__ConstAddrRval_55;
    MR_Word ml_backend__ml_unify_gen__TaggedRval_56;
    MR_Word ml_backend__ml_unify_gen__Rval_58;
    MR_Word ml_backend__ml_unify_gen__GroundTerm_59;
    MR_Word ml_backend__ml_unify_gen__AssignStatement_60;
    MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_63_63;
    MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_69_69;
    MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_77_77;
    MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_78_78;
    MR_Word ml_backend__ml_unify_gen__Var_79;
    MR_Box ml_backend__ml_unify_gen__conv5_Var_46;
    MR_Box ml_backend__ml_unify_gen__conv4_Var_47;
    MR_Word ml_backend__ml_unify_gen__Var_51;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_61, &ml_backend__ml_unify_gen__ModuleInfo_30);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_61, &ml_backend__ml_unify_gen__HighLevelData_31);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_61, &ml_backend__ml_unify_gen__Target_32);
    }
    {
      ml_backend__ml_unify_gen__get_maybe_cons_id_arg_types_6_p_0(ml_backend__ml_unify_gen__ModuleInfo_30, ml_backend__ml_unify_gen__MaybeConsId_16, ml_backend__ml_unify_gen__ArgTypes_26, ml_backend__ml_unify_gen__VarType_21, &ml_backend__ml_unify_gen__ConsArgTypes_33, &ml_backend__ml_unify_gen__ConsArgWidths_34);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_61, &ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_63_63);
    }
    switch (ml_backend__ml_unify_gen__HighLevelData_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_86_86;
          MR_Word ml_backend__ml_unify_gen__ArgGroundTerms_36;
          MR_Word ml_backend__ml_unify_gen__ArgGroundTermsWidths_38;
          MR_Word ml_backend__ml_unify_gen__Var_67;
          MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_68_68;

          {
            ml_backend__ml_unify_gen__Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_67, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_67, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_67, 3) = ((MR_Box) (ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_61));
          }
          ml_backend__ml_unify_gen__TypeCtorInfo_86_86 = (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;
          {
            mercury__list__map_3_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], ml_backend__ml_unify_gen__TypeCtorInfo_86_86, ml_backend__ml_unify_gen__Var_67, ml_backend__ml_unify_gen__ArgVars_25, &ml_backend__ml_unify_gen__ArgGroundTerms_36);
          }
          {
            ml_backend__ml_unify_gen__ml_gen_box_extra_const_rval_list_lld_7_p_0(ml_backend__ml_unify_gen__ModuleInfo_30, ml_backend__ml_unify_gen__Context_27, ml_backend__ml_unify_gen__ExtraTypes_24, ml_backend__ml_unify_gen__ExtraRvals_23, &ml_backend__ml_unify_gen__ExtraArgRvals_37, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_63_63, &ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_68_68);
          }
          {
            mercury__assoc_list__from_corresponding_lists_3_p_0(ml_backend__ml_unify_gen__TypeCtorInfo_86_86, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, ml_backend__ml_unify_gen__ArgGroundTerms_36, ml_backend__ml_unify_gen__ConsArgWidths_34, &ml_backend__ml_unify_gen__ArgGroundTermsWidths_38);
          }
          {
            ml_backend__ml_unify_gen__ml_gen_box_const_rval_list_lld_6_p_0(ml_backend__ml_unify_gen__ModuleInfo_30, ml_backend__ml_unify_gen__Context_27, ml_backend__ml_unify_gen__ArgGroundTermsWidths_38, &ml_backend__ml_unify_gen__ArgRvals1_39, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_68_68, &ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_69_69);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_95_95;
          MR_Word ml_backend__ml_unify_gen__ArgRvals0_40;
          MR_Word ml_backend__ml_unify_gen__FieldTypes_41;
          MR_Word ml_backend__ml_unify_gen__Var_64;
          MR_Word ml_backend__ml_unify_gen__Var_65;

          {
            ml_backend__ml_unify_gen__Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_64, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_6[1]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_64, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_2));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_64, 3) = ((MR_Box) (ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_61));
          }
          {
            mercury__list__map_3_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ml_backend__ml_unify_gen__Var_64, ml_backend__ml_unify_gen__ArgVars_25, &ml_backend__ml_unify_gen__ArgRvals0_40);
          }
          {
            ml_backend__ml_unify_gen__Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_65, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_65, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0_3));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_65, 3) = ((MR_Box) (ml_backend__ml_unify_gen__ModuleInfo_30));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_65, 4) = ((MR_Box) (ml_backend__ml_unify_gen__HighLevelData_31));
          }
          ml_backend__ml_unify_gen__TypeCtorInfo_95_95 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
          {
            mercury__list__map_corresponding_4_p_0(ml_backend__ml_unify_gen__TypeCtorInfo_95_95, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, ml_backend__ml_unify_gen__TypeCtorInfo_95_95, ml_backend__ml_unify_gen__Var_65, ml_backend__ml_unify_gen__ConsArgTypes_33, ml_backend__ml_unify_gen__ConsArgWidths_34, &ml_backend__ml_unify_gen__FieldTypes_41);
          }
          {
            ml_backend__ml_unify_gen__ml_gen_box_or_unbox_const_rval_list_hld_8_p_0(ml_backend__ml_unify_gen__ModuleInfo_30, ml_backend__ml_unify_gen__ArgTypes_26, ml_backend__ml_unify_gen__FieldTypes_41, ml_backend__ml_unify_gen__ArgRvals0_40, ml_backend__ml_unify_gen__Context_27, &ml_backend__ml_unify_gen__ArgRvals1_39, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_63_63, &ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_69_69);
          }
          ml_backend__ml_unify_gen__ExtraArgRvals_37 = ml_backend__ml_unify_gen__ExtraRvals_23;
        }
        break;
    }
    if ((ml_backend__ml_unify_gen__MaybeCtorName_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ml_backend__ml_unify_gen__UsesBaseClass_43 = (MR_Integer) 1;
    else
      ml_backend__ml_unify_gen__UsesBaseClass_43 = (MR_Integer) 0;
    {
      ml_backend__ml_unify_gen__ConstType_44 = ml_backend__ml_unify_gen__get_const_type_for_cons_id_5_f_0(ml_backend__ml_unify_gen__Target_32, ml_backend__ml_unify_gen__HighLevelData_31, ml_backend__ml_unify_gen__MLDS_Type_22, ml_backend__ml_unify_gen__UsesBaseClass_43, ml_backend__ml_unify_gen__MaybeConsId_16);
    }
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    ml_backend__ml_unify_gen__TypeCtorInfo_105_105 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
    ml_backend__ml_unify_gen__TypeCtorInfo_106_106 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
    {
      backend_libs__arg_pack__pack_args_8_p_0(ml_backend__ml_unify_gen__TypeCtorInfo_105_105, ml_backend__ml_unify_gen__TypeCtorInfo_106_106, ml_backend__ml_unify_gen__TypeCtorInfo_106_106, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[3], ml_backend__ml_unify_gen__ConsArgWidths_34, ml_backend__ml_unify_gen__ArgRvals1_39, &ml_backend__ml_unify_gen__ArgRvals_45, ((MR_Box) ((MR_Integer) 0)), &ml_backend__ml_unify_gen__conv5_Var_46, ((MR_Box) ((MR_Integer) 0)), &ml_backend__ml_unify_gen__conv4_Var_47);
    }
    {
      ml_backend__ml_unify_gen__AllArgRvals_48 = mercury__list__f_43_43_2_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_105_105, ml_backend__ml_unify_gen__ExtraArgRvals_37, ml_backend__ml_unify_gen__ArgRvals_45);
    }
    {
      ml_backend__ml_unify_gen__ArgInits_49 = mercury__list__map_2_f_0(ml_backend__ml_unify_gen__TypeCtorInfo_105_105, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[4], ml_backend__ml_unify_gen__AllArgRvals_48);
    }
    ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__ConstType_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstType_44, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (ml_backend__ml_unify_gen__succeeded)
      {
        ml_backend__ml_unify_gen__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConstType_44, (MR_Integer) 1)));
        {
          ml_backend__ml_unify_gen__Initializer_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Initializer_52, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ArgInits_49));
        }
      }
    else
      {
        ml_backend__ml_unify_gen__Initializer_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Initializer_52, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ConstType_44));
        MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Initializer_52, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ArgInits_49));
      }
    {
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_unify_gen__ModuleInfo_30, &ml_backend__ml_unify_gen__ModuleName_53);
    }
    {
      ml_backend__ml_unify_gen__MLDS_ModuleName_54 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_unify_gen__ModuleName_53);
    }
    {
      ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0(ml_backend__ml_unify_gen__MLDS_ModuleName_54, (MR_Integer) 0, ml_backend__ml_unify_gen__ConstType_44, ml_backend__ml_unify_gen__Initializer_52, ml_backend__ml_unify_gen__Context_27, &ml_backend__ml_unify_gen__ConstAddrRval_55, ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_69_69, &ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_77_77);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_77_77, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_61, &ml_backend__ml_unify_gen__STATE_VARIABLE_Info_78_78);
    }
    if ((ml_backend__ml_unify_gen__MaybeTag_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ml_backend__ml_unify_gen__TaggedRval_56 = ml_backend__ml_unify_gen__ConstAddrRval_55;
    else
      {
        MR_Integer ml_backend__ml_unify_gen__Tag_57 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__MaybeTag_18, (MR_Integer) 0)));

        {
          ml_backend__ml_unify_gen__TaggedRval_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__TaggedRval_56, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Tag_57));
          MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__TaggedRval_56, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ConstAddrRval_55));
        }
      }
    {
      ml_backend__ml_unify_gen__Var_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_79, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_22));
    }
    {
      ml_backend__ml_unify_gen__Rval_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_58, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_79));
      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_58, 2) = ((MR_Box) (ml_backend__ml_unify_gen__TaggedRval_56));
    }
    {
      ml_backend__ml_unify_gen__GroundTerm_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_59, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_58));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_59, 1) = ((MR_Box) (ml_backend__ml_unify_gen__VarType_21));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_59, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_22));
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(ml_backend__ml_unify_gen__Var_19, ml_backend__ml_unify_gen__GroundTerm_59, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_78_78, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_62);
    }
    {
      ml_backend__ml_unify_gen__AssignStatement_60 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__VarLval_20, ml_backend__ml_unify_gen__Rval_58, ml_backend__ml_unify_gen__Context_27);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_unify_gen__Statements_28 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__AssignStatement_60));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_compound_13_p_0(
  MR_Word ml_backend__ml_unify_gen__ConsId_14,
  MR_Integer ml_backend__ml_unify_gen__Ptag_15,
  MR_Word ml_backend__ml_unify_gen__MaybeStag_16,
  MR_Word ml_backend__ml_unify_gen__UsesBaseClass_17,
  MR_Word ml_backend__ml_unify_gen__Var_18,
  MR_Word ml_backend__ml_unify_gen__ArgVars_19,
  MR_Word ml_backend__ml_unify_gen__ArgModes_20,
  MR_Word ml_backend__ml_unify_gen__TakeAddr_21,
  MR_Word ml_backend__ml_unify_gen__HowToConstruct_22,
  MR_Word ml_backend__ml_unify_gen__Context_23,
  MR_Word * ml_backend__ml_unify_gen__Statements_24,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_38,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_39)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__CompilationTarget_26;
    MR_Word ml_backend__ml_unify_gen__MaybeCtorName_27;
    MR_Word ml_backend__ml_unify_gen__ExplicitSecTag_31;
    MR_Word ml_backend__ml_unify_gen__ExtraRvals_36;
    MR_Word ml_backend__ml_unify_gen__ExtraArgTypes_37;
    MR_Word ml_backend__ml_unify_gen__Var_44;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_38, &ml_backend__ml_unify_gen__CompilationTarget_26);
    }
    switch (ml_backend__ml_unify_gen__UsesBaseClass_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_unify_gen__CtorName_28;
          MR_Word ml_backend__ml_unify_gen__ConsId_55;
          MR_Word ml_backend__ml_unify_gen__ModuleName_56;
          MR_Word ml_backend__ml_unify_gen__ConsSymName_49;
          MR_Integer ml_backend__ml_unify_gen__ConsArity_50;
          MR_Word ml_backend__ml_unify_gen__TypeCtor_51;
          MR_Word ml_backend__ml_unify_gen__SymModuleName_52;
          MR_String ml_backend__ml_unify_gen__Var_53;

          ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__ConsId_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsId_14, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (ml_backend__ml_unify_gen__succeeded)
            {
              ml_backend__ml_unify_gen__ConsSymName_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsId_14, (MR_Integer) 1)));
              ml_backend__ml_unify_gen__ConsArity_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsId_14, (MR_Integer) 2)));
              ml_backend__ml_unify_gen__TypeCtor_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ConsId_14, (MR_Integer) 3)));
              ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__ConsSymName_49)) == (MR_mktag((MR_Integer) 1)));
              if (ml_backend__ml_unify_gen__succeeded)
                {
                  ml_backend__ml_unify_gen__SymModuleName_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ConsSymName_49, (MR_Integer) 0)));
                  ml_backend__ml_unify_gen__Var_53 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ConsSymName_49, (MR_Integer) 1)));
                }
            }
          if (ml_backend__ml_unify_gen__succeeded)
            {
              MR_String ml_backend__ml_unify_gen__ConsName_54;

              {
                ml_backend__ml_unify_gen__ConsName_54 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(ml_backend__ml_unify_gen__CompilationTarget_26, ml_backend__ml_unify_gen__TypeCtor_51, ml_backend__ml_unify_gen__ConsSymName_49, ml_backend__ml_unify_gen__ConsArity_50);
              }
              {
                ml_backend__ml_unify_gen__ConsId_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsId_55, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ConsName_54));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsId_55, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ConsArity_50));
              }
              {
                ml_backend__ml_unify_gen__ModuleName_56 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_unify_gen__SymModuleName_52);
              }
            }
          else
            {
              MR_String ml_backend__ml_unify_gen__ConsName_61;

              {
                ml_backend__ml_unify_gen__ConsName_61 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ml_backend__ml_unify_gen__ConsId_14);
              }
              {
                ml_backend__ml_unify_gen__ConsId_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsId_55, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ConsName_61));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ConsId_55, 1) = ((MR_Box) ((MR_Integer) 0));
              }
              {
                ml_backend__ml_unify_gen__ModuleName_56 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_4[5]);
              }
            }
          {
            ml_backend__ml_unify_gen__CtorName_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__CtorName_28, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ModuleName_56));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__CtorName_28, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__CtorName_28, 2) = ((MR_Box) (ml_backend__ml_unify_gen__ConsId_55));
          }
          {
            ml_backend__ml_unify_gen__MaybeCtorName_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__MaybeCtorName_27, 0) = ((MR_Box) (ml_backend__ml_unify_gen__CtorName_28));
          }
        }
        break;
      case (MR_Integer) 1:
        ml_backend__ml_unify_gen__MaybeCtorName_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
    if ((ml_backend__ml_unify_gen__MaybeStag_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ml_backend__ml_unify_gen__ExplicitSecTag_31 = (MR_Integer) 0;
        ml_backend__ml_unify_gen__ExtraRvals_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ml_backend__ml_unify_gen__ExtraArgTypes_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Integer ml_backend__ml_unify_gen__Stag_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__MaybeStag_16, (MR_Integer) 0)));
        MR_Word ml_backend__ml_unify_gen__UsesConstructors_30;

        {
          ml_backend__ml_unify_gen__UsesConstructors_30 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(ml_backend__ml_unify_gen__CompilationTarget_26);
        }
        switch (ml_backend__ml_unify_gen__UsesConstructors_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_unify_gen__StagRval0_32;
              MR_Word ml_backend__ml_unify_gen__StagRval_34;
              MR_Word ml_backend__ml_unify_gen__Var_40;

              ml_backend__ml_unify_gen__ExplicitSecTag_31 = (MR_Integer) 1;
              {
                ml_backend__ml_unify_gen__Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_40, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Stag_29));
              }
              {
                ml_backend__ml_unify_gen__StagRval0_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__StagRval0_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__StagRval0_32, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_40));
              }
              {
                ml_backend__ml_unify_gen__StagRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__StagRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__StagRval_34, 1) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[1]));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__StagRval_34, 2) = ((MR_Box) (ml_backend__ml_unify_gen__StagRval0_32));
              }
              {
                ml_backend__ml_unify_gen__ExtraRvals_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ExtraRvals_36, 0) = ((MR_Box) (ml_backend__ml_unify_gen__StagRval_34));
                MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ExtraRvals_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              ml_backend__ml_unify_gen__ExtraArgTypes_37 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_1[5]);
            }
            break;
          case (MR_Integer) 1:
            {
              ml_backend__ml_unify_gen__ExplicitSecTag_31 = (MR_Integer) 0;
              ml_backend__ml_unify_gen__ExtraRvals_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              ml_backend__ml_unify_gen__ExtraArgTypes_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
        }
      }
    {
      ml_backend__ml_unify_gen__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_44, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ConsId_14));
    }
    {
      ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0(ml_backend__ml_unify_gen__Var_44, ml_backend__ml_unify_gen__MaybeCtorName_27, ml_backend__ml_unify_gen__Ptag_15, ml_backend__ml_unify_gen__ExplicitSecTag_31, ml_backend__ml_unify_gen__Var_18, ml_backend__ml_unify_gen__ExtraRvals_36, ml_backend__ml_unify_gen__ExtraArgTypes_37, ml_backend__ml_unify_gen__ArgVars_19, ml_backend__ml_unify_gen__ArgModes_20, ml_backend__ml_unify_gen__TakeAddr_21, ml_backend__ml_unify_gen__HowToConstruct_22, ml_backend__ml_unify_gen__Context_23, ml_backend__ml_unify_gen__Statements_24, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_38, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_39);
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_constant_6_p_0(
  MR_Word ml_backend__ml_unify_gen__Tag_7,
  MR_Word ml_backend__ml_unify_gen__VarType_8,
  MR_Word ml_backend__ml_unify_gen__MLDS_VarType_9,
  MR_Word * ml_backend__ml_unify_gen__Rval_10,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_53,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_54)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_unify_gen__succeeded;

        switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__Tag_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_constant\'/6", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ml_backend__ml_unify_gen__String_15 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Tag_7, (MR_Integer) 0)));
              MR_Word ml_backend__ml_unify_gen__Var_91;

              {
                ml_backend__ml_unify_gen__Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_91, 1) = ((MR_Box) (ml_backend__ml_unify_gen__String_15));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_unify_gen__Rval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_91));
              }
              *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_54 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_53;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Float ml_backend__ml_unify_gen__Float_14 = MR_unbox_float((MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Tag_7, (MR_Integer) 0)));
              MR_Word ml_backend__ml_unify_gen__Var_92;

              {
                ml_backend__ml_unify_gen__Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_92, 1) = MR_box_float(ml_backend__ml_unify_gen__Float_14);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_unify_gen__Rval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_92));
              }
              *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_54 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_53;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_7, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer ml_backend__ml_unify_gen__Int_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_7, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_unify_gen__Var_102;

                  {
                    ml_backend__ml_unify_gen__Var_102 = parse_tree__builtin_lib_types__int_type_0_f_0();
                  }
                  {
                    ml_backend__ml_unify_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_unify_gen__VarType_8, ml_backend__ml_unify_gen__Var_102);
                  }
                  if (ml_backend__ml_unify_gen__succeeded)
                    {
                      MR_Word ml_backend__ml_unify_gen__Var_94;

                      {
                        ml_backend__ml_unify_gen__Var_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_94, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Int_12));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *ml_backend__ml_unify_gen__Rval_10 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_94));
                      }
                    }
                  else
                    {
                      MR_Word ml_backend__ml_unify_gen__Var_103;

                      {
                        ml_backend__ml_unify_gen__Var_103 = parse_tree__builtin_lib_types__char_type_0_f_0();
                      }
                      {
                        ml_backend__ml_unify_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_unify_gen__VarType_8, ml_backend__ml_unify_gen__Var_103);
                      }
                      if (ml_backend__ml_unify_gen__succeeded)
                        {
                          MR_Word ml_backend__ml_unify_gen__Var_95;

                          {
                            ml_backend__ml_unify_gen__Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_95, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Int_12));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *ml_backend__ml_unify_gen__Rval_10 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_95));
                          }
                        }
                      else
                        {
                          MR_Word ml_backend__ml_unify_gen__Var_96;

                          {
                            ml_backend__ml_unify_gen__Var_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_96, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Int_12));
                            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_96, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_VarType_9));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *ml_backend__ml_unify_gen__Rval_10 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_96));
                          }
                        }
                    }
                  *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_54 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_53;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Unsigned ml_backend__ml_unify_gen__UInt_13 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_7, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_unify_gen__Var_93;

                  {
                    ml_backend__ml_unify_gen__Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_93, 1) = ((MR_Box) (ml_backend__ml_unify_gen__UInt_13));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__ml_unify_gen__Rval_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_93));
                  }
                  *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_54 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_53;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__ml_unify_gen__ForeignLang_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_7, (MR_Integer) 1)));
                  MR_String ml_backend__ml_unify_gen__ForeignTag_17 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_7, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_unify_gen__Var_90;

                  {
                    ml_backend__ml_unify_gen__Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_90, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ForeignLang_16));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_90, 2) = ((MR_Box) (ml_backend__ml_unify_gen__ForeignTag_17));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_90, 3) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_VarType_9));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__ml_unify_gen__Rval_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_90));
                  }
                  *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_54 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_53;
                }
                break;
              case (MR_Integer) 3:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
              case (MR_Integer) 8:
              case (MR_Integer) 12:
              case (MR_Integer) 13:
              case (MR_Integer) 14:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_constant\'/6", (MR_String) "unexpected tag");
                    return;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ml_backend__ml_unify_gen__ModuleName0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_7, (MR_Integer) 1)));
                  MR_String ml_backend__ml_unify_gen__TypeName_21 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_7, (MR_Integer) 2)));
                  MR_Integer ml_backend__ml_unify_gen__TypeArity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_7, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_unify_gen__ModuleName_23;
                  MR_Word ml_backend__ml_unify_gen__MLDS_Module_24;
                  MR_Word ml_backend__ml_unify_gen__RttiTypeCtor_25;
                  MR_Word ml_backend__ml_unify_gen__DataAddr_26;
                  MR_Word ml_backend__ml_unify_gen__Var_77;
                  MR_Word ml_backend__ml_unify_gen__Var_78;
                  MR_Word ml_backend__ml_unify_gen__Var_80;
                  MR_Word ml_backend__ml_unify_gen__Var_81;
                  MR_Word ml_backend__ml_unify_gen__Var_82;

                  {
                    ml_backend__ml_unify_gen__ModuleName_23 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ml_backend__ml_unify_gen__ModuleName0_20);
                  }
                  {
                    ml_backend__ml_unify_gen__MLDS_Module_24 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_unify_gen__ModuleName_23);
                  }
                  {
                    ml_backend__ml_unify_gen__RttiTypeCtor_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__RttiTypeCtor_25, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ModuleName_23));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__RttiTypeCtor_25, 1) = ((MR_Box) (ml_backend__ml_unify_gen__TypeName_21));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__RttiTypeCtor_25, 2) = ((MR_Box) (ml_backend__ml_unify_gen__TypeArity_22));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_78, 0) = ((MR_Box) (ml_backend__ml_unify_gen__RttiTypeCtor_25));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_77, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_78));
                  }
                  {
                    ml_backend__ml_unify_gen__DataAddr_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__DataAddr_26, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Module_24));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__DataAddr_26, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_77));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_80, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_VarType_9));
                  }
                  ml_backend__ml_unify_gen__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_unify_gen__DataAddr_26);
                  {
                    ml_backend__ml_unify_gen__Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_81, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_82));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__ml_unify_gen__Rval_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_80));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_81));
                  }
                  *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_54 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_53;
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ml_backend__ml_unify_gen__ClassId_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_7, (MR_Integer) 2)));
                  MR_String ml_backend__ml_unify_gen__Instance_28 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_7, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_unify_gen__TCName_29;
                  MR_Word ml_backend__ml_unify_gen__Var_71;
                  MR_Word ml_backend__ml_unify_gen__Var_72;
                  MR_Word ml_backend__ml_unify_gen__Var_73;
                  MR_Word ml_backend__ml_unify_gen__Var_74;
                  MR_Word ml_backend__ml_unify_gen__Var_75;
                  MR_Word ml_backend__ml_unify_gen__Var_76;
                  MR_Word ml_backend__ml_unify_gen__ModuleName_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_7, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_unify_gen__MLDS_Module_98;
                  MR_Word ml_backend__ml_unify_gen__DataAddr_99;

                  {
                    ml_backend__ml_unify_gen__MLDS_Module_98 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_unify_gen__ModuleName_97);
                  }
                  {
                    ml_backend__ml_unify_gen__TCName_29 = backend_libs__type_class_info__generate_class_name_1_f_0(ml_backend__ml_unify_gen__ClassId_27);
                  }
                  {
                    ml_backend__ml_unify_gen__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_73, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ModuleName_97));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_73, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Instance_28));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_72, 0) = ((MR_Box) (ml_backend__ml_unify_gen__TCName_29));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_72, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_73));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_71, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_72));
                  }
                  {
                    ml_backend__ml_unify_gen__DataAddr_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__DataAddr_99, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Module_98));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__DataAddr_99, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_71));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_74, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_VarType_9));
                  }
                  ml_backend__ml_unify_gen__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_unify_gen__DataAddr_99);
                  {
                    ml_backend__ml_unify_gen__Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_75, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_76));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__ml_unify_gen__Rval_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_74));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_75));
                  }
                  *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_54 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_53;
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word ml_backend__ml_unify_gen__PredId_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_7, (MR_Integer) 1)));
                  MR_Integer ml_backend__ml_unify_gen__ProcId_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_7, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_unify_gen__ModuleInfo_32;
                  MR_Word ml_backend__ml_unify_gen__PredLabel_33;
                  MR_Word ml_backend__ml_unify_gen__PredModule_34;
                  MR_Word ml_backend__ml_unify_gen__Var_65;
                  MR_Word ml_backend__ml_unify_gen__Var_66;
                  MR_Word ml_backend__ml_unify_gen__Var_68;
                  MR_Word ml_backend__ml_unify_gen__Var_69;
                  MR_Word ml_backend__ml_unify_gen__Var_70;
                  MR_Word ml_backend__ml_unify_gen__DataAddr_100;

                  {
                    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_53, &ml_backend__ml_unify_gen__ModuleInfo_32);
                  }
                  {
                    ml_backend__ml_code_util__ml_gen_pred_label_5_p_0(ml_backend__ml_unify_gen__ModuleInfo_32, ml_backend__ml_unify_gen__PredId_30, ml_backend__ml_unify_gen__ProcId_31, &ml_backend__ml_unify_gen__PredLabel_33, &ml_backend__ml_unify_gen__PredModule_34);
                  }
                  {
                    ml_backend__ml_unify_gen__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_66, 0) = ((MR_Box) (ml_backend__ml_unify_gen__PredLabel_33));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_66, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ProcId_31));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_65, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_66));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_65, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ml_backend__ml_unify_gen__DataAddr_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__DataAddr_100, 0) = ((MR_Box) (ml_backend__ml_unify_gen__PredModule_34));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__DataAddr_100, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_65));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_68, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_VarType_9));
                  }
                  ml_backend__ml_unify_gen__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_unify_gen__DataAddr_100);
                  {
                    ml_backend__ml_unify_gen__Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_69, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_70));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__ml_unify_gen__Rval_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_68));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_69));
                  }
                  *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_54 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_53;
                }
                break;
              case (MR_Integer) 10:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_constant\'/6", (MR_String) "deep_profiling_proc_layout_tag NYI");
                    return;
                  }
                }
                break;
              case (MR_Integer) 11:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_constant\'/6", (MR_String) "table_io_entry_tag NYI");
                    return;
                  }
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_Integer ml_backend__ml_unify_gen__Bits1_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_7, (MR_Integer) 1)));
                  MR_Integer ml_backend__ml_unify_gen__Num1_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_7, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_unify_gen__Var_83;
                  MR_Word ml_backend__ml_unify_gen__Var_84;
                  MR_Word ml_backend__ml_unify_gen__Var_85;
                  MR_Word ml_backend__ml_unify_gen__Var_88;
                  MR_Word ml_backend__ml_unify_gen__Var_89;

                  {
                    ml_backend__ml_unify_gen__Var_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_83, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_VarType_9));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_89 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_89, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Num1_19));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_88, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_89));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_4[4])));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_85, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_88));
                  }
                  {
                    ml_backend__ml_unify_gen__Var_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_84, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Bits1_18));
                    MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_84, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_85));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__ml_unify_gen__Rval_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_83));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_84));
                  }
                  *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_54 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_53;
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_Word ml_backend__ml_unify_gen__ReservedAddr_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_7, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_unify_gen__ModuleInfo_101;

                  {
                    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_53, &ml_backend__ml_unify_gen__ModuleInfo_101);
                  }
                  {
                    *ml_backend__ml_unify_gen__Rval_10 = ml_backend__ml_unify_gen__ml_gen_reserved_address_3_f_0(ml_backend__ml_unify_gen__ModuleInfo_101, ml_backend__ml_unify_gen__ReservedAddr_39, ml_backend__ml_unify_gen__MLDS_VarType_9);
                  }
                  *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_54 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_53;
                }
                break;
              case (MR_Integer) 17:
                {
                  MR_Word ml_backend__ml_unify_gen__ThisTag_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_7, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_unify_gen__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_7, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_unify_gen__next_value_of_Tag_7 = ml_backend__ml_unify_gen__ThisTag_41;

                    ml_backend__ml_unify_gen__Tag_7 = ml_backend__ml_unify_gen__next_value_of_Tag_7;
                  }
                  continue;
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_info_lookup_const_var_rval_3_p_0(
  MR_Word ml_backend__ml_unify_gen__Info_4,
  MR_Word ml_backend__ml_unify_gen__Var_5,
  MR_Word * ml_backend__ml_unify_gen__Rval_6)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__GroundTerm_7;
    MR_Word ml_backend__ml_unify_gen__Var_8;
    MR_Word ml_backend__ml_unify_gen__Var_9;

    {
      ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_p_0(ml_backend__ml_unify_gen__Info_4, ml_backend__ml_unify_gen__Var_5, &ml_backend__ml_unify_gen__GroundTerm_7);
    }
    *ml_backend__ml_unify_gen__Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_7, (MR_Integer) 0)));
    ml_backend__ml_unify_gen__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_7, (MR_Integer) 1)));
    ml_backend__ml_unify_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_7, (MR_Integer) 2)));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_construct_tag_12_p_0(
  MR_Word ml_backend__ml_unify_gen__Tag_13,
  MR_Word ml_backend__ml_unify_gen__Type_14,
  MR_Word ml_backend__ml_unify_gen__Var_15,
  MR_Word ml_backend__ml_unify_gen__ConsId_16,
  MR_Word ml_backend__ml_unify_gen__Args_17,
  MR_Word ml_backend__ml_unify_gen__ArgModes_18,
  MR_Word ml_backend__ml_unify_gen__TakeAddr_19,
  MR_Word ml_backend__ml_unify_gen__HowToConstruct_20,
  MR_Word ml_backend__ml_unify_gen__Context_21,
  MR_Word * ml_backend__ml_unify_gen__Statements_22,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_84)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_unify_gen__succeeded;

        switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__Tag_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ml_backend__ml_unify_gen__Tag_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_unify_gen__UsesBaseClass_146;

                  {
                    ml_backend__ml_unify_gen__UsesBaseClass_146 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ml_backend__ml_unify_gen__Tag_13);
                  }
                  {
                    ml_backend__ml_unify_gen__ml_gen_compound_13_p_0(ml_backend__ml_unify_gen__ConsId_16, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_unify_gen__UsesBaseClass_146, ml_backend__ml_unify_gen__Var_15, ml_backend__ml_unify_gen__Args_17, ml_backend__ml_unify_gen__ArgModes_18, ml_backend__ml_unify_gen__TakeAddr_19, ml_backend__ml_unify_gen__HowToConstruct_20, ml_backend__ml_unify_gen__Context_21, ml_backend__ml_unify_gen__Statements_22, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_84);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_unify_gen__ArgVar_27;
                  MR_Word ml_backend__ml_unify_gen__ArgMode_28;
                  MR_Word ml_backend__ml_unify_gen__Var_95;
                  MR_Word ml_backend__ml_unify_gen__Var_96;

                  ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__Args_17)) == (MR_mktag((MR_Integer) 1)));
                  if (ml_backend__ml_unify_gen__succeeded)
                    {
                      ml_backend__ml_unify_gen__ArgVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Args_17, (MR_Integer) 0)));
                      ml_backend__ml_unify_gen__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Args_17, (MR_Integer) 1)));
                      ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (ml_backend__ml_unify_gen__succeeded)
                        {
                          ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__ArgModes_18)) == (MR_mktag((MR_Integer) 1)));
                          if (ml_backend__ml_unify_gen__succeeded)
                            {
                              ml_backend__ml_unify_gen__ArgMode_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ArgModes_18, (MR_Integer) 0)));
                              ml_backend__ml_unify_gen__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ArgModes_18, (MR_Integer) 1)));
                              ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_96 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                        }
                    }
                  if (ml_backend__ml_unify_gen__succeeded)
                    {
                      MR_Word ml_backend__ml_unify_gen__VarLval_29;
                      MR_Word ml_backend__ml_unify_gen__ModuleInfo_30;
                      MR_Word ml_backend__ml_unify_gen__MLDS_Type_31;
                      MR_Word ml_backend__ml_unify_gen__ArgGroundTerm_32;

                      {
                        ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, ml_backend__ml_unify_gen__Var_15, &ml_backend__ml_unify_gen__VarLval_29);
                      }
                      {
                        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, &ml_backend__ml_unify_gen__ModuleInfo_30);
                      }
                      {
                        ml_backend__ml_unify_gen__MLDS_Type_31 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_30, ml_backend__ml_unify_gen__Type_14);
                      }
                      {
                        ml_backend__ml_unify_gen__succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, ml_backend__ml_unify_gen__ArgVar_27, &ml_backend__ml_unify_gen__ArgGroundTerm_32);
                      }
                      if (ml_backend__ml_unify_gen__succeeded)
                        {
                          MR_Word ml_backend__ml_unify_gen__ArgRval_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgGroundTerm_32, (MR_Integer) 0)));
                          MR_Word ml_backend__ml_unify_gen__MLDS_ArgType_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgGroundTerm_32, (MR_Integer) 2)));
                          MR_Word ml_backend__ml_unify_gen__GlobalData0_36;
                          MR_Word ml_backend__ml_unify_gen__Rval0_38;
                          MR_Word ml_backend__ml_unify_gen__GlobalData_39;
                          MR_Word ml_backend__ml_unify_gen__Rval_40;
                          MR_Word ml_backend__ml_unify_gen__GroundTerm_41;
                          MR_Word ml_backend__ml_unify_gen__Statement_42;
                          MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_97_97;
                          MR_Word ml_backend__ml_unify_gen___ArgType_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgGroundTerm_32, (MR_Integer) 1)));

                          {
                            ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, &ml_backend__ml_unify_gen__GlobalData0_36);
                          }
                          {
                            ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ml_backend__ml_unify_gen__ModuleInfo_30, ml_backend__ml_unify_gen__Context_21, ml_backend__ml_unify_gen__MLDS_ArgType_35, (MR_Integer) 0, ml_backend__ml_unify_gen__ArgRval_33, &ml_backend__ml_unify_gen__Rval0_38, ml_backend__ml_unify_gen__GlobalData0_36, &ml_backend__ml_unify_gen__GlobalData_39);
                          }
                          {
                            ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_unify_gen__GlobalData_39, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, &ml_backend__ml_unify_gen__STATE_VARIABLE_Info_97_97);
                          }
                          {
                            ml_backend__ml_unify_gen__Rval_40 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(ml_backend__ml_unify_gen__MLDS_Type_31, ml_backend__ml_unify_gen__Tag_13, ml_backend__ml_unify_gen__Rval0_38);
                          }
                          {
                            ml_backend__ml_unify_gen__GroundTerm_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_41, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_40));
                            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_41, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Type_14));
                            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_41, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_31));
                          }
                          {
                            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(ml_backend__ml_unify_gen__Var_15, ml_backend__ml_unify_gen__GroundTerm_41, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_97_97, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_84);
                          }
                          {
                            ml_backend__ml_unify_gen__Statement_42 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__VarLval_29, ml_backend__ml_unify_gen__Rval_40, ml_backend__ml_unify_gen__Context_21);
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *ml_backend__ml_unify_gen__Statements_22 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Statement_42));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                        }
                      else
                        {
                          MR_Word ml_backend__ml_unify_gen__ArgLval_43;
                          MR_Word ml_backend__ml_unify_gen__ArgType_44;

                          {
                            ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, ml_backend__ml_unify_gen__ArgVar_27, &ml_backend__ml_unify_gen__ArgLval_43);
                          }
                          {
                            ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, ml_backend__ml_unify_gen__ArgVar_27, &ml_backend__ml_unify_gen__ArgType_44);
                          }
                          if ((ml_backend__ml_unify_gen__Tag_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
                            {
                              MR_Word ml_backend__ml_unify_gen__ArgRval_109;
                              MR_Word ml_backend__ml_unify_gen__Rval_110;
                              MR_Word ml_backend__ml_unify_gen__Statement_111;

                              {
                                ml_backend__ml_unify_gen__ArgRval_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ArgRval_109, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ArgLval_43));
                              }
                              {
                                ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_unify_gen__ModuleInfo_30, ml_backend__ml_unify_gen__ArgType_44, ml_backend__ml_unify_gen__Type_14, (MR_Integer) 0, ml_backend__ml_unify_gen__ArgRval_109, &ml_backend__ml_unify_gen__Rval_110);
                              }
                              {
                                ml_backend__ml_unify_gen__Statement_111 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__VarLval_29, ml_backend__ml_unify_gen__Rval_110, ml_backend__ml_unify_gen__Context_21);
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                *ml_backend__ml_unify_gen__Statements_22 = base;
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Statement_111));
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                            }
                          else
                            {
                              MR_Integer ml_backend__ml_unify_gen__Ptag_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_13, (MR_Integer) 1)));
                              MR_Word ml_backend__ml_unify_gen__VarType_46;

                              {
                                ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, ml_backend__ml_unify_gen__Var_15, &ml_backend__ml_unify_gen__VarType_46);
                              }
                              {
                                ml_backend__ml_unify_gen__ml_gen_direct_arg_construct_9_p_0(ml_backend__ml_unify_gen__ModuleInfo_30, ml_backend__ml_unify_gen__ArgMode_28, ml_backend__ml_unify_gen__Ptag_45, ml_backend__ml_unify_gen__ArgLval_43, ml_backend__ml_unify_gen__ArgType_44, ml_backend__ml_unify_gen__VarLval_29, ml_backend__ml_unify_gen__VarType_46, ml_backend__ml_unify_gen__Context_21, ml_backend__ml_unify_gen__Statements_22);
                              }
                            }
                          *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_84 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83;
                        }
                    }
                  else
                  if ((ml_backend__ml_unify_gen__Tag_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct_tag\'/12", (MR_String) "no_tag: arity != 1");
                        return;
                      }
                    }
                  else
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct_tag\'/12", (MR_String) "direct_arg_tag: arity != 1");
                        return;
                      }
                    }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            if ((ml_backend__ml_unify_gen__Args_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_88_88;
                MR_Word ml_backend__ml_unify_gen__VarLval_125;
                MR_Word ml_backend__ml_unify_gen__ModuleInfo_126;
                MR_Word ml_backend__ml_unify_gen__MLDS_Type_127;
                MR_Word ml_backend__ml_unify_gen__Rval_128;
                MR_Word ml_backend__ml_unify_gen__GroundTerm_129;
                MR_Word ml_backend__ml_unify_gen__Statement_130;

                {
                  ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, ml_backend__ml_unify_gen__Var_15, &ml_backend__ml_unify_gen__VarLval_125);
                }
                {
                  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, &ml_backend__ml_unify_gen__ModuleInfo_126);
                }
                {
                  ml_backend__ml_unify_gen__MLDS_Type_127 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_126, ml_backend__ml_unify_gen__Type_14);
                }
                {
                  ml_backend__ml_unify_gen__ml_gen_constant_6_p_0(ml_backend__ml_unify_gen__Tag_13, ml_backend__ml_unify_gen__Type_14, ml_backend__ml_unify_gen__MLDS_Type_127, &ml_backend__ml_unify_gen__Rval_128, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, &ml_backend__ml_unify_gen__STATE_VARIABLE_Info_88_88);
                }
                {
                  ml_backend__ml_unify_gen__GroundTerm_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_129, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_128));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_129, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Type_14));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_129, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_127));
                }
                {
                  ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(ml_backend__ml_unify_gen__Var_15, ml_backend__ml_unify_gen__GroundTerm_129, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_88_88, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_84);
                }
                {
                  ml_backend__ml_unify_gen__Statement_130 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__VarLval_125, ml_backend__ml_unify_gen__Rval_128, ml_backend__ml_unify_gen__Context_21);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ml_backend__ml_unify_gen__Statements_22 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Statement_130));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct_tag\'/12", (MR_String) "bad constant term");
                  return;
                }
              }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_13, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 4:
              case (MR_Integer) 5:
              case (MR_Integer) 9:
              case (MR_Integer) 10:
              case (MR_Integer) 11:
              case (MR_Integer) 15:
              case (MR_Integer) 16:
                if ((ml_backend__ml_unify_gen__Args_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_88_88;
                    MR_Word ml_backend__ml_unify_gen__VarLval_125;
                    MR_Word ml_backend__ml_unify_gen__ModuleInfo_126;
                    MR_Word ml_backend__ml_unify_gen__MLDS_Type_127;
                    MR_Word ml_backend__ml_unify_gen__Rval_128;
                    MR_Word ml_backend__ml_unify_gen__GroundTerm_129;
                    MR_Word ml_backend__ml_unify_gen__Statement_130;

                    {
                      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, ml_backend__ml_unify_gen__Var_15, &ml_backend__ml_unify_gen__VarLval_125);
                    }
                    {
                      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, &ml_backend__ml_unify_gen__ModuleInfo_126);
                    }
                    {
                      ml_backend__ml_unify_gen__MLDS_Type_127 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_126, ml_backend__ml_unify_gen__Type_14);
                    }
                    {
                      ml_backend__ml_unify_gen__ml_gen_constant_6_p_0(ml_backend__ml_unify_gen__Tag_13, ml_backend__ml_unify_gen__Type_14, ml_backend__ml_unify_gen__MLDS_Type_127, &ml_backend__ml_unify_gen__Rval_128, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, &ml_backend__ml_unify_gen__STATE_VARIABLE_Info_88_88);
                    }
                    {
                      ml_backend__ml_unify_gen__GroundTerm_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_129, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_128));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_129, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Type_14));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_129, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_127));
                    }
                    {
                      ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(ml_backend__ml_unify_gen__Var_15, ml_backend__ml_unify_gen__GroundTerm_129, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_88_88, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_84);
                    }
                    {
                      ml_backend__ml_unify_gen__Statement_130 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__VarLval_125, ml_backend__ml_unify_gen__Rval_128, ml_backend__ml_unify_gen__Context_21);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ml_backend__ml_unify_gen__Statements_22 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Statement_130));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct_tag\'/12", (MR_String) "bad constant term");
                      return;
                    }
                  }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ml_backend__ml_unify_gen__PredId_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_13, (MR_Integer) 1)));
                  MR_Integer ml_backend__ml_unify_gen__ProcId_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_13, (MR_Integer) 2)));

                  {
                    ml_backend__ml_closure_gen__ml_gen_closure_10_p_0(ml_backend__ml_unify_gen__PredId_51, ml_backend__ml_unify_gen__ProcId_52, ml_backend__ml_unify_gen__Var_15, ml_backend__ml_unify_gen__Args_17, ml_backend__ml_unify_gen__ArgModes_18, ml_backend__ml_unify_gen__HowToConstruct_20, ml_backend__ml_unify_gen__Context_21, ml_backend__ml_unify_gen__Statements_22, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_84);
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Integer ml_backend__ml_unify_gen__ConstNum_150 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_13, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_unify_gen__ConstStructMap_151;
                  MR_Word ml_backend__ml_unify_gen__GroundTerm0_152;
                  MR_Word ml_backend__ml_unify_gen__VarLval_156;
                  MR_Word ml_backend__ml_unify_gen__ModuleInfo_157;
                  MR_Word ml_backend__ml_unify_gen__MLDS_Type_158;
                  MR_Word ml_backend__ml_unify_gen__Rval_159;
                  MR_Word ml_backend__ml_unify_gen__GroundTerm_160;
                  MR_Word ml_backend__ml_unify_gen__Statement_161;
                  MR_Box ml_backend__ml_unify_gen__conv1_GroundTerm0_152;
                  MR_Word ml_backend__ml_unify_gen___Type_148;
                  MR_Word ml_backend__ml_unify_gen___MLDS_Type_149;

                  {
                    ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, &ml_backend__ml_unify_gen__ConstStructMap_151);
                  }
                  {
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ml_backend__ml_unify_gen__ConstStructMap_151, ml_backend__ml_unify_gen__ConstNum_150, &ml_backend__ml_unify_gen__conv1_GroundTerm0_152);
                  }
                  ml_backend__ml_unify_gen__GroundTerm0_152 = ((MR_Word) ml_backend__ml_unify_gen__conv1_GroundTerm0_152);
                  ml_backend__ml_unify_gen__Rval_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm0_152, (MR_Integer) 0)));
                  ml_backend__ml_unify_gen___Type_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm0_152, (MR_Integer) 1)));
                  ml_backend__ml_unify_gen___MLDS_Type_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm0_152, (MR_Integer) 2)));
                  {
                    ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, ml_backend__ml_unify_gen__Var_15, &ml_backend__ml_unify_gen__VarLval_156);
                  }
                  {
                    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, &ml_backend__ml_unify_gen__ModuleInfo_157);
                  }
                  {
                    ml_backend__ml_unify_gen__MLDS_Type_158 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_157, ml_backend__ml_unify_gen__Type_14);
                  }
                  {
                    ml_backend__ml_unify_gen__GroundTerm_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_160, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_159));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_160, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Type_14));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_160, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_158));
                  }
                  {
                    ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(ml_backend__ml_unify_gen__Var_15, ml_backend__ml_unify_gen__GroundTerm_160, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_84);
                  }
                  {
                    ml_backend__ml_unify_gen__Statement_161 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__VarLval_156, ml_backend__ml_unify_gen__Rval_159, ml_backend__ml_unify_gen__Context_21);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__ml_unify_gen__Statements_22 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Statement_161));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Integer ml_backend__ml_unify_gen__ConstNum_166 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_13, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_unify_gen__ConstStructMap_167;
                  MR_Word ml_backend__ml_unify_gen__GroundTerm0_168;
                  MR_Word ml_backend__ml_unify_gen__VarLval_172;
                  MR_Word ml_backend__ml_unify_gen__ModuleInfo_173;
                  MR_Word ml_backend__ml_unify_gen__MLDS_Type_174;
                  MR_Word ml_backend__ml_unify_gen__Rval_175;
                  MR_Word ml_backend__ml_unify_gen__GroundTerm_176;
                  MR_Word ml_backend__ml_unify_gen__Statement_177;
                  MR_Box ml_backend__ml_unify_gen__conv2_GroundTerm0_168;
                  MR_Word ml_backend__ml_unify_gen___Type_164;
                  MR_Word ml_backend__ml_unify_gen___MLDS_Type_165;

                  {
                    ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, &ml_backend__ml_unify_gen__ConstStructMap_167);
                  }
                  {
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ml_backend__ml_unify_gen__ConstStructMap_167, ml_backend__ml_unify_gen__ConstNum_166, &ml_backend__ml_unify_gen__conv2_GroundTerm0_168);
                  }
                  ml_backend__ml_unify_gen__GroundTerm0_168 = ((MR_Word) ml_backend__ml_unify_gen__conv2_GroundTerm0_168);
                  ml_backend__ml_unify_gen__Rval_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm0_168, (MR_Integer) 0)));
                  ml_backend__ml_unify_gen___Type_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm0_168, (MR_Integer) 1)));
                  ml_backend__ml_unify_gen___MLDS_Type_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm0_168, (MR_Integer) 2)));
                  {
                    ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, ml_backend__ml_unify_gen__Var_15, &ml_backend__ml_unify_gen__VarLval_172);
                  }
                  {
                    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, &ml_backend__ml_unify_gen__ModuleInfo_173);
                  }
                  {
                    ml_backend__ml_unify_gen__MLDS_Type_174 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_173, ml_backend__ml_unify_gen__Type_14);
                  }
                  {
                    ml_backend__ml_unify_gen__GroundTerm_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_176, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_175));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_176, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Type_14));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_176, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_174));
                  }
                  {
                    ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(ml_backend__ml_unify_gen__Var_15, ml_backend__ml_unify_gen__GroundTerm_176, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_84);
                  }
                  {
                    ml_backend__ml_unify_gen__Statement_177 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__VarLval_172, ml_backend__ml_unify_gen__Rval_175, ml_backend__ml_unify_gen__Context_21);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__ml_unify_gen__Statements_22 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Statement_177));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Integer ml_backend__ml_unify_gen__ConstNum_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_13, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_unify_gen__ConstStructMap_56;
                  MR_Word ml_backend__ml_unify_gen__GroundTerm0_57;
                  MR_Word ml_backend__ml_unify_gen__VarLval_119;
                  MR_Word ml_backend__ml_unify_gen__ModuleInfo_120;
                  MR_Word ml_backend__ml_unify_gen__MLDS_Type_121;
                  MR_Word ml_backend__ml_unify_gen__Rval_122;
                  MR_Word ml_backend__ml_unify_gen__GroundTerm_123;
                  MR_Word ml_backend__ml_unify_gen__Statement_124;
                  MR_Word ml_backend__ml_unify_gen__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_13, (MR_Integer) 2)));
                  MR_Box ml_backend__ml_unify_gen__conv0_GroundTerm0_57;
                  MR_Word ml_backend__ml_unify_gen___Type_58;
                  MR_Word ml_backend__ml_unify_gen___MLDS_Type_59;

                  {
                    ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, &ml_backend__ml_unify_gen__ConstStructMap_56);
                  }
                  {
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0, ml_backend__ml_unify_gen__ConstStructMap_56, ml_backend__ml_unify_gen__ConstNum_54, &ml_backend__ml_unify_gen__conv0_GroundTerm0_57);
                  }
                  ml_backend__ml_unify_gen__GroundTerm0_57 = ((MR_Word) ml_backend__ml_unify_gen__conv0_GroundTerm0_57);
                  ml_backend__ml_unify_gen__Rval_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm0_57, (MR_Integer) 0)));
                  ml_backend__ml_unify_gen___Type_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm0_57, (MR_Integer) 1)));
                  ml_backend__ml_unify_gen___MLDS_Type_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm0_57, (MR_Integer) 2)));
                  {
                    ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, ml_backend__ml_unify_gen__Var_15, &ml_backend__ml_unify_gen__VarLval_119);
                  }
                  {
                    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, &ml_backend__ml_unify_gen__ModuleInfo_120);
                  }
                  {
                    ml_backend__ml_unify_gen__MLDS_Type_121 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_120, ml_backend__ml_unify_gen__Type_14);
                  }
                  {
                    ml_backend__ml_unify_gen__GroundTerm_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_123, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_122));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_123, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Type_14));
                    MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_123, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_121));
                  }
                  {
                    ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(ml_backend__ml_unify_gen__Var_15, ml_backend__ml_unify_gen__GroundTerm_123, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_84);
                  }
                  {
                    ml_backend__ml_unify_gen__Statement_124 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__VarLval_119, ml_backend__ml_unify_gen__Rval_122, ml_backend__ml_unify_gen__Context_21);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ml_backend__ml_unify_gen__Statements_22 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Statement_124));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word ml_backend__ml_unify_gen__UsesBaseClass_181;
                  MR_Integer ml_backend__ml_unify_gen__Ptag_182 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_13, (MR_Integer) 1)));

                  {
                    ml_backend__ml_unify_gen__UsesBaseClass_181 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ml_backend__ml_unify_gen__Tag_13);
                  }
                  {
                    ml_backend__ml_unify_gen__ml_gen_compound_13_p_0(ml_backend__ml_unify_gen__ConsId_16, ml_backend__ml_unify_gen__Ptag_182, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_unify_gen__UsesBaseClass_181, ml_backend__ml_unify_gen__Var_15, ml_backend__ml_unify_gen__Args_17, ml_backend__ml_unify_gen__ArgModes_18, ml_backend__ml_unify_gen__TakeAddr_19, ml_backend__ml_unify_gen__HowToConstruct_20, ml_backend__ml_unify_gen__Context_21, ml_backend__ml_unify_gen__Statements_22, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_84);
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Word ml_backend__ml_unify_gen__ArgVar_27;
                  MR_Word ml_backend__ml_unify_gen__ArgMode_28;
                  MR_Word ml_backend__ml_unify_gen__Var_95;
                  MR_Word ml_backend__ml_unify_gen__Var_96;

                  ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__Args_17)) == (MR_mktag((MR_Integer) 1)));
                  if (ml_backend__ml_unify_gen__succeeded)
                    {
                      ml_backend__ml_unify_gen__ArgVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Args_17, (MR_Integer) 0)));
                      ml_backend__ml_unify_gen__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Args_17, (MR_Integer) 1)));
                      ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (ml_backend__ml_unify_gen__succeeded)
                        {
                          ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__ArgModes_18)) == (MR_mktag((MR_Integer) 1)));
                          if (ml_backend__ml_unify_gen__succeeded)
                            {
                              ml_backend__ml_unify_gen__ArgMode_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ArgModes_18, (MR_Integer) 0)));
                              ml_backend__ml_unify_gen__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ArgModes_18, (MR_Integer) 1)));
                              ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_96 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                        }
                    }
                  if (ml_backend__ml_unify_gen__succeeded)
                    {
                      MR_Word ml_backend__ml_unify_gen__VarLval_29;
                      MR_Word ml_backend__ml_unify_gen__ModuleInfo_30;
                      MR_Word ml_backend__ml_unify_gen__MLDS_Type_31;
                      MR_Word ml_backend__ml_unify_gen__ArgGroundTerm_32;

                      {
                        ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, ml_backend__ml_unify_gen__Var_15, &ml_backend__ml_unify_gen__VarLval_29);
                      }
                      {
                        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, &ml_backend__ml_unify_gen__ModuleInfo_30);
                      }
                      {
                        ml_backend__ml_unify_gen__MLDS_Type_31 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_30, ml_backend__ml_unify_gen__Type_14);
                      }
                      {
                        ml_backend__ml_unify_gen__succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, ml_backend__ml_unify_gen__ArgVar_27, &ml_backend__ml_unify_gen__ArgGroundTerm_32);
                      }
                      if (ml_backend__ml_unify_gen__succeeded)
                        {
                          MR_Word ml_backend__ml_unify_gen__ArgRval_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgGroundTerm_32, (MR_Integer) 0)));
                          MR_Word ml_backend__ml_unify_gen__MLDS_ArgType_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgGroundTerm_32, (MR_Integer) 2)));
                          MR_Word ml_backend__ml_unify_gen__GlobalData0_36;
                          MR_Word ml_backend__ml_unify_gen__Rval0_38;
                          MR_Word ml_backend__ml_unify_gen__GlobalData_39;
                          MR_Word ml_backend__ml_unify_gen__Rval_40;
                          MR_Word ml_backend__ml_unify_gen__GroundTerm_41;
                          MR_Word ml_backend__ml_unify_gen__Statement_42;
                          MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_97_97;
                          MR_Word ml_backend__ml_unify_gen___ArgType_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__ArgGroundTerm_32, (MR_Integer) 1)));

                          {
                            ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, &ml_backend__ml_unify_gen__GlobalData0_36);
                          }
                          {
                            ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ml_backend__ml_unify_gen__ModuleInfo_30, ml_backend__ml_unify_gen__Context_21, ml_backend__ml_unify_gen__MLDS_ArgType_35, (MR_Integer) 0, ml_backend__ml_unify_gen__ArgRval_33, &ml_backend__ml_unify_gen__Rval0_38, ml_backend__ml_unify_gen__GlobalData0_36, &ml_backend__ml_unify_gen__GlobalData_39);
                          }
                          {
                            ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_unify_gen__GlobalData_39, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, &ml_backend__ml_unify_gen__STATE_VARIABLE_Info_97_97);
                          }
                          {
                            ml_backend__ml_unify_gen__Rval_40 = ml_backend__ml_unify_gen__ml_cast_cons_tag_3_f_0(ml_backend__ml_unify_gen__MLDS_Type_31, ml_backend__ml_unify_gen__Tag_13, ml_backend__ml_unify_gen__Rval0_38);
                          }
                          {
                            ml_backend__ml_unify_gen__GroundTerm_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_41, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_40));
                            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_41, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Type_14));
                            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__GroundTerm_41, 2) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_31));
                          }
                          {
                            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(ml_backend__ml_unify_gen__Var_15, ml_backend__ml_unify_gen__GroundTerm_41, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_97_97, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_84);
                          }
                          {
                            ml_backend__ml_unify_gen__Statement_42 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__VarLval_29, ml_backend__ml_unify_gen__Rval_40, ml_backend__ml_unify_gen__Context_21);
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *ml_backend__ml_unify_gen__Statements_22 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Statement_42));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                        }
                      else
                        {
                          MR_Word ml_backend__ml_unify_gen__ArgLval_43;
                          MR_Word ml_backend__ml_unify_gen__ArgType_44;

                          {
                            ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, ml_backend__ml_unify_gen__ArgVar_27, &ml_backend__ml_unify_gen__ArgLval_43);
                          }
                          {
                            ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, ml_backend__ml_unify_gen__ArgVar_27, &ml_backend__ml_unify_gen__ArgType_44);
                          }
                          if ((ml_backend__ml_unify_gen__Tag_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
                            {
                              MR_Word ml_backend__ml_unify_gen__ArgRval_109;
                              MR_Word ml_backend__ml_unify_gen__Rval_110;
                              MR_Word ml_backend__ml_unify_gen__Statement_111;

                              {
                                ml_backend__ml_unify_gen__ArgRval_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ArgRval_109, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ArgLval_43));
                              }
                              {
                                ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_unify_gen__ModuleInfo_30, ml_backend__ml_unify_gen__ArgType_44, ml_backend__ml_unify_gen__Type_14, (MR_Integer) 0, ml_backend__ml_unify_gen__ArgRval_109, &ml_backend__ml_unify_gen__Rval_110);
                              }
                              {
                                ml_backend__ml_unify_gen__Statement_111 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__VarLval_29, ml_backend__ml_unify_gen__Rval_110, ml_backend__ml_unify_gen__Context_21);
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                *ml_backend__ml_unify_gen__Statements_22 = base;
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Statement_111));
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                            }
                          else
                            {
                              MR_Integer ml_backend__ml_unify_gen__Ptag_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_13, (MR_Integer) 1)));
                              MR_Word ml_backend__ml_unify_gen__VarType_46;

                              {
                                ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, ml_backend__ml_unify_gen__Var_15, &ml_backend__ml_unify_gen__VarType_46);
                              }
                              {
                                ml_backend__ml_unify_gen__ml_gen_direct_arg_construct_9_p_0(ml_backend__ml_unify_gen__ModuleInfo_30, ml_backend__ml_unify_gen__ArgMode_28, ml_backend__ml_unify_gen__Ptag_45, ml_backend__ml_unify_gen__ArgLval_43, ml_backend__ml_unify_gen__ArgType_44, ml_backend__ml_unify_gen__VarLval_29, ml_backend__ml_unify_gen__VarType_46, ml_backend__ml_unify_gen__Context_21, ml_backend__ml_unify_gen__Statements_22);
                              }
                            }
                          *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_84 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83;
                        }
                    }
                  else
                  if ((ml_backend__ml_unify_gen__Tag_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct_tag\'/12", (MR_String) "no_tag: arity != 1");
                        return;
                      }
                    }
                  else
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_construct_tag\'/12", (MR_String) "direct_arg_tag: arity != 1");
                        return;
                      }
                    }
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_Word ml_backend__ml_unify_gen__MaybeStag_48;
                  MR_Integer ml_backend__ml_unify_gen__Stag_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_13, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_unify_gen__UsesBaseClass_50;
                  MR_Integer ml_backend__ml_unify_gen__Ptag_118 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_13, (MR_Integer) 1)));

                  {
                    ml_backend__ml_unify_gen__MaybeStag_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__MaybeStag_48, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Stag_49));
                  }
                  {
                    ml_backend__ml_unify_gen__UsesBaseClass_50 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ml_backend__ml_unify_gen__Tag_13);
                  }
                  {
                    ml_backend__ml_unify_gen__ml_gen_compound_13_p_0(ml_backend__ml_unify_gen__ConsId_16, ml_backend__ml_unify_gen__Ptag_118, ml_backend__ml_unify_gen__MaybeStag_48, ml_backend__ml_unify_gen__UsesBaseClass_50, ml_backend__ml_unify_gen__Var_15, ml_backend__ml_unify_gen__Args_17, ml_backend__ml_unify_gen__ArgModes_18, ml_backend__ml_unify_gen__TakeAddr_19, ml_backend__ml_unify_gen__HowToConstruct_20, ml_backend__ml_unify_gen__Context_21, ml_backend__ml_unify_gen__Statements_22, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_83, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_84);
                  }
                }
                break;
              case (MR_Integer) 17:
                {
                  MR_Word ml_backend__ml_unify_gen__ThisTag_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_13, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_unify_gen__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Tag_13, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_unify_gen__next_value_of_Tag_13 = ml_backend__ml_unify_gen__ThisTag_25;

                    ml_backend__ml_unify_gen__Tag_13 = ml_backend__ml_unify_gen__next_value_of_Tag_13;
                  }
                  continue;
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_construct_10_p_0(
  MR_Word ml_backend__ml_unify_gen__Var_11,
  MR_Word ml_backend__ml_unify_gen__ConsId_12,
  MR_Word ml_backend__ml_unify_gen__Args_13,
  MR_Word ml_backend__ml_unify_gen__ArgModes_14,
  MR_Word ml_backend__ml_unify_gen__TakeAddr_15,
  MR_Word ml_backend__ml_unify_gen__HowToConstruct_16,
  MR_Word ml_backend__ml_unify_gen__Context_17,
  MR_Word * ml_backend__ml_unify_gen__Statements_18,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_22,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_23)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__Type_20;
    MR_Word ml_backend__ml_unify_gen__Tag_21;
    MR_Word ml_backend__ml_unify_gen__ModuleInfo_28;

    {
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_22, ml_backend__ml_unify_gen__Var_11, &ml_backend__ml_unify_gen__Type_20);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_22, &ml_backend__ml_unify_gen__ModuleInfo_28);
    }
    {
      ml_backend__ml_unify_gen__Tag_21 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_28, ml_backend__ml_unify_gen__ConsId_12);
    }
    {
      ml_backend__ml_unify_gen__ml_gen_construct_tag_12_p_0(ml_backend__ml_unify_gen__Tag_21, ml_backend__ml_unify_gen__Type_20, ml_backend__ml_unify_gen__Var_11, ml_backend__ml_unify_gen__ConsId_12, ml_backend__ml_unify_gen__Args_13, ml_backend__ml_unify_gen__ArgModes_14, ml_backend__ml_unify_gen__TakeAddr_15, ml_backend__ml_unify_gen__HowToConstruct_16, ml_backend__ml_unify_gen__Context_17, ml_backend__ml_unify_gen__Statements_18, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_22, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_23);
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_structs_4_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_unify_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_unify_gen__wrapper_arg_5)
{
  {
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;
    MR_Word ml_backend__ml_unify_gen__conv1_STATE_VARIABLE_ConstStructMap_20;
    MR_Word ml_backend__ml_unify_gen__conv0_STATE_VARIABLE_GlobalData_22;

    {
      ml_backend__ml_unify_gen__ml_gen_const_struct_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_2), &ml_backend__ml_unify_gen__conv1_STATE_VARIABLE_ConstStructMap_20, ((MR_Word) ml_backend__ml_unify_gen__wrapper_arg_4), &ml_backend__ml_unify_gen__conv0_STATE_VARIABLE_GlobalData_22);
    }
    *ml_backend__ml_unify_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_unify_gen__conv1_STATE_VARIABLE_ConstStructMap_20));
    *ml_backend__ml_unify_gen__wrapper_arg_5 = ((MR_Box) (ml_backend__ml_unify_gen__conv0_STATE_VARIABLE_GlobalData_22));
  }
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_const_structs_4_p_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_5,
  MR_Word * ml_backend__ml_unify_gen__ConstStructMap_6,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_14,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_15)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__Globals_8;
    MR_Word ml_backend__ml_unify_gen__Target_9;
    MR_Word ml_backend__ml_unify_gen__HighLevelData_10;
    MR_Word ml_backend__ml_unify_gen__Info_11;
    MR_Word ml_backend__ml_unify_gen__ConstStructDb_12;
    MR_Word ml_backend__ml_unify_gen__ConstStructs_13;
    MR_Word ml_backend__ml_unify_gen__Var_17;
    MR_Word ml_backend__ml_unify_gen__Var_18;
    MR_Box ml_backend__ml_unify_gen__conv3_ConstStructMap_6;
    MR_Box ml_backend__ml_unify_gen__conv2_STATE_VARIABLE_GlobalData_15;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_unify_gen__ModuleInfo_5, &ml_backend__ml_unify_gen__Globals_8);
    }
    {
      libs__globals__get_target_2_p_0(ml_backend__ml_unify_gen__Globals_8, &ml_backend__ml_unify_gen__Target_9);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_unify_gen__Globals_8, (MR_Integer) 264, &ml_backend__ml_unify_gen__HighLevelData_10);
    }
    {
      ml_backend__ml_unify_gen__Info_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Info_11, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ModuleInfo_5));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Info_11, 1) = ((MR_Box) ((ml_backend__ml_unify_gen__Target_9 | ((ml_backend__ml_unify_gen__HighLevelData_10 << (MR_Integer) 2)))));
    }
    {
      hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ml_backend__ml_unify_gen__ModuleInfo_5, &ml_backend__ml_unify_gen__ConstStructDb_12);
    }
    {
      hlds__const_struct__const_struct_db_get_structs_2_p_0(ml_backend__ml_unify_gen__ConstStructDb_12, &ml_backend__ml_unify_gen__ConstStructs_13);
    }
    {
      ml_backend__ml_unify_gen__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_17, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_17, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_const_structs_4_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_17, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Info_11));
    }
    {
      ml_backend__ml_unify_gen__Var_18 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0);
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[0], (MR_Word) &ml_backend__ml_unify_gen_scalar_common_2[1], (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__ml_unify_gen__Var_17, ml_backend__ml_unify_gen__ConstStructs_13, ((MR_Box) (ml_backend__ml_unify_gen__Var_18)), &ml_backend__ml_unify_gen__conv3_ConstStructMap_6, ((MR_Box) (ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_0_14)), &ml_backend__ml_unify_gen__conv2_STATE_VARIABLE_GlobalData_15);
    }
    *ml_backend__ml_unify_gen__ConstStructMap_6 = ((MR_Word) ml_backend__ml_unify_gen__conv3_ConstStructMap_6);
    *ml_backend__ml_unify_gen__STATE_VARIABLE_GlobalData_15 = ((MR_Word) ml_backend__ml_unify_gen__conv2_STATE_VARIABLE_GlobalData_15);
  }
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_ground_term_5_p_0(
  MR_Word ml_backend__ml_unify_gen__TermVar_6,
  MR_Word ml_backend__ml_unify_gen__Goal_7,
  MR_Word * ml_backend__ml_unify_gen__Statements_8,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_33,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_34)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Goal_7, (MR_Integer) 0)));
    MR_Word ml_backend__ml_unify_gen__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Goal_7, (MR_Integer) 1)));
    MR_Word ml_backend__ml_unify_gen__NonLocals_12;
    MR_Word ml_backend__ml_unify_gen__NonLocalList_13;

    {
      ml_backend__ml_unify_gen__NonLocals_12 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ml_backend__ml_unify_gen__GoalInfo_11);
    }
    {
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ml_backend__ml_unify_gen__NonLocals_12, &ml_backend__ml_unify_gen__NonLocalList_13);
    }
    if ((ml_backend__ml_unify_gen__NonLocalList_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_unify_gen__Statements_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_34 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_33;
      }
    else
      {
        MR_Word ml_backend__ml_unify_gen__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__NonLocalList_13, (MR_Integer) 1)));
        MR_Word ml_backend__ml_unify_gen__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__NonLocalList_13, (MR_Integer) 0)));

        if ((ml_backend__ml_unify_gen__Var_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              ml_backend__ml_unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2], ((MR_Box) (ml_backend__ml_unify_gen__Var_55)), ((MR_Box) (ml_backend__ml_unify_gen__TermVar_6)));
            }
            if (ml_backend__ml_unify_gen__succeeded)
              {
                MR_Word ml_backend__ml_unify_gen__Conjuncts_15;
                MR_Word ml_backend__ml_unify_gen__Var_40;

                ml_backend__ml_unify_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_unify_gen__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (ml_backend__ml_unify_gen__succeeded)
                  {
                    ml_backend__ml_unify_gen__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__GoalExpr_10, (MR_Integer) 1)));
                    ml_backend__ml_unify_gen__Conjuncts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__GoalExpr_10, (MR_Integer) 2)));
                    ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_40 == (MR_Integer) 0);
                  }
                if (ml_backend__ml_unify_gen__succeeded)
                  {
                    MR_Word ml_backend__ml_unify_gen__TypeInfo_52_52;
                    MR_Word ml_backend__ml_unify_gen__TypeCtorInfo_53_53;
                    MR_Word ml_backend__ml_unify_gen__ModuleInfo_16;
                    MR_Word ml_backend__ml_unify_gen__Target_17;
                    MR_Word ml_backend__ml_unify_gen__HighLevelData_18;
                    MR_Word ml_backend__ml_unify_gen__VarTypes_19;
                    MR_Word ml_backend__ml_unify_gen__GlobalData0_20;
                    MR_Word ml_backend__ml_unify_gen__GlobalData_21;
                    MR_Word ml_backend__ml_unify_gen__GroundTermMap_22;
                    MR_Word ml_backend__ml_unify_gen__TermVarGroundTerm_23;
                    MR_Word ml_backend__ml_unify_gen__TermVarLval_24;
                    MR_Word ml_backend__ml_unify_gen__TermVarRval_25;
                    MR_Word ml_backend__ml_unify_gen__Context_28;
                    MR_Word ml_backend__ml_unify_gen__Statement_29;
                    MR_Word ml_backend__ml_unify_gen__Var_41;
                    MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_42_42;
                    MR_Box ml_backend__ml_unify_gen__conv0_TermVarGroundTerm_23;
                    MR_Word ml_backend__ml_unify_gen__Var_26;
                    MR_Word ml_backend__ml_unify_gen__Var_27;

                    {
                      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_33, &ml_backend__ml_unify_gen__ModuleInfo_16);
                    }
                    {
                      ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_33, &ml_backend__ml_unify_gen__Target_17);
                    }
                    {
                      ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_33, &ml_backend__ml_unify_gen__HighLevelData_18);
                    }
                    {
                      ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_33, &ml_backend__ml_unify_gen__VarTypes_19);
                    }
                    {
                      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_33, &ml_backend__ml_unify_gen__GlobalData0_20);
                    }
                    ml_backend__ml_unify_gen__TypeInfo_52_52 = (MR_Word) &ml_backend__ml_unify_gen_scalar_common_1[2];
                    ml_backend__ml_unify_gen__TypeCtorInfo_53_53 = (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;
                    {
                      ml_backend__ml_unify_gen__Var_41 = mercury__map__init_0_f_0(ml_backend__ml_unify_gen__TypeInfo_52_52, ml_backend__ml_unify_gen__TypeCtorInfo_53_53);
                    }
                    {
                      ml_backend__ml_unify_gen__ml_gen_ground_term_conjuncts_9_p_0(ml_backend__ml_unify_gen__ModuleInfo_16, ml_backend__ml_unify_gen__Target_17, ml_backend__ml_unify_gen__HighLevelData_18, ml_backend__ml_unify_gen__VarTypes_19, ml_backend__ml_unify_gen__Conjuncts_15, ml_backend__ml_unify_gen__GlobalData0_20, &ml_backend__ml_unify_gen__GlobalData_21, ml_backend__ml_unify_gen__Var_41, &ml_backend__ml_unify_gen__GroundTermMap_22);
                    }
                    {
                      ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_unify_gen__GlobalData_21, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_33, &ml_backend__ml_unify_gen__STATE_VARIABLE_Info_42_42);
                    }
                    {
                      mercury__map__lookup_3_p_0(ml_backend__ml_unify_gen__TypeInfo_52_52, ml_backend__ml_unify_gen__TypeCtorInfo_53_53, ml_backend__ml_unify_gen__GroundTermMap_22, ((MR_Box) (ml_backend__ml_unify_gen__TermVar_6)), &ml_backend__ml_unify_gen__conv0_TermVarGroundTerm_23);
                    }
                    ml_backend__ml_unify_gen__TermVarGroundTerm_23 = ((MR_Word) ml_backend__ml_unify_gen__conv0_TermVarGroundTerm_23);
                    {
                      ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(ml_backend__ml_unify_gen__TermVar_6, ml_backend__ml_unify_gen__TermVarGroundTerm_23, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_42_42, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_34);
                    }
                    {
                      ml_backend__ml_code_util__ml_gen_var_3_p_0(*ml_backend__ml_unify_gen__STATE_VARIABLE_Info_34, ml_backend__ml_unify_gen__TermVar_6, &ml_backend__ml_unify_gen__TermVarLval_24);
                    }
                    ml_backend__ml_unify_gen__TermVarRval_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__TermVarGroundTerm_23, (MR_Integer) 0)));
                    ml_backend__ml_unify_gen__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__TermVarGroundTerm_23, (MR_Integer) 1)));
                    ml_backend__ml_unify_gen__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__TermVarGroundTerm_23, (MR_Integer) 2)));
                    {
                      ml_backend__ml_unify_gen__Context_28 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_unify_gen__GoalInfo_11);
                    }
                    {
                      ml_backend__ml_unify_gen__Statement_29 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__TermVarLval_24, ml_backend__ml_unify_gen__TermVarRval_25, ml_backend__ml_unify_gen__Context_28);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ml_backend__ml_unify_gen__Statements_8 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Statement_29));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term\'/5", (MR_String) "malformed goal");
                      return;
                    }
                  }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term\'/5", (MR_String) "unexpected nonlocal");
                  return;
                }
              }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_ground_term\'/5", (MR_String) "unexpected nonlocals");
              return;
            }
          }
      }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;

    {
      ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_new_object__664__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0(
  MR_Word ml_backend__ml_unify_gen__MaybeConsId_16,
  MR_Word ml_backend__ml_unify_gen__MaybeCtorName_17,
  MR_Integer ml_backend__ml_unify_gen__Tag_18,
  MR_Word ml_backend__ml_unify_gen__ExplicitSecTag_19,
  MR_Word ml_backend__ml_unify_gen__Var_20,
  MR_Word ml_backend__ml_unify_gen__ExtraRvals_21,
  MR_Word ml_backend__ml_unify_gen__ExtraTypes_22,
  MR_Word ml_backend__ml_unify_gen__ArgVars_23,
  MR_Word ml_backend__ml_unify_gen__ArgModes_24,
  MR_Word ml_backend__ml_unify_gen__TakeAddr_25,
  MR_Word ml_backend__ml_unify_gen__HowToConstruct_26,
  MR_Word ml_backend__ml_unify_gen__Context_27,
  MR_Word * ml_backend__ml_unify_gen__Statements_28,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_37,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_38)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__VarType_30;
    MR_Word ml_backend__ml_unify_gen__MLDS_Type_31;
    MR_Word ml_backend__ml_unify_gen__VarLval_32;
    MR_Word ml_backend__ml_unify_gen__MaybeTag_33;
    MR_Word ml_backend__ml_unify_gen__ArgTypes_34;

    {
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_37, ml_backend__ml_unify_gen__Var_20, &ml_backend__ml_unify_gen__VarType_30);
    }
    {
      ml_backend__ml_code_util__ml_gen_type_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_37, ml_backend__ml_unify_gen__VarType_30, &ml_backend__ml_unify_gen__MLDS_Type_31);
    }
    {
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_37, ml_backend__ml_unify_gen__Var_20, &ml_backend__ml_unify_gen__VarLval_32);
    }
    ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Tag_18 == (MR_Integer) 0);
    if (ml_backend__ml_unify_gen__succeeded)
      ml_backend__ml_unify_gen__MaybeTag_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        ml_backend__ml_unify_gen__MaybeTag_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__MaybeTag_33, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Tag_18));
      }
    {
      ml_backend__ml_code_util__ml_variable_types_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_37, ml_backend__ml_unify_gen__ArgVars_23, &ml_backend__ml_unify_gen__ArgTypes_34);
    }
    switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__HowToConstruct_26)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__ml_unify_gen__HowToConstruct_26)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_unify_gen__Var_43;

              {
                ml_backend__ml_unify_gen__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_43, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_43, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_new_object_15_p_0_1));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_43, 3) = ((MR_Box) (ml_backend__ml_unify_gen__TakeAddr_25));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_43, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                mercury__require__expect_4_p_0(ml_backend__ml_unify_gen__Var_43, (MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_new_object\'/15", (MR_String) "cannot take address of static object\'s field");
              }
              {
                ml_backend__ml_unify_gen__ml_gen_new_object_statically_15_p_0(ml_backend__ml_unify_gen__MaybeConsId_16, ml_backend__ml_unify_gen__MaybeCtorName_17, ml_backend__ml_unify_gen__MaybeTag_33, ml_backend__ml_unify_gen__Var_20, ml_backend__ml_unify_gen__VarLval_32, ml_backend__ml_unify_gen__VarType_30, ml_backend__ml_unify_gen__MLDS_Type_31, ml_backend__ml_unify_gen__ExtraRvals_21, ml_backend__ml_unify_gen__ExtraTypes_22, ml_backend__ml_unify_gen__ArgVars_23, ml_backend__ml_unify_gen__ArgTypes_34, ml_backend__ml_unify_gen__Context_27, ml_backend__ml_unify_gen__Statements_28, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_37, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_38);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              ml_backend__ml_unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_101_119_95_111_98_106_101_99_116_95_100_121_110_97_109_105_99_97_108_108_121_95_95_91_53_93_95_48_18_p_0(ml_backend__ml_unify_gen__MaybeConsId_16, ml_backend__ml_unify_gen__MaybeCtorName_17, ml_backend__ml_unify_gen__MaybeTag_33, ml_backend__ml_unify_gen__ExplicitSecTag_19, ml_backend__ml_unify_gen__VarLval_32, ml_backend__ml_unify_gen__VarType_30, ml_backend__ml_unify_gen__MLDS_Type_31, ml_backend__ml_unify_gen__ExtraRvals_21, ml_backend__ml_unify_gen__ExtraTypes_22, ml_backend__ml_unify_gen__ArgVars_23, ml_backend__ml_unify_gen__ArgTypes_34, ml_backend__ml_unify_gen__ArgModes_24, ml_backend__ml_unify_gen__TakeAddr_25, ml_backend__ml_unify_gen__Context_27, ml_backend__ml_unify_gen__Statements_28, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_37, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_38);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_unify_gen__CellToReuse_35 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_unify_gen__HowToConstruct_26), (MR_Integer) 1);

          {
            ml_backend__ml_unify_gen__ml_gen_new_object_reuse_cell_20_p_0(ml_backend__ml_unify_gen__MaybeConsId_16, ml_backend__ml_unify_gen__MaybeCtorName_17, ml_backend__ml_unify_gen__Tag_18, ml_backend__ml_unify_gen__MaybeTag_33, ml_backend__ml_unify_gen__ExplicitSecTag_19, ml_backend__ml_unify_gen__Var_20, ml_backend__ml_unify_gen__VarLval_32, ml_backend__ml_unify_gen__VarType_30, ml_backend__ml_unify_gen__MLDS_Type_31, ml_backend__ml_unify_gen__ExtraRvals_21, ml_backend__ml_unify_gen__ExtraTypes_22, ml_backend__ml_unify_gen__ArgVars_23, ml_backend__ml_unify_gen__ArgTypes_34, ml_backend__ml_unify_gen__ArgModes_24, ml_backend__ml_unify_gen__TakeAddr_25, ml_backend__ml_unify_gen__CellToReuse_35, ml_backend__ml_unify_gen__Context_27, ml_backend__ml_unify_gen__Statements_28, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_37, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_38);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_new_object\'/15", (MR_String) "construct_in_region NYI");
            return;
          }
        }
        break;
    }
  }
}

MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_reserved_address_3_f_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_5,
  MR_Word ml_backend__ml_unify_gen__ResAddr_6,
  MR_Word ml_backend__ml_unify_gen__MLDS_Type_7)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__Rval_8;

    switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__ResAddr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_unify_gen__Var_43;

          {
            ml_backend__ml_unify_gen__Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_43, 1) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_7));
          }
          {
            ml_backend__ml_unify_gen__Rval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_8, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_43));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ml_backend__ml_unify_gen__Int_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__ResAddr_6, (MR_Integer) 0)));
          MR_Word ml_backend__ml_unify_gen__Var_40;
          MR_Word ml_backend__ml_unify_gen__Var_41;
          MR_Word ml_backend__ml_unify_gen__Var_42;

          {
            ml_backend__ml_unify_gen__Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_40, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_Type_7));
          }
          {
            ml_backend__ml_unify_gen__Var_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_42, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Int_9));
          }
          {
            ml_backend__ml_unify_gen__Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_41, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_42));
          }
          {
            ml_backend__ml_unify_gen__Rval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_8, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_40));
            MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_8, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_41));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_unify_gen__TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__ResAddr_6, (MR_Integer) 0)));
          MR_Word ml_backend__ml_unify_gen__QualCtorName_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__ResAddr_6, (MR_Integer) 1)));
          MR_Integer ml_backend__ml_unify_gen__CtorArity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__ResAddr_6, (MR_Integer) 2)));

          if (((MR_tag((MR_Word) ml_backend__ml_unify_gen__QualCtorName_11)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ml_backend__ml_unify_gen__ModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__QualCtorName_11, (MR_Integer) 0)));
              MR_String ml_backend__ml_unify_gen__CtorName_14 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__QualCtorName_11, (MR_Integer) 1)));
              MR_Word ml_backend__ml_unify_gen__Globals_15;
              MR_Word ml_backend__ml_unify_gen__MLDS_ModuleName_16;
              MR_Word ml_backend__ml_unify_gen__TypeName_17;
              MR_Integer ml_backend__ml_unify_gen__TypeArity_18;
              MR_String ml_backend__ml_unify_gen__UnqualTypeName_19;
              MR_Word ml_backend__ml_unify_gen__Target_20;
              MR_Word ml_backend__ml_unify_gen__MLDS_TypeName_21;
              MR_Word ml_backend__ml_unify_gen__Name_22;
              MR_Word ml_backend__ml_unify_gen__Rval0_23;
              MR_Word ml_backend__ml_unify_gen__SupportsInheritance_24;
              MR_Word ml_backend__ml_unify_gen__Var_31;
              MR_Word ml_backend__ml_unify_gen__Var_32;
              MR_Word ml_backend__ml_unify_gen__Var_33;
              MR_Word ml_backend__ml_unify_gen__Var_34;

              {
                hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_unify_gen__ModuleInfo_5, &ml_backend__ml_unify_gen__Globals_15);
              }
              {
                ml_backend__ml_unify_gen__MLDS_ModuleName_16 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_unify_gen__ModuleName_13);
              }
              ml_backend__ml_unify_gen__TypeName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__TypeCtor_10, (MR_Integer) 0)));
              ml_backend__ml_unify_gen__TypeArity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__TypeCtor_10, (MR_Integer) 1)));
              {
                ml_backend__ml_unify_gen__UnqualTypeName_19 = mdbcomp__sym_name__unqualify_name_1_f_0(ml_backend__ml_unify_gen__TypeName_17);
              }
              {
                libs__globals__get_target_2_p_0(ml_backend__ml_unify_gen__Globals_15, &ml_backend__ml_unify_gen__Target_20);
              }
              {
                ml_backend__ml_unify_gen__MLDS_TypeName_21 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(ml_backend__ml_unify_gen__Target_20, ml_backend__ml_unify_gen__MLDS_ModuleName_16, (MR_Integer) 0, ml_backend__ml_unify_gen__UnqualTypeName_19, ml_backend__ml_unify_gen__TypeArity_18);
              }
              {
                ml_backend__ml_unify_gen__Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_31, 1) = ((MR_Box) (ml_backend__ml_unify_gen__CtorName_14));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_31, 2) = ((MR_Box) (ml_backend__ml_unify_gen__CtorArity_12));
              }
              {
                ml_backend__ml_unify_gen__Name_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Name_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Name_22, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_31));
              }
              {
                ml_backend__ml_unify_gen__Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_34, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Name_22));
              }
              {
                ml_backend__ml_unify_gen__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_33, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_TypeName_21));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_33, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_34));
              }
              ml_backend__ml_unify_gen__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_unify_gen__Var_33);
              {
                ml_backend__ml_unify_gen__Rval0_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval0_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval0_23, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_32));
              }
              {
                ml_backend__ml_unify_gen__SupportsInheritance_24 = ml_backend__ml_target_util__target_supports_inheritence_1_f_0(ml_backend__ml_unify_gen__Target_20);
              }
              switch (ml_backend__ml_unify_gen__SupportsInheritance_24) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ml_backend__ml_unify_gen__CastMLDS_Type_25;
                    MR_Word ml_backend__ml_unify_gen__Var_35;
                    MR_Word ml_backend__ml_unify_gen__Var_36;
                    MR_Word ml_backend__ml_unify_gen__Var_39;

                    {
                      ml_backend__ml_unify_gen__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_36, 0) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_ModuleName_16));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_36, 1) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_36, 2) = ((MR_Box) (ml_backend__ml_unify_gen__UnqualTypeName_19));
                    }
                    {
                      ml_backend__ml_unify_gen__Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_35, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_36));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_35, 2) = ((MR_Box) (ml_backend__ml_unify_gen__TypeArity_18));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_35, 3) = ((MR_Box) ((MR_Integer) 0));
                    }
                    {
                      ml_backend__ml_unify_gen__CastMLDS_Type_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastMLDS_Type_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__CastMLDS_Type_25, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_35));
                    }
                    {
                      ml_backend__ml_unify_gen__Var_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Var_39, 0) = ((MR_Box) (ml_backend__ml_unify_gen__CastMLDS_Type_25));
                    }
                    {
                      ml_backend__ml_unify_gen__Rval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_8, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_39));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Rval_8, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Rval0_23));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  ml_backend__ml_unify_gen__Rval_8 = ml_backend__ml_unify_gen__Rval0_23;
                  break;
              }
            }
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "function \140ml_backend.ml_unify_gen.ml_gen_reserved_address\'/3", (MR_String) "unqualified ctor name");
              }
            }
        }
        break;
    }
    return ml_backend__ml_unify_gen__Rval_8;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0_1(
  void * ml_backend__ml_unify_gen__env_ptr_arg)
{
  {
    struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0_s * ml_backend__ml_unify_gen__env_ptr = (struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0_s *) ml_backend__ml_unify_gen__env_ptr_arg;

    MR_builtin_longjmp((ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0_3(
  void * ml_backend__ml_unify_gen__env_ptr_arg)
{
  {
    struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0_s * ml_backend__ml_unify_gen__env_ptr = (struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0_s *) ml_backend__ml_unify_gen__env_ptr_arg;

    (ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__Ctor_75 = ((MR_Word) (ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__conv0_Ctor_75);
    {
      ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0_2(ml_backend__ml_unify_gen__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0_2(
  void * ml_backend__ml_unify_gen__env_ptr_arg)
{
  {
    struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0_s * ml_backend__ml_unify_gen__env_ptr = (struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0_s *) ml_backend__ml_unify_gen__env_ptr_arg;

    {
      MR_Integer ml_backend__ml_unify_gen__Var_54;

      {
        (ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__succeeded = ml_backend__ml_type_gen__ml_uses_secondary_tag_4_p_0((ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__TypeCtor_33, (ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__TagValues_45, (ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__Ctor_75, &ml_backend__ml_unify_gen__Var_54);
      }
      if ((ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__succeeded)
        {
          ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0_1(ml_backend__ml_unify_gen__env_ptr);
        }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0_4(
  void * ml_backend__ml_unify_gen__env_ptr_arg)
{
  {
    struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0_s * ml_backend__ml_unify_gen__env_ptr = (struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0_s *) ml_backend__ml_unify_gen__env_ptr_arg;

    if (MR_builtin_setjmp((ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, &(ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__conv0_Ctor_75, (ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__Ctors_44, ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0_3, ml_backend__ml_unify_gen__env_ptr);
          }
        }
        (ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0_5(
  void * ml_backend__ml_unify_gen__env_ptr_arg)
{
  {
    struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0_s * ml_backend__ml_unify_gen__env_ptr = (struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0_s *) ml_backend__ml_unify_gen__env_ptr_arg;

    MR_builtin_longjmp((ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0_7(
  void * ml_backend__ml_unify_gen__env_ptr_arg)
{
  {
    struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0_s * ml_backend__ml_unify_gen__env_ptr = (struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0_s *) ml_backend__ml_unify_gen__env_ptr_arg;

    (ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__Ctor_76 = ((MR_Word) (ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__conv1_Ctor_76);
    {
      ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0_6(ml_backend__ml_unify_gen__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0_6(
  void * ml_backend__ml_unify_gen__env_ptr_arg)
{
  {
    struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0_s * ml_backend__ml_unify_gen__env_ptr = (struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0_s *) ml_backend__ml_unify_gen__env_ptr_arg;

    {
      MR_Integer ml_backend__ml_unify_gen__Var_55;

      {
        (ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__succeeded = ml_backend__ml_type_gen__ml_uses_secondary_tag_4_p_0((ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__TypeCtor_33, (ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__TagValues_45, (ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__Ctor_76, &ml_backend__ml_unify_gen__Var_55);
      }
      (ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__succeeded = !((ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__succeeded);
      if ((ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__succeeded)
        {
          ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0_5(ml_backend__ml_unify_gen__env_ptr);
        }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0_8(
  void * ml_backend__ml_unify_gen__env_ptr_arg)
{
  {
    struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0_s * ml_backend__ml_unify_gen__env_ptr = (struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0_s *) ml_backend__ml_unify_gen__env_ptr_arg;

    if (MR_builtin_setjmp((ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__commit_1) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, &(ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__conv1_Ctor_76, (ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__Ctors_44, ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0_7, ml_backend__ml_unify_gen__env_ptr);
          }
        }
        (ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ml_backend__ml_unify_gen__env_ptr)->ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__succeeded = MR_TRUE;
  }
}

MR_Word MR_CALL 
ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0(
  MR_Word ml_backend__ml_unify_gen__ModuleInfo_6,
  MR_Integer ml_backend__ml_unify_gen__PrimaryTagVal_7,
  MR_Word ml_backend__ml_unify_gen__VarType_8,
  MR_Word ml_backend__ml_unify_gen__Rval_9)
{
  {
    struct ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0_s ml_backend__ml_unify_gen__env;

    {
      MR_Word ml_backend__ml_unify_gen__SecondaryTagField_10;
      MR_Word ml_backend__ml_unify_gen__MLDS_VarType_11;
      MR_Word ml_backend__ml_unify_gen__Globals_12;
      MR_Word ml_backend__ml_unify_gen__HighLevelData_13;

      {
        ml_backend__ml_unify_gen__MLDS_VarType_11 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_6, ml_backend__ml_unify_gen__VarType_8);
      }
      {
        hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_unify_gen__ModuleInfo_6, &ml_backend__ml_unify_gen__Globals_12);
      }
      {
        libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_unify_gen__Globals_12, (MR_Integer) 264, &ml_backend__ml_unify_gen__HighLevelData_13);
      }
      switch (ml_backend__ml_unify_gen__HighLevelData_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ml_backend__ml_unify_gen__Var_21;
            MR_Word ml_backend__ml_unify_gen__Var_22;
            MR_Word ml_backend__ml_unify_gen__Var_23;

            {
              ml_backend__ml_unify_gen__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_23, 0) = ((MR_Box) (ml_backend__ml_unify_gen__PrimaryTagVal_7));
            }
            {
              ml_backend__ml_unify_gen__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_22, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Var_23));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_22, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_9));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_22, 2) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_4[3]));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_22, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_22, 4) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_VarType_11));
            }
            {
              ml_backend__ml_unify_gen__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_21, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Var_22));
            }
            {
              ml_backend__ml_unify_gen__SecondaryTagField_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__SecondaryTagField_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__SecondaryTagField_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_scalar_common_4[1])));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__SecondaryTagField_10, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_21));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__ml_unify_gen__FieldId_14;
            MR_Word ml_backend__ml_unify_gen__Var_16;
            MR_Word ml_backend__ml_unify_gen__Var_17;
            MR_Word ml_backend__ml_unify_gen__QualifiedTypeName_34;
            MR_Integer ml_backend__ml_unify_gen__TypeArity_35;
            MR_Word ml_backend__ml_unify_gen__MLDS_Module_36;
            MR_Word ml_backend__ml_unify_gen__TypeQualKind_37;
            MR_String ml_backend__ml_unify_gen__TypeName_38;
            MR_Word ml_backend__ml_unify_gen__Globals_39;
            MR_Word ml_backend__ml_unify_gen__Target_40;
            MR_Word ml_backend__ml_unify_gen__TypeTable_41;
            MR_Word ml_backend__ml_unify_gen__TypeDefn_42;
            MR_Word ml_backend__ml_unify_gen__TypeDefnBody_43;
            MR_Word ml_backend__ml_unify_gen__ClassQualifier_56;
            MR_Word ml_backend__ml_unify_gen__ClassQualKind_57;
            MR_String ml_backend__ml_unify_gen__ClassName_58;
            MR_Integer ml_backend__ml_unify_gen__ClassArity_59;
            MR_Word ml_backend__ml_unify_gen__QualClassName_64;
            MR_Word ml_backend__ml_unify_gen__ClassPtrType_65;
            MR_Word ml_backend__ml_unify_gen__FieldQualifier_66;
            MR_Word ml_backend__ml_unify_gen__QualifiedFieldName_67;
            MR_Word ml_backend__ml_unify_gen__Var_72;

            {
              parse_tree__prog_type__type_to_ctor_det_2_p_0(ml_backend__ml_unify_gen__VarType_8, &(ml_backend__ml_unify_gen__env).ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__TypeCtor_33);
            }
            {
              ml_backend__ml_type_gen__ml_gen_type_name_3_p_0((ml_backend__ml_unify_gen__env).ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__TypeCtor_33, &ml_backend__ml_unify_gen__QualifiedTypeName_34, &ml_backend__ml_unify_gen__TypeArity_35);
            }
            ml_backend__ml_unify_gen__MLDS_Module_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualifiedTypeName_34, (MR_Integer) 0)));
            ml_backend__ml_unify_gen__TypeQualKind_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualifiedTypeName_34, (MR_Integer) 1)));
            ml_backend__ml_unify_gen__TypeName_38 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualifiedTypeName_34, (MR_Integer) 2)));
            {
              hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_unify_gen__ModuleInfo_6, &ml_backend__ml_unify_gen__Globals_39);
            }
            {
              libs__globals__get_target_2_p_0(ml_backend__ml_unify_gen__Globals_39, &ml_backend__ml_unify_gen__Target_40);
            }
            {
              hlds__hlds_module__module_info_get_type_table_2_p_0(ml_backend__ml_unify_gen__ModuleInfo_6, &ml_backend__ml_unify_gen__TypeTable_41);
            }
            {
              hlds__hlds_data__lookup_type_ctor_defn_3_p_0(ml_backend__ml_unify_gen__TypeTable_41, (ml_backend__ml_unify_gen__env).ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__TypeCtor_33, &ml_backend__ml_unify_gen__TypeDefn_42);
            }
            {
              hlds__hlds_data__get_type_defn_body_2_p_0(ml_backend__ml_unify_gen__TypeDefn_42, &ml_backend__ml_unify_gen__TypeDefnBody_43);
            }
            switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__TypeDefnBody_43)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "function \140ml_backend.ml_unify_gen.ml_gen_hl_tag_field_id\'/2", (MR_String) "non-du type");
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ml_backend__ml_unify_gen__Var_46;
                  MR_Word ml_backend__ml_unify_gen__Var_47;
                  MR_Word ml_backend__ml_unify_gen__Var_48;
                  MR_Word ml_backend__ml_unify_gen__Var_49;
                  MR_Word ml_backend__ml_unify_gen___ReservedTag_50;
                  MR_Word ml_backend__ml_unify_gen__Var_51;
                  MR_Word ml_backend__ml_unify_gen__Var_52;

                  (ml_backend__ml_unify_gen__env).ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__Ctors_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__TypeDefnBody_43, (MR_Integer) 0)));
                  (ml_backend__ml_unify_gen__env).ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__TagValues_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__TypeDefnBody_43, (MR_Integer) 1)));
                  ml_backend__ml_unify_gen__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__TypeDefnBody_43, (MR_Integer) 2)));
                  ml_backend__ml_unify_gen__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__TypeDefnBody_43, (MR_Integer) 3)));
                  ml_backend__ml_unify_gen__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__TypeDefnBody_43, (MR_Integer) 4)));
                  ml_backend__ml_unify_gen__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__TypeDefnBody_43, (MR_Integer) 5)));
                  ml_backend__ml_unify_gen___ReservedTag_50 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__TypeDefnBody_43, (MR_Integer) 6)))) & (MR_Integer) 1);
                  ml_backend__ml_unify_gen__Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__TypeDefnBody_43, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  ml_backend__ml_unify_gen__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__TypeDefnBody_43, (MR_Integer) 7)));
                  {
                    ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0_4(&ml_backend__ml_unify_gen__env);
                  }
                  if ((ml_backend__ml_unify_gen__env).ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__succeeded)
                    {
                      ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0_8(&ml_backend__ml_unify_gen__env);
                    }
                  if ((ml_backend__ml_unify_gen__env).ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_5_f_0_env_0__succeeded)
                    {
                      {
                        ml_backend__ml_unify_gen__ClassQualifier_56 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(ml_backend__ml_unify_gen__Target_40, ml_backend__ml_unify_gen__MLDS_Module_36, (MR_Integer) 0, ml_backend__ml_unify_gen__TypeName_38, ml_backend__ml_unify_gen__TypeArity_35);
                      }
                      ml_backend__ml_unify_gen__ClassQualKind_57 = ml_backend__ml_unify_gen__TypeQualKind_37;
                      ml_backend__ml_unify_gen__ClassName_58 = (MR_String) "tag_type";
                      ml_backend__ml_unify_gen__ClassArity_59 = (MR_Integer) 0;
                    }
                  else
                    {
                      ml_backend__ml_unify_gen__ClassQualifier_56 = ml_backend__ml_unify_gen__MLDS_Module_36;
                      ml_backend__ml_unify_gen__ClassQualKind_57 = (MR_Integer) 0;
                      ml_backend__ml_unify_gen__ClassName_58 = ml_backend__ml_unify_gen__TypeName_38;
                      ml_backend__ml_unify_gen__ClassArity_59 = ml_backend__ml_unify_gen__TypeArity_35;
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "function \140ml_backend.ml_unify_gen.ml_gen_hl_tag_field_id\'/2", (MR_String) "non-du type");
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "function \140ml_backend.ml_unify_gen.ml_gen_hl_tag_field_id\'/2", (MR_String) "non-du type");
                  }
                }
                break;
            }
            {
              ml_backend__ml_unify_gen__QualClassName_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualClassName_64, 0) = ((MR_Box) (ml_backend__ml_unify_gen__ClassQualifier_56));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualClassName_64, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ClassQualKind_57));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualClassName_64, 2) = ((MR_Box) (ml_backend__ml_unify_gen__ClassName_58));
            }
            {
              ml_backend__ml_unify_gen__Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_72, 1) = ((MR_Box) (ml_backend__ml_unify_gen__QualClassName_64));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_72, 2) = ((MR_Box) (ml_backend__ml_unify_gen__ClassArity_59));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_72, 3) = ((MR_Box) ((MR_Integer) 0));
            }
            {
              ml_backend__ml_unify_gen__ClassPtrType_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ClassPtrType_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__ClassPtrType_65, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_72));
            }
            {
              ml_backend__ml_unify_gen__FieldQualifier_66 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(ml_backend__ml_unify_gen__Target_40, ml_backend__ml_unify_gen__ClassQualifier_56, ml_backend__ml_unify_gen__ClassQualKind_57, ml_backend__ml_unify_gen__ClassName_58, ml_backend__ml_unify_gen__ClassArity_59);
            }
            {
              ml_backend__ml_unify_gen__QualifiedFieldName_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualifiedFieldName_67, 0) = ((MR_Box) (ml_backend__ml_unify_gen__FieldQualifier_66));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualifiedFieldName_67, 1) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__QualifiedFieldName_67, 2) = ((MR_Box) ((MR_String) "data_tag"));
            }
            {
              ml_backend__ml_unify_gen__FieldId_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__FieldId_14, 0) = ((MR_Box) (ml_backend__ml_unify_gen__QualifiedFieldName_67));
              MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__FieldId_14, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ClassPtrType_65));
            }
            {
              ml_backend__ml_unify_gen__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_17, 0) = ((MR_Box) (ml_backend__ml_unify_gen__PrimaryTagVal_7));
            }
            {
              ml_backend__ml_unify_gen__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_16, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Var_17));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_16, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Rval_9));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_16, 2) = ((MR_Box) (ml_backend__ml_unify_gen__FieldId_14));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_16, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
              MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_16, 4) = ((MR_Box) (ml_backend__ml_unify_gen__MLDS_VarType_11));
            }
            {
              ml_backend__ml_unify_gen__SecondaryTagField_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__SecondaryTagField_10, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Var_16));
            }
          }
          break;
      }
      return ml_backend__ml_unify_gen__SecondaryTagField_10;
    }
  }
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_known_tag_test_5_p_0(
  MR_Word ml_backend__ml_unify_gen__Var_6,
  MR_Word ml_backend__ml_unify_gen__TaggedConsId_7,
  MR_Word * ml_backend__ml_unify_gen__TagTestExpression_8,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_15,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_16)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__VarLval_10;
    MR_Word ml_backend__ml_unify_gen__Type_11;
    MR_Word ml_backend__ml_unify_gen__Tag_13;
    MR_Word ml_backend__ml_unify_gen__ModuleInfo_14;
    MR_Word ml_backend__ml_unify_gen__Var_17;
    MR_Word ml_backend__ml_unify_gen___ConsId_12;

    {
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_15, ml_backend__ml_unify_gen__Var_6, &ml_backend__ml_unify_gen__VarLval_10);
    }
    {
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_15, ml_backend__ml_unify_gen__Var_6, &ml_backend__ml_unify_gen__Type_11);
    }
    ml_backend__ml_unify_gen___ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__TaggedConsId_7, (MR_Integer) 0)));
    ml_backend__ml_unify_gen__Tag_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__TaggedConsId_7, (MR_Integer) 1)));
    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_15, &ml_backend__ml_unify_gen__ModuleInfo_14);
    }
    {
      ml_backend__ml_unify_gen__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_17, 0) = ((MR_Box) (ml_backend__ml_unify_gen__VarLval_10));
    }
    {
      *ml_backend__ml_unify_gen__TagTestExpression_8 = ml_backend__ml_unify_gen__ml_gen_tag_test_rval_4_f_0(ml_backend__ml_unify_gen__Tag_13, ml_backend__ml_unify_gen__Type_11, ml_backend__ml_unify_gen__ModuleInfo_14, ml_backend__ml_unify_gen__Var_17);
    }
    *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_16 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_15;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_tag_test_5_p_0(
  MR_Word ml_backend__ml_unify_gen__Var_6,
  MR_Word ml_backend__ml_unify_gen__ConsId_7,
  MR_Word * ml_backend__ml_unify_gen__TagTestExpression_8,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_14,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_15)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__VarLval_10;
    MR_Word ml_backend__ml_unify_gen__Type_11;
    MR_Word ml_backend__ml_unify_gen__Tag_12;
    MR_Word ml_backend__ml_unify_gen__ModuleInfo_13;
    MR_Word ml_backend__ml_unify_gen__Var_16;
    MR_Word ml_backend__ml_unify_gen__ModuleInfo_20;

    {
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_14, ml_backend__ml_unify_gen__Var_6, &ml_backend__ml_unify_gen__VarLval_10);
    }
    {
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_14, ml_backend__ml_unify_gen__Var_6, &ml_backend__ml_unify_gen__Type_11);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_14, &ml_backend__ml_unify_gen__ModuleInfo_20);
    }
    {
      ml_backend__ml_unify_gen__Tag_12 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_20, ml_backend__ml_unify_gen__ConsId_7);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_14, &ml_backend__ml_unify_gen__ModuleInfo_13);
    }
    {
      ml_backend__ml_unify_gen__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_16, 0) = ((MR_Box) (ml_backend__ml_unify_gen__VarLval_10));
    }
    {
      *ml_backend__ml_unify_gen__TagTestExpression_8 = ml_backend__ml_unify_gen__ml_gen_tag_test_rval_4_f_0(ml_backend__ml_unify_gen__Tag_12, ml_backend__ml_unify_gen__Type_11, ml_backend__ml_unify_gen__ModuleInfo_13, ml_backend__ml_unify_gen__Var_16);
    }
    *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_15 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_14;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_cons_id_to_tag_3_p_0(
  MR_Word ml_backend__ml_unify_gen__Info_4,
  MR_Word ml_backend__ml_unify_gen__ConsId_5,
  MR_Word * ml_backend__ml_unify_gen__Tag_6)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Word ml_backend__ml_unify_gen__ModuleInfo_7;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_unify_gen__Info_4, &ml_backend__ml_unify_gen__ModuleInfo_7);
    }
    {
      *ml_backend__ml_unify_gen__Tag_6 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_7, ml_backend__ml_unify_gen__ConsId_5);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_4(
  MR_Box ml_backend__ml_unify_gen__closure_arg)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;

    {
      ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__205__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_3(
  MR_Box ml_backend__ml_unify_gen__closure_arg)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;

    {
      ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__236__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_2(
  MR_Box ml_backend__ml_unify_gen__closure_arg)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;

    {
      ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__223__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_1(
  MR_Box ml_backend__ml_unify_gen__closure_arg)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;
    MR_Box ml_backend__ml_unify_gen__closure = ml_backend__ml_unify_gen__closure_arg;

    {
      ml_backend__ml_unify_gen__succeeded = ml_backend__ml_unify_gen__IntroducedFrom__pred__ml_gen_unification__172__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_unify_gen__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen__ml_gen_unification_6_p_0(
  MR_Word ml_backend__ml_unify_gen__Unification_7,
  MR_Word ml_backend__ml_unify_gen__CodeModel_8,
  MR_Word ml_backend__ml_unify_gen__Context_9,
  MR_Word * ml_backend__ml_unify_gen__Statements_10,
  MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_49,
  MR_Word * ml_backend__ml_unify_gen__STATE_VARIABLE_Info_50)
{
  {
    MR_bool ml_backend__ml_unify_gen__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_unify_gen__Unification_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_unify_gen__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Unification_7, (MR_Integer) 0)));
          MR_Word ml_backend__ml_unify_gen__ConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Unification_7, (MR_Integer) 1)));
          MR_Word ml_backend__ml_unify_gen__Args_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Unification_7, (MR_Integer) 2)));
          MR_Word ml_backend__ml_unify_gen__ArgModes_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Unification_7, (MR_Integer) 3)));
          MR_Word ml_backend__ml_unify_gen__HowToConstruct_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Unification_7, (MR_Integer) 4)));
          MR_Word ml_backend__ml_unify_gen__SubInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Unification_7, (MR_Integer) 6)));
          MR_Word ml_backend__ml_unify_gen__TakeAddr_34;
          MR_Word ml_backend__ml_unify_gen__Var_64;
          MR_Word ml_backend__ml_unify_gen___CellIsUnique_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Unification_7, (MR_Integer) 5)));

          {
            ml_backend__ml_unify_gen__Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_64, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_64, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_2));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_64, 3) = ((MR_Box) (ml_backend__ml_unify_gen__CodeModel_8));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_64, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            mercury__require__expect_4_p_0(ml_backend__ml_unify_gen__Var_64, (MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/6", (MR_String) "construct not det");
          }
          if ((ml_backend__ml_unify_gen__SubInfo_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            ml_backend__ml_unify_gen__TakeAddr_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            {
              MR_Word ml_backend__ml_unify_gen__MaybeTakeAddr_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__SubInfo_33, (MR_Integer) 0)));
              MR_Word ml_backend__ml_unify_gen__MaybeSizeProfInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__SubInfo_33, (MR_Integer) 1)));
              MR_Word ml_backend__ml_unify_gen__Var_69;

              if ((ml_backend__ml_unify_gen__MaybeTakeAddr_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ml_backend__ml_unify_gen__TakeAddr_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                ml_backend__ml_unify_gen__TakeAddr_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__MaybeTakeAddr_35, (MR_Integer) 0)));
              {
                ml_backend__ml_unify_gen__Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_69, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_69, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_3));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_69, 3) = ((MR_Box) (ml_backend__ml_unify_gen__MaybeSizeProfInfo_36));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_69, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                mercury__require__expect_4_p_0(ml_backend__ml_unify_gen__Var_69, (MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/6", (MR_String) "term size profiling not yet supported");
              }
            }
          {
            ml_backend__ml_unify_gen__ml_gen_construct_10_p_0(ml_backend__ml_unify_gen__Var_27, ml_backend__ml_unify_gen__ConsId_28, ml_backend__ml_unify_gen__Args_29, ml_backend__ml_unify_gen__ArgModes_30, ml_backend__ml_unify_gen__TakeAddr_34, ml_backend__ml_unify_gen__HowToConstruct_31, ml_backend__ml_unify_gen__Context_9, ml_backend__ml_unify_gen__Statements_10, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_49, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_50);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_unify_gen__CanFail_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Unification_7, (MR_Integer) 4)));
          MR_Word ml_backend__ml_unify_gen__CanCGC_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Unification_7, (MR_Integer) 5)));
          MR_Word ml_backend__ml_unify_gen__ExpectedCodeModel_39;
          MR_Word ml_backend__ml_unify_gen__Unif_Statements_40;
          MR_Word ml_backend__ml_unify_gen__Statements0_45;
          MR_Word ml_backend__ml_unify_gen__STATE_VARIABLE_Info_55_55;
          MR_Word ml_backend__ml_unify_gen__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Unification_7, (MR_Integer) 0)));
          MR_Word ml_backend__ml_unify_gen__ConsId_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Unification_7, (MR_Integer) 1)));
          MR_Word ml_backend__ml_unify_gen__Args_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Unification_7, (MR_Integer) 2)));
          MR_Word ml_backend__ml_unify_gen__ArgModes_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Unification_7, (MR_Integer) 3)));

          switch (ml_backend__ml_unify_gen__CanFail_37) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ml_backend__ml_unify_gen__ExpectedCodeModel_39 = (MR_Integer) 1;
                {
                  ml_backend__ml_unify_gen__ml_gen_semi_deconstruct_8_p_0(ml_backend__ml_unify_gen__Var_95, ml_backend__ml_unify_gen__ConsId_96, ml_backend__ml_unify_gen__Args_97, ml_backend__ml_unify_gen__ArgModes_98, ml_backend__ml_unify_gen__Context_9, &ml_backend__ml_unify_gen__Unif_Statements_40, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_49, &ml_backend__ml_unify_gen__STATE_VARIABLE_Info_55_55);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                ml_backend__ml_unify_gen__ExpectedCodeModel_39 = (MR_Integer) 0;
                {
                  ml_backend__ml_unify_gen__ml_gen_det_deconstruct_8_p_0(ml_backend__ml_unify_gen__Var_95, ml_backend__ml_unify_gen__ConsId_96, ml_backend__ml_unify_gen__Args_97, ml_backend__ml_unify_gen__ArgModes_98, ml_backend__ml_unify_gen__Context_9, &ml_backend__ml_unify_gen__Unif_Statements_40, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_49, &ml_backend__ml_unify_gen__STATE_VARIABLE_Info_55_55);
                }
              }
              break;
          }
          switch (ml_backend__ml_unify_gen__CanCGC_38) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__ml_unify_gen__VarLval_41;
                MR_Word ml_backend__ml_unify_gen__Delete_42;
                MR_Word ml_backend__ml_unify_gen__Stmt_43;
                MR_Word ml_backend__ml_unify_gen__CGC_Statement_44;
                MR_Word ml_backend__ml_unify_gen__Var_56;
                MR_Word ml_backend__ml_unify_gen__Var_59;
                MR_Word ml_backend__ml_unify_gen__Var_60;
                MR_Word ml_backend__ml_unify_gen__Var_61;

                {
                  ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_55_55, ml_backend__ml_unify_gen__Var_95, &ml_backend__ml_unify_gen__VarLval_41);
                }
                {
                  ml_backend__ml_unify_gen__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_59, 0) = ((MR_Box) (ml_backend__ml_unify_gen__VarLval_41));
                }
                {
                  ml_backend__ml_unify_gen__Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_scalar_common_4[0])));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Var_56, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_59));
                }
                {
                  ml_backend__ml_unify_gen__Delete_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Delete_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Delete_42, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_56));
                }
                {
                  ml_backend__ml_unify_gen__Stmt_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Stmt_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Stmt_43, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Delete_42));
                }
                {
                  ml_backend__ml_unify_gen__Var_60 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_unify_gen__Context_9);
                }
                {
                  ml_backend__ml_unify_gen__CGC_Statement_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__CGC_Statement_44, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Stmt_43));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__CGC_Statement_44, 1) = ((MR_Box) (ml_backend__ml_unify_gen__Var_60));
                }
                {
                  ml_backend__ml_unify_gen__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_61, 0) = ((MR_Box) (ml_backend__ml_unify_gen__CGC_Statement_44));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  ml_backend__ml_unify_gen__Statements0_45 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_unify_gen__Unif_Statements_40, ml_backend__ml_unify_gen__Var_61);
                }
              }
              break;
            case (MR_Integer) 1:
              ml_backend__ml_unify_gen__Statements0_45 = ml_backend__ml_unify_gen__Unif_Statements_40;
              break;
          }
          {
            ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_p_0(ml_backend__ml_unify_gen__CodeModel_8, ml_backend__ml_unify_gen__ExpectedCodeModel_39, ml_backend__ml_unify_gen__Context_9, ml_backend__ml_unify_gen__Statements0_45, ml_backend__ml_unify_gen__Statements_10, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_55_55, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_50);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_unify_gen__TargetVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Unification_7, (MR_Integer) 0)));
          MR_Word ml_backend__ml_unify_gen__SourceVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Unification_7, (MR_Integer) 1)));
          MR_Word ml_backend__ml_unify_gen__Type_14;
          MR_Word ml_backend__ml_unify_gen__ModuleInfo_15;
          MR_Word ml_backend__ml_unify_gen__IsDummyType_16;
          MR_Word ml_backend__ml_unify_gen__Var_85;
          MR_Word ml_backend__ml_unify_gen__GroundTerm_20;

          {
            ml_backend__ml_unify_gen__Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_85, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_85, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_85, 3) = ((MR_Box) (ml_backend__ml_unify_gen__CodeModel_8));
            MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_85, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            mercury__require__expect_4_p_0(ml_backend__ml_unify_gen__Var_85, (MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/6", (MR_String) "assign not det");
          }
          {
            ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_49, ml_backend__ml_unify_gen__TargetVar_12, &ml_backend__ml_unify_gen__Type_14);
          }
          {
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_49, &ml_backend__ml_unify_gen__ModuleInfo_15);
          }
          {
            ml_backend__ml_unify_gen__IsDummyType_16 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_unify_gen__ModuleInfo_15, ml_backend__ml_unify_gen__Type_14);
          }
          switch (ml_backend__ml_unify_gen__IsDummyType_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *ml_backend__ml_unify_gen__Statements_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__ml_unify_gen__TargetLval_17;
                MR_Word ml_backend__ml_unify_gen__SourceLval_18;
                MR_Word ml_backend__ml_unify_gen__Statement_19;
                MR_Word ml_backend__ml_unify_gen__Var_90;

                {
                  ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_49, ml_backend__ml_unify_gen__TargetVar_12, &ml_backend__ml_unify_gen__TargetLval_17);
                }
                {
                  ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_49, ml_backend__ml_unify_gen__SourceVar_13, &ml_backend__ml_unify_gen__SourceLval_18);
                }
                {
                  ml_backend__ml_unify_gen__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_90, 0) = ((MR_Box) (ml_backend__ml_unify_gen__SourceLval_18));
                }
                {
                  ml_backend__ml_unify_gen__Statement_19 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_unify_gen__TargetLval_17, ml_backend__ml_unify_gen__Var_90, ml_backend__ml_unify_gen__Context_9);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ml_backend__ml_unify_gen__Statements_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Statement_19));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
              break;
          }
          {
            ml_backend__ml_unify_gen__succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_49, ml_backend__ml_unify_gen__SourceVar_13, &ml_backend__ml_unify_gen__GroundTerm_20);
          }
          if (ml_backend__ml_unify_gen__succeeded)
            {
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(ml_backend__ml_unify_gen__TargetVar_12, ml_backend__ml_unify_gen__GroundTerm_20, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_49, ml_backend__ml_unify_gen__STATE_VARIABLE_Info_50);
            }
          else
            *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_50 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_49;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Unification_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_unify_gen__VarA_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Unification_7, (MR_Integer) 1)));
              MR_Word ml_backend__ml_unify_gen__VarB_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Unification_7, (MR_Integer) 2)));
              MR_Word ml_backend__ml_unify_gen__EqualityOp_23;
              MR_Word ml_backend__ml_unify_gen__VarALval_24;
              MR_Word ml_backend__ml_unify_gen__VarBLval_25;
              MR_Word ml_backend__ml_unify_gen__Test_26;
              MR_Word ml_backend__ml_unify_gen__Var_75;
              MR_Word ml_backend__ml_unify_gen__Var_82;
              MR_Word ml_backend__ml_unify_gen__Var_83;
              MR_Word ml_backend__ml_unify_gen__Type_93;
              MR_Word ml_backend__ml_unify_gen__Statement_94;
              MR_Word ml_backend__ml_unify_gen__Var_80;

              {
                ml_backend__ml_unify_gen__Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_75, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_scalar_common_3[0]));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_75, 1) = ((MR_Box) (ml_backend__ml_unify_gen__ml_gen_unification_6_p_0_4));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_75, 3) = ((MR_Box) (ml_backend__ml_unify_gen__CodeModel_8));
                MR_hl_field(MR_mktag(0), ml_backend__ml_unify_gen__Var_75, 4) = ((MR_Box) ((MR_Integer) 1));
              }
              {
                mercury__require__expect_4_p_0(ml_backend__ml_unify_gen__Var_75, (MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/6", (MR_String) "simple_test not semidet");
              }
              {
                ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_49, ml_backend__ml_unify_gen__VarA_21, &ml_backend__ml_unify_gen__Type_93);
              }
              ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__Type_93)) == (MR_mktag((MR_Integer) 2)));
              if (ml_backend__ml_unify_gen__succeeded)
                {
                  ml_backend__ml_unify_gen__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Type_93, (MR_Integer) 0)));
                  ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_80 == (MR_Integer) 3);
                }
              if (ml_backend__ml_unify_gen__succeeded)
                ml_backend__ml_unify_gen__EqualityOp_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16));
              else
                {
                  MR_Word ml_backend__ml_unify_gen__Var_81;

                  ml_backend__ml_unify_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_unify_gen__Type_93)) == (MR_mktag((MR_Integer) 2)));
                  if (ml_backend__ml_unify_gen__succeeded)
                    {
                      ml_backend__ml_unify_gen__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_unify_gen__Type_93, (MR_Integer) 0)));
                      ml_backend__ml_unify_gen__succeeded = (ml_backend__ml_unify_gen__Var_81 == (MR_Integer) 2);
                    }
                  if (ml_backend__ml_unify_gen__succeeded)
                    ml_backend__ml_unify_gen__EqualityOp_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 48));
                  else
                    ml_backend__ml_unify_gen__EqualityOp_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12));
                }
              {
                ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_49, ml_backend__ml_unify_gen__VarA_21, &ml_backend__ml_unify_gen__VarALval_24);
              }
              {
                ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_49, ml_backend__ml_unify_gen__VarB_22, &ml_backend__ml_unify_gen__VarBLval_25);
              }
              {
                ml_backend__ml_unify_gen__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_82, 0) = ((MR_Box) (ml_backend__ml_unify_gen__VarALval_24));
              }
              {
                ml_backend__ml_unify_gen__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_unify_gen__Var_83, 0) = ((MR_Box) (ml_backend__ml_unify_gen__VarBLval_25));
              }
              {
                ml_backend__ml_unify_gen__Test_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Test_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Test_26, 1) = ((MR_Box) (ml_backend__ml_unify_gen__EqualityOp_23));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Test_26, 2) = ((MR_Box) (ml_backend__ml_unify_gen__Var_82));
                MR_hl_field(MR_mktag(3), ml_backend__ml_unify_gen__Test_26, 3) = ((MR_Box) (ml_backend__ml_unify_gen__Var_83));
              }
              {
                ml_backend__ml_code_util__ml_gen_set_success_4_p_0(ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_49, ml_backend__ml_unify_gen__Test_26, ml_backend__ml_unify_gen__Context_9, &ml_backend__ml_unify_gen__Statement_94);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_unify_gen__Statements_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_unify_gen__Statement_94));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              *ml_backend__ml_unify_gen__STATE_VARIABLE_Info_50 = ml_backend__ml_unify_gen__STATE_VARIABLE_Info_0_49;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_unify_gen", (MR_String) "predicate \140ml_backend.ml_unify_gen.ml_gen_unification\'/6", (MR_String) "complicated unify");
                return;
              }
            }
            break;
        }
        break;
    }
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

/* :- end_module ml_backend.ml_unify_gen. */
