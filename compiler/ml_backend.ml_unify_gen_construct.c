/*
** Automatically generated from `ml_unify_gen_construct.m'
** by the Mercury compiler,
** version rotd-2018-07-11
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


// :- module ml_backend.ml_unify_gen_construct.
// :- implementation.

/*
INIT mercury__ml_backend__ml_unify_gen_construct__init
ENDINIT
*/

#include "ml_backend.ml_unify_gen_construct.mih"


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
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
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
#include "uint.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "ml_backend.ml_closure_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_type_gen.mih"
#include "ml_backend.ml_unify_gen_deconstruct.mih"
#include "ml_backend.ml_unify_gen_util.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen_construct__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_util__pti_arg_type_and_width_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen_construct__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen_construct__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen_construct__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_util__pti_arg_type_and_width_1__plain_hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__field_types_ml_const_struct_info_0_0[3];

static const MR_ConstString ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__field_names_ml_const_struct_info_0_0[3];

static const MR_DuArgLocn ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__field_locns_ml_const_struct_info_0_0[3];

static const MR_DuFunctorDesc ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_functor_desc_ml_const_struct_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_stag_ordered_ml_const_struct_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_ptag_ordered_ml_const_struct_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_name_ordered_ml_const_struct_info_0[1];

static const MR_Integer ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__functor_number_map_ml_const_struct_info_0[1];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen_construct__maybe__ti_maybe_1ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0;

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__field_types_mlds_rval_type_and_width_0_0[4];

static const MR_DuFunctorDesc ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_functor_desc_mlds_rval_type_and_width_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_stag_ordered_mlds_rval_type_and_width_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_ptag_ordered_mlds_rval_type_and_width_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_name_ordered_mlds_rval_type_and_width_0[1];

static const MR_Integer ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__functor_number_map_mlds_rval_type_and_width_0[1];

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__construct_static_ground_term__1834__1_1_f_0(
  MR_Word LambdaHeadVar__1_43);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_const_static_args_widths__1616__1_1_f_0(
  MR_Word LambdaHeadVar__1_16);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_97_114_103_115_95_119_105_100_116_104_115_95_95_49_54_49_54_95_95_49_95_95_91_49_93_95_48_1_f_0(void);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_struct__1517__1_2_p_0(
  MR_Word AddedBy_35,
  MR_Word HeadVar__2_93);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_struct__1500__1_2_p_0(
  MR_Word AddedBy_35,
  MR_Word HeadVar__2_97);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__1199__6_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_224);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__1271__1_2_p_0(
  MR_Word AddedBy_78,
  MR_Word HeadVar__2_105);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__1255__1_2_p_0(
  MR_Word AddedBy_78,
  MR_Word HeadVar__2_109);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__1199__5_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_211);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__1199__4_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_200);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__1199__3_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_189);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__1199__2_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_178);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__1199__1_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_138);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_extra_arg_assigns__949__1_2_p_0(
  MR_Word HighLevelData_28,
  MR_Word HeadVar__2_41);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_dynamic_construct_args__878__1_2_p_0(
  MR_Word ArgWidth_57,
  MR_Word HeadVar__2_109);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__812__1_2_p_0(
  MR_Word Width_23,
  MR_Word HeadVar__2_30);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__630__1_2_p_0(
  MR_Word PrimaryTag_43,
  MR_Word LambdaHeadVar__1_82);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__612__1_3_p_0(
  MR_Word STATE_VARIABLE_Info_0_74,
  MR_Word LambdaHeadVar__1_79,
  MR_Word * LambdaHeadVar__2_80);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_statically__574__1_1_f_0(
  MR_Word LambdaHeadVar__1_49);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_dynamically__515__1_1_f_0(
  MR_Word LambdaHeadVar__1_67);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_construct_compound__348__1_2_p_0(
  MR_Word AddedBy_33,
  MR_Word HeadVar__2_46);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_construct_compound__333__1_2_p_0(
  MR_Word AddedBy_33,
  MR_Word HeadVar__2_50);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object__430__1_2_p_0(
  MR_Word TakeAddr_24,
  MR_Word HeadVar__2_47);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object__418__1_2_p_0(
  MR_Word ExplicitSectag_19,
  MR_Word HeadVar__2_40);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__288__1_2_p_0(
  MR_Word TakeAddr_16,
  MR_Word HeadVar__2_116);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__220__1_2_p_0(
  MR_Word TakeAddr_16,
  MR_Word HeadVar__2_123);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__144__1_2_p_0(
  MR_Word ArgVars_14,
  MR_Word HeadVar__2_137);

static void MR_CALL 
ml_backend__ml_unify_gen_construct____Compare____ml_const_struct_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct____Unify____ml_const_struct_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__is_apw_full_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_tagword_arg_4_p_0(
  MR_Word Info_5,
  MR_Word ArgTypeWidth_6,
  MR_Word STATE_VARIABLE_RevOrRvals_0_36,
  MR_Word * STATE_VARIABLE_RevOrRvals_37);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0(
  MR_Word Info_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ConstStructMap_0_77,
  MR_Word * STATE_VARIABLE_ConstStructMap_78,
  MR_Word STATE_VARIABLE_GlobalData_0_79,
  MR_Word * STATE_VARIABLE_GlobalData_80);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_arg_7_p_0(
  MR_Word Info_8,
  MR_Word ConstStructMap_9,
  MR_Word ConstArg_10,
  MR_Word PosWidth_11,
  MR_Word * RvalTypeWidth_12,
  MR_Word STATE_VARIABLE_GlobalData_0_25,
  MR_Word * STATE_VARIABLE_GlobalData_26);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_args_widths_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_args_widths_5_p_0(
  MR_Word Info_6,
  MR_Word VarType_7,
  MR_Word ConsId_8,
  MR_Word Args_9,
  MR_Word * ArgsTypesWidths_10);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_13_p_0(
  MR_Word Info_14,
  MR_Integer ConstNum_15,
  MR_Word VarType_16,
  MR_Word MLDS_Type_17,
  MR_Word ConsId_18,
  MR_Word ConsTag_19,
  MR_Word Ptag_20,
  MR_Word ExtraRvals_21,
  MR_Word Args_22,
  MR_Word STATE_VARIABLE_ConstStructMap_0_32,
  MR_Word * STATE_VARIABLE_ConstStructMap_33,
  MR_Word STATE_VARIABLE_GlobalData_0_34,
  MR_Word * STATE_VARIABLE_GlobalData_35);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_args_6_p_0(
  MR_Word Info_1,
  MR_Word ConstStructMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_arg_tag_4_p_0(
  MR_Word ConsTag_5,
  MR_Word Type_6,
  MR_Word MLDS_Type_7,
  MR_Word * Rval_8);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__construct_ground_term_tagword_initializer_lld_5_p_0(
  MR_Word ArgVarTypeWidth_6,
  MR_Word STATE_VARIABLE_RevOrRvals_0_34,
  MR_Word * STATE_VARIABLE_RevOrRvals_35,
  MR_Word STATE_VARIABLE_GroundTermMap_0_36,
  MR_Word * STATE_VARIABLE_GroundTermMap_37);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_structs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjuncts_9_p_0(
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
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_10(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_9(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_8(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word Target_17,
  MR_Word HighLevelData_18,
  MR_Word VarTypes_19,
  MR_Word Var_20,
  MR_Word VarType_21,
  MR_Word MLDS_Type_22,
  MR_Word ConsId_23,
  MR_Word ConsTag_24,
  MR_Word ArgVars_25,
  MR_Word Context_26,
  MR_Word STATE_VARIABLE_GlobalData_0_88,
  MR_Word * STATE_VARIABLE_GlobalData_89,
  MR_Word STATE_VARIABLE_GroundTermMap_0_90,
  MR_Word * STATE_VARIABLE_GroundTermMap_91);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__int_tag_to_mlds_rval_const_3_f_0(
  MR_Word Type_5,
  MR_Word MLDS_Type_6,
  MR_Word IntTag_7);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_compound_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_compound_17_p_0(
  MR_Word ModuleInfo_18,
  MR_Word Target_19,
  MR_Word HighLevelData_20,
  MR_Word VarTypes_21,
  MR_Word Var_22,
  MR_Word VarType_23,
  MR_Word MLDS_Type_24,
  MR_Word ConsId_25,
  MR_Word ConsTag_26,
  MR_Word Ptag_27,
  MR_Word ExtraRvals_28,
  MR_Word ArgVars_29,
  MR_Word Context_30,
  MR_Word STATE_VARIABLE_GlobalData_0_37,
  MR_Word * STATE_VARIABLE_GlobalData_38,
  MR_Word STATE_VARIABLE_GroundTermMap_0_39,
  MR_Word * STATE_VARIABLE_GroundTermMap_40);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__construct_ground_term_initializers_lld_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6,
  MR_Word STATE_VARIABLE_GroundTermMap_0_7,
  MR_Word * STATE_VARIABLE_GroundTermMap_8);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__construct_ground_term_initializers_hld_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6,
  MR_Word STATE_VARIABLE_GroundTermMap_0_7,
  MR_Word * STATE_VARIABLE_GroundTermMap_8);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_1(
  MR_Box closure_arg);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__ml_cast_cons_tag_3_f_0(
  MR_Word Type_5,
  MR_Word ConsTag_6,
  MR_Word Rval_7);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_dynamic_construct_direct_arg_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Ptag_11,
  MR_Word ArgMode_12,
  MR_Word ArgLval_13,
  MR_Word ArgType_14,
  MR_Word VarLval_15,
  MR_Word VarType_16,
  MR_Word Context_17,
  MR_Word * Stmts_18);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_construct_tagword_compound_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_construct_tagword_compound_10_p_0(
  MR_Word ConsId_11,
  MR_Word LocalSectag_12,
  MR_Word Var_13,
  MR_Word ArgVars_14,
  MR_Word ArgModes_15,
  MR_Word HowToConstruct_16,
  MR_Word Context_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_tagword_statically_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevOrRvals_0_3,
  MR_Word * STATE_VARIABLE_RevOrRvals_4);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_tagword_dynamically_5_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevOrRvals_0_4,
  MR_Word * STATE_VARIABLE_RevOrRvals_5);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_construct_compound_14_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_construct_compound_14_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_construct_compound_14_p_0(
  MR_Word ConsId_15,
  MR_Word Ptag_16,
  MR_Word MaybeStag_17,
  MR_Word UsesBaseClass_18,
  MR_Word Var_19,
  MR_Word ArgVars_20,
  MR_Word ArgModes_21,
  MR_Word TakeAddr_22,
  MR_Word HowToConstruct_23,
  MR_Word Context_24,
  MR_Word * Defns_25,
  MR_Word * Stmts_26,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_15_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_15_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_15_p_0(
  MR_Word ConsIdOrClosure_16,
  MR_Word MaybeCtorName_17,
  MR_Word Ptag_18,
  MR_Word ExplicitSectag_19,
  MR_Word Var_20,
  MR_Word ExtraRvalsTypesWidths_21,
  MR_Word ArgVars_22,
  MR_Word ArgModes_23,
  MR_Word TakeAddr_24,
  MR_Word CellToReuse_25,
  MR_Word Context_26,
  MR_Word * Defns_27,
  MR_Word * Stmts_28,
  MR_Word STATE_VARIABLE_Info_0_74,
  MR_Word * STATE_VARIABLE_Info_75);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_extra_arg_assigns_9_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_extra_arg_assigns_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_extra_arg_assigns_9_p_0(
  MR_Word VarLval_1,
  MR_Word MLDS_VarType_2,
  MR_Word MaybePrimaryTag_3,
  MR_Integer CurOffset_4,
  MR_Word HeadVar__5_5,
  MR_Word Context_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_statically_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_statically_10_p_0(
  MR_Word ConsIdOrClosure_11,
  MR_Word MaybeCtorName_12,
  MR_Word Ptag_13,
  MR_Word Var_14,
  MR_Word ExtraRvalsTypesWidths_15,
  MR_Word ArgVars_16,
  MR_Word Context_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__construct_static_ground_term_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__construct_static_ground_term_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word Target_16,
  MR_Word HighLevelData_17,
  MR_Word Context_18,
  MR_Word VarType_19,
  MR_Word MLDS_Type_20,
  MR_Word ConsIdOrClosure_21,
  MR_Word UsesBaseClass_22,
  MR_Word Ptag_23,
  MR_Word ExtraRvals_24,
  MR_Word RvalsTypesWidths_25,
  MR_Word * GroundTerm_26,
  MR_Word STATE_VARIABLE_GlobalData_0_40,
  MR_Word * STATE_VARIABLE_GlobalData_41);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_pack_ground_term_args_into_word_inits_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__get_const_type_for_cons_id_5_f_0(
  MR_Word Target_7,
  MR_Word HighLevelData_8,
  MR_Word MLDS_Type_9,
  MR_Word UsesBaseClass_10,
  MR_Word ConsIdOrClosure_11);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_box_extra_const_rval_list_lld_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_box_extra_const_rval_list_lld_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_box_const_rval_list_lld_6_p_0(
  MR_Word Info_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_box_or_unbox_const_rval_list_hld_6_p_0(
  MR_Word Info_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_dynamically_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_dynamically_13_p_0(
  MR_Word ConsIdOrClosure_14,
  MR_Word MaybeCtorName_15,
  MR_Word Ptag_16,
  MR_Word ExplicitSectag_17,
  MR_Word Var_18,
  MR_Word ExtraRvalsTypesWidths_19,
  MR_Word ArgVars_20,
  MR_Word ArgModes_21,
  MR_Word TakeAddr_22,
  MR_Word Context_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_expand_or_pack_into_words_3_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_pack_into_one_word_8_p_0(
  MR_Word RvalsTypesWidths_9,
  MR_Word * LeftOverRvalsTypesWidths_10,
  MR_Word RevOrRvals0_11,
  MR_Word * BoxedOrAllRval_12,
  MR_Word STATE_VARIABLE_RevPackedArgVars_0_20,
  MR_Word * STATE_VARIABLE_RevPackedArgVars_21,
  MR_Word STATE_VARIABLE_AllPartialsHavePackedArgVars_0_22,
  MR_Word * STATE_VARIABLE_AllPartialsHavePackedArgVars_23);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_pack_into_one_word_loop_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevOrRvals_0_3,
  MR_Word * STATE_VARIABLE_RevOrRvals_4,
  MR_Word STATE_VARIABLE_RevPackedArgVars_0_5,
  MR_Word * STATE_VARIABLE_RevPackedArgVars_6,
  MR_Word STATE_VARIABLE_AllPartialsHavePackedArgVars_0_7,
  MR_Word * STATE_VARIABLE_AllPartialsHavePackedArgVars_8);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__maybe_shift_and_accumulate_or_rval_5_p_0(
  MR_Word Rval_6,
  MR_Word Shift_7,
  MR_Word Fill_8,
  MR_Word STATE_VARIABLE_RevOrRvals_0_18,
  MR_Word * STATE_VARIABLE_RevOrRvals_19);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_dynamic_construct_args_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_dynamic_construct_args_9_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer CurArgNum_4,
  MR_Word STATE_VARIABLE_TakeAddr_0_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_8,
  MR_Word * STATE_VARIABLE_MayUseAtomic_9);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_field_take_address_assigns_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CellLval_2,
  MR_Word CellType_3,
  MR_Word MaybePtag_4,
  MR_Word Context_5,
  MR_Word Info_6,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct____Unify____ml_const_struct_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen_construct____Compare____ml_const_struct_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct____Unify____mlds_rval_type_and_width_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen_construct____Compare____mlds_rval_type_and_width_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_1[14][2];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_2[9][3];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_3[10][5];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_4[2][1];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_5[1][4];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_6[2][6];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_7[1][8];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_8[1][9];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_9[1][7];




static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_1[14][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_arg_type_and_width_1)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_arg_type_and_width_1)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0))
  },
  /* row 8 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) 0)))),
    ((MR_Box) (((MR_Box) ((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_construct_scalar_common_4[0])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 20)),
    ((MR_Box) ((MR_Unsigned) 24U))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Unsigned) 24U))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_2[9][3] = {
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
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0])),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[1])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_new_object_dynamically_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[2])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__construct_static_ground_term_14_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[3])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_new_object_statically_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_7[0])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[9])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[9])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_static_args_widths_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_3[10][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_sectag_added_by_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_sectag_added_by_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_4[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_5[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_6[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_7[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_util__pti_arg_type_and_width_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_8[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_ml_const_struct_info_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_9[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_ml_const_struct_info_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_util__pti_arg_type_and_width_1__plain_hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen_construct__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_util__pti_arg_type_and_width_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_arg_type_and_width_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen_construct__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen_construct__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen_construct__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_util__pti_arg_type_and_width_1__plain_hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_arg_type_and_width_1,
  {
    (MR_PseudoTypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__field_types_ml_const_struct_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__field_names_ml_const_struct_info_0_0[3] = {
  (MR_String) "mcsi_module_info",
  (MR_String) "mcsi_target",
  (MR_String) "mcsi_high_level_data"
};

static const MR_DuArgLocn ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__field_locns_ml_const_struct_info_0_0[3] = {
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

static const MR_DuFunctorDesc ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_functor_desc_ml_const_struct_info_0_0 = {
  (MR_String) "ml_const_struct_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__field_types_ml_const_struct_info_0_0,
  ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__field_names_ml_const_struct_info_0_0,
  ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__field_locns_ml_const_struct_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_stag_ordered_ml_const_struct_info_0_0[1] = {
  &ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_functor_desc_ml_const_struct_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_ptag_ordered_ml_const_struct_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_stag_ordered_ml_const_struct_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_name_ordered_ml_const_struct_info_0[1] = {
  &ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_functor_desc_ml_const_struct_info_0_0
};

static const MR_Integer ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__functor_number_map_ml_const_struct_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_ml_const_struct_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_unify_gen_construct____Unify____ml_const_struct_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen_construct____Compare____ml_const_struct_info_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen_construct",
  (MR_String) "ml_const_struct_info",
  {     ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_name_ordered_ml_const_struct_info_0 },
  {     ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_ptag_ordered_ml_const_struct_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__functor_number_map_ml_const_struct_info_0
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen_construct__maybe__ti_maybe_1ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__field_types_mlds_rval_type_and_width_0_0[4] = {
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen_construct__maybe__ti_maybe_1ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0)
};

static const MR_DuFunctorDesc ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_functor_desc_mlds_rval_type_and_width_0_0 = {
  (MR_String) "rval_type_and_width",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__field_types_mlds_rval_type_and_width_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_stag_ordered_mlds_rval_type_and_width_0_0[1] = {
  &ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_functor_desc_mlds_rval_type_and_width_0_0
};

static const MR_DuPtagLayout ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_ptag_ordered_mlds_rval_type_and_width_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_stag_ordered_mlds_rval_type_and_width_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_name_ordered_mlds_rval_type_and_width_0[1] = {
  &ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_functor_desc_mlds_rval_type_and_width_0_0
};

static const MR_Integer ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__functor_number_map_mlds_rval_type_and_width_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_unify_gen_construct____Unify____mlds_rval_type_and_width_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen_construct____Compare____mlds_rval_type_and_width_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen_construct",
  (MR_String) "mlds_rval_type_and_width",
  {     ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_name_ordered_mlds_rval_type_and_width_0 },
  {     ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_ptag_ordered_mlds_rval_type_and_width_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__functor_number_map_mlds_rval_type_and_width_0
};

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__construct_static_ground_term__1834__1_1_f_0(
  MR_Word LambdaHeadVar__1_43)
{
  {
    MR_Word LambdaHeadVar__2_44;

    {
      LambdaHeadVar__2_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_44, 0) = ((MR_Box) (LambdaHeadVar__1_43));
    }
    return LambdaHeadVar__2_44;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_const_static_args_widths__1616__1_1_f_0(
  MR_Word LambdaHeadVar__1_16)
{
  {
    MR_Word LambdaHeadVar__2_17;

    LambdaHeadVar__2_17 = ml_backend__ml_unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_97_114_103_115_95_119_105_100_116_104_115_95_95_49_54_49_54_95_95_49_95_95_91_49_93_95_48_1_f_0();
    return LambdaHeadVar__2_17;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_97_114_103_115_95_119_105_100_116_104_115_95_95_49_54_49_54_95_95_49_95_95_91_49_93_95_48_1_f_0(void)
{
  {
    MR_Word LambdaHeadVar__2_17;

    LambdaHeadVar__2_17 = parse_tree__builtin_lib_types__void_type_0_f_0();
    return LambdaHeadVar__2_17;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_struct__1517__1_2_p_0(
  MR_Word AddedBy_35,
  MR_Word HeadVar__2_93)
{
  {
    MR_bool succeeded = (AddedBy_35 == HeadVar__2_93);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_struct__1500__1_2_p_0(
  MR_Word AddedBy_35,
  MR_Word HeadVar__2_97)
{
  {
    MR_bool succeeded = (AddedBy_35 == HeadVar__2_97);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__1199__6_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_224)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_224)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__1271__1_2_p_0(
  MR_Word AddedBy_78,
  MR_Word HeadVar__2_105)
{
  {
    MR_bool succeeded = (AddedBy_78 == HeadVar__2_105);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__1255__1_2_p_0(
  MR_Word AddedBy_78,
  MR_Word HeadVar__2_109)
{
  {
    MR_bool succeeded = (AddedBy_78 == HeadVar__2_109);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__1199__5_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_211)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_211)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__1199__4_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_200)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_200)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__1199__3_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_189)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_189)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__1199__2_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_178)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_178)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__1199__1_2_p_0(
  MR_Word ArgVars_25,
  MR_Word HeadVar__2_138)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (ArgVars_25)), ((MR_Box) (HeadVar__2_138)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_extra_arg_assigns__949__1_2_p_0(
  MR_Word HighLevelData_28,
  MR_Word HeadVar__2_41)
{
  {
    MR_bool succeeded = (HighLevelData_28 == HeadVar__2_41);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_dynamic_construct_args__878__1_2_p_0(
  MR_Word ArgWidth_57,
  MR_Word HeadVar__2_109)
{
  {
    MR_bool succeeded = (ArgWidth_57 == HeadVar__2_109);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__812__1_2_p_0(
  MR_Word Width_23,
  MR_Word HeadVar__2_30)
{
  {
    MR_bool succeeded = (Width_23 == HeadVar__2_30);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__630__1_2_p_0(
  MR_Word PrimaryTag_43,
  MR_Word LambdaHeadVar__1_82)
{
  {
    MR_bool succeeded;
    uint8_t Var_119 = (uint8_t) (LambdaHeadVar__1_82);
    uint8_t Var_120 = (uint8_t) (PrimaryTag_43);

    succeeded = (Var_119 == Var_120);
    succeeded = !(succeeded);
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__612__1_3_p_0(
  MR_Word STATE_VARIABLE_Info_0_74,
  MR_Word LambdaHeadVar__1_79,
  MR_Word * LambdaHeadVar__2_80)
{
  {
    MR_Word ReuseConsTag_37;
    MR_Word _ReuseOffSet_38;

    ml_backend__ml_unify_gen_util__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_74, LambdaHeadVar__1_79, &ReuseConsTag_37);
    ml_backend__ml_unify_gen_util__ml_tag_ptag_and_initial_offset_3_p_0(ReuseConsTag_37, LambdaHeadVar__2_80, &_ReuseOffSet_38);
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_statically__574__1_1_f_0(
  MR_Word LambdaHeadVar__1_49)
{
  {
    MR_Word LambdaHeadVar__2_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_49, (MR_Integer) 0))));

    return LambdaHeadVar__2_50;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_dynamically__515__1_1_f_0(
  MR_Word LambdaHeadVar__1_67)
{
  {
    MR_Word LambdaHeadVar__2_68;
    MR_Word Rv_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_67, (MR_Integer) 0))));
    MR_Word T_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_67, (MR_Integer) 1))));

    {
      LambdaHeadVar__2_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_68, 0) = ((MR_Box) (Rv_72));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_68, 1) = ((MR_Box) (T_73));
    }
    return LambdaHeadVar__2_68;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_construct_compound__348__1_2_p_0(
  MR_Word AddedBy_33,
  MR_Word HeadVar__2_46)
{
  {
    MR_bool succeeded = (AddedBy_33 == HeadVar__2_46);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_construct_compound__333__1_2_p_0(
  MR_Word AddedBy_33,
  MR_Word HeadVar__2_50)
{
  {
    MR_bool succeeded = (AddedBy_33 == HeadVar__2_50);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object__430__1_2_p_0(
  MR_Word TakeAddr_24,
  MR_Word HeadVar__2_47)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[2]), ((MR_Box) (TakeAddr_24)), ((MR_Box) (HeadVar__2_47)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object__418__1_2_p_0(
  MR_Word ExplicitSectag_19,
  MR_Word HeadVar__2_40)
{
  {
    MR_bool succeeded = (ExplicitSectag_19 == HeadVar__2_40);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__288__1_2_p_0(
  MR_Word TakeAddr_16,
  MR_Word HeadVar__2_116)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[2]), ((MR_Box) (TakeAddr_16)), ((MR_Box) (HeadVar__2_116)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__220__1_2_p_0(
  MR_Word TakeAddr_16,
  MR_Word HeadVar__2_123)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[2]), ((MR_Box) (TakeAddr_16)), ((MR_Box) (HeadVar__2_123)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__144__1_2_p_0(
  MR_Word ArgVars_14,
  MR_Word HeadVar__2_137)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (ArgVars_14)), ((MR_Box) (HeadVar__2_137)));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_construct____Compare____mlds_rval_type_and_width_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word Var_12;

      ml_backend__mlds____Compare____mlds_rval_0_0(&Var_12, ArgX1_4, ArgY1_5);
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        ml_backend__mlds____Compare____mlds_type_0_0(&Var_13, ArgX2_6, ArgY2_7);
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          parse_tree__prog_data____Compare____arg_pos_width_0_0(&Var_14, ArgX3_8, ArgY3_9);
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
          {
            mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct____Unify____mlds_rval_type_and_width_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_16_16;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = parse_tree__prog_data____Unify____arg_pos_width_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            TypeInfo_16_16 = (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[7]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct____Compare____ml_const_struct_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word ArgY2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word ArgX3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY3_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_10;

      hlds__hlds_module____Compare____module_info_0_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;
        MR_Integer Var_17 = (MR_Integer) (ArgX2_6);
        MR_Integer Var_18 = (MR_Integer) (ArgY2_7);

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_11, Var_17, Var_18);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          MR_Integer Var_19 = (MR_Integer) (ArgX3_8);
          MR_Integer Var_20 = (MR_Integer) (ArgY3_9);

          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_19, Var_20);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct____Unify____ml_const_struct_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__is_apw_full_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1);

    if (succeeded)
    {
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_tagword_arg_4_p_0(
  MR_Word Info_5,
  MR_Word ArgTypeWidth_6,
  MR_Word STATE_VARIABLE_RevOrRvals_0_36,
  MR_Word * STATE_VARIABLE_RevOrRvals_37)
{
  {
    MR_Word ConstArg_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeWidth_6, (MR_Integer) 0))));
    MR_Word ArgPosWidth_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeWidth_6, (MR_Integer) 2))));
    MR_Word ModuleInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0))));
    MR_Word ArgRval_17;
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));

    if (((MR_tag((MR_Word) ConstArg_8)) == (MR_Integer) 0))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_tagword_arg\'/4", (MR_String) "csa_const_struct in tagword");
        return;
      }
    }
    else
    {
      MR_Word ConsId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConstArg_8, (MR_Integer) 0))));
      MR_Word Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConstArg_8, (MR_Integer) 1))));
      MR_Word ConsTag_15;
      MR_Word MLDS_Type_16;

      ConsTag_15 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_11, ConsId_13);
      MLDS_Type_16 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_11, Type_14);
      ml_backend__ml_unify_gen_construct__ml_gen_const_struct_arg_tag_4_p_0(ConsTag_15, Type_14, MLDS_Type_16, &ArgRval_17);
    }
    switch (MR_tag((MR_Word) ArgPosWidth_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_tagword_arg\'/4", (MR_String) "ArgPosWidth does not belong in tagword");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_tagword_arg\'/4", (MR_String) "ArgPosWidth does not belong in tagword");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_tagword_arg\'/4", (MR_String) "ArgPosWidth does not belong in tagword");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Shift_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 3))));
              MR_Word Fill_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 6))));

              ml_backend__ml_unify_gen_construct__maybe_shift_and_accumulate_or_rval_5_p_0(ArgRval_17, Shift_20, Fill_23, STATE_VARIABLE_RevOrRvals_0_36, STATE_VARIABLE_RevOrRvals_37);
            }
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_RevOrRvals_37 = STATE_VARIABLE_RevOrRvals_0_36;
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_struct__1517__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_struct__1500__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_RevOrRvals_37;

    ml_backend__ml_unify_gen_construct__ml_gen_const_tagword_arg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_RevOrRvals_37);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_RevOrRvals_37));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0(
  MR_Word Info_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ConstStructMap_0_77,
  MR_Word * STATE_VARIABLE_ConstStructMap_78,
  MR_Word STATE_VARIABLE_GlobalData_0_79,
  MR_Word * STATE_VARIABLE_GlobalData_80)
{
  {
    MR_bool succeeded;
    MR_Integer ConstNum_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ConstStruct_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ConsId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_9, (MR_Integer) 0))));
    MR_Word Args_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_9, (MR_Integer) 1))));
    MR_Word Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_9, (MR_Integer) 2))));
    MR_Word ModuleInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
    MR_Word MLDS_Type_17;
    MR_Word ConsTag_18;
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)));

    MLDS_Type_17 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_16, Type_14);
    ConsTag_18 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_16, ConsId_12);
    switch (MR_tag((MR_Word) ConsTag_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_13_p_0(Info_7, ConstNum_8, Type_14, MLDS_Type_17, ConsId_12, ConsTag_18, (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), (MR_Word) ((MR_Unsigned) 0U), Args_13, STATE_VARIABLE_ConstStructMap_0_77, STATE_VARIABLE_ConstStructMap_78, STATE_VARIABLE_GlobalData_0_79, STATE_VARIABLE_GlobalData_80);
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct\'/6", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            if ((Args_13 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct\'/6", (MR_String) "no_tag arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
              MR_Word Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));

              if ((Var_146 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word ArgRvalTypeWidth_21;
                MR_Word ArgRval_22;
                MR_Word Rval_26;
                MR_Word GroundTerm_27;

                ml_backend__ml_unify_gen_construct__ml_gen_const_struct_arg_7_p_0(Info_7, STATE_VARIABLE_ConstStructMap_0_77, Var_147, (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_construct_scalar_common_1[8])), &ArgRvalTypeWidth_21, STATE_VARIABLE_GlobalData_0_79, STATE_VARIABLE_GlobalData_80);
                ArgRval_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRvalTypeWidth_21, (MR_Integer) 0))));
                Rval_26 = ml_backend__ml_unify_gen_construct__ml_cast_cons_tag_3_f_0(MLDS_Type_17, ConsTag_18, ArgRval_22);
                {
                  GroundTerm_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_27, 0) = ((MR_Box) (Rval_26));
                  MR_hl_field(MR_mktag(0), GroundTerm_27, 1) = ((MR_Box) (Type_14));
                  MR_hl_field(MR_mktag(0), GroundTerm_27, 2) = ((MR_Box) (MLDS_Type_17));
                }
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstNum_8, ((MR_Box) (GroundTerm_27)), STATE_VARIABLE_ConstStructMap_0_77, STATE_VARIABLE_ConstStructMap_78);
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct\'/6", (MR_String) "no_tag arity != 1");
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
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct\'/6", (MR_String) "unexpected tag");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_18, (MR_Integer) 0)))) {
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
          case (MR_Integer) 13:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct\'/6", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Ptag_144 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_18, (MR_Integer) 1))));

              ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_13_p_0(Info_7, ConstNum_8, Type_14, MLDS_Type_17, ConsId_12, ConsTag_18, Ptag_144, (MR_Word) ((MR_Unsigned) 0U), Args_13, STATE_VARIABLE_ConstStructMap_0_77, STATE_VARIABLE_ConstStructMap_78, STATE_VARIABLE_GlobalData_0_79, STATE_VARIABLE_GlobalData_80);
            }
            break;
          case (MR_Integer) 12:
            if ((Args_13 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct\'/6", (MR_String) "no_tag arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1))));
              MR_Word Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0))));

              if ((Var_146 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word ArgRvalTypeWidth_21;
                MR_Word ArgRval_22;
                MR_Word Rval_26;
                MR_Word GroundTerm_27;

                ml_backend__ml_unify_gen_construct__ml_gen_const_struct_arg_7_p_0(Info_7, STATE_VARIABLE_ConstStructMap_0_77, Var_147, (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_construct_scalar_common_1[8])), &ArgRvalTypeWidth_21, STATE_VARIABLE_GlobalData_0_79, STATE_VARIABLE_GlobalData_80);
                ArgRval_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRvalTypeWidth_21, (MR_Integer) 0))));
                Rval_26 = ml_backend__ml_unify_gen_construct__ml_cast_cons_tag_3_f_0(MLDS_Type_17, ConsTag_18, ArgRval_22);
                {
                  GroundTerm_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_27, 0) = ((MR_Box) (Rval_26));
                  MR_hl_field(MR_mktag(0), GroundTerm_27, 1) = ((MR_Box) (Type_14));
                  MR_hl_field(MR_mktag(0), GroundTerm_27, 2) = ((MR_Box) (MLDS_Type_17));
                }
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstNum_8, ((MR_Box) (GroundTerm_27)), STATE_VARIABLE_ConstStructMap_0_77, STATE_VARIABLE_ConstStructMap_78);
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct\'/6", (MR_String) "no_tag arity != 1");
                  return;
                }
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word LocalSectag_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_18, (MR_Integer) 2))));
              MR_Unsigned PrimSec_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_42, (MR_Integer) 1))));
              MR_Word ArgsTypesWidths_46;
              MR_Word RevOrRvals_47;
              MR_Word OrRvals_48;
              MR_Word TagwordRval_49;
              MR_Word Var_85;
              MR_Word Var_87;
              MR_Word Var_88;
              MR_Word GroundTerm_116;
              MR_Word HighLevelData_117;
              MR_Unsigned packed_args_1;
              MR_Box conv1_RevOrRvals_47;

              ml_backend__ml_unify_gen_construct__ml_gen_const_static_args_widths_5_p_0(Info_7, Type_14, ConsId_12, Args_13, &ArgsTypesWidths_46);
              packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)));
              HighLevelData_117 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              switch (HighLevelData_117) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct\'/6", (MR_String) "HighLevelData = yes");
                      return;
                    }
                  }
                  break;
              }
              {
                Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_9[0]));
                MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_1));
                MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (Info_7));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[5]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[4]), Var_85, ArgsTypesWidths_46, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_RevOrRvals_47);
              RevOrRvals_47 = ((MR_Word) (conv1_RevOrRvals_47));
              mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevOrRvals_47, &OrRvals_48);
              {
                Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_88, 1) = ((MR_Box) (PrimSec_44));
              }
              {
                Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (Var_88));
              }
              TagwordRval_49 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(Var_87, OrRvals_48);
              {
                GroundTerm_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_116, 0) = ((MR_Box) (TagwordRval_49));
                MR_hl_field(MR_mktag(0), GroundTerm_116, 1) = ((MR_Box) (Type_14));
                MR_hl_field(MR_mktag(0), GroundTerm_116, 2) = ((MR_Box) (MLDS_Type_17));
              }
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstNum_8, ((MR_Box) (GroundTerm_116)), STATE_VARIABLE_ConstStructMap_0_77, STATE_VARIABLE_ConstStructMap_78);
              *STATE_VARIABLE_GlobalData_80 = STATE_VARIABLE_GlobalData_0_79;
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word Ptag_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_18, (MR_Integer) 1))));
              MR_Word ExtraRvals_32;
              MR_Word RemoteSectag_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_18, (MR_Integer) 2))));
              MR_Unsigned SectagUint_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_33, (MR_Integer) 0))));
              MR_Word AddedBy_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_33, (MR_Integer) 1))));
              MR_Word Target_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word UsesConstructors_37;
              MR_Unsigned packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)));

              UsesConstructors_37 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_36);
              switch (UsesConstructors_37) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word StagRval0_38;
                    MR_Word HighLevelData_39;
                    MR_Word StagRval_40;
                    MR_Word Var_94;
                    MR_Word Var_98;
                    MR_Integer Var_99;
                    MR_Unsigned packed_args_3;

                    {
                      Var_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[7]));
                      MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_2));
                      MR_hl_field(MR_mktag(0), Var_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_94, 3) = ((MR_Box) (AddedBy_35));
                      MR_hl_field(MR_mktag(0), Var_94, 4) = ((MR_Box) ((MR_Integer) 0));
                    }
                    mercury__require__expect_3_p_0(Var_94, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct\'/6", (MR_String) "AddedBy != sectag_added_by_unify");
                    Var_99 = mercury__uint__cast_to_int_1_f_0(SectagUint_34);
                    {
                      Var_98 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_98, 0) = ((MR_Box) (Var_99));
                    }
                    {
                      StagRval0_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), StagRval0_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), StagRval0_38, 1) = ((MR_Box) (Var_98));
                    }
                    packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)));
                    HighLevelData_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    switch (HighLevelData_39) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            StagRval_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), StagRval_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), StagRval_40, 1) = ((MR_Box) ((MR_Unsigned) 20U));
                            MR_hl_field(MR_mktag(3), StagRval_40, 2) = ((MR_Box) (StagRval0_38));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        StagRval_40 = StagRval0_38;
                        break;
                    }
                    {
                      ExtraRvals_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ExtraRvals_32, 0) = ((MR_Box) (StagRval_40));
                      MR_hl_field(MR_mktag(1), ExtraRvals_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_90;

                    {
                      Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[7]));
                      MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_3));
                      MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (AddedBy_35));
                      MR_hl_field(MR_mktag(0), Var_90, 4) = ((MR_Box) ((MR_Integer) 1));
                    }
                    mercury__require__expect_3_p_0(Var_90, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct\'/6", (MR_String) "AddedBy != sectag_added_by_constructor");
                    ExtraRvals_32 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
              }
              ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_13_p_0(Info_7, ConstNum_8, Type_14, MLDS_Type_17, ConsId_12, ConsTag_18, Ptag_31, ExtraRvals_32, Args_13, STATE_VARIABLE_ConstStructMap_0_77, STATE_VARIABLE_ConstStructMap_78, STATE_VARIABLE_GlobalData_0_79, STATE_VARIABLE_GlobalData_80);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_arg_7_p_0(
  MR_Word Info_8,
  MR_Word ConstStructMap_9,
  MR_Word ConstArg_10,
  MR_Word PosWidth_11,
  MR_Word * RvalTypeWidth_12,
  MR_Word STATE_VARIABLE_GlobalData_0_25,
  MR_Word * STATE_VARIABLE_GlobalData_26)
{
  {
    MR_Word ModuleInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0))));
    MR_Word Rval0_17;
    MR_Word MLDS_Type_19;
    MR_Word Width_23;
    MR_Word Rval_24;
    MR_Word Var_27;
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));

    if (((MR_tag((MR_Word) ConstArg_10)) == (MR_Integer) 0))
    {
      MR_Integer StructNum_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ConstArg_10, (MR_Integer) 0))));
      MR_Word GroundTerm_16;
      MR_Box conv0_GroundTerm_16;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_9, StructNum_15, &conv0_GroundTerm_16);
      GroundTerm_16 = ((MR_Word) (conv0_GroundTerm_16));
      Rval0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_16, (MR_Integer) 0))));
      MLDS_Type_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_16, (MR_Integer) 2))));
    }
    else
    {
      MR_Word ConsId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConstArg_10, (MR_Integer) 0))));
      MR_Word Type_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConstArg_10, (MR_Integer) 1))));
      MR_Word ConsTag_22;

      ConsTag_22 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_14, ConsId_20);
      MLDS_Type_19 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_14, Type_21);
      ml_backend__ml_unify_gen_construct__ml_gen_const_struct_arg_tag_4_p_0(ConsTag_22, Type_21, MLDS_Type_19, &Rval0_17);
    }
    Width_23 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(PosWidth_11);
    Var_27 = mercury__term__context_init_0_f_0();
    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_14, Var_27, MLDS_Type_19, Width_23, Rval0_17, &Rval_24, STATE_VARIABLE_GlobalData_0_25, STATE_VARIABLE_GlobalData_26);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *RvalTypeWidth_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MLDS_Type_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PosWidth_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_args_widths_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_17;

    conv0_LambdaHeadVar__2_17 = ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_const_static_args_widths__1616__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_17));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_args_widths_5_p_0(
  MR_Word Info_6,
  MR_Word VarType_7,
  MR_Word ConsId_8,
  MR_Word Args_9,
  MR_Word * ArgsTypesWidths_10)
{
  {
    MR_bool succeeded;
    MR_Word HighLevelData_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Target_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));

    switch (HighLevelData_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 1:
        succeeded = (Target_12 == (MR_Integer) 2);
        break;
    }
    if (succeeded)
    {
      MR_Word ModuleInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0))));
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));

      ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_1((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), ModuleInfo_13, (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[8]), (MR_Integer) 0, VarType_7, ConsId_8, Args_9, ArgsTypesWidths_10);
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_static_args_widths\'/5", (MR_String) "constant structures are not supported for this grade");
        return;
      }
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_17;

    conv0_LambdaHeadVar__2_17 = ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_const_static_args_widths__1616__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_17));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_13_p_0(
  MR_Word Info_14,
  MR_Integer ConstNum_15,
  MR_Word VarType_16,
  MR_Word MLDS_Type_17,
  MR_Word ConsId_18,
  MR_Word ConsTag_19,
  MR_Word Ptag_20,
  MR_Word ExtraRvals_21,
  MR_Word Args_22,
  MR_Word STATE_VARIABLE_ConstStructMap_0_32,
  MR_Word * STATE_VARIABLE_ConstStructMap_33,
  MR_Word STATE_VARIABLE_GlobalData_0_34,
  MR_Word * STATE_VARIABLE_GlobalData_35)
{
  {
    MR_bool succeeded;
    MR_Word ArgsTypesWidths_25;
    MR_Word ModuleInfo_26;
    MR_Word Target_27;
    MR_Word HighLevelData_28;
    MR_Word RvalsTypesWidths_29;
    MR_Word UsesBaseClass_30;
    MR_Word GroundTerm_31;
    MR_Word STATE_VARIABLE_GlobalData_36_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word HighLevelData_54 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Target_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1)));
    MR_Unsigned packed_args_2;

    switch (HighLevelData_54) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 1:
        succeeded = (Target_55 == (MR_Integer) 2);
        break;
    }
    if (succeeded)
    {
      MR_Word ModuleInfo_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 0))));
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1)));

      ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_1((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), ModuleInfo_56, (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[7]), (MR_Integer) 0, VarType_16, ConsId_18, Args_22, &ArgsTypesWidths_25);
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_static_args_widths\'/5", (MR_String) "constant structures are not supported for this grade");
        return;
      }
    }
    ModuleInfo_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 0))));
    packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1)));
    Target_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1))) & (MR_Integer) 3);
    HighLevelData_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ml_backend__ml_unify_gen_construct__ml_gen_const_struct_args_6_p_0(Info_14, STATE_VARIABLE_ConstStructMap_0_32, ArgsTypesWidths_25, &RvalsTypesWidths_29, STATE_VARIABLE_GlobalData_0_34, &STATE_VARIABLE_GlobalData_36_36);
    UsesBaseClass_30 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ConsTag_19);
    Var_37 = mercury__term__context_init_0_f_0();
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (ConsId_18));
    }
    ml_backend__ml_unify_gen_construct__construct_static_ground_term_14_p_0(ModuleInfo_26, Target_27, HighLevelData_28, Var_37, VarType_16, MLDS_Type_17, Var_38, UsesBaseClass_30, Ptag_20, ExtraRvals_21, RvalsTypesWidths_29, &GroundTerm_31, STATE_VARIABLE_GlobalData_36_36, STATE_VARIABLE_GlobalData_35);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstNum_15, ((MR_Box) (GroundTerm_31)), STATE_VARIABLE_ConstStructMap_0_32, STATE_VARIABLE_ConstStructMap_33);
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_args_6_p_0(
  MR_Word Info_1,
  MR_Word ConstStructMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_GlobalData_6 = STATE_VARIABLE_GlobalData_0_5;
  }
  else
  {
    MR_Word ArgTypeWidth_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgsTypesWidths_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word RvalTypeWidth_16;
    MR_Word RvalsTypesWidths_17;
    MR_Word ConstArg_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeWidth_14, (MR_Integer) 0))));
    MR_Word PosWidth_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeWidth_14, (MR_Integer) 2))));
    MR_Word STATE_VARIABLE_GlobalData_24_24;
    MR_Word ModuleInfo_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 0))));
    MR_Word Rval0_37;
    MR_Word MLDS_Type_39;
    MR_Word Width_43;
    MR_Word Rval_44;
    MR_Word Var_45;
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 1)));

    if (((MR_tag((MR_Word) ConstArg_19)) == (MR_Integer) 0))
    {
      MR_Integer StructNum_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ConstArg_19, (MR_Integer) 0))));
      MR_Word GroundTerm_36;
      MR_Box conv0_GroundTerm_36;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_2, StructNum_35, &conv0_GroundTerm_36);
      GroundTerm_36 = ((MR_Word) (conv0_GroundTerm_36));
      Rval0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_36, (MR_Integer) 0))));
      MLDS_Type_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_36, (MR_Integer) 2))));
    }
    else
    {
      MR_Word ConsId_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConstArg_19, (MR_Integer) 0))));
      MR_Word Type_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConstArg_19, (MR_Integer) 1))));
      MR_Word ConsTag_42;

      ConsTag_42 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_34, ConsId_40);
      MLDS_Type_39 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_34, Type_41);
      ml_backend__ml_unify_gen_construct__ml_gen_const_struct_arg_tag_4_p_0(ConsTag_42, Type_41, MLDS_Type_39, &Rval0_37);
    }
    Width_43 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(PosWidth_21);
    Var_45 = mercury__term__context_init_0_f_0();
    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_34, Var_45, MLDS_Type_39, Width_43, Rval0_37, &Rval_44, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_24_24);
    {
      RvalTypeWidth_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RvalTypeWidth_16, 0) = ((MR_Box) (Rval_44));
      MR_hl_field(MR_mktag(0), RvalTypeWidth_16, 1) = ((MR_Box) (MLDS_Type_39));
      MR_hl_field(MR_mktag(0), RvalTypeWidth_16, 2) = ((MR_Box) (PosWidth_21));
      MR_hl_field(MR_mktag(0), RvalTypeWidth_16, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ml_backend__ml_unify_gen_construct__ml_gen_const_struct_args_6_p_0(Info_1, ConstStructMap_2, ArgsTypesWidths_15, &RvalsTypesWidths_17, STATE_VARIABLE_GlobalData_24_24, STATE_VARIABLE_GlobalData_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RvalTypeWidth_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RvalsTypesWidths_17));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_arg_tag_4_p_0(
  MR_Word ConsTag_5,
  MR_Word Type_6,
  MR_Word MLDS_Type_7,
  MR_Word * Rval_8)
{
  switch (MR_tag((MR_Word) ConsTag_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ConsTag_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct_arg_tag\'/4", (MR_String) "unexpected tag");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RvalConst_64;

            RvalConst_64 = ml_backend__ml_unify_gen_construct__int_tag_to_mlds_rval_const_3_f_0(Type_6, MLDS_Type_7, (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_4[0]));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (RvalConst_64));
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String String_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_5, (MR_Integer) 0))));
        MR_Word Var_61;

        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
          MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (String_12));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_8 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_61));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Float Float_11 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_5, (MR_Integer) 0)));
        MR_Word Var_62;

        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
          MR_hl_field(MR_mktag(3), Var_62, 1) = MR_box_float(Float_11);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_8 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_62));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word IntTag_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1))));
            MR_Word RvalConst_10;

            RvalConst_10 = ml_backend__ml_unify_gen_construct__int_tag_to_mlds_rval_const_3_f_0(Type_6, MLDS_Type_7, IntTag_9);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (RvalConst_10));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ForeignLang_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1))));
            MR_String ForeignTag_20 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 2))));
            MR_Word Var_58;

            {
              Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
              MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (ForeignLang_19));
              MR_hl_field(MR_mktag(3), Var_58, 2) = ((MR_Box) (ForeignTag_20));
              MR_hl_field(MR_mktag(3), Var_58, 3) = ((MR_Box) (MLDS_Type_7));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_58));
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
        case (MR_Integer) 14:
        case (MR_Integer) 15:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct_arg_tag\'/4", (MR_String) "unexpected tag");
              return;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ModuleName0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1))));
            MR_String TypeName_22 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 2))));
            MR_Integer TypeArity_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 3))));
            MR_Word ModuleName_24;
            MR_Word MLDS_Module_25;
            MR_Word RttiTypeCtor_26;
            MR_Word RttiId_27;
            MR_Word Const_28;
            MR_Word Var_56;

            ModuleName_24 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_21);
            MLDS_Module_25 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_24);
            {
              RttiTypeCtor_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RttiTypeCtor_26, 0) = ((MR_Box) (ModuleName_24));
              MR_hl_field(MR_mktag(0), RttiTypeCtor_26, 1) = ((MR_Box) (TypeName_22));
              MR_hl_field(MR_mktag(0), RttiTypeCtor_26, 2) = ((MR_Box) (TypeArity_23));
            }
            {
              RttiId_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RttiId_27, 0) = ((MR_Box) (RttiTypeCtor_26));
              MR_hl_field(MR_mktag(0), RttiId_27, 1) = ((MR_Box) ((MR_Unsigned) 44U));
            }
            {
              Const_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Const_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
              MR_hl_field(MR_mktag(3), Const_28, 1) = ((MR_Box) (MLDS_Module_25));
              MR_hl_field(MR_mktag(3), Const_28, 2) = ((MR_Box) (RttiId_27));
            }
            {
              Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (Const_28));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MLDS_Type_7));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_56));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ClassId_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 2))));
            MR_String Instance_30 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 3))));
            MR_Word TCName_31;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Word ModuleName_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1))));
            MR_Word MLDS_Module_66;
            MR_Word RttiId_67;
            MR_Word Const_68;

            MLDS_Module_66 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_65);
            TCName_31 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_29);
            {
              Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (ModuleName_65));
              MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Instance_30));
            }
            {
              RttiId_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), RttiId_67, 0) = ((MR_Box) (TCName_31));
              MR_hl_field(MR_mktag(1), RttiId_67, 1) = ((MR_Box) (Var_53));
            }
            {
              Const_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Const_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
              MR_hl_field(MR_mktag(3), Const_68, 1) = ((MR_Box) (MLDS_Module_66));
              MR_hl_field(MR_mktag(3), Const_68, 2) = ((MR_Box) (RttiId_67));
            }
            {
              Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (Const_68));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MLDS_Type_7));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_54));
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word LocalSectag_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 2))));
            MR_Unsigned PrimSec_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_14, (MR_Integer) 1))));
            MR_Word Var_59;
            MR_Word Var_60;

            {
              Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (PrimSec_17));
            }
            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (Var_60));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MLDS_Type_7));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_59));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__construct_ground_term_tagword_initializer_lld_5_p_0(
  MR_Word ArgVarTypeWidth_6,
  MR_Word STATE_VARIABLE_RevOrRvals_0_34,
  MR_Word * STATE_VARIABLE_RevOrRvals_35,
  MR_Word STATE_VARIABLE_GroundTermMap_0_36,
  MR_Word * STATE_VARIABLE_GroundTermMap_37)
{
  {
    MR_Word ArgVar_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_6, (MR_Integer) 0))));
    MR_Word ArgPosWidth_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_6, (MR_Integer) 2))));
    MR_Word ArgGroundTerm_12;
    MR_Word ArgRval_13;
    MR_Box conv0_ArgGroundTerm_12;

    mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (ArgVar_9)), &conv0_ArgGroundTerm_12, STATE_VARIABLE_GroundTermMap_0_36, STATE_VARIABLE_GroundTermMap_37);
    ArgGroundTerm_12 = ((MR_Word) (conv0_ArgGroundTerm_12));
    ArgRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_12, (MR_Integer) 0))));
    switch (MR_tag((MR_Word) ArgPosWidth_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.construct_ground_term_tagword_initializer_lld\'/5", (MR_String) "ArgPosWidth does not belong in tagword");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.construct_ground_term_tagword_initializer_lld\'/5", (MR_String) "ArgPosWidth does not belong in tagword");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.construct_ground_term_tagword_initializer_lld\'/5", (MR_String) "ArgPosWidth does not belong in tagword");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Shift_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_11, (MR_Integer) 3))));
              MR_Word Fill_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_11, (MR_Integer) 6))));

              ml_backend__ml_unify_gen_construct__maybe_shift_and_accumulate_or_rval_5_p_0(ArgRval_13, Shift_18, Fill_21, STATE_VARIABLE_RevOrRvals_0_34, STATE_VARIABLE_RevOrRvals_35);
            }
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_RevOrRvals_35 = STATE_VARIABLE_RevOrRvals_0_34;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_structs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ConstStructMap_78;
    MR_Word conv0_STATE_VARIABLE_GlobalData_80;

    ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ConstStructMap_78, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_GlobalData_80);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ConstStructMap_78));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_GlobalData_80));
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_structs_5_p_0(
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
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 274, &HighLevelData_11);
    {
      Info_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_12, 0) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Info_12, 1) = (MR_Box) (((MR_Unsigned) (((MR_Box) (Target_7))) | (((MR_Unsigned) (((MR_Box) (HighLevelData_11))) << (MR_Integer) 2))));
    }
    hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_6, &ConstStructDb_13);
    hlds__const_struct__const_struct_db_get_structs_2_p_0(ConstStructDb_13, &ConstStructs_14);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_structs_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Info_12));
    }
    Var_19 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[0]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[1]), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), Var_18, ConstStructs_14, ((MR_Box) (Var_19)), &conv3_ConstStructMap_8, ((MR_Box) (STATE_VARIABLE_GlobalData_0_15)), &conv2_STATE_VARIABLE_GlobalData_16);
    *ConstStructMap_8 = ((MR_Word) (conv3_ConstStructMap_8));
    *STATE_VARIABLE_GlobalData_16 = ((MR_Word) (conv2_STATE_VARIABLE_GlobalData_16));
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_5_p_0(
  MR_Word TermVar_6,
  MR_Word Goal_7,
  MR_Word * Stmts_8,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 0))));
    MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 1))));
    MR_Word NonLocals_12;
    MR_Word NonLocalList_13;

    NonLocals_12 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_12, &NonLocalList_13);
    if ((NonLocalList_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Stmts_8 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
    }
    else
    {
      MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonLocalList_13, (MR_Integer) 1))));
      MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonLocalList_13, (MR_Integer) 0))));

      if ((Var_51 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), ((MR_Box) (Var_52)), ((MR_Box) (TermVar_6)));
        if (succeeded)
        {
          MR_Word Conjuncts_15;
          MR_Word Var_39;

          succeeded = ((((MR_tag((MR_Word) GoalExpr_10)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));
            Conjuncts_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
            succeeded = (Var_39 == (MR_Integer) 0);
          }
          if (succeeded)
          {
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

            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_33, &ModuleInfo_16);
            ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_33, &Target_17);
            ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_33, &HighLevelData_18);
            ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_33, &VarTypes_19);
            ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_33, &GlobalData0_20);
            Var_40 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0));
            ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjuncts_9_p_0(ModuleInfo_16, Target_17, HighLevelData_18, VarTypes_19, Conjuncts_15, GlobalData0_20, &GlobalData_21, Var_40, &GroundTermMap_22);
            ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_21, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_41_41);
            mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), GroundTermMap_22, ((MR_Box) (TermVar_6)), &conv0_TermVarGroundTerm_23);
            TermVarGroundTerm_23 = ((MR_Word) (conv0_TermVarGroundTerm_23));
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(TermVar_6, TermVarGroundTerm_23, STATE_VARIABLE_Info_41_41, STATE_VARIABLE_Info_34);
            ml_backend__ml_code_util__ml_gen_var_3_p_0(*STATE_VARIABLE_Info_34, TermVar_6, &TermVarLval_24);
            TermVarRval_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermVarGroundTerm_23, (MR_Integer) 0))));
            Context_28 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
            Stmt_29 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(TermVarLval_24, TermVarRval_25, Context_28);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_29));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_ground_term\'/5", (MR_String) "malformed goal");
              return;
            }
          }
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_ground_term\'/5", (MR_String) "unexpected nonlocal");
            return;
          }
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_ground_term\'/5", (MR_String) "unexpected nonlocals");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjuncts_9_p_0(
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
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_GroundTermMap_9 = STATE_VARIABLE_GroundTermMap_0_8;
      *STATE_VARIABLE_GlobalData_7 = STATE_VARIABLE_GlobalData_0_6;
    }
    else
    {
      MR_Word Goal_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Goals_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_GlobalData_32_32;
      MR_Word STATE_VARIABLE_GroundTermMap_33_33;
      MR_Word GoalExpr_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_24, (MR_Integer) 0))));
      MR_Word GoalInfo_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_24, (MR_Integer) 1))));
      MR_Word Var_54;
      MR_Word ConsId_55;
      MR_Word ArgVars_56;
      MR_Word Unify_52;
      MR_Word SubInfo_60;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_GlobalData_0_6;
      MR_Word next_value_of_STATE_VARIABLE_GroundTermMap_0_8;

      succeeded = ((MR_tag((MR_Word) GoalExpr_47)) == (MR_Integer) 1);
      if (succeeded)
      {
        Unify_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_47, (MR_Integer) 3))));
        succeeded = ((MR_tag((MR_Word) Unify_52)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 0))));
          ConsId_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 1))));
          ArgVars_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 2))));
          SubInfo_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_52, (MR_Integer) 6))));
          succeeded = (SubInfo_60 == (MR_Word) ((MR_Unsigned) 0U));
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
        ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0(ModuleInfo_1, Target_2, HighLevelData_3, VarTypes_4, Var_54, VarType_61, MLDS_Type_62, ConsId_55, ConsTag_63, ArgVars_56, Context_64, STATE_VARIABLE_GlobalData_0_6, &STATE_VARIABLE_GlobalData_32_32, STATE_VARIABLE_GroundTermMap_0_8, &STATE_VARIABLE_GroundTermMap_33_33);
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_ground_term_conjunct\'/9", (MR_String) "malformed goal");
          return;
        }
      }
      // direct tailcall eliminated
      ;
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
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_10(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__1199__6_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_9(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__1271__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_8(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__1255__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_RevOrRvals_35;
    MR_Word conv2_STATE_VARIABLE_GroundTermMap_37;

    ml_backend__ml_unify_gen_construct__construct_ground_term_tagword_initializer_lld_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_RevOrRvals_35, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_GroundTermMap_37);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_RevOrRvals_35));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_GroundTermMap_37));
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = hlds__vartypes__lookup_var_type_func_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__1199__5_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__1199__4_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__1199__3_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__1199__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_ground_term_conjunct_tag__1199__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word Target_17,
  MR_Word HighLevelData_18,
  MR_Word VarTypes_19,
  MR_Word Var_20,
  MR_Word VarType_21,
  MR_Word MLDS_Type_22,
  MR_Word ConsId_23,
  MR_Word ConsTag_24,
  MR_Word ArgVars_25,
  MR_Word Context_26,
  MR_Word STATE_VARIABLE_GlobalData_0_88,
  MR_Word * STATE_VARIABLE_GlobalData_89,
  MR_Word STATE_VARIABLE_GroundTermMap_0_90,
  MR_Word * STATE_VARIABLE_GroundTermMap_91)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ConsTag_24)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_24)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_compound_17_p_0(ModuleInfo_16, Target_17, HighLevelData_18, VarTypes_19, Var_20, VarType_21, MLDS_Type_22, ConsId_23, ConsTag_24, (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), (MR_Word) ((MR_Unsigned) 0U), ArgVars_25, Context_26, STATE_VARIABLE_GlobalData_0_88, STATE_VARIABLE_GlobalData_89, STATE_VARIABLE_GroundTermMap_0_90, STATE_VARIABLE_GroundTermMap_91);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ConstRval_31;
              MR_Word ConstGroundTerm_42;
              MR_Word Var_135;
              MR_Word IntConst_141;

              IntConst_141 = ml_backend__ml_unify_gen_construct__int_tag_to_mlds_rval_const_3_f_0(VarType_21, MLDS_Type_22, (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_4[0]));
              {
                ConstRval_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstRval_31, 1) = ((MR_Box) (IntConst_141));
              }
              {
                Var_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_135, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[8]));
                MR_hl_field(MR_mktag(0), Var_135, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_1));
                MR_hl_field(MR_mktag(0), Var_135, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_135, 3) = ((MR_Box) (ArgVars_25));
                MR_hl_field(MR_mktag(0), Var_135, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_135, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
              {
                ConstGroundTerm_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_42, 0) = ((MR_Box) (ConstRval_31));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_42, 1) = ((MR_Box) (VarType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_42, 2) = ((MR_Box) (MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_42)), STATE_VARIABLE_GroundTermMap_0_90, STATE_VARIABLE_GroundTermMap_91);
              *STATE_VARIABLE_GlobalData_89 = STATE_VARIABLE_GlobalData_0_88;
            }
            break;
          case (MR_Integer) 2:
            if ((ArgVars_25 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "no_tag arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_230 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_25, (MR_Integer) 1))));
              MR_Word Var_231 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_25, (MR_Integer) 0))));

              if ((Var_230 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word ArgGroundTerm_64;
                MR_Word ArgRval_65;
                MR_Word MLDS_ArgType_67;
                MR_Word Rval0_68;
                MR_Word Rval_69;
                MR_Word GroundTerm_70;
                MR_Word STATE_VARIABLE_GroundTermMap_121_121;
                MR_Box conv0_ArgGroundTerm_64;

                mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_231)), &conv0_ArgGroundTerm_64, STATE_VARIABLE_GroundTermMap_0_90, &STATE_VARIABLE_GroundTermMap_121_121);
                ArgGroundTerm_64 = ((MR_Word) (conv0_ArgGroundTerm_64));
                ArgRval_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_64, (MR_Integer) 0))));
                MLDS_ArgType_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_64, (MR_Integer) 2))));
                ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_16, Context_26, MLDS_ArgType_67, (MR_Integer) 2, ArgRval_65, &Rval0_68, STATE_VARIABLE_GlobalData_0_88, STATE_VARIABLE_GlobalData_89);
                Rval_69 = ml_backend__ml_unify_gen_construct__ml_cast_cons_tag_3_f_0(MLDS_Type_22, ConsTag_24, Rval0_68);
                {
                  GroundTerm_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_70, 0) = ((MR_Box) (Rval_69));
                  MR_hl_field(MR_mktag(0), GroundTerm_70, 1) = ((MR_Box) (VarType_21));
                  MR_hl_field(MR_mktag(0), GroundTerm_70, 2) = ((MR_Box) (MLDS_Type_22));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_20)), ((MR_Box) (GroundTerm_70)), STATE_VARIABLE_GroundTermMap_121_121, STATE_VARIABLE_GroundTermMap_91);
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "no_tag arity != 1");
                  return;
                }
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_33 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_24, (MR_Integer) 0))));
          MR_Word Var_132;
          MR_Word ConstRval_219;
          MR_Word ConstGroundTerm_220;
          MR_Word Var_221;

          {
            Var_132 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_132, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), Var_132, 1) = ((MR_Box) (String_33));
          }
          {
            ConstRval_219 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConstRval_219, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ConstRval_219, 1) = ((MR_Box) (Var_132));
          }
          {
            Var_221 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_221, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[8]));
            MR_hl_field(MR_mktag(0), Var_221, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_10));
            MR_hl_field(MR_mktag(0), Var_221, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_221, 3) = ((MR_Box) (ArgVars_25));
            MR_hl_field(MR_mktag(0), Var_221, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_221, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
          {
            ConstGroundTerm_220 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConstGroundTerm_220, 0) = ((MR_Box) (ConstRval_219));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_220, 1) = ((MR_Box) (VarType_21));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_220, 2) = ((MR_Box) (MLDS_Type_22));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_220)), STATE_VARIABLE_GroundTermMap_0_90, STATE_VARIABLE_GroundTermMap_91);
          *STATE_VARIABLE_GlobalData_89 = STATE_VARIABLE_GlobalData_0_88;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_32 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_24, (MR_Integer) 0)));
          MR_Word Var_133;
          MR_Word ConstRval_173;
          MR_Word ConstGroundTerm_174;
          MR_Word Var_175;

          {
            Var_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
            MR_hl_field(MR_mktag(3), Var_133, 1) = MR_box_float(Float_32);
          }
          {
            ConstRval_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConstRval_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ConstRval_173, 1) = ((MR_Box) (Var_133));
          }
          {
            Var_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_175, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[8]));
            MR_hl_field(MR_mktag(0), Var_175, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_2));
            MR_hl_field(MR_mktag(0), Var_175, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_175, 3) = ((MR_Box) (ArgVars_25));
            MR_hl_field(MR_mktag(0), Var_175, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_175, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
          {
            ConstGroundTerm_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConstGroundTerm_174, 0) = ((MR_Box) (ConstRval_173));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_174, 1) = ((MR_Box) (VarType_21));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_174, 2) = ((MR_Box) (MLDS_Type_22));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_174)), STATE_VARIABLE_GroundTermMap_0_90, STATE_VARIABLE_GroundTermMap_91);
          *STATE_VARIABLE_GlobalData_89 = STATE_VARIABLE_GlobalData_0_88;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1))));
              MR_Word IntConst_30;
              MR_Word ConstRval_195;
              MR_Word ConstGroundTerm_196;
              MR_Word Var_197;

              IntConst_30 = ml_backend__ml_unify_gen_construct__int_tag_to_mlds_rval_const_3_f_0(VarType_21, MLDS_Type_22, IntTag_29);
              {
                ConstRval_195 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_195, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstRval_195, 1) = ((MR_Box) (IntConst_30));
              }
              {
                Var_197 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_197, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[8]));
                MR_hl_field(MR_mktag(0), Var_197, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_4));
                MR_hl_field(MR_mktag(0), Var_197, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_197, 3) = ((MR_Box) (ArgVars_25));
                MR_hl_field(MR_mktag(0), Var_197, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_197, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
              {
                ConstGroundTerm_196 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_196, 0) = ((MR_Box) (ConstRval_195));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_196, 1) = ((MR_Box) (VarType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_196, 2) = ((MR_Box) (MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_196)), STATE_VARIABLE_GroundTermMap_0_90, STATE_VARIABLE_GroundTermMap_91);
              *STATE_VARIABLE_GlobalData_89 = STATE_VARIABLE_GlobalData_0_88;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1))));
              MR_String ForeignTag_41 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 2))));
              MR_Word Var_129;
              MR_Word ConstRval_184;
              MR_Word ConstGroundTerm_185;
              MR_Word Var_186;

              {
                Var_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), Var_129, 1) = ((MR_Box) (ForeignLang_40));
                MR_hl_field(MR_mktag(3), Var_129, 2) = ((MR_Box) (ForeignTag_41));
                MR_hl_field(MR_mktag(3), Var_129, 3) = ((MR_Box) (MLDS_Type_22));
              }
              {
                ConstRval_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_184, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstRval_184, 1) = ((MR_Box) (Var_129));
              }
              {
                Var_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_186, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[8]));
                MR_hl_field(MR_mktag(0), Var_186, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_3));
                MR_hl_field(MR_mktag(0), Var_186, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_186, 3) = ((MR_Box) (ArgVars_25));
                MR_hl_field(MR_mktag(0), Var_186, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_186, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
              {
                ConstGroundTerm_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_185, 0) = ((MR_Box) (ConstRval_184));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_185, 1) = ((MR_Box) (VarType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_185, 2) = ((MR_Box) (MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_185)), STATE_VARIABLE_GroundTermMap_0_90, STATE_VARIABLE_GroundTermMap_91);
              *STATE_VARIABLE_GlobalData_89 = STATE_VARIABLE_GlobalData_0_88;
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "pred_closure_tag");
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
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "bad constant");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Ptag_228 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1))));

              ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_compound_17_p_0(ModuleInfo_16, Target_17, HighLevelData_18, VarTypes_19, Var_20, VarType_21, MLDS_Type_22, ConsId_23, ConsTag_24, Ptag_228, (MR_Word) ((MR_Unsigned) 0U), ArgVars_25, Context_26, STATE_VARIABLE_GlobalData_0_88, STATE_VARIABLE_GlobalData_89, STATE_VARIABLE_GroundTermMap_0_90, STATE_VARIABLE_GroundTermMap_91);
            }
            break;
          case (MR_Integer) 12:
            if ((ArgVars_25 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "no_tag arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_230 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_25, (MR_Integer) 1))));
              MR_Word Var_231 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_25, (MR_Integer) 0))));

              if ((Var_230 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word ArgGroundTerm_64;
                MR_Word ArgRval_65;
                MR_Word MLDS_ArgType_67;
                MR_Word Rval0_68;
                MR_Word Rval_69;
                MR_Word GroundTerm_70;
                MR_Word STATE_VARIABLE_GroundTermMap_121_121;
                MR_Box conv0_ArgGroundTerm_64;

                mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_231)), &conv0_ArgGroundTerm_64, STATE_VARIABLE_GroundTermMap_0_90, &STATE_VARIABLE_GroundTermMap_121_121);
                ArgGroundTerm_64 = ((MR_Word) (conv0_ArgGroundTerm_64));
                ArgRval_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_64, (MR_Integer) 0))));
                MLDS_ArgType_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_64, (MR_Integer) 2))));
                ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_16, Context_26, MLDS_ArgType_67, (MR_Integer) 2, ArgRval_65, &Rval0_68, STATE_VARIABLE_GlobalData_0_88, STATE_VARIABLE_GlobalData_89);
                Rval_69 = ml_backend__ml_unify_gen_construct__ml_cast_cons_tag_3_f_0(MLDS_Type_22, ConsTag_24, Rval0_68);
                {
                  GroundTerm_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), GroundTerm_70, 0) = ((MR_Box) (Rval_69));
                  MR_hl_field(MR_mktag(0), GroundTerm_70, 1) = ((MR_Box) (VarType_21));
                  MR_hl_field(MR_mktag(0), GroundTerm_70, 2) = ((MR_Box) (MLDS_Type_22));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_20)), ((MR_Box) (GroundTerm_70)), STATE_VARIABLE_GroundTermMap_121_121, STATE_VARIABLE_GroundTermMap_91);
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "no_tag arity != 1");
                  return;
                }
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word LocalSectag_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 2))));
              MR_Unsigned PrimSec_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_35, (MR_Integer) 1))));
              MR_Word Var_130;
              MR_Word Var_131;
              MR_Word ConstRval_206;
              MR_Word ConstGroundTerm_207;
              MR_Word Var_208;

              {
                Var_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_131, 1) = ((MR_Box) (PrimSec_38));
              }
              {
                Var_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_130, 1) = ((MR_Box) (Var_131));
              }
              {
                ConstRval_206 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_206, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), ConstRval_206, 1) = ((MR_Box) (MLDS_Type_22));
                MR_hl_field(MR_mktag(3), ConstRval_206, 2) = ((MR_Box) (Var_130));
              }
              {
                Var_208 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_208, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[8]));
                MR_hl_field(MR_mktag(0), Var_208, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_5));
                MR_hl_field(MR_mktag(0), Var_208, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_208, 3) = ((MR_Box) (ArgVars_25));
                MR_hl_field(MR_mktag(0), Var_208, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_208, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "constant tag with args");
              {
                ConstGroundTerm_207 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_207, 0) = ((MR_Box) (ConstRval_206));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_207, 1) = ((MR_Box) (VarType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_207, 2) = ((MR_Box) (MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_207)), STATE_VARIABLE_GroundTermMap_0_90, STATE_VARIABLE_GroundTermMap_91);
              *STATE_VARIABLE_GlobalData_89 = STATE_VARIABLE_GlobalData_0_88;
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ArgVarsTypesWidths_84;
              MR_Word RevOrRvals_85;
              MR_Word OrRvals_86;
              MR_Word TagwordRval_87;
              MR_Word Var_92;
              MR_Word STATE_VARIABLE_GroundTermMap_98_98;
              MR_Word Var_99;
              MR_Word Var_100;
              MR_Word LocalSectag_144 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 2))));
              MR_Unsigned PrimSec_145 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_144, (MR_Integer) 1))));
              MR_Word ConstGroundTerm_146;
              MR_Box conv5_RevOrRvals_85;
              MR_Box conv4_STATE_VARIABLE_GroundTermMap_98_98;

              {
                Var_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_6[1]));
                MR_hl_field(MR_mktag(0), Var_92, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_6));
                MR_hl_field(MR_mktag(0), Var_92, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_92, 3) = ((MR_Box) (VarTypes_19));
              }
              ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_1((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), ModuleInfo_16, Var_92, (MR_Integer) 0, VarType_21, ConsId_23, ArgVars_25, &ArgVarsTypesWidths_84);
              switch (HighLevelData_18) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "HighLevelData = yes");
                      return;
                    }
                  }
                  break;
              }
              mercury__list__foldl2_6_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[3]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[4]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[2]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[6]), ArgVarsTypesWidths_84, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_RevOrRvals_85, ((MR_Box) (STATE_VARIABLE_GroundTermMap_0_90)), &conv4_STATE_VARIABLE_GroundTermMap_98_98);
              RevOrRvals_85 = ((MR_Word) (conv5_RevOrRvals_85));
              STATE_VARIABLE_GroundTermMap_98_98 = ((MR_Word) (conv4_STATE_VARIABLE_GroundTermMap_98_98));
              mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevOrRvals_85, &OrRvals_86);
              {
                Var_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_100, 1) = ((MR_Box) (PrimSec_145));
              }
              {
                Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_99, 1) = ((MR_Box) (Var_100));
              }
              TagwordRval_87 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(Var_99, OrRvals_86);
              {
                ConstGroundTerm_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_146, 0) = ((MR_Box) (TagwordRval_87));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_146, 1) = ((MR_Box) (VarType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_146, 2) = ((MR_Box) (MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_20)), ((MR_Box) (ConstGroundTerm_146)), STATE_VARIABLE_GroundTermMap_98_98, STATE_VARIABLE_GroundTermMap_91);
              *STATE_VARIABLE_GlobalData_89 = STATE_VARIABLE_GlobalData_0_88;
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word Ptag_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1))));
              MR_Word ExtraRvals_75;
              MR_Word RemoteSectag_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 2))));
              MR_Unsigned SectagUint_77 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_76, (MR_Integer) 0))));
              MR_Word AddedBy_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_76, (MR_Integer) 1))));
              MR_Word UsesConstructors_79;

              UsesConstructors_79 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_17);
              switch (UsesConstructors_79) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word StagRval0_80;
                    MR_Word StagRval_81;
                    MR_Word Var_106;
                    MR_Word Var_110;
                    MR_Integer Var_111;

                    {
                      Var_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[7]));
                      MR_hl_field(MR_mktag(0), Var_106, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_8));
                      MR_hl_field(MR_mktag(0), Var_106, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_106, 3) = ((MR_Box) (AddedBy_78));
                      MR_hl_field(MR_mktag(0), Var_106, 4) = ((MR_Box) ((MR_Integer) 0));
                    }
                    mercury__require__expect_3_p_0(Var_106, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "AddedBy != sectag_added_by_unify");
                    Var_111 = mercury__uint__cast_to_int_1_f_0(SectagUint_77);
                    {
                      Var_110 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_110, 0) = ((MR_Box) (Var_111));
                    }
                    {
                      StagRval0_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), StagRval0_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), StagRval0_80, 1) = ((MR_Box) (Var_110));
                    }
                    switch (HighLevelData_18) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            StagRval_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), StagRval_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), StagRval_81, 1) = ((MR_Box) ((MR_Unsigned) 20U));
                            MR_hl_field(MR_mktag(3), StagRval_81, 2) = ((MR_Box) (StagRval0_80));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        StagRval_81 = StagRval0_80;
                        break;
                    }
                    {
                      ExtraRvals_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ExtraRvals_75, 0) = ((MR_Box) (StagRval_81));
                      MR_hl_field(MR_mktag(1), ExtraRvals_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_102;

                    {
                      Var_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[7]));
                      MR_hl_field(MR_mktag(0), Var_102, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_tag_15_p_0_9));
                      MR_hl_field(MR_mktag(0), Var_102, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_102, 3) = ((MR_Box) (AddedBy_78));
                      MR_hl_field(MR_mktag(0), Var_102, 4) = ((MR_Box) ((MR_Integer) 1));
                    }
                    mercury__require__expect_3_p_0(Var_102, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_ground_term_conjunct_tag\'/15", (MR_String) "AddedBy != sectag_added_by_constructor");
                    ExtraRvals_75 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
              }
              ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_compound_17_p_0(ModuleInfo_16, Target_17, HighLevelData_18, VarTypes_19, Var_20, VarType_21, MLDS_Type_22, ConsId_23, ConsTag_24, Ptag_74, ExtraRvals_75, ArgVars_25, Context_26, STATE_VARIABLE_GlobalData_0_88, STATE_VARIABLE_GlobalData_89, STATE_VARIABLE_GroundTermMap_0_90, STATE_VARIABLE_GroundTermMap_91);
            }
            break;
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__int_tag_to_mlds_rval_const_3_f_0(
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
          MR_Integer Int_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IntTag_7, (MR_Integer) 0))));
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
          MR_Unsigned UInt_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), IntTag_7, (MR_Integer) 0))));

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
              int64_t Int64_17 = MR_unbox_int64((MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 1)));

              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), Const_8, 1) = MR_box_int64(Int64_17);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              uint64_t UInt64_18 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 1)));

              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Const_8, 1) = MR_box_uint64(UInt64_18);
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
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_compound_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = hlds__vartypes__lookup_var_type_func_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_compound_17_p_0(
  MR_Word ModuleInfo_18,
  MR_Word Target_19,
  MR_Word HighLevelData_20,
  MR_Word VarTypes_21,
  MR_Word Var_22,
  MR_Word VarType_23,
  MR_Word MLDS_Type_24,
  MR_Word ConsId_25,
  MR_Word ConsTag_26,
  MR_Word Ptag_27,
  MR_Word ExtraRvals_28,
  MR_Word ArgVars_29,
  MR_Word Context_30,
  MR_Word STATE_VARIABLE_GlobalData_0_37,
  MR_Word * STATE_VARIABLE_GlobalData_38,
  MR_Word STATE_VARIABLE_GroundTermMap_0_39,
  MR_Word * STATE_VARIABLE_GroundTermMap_40)
{
  {
    MR_Word ArgVarsTypesWidths_33;
    MR_Word ArgRvalsTypesWidths_34;
    MR_Word UsesBaseClass_35;
    MR_Word GroundTerm_36;
    MR_Word Var_41;
    MR_Word STATE_VARIABLE_GlobalData_45_45;
    MR_Word STATE_VARIABLE_GroundTermMap_46_46;
    MR_Word Var_47;

    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_ground_term_conjunct_compound_17_p_0_1));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (VarTypes_21));
    }
    ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_1((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), ModuleInfo_18, Var_41, (MR_Integer) 0, VarType_23, ConsId_25, ArgVars_29, &ArgVarsTypesWidths_33);
    switch (HighLevelData_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_unify_gen_construct__construct_ground_term_initializers_lld_8_p_0(ModuleInfo_18, Context_30, ArgVarsTypesWidths_33, &ArgRvalsTypesWidths_34, STATE_VARIABLE_GlobalData_0_37, &STATE_VARIABLE_GlobalData_45_45, STATE_VARIABLE_GroundTermMap_0_39, &STATE_VARIABLE_GroundTermMap_46_46);
        break;
      case (MR_Integer) 1:
        ml_backend__ml_unify_gen_construct__construct_ground_term_initializers_hld_8_p_0(ModuleInfo_18, Context_30, ArgVarsTypesWidths_33, &ArgRvalsTypesWidths_34, STATE_VARIABLE_GlobalData_0_37, &STATE_VARIABLE_GlobalData_45_45, STATE_VARIABLE_GroundTermMap_0_39, &STATE_VARIABLE_GroundTermMap_46_46);
        break;
    }
    UsesBaseClass_35 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ConsTag_26);
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (ConsId_25));
    }
    ml_backend__ml_unify_gen_construct__construct_static_ground_term_14_p_0(ModuleInfo_18, Target_19, HighLevelData_20, Context_30, VarType_23, MLDS_Type_24, Var_47, UsesBaseClass_35, Ptag_27, ExtraRvals_28, ArgRvalsTypesWidths_34, &GroundTerm_36, STATE_VARIABLE_GlobalData_45_45, STATE_VARIABLE_GlobalData_38);
    mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (Var_22)), ((MR_Box) (GroundTerm_36)), STATE_VARIABLE_GroundTermMap_46_46, STATE_VARIABLE_GroundTermMap_40);
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__construct_ground_term_initializers_lld_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6,
  MR_Word STATE_VARIABLE_GroundTermMap_0_7,
  MR_Word * STATE_VARIABLE_GroundTermMap_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_GroundTermMap_8 = STATE_VARIABLE_GroundTermMap_0_7;
    *STATE_VARIABLE_GlobalData_6 = STATE_VARIABLE_GlobalData_0_5;
  }
  else
  {
    MR_Word ArgVarTypeWidth_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgVarsTypesWidths_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word RvalTypeWidth_21;
    MR_Word RvalsTypesWidths_22;
    MR_Word STATE_VARIABLE_GlobalData_29_29;
    MR_Word STATE_VARIABLE_GroundTermMap_30_30;
    MR_Word ArgVar_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_19, (MR_Integer) 0))));
    MR_Word ArgPosWidth_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_19, (MR_Integer) 2))));
    MR_Word ArgGroundTerm_46;
    MR_Word ArgRval0_47;
    MR_Word MLDS_ArgType_49;
    MR_Word ArgWidth_50;
    MR_Word ArgRval_51;
    MR_Box conv0_ArgGroundTerm_46;

    mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (ArgVar_43)), &conv0_ArgGroundTerm_46, STATE_VARIABLE_GroundTermMap_0_7, &STATE_VARIABLE_GroundTermMap_30_30);
    ArgGroundTerm_46 = ((MR_Word) (conv0_ArgGroundTerm_46));
    ArgRval0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_46, (MR_Integer) 0))));
    MLDS_ArgType_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_46, (MR_Integer) 2))));
    ArgWidth_50 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_45);
    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_1, Context_2, MLDS_ArgType_49, ArgWidth_50, ArgRval0_47, &ArgRval_51, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_29_29);
    {
      RvalTypeWidth_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RvalTypeWidth_21, 0) = ((MR_Box) (ArgRval_51));
      MR_hl_field(MR_mktag(0), RvalTypeWidth_21, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), RvalTypeWidth_21, 2) = ((MR_Box) (ArgPosWidth_45));
      MR_hl_field(MR_mktag(0), RvalTypeWidth_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ml_backend__ml_unify_gen_construct__construct_ground_term_initializers_lld_8_p_0(ModuleInfo_1, Context_2, ArgVarsTypesWidths_20, &RvalsTypesWidths_22, STATE_VARIABLE_GlobalData_29_29, STATE_VARIABLE_GlobalData_6, STATE_VARIABLE_GroundTermMap_30_30, STATE_VARIABLE_GroundTermMap_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RvalTypeWidth_21));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RvalsTypesWidths_22));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__construct_ground_term_initializers_hld_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6,
  MR_Word STATE_VARIABLE_GroundTermMap_0_7,
  MR_Word * STATE_VARIABLE_GroundTermMap_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_GroundTermMap_8 = STATE_VARIABLE_GroundTermMap_0_7;
    *STATE_VARIABLE_GlobalData_6 = STATE_VARIABLE_GlobalData_0_5;
  }
  else
  {
    MR_Word ArgVarTypeWidth_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgVarsTypesWidths_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word RvalTypeWidth_21;
    MR_Word RvalsTypesWidths_22;
    MR_Word STATE_VARIABLE_GlobalData_29_29;
    MR_Word STATE_VARIABLE_GroundTermMap_30_30;
    MR_Word ArgVar_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_19, (MR_Integer) 0))));
    MR_Word ConsArgType_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_19, (MR_Integer) 1))));
    MR_Word ArgPosWidth_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_19, (MR_Integer) 2))));
    MR_Word ArgGroundTerm_46;
    MR_Word ArgRval0_47;
    MR_Word ArgType_48;
    MR_Word ArgWidth_50;
    MR_Word BoxedArgType_51;
    MR_Word ArgRval_52;
    MR_Box conv0_ArgGroundTerm_46;

    mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (ArgVar_43)), &conv0_ArgGroundTerm_46, STATE_VARIABLE_GroundTermMap_0_7, &STATE_VARIABLE_GroundTermMap_30_30);
    ArgGroundTerm_46 = ((MR_Word) (conv0_ArgGroundTerm_46));
    ArgRval0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_46, (MR_Integer) 0))));
    ArgType_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_46, (MR_Integer) 1))));
    ArgWidth_50 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_45);
    ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_1, (MR_Integer) 1, ConsArgType_44, ArgWidth_50, &BoxedArgType_51);
    switch (MR_tag((MR_Word) BoxedArgType_51)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word MLDS_ArgType_71;

          MLDS_ArgType_71 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_1, ArgType_48);
          ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_1, Context_2, MLDS_ArgType_71, (MR_Integer) 2, ArgRval0_47, &ArgRval_52, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_29_29);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_1, ArgType_48, BoxedArgType_51, (MR_Integer) 0, ArgRval0_47, &ArgRval_52);
          STATE_VARIABLE_GlobalData_29_29 = STATE_VARIABLE_GlobalData_0_5;
        }
        break;
      case (MR_Integer) 3:
        {
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_1, ArgType_48, BoxedArgType_51, (MR_Integer) 0, ArgRval0_47, &ArgRval_52);
          STATE_VARIABLE_GlobalData_29_29 = STATE_VARIABLE_GlobalData_0_5;
        }
        break;
    }
    {
      RvalTypeWidth_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RvalTypeWidth_21, 0) = ((MR_Box) (ArgRval_52));
      MR_hl_field(MR_mktag(0), RvalTypeWidth_21, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), RvalTypeWidth_21, 2) = ((MR_Box) (ArgPosWidth_45));
      MR_hl_field(MR_mktag(0), RvalTypeWidth_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ml_backend__ml_unify_gen_construct__construct_ground_term_initializers_hld_8_p_0(ModuleInfo_1, Context_2, ArgVarsTypesWidths_20, &RvalsTypesWidths_22, STATE_VARIABLE_GlobalData_29_29, STATE_VARIABLE_GlobalData_6, STATE_VARIABLE_GroundTermMap_30_30, STATE_VARIABLE_GroundTermMap_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RvalTypeWidth_21));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RvalsTypesWidths_22));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__288__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__220__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__144__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0(
  MR_Word Var_12,
  MR_Word ConsId_13,
  MR_Word ArgVars_14,
  MR_Word ArgModes_15,
  MR_Word TakeAddr_16,
  MR_Word HowToConstruct_17,
  MR_Word Context_18,
  MR_Word * Defns_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_110,
  MR_Word * STATE_VARIABLE_Info_111)
{
  {
    MR_bool succeeded;
    MR_Word ConsTag_22;

    ml_backend__ml_unify_gen_util__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_110, ConsId_13, &ConsTag_22);
    switch (MR_tag((MR_Word) ConsTag_22)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_22)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word UsesBaseClass_224;

              UsesBaseClass_224 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ConsTag_22);
              ml_backend__ml_unify_gen_construct__ml_gen_construct_compound_14_p_0(ConsId_13, (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), (MR_Word) ((MR_Unsigned) 0U), UsesBaseClass_224, Var_12, ArgVars_14, ArgModes_15, TakeAddr_16, HowToConstruct_17, Context_18, Defns_19, Stmts_20, STATE_VARIABLE_Info_0_110, STATE_VARIABLE_Info_111);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word VarType_47;
              MR_Word VarLval_48;
              MR_Word ModuleInfo_49;
              MR_Word MLDS_Type_50;
              MR_Word ConstRval_52;
              MR_Word GroundTerm_90;
              MR_Word Stmt_91;
              MR_Word Var_134;

              {
                Var_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_134, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[8]));
                MR_hl_field(MR_mktag(0), Var_134, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_1));
                MR_hl_field(MR_mktag(0), Var_134, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_134, 3) = ((MR_Box) (ArgVars_14));
                MR_hl_field(MR_mktag(0), Var_134, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_134, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "constant has arguments");
              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_110, Var_12, &VarType_47);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_110, Var_12, &VarLval_48);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_110, &ModuleInfo_49);
              MLDS_Type_50 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_49, VarType_47);
              switch (MR_tag((MR_Word) ConsTag_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ConstRval_52 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_4[0]), VarType_47, MLDS_Type_50);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String String_54 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_22, (MR_Integer) 0))));
                    MR_Word Var_152;

                    {
                      Var_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                      MR_hl_field(MR_mktag(3), Var_152, 1) = ((MR_Box) (String_54));
                    }
                    {
                      ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_152));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Float Float_53 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_22, (MR_Integer) 0)));
                    MR_Word Var_153;

                    {
                      Var_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_153, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                      MR_hl_field(MR_mktag(3), Var_153, 1) = MR_box_float(Float_53);
                    }
                    {
                      ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_153));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word IntTag_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));

                        ConstRval_52 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(IntTag_51, VarType_47, MLDS_Type_50);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ForeignLang_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_String ForeignTag_56 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_Word Var_151;

                        {
                          Var_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                          MR_hl_field(MR_mktag(3), Var_151, 1) = ((MR_Box) (ForeignLang_55));
                          MR_hl_field(MR_mktag(3), Var_151, 2) = ((MR_Box) (ForeignTag_56));
                          MR_hl_field(MR_mktag(3), Var_151, 3) = ((MR_Box) (MLDS_Type_50));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_151));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word ModuleName0_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_String TypeName_64 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_Integer TypeArity_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                        MR_Word ModuleName_66;
                        MR_Word MLDS_Module_67;
                        MR_Word RttiTypeCtor_68;
                        MR_Word RttiId_69;
                        MR_Word Const_70;
                        MR_Word Var_148;

                        ModuleName_66 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_63);
                        MLDS_Module_67 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_66);
                        {
                          RttiTypeCtor_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_68, 0) = ((MR_Box) (ModuleName_66));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_68, 1) = ((MR_Box) (TypeName_64));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_68, 2) = ((MR_Box) (TypeArity_65));
                        }
                        {
                          RttiId_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), RttiId_69, 0) = ((MR_Box) (RttiTypeCtor_68));
                          MR_hl_field(MR_mktag(0), RttiId_69, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                        }
                        {
                          Const_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                          MR_hl_field(MR_mktag(3), Const_70, 1) = ((MR_Box) (MLDS_Module_67));
                          MR_hl_field(MR_mktag(3), Const_70, 2) = ((MR_Box) (RttiId_69));
                        }
                        {
                          Var_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_148, 1) = ((MR_Box) (Const_70));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (MLDS_Type_50));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_148));
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word ClassId_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_String Instance_72 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                        MR_Word TCName_73;
                        MR_Word Var_145;
                        MR_Word Var_146;
                        MR_Word ModuleName_158 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word MLDS_Module_159;
                        MR_Word RttiId_160;
                        MR_Word Const_161;

                        MLDS_Module_159 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_158);
                        TCName_73 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_71);
                        {
                          Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (ModuleName_158));
                          MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) (Instance_72));
                        }
                        {
                          RttiId_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), RttiId_160, 0) = ((MR_Box) (TCName_73));
                          MR_hl_field(MR_mktag(1), RttiId_160, 1) = ((MR_Box) (Var_145));
                        }
                        {
                          Const_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                          MR_hl_field(MR_mktag(3), Const_161, 1) = ((MR_Box) (MLDS_Module_159));
                          MR_hl_field(MR_mktag(3), Const_161, 2) = ((MR_Box) (RttiId_160));
                        }
                        {
                          Var_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_146, 1) = ((MR_Box) (Const_161));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (MLDS_Type_50));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_146));
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Integer ConstNum_207 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word ConstStructMap_208;
                        MR_Word GroundTerm0_209;
                        MR_Box conv1_GroundTerm0_209;

                        ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_110, &ConstStructMap_208);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_208, ConstNum_207, &conv1_GroundTerm0_209);
                        GroundTerm0_209 = ((MR_Word) (conv1_GroundTerm0_209));
                        ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_209, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Integer ConstNum_216 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word ConstStructMap_217;
                        MR_Word GroundTerm0_218;
                        MR_Box conv2_GroundTerm0_218;

                        ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_110, &ConstStructMap_217);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_217, ConstNum_216, &conv2_GroundTerm0_218);
                        GroundTerm0_218 = ((MR_Word) (conv2_GroundTerm0_218));
                        ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_218, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Integer ConstNum_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word ConstStructMap_76;
                        MR_Word GroundTerm0_77;
                        MR_Box conv0_GroundTerm0_77;

                        ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_110, &ConstStructMap_76);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_76, ConstNum_74, &conv0_GroundTerm0_77);
                        GroundTerm0_77 = ((MR_Word) (conv0_GroundTerm0_77));
                        ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_77, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word PredId_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Integer ProcId_81 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_Word PredLabel_82;
                        MR_Word PredModule_83;
                        MR_Word ProcLabel_84;
                        MR_Word QualProcLabel_85;
                        MR_Word Var_142;
                        MR_Word Var_144;
                        MR_Word Const_162;

                        {
                          Var_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_142, 0) = ((MR_Box) (PredId_80));
                          MR_hl_field(MR_mktag(0), Var_142, 1) = ((MR_Box) (ProcId_81));
                        }
                        ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_49, Var_142, &PredLabel_82, &PredModule_83);
                        {
                          ProcLabel_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ProcLabel_84, 0) = ((MR_Box) (PredLabel_82));
                          MR_hl_field(MR_mktag(0), ProcLabel_84, 1) = ((MR_Box) (ProcId_81));
                        }
                        {
                          QualProcLabel_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), QualProcLabel_85, 0) = ((MR_Box) (PredModule_83));
                          MR_hl_field(MR_mktag(0), QualProcLabel_85, 1) = ((MR_Box) (ProcLabel_84));
                        }
                        {
                          Const_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
                          MR_hl_field(MR_mktag(3), Const_162, 1) = ((MR_Box) (QualProcLabel_85));
                          MR_hl_field(MR_mktag(3), Const_162, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_144, 1) = ((MR_Box) (Const_162));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (MLDS_Type_50));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_144));
                        }
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "deep_profiling_proc_layout_tag NYI");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "table_io_entry_tag NYI");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        MR_Word LocalSectag_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_Unsigned PrimSec_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_58, (MR_Integer) 1))));
                        MR_Word Var_149;
                        MR_Word Var_150;

                        {
                          Var_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), Var_150, 1) = ((MR_Box) (PrimSec_61));
                        }
                        {
                          Var_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_149, 1) = ((MR_Box) (Var_150));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (MLDS_Type_50));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_149));
                        }
                      }
                      break;
                  }
                  break;
              }
              {
                GroundTerm_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_90, 0) = ((MR_Box) (ConstRval_52));
                MR_hl_field(MR_mktag(0), GroundTerm_90, 1) = ((MR_Box) (VarType_47));
                MR_hl_field(MR_mktag(0), GroundTerm_90, 2) = ((MR_Box) (MLDS_Type_50));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_12, GroundTerm_90, STATE_VARIABLE_Info_0_110, STATE_VARIABLE_Info_111);
              Stmt_91 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_48, ConstRval_52, Context_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_20 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_91));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_120;
              MR_Word ArgVar_93;
              MR_Word ArgMode_94;
              MR_Word Var_124;
              MR_Word Var_125;

              {
                Var_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[6]));
                MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_2));
                MR_hl_field(MR_mktag(0), Var_120, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_120, 3) = ((MR_Box) (TakeAddr_16));
                MR_hl_field(MR_mktag(0), Var_120, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_120, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "notag or direct_arg_tag: take_addr");
              succeeded = ((MR_tag((MR_Word) ArgVars_14)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgVar_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_14, (MR_Integer) 0))));
                Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_14, (MR_Integer) 1))));
                succeeded = (Var_124 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ArgModes_15)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    ArgMode_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_15, (MR_Integer) 0))));
                    Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_15, (MR_Integer) 1))));
                    succeeded = (Var_125 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word VarType_176;
                MR_Word VarLval_177;
                MR_Word ModuleInfo_178;
                MR_Word MLDS_Type_179;
                MR_Word ArgGroundTerm_95;

                ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_110, Var_12, &VarType_176);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_110, Var_12, &VarLval_177);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_110, &ModuleInfo_178);
                MLDS_Type_179 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_178, VarType_176);
                succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_110, ArgVar_93, &ArgGroundTerm_95);
                if (succeeded)
                {
                  MR_Word ArgRval_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_95, (MR_Integer) 0))));
                  MR_Word MLDS_ArgType_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_95, (MR_Integer) 2))));
                  MR_Word GlobalData0_99;
                  MR_Word Rval0_100;
                  MR_Word GlobalData_101;
                  MR_Word Rval_102;
                  MR_Word STATE_VARIABLE_Info_127_127;
                  MR_Word GroundTerm_163;
                  MR_Word Stmt_164;

                  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_110, &GlobalData0_99);
                  ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_178, Context_18, MLDS_ArgType_98, (MR_Integer) 2, ArgRval_96, &Rval0_100, GlobalData0_99, &GlobalData_101);
                  ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_101, STATE_VARIABLE_Info_0_110, &STATE_VARIABLE_Info_127_127);
                  Rval_102 = ml_backend__ml_unify_gen_construct__ml_cast_cons_tag_3_f_0(MLDS_Type_179, ConsTag_22, Rval0_100);
                  {
                    GroundTerm_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), GroundTerm_163, 0) = ((MR_Box) (Rval_102));
                    MR_hl_field(MR_mktag(0), GroundTerm_163, 1) = ((MR_Box) (VarType_176));
                    MR_hl_field(MR_mktag(0), GroundTerm_163, 2) = ((MR_Box) (MLDS_Type_179));
                  }
                  ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_12, GroundTerm_163, STATE_VARIABLE_Info_127_127, STATE_VARIABLE_Info_111);
                  Stmt_164 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_177, Rval_102, Context_18);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *Stmts_20 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_164));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                else
                {
                  MR_Word ArgLval_103;
                  MR_Word ArgType_104;

                  ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_110, ArgVar_93, &ArgLval_103);
                  ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_110, ArgVar_93, &ArgType_104);
                  if ((ConsTag_22 == (MR_Word) ((MR_Unsigned) 8U)))
                  {
                    MR_Word Stmt_165;
                    MR_Word ArgRval_166;
                    MR_Word Rval_167;

                    {
                      ArgRval_166 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ArgRval_166, 0) = ((MR_Box) (ArgLval_103));
                    }
                    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_178, ArgType_104, VarType_176, (MR_Integer) 0, ArgRval_166, &Rval_167);
                    Stmt_165 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_177, Rval_167, Context_18);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *Stmts_20 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_165));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  else
                  {
                    MR_Word Ptag_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));

                    ml_backend__ml_unify_gen_construct__ml_gen_dynamic_construct_direct_arg_9_p_0(ModuleInfo_178, Ptag_105, ArgMode_94, ArgLval_103, ArgType_104, VarLval_177, VarType_176, Context_18, Stmts_20);
                  }
                  *STATE_VARIABLE_Info_111 = STATE_VARIABLE_Info_0_110;
                }
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "no_tag or direct_arg_tag: arity != 1");
                  return;
                }
              }
              *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word VarType_47;
          MR_Word VarLval_48;
          MR_Word ModuleInfo_49;
          MR_Word MLDS_Type_50;
          MR_Word ConstRval_52;
          MR_Word GroundTerm_90;
          MR_Word Stmt_91;
          MR_Word Var_134;

          {
            Var_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_134, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[8]));
            MR_hl_field(MR_mktag(0), Var_134, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_1));
            MR_hl_field(MR_mktag(0), Var_134, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_134, 3) = ((MR_Box) (ArgVars_14));
            MR_hl_field(MR_mktag(0), Var_134, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_134, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "constant has arguments");
          ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_110, Var_12, &VarType_47);
          ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_110, Var_12, &VarLval_48);
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_110, &ModuleInfo_49);
          MLDS_Type_50 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_49, VarType_47);
          switch (MR_tag((MR_Word) ConsTag_22)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ConstRval_52 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_4[0]), VarType_47, MLDS_Type_50);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String String_54 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_22, (MR_Integer) 0))));
                MR_Word Var_152;

                {
                  Var_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                  MR_hl_field(MR_mktag(3), Var_152, 1) = ((MR_Box) (String_54));
                }
                {
                  ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_152));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Float Float_53 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_22, (MR_Integer) 0)));
                MR_Word Var_153;

                {
                  Var_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_153, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                  MR_hl_field(MR_mktag(3), Var_153, 1) = MR_box_float(Float_53);
                }
                {
                  ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_153));
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word IntTag_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));

                    ConstRval_52 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(IntTag_51, VarType_47, MLDS_Type_50);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ForeignLang_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                    MR_String ForeignTag_56 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                    MR_Word Var_151;

                    {
                      Var_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                      MR_hl_field(MR_mktag(3), Var_151, 1) = ((MR_Box) (ForeignLang_55));
                      MR_hl_field(MR_mktag(3), Var_151, 2) = ((MR_Box) (ForeignTag_56));
                      MR_hl_field(MR_mktag(3), Var_151, 3) = ((MR_Box) (MLDS_Type_50));
                    }
                    {
                      ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_151));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word ModuleName0_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                    MR_String TypeName_64 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                    MR_Integer TypeArity_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                    MR_Word ModuleName_66;
                    MR_Word MLDS_Module_67;
                    MR_Word RttiTypeCtor_68;
                    MR_Word RttiId_69;
                    MR_Word Const_70;
                    MR_Word Var_148;

                    ModuleName_66 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_63);
                    MLDS_Module_67 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_66);
                    {
                      RttiTypeCtor_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), RttiTypeCtor_68, 0) = ((MR_Box) (ModuleName_66));
                      MR_hl_field(MR_mktag(0), RttiTypeCtor_68, 1) = ((MR_Box) (TypeName_64));
                      MR_hl_field(MR_mktag(0), RttiTypeCtor_68, 2) = ((MR_Box) (TypeArity_65));
                    }
                    {
                      RttiId_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), RttiId_69, 0) = ((MR_Box) (RttiTypeCtor_68));
                      MR_hl_field(MR_mktag(0), RttiId_69, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                    }
                    {
                      Const_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Const_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                      MR_hl_field(MR_mktag(3), Const_70, 1) = ((MR_Box) (MLDS_Module_67));
                      MR_hl_field(MR_mktag(3), Const_70, 2) = ((MR_Box) (RttiId_69));
                    }
                    {
                      Var_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_148, 1) = ((MR_Box) (Const_70));
                    }
                    {
                      ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (MLDS_Type_50));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_148));
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word ClassId_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                    MR_String Instance_72 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                    MR_Word TCName_73;
                    MR_Word Var_145;
                    MR_Word Var_146;
                    MR_Word ModuleName_158 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                    MR_Word MLDS_Module_159;
                    MR_Word RttiId_160;
                    MR_Word Const_161;

                    MLDS_Module_159 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_158);
                    TCName_73 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_71);
                    {
                      Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (ModuleName_158));
                      MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) (Instance_72));
                    }
                    {
                      RttiId_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), RttiId_160, 0) = ((MR_Box) (TCName_73));
                      MR_hl_field(MR_mktag(1), RttiId_160, 1) = ((MR_Box) (Var_145));
                    }
                    {
                      Const_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Const_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                      MR_hl_field(MR_mktag(3), Const_161, 1) = ((MR_Box) (MLDS_Module_159));
                      MR_hl_field(MR_mktag(3), Const_161, 2) = ((MR_Box) (RttiId_160));
                    }
                    {
                      Var_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_146, 1) = ((MR_Box) (Const_161));
                    }
                    {
                      ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (MLDS_Type_50));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_146));
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Integer ConstNum_207 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                    MR_Word ConstStructMap_208;
                    MR_Word GroundTerm0_209;
                    MR_Box conv1_GroundTerm0_209;

                    ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_110, &ConstStructMap_208);
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_208, ConstNum_207, &conv1_GroundTerm0_209);
                    GroundTerm0_209 = ((MR_Word) (conv1_GroundTerm0_209));
                    ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_209, (MR_Integer) 0))));
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Integer ConstNum_216 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                    MR_Word ConstStructMap_217;
                    MR_Word GroundTerm0_218;
                    MR_Box conv2_GroundTerm0_218;

                    ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_110, &ConstStructMap_217);
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_217, ConstNum_216, &conv2_GroundTerm0_218);
                    GroundTerm0_218 = ((MR_Word) (conv2_GroundTerm0_218));
                    ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_218, (MR_Integer) 0))));
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Integer ConstNum_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                    MR_Word ConstStructMap_76;
                    MR_Word GroundTerm0_77;
                    MR_Box conv0_GroundTerm0_77;

                    ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_110, &ConstStructMap_76);
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_76, ConstNum_74, &conv0_GroundTerm0_77);
                    GroundTerm0_77 = ((MR_Word) (conv0_GroundTerm0_77));
                    ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_77, (MR_Integer) 0))));
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    MR_Word PredId_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                    MR_Integer ProcId_81 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                    MR_Word PredLabel_82;
                    MR_Word PredModule_83;
                    MR_Word ProcLabel_84;
                    MR_Word QualProcLabel_85;
                    MR_Word Var_142;
                    MR_Word Var_144;
                    MR_Word Const_162;

                    {
                      Var_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_142, 0) = ((MR_Box) (PredId_80));
                      MR_hl_field(MR_mktag(0), Var_142, 1) = ((MR_Box) (ProcId_81));
                    }
                    ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_49, Var_142, &PredLabel_82, &PredModule_83);
                    {
                      ProcLabel_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ProcLabel_84, 0) = ((MR_Box) (PredLabel_82));
                      MR_hl_field(MR_mktag(0), ProcLabel_84, 1) = ((MR_Box) (ProcId_81));
                    }
                    {
                      QualProcLabel_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), QualProcLabel_85, 0) = ((MR_Box) (PredModule_83));
                      MR_hl_field(MR_mktag(0), QualProcLabel_85, 1) = ((MR_Box) (ProcLabel_84));
                    }
                    {
                      Const_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Const_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
                      MR_hl_field(MR_mktag(3), Const_162, 1) = ((MR_Box) (QualProcLabel_85));
                      MR_hl_field(MR_mktag(3), Const_162, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_144, 1) = ((MR_Box) (Const_162));
                    }
                    {
                      ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (MLDS_Type_50));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_144));
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "deep_profiling_proc_layout_tag NYI");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "table_io_entry_tag NYI");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 13:
                  {
                    MR_Word LocalSectag_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                    MR_Unsigned PrimSec_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_58, (MR_Integer) 1))));
                    MR_Word Var_149;
                    MR_Word Var_150;

                    {
                      Var_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), Var_150, 1) = ((MR_Box) (PrimSec_61));
                    }
                    {
                      Var_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_149, 1) = ((MR_Box) (Var_150));
                    }
                    {
                      ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (MLDS_Type_50));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_149));
                    }
                  }
                  break;
              }
              break;
          }
          {
            GroundTerm_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), GroundTerm_90, 0) = ((MR_Box) (ConstRval_52));
            MR_hl_field(MR_mktag(0), GroundTerm_90, 1) = ((MR_Box) (VarType_47));
            MR_hl_field(MR_mktag(0), GroundTerm_90, 2) = ((MR_Box) (MLDS_Type_50));
          }
          ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_12, GroundTerm_90, STATE_VARIABLE_Info_0_110, STATE_VARIABLE_Info_111);
          Stmt_91 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_48, ConstRval_52, Context_18);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_20 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_91));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 13:
            {
              MR_Word VarType_47;
              MR_Word VarLval_48;
              MR_Word ModuleInfo_49;
              MR_Word MLDS_Type_50;
              MR_Word ConstRval_52;
              MR_Word GroundTerm_90;
              MR_Word Stmt_91;
              MR_Word Var_134;

              {
                Var_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_134, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[8]));
                MR_hl_field(MR_mktag(0), Var_134, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_1));
                MR_hl_field(MR_mktag(0), Var_134, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_134, 3) = ((MR_Box) (ArgVars_14));
                MR_hl_field(MR_mktag(0), Var_134, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_134, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "constant has arguments");
              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_110, Var_12, &VarType_47);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_110, Var_12, &VarLval_48);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_110, &ModuleInfo_49);
              MLDS_Type_50 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_49, VarType_47);
              switch (MR_tag((MR_Word) ConsTag_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ConstRval_52 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_4[0]), VarType_47, MLDS_Type_50);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String String_54 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_22, (MR_Integer) 0))));
                    MR_Word Var_152;

                    {
                      Var_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                      MR_hl_field(MR_mktag(3), Var_152, 1) = ((MR_Box) (String_54));
                    }
                    {
                      ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_152));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Float Float_53 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_22, (MR_Integer) 0)));
                    MR_Word Var_153;

                    {
                      Var_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_153, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                      MR_hl_field(MR_mktag(3), Var_153, 1) = MR_box_float(Float_53);
                    }
                    {
                      ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_153));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word IntTag_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));

                        ConstRval_52 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(IntTag_51, VarType_47, MLDS_Type_50);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ForeignLang_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_String ForeignTag_56 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_Word Var_151;

                        {
                          Var_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                          MR_hl_field(MR_mktag(3), Var_151, 1) = ((MR_Box) (ForeignLang_55));
                          MR_hl_field(MR_mktag(3), Var_151, 2) = ((MR_Box) (ForeignTag_56));
                          MR_hl_field(MR_mktag(3), Var_151, 3) = ((MR_Box) (MLDS_Type_50));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_151));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word ModuleName0_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_String TypeName_64 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_Integer TypeArity_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                        MR_Word ModuleName_66;
                        MR_Word MLDS_Module_67;
                        MR_Word RttiTypeCtor_68;
                        MR_Word RttiId_69;
                        MR_Word Const_70;
                        MR_Word Var_148;

                        ModuleName_66 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_63);
                        MLDS_Module_67 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_66);
                        {
                          RttiTypeCtor_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_68, 0) = ((MR_Box) (ModuleName_66));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_68, 1) = ((MR_Box) (TypeName_64));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_68, 2) = ((MR_Box) (TypeArity_65));
                        }
                        {
                          RttiId_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), RttiId_69, 0) = ((MR_Box) (RttiTypeCtor_68));
                          MR_hl_field(MR_mktag(0), RttiId_69, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                        }
                        {
                          Const_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                          MR_hl_field(MR_mktag(3), Const_70, 1) = ((MR_Box) (MLDS_Module_67));
                          MR_hl_field(MR_mktag(3), Const_70, 2) = ((MR_Box) (RttiId_69));
                        }
                        {
                          Var_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_148, 1) = ((MR_Box) (Const_70));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (MLDS_Type_50));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_148));
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word ClassId_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_String Instance_72 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                        MR_Word TCName_73;
                        MR_Word Var_145;
                        MR_Word Var_146;
                        MR_Word ModuleName_158 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word MLDS_Module_159;
                        MR_Word RttiId_160;
                        MR_Word Const_161;

                        MLDS_Module_159 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_158);
                        TCName_73 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_71);
                        {
                          Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (ModuleName_158));
                          MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) (Instance_72));
                        }
                        {
                          RttiId_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), RttiId_160, 0) = ((MR_Box) (TCName_73));
                          MR_hl_field(MR_mktag(1), RttiId_160, 1) = ((MR_Box) (Var_145));
                        }
                        {
                          Const_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                          MR_hl_field(MR_mktag(3), Const_161, 1) = ((MR_Box) (MLDS_Module_159));
                          MR_hl_field(MR_mktag(3), Const_161, 2) = ((MR_Box) (RttiId_160));
                        }
                        {
                          Var_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_146, 1) = ((MR_Box) (Const_161));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (MLDS_Type_50));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_146));
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Integer ConstNum_207 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word ConstStructMap_208;
                        MR_Word GroundTerm0_209;
                        MR_Box conv1_GroundTerm0_209;

                        ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_110, &ConstStructMap_208);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_208, ConstNum_207, &conv1_GroundTerm0_209);
                        GroundTerm0_209 = ((MR_Word) (conv1_GroundTerm0_209));
                        ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_209, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Integer ConstNum_216 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word ConstStructMap_217;
                        MR_Word GroundTerm0_218;
                        MR_Box conv2_GroundTerm0_218;

                        ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_110, &ConstStructMap_217);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_217, ConstNum_216, &conv2_GroundTerm0_218);
                        GroundTerm0_218 = ((MR_Word) (conv2_GroundTerm0_218));
                        ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_218, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Integer ConstNum_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word ConstStructMap_76;
                        MR_Word GroundTerm0_77;
                        MR_Box conv0_GroundTerm0_77;

                        ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_110, &ConstStructMap_76);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_76, ConstNum_74, &conv0_GroundTerm0_77);
                        GroundTerm0_77 = ((MR_Word) (conv0_GroundTerm0_77));
                        ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_77, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word PredId_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Integer ProcId_81 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_Word PredLabel_82;
                        MR_Word PredModule_83;
                        MR_Word ProcLabel_84;
                        MR_Word QualProcLabel_85;
                        MR_Word Var_142;
                        MR_Word Var_144;
                        MR_Word Const_162;

                        {
                          Var_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_142, 0) = ((MR_Box) (PredId_80));
                          MR_hl_field(MR_mktag(0), Var_142, 1) = ((MR_Box) (ProcId_81));
                        }
                        ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_49, Var_142, &PredLabel_82, &PredModule_83);
                        {
                          ProcLabel_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ProcLabel_84, 0) = ((MR_Box) (PredLabel_82));
                          MR_hl_field(MR_mktag(0), ProcLabel_84, 1) = ((MR_Box) (ProcId_81));
                        }
                        {
                          QualProcLabel_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), QualProcLabel_85, 0) = ((MR_Box) (PredModule_83));
                          MR_hl_field(MR_mktag(0), QualProcLabel_85, 1) = ((MR_Box) (ProcLabel_84));
                        }
                        {
                          Const_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
                          MR_hl_field(MR_mktag(3), Const_162, 1) = ((MR_Box) (QualProcLabel_85));
                          MR_hl_field(MR_mktag(3), Const_162, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_144, 1) = ((MR_Box) (Const_162));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (MLDS_Type_50));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_144));
                        }
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "deep_profiling_proc_layout_tag NYI");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "table_io_entry_tag NYI");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        MR_Word LocalSectag_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_Unsigned PrimSec_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_58, (MR_Integer) 1))));
                        MR_Word Var_149;
                        MR_Word Var_150;

                        {
                          Var_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), Var_150, 1) = ((MR_Box) (PrimSec_61));
                        }
                        {
                          Var_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_149, 1) = ((MR_Box) (Var_150));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (MLDS_Type_50));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_149));
                        }
                      }
                      break;
                  }
                  break;
              }
              {
                GroundTerm_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_90, 0) = ((MR_Box) (ConstRval_52));
                MR_hl_field(MR_mktag(0), GroundTerm_90, 1) = ((MR_Box) (VarType_47));
                MR_hl_field(MR_mktag(0), GroundTerm_90, 2) = ((MR_Box) (MLDS_Type_50));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_12, GroundTerm_90, STATE_VARIABLE_Info_0_110, STATE_VARIABLE_Info_111);
              Stmt_91 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_48, ConstRval_52, Context_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_20 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_91));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word PredId_198 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
              MR_Integer ProcId_199 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));

              ml_backend__ml_closure_gen__ml_construct_closure_11_p_0(PredId_198, ProcId_199, Var_12, ArgVars_14, ArgModes_15, HowToConstruct_17, Context_18, Defns_19, Stmts_20, STATE_VARIABLE_Info_0_110, STATE_VARIABLE_Info_111);
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word UsesBaseClass_227;
              MR_Word Ptag_228 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));

              UsesBaseClass_227 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ConsTag_22);
              ml_backend__ml_unify_gen_construct__ml_gen_construct_compound_14_p_0(ConsId_13, Ptag_228, (MR_Word) ((MR_Unsigned) 0U), UsesBaseClass_227, Var_12, ArgVars_14, ArgModes_15, TakeAddr_16, HowToConstruct_17, Context_18, Defns_19, Stmts_20, STATE_VARIABLE_Info_0_110, STATE_VARIABLE_Info_111);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Var_120;
              MR_Word ArgVar_93;
              MR_Word ArgMode_94;
              MR_Word Var_124;
              MR_Word Var_125;

              {
                Var_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[6]));
                MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_2));
                MR_hl_field(MR_mktag(0), Var_120, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_120, 3) = ((MR_Box) (TakeAddr_16));
                MR_hl_field(MR_mktag(0), Var_120, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_120, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "notag or direct_arg_tag: take_addr");
              succeeded = ((MR_tag((MR_Word) ArgVars_14)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgVar_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_14, (MR_Integer) 0))));
                Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_14, (MR_Integer) 1))));
                succeeded = (Var_124 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ArgModes_15)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    ArgMode_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_15, (MR_Integer) 0))));
                    Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_15, (MR_Integer) 1))));
                    succeeded = (Var_125 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word VarType_176;
                MR_Word VarLval_177;
                MR_Word ModuleInfo_178;
                MR_Word MLDS_Type_179;
                MR_Word ArgGroundTerm_95;

                ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_110, Var_12, &VarType_176);
                ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_110, Var_12, &VarLval_177);
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_110, &ModuleInfo_178);
                MLDS_Type_179 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_178, VarType_176);
                succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_110, ArgVar_93, &ArgGroundTerm_95);
                if (succeeded)
                {
                  MR_Word ArgRval_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_95, (MR_Integer) 0))));
                  MR_Word MLDS_ArgType_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgGroundTerm_95, (MR_Integer) 2))));
                  MR_Word GlobalData0_99;
                  MR_Word Rval0_100;
                  MR_Word GlobalData_101;
                  MR_Word Rval_102;
                  MR_Word STATE_VARIABLE_Info_127_127;
                  MR_Word GroundTerm_163;
                  MR_Word Stmt_164;

                  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_110, &GlobalData0_99);
                  ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_178, Context_18, MLDS_ArgType_98, (MR_Integer) 2, ArgRval_96, &Rval0_100, GlobalData0_99, &GlobalData_101);
                  ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_101, STATE_VARIABLE_Info_0_110, &STATE_VARIABLE_Info_127_127);
                  Rval_102 = ml_backend__ml_unify_gen_construct__ml_cast_cons_tag_3_f_0(MLDS_Type_179, ConsTag_22, Rval0_100);
                  {
                    GroundTerm_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), GroundTerm_163, 0) = ((MR_Box) (Rval_102));
                    MR_hl_field(MR_mktag(0), GroundTerm_163, 1) = ((MR_Box) (VarType_176));
                    MR_hl_field(MR_mktag(0), GroundTerm_163, 2) = ((MR_Box) (MLDS_Type_179));
                  }
                  ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_12, GroundTerm_163, STATE_VARIABLE_Info_127_127, STATE_VARIABLE_Info_111);
                  Stmt_164 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_177, Rval_102, Context_18);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *Stmts_20 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_164));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                else
                {
                  MR_Word ArgLval_103;
                  MR_Word ArgType_104;

                  ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_110, ArgVar_93, &ArgLval_103);
                  ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_110, ArgVar_93, &ArgType_104);
                  if ((ConsTag_22 == (MR_Word) ((MR_Unsigned) 8U)))
                  {
                    MR_Word Stmt_165;
                    MR_Word ArgRval_166;
                    MR_Word Rval_167;

                    {
                      ArgRval_166 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ArgRval_166, 0) = ((MR_Box) (ArgLval_103));
                    }
                    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_178, ArgType_104, VarType_176, (MR_Integer) 0, ArgRval_166, &Rval_167);
                    Stmt_165 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_177, Rval_167, Context_18);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *Stmts_20 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_165));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  else
                  {
                    MR_Word Ptag_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));

                    ml_backend__ml_unify_gen_construct__ml_gen_dynamic_construct_direct_arg_9_p_0(ModuleInfo_178, Ptag_105, ArgMode_94, ArgLval_103, ArgType_104, VarLval_177, VarType_176, Context_18, Stmts_20);
                  }
                  *STATE_VARIABLE_Info_111 = STATE_VARIABLE_Info_0_110;
                }
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "no_tag or direct_arg_tag: arity != 1");
                  return;
                }
              }
              *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Var_113;
              MR_Word LocalSectag_197 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));

              {
                Var_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[6]));
                MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_3));
                MR_hl_field(MR_mktag(0), Var_113, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_113, 3) = ((MR_Box) (TakeAddr_16));
                MR_hl_field(MR_mktag(0), Var_113, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_113, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "taking address of non word-sized argument");
              ml_backend__ml_unify_gen_construct__ml_gen_construct_tagword_compound_10_p_0(ConsId_13, LocalSectag_197, Var_12, ArgVars_14, ArgModes_15, HowToConstruct_17, Context_18, Stmts_20, STATE_VARIABLE_Info_0_110, STATE_VARIABLE_Info_111);
              *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word MaybeStag_106;
              MR_Word RemoteSectag_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
              MR_Word UsesBaseClass_108;
              MR_Word Ptag_194 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));

              {
                MaybeStag_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeStag_106, 0) = ((MR_Box) (RemoteSectag_107));
              }
              UsesBaseClass_108 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ConsTag_22);
              ml_backend__ml_unify_gen_construct__ml_gen_construct_compound_14_p_0(ConsId_13, Ptag_194, MaybeStag_106, UsesBaseClass_108, Var_12, ArgVars_14, ArgModes_15, TakeAddr_16, HowToConstruct_17, Context_18, Defns_19, Stmts_20, STATE_VARIABLE_Info_0_110, STATE_VARIABLE_Info_111);
            }
            break;
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__ml_cast_cons_tag_3_f_0(
  MR_Word Type_5,
  MR_Word ConsTag_6,
  MR_Word Rval_7)
{
  {
    MR_Word CastRval_8;
    MR_Word TagRval_9;

    if ((ConsTag_6 == (MR_Word) ((MR_Unsigned) 8U)))
      TagRval_9 = Rval_7;
    else
    {
      MR_Word Ptag_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_6, (MR_Integer) 1))));

      {
        TagRval_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TagRval_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), TagRval_9, 1) = ((MR_Box) (Ptag_10));
        MR_hl_field(MR_mktag(3), TagRval_9, 2) = ((MR_Box) (Rval_7));
      }
    }
    {
      CastRval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CastRval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), CastRval_8, 1) = ((MR_Box) (Type_5));
      MR_hl_field(MR_mktag(3), CastRval_8, 2) = ((MR_Box) (TagRval_9));
    }
    return CastRval_8;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_dynamic_construct_direct_arg_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Ptag_11,
  MR_Word ArgMode_12,
  MR_Word ArgLval_13,
  MR_Word ArgType_14,
  MR_Word VarLval_15,
  MR_Word VarType_16,
  MR_Word Context_17,
  MR_Word * Stmts_18)
{
  {
    MR_Word Dir_19;

    ml_backend__ml_unify_gen_util__ml_compute_assign_direction_5_p_0(ModuleInfo_10, ArgMode_12, ArgType_14, VarType_16, &Dir_19);
    switch (Dir_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_dynamic_construct_direct_arg\'/9", (MR_String) "dummy unify");
            return;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word ArgRval_20;
          MR_Word MLDS_Type_21;
          MR_Word CastRval_22;
          MR_Word Stmt_23;
          MR_Word Var_33;
          MR_Word Var_34;

          {
            Var_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_33, 0) = ((MR_Box) (ArgLval_13));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, ArgType_14, VarType_16, (MR_Integer) 0, Var_33, &ArgRval_20);
          MLDS_Type_21 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_10, VarType_16);
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Ptag_11));
            MR_hl_field(MR_mktag(3), Var_34, 2) = ((MR_Box) (ArgRval_20));
          }
          {
            CastRval_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastRval_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), CastRval_22, 1) = ((MR_Box) (MLDS_Type_21));
            MR_hl_field(MR_mktag(3), CastRval_22, 2) = ((MR_Box) (Var_34));
          }
          Stmt_23 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_15, CastRval_22, Context_17);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_23));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_dynamic_construct_direct_arg\'/9", (MR_String) "left-to-right data flow in construction");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word MLDS_ArgType_24;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word ArgRval_38;
          MR_Word MLDS_Type_39;
          MR_Word CastRval_40;
          MR_Word Stmt_41;

          MLDS_ArgType_24 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_10, ArgType_14);
          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
            MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (MLDS_ArgType_24));
          }
          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Var_29));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, ArgType_14, VarType_16, (MR_Integer) 0, Var_28, &ArgRval_38);
          MLDS_Type_39 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_10, VarType_16);
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Ptag_11));
            MR_hl_field(MR_mktag(3), Var_30, 2) = ((MR_Box) (ArgRval_38));
          }
          {
            CastRval_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastRval_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), CastRval_40, 1) = ((MR_Box) (MLDS_Type_39));
            MR_hl_field(MR_mktag(3), CastRval_40, 2) = ((MR_Box) (Var_30));
          }
          Stmt_41 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_15, CastRval_40, Context_17);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_41));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_construct_tagword_compound_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = hlds__vartypes__lookup_var_type_func_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_construct_tagword_compound_10_p_0(
  MR_Word ConsId_11,
  MR_Word LocalSectag_12,
  MR_Word Var_13,
  MR_Word ArgVars_14,
  MR_Word ArgModes_15,
  MR_Word HowToConstruct_16,
  MR_Word Context_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37)
{
  {
    MR_Word ModuleInfo_20;
    MR_Word VarTypes_21;
    MR_Word VarType_22;
    MR_Word ArgVarsTypesWidths_23;
    MR_Word Var_38;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_36, &ModuleInfo_20);
    ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_36, &VarTypes_21);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_21, Var_13, &VarType_22);
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_construct_tagword_compound_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (VarTypes_21));
    }
    ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_1((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), ModuleInfo_20, Var_38, (MR_Integer) 0, VarType_22, ConsId_11, ArgVars_14, &ArgVarsTypesWidths_23);
    switch (MR_tag((MR_Word) HowToConstruct_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HowToConstruct_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GroundTerm_33;
              MR_Word RevOrRvals_56;
              MR_Word OrRvals_57;
              MR_Unsigned PrimSec_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_12, (MR_Integer) 1))));
              MR_Word TagwordRval_61;
              MR_Word VarLval_62;
              MR_Word Stmt_63;
              MR_Word Var_64;
              MR_Word Var_65;

              {
                Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (PrimSec_59));
              }
              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (Var_65));
              }
              ml_backend__ml_unify_gen_construct__ml_gen_tagword_statically_4_p_0(STATE_VARIABLE_Info_0_36, ArgVarsTypesWidths_23, (MR_Word) ((MR_Unsigned) 0U), &RevOrRvals_56);
              mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevOrRvals_56, &OrRvals_57);
              TagwordRval_61 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(Var_64, OrRvals_57);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_36, Var_13, &VarLval_62);
              Stmt_63 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_62, TagwordRval_61, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_63));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                GroundTerm_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_33, 0) = ((MR_Box) (TagwordRval_61));
                MR_hl_field(MR_mktag(0), GroundTerm_33, 1) = ((MR_Box) (VarType_22));
                MR_hl_field(MR_mktag(0), GroundTerm_33, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_13, GroundTerm_33, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word RevOrRvals_24;
              MR_Word OrRvals_25;
              MR_Unsigned PrimSec_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_12, (MR_Integer) 1))));
              MR_Word TagwordRval_29;
              MR_Word VarLval_30;
              MR_Word Stmt_31;
              MR_Word Var_44;
              MR_Word Var_45;

              {
                Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (PrimSec_27));
              }
              {
                Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Var_45));
              }
              ml_backend__ml_unify_gen_construct__ml_gen_tagword_dynamically_5_p_0(STATE_VARIABLE_Info_0_36, ArgVarsTypesWidths_23, ArgModes_15, (MR_Word) ((MR_Unsigned) 0U), &RevOrRvals_24);
              mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevOrRvals_24, &OrRvals_25);
              TagwordRval_29 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(Var_44, OrRvals_25);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_36, Var_13, &VarLval_30);
              Stmt_31 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_30, TagwordRval_29, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_31));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_0_36;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_construct_tagword_compound\'/10", (MR_String) "reuse_cell");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_construct_tagword_compound\'/10", (MR_String) "construct_in_region");
            return;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_tagword_statically_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevOrRvals_0_3,
  MR_Word * STATE_VARIABLE_RevOrRvals_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_RevOrRvals_4 = STATE_VARIABLE_RevOrRvals_0_3;
  else
  {
    MR_Word ArgVarTypeWidth_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgVarsTypesWidths_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgVar_13;
    MR_Word ArgPosWidth_15;
    MR_Word GroundTerm_16;
    MR_Word ArgRval_17;
    MR_Word STATE_VARIABLE_RevOrRvals_40_40;

    ml_backend__ml_unify_gen_construct__ml_gen_tagword_statically_4_p_0(Info_1, ArgVarsTypesWidths_11, STATE_VARIABLE_RevOrRvals_0_3, &STATE_VARIABLE_RevOrRvals_40_40);
    ArgVar_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_10, (MR_Integer) 0))));
    ArgPosWidth_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_10, (MR_Integer) 2))));
    ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_p_0(Info_1, ArgVar_13, &GroundTerm_16);
    ArgRval_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_16, (MR_Integer) 0))));
    switch (MR_tag((MR_Word) ArgPosWidth_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_tagword_statically\'/4", (MR_String) "not apw_partial_shifted or apw_none_shifted");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_tagword_statically\'/4", (MR_String) "not apw_partial_shifted or apw_none_shifted");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_15, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_tagword_statically\'/4", (MR_String) "not apw_partial_shifted or apw_none_shifted");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Shift_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_15, (MR_Integer) 3))));
              MR_Word Fill_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_15, (MR_Integer) 6))));

              ml_backend__ml_unify_gen_construct__maybe_shift_and_accumulate_or_rval_5_p_0(ArgRval_17, Shift_22, Fill_25, STATE_VARIABLE_RevOrRvals_40_40, STATE_VARIABLE_RevOrRvals_4);
            }
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_RevOrRvals_4 = STATE_VARIABLE_RevOrRvals_40_40;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_tagword_dynamically_5_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevOrRvals_0_4,
  MR_Word * STATE_VARIABLE_RevOrRvals_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevOrRvals_5 = STATE_VARIABLE_RevOrRvals_0_4;
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_tagword_dynamically\'/5", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_tagword_dynamically\'/5", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word ArgMode_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgModes_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgVar_32;
        MR_Word ConsArgType_33;
        MR_Word ArgPosWidth_34;
        MR_Word ModuleInfo_35;
        MR_Word HighLevelData_36;
        MR_Word ArgWidth_37;
        MR_Word BoxedArgType_38;
        MR_Word ArgType_39;
        MR_Word RHSInsts_41;
        MR_Word ArgRval_43;
        MR_Word STATE_VARIABLE_RevOrRvals_65_65;
        MR_Word Var_67;
        MR_Word Var_74;

        ml_backend__ml_unify_gen_construct__ml_gen_tagword_dynamically_5_p_0(Info_1, Var_75, ArgModes_30, STATE_VARIABLE_RevOrRvals_0_4, &STATE_VARIABLE_RevOrRvals_65_65);
        ArgVar_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 0))));
        ConsArgType_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 1))));
        ArgPosWidth_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 2))));
        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_35);
        ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_1, &HighLevelData_36);
        ArgWidth_37 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_34);
        ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_35, HighLevelData_36, ConsArgType_33, ArgWidth_37, &BoxedArgType_38);
        ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_1, ArgVar_32, &ArgType_39);
        RHSInsts_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_29, (MR_Integer) 1))));
        check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_35, RHSInsts_41, ArgType_39, &Var_74);
        succeeded = ((MR_Integer) 0 == Var_74);
        if (succeeded)
        {
          Var_67 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_35, ArgType_39, ConsArgType_33);
          succeeded = (Var_67 == (MR_Integer) 1);
        }
        if (succeeded)
        {
          MR_Word ArgLval_42;
          MR_Word Var_69;

          ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_1, ArgVar_32, &ArgLval_42);
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_69, 0) = ((MR_Box) (ArgLval_42));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_35, ArgType_39, BoxedArgType_38, (MR_Integer) 0, Var_69, &ArgRval_43);
        }
        else
        {
          MR_Word MLDS_Type_44;
          MR_Word Var_70;

          MLDS_Type_44 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_35, BoxedArgType_38);
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
            MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (MLDS_Type_44));
          }
          {
            ArgRval_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ArgRval_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ArgRval_43, 1) = ((MR_Box) (Var_70));
          }
        }
        switch (MR_tag((MR_Word) ArgPosWidth_34)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_tagword_dynamically\'/5", (MR_String) "not apw_partial_shifted or apw_none_shifted");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_tagword_dynamically\'/5", (MR_String) "not apw_partial_shifted or apw_none_shifted");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_34, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_tagword_dynamically\'/5", (MR_String) "not apw_partial_shifted or apw_none_shifted");
                    return;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Shift_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_34, (MR_Integer) 3))));
                  MR_Word Fill_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_34, (MR_Integer) 6))));

                  ml_backend__ml_unify_gen_construct__maybe_shift_and_accumulate_or_rval_5_p_0(ArgRval_43, Shift_47, Fill_50, STATE_VARIABLE_RevOrRvals_65_65, STATE_VARIABLE_RevOrRvals_5);
                }
                break;
              case (MR_Integer) 2:
                *STATE_VARIABLE_RevOrRvals_5 = STATE_VARIABLE_RevOrRvals_65_65;
                break;
            }
            break;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_construct_compound_14_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_construct_compound__348__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_construct_compound_14_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_construct_compound__333__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_construct_compound_14_p_0(
  MR_Word ConsId_15,
  MR_Word Ptag_16,
  MR_Word MaybeStag_17,
  MR_Word UsesBaseClass_18,
  MR_Word Var_19,
  MR_Word ArgVars_20,
  MR_Word ArgModes_21,
  MR_Word TakeAddr_22,
  MR_Word HowToConstruct_23,
  MR_Word Context_24,
  MR_Word * Defns_25,
  MR_Word * Stmts_26,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42)
{
  {
    MR_bool succeeded;
    MR_Word CompilationTarget_28;
    MR_Word MaybeCtorName_29;
    MR_Word ExplicitSectag_35;
    MR_Word ExtraRvalsTypesWidths_40;
    MR_Word Var_61;

    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_41, &CompilationTarget_28);
    switch (UsesBaseClass_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word CtorName_30;
          MR_Word ConsId_74;
          MR_Word ModuleName_75;
          MR_Word ConsSymName_68;
          MR_Integer ConsArity_69;
          MR_Word TypeCtor_70;
          MR_Word SymModuleName_71;

          succeeded = ((((MR_tag((MR_Word) ConsId_15)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_15, (MR_Integer) 0))) == (MR_Integer) 2)));
          if (succeeded)
          {
            ConsSymName_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_15, (MR_Integer) 1))));
            ConsArity_69 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_15, (MR_Integer) 2))));
            TypeCtor_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_15, (MR_Integer) 3))));
            succeeded = ((MR_tag((MR_Word) ConsSymName_68)) == (MR_Integer) 1);
            if (succeeded)
              SymModuleName_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsSymName_68, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_String ConsName_73;

            ConsName_73 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(CompilationTarget_28, TypeCtor_70, ConsSymName_68, ConsArity_69);
            {
              ConsId_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ConsId_74, 0) = ((MR_Box) (ConsName_73));
              MR_hl_field(MR_mktag(0), ConsId_74, 1) = ((MR_Box) (ConsArity_69));
            }
            ModuleName_75 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(SymModuleName_71);
          }
          else
          {
            MR_String ConsName_80;

            ConsName_80 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_15);
            {
              ConsId_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ConsId_74, 0) = ((MR_Box) (ConsName_80));
              MR_hl_field(MR_mktag(0), ConsId_74, 1) = ((MR_Box) ((MR_Integer) 0));
            }
            ModuleName_75 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_4[1]));
          }
          {
            CtorName_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CtorName_30, 0) = ((MR_Box) (ModuleName_75));
            MR_hl_field(MR_mktag(0), CtorName_30, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), CtorName_30, 2) = ((MR_Box) (ConsId_74));
          }
          {
            MaybeCtorName_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeCtorName_29, 0) = ((MR_Box) (CtorName_30));
          }
        }
        break;
      case (MR_Integer) 1:
        MaybeCtorName_29 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
    if ((MaybeStag_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      ExplicitSectag_35 = (MR_Integer) 0;
      ExtraRvalsTypesWidths_40 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word RemoteSectag_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeStag_17, (MR_Integer) 0))));
      MR_Unsigned SectagUint_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_31, (MR_Integer) 0))));
      MR_Word AddedBy_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_31, (MR_Integer) 1))));
      MR_Word UsesConstructors_34;

      UsesConstructors_34 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(CompilationTarget_28);
      switch (UsesConstructors_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word StagRval0_36;
            MR_Word StagRval_38;
            MR_Word Var_47;
            MR_Word Var_51;
            MR_Integer Var_52;
            MR_Word Var_53;

            {
              Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[7]));
              MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_construct_compound_14_p_0_1));
              MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (AddedBy_33));
              MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_3_p_0(Var_47, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_construct_compound\'/14", (MR_String) "AddedBy != sectag_added_by_unify");
            ExplicitSectag_35 = (MR_Integer) 1;
            Var_52 = mercury__uint__cast_to_int_1_f_0(SectagUint_32);
            {
              Var_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_51, 0) = ((MR_Box) (Var_52));
            }
            {
              StagRval0_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), StagRval0_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), StagRval0_36, 1) = ((MR_Box) (Var_51));
            }
            {
              StagRval_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), StagRval_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), StagRval_38, 1) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), StagRval_38, 2) = ((MR_Box) (StagRval0_36));
            }
            {
              Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (StagRval_38));
              MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_construct_scalar_common_1[8])));
              MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ExtraRvalsTypesWidths_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ExtraRvalsTypesWidths_40, 0) = ((MR_Box) (Var_53));
              MR_hl_field(MR_mktag(1), ExtraRvalsTypesWidths_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_43;

            {
              Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[7]));
              MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_construct_compound_14_p_0_2));
              MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (AddedBy_33));
              MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) ((MR_Integer) 1));
            }
            mercury__require__expect_3_p_0(Var_43, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_construct_compound\'/14", (MR_String) "AddedBy != sectag_added_by_constructor");
            ExplicitSectag_35 = (MR_Integer) 0;
            ExtraRvalsTypesWidths_40 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (ConsId_15));
    }
    ml_backend__ml_unify_gen_construct__ml_gen_new_object_15_p_0(Var_61, MaybeCtorName_29, Ptag_16, ExplicitSectag_35, Var_19, ExtraRvalsTypesWidths_40, ArgVars_20, ArgModes_21, TakeAddr_22, HowToConstruct_23, Context_24, Defns_25, Stmts_26, STATE_VARIABLE_Info_0_41, STATE_VARIABLE_Info_42);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_15_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object__430__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_15_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object__418__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_15_p_0(
  MR_Word MaybeConsId_16,
  MR_Word MaybeCtorName_17,
  MR_Word Ptag_18,
  MR_Word ExplicitSectag_19,
  MR_Word Var_20,
  MR_Word ExtraRvalsTypesWidths_21,
  MR_Word ArgVars_22,
  MR_Word ArgModes_23,
  MR_Word TakeAddr_24,
  MR_Word HowToConstruct_25,
  MR_Word Context_26,
  MR_Word * Defns_27,
  MR_Word * Stmts_28,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  {
    MR_bool succeeded;
    MR_Word ConsIdOrClosure_31;

    if ((MaybeConsId_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer NumExtras_32;
      MR_Word Var_37;

      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[4]));
        MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_new_object_15_p_0_1));
        MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (ExplicitSectag_19));
        MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_3_p_0(Var_37, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_new_object\'/15", (MR_String) "sectag on closure");
      mercury__list__length_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0), ExtraRvalsTypesWidths_21, &NumExtras_32);
      {
        ConsIdOrClosure_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ConsIdOrClosure_31, 0) = ((MR_Box) (NumExtras_32));
      }
    }
    else
    {
      MR_Word ConsId_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeConsId_16, (MR_Integer) 0))));

      {
        ConsIdOrClosure_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConsIdOrClosure_31, 0) = ((MR_Box) (ConsId_30));
      }
    }
    switch (MR_tag((MR_Word) HowToConstruct_25)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HowToConstruct_25)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_44;

              {
                Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[6]));
                MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_new_object_15_p_0_2));
                MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (TakeAddr_24));
                MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_44, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_new_object\'/15", (MR_String) "cannot take address of static object\'s field");
              ml_backend__ml_unify_gen_construct__ml_gen_new_object_statically_10_p_0(ConsIdOrClosure_31, MaybeCtorName_17, Ptag_18, Var_20, ExtraRvalsTypesWidths_21, ArgVars_22, Context_26, Stmts_28, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
              *Defns_27 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 1:
            {
              ml_backend__ml_unify_gen_construct__ml_gen_new_object_dynamically_13_p_0(ConsIdOrClosure_31, MaybeCtorName_17, Ptag_18, ExplicitSectag_19, Var_20, ExtraRvalsTypesWidths_21, ArgVars_22, ArgModes_23, TakeAddr_24, Context_26, Stmts_28, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
              *Defns_27 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CellToReuse_33 = (MR_Word) (MR_body((MR_Word) (HowToConstruct_25), (MR_Integer) 1));

          ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_15_p_0(ConsIdOrClosure_31, MaybeCtorName_17, Ptag_18, ExplicitSectag_19, Var_20, ExtraRvalsTypesWidths_21, ArgVars_22, ArgModes_23, TakeAddr_24, CellToReuse_33, Context_26, Defns_27, Stmts_28, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_new_object\'/15", (MR_String) "construct_in_region NYI");
            return;
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__630__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_80;

    ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__612__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_80);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_80));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_15_p_0(
  MR_Word ConsIdOrClosure_16,
  MR_Word MaybeCtorName_17,
  MR_Word Ptag_18,
  MR_Word ExplicitSectag_19,
  MR_Word Var_20,
  MR_Word ExtraRvalsTypesWidths_21,
  MR_Word ArgVars_22,
  MR_Word ArgModes_23,
  MR_Word TakeAddr_24,
  MR_Word CellToReuse_25,
  MR_Word Context_26,
  MR_Word * Defns_27,
  MR_Word * Stmts_28,
  MR_Word STATE_VARIABLE_Info_0_74,
  MR_Word * STATE_VARIABLE_Info_75)
{
  {
    MR_bool succeeded;
    MR_Word ReuseVar_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellToReuse_25, (MR_Integer) 0))));
    MR_Word ReuseConsIds_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellToReuse_25, (MR_Integer) 1))));
    MR_Word ConsId_33;
    MR_Word ReusePrimaryTags0_39;
    MR_Word ReusePrimaryTags_40;
    MR_Word VarType_41;
    MR_Word ConsTag_42;
    MR_Word PrimaryTag_43;
    MR_Word InitOffSet_44;
    MR_Word ArgVarRepns_45;
    MR_Word ReuseVarLval_46;
    MR_Word DifferentTags_48;
    MR_Word ReuseVarRval_49;
    MR_Word VarLval_56;
    MR_Word CastReuseVarRval_57;
    MR_Word MLDS_VarType_58;
    MR_Word HeapTestStmt_59;
    MR_Word MaybePtag_60;
    MR_Word ExtraRvalStmts_61;
    MR_Word FieldGen_62;
    MR_Word TakeAddrInfos_64;
    MR_Word FieldDefns_65;
    MR_Word FieldStmts_66;
    MR_Word TakeAddrStmts_67;
    MR_Word ThenStmts_68;
    MR_Word ThenStmt_69;
    MR_Word DynamicDefns_70;
    MR_Word DynamicStmts_71;
    MR_Word ElseStmt_72;
    MR_Word IfStmt_73;
    MR_Word Var_78;
    MR_Word Var_81;
    MR_Word Var_93;
    MR_Word STATE_VARIABLE_Info_95_95;
    MR_Word STATE_VARIABLE_Info_96_96;
    MR_Word Var_97;
    MR_Word Var_100;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;

    if (((MR_tag((MR_Word) ConsIdOrClosure_16)) == (MR_Integer) 1))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_new_object_reuse_cell\'/15", (MR_String) "attempt to reuse closure");
        return;
      }
    }
    else
      ConsId_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsIdOrClosure_16, (MR_Integer) 0))));
    {
      Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_15_p_0_1));
      MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (STATE_VARIABLE_Info_0_74));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0), Var_78, ReuseConsIds_31, &ReusePrimaryTags0_39);
    mercury__list__remove_dups_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0), ReusePrimaryTags0_39, &ReusePrimaryTags_40);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_74, Var_20, &VarType_41);
    ml_backend__ml_unify_gen_util__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_74, ConsId_33, &ConsTag_42);
    ml_backend__ml_unify_gen_util__ml_tag_ptag_and_initial_offset_3_p_0(ConsTag_42, &PrimaryTag_43, &InitOffSet_44);
    ml_backend__ml_unify_gen_util__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_74, VarType_41, ConsId_33, InitOffSet_44, ArgVars_22, &ArgVarRepns_45);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_74, ReuseVar_30, &ReuseVarLval_46);
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[5]));
      MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_15_p_0_2));
      MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (PrimaryTag_43));
    }
    mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0), Var_81, ReusePrimaryTags_40, &DifferentTags_48);
    if ((DifferentTags_48 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        ReuseVarRval_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ReuseVarRval_49, 0) = ((MR_Box) (ReuseVarLval_46));
      }
    else
    {
      MR_Word Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DifferentTags_48, (MR_Integer) 1))));
      MR_Word Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DifferentTags_48, (MR_Integer) 0))));

      if ((Var_116 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        uint8_t ReusePrimaryTagUint8_51 = (uint8_t) (Var_117);
        MR_Integer ReusePrimaryTagInt_52;
        MR_Word Var_88;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_92;

        ReusePrimaryTagInt_52 = mercury__uint8__cast_to_int_1_f_0(ReusePrimaryTagUint8_51);
        {
          Var_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_90, 0) = ((MR_Box) (ReuseVarLval_46));
        }
        {
          Var_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_92, 0) = ((MR_Box) (ReusePrimaryTagInt_52));
        }
        {
          Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_91, 1) = ((MR_Box) (Var_92));
        }
        {
          Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(3), Var_88, 2) = ((MR_Box) (Var_90));
          MR_hl_field(MR_mktag(3), Var_88, 3) = ((MR_Box) (Var_91));
        }
        {
          ReuseVarRval_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ReuseVarRval_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ReuseVarRval_49, 1) = ((MR_Box) (PrimaryTag_43));
          MR_hl_field(MR_mktag(3), ReuseVarRval_49, 2) = ((MR_Box) (Var_88));
        }
      }
      else
      {
        MR_Word Var_84;
        MR_Word Var_86;

        {
          Var_86 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_86, 0) = ((MR_Box) (ReuseVarLval_46));
        }
        {
          Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), Var_84, 2) = ((MR_Box) (Var_86));
        }
        {
          ReuseVarRval_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ReuseVarRval_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ReuseVarRval_49, 1) = ((MR_Box) (PrimaryTag_43));
          MR_hl_field(MR_mktag(3), ReuseVarRval_49, 2) = ((MR_Box) (Var_84));
        }
      }
    }
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_74, Var_20, &VarLval_56);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_74, VarType_41, &MLDS_VarType_58);
    {
      CastReuseVarRval_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CastReuseVarRval_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), CastReuseVarRval_57, 1) = ((MR_Box) (MLDS_VarType_58));
      MR_hl_field(MR_mktag(3), CastReuseVarRval_57, 2) = ((MR_Box) (ReuseVarRval_49));
    }
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_93, 1) = ((MR_Box) (VarLval_56));
      MR_hl_field(MR_mktag(3), Var_93, 2) = ((MR_Box) (CastReuseVarRval_57));
    }
    {
      HeapTestStmt_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeapTestStmt_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), HeapTestStmt_59, 1) = ((MR_Box) (Var_93));
      MR_hl_field(MR_mktag(3), HeapTestStmt_59, 2) = ((MR_Box) (Context_26));
    }
    {
      MaybePtag_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePtag_60, 0) = ((MR_Box) (Ptag_18));
    }
    ml_backend__ml_unify_gen_construct__ml_gen_extra_arg_assigns_9_p_0(VarLval_56, MLDS_VarType_58, MaybePtag_60, (MR_Integer) 0, ExtraRvalsTypesWidths_21, Context_26, &ExtraRvalStmts_61, STATE_VARIABLE_Info_0_74, &STATE_VARIABLE_Info_95_95);
    ml_backend__ml_unify_gen_util__decide_field_gen_6_p_0(STATE_VARIABLE_Info_95_95, VarLval_56, VarType_41, ConsId_33, ConsTag_42, &FieldGen_62);
    ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_1(FieldGen_62, ArgVarRepns_45, ArgModes_23, (MR_Integer) 1, Context_26, TakeAddr_24, &TakeAddrInfos_64, &FieldDefns_65, &FieldStmts_66, STATE_VARIABLE_Info_95_95, &STATE_VARIABLE_Info_96_96);
    ml_backend__ml_unify_gen_construct__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_64, VarLval_56, MLDS_VarType_58, MaybePtag_60, Context_26, STATE_VARIABLE_Info_96_96, &TakeAddrStmts_67);
    Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), FieldStmts_66, TakeAddrStmts_67);
    ThenStmts_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ExtraRvalStmts_61, Var_97);
    {
      ThenStmt_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ThenStmt_69, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ThenStmt_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ThenStmt_69, 2) = ((MR_Box) (ThenStmts_68));
      MR_hl_field(MR_mktag(0), ThenStmt_69, 3) = ((MR_Box) (Context_26));
    }
    {
      Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (ConsId_33));
    }
    ml_backend__ml_unify_gen_construct__ml_gen_new_object_15_p_0(Var_100, MaybeCtorName_17, Ptag_18, ExplicitSectag_19, Var_20, ExtraRvalsTypesWidths_21, ArgVars_22, ArgModes_23, TakeAddr_24, (MR_Word) ((MR_Unsigned) 4U), Context_26, &DynamicDefns_70, &DynamicStmts_71, STATE_VARIABLE_Info_96_96, STATE_VARIABLE_Info_75);
    *Defns_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), FieldDefns_65, DynamicDefns_70);
    {
      ElseStmt_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ElseStmt_72, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ElseStmt_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ElseStmt_72, 2) = ((MR_Box) (DynamicStmts_71));
      MR_hl_field(MR_mktag(0), ElseStmt_72, 3) = ((MR_Box) (Context_26));
    }
    {
      Var_105 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_105, 0) = ((MR_Box) (VarLval_56));
    }
    {
      Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (ElseStmt_72));
    }
    {
      IfStmt_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), IfStmt_73, 0) = ((MR_Box) (Var_105));
      MR_hl_field(MR_mktag(2), IfStmt_73, 1) = ((MR_Box) (ThenStmt_69));
      MR_hl_field(MR_mktag(2), IfStmt_73, 2) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(2), IfStmt_73, 3) = ((MR_Box) (Context_26));
    }
    {
      Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (IfStmt_73));
      MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_28 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeapTestStmt_59));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_107));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_extra_arg_assigns_9_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__is_apw_full_1_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_extra_arg_assigns_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_extra_arg_assigns__949__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_extra_arg_assigns_9_p_0(
  MR_Word VarLval_1,
  MR_Word MLDS_VarType_2,
  MR_Word MaybePrimaryTag_3,
  MR_Integer CurOffset_4,
  MR_Word HeadVar__5_5,
  MR_Word Context_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
    }
    else
    {
      MR_Word ExtraRvalTypeWidth_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ExtraRvalsTypesWidths_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Stmt_25;
      MR_Word Stmts_26;
      MR_Word HighLevelData_28;
      MR_Word FieldId_29;
      MR_Word ExtraRval_30;
      MR_Word ExtraType_31;
      MR_Word ArgPosWidth_32;
      MR_Integer NextOffset_34;
      MR_Word FieldLval_35;
      MR_Word Var_38;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_48;

      ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_8, &HighLevelData_28);
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[4]));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_extra_arg_assigns_9_p_0_1));
        MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (HighLevelData_28));
        MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_3_p_0(Var_38, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_extra_arg_assigns\'/9", (MR_String) "high-level data");
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_43, 0) = ((MR_Box) (CurOffset_4));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (Var_43));
      }
      {
        FieldId_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldId_29, 0) = ((MR_Box) (Var_42));
      }
      ExtraRval_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExtraRvalTypeWidth_22, (MR_Integer) 0))));
      ExtraType_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExtraRvalTypeWidth_22, (MR_Integer) 1))));
      ArgPosWidth_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExtraRvalTypeWidth_22, (MR_Integer) 2))));
      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_extra_arg_assigns_9_p_0_2));
        MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (ArgPosWidth_32));
      }
      mercury__require__expect_3_p_0(Var_44, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_extra_arg_assigns\'/9", (MR_String) "ArgPosWidth != apw_full(_)");
      NextOffset_34 = (MR_Integer) ((MR_Unsigned) CurOffset_4 + (MR_Unsigned) (MR_Integer) 1);
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_48, 0) = ((MR_Box) (VarLval_1));
      }
      {
        FieldLval_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldLval_35, 0) = ((MR_Box) (MaybePrimaryTag_3));
        MR_hl_field(MR_mktag(0), FieldLval_35, 1) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), FieldLval_35, 2) = ((MR_Box) (MLDS_VarType_2));
        MR_hl_field(MR_mktag(0), FieldLval_35, 3) = ((MR_Box) (FieldId_29));
        MR_hl_field(MR_mktag(0), FieldLval_35, 4) = ((MR_Box) (ExtraType_31));
      }
      Stmt_25 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_35, ExtraRval_30, Context_6);
      ml_backend__ml_unify_gen_construct__ml_gen_extra_arg_assigns_9_p_0(VarLval_1, MLDS_VarType_2, MaybePrimaryTag_3, NextOffset_34, ExtraRvalsTypesWidths_23, Context_6, &Stmts_26, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_25));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Stmts_26));
      }
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_statically_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_50;

    conv0_LambdaHeadVar__2_50 = ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_statically__574__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_50));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_statically_10_p_0(
  MR_Word ConsIdOrClosure_11,
  MR_Word MaybeCtorName_12,
  MR_Word Ptag_13,
  MR_Word Var_14,
  MR_Word ExtraRvalsTypesWidths_15,
  MR_Word ArgVars_16,
  MR_Word Context_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43)
{
  {
    MR_Word VarType_20;
    MR_Word ArgVarsTypesWidths_21;
    MR_Word ModuleInfo_23;
    MR_Word HighLevelData_24;
    MR_Word ExtraArgRvalsTypesWidths_25;
    MR_Word ArgRvalsTypesWidths_26;
    MR_Word UsesBaseClass_28;
    MR_Word ExtraArgRvals_29;
    MR_Word Target_34;
    MR_Word MLDS_VarType_35;
    MR_Word GroundTerm_36;
    MR_Word VarLval_37;
    MR_Word Rval_38;
    MR_Word AssignStmt_41;
    MR_Word STATE_VARIABLE_GlobalData_44_44;
    MR_Word STATE_VARIABLE_GlobalData_47_47;
    MR_Word STATE_VARIABLE_GlobalData_51_51;
    MR_Word STATE_VARIABLE_Info_52_52;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_42, Var_14, &VarType_20);
    ml_backend__ml_unify_gen_util__associate_maybe_cons_id_args_with_types_widths_5_p_0(STATE_VARIABLE_Info_0_42, VarType_20, ConsIdOrClosure_11, ArgVars_16, &ArgVarsTypesWidths_21);
    ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_42, &STATE_VARIABLE_GlobalData_44_44);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_42, &ModuleInfo_23);
    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_42, &HighLevelData_24);
    switch (HighLevelData_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word STATE_VARIABLE_GlobalData_46_46;

          ml_backend__ml_unify_gen_construct__ml_gen_box_extra_const_rval_list_lld_6_p_0(ModuleInfo_23, Context_17, ExtraRvalsTypesWidths_15, &ExtraArgRvalsTypesWidths_25, STATE_VARIABLE_GlobalData_44_44, &STATE_VARIABLE_GlobalData_46_46);
          ml_backend__ml_unify_gen_construct__ml_gen_box_const_rval_list_lld_6_p_0(STATE_VARIABLE_Info_0_42, Context_17, ArgVarsTypesWidths_21, &ArgRvalsTypesWidths_26, STATE_VARIABLE_GlobalData_46_46, &STATE_VARIABLE_GlobalData_47_47);
        }
        break;
      case (MR_Integer) 1:
        {
          ml_backend__ml_unify_gen_construct__ml_gen_box_or_unbox_const_rval_list_hld_6_p_0(STATE_VARIABLE_Info_0_42, Context_17, ArgVarsTypesWidths_21, &ArgRvalsTypesWidths_26, STATE_VARIABLE_GlobalData_44_44, &STATE_VARIABLE_GlobalData_47_47);
          ExtraArgRvalsTypesWidths_25 = ExtraRvalsTypesWidths_15;
        }
        break;
    }
    if ((MaybeCtorName_12 == (MR_Word) ((MR_Unsigned) 0U)))
      UsesBaseClass_28 = (MR_Integer) 1;
    else
      UsesBaseClass_28 = (MR_Integer) 0;
    ExtraArgRvals_29 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[5]), ExtraArgRvalsTypesWidths_25);
    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_42, &Target_34);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_42, VarType_20, &MLDS_VarType_35);
    ml_backend__ml_unify_gen_construct__construct_static_ground_term_14_p_0(ModuleInfo_23, Target_34, HighLevelData_24, Context_17, VarType_20, MLDS_VarType_35, ConsIdOrClosure_11, UsesBaseClass_28, Ptag_13, ExtraArgRvals_29, ArgRvalsTypesWidths_26, &GroundTerm_36, STATE_VARIABLE_GlobalData_47_47, &STATE_VARIABLE_GlobalData_51_51);
    ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(STATE_VARIABLE_GlobalData_51_51, STATE_VARIABLE_Info_0_42, &STATE_VARIABLE_Info_52_52);
    ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(Var_14, GroundTerm_36, STATE_VARIABLE_Info_52_52, STATE_VARIABLE_Info_43);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(*STATE_VARIABLE_Info_43, Var_14, &VarLval_37);
    Rval_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_36, (MR_Integer) 0))));
    AssignStmt_41 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_37, Rval_38, Context_17);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_18 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AssignStmt_41));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__construct_static_ground_term_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_44;

    conv0_LambdaHeadVar__2_44 = ml_backend__ml_unify_gen_construct__IntroducedFrom__func__construct_static_ground_term__1834__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_44));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__construct_static_ground_term_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word Target_16,
  MR_Word HighLevelData_17,
  MR_Word Context_18,
  MR_Word VarType_19,
  MR_Word MLDS_Type_20,
  MR_Word ConsIdOrClosure_21,
  MR_Word UsesBaseClass_22,
  MR_Word Ptag_23,
  MR_Word ExtraRvals_24,
  MR_Word RvalsTypesWidths_25,
  MR_Word * GroundTerm_26,
  MR_Word STATE_VARIABLE_GlobalData_0_40,
  MR_Word * STATE_VARIABLE_GlobalData_41)
{
  {
    MR_bool succeeded;
    MR_Word NonExtraInits_28;
    MR_Word ExtraInits_29;
    MR_Word AllInits_31;
    MR_Word ConstType_32;
    MR_Word Initializer_34;
    MR_Word ModuleName_35;
    MR_Word MLDS_ModuleName_36;
    MR_Word ConstDataAddrRval_37;
    MR_Word TaggedRval_38;
    MR_Word Rval_39;
    uint8_t Var_47;

    ml_backend__ml_unify_gen_construct__ml_pack_ground_term_args_into_word_inits_2_p_0(RvalsTypesWidths_25, &NonExtraInits_28);
    ExtraInits_29 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[4]), ExtraRvals_24);
    AllInits_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ExtraInits_29, NonExtraInits_28);
    ConstType_32 = ml_backend__ml_unify_gen_construct__get_const_type_for_cons_id_5_f_0(Target_16, HighLevelData_17, MLDS_Type_20, UsesBaseClass_22, ConsIdOrClosure_21);
    succeeded = ((((MR_tag((MR_Word) ConstType_32)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConstType_32, (MR_Integer) 0))) == (MR_Integer) 4)));
    if (succeeded)
    {
      {
        Initializer_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Initializer_34, 0) = ((MR_Box) (AllInits_31));
      }
    }
    else
      {
        Initializer_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Initializer_34, 0) = ((MR_Box) (ConstType_32));
        MR_hl_field(MR_mktag(2), Initializer_34, 1) = ((MR_Box) (AllInits_31));
      }
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_15, &ModuleName_35);
    MLDS_ModuleName_36 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_35);
    ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0(MLDS_ModuleName_36, (MR_Integer) 0, ConstType_32, Initializer_34, Context_18, &ConstDataAddrRval_37, STATE_VARIABLE_GlobalData_0_40, STATE_VARIABLE_GlobalData_41);
    Var_47 = (uint8_t) (Ptag_23);
    succeeded = (Var_47 == UINT8_C(0));
    if (succeeded)
      TaggedRval_38 = ConstDataAddrRval_37;
    else
      {
        TaggedRval_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TaggedRval_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), TaggedRval_38, 1) = ((MR_Box) (Ptag_23));
        MR_hl_field(MR_mktag(3), TaggedRval_38, 2) = ((MR_Box) (ConstDataAddrRval_37));
      }
    {
      Rval_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Rval_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), Rval_39, 1) = ((MR_Box) (MLDS_Type_20));
      MR_hl_field(MR_mktag(3), Rval_39, 2) = ((MR_Box) (TaggedRval_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *GroundTerm_26 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_39));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarType_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MLDS_Type_20));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_pack_ground_term_args_into_word_inits_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word RvalTypeWidth_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RvalsTypesWidths_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Rval_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_3, (MR_Integer) 0))));
      MR_Word PosWidth_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_3, (MR_Integer) 2))));

      switch (MR_tag((MR_Word) PosWidth_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = RvalsTypesWidths_4;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word HeadInit_15;
            MR_Word TailInits_16;

            {
              HeadInit_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), HeadInit_15, 0) = ((MR_Box) (Rval_6));
            }
            ml_backend__ml_unify_gen_construct__ml_pack_ground_term_args_into_word_inits_2_p_0(RvalsTypesWidths_4, &TailInits_16);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadInit_15));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailInits_16));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Fill_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_8, (MR_Integer) 5))));
                MR_Word RevOrRvals0_22;
                MR_Word LeftOverRvalsTypesWidths_23;
                MR_Word OrAllRval_24;
                MR_Word HeadInit_44;
                MR_Word TailInits_45;
                MR_Word RevOrRvals_56;
                MR_Word OrRvals_57;
                MR_Word Var_25;
                MR_Word Var_26;

                ml_backend__ml_unify_gen_construct__maybe_shift_and_accumulate_or_rval_5_p_0(Rval_6, (MR_Word) (((MR_Box) ((MR_Integer) 0))), Fill_21, (MR_Word) ((MR_Unsigned) 0U), &RevOrRvals0_22);
                ml_backend__ml_unify_gen_construct__ml_pack_into_one_word_loop_8_p_0(RvalsTypesWidths_4, &LeftOverRvalsTypesWidths_23, RevOrRvals0_22, &RevOrRvals_56, (MR_Word) ((MR_Unsigned) 0U), &Var_25, (MR_Integer) 0, &Var_26);
                mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevOrRvals_56, &OrRvals_57);
                if ((OrRvals_57 == (MR_Word) ((MR_Unsigned) 0U)))
                  OrAllRval_24 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[10]));
                else
                {
                  MR_Word HeadOrRval_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OrRvals_57, (MR_Integer) 0))));
                  MR_Word TailOrRvals_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OrRvals_57, (MR_Integer) 1))));
                  MR_Word OrAllRval_60;

                  OrAllRval_60 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(HeadOrRval_58, TailOrRvals_59);
                  {
                    OrAllRval_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), OrAllRval_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), OrAllRval_24, 1) = ((MR_Box) ((MR_Unsigned) 24U));
                    MR_hl_field(MR_mktag(3), OrAllRval_24, 2) = ((MR_Box) (OrAllRval_60));
                  }
                }
                {
                  HeadInit_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), HeadInit_44, 0) = ((MR_Box) (OrAllRval_24));
                }
                ml_backend__ml_unify_gen_construct__ml_pack_ground_term_args_into_word_inits_2_p_0(LeftOverRvalsTypesWidths_23, &TailInits_45);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadInit_44));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailInits_45));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_pack_ground_term_args_into_word_inits\'/2", (MR_String) "apw_partial_shifted");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_pack_ground_term_args_into_word_inits\'/2", (MR_String) "apw_none_shifted");
                  return;
                }
              }
              break;
          }
          break;
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__get_const_type_for_cons_id_5_f_0(
  MR_Word Target_7,
  MR_Word HighLevelData_8,
  MR_Word MLDS_Type_9,
  MR_Word UsesBaseClass_10,
  MR_Word ConsIdOrClosure_11)
{
  {
    MR_bool succeeded;
    MR_Word ConstType_12;

    switch (HighLevelData_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[13]));
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorCategory_15;

          succeeded = (Target_7 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0))) == (MR_Integer) 0)));
            if (succeeded)
            {
              TypeCtorCategory_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3))));
              succeeded = ((((MR_tag((MR_Word) TypeCtorCategory_15)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeCtorCategory_15, (MR_Integer) 0))) == (MR_Integer) 0)));
              if (succeeded)
              {
              }
            }
          }
          if (succeeded)
            ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[13]));
          else
          {
            MR_Word CtorSymName_18;
            MR_Integer CtorArity_19;
            MR_Word QualTypeName_21;
            MR_Integer TypeArity_22;
            MR_Word ConsId_17;

            succeeded = (UsesBaseClass_10 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) ConsIdOrClosure_11)) == (MR_Integer) 0);
              if (succeeded)
              {
                ConsId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsIdOrClosure_11, (MR_Integer) 0))));
                succeeded = ((((MR_tag((MR_Word) ConsId_17)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_17, (MR_Integer) 0))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  CtorSymName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_17, (MR_Integer) 1))));
                  CtorArity_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_17, (MR_Integer) 2))));
                  if (((MR_tag((MR_Word) MLDS_Type_9)) == (MR_Integer) 1))
                  {
                    MR_Word Var_48 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_9), (MR_Integer) 1));

                    QualTypeName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 0))));
                    TypeArity_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 1))));
                    succeeded = MR_TRUE;
                  }
                  else
                  if (((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0))) == (MR_Integer) 0))))
                  {
                    MR_Word MercuryType_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1))));
                    MR_Word TypeCtor_27;
                    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3))));

                    succeeded = ((((MR_tag((MR_Word) Var_47)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_47, (MR_Integer) 0))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
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
              MR_String UnqualTypeName_30 = ((MR_String) ((MR_hl_field(MR_mktag(0), QualTypeName_21, (MR_Integer) 2))));
              MR_String CtorName_31;
              MR_Word MLDS_Module_32;
              MR_String TypeName_34;
              MR_Word ClassQualifier_35;
              MR_Word QualClassName_36;
              MR_Word ClassId_37;

              CtorName_31 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_unqual_type_5_f_0(Target_7, UnqualTypeName_30, TypeArity_22, CtorSymName_18, CtorArity_19);
              MLDS_Module_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualTypeName_21, (MR_Integer) 0))));
              TypeName_34 = ((MR_String) ((MR_hl_field(MR_mktag(0), QualTypeName_21, (MR_Integer) 2))));
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
              ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_37)));
            }
            else
            {
              MR_Word TypeCtor_61;
              MR_Word Var_51;
              MR_Word MercuryType_58;

              succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0))) == (MR_Integer) 0)));
              if (succeeded)
              {
                MercuryType_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1))));
                Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3))));
                succeeded = ((((MR_tag((MR_Word) Var_51)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_51, (MR_Integer) 0))) == (MR_Integer) 1)));
                if (succeeded)
                {
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
                ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_59)));
              }
              else
              {
                MR_Word Var_53;

                succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3))));
                  succeeded = (Var_53 == (MR_Word) ((MR_Unsigned) 4U));
                }
                if (succeeded)
                  ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[13]));
                else
                {
                  MR_Word Var_55;

                  succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 3))));
                    succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                  if (succeeded)
                    ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[13]));
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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_box_extra_const_rval_list_lld_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__812__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_box_extra_const_rval_list_lld_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_GlobalData_6 = STATE_VARIABLE_GlobalData_0_5;
    }
    else
    {
      MR_Word RvalTypeWidth_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word RvalsTypesWidths_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word BoxedRvalTypeWidth_16;
      MR_Word BoxedRvalsTypesWidths_17;
      MR_Word Rval_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_14, (MR_Integer) 0))));
      MR_Word MLDS_Type_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_14, (MR_Integer) 1))));
      MR_Word PosWidth_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_14, (MR_Integer) 2))));
      MR_Word MaybePackedArgVar_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_14, (MR_Integer) 3))));
      MR_Word Width_23;
      MR_Word BoxedRval_24;
      MR_Word Var_27;
      MR_Word STATE_VARIABLE_GlobalData_31_31;

      Width_23 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(PosWidth_21);
      {
        Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_box_extra_const_rval_list_lld_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (Width_23));
        MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) ((MR_Integer) 2));
      }
      mercury__require__expect_3_p_0(Var_27, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_box_extra_const_rval_list_lld\'/6", (MR_String) "Width != aw_full_word");
      ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_1, Context_2, MLDS_Type_20, Width_23, Rval_19, &BoxedRval_24, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_31_31);
      {
        BoxedRvalTypeWidth_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 0) = ((MR_Box) (BoxedRval_24));
        MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 1) = ((MR_Box) (MLDS_Type_20));
        MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 2) = ((MR_Box) (PosWidth_21));
        MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 3) = ((MR_Box) (MaybePackedArgVar_22));
      }
      ml_backend__ml_unify_gen_construct__ml_gen_box_extra_const_rval_list_lld_6_p_0(ModuleInfo_1, Context_2, RvalsTypesWidths_15, &BoxedRvalsTypesWidths_17, STATE_VARIABLE_GlobalData_31_31, STATE_VARIABLE_GlobalData_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BoxedRvalTypeWidth_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoxedRvalsTypesWidths_17));
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_box_const_rval_list_lld_6_p_0(
  MR_Word Info_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_GlobalData_6 = STATE_VARIABLE_GlobalData_0_5;
  }
  else
  {
    MR_Word ArgVarTypeWidth_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgVarsTypesWidths_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word BoxedRvalTypeWidth_16;
    MR_Word BoxedRvalsTypesWidths_17;
    MR_Word ArgVar_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_14, (MR_Integer) 0))));
    MR_Word ArgPosWidth_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_14, (MR_Integer) 2))));
    MR_Word GroundTerm_22;
    MR_Word Rval_23;
    MR_Word MLDS_Type_25;
    MR_Word ModuleInfo_26;
    MR_Word Width_27;
    MR_Word BoxedRval_28;
    MR_Word STATE_VARIABLE_GlobalData_31_31;

    ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_p_0(Info_1, ArgVar_19, &GroundTerm_22);
    Rval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_22, (MR_Integer) 0))));
    MLDS_Type_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_22, (MR_Integer) 2))));
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_26);
    Width_27 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_21);
    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_26, Context_2, MLDS_Type_25, Width_27, Rval_23, &BoxedRval_28, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_31_31);
    {
      BoxedRvalTypeWidth_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 0) = ((MR_Box) (BoxedRval_28));
      MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 2) = ((MR_Box) (ArgPosWidth_21));
      MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ml_backend__ml_unify_gen_construct__ml_gen_box_const_rval_list_lld_6_p_0(Info_1, Context_2, ArgVarsTypesWidths_15, &BoxedRvalsTypesWidths_17, STATE_VARIABLE_GlobalData_31_31, STATE_VARIABLE_GlobalData_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BoxedRvalTypeWidth_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoxedRvalsTypesWidths_17));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_box_or_unbox_const_rval_list_hld_6_p_0(
  MR_Word Info_1,
  MR_Word Context_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_GlobalData_0_5,
  MR_Word * STATE_VARIABLE_GlobalData_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_GlobalData_6 = STATE_VARIABLE_GlobalData_0_5;
  }
  else
  {
    MR_Word ArgVarTypeWidth_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgVarsTypesWidths_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word FieldRvalTypeWidth_16;
    MR_Word FieldRvalsTypesWidths_17;
    MR_Word ArgVar_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_14, (MR_Integer) 0))));
    MR_Word ConsArgType_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_14, (MR_Integer) 1))));
    MR_Word ConsArgPosWidth_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarTypeWidth_14, (MR_Integer) 2))));
    MR_Word ArgType_22;
    MR_Word ArgRval_23;
    MR_Word ModuleInfo_24;
    MR_Word ConsWidth_26;
    MR_Word FieldType_27;
    MR_Word FieldRval_28;
    MR_Word STATE_VARIABLE_GlobalData_31_31;
    MR_Word GroundTerm_38;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_1, ArgVar_19, &ArgType_22);
    ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_p_0(Info_1, ArgVar_19, &GroundTerm_38);
    ArgRval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_38, (MR_Integer) 0))));
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_24);
    ConsWidth_26 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ConsArgPosWidth_21);
    ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_24, (MR_Integer) 1, ConsArgType_20, ConsWidth_26, &FieldType_27);
    switch (MR_tag((MR_Word) FieldType_27)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word MLDS_ArgType_52;

          MLDS_ArgType_52 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_24, ArgType_22);
          ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_24, Context_2, MLDS_ArgType_52, (MR_Integer) 2, ArgRval_23, &FieldRval_28, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_31_31);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_24, ArgType_22, FieldType_27, (MR_Integer) 0, ArgRval_23, &FieldRval_28);
          STATE_VARIABLE_GlobalData_31_31 = STATE_VARIABLE_GlobalData_0_5;
        }
        break;
      case (MR_Integer) 3:
        {
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_24, ArgType_22, FieldType_27, (MR_Integer) 0, ArgRval_23, &FieldRval_28);
          STATE_VARIABLE_GlobalData_31_31 = STATE_VARIABLE_GlobalData_0_5;
        }
        break;
    }
    {
      FieldRvalTypeWidth_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FieldRvalTypeWidth_16, 0) = ((MR_Box) (FieldRval_28));
      MR_hl_field(MR_mktag(0), FieldRvalTypeWidth_16, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), FieldRvalTypeWidth_16, 2) = ((MR_Box) (ConsArgPosWidth_21));
      MR_hl_field(MR_mktag(0), FieldRvalTypeWidth_16, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ml_backend__ml_unify_gen_construct__ml_gen_box_or_unbox_const_rval_list_hld_6_p_0(Info_1, Context_2, ArgVarsTypesWidths_15, &FieldRvalsTypesWidths_17, STATE_VARIABLE_GlobalData_31_31, STATE_VARIABLE_GlobalData_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FieldRvalTypeWidth_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FieldRvalsTypesWidths_17));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_dynamically_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_68;

    conv0_LambdaHeadVar__2_68 = ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_dynamically__515__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_68));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_dynamically_13_p_0(
  MR_Word ConsIdOrClosure_14,
  MR_Word MaybeCtorName_15,
  MR_Word Ptag_16,
  MR_Word ExplicitSectag_17,
  MR_Word Var_18,
  MR_Word ExtraRvalsTypesWidths_19,
  MR_Word ArgVars_20,
  MR_Word ArgModes_21,
  MR_Word TakeAddr_22,
  MR_Word Context_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63)
{
  {
    MR_Word VarType_26;
    MR_Word ArgVarsTypesWidths_27;
    MR_Word UseAtomicCells_28;
    MR_Word MayUseAtomic0_29;
    MR_Word TakeAddrInfos_31;
    MR_Word ArgRvalsTypesWidths0_32;
    MR_Word MayUseAtomic_33;
    MR_Word PackedArgRvalsTypesWidths_34;
    MR_Word ArgRvalsTypesWidths_35;
    MR_Integer Size_36;
    MR_Word SizeInWordsRval_37;
    MR_Word ProfileMemory_38;
    MR_Word MaybeAllocId_49;
    MR_Word VarLval_50;
    MR_Word ArgRvalsTypes_56;
    MR_Word MLDS_VarType_57;
    MR_Word MakeNewObject_58;
    MR_Word MakeNewObjStmt_59;
    MR_Word MaybePtag_60;
    MR_Word TakeAddrStmts_61;
    MR_Word Var_64;
    MR_Word Var_69;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_62, Var_18, &VarType_26);
    ml_backend__ml_unify_gen_util__associate_maybe_cons_id_args_with_types_widths_5_p_0(STATE_VARIABLE_Info_0_62, VarType_26, ConsIdOrClosure_14, ArgVars_20, &ArgVarsTypesWidths_27);
    ml_backend__ml_gen_info__ml_gen_info_get_use_atomic_cells_2_p_0(STATE_VARIABLE_Info_0_62, &UseAtomicCells_28);
    switch (UseAtomicCells_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MayUseAtomic0_29 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        MayUseAtomic0_29 = (MR_Integer) 0;
        break;
    }
    ml_backend__ml_unify_gen_construct__ml_gen_dynamic_construct_args_9_p_0(STATE_VARIABLE_Info_0_62, ArgVarsTypesWidths_27, ArgModes_21, (MR_Integer) 1, TakeAddr_22, &TakeAddrInfos_31, &ArgRvalsTypesWidths0_32, MayUseAtomic0_29, &MayUseAtomic_33);
    ml_backend__ml_unify_gen_construct__ml_expand_or_pack_into_words_3_p_0(STATE_VARIABLE_Info_0_62, ArgRvalsTypesWidths0_32, &PackedArgRvalsTypesWidths_34);
    ArgRvalsTypesWidths_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0), ExtraRvalsTypesWidths_19, PackedArgRvalsTypesWidths_34);
    mercury__list__length_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0), ArgRvalsTypesWidths_35, &Size_36);
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_64, 0) = ((MR_Box) (Size_36));
    }
    {
      SizeInWordsRval_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SizeInWordsRval_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), SizeInWordsRval_37, 1) = ((MR_Box) (Var_64));
    }
    ml_backend__ml_gen_info__ml_gen_info_get_profile_memory_2_p_0(STATE_VARIABLE_Info_0_62, &ProfileMemory_38);
    switch (ProfileMemory_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeAllocId_49 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_63 = STATE_VARIABLE_Info_0_62;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleInfo_39;
          MR_Word PredProcId_40;
          MR_Word ProcLabel_42;
          MR_Word GlobalData0_43;
          MR_Word MaybeConsId_45;
          MR_Word AllocId_47;
          MR_Word GlobalData_48;
          MR_Word Var_65;
          MR_Word _Module_41;

          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_62, &ModuleInfo_39);
          ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_62, &PredProcId_40);
          ml_backend__ml_code_util__ml_gen_proc_label_4_p_0(ModuleInfo_39, PredProcId_40, &_Module_41, &ProcLabel_42);
          ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_62, &GlobalData0_43);
          if (((MR_tag((MR_Word) ConsIdOrClosure_14)) == (MR_Integer) 1))
            MaybeConsId_45 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word ConsId_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsIdOrClosure_14, (MR_Integer) 0))));

            {
              MaybeConsId_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeConsId_45, 0) = ((MR_Box) (ConsId_44));
            }
          }
          Var_65 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (ProcLabel_42)));
          ml_backend__ml_global_data__ml_gen_alloc_site_7_p_0(Var_65, MaybeConsId_45, Size_36, Context_23, &AllocId_47, GlobalData0_43, &GlobalData_48);
          ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_48, STATE_VARIABLE_Info_0_62, STATE_VARIABLE_Info_63);
          {
            MaybeAllocId_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeAllocId_49, 0) = ((MR_Box) (AllocId_47));
          }
        }
        break;
    }
    ml_backend__ml_code_util__ml_gen_var_3_p_0(*STATE_VARIABLE_Info_63, Var_18, &VarLval_50);
    ArgRvalsTypes_56 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[3]), ArgRvalsTypesWidths_35);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(*STATE_VARIABLE_Info_63, VarType_26, &MLDS_VarType_57);
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (SizeInWordsRval_37));
    }
    {
      MakeNewObject_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MakeNewObject_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), MakeNewObject_58, 1) = ((MR_Box) (VarLval_50));
      MR_hl_field(MR_mktag(3), MakeNewObject_58, 2) = ((MR_Box) (Ptag_16));
      MR_hl_field(MR_mktag(3), MakeNewObject_58, 3) = ((MR_Box) (ExplicitSectag_17));
      MR_hl_field(MR_mktag(3), MakeNewObject_58, 4) = ((MR_Box) (MLDS_VarType_57));
      MR_hl_field(MR_mktag(3), MakeNewObject_58, 5) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(3), MakeNewObject_58, 6) = ((MR_Box) (MaybeCtorName_15));
      MR_hl_field(MR_mktag(3), MakeNewObject_58, 7) = ((MR_Box) (ArgRvalsTypes_56));
      MR_hl_field(MR_mktag(3), MakeNewObject_58, 8) = ((MR_Box) (MayUseAtomic_33));
      MR_hl_field(MR_mktag(3), MakeNewObject_58, 9) = ((MR_Box) (MaybeAllocId_49));
    }
    {
      MakeNewObjStmt_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_59, 1) = ((MR_Box) (MakeNewObject_58));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_59, 2) = ((MR_Box) (Context_23));
    }
    {
      MaybePtag_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePtag_60, 0) = ((MR_Box) (Ptag_16));
    }
    ml_backend__ml_unify_gen_construct__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_31, VarLval_50, MLDS_VarType_57, MaybePtag_60, Context_23, *STATE_VARIABLE_Info_63, &TakeAddrStmts_61);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_24 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MakeNewObjStmt_59));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TakeAddrStmts_61));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_expand_or_pack_into_words_3_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word RvalTypeWidth_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word RvalsTypesWidths_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Rval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_6, (MR_Integer) 0))));
      MR_Word Type_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_6, (MR_Integer) 1))));
      MR_Word PosWidth_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_6, (MR_Integer) 2))));
      MR_Word MaybePackedArgVar_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_6, (MR_Integer) 3))));

      switch (MR_tag((MR_Word) PosWidth_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__2_2 = RvalsTypesWidths_7;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TailPackedRvalsTypesWidths_15;

            ml_backend__ml_unify_gen_construct__ml_expand_or_pack_into_words_3_p_0(Info_1, RvalsTypesWidths_7, &TailPackedRvalsTypesWidths_15);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RvalTypeWidth_6));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailPackedRvalsTypesWidths_15));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer AOOffset_16;
            MR_Integer CellOffset_17;
            MR_Word DoubleWordKind_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PosWidth_11, (MR_Integer) 2))));
            MR_Word SubstType_20;
            MR_Word RvalA_21;
            MR_Word RvalB_22;
            MR_Word AOOffsetA_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PosWidth_11, (MR_Integer) 0))));
            MR_Word AOOffsetB_24;
            MR_Word CellOffsetA_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PosWidth_11, (MR_Integer) 1))));
            MR_Word CellOffsetB_26;
            MR_Word RvalTypeWidthA_27;
            MR_Word RvalTypeWidthB_28;
            MR_Integer Var_75;
            MR_Integer Var_77;
            MR_Word Var_79;
            MR_Word Var_81;
            MR_Word Var_83;
            MR_Word TailPackedRvalsTypesWidths_84;
            MR_Word Var_66;

            AOOffset_16 = (MR_Integer) (AOOffsetA_23);
            CellOffset_17 = (MR_Integer) (CellOffsetA_25);
            ml_backend__ml_unify_gen_construct__ml_expand_or_pack_into_words_3_p_0(Info_1, RvalsTypesWidths_7, &TailPackedRvalsTypesWidths_84);
            succeeded = ((((MR_tag((MR_Word) Rval_9)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_9, (MR_Integer) 0))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_9, (MR_Integer) 1))));
              succeeded = ((((MR_tag((MR_Word) Var_66)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_66, (MR_Integer) 0))) == (MR_Integer) 20)));
              if (succeeded)
              {
              }
            }
            if (succeeded)
            {
              SubstType_20 = (MR_Word) ((MR_Unsigned) 24U);
              RvalA_21 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[12]));
              RvalB_22 = RvalA_21;
            }
            else
            {
              SubstType_20 = (MR_Word) ((MR_Unsigned) 8U);
              switch (DoubleWordKind_18) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      RvalA_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalA_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), RvalA_21, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                      MR_hl_field(MR_mktag(3), RvalA_21, 2) = ((MR_Box) (Rval_9));
                    }
                    {
                      RvalB_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalB_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), RvalB_22, 1) = ((MR_Box) ((MR_Unsigned) 48U));
                      MR_hl_field(MR_mktag(3), RvalB_22, 2) = ((MR_Box) (Rval_9));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      RvalA_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalA_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), RvalA_21, 1) = ((MR_Box) ((MR_Unsigned) 52U));
                      MR_hl_field(MR_mktag(3), RvalA_21, 2) = ((MR_Box) (Rval_9));
                    }
                    {
                      RvalB_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalB_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), RvalB_22, 1) = ((MR_Box) ((MR_Unsigned) 56U));
                      MR_hl_field(MR_mktag(3), RvalB_22, 2) = ((MR_Box) (Rval_9));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      RvalA_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalA_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), RvalA_21, 1) = ((MR_Box) ((MR_Unsigned) 60U));
                      MR_hl_field(MR_mktag(3), RvalA_21, 2) = ((MR_Box) (Rval_9));
                    }
                    {
                      RvalB_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), RvalB_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), RvalB_22, 1) = ((MR_Box) ((MR_Unsigned) 64U));
                      MR_hl_field(MR_mktag(3), RvalB_22, 2) = ((MR_Box) (Rval_9));
                    }
                  }
                  break;
              }
            }
            Var_75 = (MR_Integer) ((MR_Unsigned) AOOffset_16 + (MR_Unsigned) (MR_Integer) 1);
            AOOffsetB_24 = (MR_Word) (Var_75);
            Var_77 = (MR_Integer) ((MR_Unsigned) CellOffset_17 + (MR_Unsigned) (MR_Integer) 1);
            CellOffsetB_26 = (MR_Word) (Var_77);
            {
              Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (AOOffsetA_23));
              MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (CellOffsetA_25));
            }
            {
              RvalTypeWidthA_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RvalTypeWidthA_27, 0) = ((MR_Box) (RvalA_21));
              MR_hl_field(MR_mktag(0), RvalTypeWidthA_27, 1) = ((MR_Box) (SubstType_20));
              MR_hl_field(MR_mktag(0), RvalTypeWidthA_27, 2) = ((MR_Box) (Var_79));
              MR_hl_field(MR_mktag(0), RvalTypeWidthA_27, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (AOOffsetB_24));
              MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (CellOffsetB_26));
            }
            {
              RvalTypeWidthB_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RvalTypeWidthB_28, 0) = ((MR_Box) (RvalB_22));
              MR_hl_field(MR_mktag(0), RvalTypeWidthB_28, 1) = ((MR_Box) (SubstType_20));
              MR_hl_field(MR_mktag(0), RvalTypeWidthB_28, 2) = ((MR_Box) (Var_81));
              MR_hl_field(MR_mktag(0), RvalTypeWidthB_28, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (RvalTypeWidthB_28));
              MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (TailPackedRvalsTypesWidths_84));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RvalTypeWidthA_27));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_83));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_11, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Fill_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_11, (MR_Integer) 5))));
                MR_Word RevOrRvals0_32;
                MR_Word RevPackedArgVars0_33;
                MR_Word AllPartialsHavePackedArgVars0_34;
                MR_Word LeftOverRvalsTypesWidths_36;
                MR_Word OrAllRval_37;
                MR_Word RevPackedArgVars_38;
                MR_Word AllPartialsHavePackedArgVars_39;
                MR_Word WordRval_40;
                MR_Word PackedRvalTypeWidth_44;
                MR_Word Var_62;
                MR_Word TailPackedRvalsTypesWidths_85;
                MR_Word AOOffset_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_11, (MR_Integer) 1))));
                MR_Word CellOffset_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_11, (MR_Integer) 2))));

                ml_backend__ml_unify_gen_construct__maybe_shift_and_accumulate_or_rval_5_p_0(Rval_9, (MR_Word) (((MR_Box) ((MR_Integer) 0))), Fill_31, (MR_Word) ((MR_Unsigned) 0U), &RevOrRvals0_32);
                if ((MaybePackedArgVar_12 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  RevPackedArgVars0_33 = (MR_Word) ((MR_Unsigned) 0U);
                  AllPartialsHavePackedArgVars0_34 = (MR_Integer) 0;
                }
                else
                {
                  MR_Word PackedArgVar_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePackedArgVar_12, (MR_Integer) 0))));

                  {
                    RevPackedArgVars0_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), RevPackedArgVars0_33, 0) = ((MR_Box) (PackedArgVar_35));
                    MR_hl_field(MR_mktag(1), RevPackedArgVars0_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  AllPartialsHavePackedArgVars0_34 = (MR_Integer) 1;
                }
                ml_backend__ml_unify_gen_construct__ml_pack_into_one_word_8_p_0(RvalsTypesWidths_7, &LeftOverRvalsTypesWidths_36, RevOrRvals0_32, &OrAllRval_37, RevPackedArgVars0_33, &RevPackedArgVars_38, AllPartialsHavePackedArgVars0_34, &AllPartialsHavePackedArgVars_39);
                switch (AllPartialsHavePackedArgVars_39) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    WordRval_40 = OrAllRval_37;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word PackedArgVars_41;
                      MR_Word PackedArgsMap_42;
                      MR_Word OldWordRval_43;
                      MR_Box conv0_OldWordRval_43;

                      mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0), RevPackedArgVars_38, &PackedArgVars_41);
                      ml_backend__ml_gen_info__ml_gen_info_get_packed_args_map_2_p_0(Info_1, &PackedArgsMap_42);
                      succeeded = mercury__map__search_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[6]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), PackedArgsMap_42, ((MR_Box) (PackedArgVars_41)), &conv0_OldWordRval_43);
                      if (succeeded)
                      {
                        OldWordRval_43 = ((MR_Word) (conv0_OldWordRval_43));
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                      {
                        {
                          WordRval_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), WordRval_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), WordRval_40, 1) = ((MR_Box) ((MR_Unsigned) 24U));
                          MR_hl_field(MR_mktag(3), WordRval_40, 2) = ((MR_Box) (OldWordRval_43));
                        }
                      }
                      else
                        WordRval_40 = OrAllRval_37;
                    }
                    break;
                }
                {
                  Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (AOOffset_86));
                  MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (CellOffset_87));
                }
                {
                  PackedRvalTypeWidth_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), PackedRvalTypeWidth_44, 0) = ((MR_Box) (WordRval_40));
                  MR_hl_field(MR_mktag(0), PackedRvalTypeWidth_44, 1) = ((MR_Box) (Type_10));
                  MR_hl_field(MR_mktag(0), PackedRvalTypeWidth_44, 2) = ((MR_Box) (Var_62));
                  MR_hl_field(MR_mktag(0), PackedRvalTypeWidth_44, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                ml_backend__ml_unify_gen_construct__ml_expand_or_pack_into_words_3_p_0(Info_1, LeftOverRvalsTypesWidths_36, &TailPackedRvalsTypesWidths_85);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PackedRvalTypeWidth_44));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailPackedRvalsTypesWidths_85));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_expand_or_pack_into_words\'/3", (MR_String) "apw_partial_shifted");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_expand_or_pack_into_words\'/3", (MR_String) "apw_none_shifted");
                  return;
                }
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
ml_backend__ml_unify_gen_construct__ml_pack_into_one_word_8_p_0(
  MR_Word RvalsTypesWidths_9,
  MR_Word * LeftOverRvalsTypesWidths_10,
  MR_Word RevOrRvals0_11,
  MR_Word * BoxedOrAllRval_12,
  MR_Word STATE_VARIABLE_RevPackedArgVars_0_20,
  MR_Word * STATE_VARIABLE_RevPackedArgVars_21,
  MR_Word STATE_VARIABLE_AllPartialsHavePackedArgVars_0_22,
  MR_Word * STATE_VARIABLE_AllPartialsHavePackedArgVars_23)
{
  {
    MR_Word RevOrRvals_15;
    MR_Word OrRvals_16;

    ml_backend__ml_unify_gen_construct__ml_pack_into_one_word_loop_8_p_0(RvalsTypesWidths_9, LeftOverRvalsTypesWidths_10, RevOrRvals0_11, &RevOrRvals_15, STATE_VARIABLE_RevPackedArgVars_0_20, STATE_VARIABLE_RevPackedArgVars_21, STATE_VARIABLE_AllPartialsHavePackedArgVars_0_22, STATE_VARIABLE_AllPartialsHavePackedArgVars_23);
    mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevOrRvals_15, &OrRvals_16);
    if ((OrRvals_16 == (MR_Word) ((MR_Unsigned) 0U)))
      *BoxedOrAllRval_12 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[10]));
    else
    {
      MR_Word HeadOrRval_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OrRvals_16, (MR_Integer) 0))));
      MR_Word TailOrRvals_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OrRvals_16, (MR_Integer) 1))));
      MR_Word OrAllRval_19;

      OrAllRval_19 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(HeadOrRval_17, TailOrRvals_18);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        *BoxedOrAllRval_12 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (OrAllRval_19));
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_pack_into_one_word_loop_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevOrRvals_0_3,
  MR_Word * STATE_VARIABLE_RevOrRvals_4,
  MR_Word STATE_VARIABLE_RevPackedArgVars_0_5,
  MR_Word * STATE_VARIABLE_RevPackedArgVars_6,
  MR_Word STATE_VARIABLE_AllPartialsHavePackedArgVars_0_7,
  MR_Word * STATE_VARIABLE_AllPartialsHavePackedArgVars_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_AllPartialsHavePackedArgVars_8 = STATE_VARIABLE_AllPartialsHavePackedArgVars_0_7;
      *STATE_VARIABLE_RevPackedArgVars_6 = STATE_VARIABLE_RevPackedArgVars_0_5;
      *STATE_VARIABLE_RevOrRvals_4 = STATE_VARIABLE_RevOrRvals_0_3;
    }
    else
    {
      MR_Word RvalTypeWidth_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RvalsTypesWidths_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Rval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_18, (MR_Integer) 0))));
      MR_Word PosWidth_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_18, (MR_Integer) 2))));
      MR_Word MaybePackedArgVar_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_18, (MR_Integer) 3))));

      switch (MR_tag((MR_Word) PosWidth_26)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__2_2 = HeadVar__1_1;
            *STATE_VARIABLE_RevOrRvals_4 = STATE_VARIABLE_RevOrRvals_0_3;
            *STATE_VARIABLE_RevPackedArgVars_6 = STATE_VARIABLE_RevPackedArgVars_0_5;
            *STATE_VARIABLE_AllPartialsHavePackedArgVars_8 = STATE_VARIABLE_AllPartialsHavePackedArgVars_0_7;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *HeadVar__2_2 = HeadVar__1_1;
            *STATE_VARIABLE_RevOrRvals_4 = STATE_VARIABLE_RevOrRvals_0_3;
            *STATE_VARIABLE_RevPackedArgVars_6 = STATE_VARIABLE_RevPackedArgVars_0_5;
            *STATE_VARIABLE_AllPartialsHavePackedArgVars_8 = STATE_VARIABLE_AllPartialsHavePackedArgVars_0_7;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_26, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *HeadVar__2_2 = HeadVar__1_1;
                *STATE_VARIABLE_RevOrRvals_4 = STATE_VARIABLE_RevOrRvals_0_3;
                *STATE_VARIABLE_RevPackedArgVars_6 = STATE_VARIABLE_RevPackedArgVars_0_5;
                *STATE_VARIABLE_AllPartialsHavePackedArgVars_8 = STATE_VARIABLE_AllPartialsHavePackedArgVars_0_7;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Shift_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_26, (MR_Integer) 3))));
                MR_Word Fill_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_26, (MR_Integer) 6))));
                MR_Word STATE_VARIABLE_RevOrRvals_53_59;
                MR_Word STATE_VARIABLE_RevPackedArgVars_54_60;
                MR_Word STATE_VARIABLE_AllPartialsHavePackedArgVars_55_61;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_STATE_VARIABLE_RevOrRvals_0_3;
                MR_Word next_value_of_STATE_VARIABLE_RevPackedArgVars_0_5;
                MR_Word next_value_of_STATE_VARIABLE_AllPartialsHavePackedArgVars_0_7;

                ml_backend__ml_unify_gen_construct__maybe_shift_and_accumulate_or_rval_5_p_0(Rval_24, Shift_40, Fill_43, STATE_VARIABLE_RevOrRvals_0_3, &STATE_VARIABLE_RevOrRvals_53_59);
                if ((MaybePackedArgVar_27 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  STATE_VARIABLE_AllPartialsHavePackedArgVars_55_61 = (MR_Integer) 0;
                  STATE_VARIABLE_RevPackedArgVars_54_60 = STATE_VARIABLE_RevPackedArgVars_0_5;
                }
                else
                {
                  MR_Word PackedArgVar_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePackedArgVar_27, (MR_Integer) 0))));

                  {
                    STATE_VARIABLE_RevPackedArgVars_54_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPackedArgVars_54_60, 0) = ((MR_Box) (PackedArgVar_44));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPackedArgVars_54_60, 1) = ((MR_Box) (STATE_VARIABLE_RevPackedArgVars_0_5));
                  }
                  STATE_VARIABLE_AllPartialsHavePackedArgVars_55_61 = STATE_VARIABLE_AllPartialsHavePackedArgVars_0_7;
                }
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = RvalsTypesWidths_19;
                next_value_of_STATE_VARIABLE_RevOrRvals_0_3 = STATE_VARIABLE_RevOrRvals_53_59;
                next_value_of_STATE_VARIABLE_RevPackedArgVars_0_5 = STATE_VARIABLE_RevPackedArgVars_54_60;
                next_value_of_STATE_VARIABLE_AllPartialsHavePackedArgVars_0_7 = STATE_VARIABLE_AllPartialsHavePackedArgVars_55_61;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                STATE_VARIABLE_RevOrRvals_0_3 = next_value_of_STATE_VARIABLE_RevOrRvals_0_3;
                STATE_VARIABLE_RevPackedArgVars_0_5 = next_value_of_STATE_VARIABLE_RevPackedArgVars_0_5;
                STATE_VARIABLE_AllPartialsHavePackedArgVars_0_7 = next_value_of_STATE_VARIABLE_AllPartialsHavePackedArgVars_0_7;
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word next_value_of_HeadVar__1_1 = RvalsTypesWidths_19;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
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
ml_backend__ml_unify_gen_construct__maybe_shift_and_accumulate_or_rval_5_p_0(
  MR_Word Rval_6,
  MR_Word Shift_7,
  MR_Word Fill_8,
  MR_Word STATE_VARIABLE_RevOrRvals_0_18,
  MR_Word * STATE_VARIABLE_RevOrRvals_19)
{
  {
    MR_bool succeeded;
    MR_Integer ShiftInt_10 = (MR_Integer) (Shift_7);
    MR_Word CastRval_11;
    MR_Word RvalConst_12;

    ml_backend__ml_unify_gen_util__ml_cast_to_unsigned_without_sign_extend_3_p_0(Fill_8, Rval_6, &CastRval_11);
    succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1)));
    if (succeeded)
    {
      RvalConst_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) RvalConst_12)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), RvalConst_12, (MR_Integer) 0))));

            succeeded = (Var_21 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalConst_12, (MR_Integer) 0)))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Unsigned Var_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), RvalConst_12, (MR_Integer) 1))));

                succeeded = (Var_20 == (MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 20:
              succeeded = MR_TRUE;
              break;
          }
          break;
      }
    }
    if (succeeded)
      *STATE_VARIABLE_RevOrRvals_19 = STATE_VARIABLE_RevOrRvals_0_18;
    else
    {
      MR_Word ShiftedRval_14;

      succeeded = (ShiftInt_10 == (MR_Integer) 0);
      if (succeeded)
        ShiftedRval_14 = CastRval_11;
      else
      {
        MR_Word Type_15;
        MR_Word SubRval_16;

        succeeded = ((((MR_tag((MR_Word) CastRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CastRval_11, (MR_Integer) 0))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Type_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CastRval_11, (MR_Integer) 1))));
          SubRval_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CastRval_11, (MR_Integer) 2))));
          {
            MR_Word ShiftedSubRval_17;
            MR_Word Var_24;
            MR_Word Var_25;

            {
              Var_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_25, 0) = ((MR_Box) (ShiftInt_10));
            }
            {
              Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (Var_25));
            }
            {
              ShiftedSubRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ShiftedSubRval_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), ShiftedSubRval_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[9])));
              MR_hl_field(MR_mktag(3), ShiftedSubRval_17, 2) = ((MR_Box) (SubRval_16));
              MR_hl_field(MR_mktag(3), ShiftedSubRval_17, 3) = ((MR_Box) (Var_24));
            }
            {
              ShiftedRval_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ShiftedRval_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), ShiftedRval_14, 1) = ((MR_Box) (Type_15));
              MR_hl_field(MR_mktag(3), ShiftedRval_14, 2) = ((MR_Box) (ShiftedSubRval_17));
            }
          }
        }
        else
        {
          MR_Word Var_28;
          MR_Word Var_29;

          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_29, 0) = ((MR_Box) (ShiftInt_10));
          }
          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Var_29));
          }
          {
            ShiftedRval_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ShiftedRval_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), ShiftedRval_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[9])));
            MR_hl_field(MR_mktag(3), ShiftedRval_14, 2) = ((MR_Box) (CastRval_11));
            MR_hl_field(MR_mktag(3), ShiftedRval_14, 3) = ((MR_Box) (Var_28));
          }
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_RevOrRvals_19 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ShiftedRval_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevOrRvals_0_18));
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_dynamic_construct_args_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_dynamic_construct_args__878__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_dynamic_construct_args_9_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer CurArgNum_4,
  MR_Word STATE_VARIABLE_TakeAddr_0_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_8,
  MR_Word * STATE_VARIABLE_MayUseAtomic_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_MayUseAtomic_9 = STATE_VARIABLE_MayUseAtomic_0_8;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_dynamic_construct_args\'/9", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_dynamic_construct_args\'/9", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word ArgMode_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgModes_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgVar_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_145, (MR_Integer) 0))));
        MR_Word ConsArgType_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_145, (MR_Integer) 1))));
        MR_Word ArgPosWidth_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_145, (MR_Integer) 2))));
        MR_Word Lval_53;
        MR_Word ArgType_54;
        MR_Word ModuleInfo_55;
        MR_Word HighLevelData_56;
        MR_Word ArgWidth_57;
        MR_Word BoxedArgType_58;
        MR_Word MLDS_Type_59;
        MR_Word CellOffset_61;
        MR_Word STATE_VARIABLE_MayUseAtomic_103_103;
        MR_Word STATE_VARIABLE_TakeAddr_105_105;
        MR_Integer Var_138;

        ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_1, ArgVar_50, &Lval_53);
        ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_1, ArgVar_50, &ArgType_54);
        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_55);
        check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_55, ArgType_54, STATE_VARIABLE_MayUseAtomic_0_8, &STATE_VARIABLE_MayUseAtomic_103_103);
        ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_1, &HighLevelData_56);
        ArgWidth_57 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_52);
        ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_55, HighLevelData_56, ConsArgType_51, ArgWidth_57, &BoxedArgType_58);
        MLDS_Type_59 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_55, BoxedArgType_58);
        switch (MR_tag((MR_Word) ArgPosWidth_52)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            CellOffset_61 = (MR_Word) (((MR_Box) ((MR_Integer) -1)));
            break;
          case (MR_Integer) 1:
            CellOffset_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgPosWidth_52, (MR_Integer) 1))));
            break;
          case (MR_Integer) 2:
            CellOffset_61 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_52, (MR_Integer) 1))));
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                CellOffset_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 2))));
                break;
              case (MR_Integer) 1:
                CellOffset_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 2))));
                break;
              case (MR_Integer) 2:
                CellOffset_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 2))));
                break;
            }
            break;
        }
        succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TakeAddr_0_5)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_138 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_5, (MR_Integer) 0))));
          STATE_VARIABLE_TakeAddr_105_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_5, (MR_Integer) 1))));
          succeeded = (CurArgNum_4 == Var_138);
        }
        if (succeeded)
        {
          MR_Word Rval_74;
          MR_Word RvalMLDSTypeWidth_75;
          MR_Word OrigMLDS_Type_76;
          MR_Word TakeAddrInfo_77;
          MR_Word TakeAddrInfosTail_78;
          MR_Word TailRvalsMLDSTypesWidths_79;
          MR_Word Var_106;
          MR_Word Var_110;
          MR_Integer Var_112;

          {
            Var_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), Var_106, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_dynamic_construct_args_9_p_0_1));
            MR_hl_field(MR_mktag(0), Var_106, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_106, 3) = ((MR_Box) (ArgWidth_57));
            MR_hl_field(MR_mktag(0), Var_106, 4) = ((MR_Box) ((MR_Integer) 2));
          }
          mercury__require__expect_3_p_0(Var_106, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_dynamic_construct_args\'/9", (MR_String) "taking address of non word-sized argument");
          {
            Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
            MR_hl_field(MR_mktag(3), Var_110, 1) = ((MR_Box) (MLDS_Type_59));
          }
          {
            Rval_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Rval_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Rval_74, 1) = ((MR_Box) (Var_110));
          }
          {
            RvalMLDSTypeWidth_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_75, 0) = ((MR_Box) (Rval_74));
            MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_75, 1) = ((MR_Box) (MLDS_Type_59));
            MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_75, 2) = ((MR_Box) (ArgPosWidth_52));
            MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_75, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          OrigMLDS_Type_76 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_55, ConsArgType_51);
          {
            TakeAddrInfo_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TakeAddrInfo_77, 0) = ((MR_Box) (ArgVar_50));
            MR_hl_field(MR_mktag(0), TakeAddrInfo_77, 1) = ((MR_Box) (CellOffset_61));
            MR_hl_field(MR_mktag(0), TakeAddrInfo_77, 2) = ((MR_Box) (OrigMLDS_Type_76));
            MR_hl_field(MR_mktag(0), TakeAddrInfo_77, 3) = ((MR_Box) (MLDS_Type_59));
          }
          Var_112 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) (MR_Integer) 1);
          ml_backend__ml_unify_gen_construct__ml_gen_dynamic_construct_args_9_p_0(Info_1, Var_144, ArgModes_44, Var_112, STATE_VARIABLE_TakeAddr_105_105, &TakeAddrInfosTail_78, &TailRvalsMLDSTypesWidths_79, STATE_VARIABLE_MayUseAtomic_103_103, STATE_VARIABLE_MayUseAtomic_9);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__6_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TakeAddrInfo_77));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TakeAddrInfosTail_78));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__7_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RvalMLDSTypeWidth_75));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailRvalsMLDSTypesWidths_79));
          }
        }
        else
        {
          succeeded = (ArgPosWidth_52 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MR_Integer Var_115 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) (MR_Integer) 1);
            MR_Word next_value_of_HeadVar__2_2 = Var_144;
            MR_Word next_value_of_HeadVar__3_3 = ArgModes_44;
            MR_Integer next_value_of_CurArgNum_4 = Var_115;
            MR_Word next_value_of_STATE_VARIABLE_MayUseAtomic_0_8 = STATE_VARIABLE_MayUseAtomic_103_103;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            CurArgNum_4 = next_value_of_CurArgNum_4;
            STATE_VARIABLE_MayUseAtomic_0_8 = next_value_of_STATE_VARIABLE_MayUseAtomic_0_8;
            continue;
          }
          else
          {
            MR_Word RHSInsts_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_43, (MR_Integer) 1))));
            MR_Word MaybePackedArgVar_92;
            MR_Integer Var_124;
            MR_Word Rval_128;
            MR_Word RvalMLDSTypeWidth_129;
            MR_Word TailRvalsMLDSTypesWidths_130;
            MR_Word Var_119;
            MR_Word Var_139;

            check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_55, RHSInsts_81, ArgType_54, &Var_139);
            succeeded = ((MR_Integer) 0 == Var_139);
            if (succeeded)
            {
              Var_119 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_55, ArgType_54, ConsArgType_51);
              succeeded = (Var_119 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              MR_Word Var_121;

              {
                Var_121 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_121, 0) = ((MR_Box) (Lval_53));
              }
              ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_55, ArgType_54, BoxedArgType_58, (MR_Integer) 0, Var_121, &Rval_128);
            }
            else
            {
              MR_Word Var_122;

              {
                Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
                MR_hl_field(MR_mktag(3), Var_122, 1) = ((MR_Box) (MLDS_Type_59));
              }
              {
                Rval_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Rval_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Rval_128, 1) = ((MR_Box) (Var_122));
              }
            }
            switch (MR_tag((MR_Word) ArgPosWidth_52)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                MaybePackedArgVar_92 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                MaybePackedArgVar_92 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word NumBits_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 3))));
                      MR_Word Fill_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 5))));
                      MR_Word PackedArgVar_91;

                      {
                        PackedArgVar_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), PackedArgVar_91, 0) = ((MR_Box) (ArgVar_50));
                        MR_hl_field(MR_mktag(0), PackedArgVar_91, 1) = ((MR_Box) (((MR_Box) ((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(0), PackedArgVar_91, 2) = ((MR_Box) (NumBits_84));
                        MR_hl_field(MR_mktag(0), PackedArgVar_91, 3) = ((MR_Box) (Fill_86));
                      }
                      {
                        MaybePackedArgVar_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), MaybePackedArgVar_92, 0) = ((MR_Box) (PackedArgVar_91));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word NumBits_140 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 4))));
                      MR_Word Fill_141 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 6))));
                      MR_Word Shift_142 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 3))));
                      MR_Word PackedArgVar_143;

                      {
                        PackedArgVar_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), PackedArgVar_143, 0) = ((MR_Box) (ArgVar_50));
                        MR_hl_field(MR_mktag(0), PackedArgVar_143, 1) = ((MR_Box) (Shift_142));
                        MR_hl_field(MR_mktag(0), PackedArgVar_143, 2) = ((MR_Box) (NumBits_140));
                        MR_hl_field(MR_mktag(0), PackedArgVar_143, 3) = ((MR_Box) (Fill_141));
                      }
                      {
                        MaybePackedArgVar_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), MaybePackedArgVar_92, 0) = ((MR_Box) (PackedArgVar_143));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    MaybePackedArgVar_92 = (MR_Word) ((MR_Unsigned) 0U);
                    break;
                }
                break;
            }
            {
              RvalMLDSTypeWidth_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_129, 0) = ((MR_Box) (Rval_128));
              MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_129, 1) = ((MR_Box) (MLDS_Type_59));
              MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_129, 2) = ((MR_Box) (ArgPosWidth_52));
              MR_hl_field(MR_mktag(0), RvalMLDSTypeWidth_129, 3) = ((MR_Box) (MaybePackedArgVar_92));
            }
            Var_124 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) (MR_Integer) 1);
            ml_backend__ml_unify_gen_construct__ml_gen_dynamic_construct_args_9_p_0(Info_1, Var_144, ArgModes_44, Var_124, STATE_VARIABLE_TakeAddr_0_5, HeadVar__6_6, &TailRvalsMLDSTypesWidths_130, STATE_VARIABLE_MayUseAtomic_103_103, STATE_VARIABLE_MayUseAtomic_9);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__7_7 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RvalMLDSTypeWidth_129));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailRvalsMLDSTypesWidths_130));
            }
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_field_take_address_assigns_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CellLval_2,
  MR_Word CellType_3,
  MR_Word MaybePtag_4,
  MR_Word Context_5,
  MR_Word Info_6,
  MR_Word * HeadVar__7_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TakeAddrInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TakeAddrInfos_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Assign_20;
    MR_Word Assigns_21;
    MR_Word AddrVar_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TakeAddrInfo_13, (MR_Integer) 0))));
    MR_Word Offset_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TakeAddrInfo_13, (MR_Integer) 1))));
    MR_Word FieldType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TakeAddrInfo_13, (MR_Integer) 3))));
    MR_Word HighLevelData_26;

    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_6, &HighLevelData_26);
    switch (HighLevelData_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer OffsetInt_27 = (MR_Integer) (Offset_23);
          MR_Word FieldId_28;
          MR_Word SourceRval_29;
          MR_Word AddrLval_30;
          MR_Word AddrVarType_31;
          MR_Word ModuleInfo_32;
          MR_Word MLDS_AddrVarType_33;
          MR_Word CastSourceRval_34;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_39;

          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_37, 0) = ((MR_Box) (OffsetInt_27));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (Var_37));
          }
          {
            FieldId_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldId_28, 0) = ((MR_Box) (Var_36));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_39, 0) = ((MR_Box) (CellLval_2));
          }
          {
            Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (MaybePtag_4));
            MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (Var_39));
            MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) (CellType_3));
            MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (FieldId_28));
            MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (FieldType_25));
          }
          {
            SourceRval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SourceRval_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(3), SourceRval_29, 1) = ((MR_Box) (Var_38));
          }
          ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_6, AddrVar_22, &AddrLval_30);
          ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_6, AddrVar_22, &AddrVarType_31);
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_32);
          MLDS_AddrVarType_33 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_32, AddrVarType_31);
          {
            CastSourceRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastSourceRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), CastSourceRval_34, 1) = ((MR_Box) (MLDS_AddrVarType_33));
            MR_hl_field(MR_mktag(3), CastSourceRval_34, 2) = ((MR_Box) (SourceRval_29));
          }
          Assign_20 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(AddrLval_30, CastSourceRval_34, Context_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_35;
          MR_Word AddrLval_40;

          ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_6, AddrVar_22, &AddrLval_40);
          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_35, 0) = ((MR_Box) (CellLval_2));
          }
          Assign_20 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(AddrLval_40, Var_35, Context_5);
        }
        break;
    }
    ml_backend__ml_unify_gen_construct__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_14, CellLval_2, CellType_3, MaybePtag_4, Context_5, Info_6, &Assigns_21);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Assign_20));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Assigns_21));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct____Unify____ml_const_struct_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen_construct____Unify____ml_const_struct_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct____Compare____ml_const_struct_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen_construct____Compare____ml_const_struct_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct____Unify____mlds_rval_type_and_width_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen_construct____Unify____mlds_rval_type_and_width_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct____Compare____mlds_rval_type_and_width_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen_construct____Compare____mlds_rval_type_and_width_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__ml_unify_gen_construct__init(void)
{
}

void mercury__ml_backend__ml_unify_gen_construct__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_ml_const_struct_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0);
}

void mercury__ml_backend__ml_unify_gen_construct__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_unify_gen_construct__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_unify_gen_construct.
