/*
** Automatically generated from `ml_unify_gen_construct.m'
** by the Mercury compiler,
** version DEV
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
#include "hlds.goal_form.mih"
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

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__field_types_mlds_rval_type_and_width_0_0[3];

static const MR_DuFunctorDesc ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_functor_desc_mlds_rval_type_and_width_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_stag_ordered_mlds_rval_type_and_width_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_ptag_ordered_mlds_rval_type_and_width_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_name_ordered_mlds_rval_type_and_width_0[1];

static const MR_Integer ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__functor_number_map_mlds_rval_type_and_width_0[1];

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__construct_static_ground_term__1868__1_1_f_0(
  MR_Word LambdaHeadVar__1_43);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_const_static_args_widths__1662__1_1_f_0(
  MR_Word LambdaHeadVar__1_16);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_97_114_103_115_95_119_105_100_116_104_115_95_95_49_54_54_50_95_95_49_95_95_91_49_93_95_48_1_f_0(void);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_struct__1561__1_2_p_0(
  MR_Word AddedBy_47,
  MR_Word HeadVar__2_103);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_struct__1544__1_2_p_0(
  MR_Word AddedBy_47,
  MR_Word HeadVar__2_107);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_memory_cell__1357__1_2_p_0(
  MR_Word AddedBy_33,
  MR_Word HeadVar__2_48);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_memory_cell__1342__1_2_p_0(
  MR_Word AddedBy_33,
  MR_Word HeadVar__2_52);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1250__6_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_198);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1250__5_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_187);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1276__1_2_p_0(
  MR_Word HighLevelData_12,
  MR_Word HeadVar__2_100);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1250__4_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_176);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1250__3_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_165);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1250__2_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_154);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1250__1_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_118);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_extra_arg_assigns__1039__1_2_p_0(
  MR_Word HighLevelData_28,
  MR_Word HeadVar__2_40);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__766__1_2_p_0(
  MR_Word ArgWidth_22,
  MR_Word HeadVar__2_29);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__585__1_2_p_0(
  MR_Word PrimaryTag_43,
  MR_Word LambdaHeadVar__1_82);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__567__1_3_p_0(
  MR_Word STATE_VARIABLE_Info_0_74,
  MR_Word LambdaHeadVar__1_79,
  MR_Word * LambdaHeadVar__2_80);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_statically__528__1_1_f_0(
  MR_Word LambdaHeadVar__1_48);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_dynamically__468__1_1_f_0(
  MR_Word LambdaHeadVar__1_65);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_dynamic_construct_compound__300__1_2_p_0(
  MR_Word AddedBy_31,
  MR_Word HeadVar__2_45);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_dynamic_construct_compound__285__1_2_p_0(
  MR_Word AddedBy_31,
  MR_Word HeadVar__2_49);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object__388__1_2_p_0(
  MR_Word TakeAddr_24,
  MR_Word HeadVar__2_47);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object__376__1_2_p_0(
  MR_Word ExplicitSectag_19,
  MR_Word HeadVar__2_40);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__234__1_2_p_0(
  MR_Word TakeAddr_16,
  MR_Word HeadVar__2_111);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__243__1_2_p_0(
  MR_Word TakeAddr_16,
  MR_Word HeadVar__2_106);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__144__1_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_117);

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
ml_backend__ml_unify_gen_construct__ml_not_taking_addr_of_cur_arg_2_p_0(
  MR_Word TakeAddr_3,
  MR_Integer CurArgNum_4);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__is_apw_full_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_tagword_arg_4_p_0(
  MR_Word Info_5,
  MR_Word RHSTypeWidth_6,
  MR_Word STATE_VARIABLE_RevOrRvals_0_18,
  MR_Word * STATE_VARIABLE_RevOrRvals_19);

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
  MR_Word STATE_VARIABLE_ConstStructMap_0_75,
  MR_Word * STATE_VARIABLE_ConstStructMap_76,
  MR_Word STATE_VARIABLE_GlobalData_0_77,
  MR_Word * STATE_VARIABLE_GlobalData_78);

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
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_arg_7_p_0(
  MR_Word Info_8,
  MR_Word ConstStructMap_9,
  MR_Word ConstArg_10,
  MR_Word ArgPosWidth_11,
  MR_Word * RvalTypeWidth_12,
  MR_Word STATE_VARIABLE_GlobalData_0_25,
  MR_Word * STATE_VARIABLE_GlobalData_26);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__construct_ground_term_tagword_initializer_lld_5_p_0(
  MR_Word RHSVarTypeWidth_6,
  MR_Word STATE_VARIABLE_RevOrRvals_0_16,
  MR_Word * STATE_VARIABLE_RevOrRvals_17,
  MR_Word STATE_VARIABLE_GroundTermMap_0_18,
  MR_Word * STATE_VARIABLE_GroundTermMap_19);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_structs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjuncts_9_p_0(
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
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_9(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_8(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_6(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Target_11,
  MR_Word HighLevelData_12,
  MR_Word VarTypes_13,
  MR_Word Goal_14,
  MR_Word STATE_VARIABLE_GlobalData_0_78,
  MR_Word * STATE_VARIABLE_GlobalData_79,
  MR_Word STATE_VARIABLE_GroundTermMap_0_80,
  MR_Word * STATE_VARIABLE_GroundTermMap_81);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__ml_cast_cons_tag_3_f_0(
  MR_Word Type_5,
  MR_Word ConsTag_6,
  MR_Word Rval_7);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__int_tag_to_mlds_rval_const_3_f_0(
  MR_Word Type_5,
  MR_Word MLDS_Type_6,
  MR_Word IntTag_7);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word Target_17,
  MR_Word HighLevelData_18,
  MR_Word VarTypes_19,
  MR_Word LHSVar_20,
  MR_Word LHSType_21,
  MR_Word LHS_MLDS_Type_22,
  MR_Word ConsId_23,
  MR_Word ConsTag_24,
  MR_Word RHSVars_25,
  MR_Word Context_26,
  MR_Word STATE_VARIABLE_GlobalData_0_41,
  MR_Word * STATE_VARIABLE_GlobalData_42,
  MR_Word STATE_VARIABLE_GroundTermMap_0_43,
  MR_Word * STATE_VARIABLE_GroundTermMap_44);

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

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_genenate_dynamic_construct_notag_direct_arg_8_p_0(
  MR_Word LHSVar_9,
  MR_Word ConsTag_10,
  MR_Word RHSVars_11,
  MR_Word ArgModes_12,
  MR_Word Context_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_tagword_compound_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_tagword_compound_10_p_0(
  MR_Word ConsId_11,
  MR_Unsigned PrimSec_12,
  MR_Word LHSVar_13,
  MR_Word ArgVars_14,
  MR_Word ArgModes_15,
  MR_Word HowToConstruct_16,
  MR_Word Context_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

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

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_maybe_shift_and_accumulate_packed_arg_rval_4_p_0(
  MR_Word ArgPosWidth_5,
  MR_Word RHSRval_6,
  MR_Word STATE_VARIABLE_RevOrRvals_0_28,
  MR_Word * STATE_VARIABLE_RevOrRvals_29);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_compound_12_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_compound_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_compound_12_p_0(
  MR_Word LHSVar_13,
  MR_Word ConsId_14,
  MR_Word ConsTag_15,
  MR_Word RHSVars_16,
  MR_Word ArgModes_17,
  MR_Word TakeAddr_18,
  MR_Word HowToConstruct_19,
  MR_Word Context_20,
  MR_Word * Defns_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_39,
  MR_Word * STATE_VARIABLE_Info_40);

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
  MR_Word LHSVar_20,
  MR_Word ExtraRHSRvalsTypesWidths_21,
  MR_Word RHSVars_22,
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
  MR_Word LHSVar_14,
  MR_Word ExtraRHSRvalsTypesWidths_15,
  MR_Word RHSVars_16,
  MR_Word Context_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42);

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

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_pack_into_one_word_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevOrRvals_0_3,
  MR_Word * STATE_VARIABLE_RevOrRvals_4);

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
  MR_Word LHSVar_18,
  MR_Word ExtraRHSRvalsTypesWidths_19,
  MR_Word RHSVars_20,
  MR_Word ArgModes_21,
  MR_Word TakeAddr_22,
  MR_Word Context_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_60,
  MR_Word * STATE_VARIABLE_Info_61);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0(
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
ml_backend__ml_unify_gen_construct__ml_maybe_box_or_unbox_lval_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ConsArgType_10,
  MR_Word ArgType_11,
  MR_Word BoxedArgType_12,
  MR_Word MLDS_Type_13,
  MR_Word ArgMode_14,
  MR_Word Lval_15,
  MR_Word * Rval_16);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_packed_word_12_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_packed_word_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_packed_word_12_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Integer HeadVar__6_6,
  MR_Integer * HeadVar__7_7,
  MR_Word TakeAddr_8,
  MR_Word STATE_VARIABLE_RevToOrRvals_0_9,
  MR_Word * STATE_VARIABLE_RevToOrRvals_10,
  MR_Word STATE_VARIABLE_RevPackedArgVars_0_11,
  MR_Word * STATE_VARIABLE_RevPackedArgVars_12);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_maybe_shift_and_accumulate_or_rval_5_p_0(
  MR_Word Rval_6,
  MR_Word Shift_7,
  MR_Word Fill_8,
  MR_Word STATE_VARIABLE_RevOrRvals_0_14,
  MR_Word * STATE_VARIABLE_RevOrRvals_15);

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

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_2[10][3];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_3[11][5];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_4[1][4];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_5[2][6];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_6[2][1];

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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_arg_type_and_width_1)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_arg_type_and_width_1)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
  /* row 7 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) 0)))),
    ((MR_Box) (((MR_Box) ((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) (UINT8_C(0))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 20)),
    ((MR_Box) ((MR_Unsigned) 24U))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Unsigned) 24U))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[12])))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_2[10][3] = {
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
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_1[8]))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[1])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_new_object_dynamically_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[3])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__construct_static_ground_term_14_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[4])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_new_object_statically_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_7[0])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[10])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[10])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_static_args_widths_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_3[11][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0))
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
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_sectag_added_by_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_sectag_added_by_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_4[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_5[2][6] = {
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

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_6[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
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
    (MR_Integer) 1,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
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

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__field_types_mlds_rval_type_and_width_0_0[3] = {
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0)
};

static const MR_DuFunctorDesc ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_functor_desc_mlds_rval_type_and_width_0_0 = {
  (MR_String) "rval_type_and_width",
  (MR_Integer) 3,
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
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__construct_static_ground_term__1868__1_1_f_0(
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
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_const_static_args_widths__1662__1_1_f_0(
  MR_Word LambdaHeadVar__1_16)
{
  {
    MR_Word LambdaHeadVar__2_17;

    LambdaHeadVar__2_17 = ml_backend__ml_unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_97_114_103_115_95_119_105_100_116_104_115_95_95_49_54_54_50_95_95_49_95_95_91_49_93_95_48_1_f_0();
    return LambdaHeadVar__2_17;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_97_114_103_115_95_119_105_100_116_104_115_95_95_49_54_54_50_95_95_49_95_95_91_49_93_95_48_1_f_0(void)
{
  {
    MR_Word LambdaHeadVar__2_17;

    LambdaHeadVar__2_17 = parse_tree__builtin_lib_types__void_type_0_f_0();
    return LambdaHeadVar__2_17;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_struct__1561__1_2_p_0(
  MR_Word AddedBy_47,
  MR_Word HeadVar__2_103)
{
  {
    MR_bool succeeded = (AddedBy_47 == HeadVar__2_103);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_struct__1544__1_2_p_0(
  MR_Word AddedBy_47,
  MR_Word HeadVar__2_107)
{
  {
    MR_bool succeeded = (AddedBy_47 == HeadVar__2_107);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_memory_cell__1357__1_2_p_0(
  MR_Word AddedBy_33,
  MR_Word HeadVar__2_48)
{
  {
    MR_bool succeeded = (AddedBy_33 == HeadVar__2_48);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_memory_cell__1342__1_2_p_0(
  MR_Word AddedBy_33,
  MR_Word HeadVar__2_52)
{
  {
    MR_bool succeeded = (AddedBy_33 == HeadVar__2_52);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1250__6_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_198)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_19)), ((MR_Box) (HeadVar__2_198)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1250__5_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_187)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_19)), ((MR_Box) (HeadVar__2_187)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1276__1_2_p_0(
  MR_Word HighLevelData_12,
  MR_Word HeadVar__2_100)
{
  {
    MR_bool succeeded = (HighLevelData_12 == HeadVar__2_100);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1250__4_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_176)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_19)), ((MR_Box) (HeadVar__2_176)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1250__3_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_165)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_19)), ((MR_Box) (HeadVar__2_165)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1250__2_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_154)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_19)), ((MR_Box) (HeadVar__2_154)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1250__1_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_118)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_19)), ((MR_Box) (HeadVar__2_118)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_extra_arg_assigns__1039__1_2_p_0(
  MR_Word HighLevelData_28,
  MR_Word HeadVar__2_40)
{
  {
    MR_bool succeeded = (HighLevelData_28 == HeadVar__2_40);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__766__1_2_p_0(
  MR_Word ArgWidth_22,
  MR_Word HeadVar__2_29)
{
  {
    MR_bool succeeded = (ArgWidth_22 == HeadVar__2_29);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__585__1_2_p_0(
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
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__567__1_3_p_0(
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
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_statically__528__1_1_f_0(
  MR_Word LambdaHeadVar__1_48)
{
  {
    MR_Word LambdaHeadVar__2_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_48, (MR_Integer) 0))));

    return LambdaHeadVar__2_49;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_dynamically__468__1_1_f_0(
  MR_Word LambdaHeadVar__1_65)
{
  {
    MR_Word LambdaHeadVar__2_66;
    MR_Word Rv_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_65, (MR_Integer) 0))));
    MR_Word T_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_65, (MR_Integer) 1))));

    {
      LambdaHeadVar__2_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_66, 0) = ((MR_Box) (Rv_69));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_66, 1) = ((MR_Box) (T_70));
    }
    return LambdaHeadVar__2_66;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_dynamic_construct_compound__300__1_2_p_0(
  MR_Word AddedBy_31,
  MR_Word HeadVar__2_45)
{
  {
    MR_bool succeeded = (AddedBy_31 == HeadVar__2_45);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_dynamic_construct_compound__285__1_2_p_0(
  MR_Word AddedBy_31,
  MR_Word HeadVar__2_49)
{
  {
    MR_bool succeeded = (AddedBy_31 == HeadVar__2_49);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object__388__1_2_p_0(
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
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object__376__1_2_p_0(
  MR_Word ExplicitSectag_19,
  MR_Word HeadVar__2_40)
{
  {
    MR_bool succeeded = (ExplicitSectag_19 == HeadVar__2_40);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__234__1_2_p_0(
  MR_Word TakeAddr_16,
  MR_Word HeadVar__2_111)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[2]), ((MR_Box) (TakeAddr_16)), ((MR_Box) (HeadVar__2_111)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__243__1_2_p_0(
  MR_Word TakeAddr_16,
  MR_Word HeadVar__2_106)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[2]), ((MR_Box) (TakeAddr_16)), ((MR_Box) (HeadVar__2_106)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__144__1_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_117)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_14)), ((MR_Box) (HeadVar__2_117)));
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
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
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
      MR_Word Var_10;

      ml_backend__mlds____Compare____mlds_rval_0_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        ml_backend__mlds____Compare____mlds_type_0_0(&Var_11, ArgX2_6, ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
          parse_tree__prog_data____Compare____arg_pos_width_0_0(HeadVar__1_1, ArgX3_8, ArgY3_9);
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
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = parse_tree__prog_data____Unify____arg_pos_width_0_0(ArgX3_7, ArgY3_8);
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
      MR_Word ArgX2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      MR_Word ArgY2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      MR_Word ArgX3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY3_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
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
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 3);
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
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
ml_backend__ml_unify_gen_construct__ml_not_taking_addr_of_cur_arg_2_p_0(
  MR_Word TakeAddr_3,
  MR_Integer CurArgNum_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) TakeAddr_3)) == (MR_Integer) 1);
    MR_Integer Var_6;

    if (succeeded)
    {
      Var_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), TakeAddr_3, (MR_Integer) 0))));
      succeeded = (CurArgNum_4 == Var_6);
    }
    if (succeeded)
      succeeded = MR_FALSE;
    else
      succeeded = MR_TRUE;
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
  MR_Word RHSTypeWidth_6,
  MR_Word STATE_VARIABLE_RevOrRvals_0_18,
  MR_Word * STATE_VARIABLE_RevOrRvals_19)
{
  {
    MR_Word ConstArg_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSTypeWidth_6, (MR_Integer) 0))));
    MR_Word ArgPosWidth_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSTypeWidth_6, (MR_Integer) 2))));
    MR_Word ModuleInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0))));
    MR_Word RHSRval_17;
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
      switch (MR_tag((MR_Word) ConsTag_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ConsTag_15)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word RvalConst_83;

                RvalConst_83 = ml_backend__ml_unify_gen_construct__int_tag_to_mlds_rval_const_3_f_0(Type_14, MLDS_Type_16, (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_6[1]));
                {
                  RHSRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 1) = ((MR_Box) (RvalConst_83));
                }
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct_arg_tag\'/4", (MR_String) "unexpected tag");
                  return;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word IntTag_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsTag_15, (MR_Integer) 0))));
            MR_Word RvalConst_30;

            RvalConst_30 = ml_backend__ml_unify_gen_construct__int_tag_to_mlds_rval_const_3_f_0(Type_14, MLDS_Type_16, IntTag_29);
            {
              RHSRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), RHSRval_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), RHSRval_17, 1) = ((MR_Box) (RvalConst_30));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Float Float_31 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_15, (MR_Integer) 0)));
            MR_Word Var_81;

            {
              Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
              MR_hl_field(MR_mktag(3), Var_81, 1) = MR_box_float(Float_31);
            }
            {
              RHSRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), RHSRval_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), RHSRval_17, 1) = ((MR_Box) (Var_81));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String String_32 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1))));
                MR_Word Var_80;

                {
                  Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                  MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) (String_32));
                }
                {
                  RHSRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 1) = ((MR_Box) (Var_80));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ForeignLang_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1))));
                MR_String ForeignTag_40 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 2))));
                MR_Word Var_77;

                {
                  Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                  MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (ForeignLang_39));
                  MR_hl_field(MR_mktag(3), Var_77, 2) = ((MR_Box) (ForeignTag_40));
                  MR_hl_field(MR_mktag(3), Var_77, 3) = ((MR_Box) (MLDS_Type_16));
                }
                {
                  RHSRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 1) = ((MR_Box) (Var_77));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word LocalSectag_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 2))));
                MR_Unsigned PrimSec_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_34, (MR_Integer) 1))));
                MR_Word Var_78;
                MR_Word Var_79;

                {
                  Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (PrimSec_37));
                }
                {
                  Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (Var_79));
                }
                {
                  RHSRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 1) = ((MR_Box) (MLDS_Type_16));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 2) = ((MR_Box) (Var_78));
                }
              }
              break;
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 11:
            case (MR_Integer) 12:
            case (MR_Integer) 13:
            case (MR_Integer) 14:
            case (MR_Integer) 15:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct_arg_tag\'/4", (MR_String) "unexpected tag");
                  return;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ModuleName0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1))));
                MR_String TypeName_42 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 2))));
                MR_Integer TypeArity_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 3))));
                MR_Word ModuleName_44;
                MR_Word MLDS_Module_45;
                MR_Word RttiTypeCtor_46;
                MR_Word RttiId_47;
                MR_Word Const_48;
                MR_Word Var_75;

                ModuleName_44 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_41);
                MLDS_Module_45 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_44);
                {
                  RttiTypeCtor_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RttiTypeCtor_46, 0) = ((MR_Box) (ModuleName_44));
                  MR_hl_field(MR_mktag(0), RttiTypeCtor_46, 1) = ((MR_Box) (TypeName_42));
                  MR_hl_field(MR_mktag(0), RttiTypeCtor_46, 2) = ((MR_Box) (TypeArity_43));
                }
                {
                  RttiId_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RttiId_47, 0) = ((MR_Box) (RttiTypeCtor_46));
                  MR_hl_field(MR_mktag(0), RttiId_47, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                }
                {
                  Const_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Const_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                  MR_hl_field(MR_mktag(3), Const_48, 1) = ((MR_Box) (MLDS_Module_45));
                  MR_hl_field(MR_mktag(3), Const_48, 2) = ((MR_Box) (RttiId_47));
                }
                {
                  Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (Const_48));
                }
                {
                  RHSRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 1) = ((MR_Box) (MLDS_Type_16));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 2) = ((MR_Box) (Var_75));
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ClassId_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 2))));
                MR_String Instance_50 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 3))));
                MR_Word TCName_51;
                MR_Word Var_72;
                MR_Word Var_73;
                MR_Word ModuleName_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1))));
                MR_Word MLDS_Module_85;
                MR_Word RttiId_86;
                MR_Word Const_87;

                MLDS_Module_85 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_84);
                TCName_51 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_49);
                {
                  Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (ModuleName_84));
                  MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Instance_50));
                }
                {
                  RttiId_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), RttiId_86, 0) = ((MR_Box) (TCName_51));
                  MR_hl_field(MR_mktag(1), RttiId_86, 1) = ((MR_Box) (Var_72));
                }
                {
                  Const_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Const_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                  MR_hl_field(MR_mktag(3), Const_87, 1) = ((MR_Box) (MLDS_Module_85));
                  MR_hl_field(MR_mktag(3), Const_87, 2) = ((MR_Box) (RttiId_86));
                }
                {
                  Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (Const_87));
                }
                {
                  RHSRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 1) = ((MR_Box) (MLDS_Type_16));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 2) = ((MR_Box) (Var_73));
                }
              }
              break;
          }
          break;
      }
    }
    ml_backend__ml_unify_gen_construct__ml_maybe_shift_and_accumulate_packed_arg_rval_4_p_0(ArgPosWidth_10, RHSRval_17, STATE_VARIABLE_RevOrRvals_0_18, STATE_VARIABLE_RevOrRvals_19);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_struct__1561__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_struct__1544__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
    MR_Word conv1_STATE_VARIABLE_RevOrRvals_19;

    ml_backend__ml_unify_gen_construct__ml_gen_const_tagword_arg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_RevOrRvals_19);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_RevOrRvals_19));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0(
  MR_Word Info_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ConstStructMap_0_75,
  MR_Word * STATE_VARIABLE_ConstStructMap_76,
  MR_Word STATE_VARIABLE_GlobalData_0_77,
  MR_Word * STATE_VARIABLE_GlobalData_78)
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
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct\'/6", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_13_p_0(Info_7, ConstNum_8, Type_14, MLDS_Type_17, ConsId_12, ConsTag_18, (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), (MR_Word) ((MR_Unsigned) 0U), Args_13, STATE_VARIABLE_ConstStructMap_0_75, STATE_VARIABLE_ConstStructMap_76, STATE_VARIABLE_GlobalData_0_77, STATE_VARIABLE_GlobalData_78);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Arg_66;
              MR_Word ArgRvalTypeWidth_67;
              MR_Word ArgRval_68;
              MR_Word Rval_71;
              MR_Word GroundTerm_118;
              MR_Box conv0_Arg_66;

              hlds__goal_form__get_notag_or_direct_arg_arg_2_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), Args_13, &conv0_Arg_66);
              Arg_66 = ((MR_Word) (conv0_Arg_66));
              ml_backend__ml_unify_gen_construct__ml_gen_const_struct_arg_7_p_0(Info_7, STATE_VARIABLE_ConstStructMap_0_75, Arg_66, (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_construct_scalar_common_1[7])), &ArgRvalTypeWidth_67, STATE_VARIABLE_GlobalData_0_77, STATE_VARIABLE_GlobalData_78);
              ArgRval_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRvalTypeWidth_67, (MR_Integer) 0))));
              Rval_71 = ml_backend__ml_unify_gen_construct__ml_cast_cons_tag_3_f_0(MLDS_Type_17, ConsTag_18, ArgRval_68);
              {
                GroundTerm_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_118, 0) = ((MR_Box) (Rval_71));
                MR_hl_field(MR_mktag(0), GroundTerm_118, 1) = ((MR_Box) (Type_14));
                MR_hl_field(MR_mktag(0), GroundTerm_118, 2) = ((MR_Box) (MLDS_Type_17));
              }
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstNum_8, ((MR_Box) (GroundTerm_118)), STATE_VARIABLE_ConstStructMap_0_75, STATE_VARIABLE_ConstStructMap_76);
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
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct\'/6", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Ptag_142 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_18, (MR_Integer) 1))));

              ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_13_p_0(Info_7, ConstNum_8, Type_14, MLDS_Type_17, ConsId_12, ConsTag_18, Ptag_142, (MR_Word) ((MR_Unsigned) 0U), Args_13, STATE_VARIABLE_ConstStructMap_0_75, STATE_VARIABLE_ConstStructMap_76, STATE_VARIABLE_GlobalData_0_77, STATE_VARIABLE_GlobalData_78);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Ptag_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_18, (MR_Integer) 1))));
              MR_Word ExtraRvals_44;
              MR_Word RemoteSectag_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_18, (MR_Integer) 2))));
              MR_Unsigned SectagUint_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_45, (MR_Integer) 0))));
              MR_Word AddedBy_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_45, (MR_Integer) 1))));
              MR_Word Target_48 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 3);
              MR_Word UsesConstructors_49;
              MR_Unsigned packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)));

              UsesConstructors_49 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_48);
              switch (UsesConstructors_49) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word StagRval0_50;
                    MR_Word HighLevelData_51;
                    MR_Word StagRval_52;
                    MR_Word Var_104;
                    MR_Word Var_108;
                    MR_Integer Var_109;
                    MR_Unsigned packed_args_3;

                    {
                      Var_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[8]));
                      MR_hl_field(MR_mktag(0), Var_104, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_2));
                      MR_hl_field(MR_mktag(0), Var_104, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_104, 3) = ((MR_Box) (AddedBy_47));
                      MR_hl_field(MR_mktag(0), Var_104, 4) = ((MR_Box) ((MR_Integer) 0));
                    }
                    mercury__require__expect_3_p_0(Var_104, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct\'/6", (MR_String) "AddedBy != sectag_added_by_unify");
                    Var_109 = mercury__uint__cast_to_int_1_f_0(SectagUint_46);
                    {
                      Var_108 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_108, 0) = ((MR_Box) (Var_109));
                    }
                    {
                      StagRval0_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), StagRval0_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), StagRval0_50, 1) = ((MR_Box) (Var_108));
                    }
                    packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)));
                    HighLevelData_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) & (MR_Integer) 1);
                    switch (HighLevelData_51) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            StagRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), StagRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), StagRval_52, 1) = ((MR_Box) ((MR_Unsigned) 20U));
                            MR_hl_field(MR_mktag(3), StagRval_52, 2) = ((MR_Box) (StagRval0_50));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        StagRval_52 = StagRval0_50;
                        break;
                    }
                    {
                      ExtraRvals_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ExtraRvals_44, 0) = ((MR_Box) (StagRval_52));
                      MR_hl_field(MR_mktag(1), ExtraRvals_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_100;

                    {
                      Var_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[8]));
                      MR_hl_field(MR_mktag(0), Var_100, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_3));
                      MR_hl_field(MR_mktag(0), Var_100, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_100, 3) = ((MR_Box) (AddedBy_47));
                      MR_hl_field(MR_mktag(0), Var_100, 4) = ((MR_Box) ((MR_Integer) 1));
                    }
                    mercury__require__expect_3_p_0(Var_100, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct\'/6", (MR_String) "AddedBy != sectag_added_by_constructor");
                    ExtraRvals_44 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
              }
              ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_13_p_0(Info_7, ConstNum_8, Type_14, MLDS_Type_17, ConsId_12, ConsTag_18, Ptag_43, ExtraRvals_44, Args_13, STATE_VARIABLE_ConstStructMap_0_75, STATE_VARIABLE_ConstStructMap_76, STATE_VARIABLE_GlobalData_0_77, STATE_VARIABLE_GlobalData_78);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word LocalArgsTagInfo_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_18, (MR_Integer) 1))));
              MR_Word LocalSectag_54;
              MR_Unsigned PrimSec_57;
              MR_Word ArgsTypesWidths_59;
              MR_Word RevOrRvals_60;
              MR_Word OrRvals_61;
              MR_Word TagwordRval_62;
              MR_Word CastTagwordRval_63;
              MR_Word GroundTerm_64;
              MR_Word Var_95;
              MR_Word Var_97;
              MR_Word Var_98;
              MR_Word HighLevelData_117;
              MR_Unsigned packed_args_1;
              MR_Box conv2_RevOrRvals_60;

              if ((LocalArgsTagInfo_53 == (MR_Word) ((MR_Unsigned) 0U)))
                LocalSectag_54 = (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[3]);
              else
                LocalSectag_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArgsTagInfo_53, (MR_Integer) 1))));
              PrimSec_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_54, (MR_Integer) 1))));
              ml_backend__ml_unify_gen_construct__ml_gen_const_static_args_widths_5_p_0(Info_7, Type_14, ConsId_12, Args_13, &ArgsTypesWidths_59);
              packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)));
              HighLevelData_117 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) & (MR_Integer) 1);
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
                Var_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_9[0]));
                MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_1));
                MR_hl_field(MR_mktag(0), Var_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_95, 3) = ((MR_Box) (Info_7));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[6]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[5]), Var_95, ArgsTypesWidths_59, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_RevOrRvals_60);
              RevOrRvals_60 = ((MR_Word) (conv2_RevOrRvals_60));
              mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevOrRvals_60, &OrRvals_61);
              {
                Var_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_98, 1) = ((MR_Box) (PrimSec_57));
              }
              {
                Var_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_97, 1) = ((MR_Box) (Var_98));
              }
              TagwordRval_62 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(Var_97, OrRvals_61);
              {
                CastTagwordRval_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastTagwordRval_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), CastTagwordRval_63, 1) = ((MR_Box) (MLDS_Type_17));
                MR_hl_field(MR_mktag(3), CastTagwordRval_63, 2) = ((MR_Box) (TagwordRval_62));
              }
              {
                GroundTerm_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_64, 0) = ((MR_Box) (CastTagwordRval_63));
                MR_hl_field(MR_mktag(0), GroundTerm_64, 1) = ((MR_Box) (Type_14));
                MR_hl_field(MR_mktag(0), GroundTerm_64, 2) = ((MR_Box) (MLDS_Type_17));
              }
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstNum_8, ((MR_Box) (GroundTerm_64)), STATE_VARIABLE_ConstStructMap_0_75, STATE_VARIABLE_ConstStructMap_76);
              *STATE_VARIABLE_GlobalData_78 = STATE_VARIABLE_GlobalData_0_77;
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Arg_66;
              MR_Word ArgRvalTypeWidth_67;
              MR_Word ArgRval_68;
              MR_Word Rval_71;
              MR_Word GroundTerm_118;
              MR_Box conv0_Arg_66;

              hlds__goal_form__get_notag_or_direct_arg_arg_2_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), Args_13, &conv0_Arg_66);
              Arg_66 = ((MR_Word) (conv0_Arg_66));
              ml_backend__ml_unify_gen_construct__ml_gen_const_struct_arg_7_p_0(Info_7, STATE_VARIABLE_ConstStructMap_0_75, Arg_66, (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_construct_scalar_common_1[7])), &ArgRvalTypeWidth_67, STATE_VARIABLE_GlobalData_0_77, STATE_VARIABLE_GlobalData_78);
              ArgRval_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRvalTypeWidth_67, (MR_Integer) 0))));
              Rval_71 = ml_backend__ml_unify_gen_construct__ml_cast_cons_tag_3_f_0(MLDS_Type_17, ConsTag_18, ArgRval_68);
              {
                GroundTerm_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_118, 0) = ((MR_Box) (Rval_71));
                MR_hl_field(MR_mktag(0), GroundTerm_118, 1) = ((MR_Box) (Type_14));
                MR_hl_field(MR_mktag(0), GroundTerm_118, 2) = ((MR_Box) (MLDS_Type_17));
              }
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstNum_8, ((MR_Box) (GroundTerm_118)), STATE_VARIABLE_ConstStructMap_0_75, STATE_VARIABLE_ConstStructMap_76);
            }
            break;
          case (MR_Integer) 15:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct\'/6", (MR_String) "unexpected closure");
                return;
              }
            }
            break;
        }
        break;
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

    conv0_LambdaHeadVar__2_17 = ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_const_static_args_widths__1662__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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
    MR_Word HighLevelData_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word Target_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 3);
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

      ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_1((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), ModuleInfo_13, (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[9]), (MR_Integer) 0, VarType_7, ConsId_8, Args_9, ArgsTypesWidths_10);
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

    conv0_LambdaHeadVar__2_17 = ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_const_static_args_widths__1662__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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
    MR_Word HighLevelData_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word Target_55 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 3);
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

      ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_1((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), ModuleInfo_56, (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[8]), (MR_Integer) 0, VarType_16, ConsId_18, Args_22, &ArgsTypesWidths_25);
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
    Target_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 3);
    HighLevelData_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1))) & (MR_Integer) 1);
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
    MR_Word ArgPosWidth_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeWidth_14, (MR_Integer) 2))));
    MR_Word STATE_VARIABLE_GlobalData_24_24;

    ml_backend__ml_unify_gen_construct__ml_gen_const_struct_arg_7_p_0(Info_1, ConstStructMap_2, ConstArg_19, ArgPosWidth_21, &RvalTypeWidth_16, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_24_24);
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
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_arg_7_p_0(
  MR_Word Info_8,
  MR_Word ConstStructMap_9,
  MR_Word ConstArg_10,
  MR_Word ArgPosWidth_11,
  MR_Word * RvalTypeWidth_12,
  MR_Word STATE_VARIABLE_GlobalData_0_25,
  MR_Word * STATE_VARIABLE_GlobalData_26)
{
  {
    MR_Word ModuleInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0))));
    MR_Word Rval0_17;
    MR_Word MLDS_Type_19;
    MR_Word ArgWidth_23;
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
      switch (MR_tag((MR_Word) ConsTag_22)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ConsTag_22)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word RvalConst_91;

                RvalConst_91 = ml_backend__ml_unify_gen_construct__int_tag_to_mlds_rval_const_3_f_0(Type_21, MLDS_Type_19, (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_6[1]));
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (RvalConst_91));
                }
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct_arg_tag\'/4", (MR_String) "unexpected tag");
                  return;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word IntTag_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsTag_22, (MR_Integer) 0))));
            MR_Word RvalConst_38;

            RvalConst_38 = ml_backend__ml_unify_gen_construct__int_tag_to_mlds_rval_const_3_f_0(Type_21, MLDS_Type_19, IntTag_37);
            {
              Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (RvalConst_38));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Float Float_39 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_22, (MR_Integer) 0)));
            MR_Word Var_89;

            {
              Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
              MR_hl_field(MR_mktag(3), Var_89, 1) = MR_box_float(Float_39);
            }
            {
              Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (Var_89));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String String_40 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                MR_Word Var_88;

                {
                  Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                  MR_hl_field(MR_mktag(3), Var_88, 1) = ((MR_Box) (String_40));
                }
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (Var_88));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ForeignLang_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                MR_String ForeignTag_48 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                MR_Word Var_85;

                {
                  Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                  MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (ForeignLang_47));
                  MR_hl_field(MR_mktag(3), Var_85, 2) = ((MR_Box) (ForeignTag_48));
                  MR_hl_field(MR_mktag(3), Var_85, 3) = ((MR_Box) (MLDS_Type_19));
                }
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (Var_85));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word LocalSectag_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                MR_Unsigned PrimSec_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_42, (MR_Integer) 1))));
                MR_Word Var_86;
                MR_Word Var_87;

                {
                  Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (PrimSec_45));
                }
                {
                  Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (Var_87));
                }
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (MLDS_Type_19));
                  MR_hl_field(MR_mktag(3), Rval0_17, 2) = ((MR_Box) (Var_86));
                }
              }
              break;
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 11:
            case (MR_Integer) 12:
            case (MR_Integer) 13:
            case (MR_Integer) 14:
            case (MR_Integer) 15:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct_arg_tag\'/4", (MR_String) "unexpected tag");
                  return;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ModuleName0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                MR_String TypeName_50 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                MR_Integer TypeArity_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                MR_Word ModuleName_52;
                MR_Word MLDS_Module_53;
                MR_Word RttiTypeCtor_54;
                MR_Word RttiId_55;
                MR_Word Const_56;
                MR_Word Var_83;

                ModuleName_52 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_49);
                MLDS_Module_53 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_52);
                {
                  RttiTypeCtor_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RttiTypeCtor_54, 0) = ((MR_Box) (ModuleName_52));
                  MR_hl_field(MR_mktag(0), RttiTypeCtor_54, 1) = ((MR_Box) (TypeName_50));
                  MR_hl_field(MR_mktag(0), RttiTypeCtor_54, 2) = ((MR_Box) (TypeArity_51));
                }
                {
                  RttiId_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RttiId_55, 0) = ((MR_Box) (RttiTypeCtor_54));
                  MR_hl_field(MR_mktag(0), RttiId_55, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                }
                {
                  Const_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Const_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                  MR_hl_field(MR_mktag(3), Const_56, 1) = ((MR_Box) (MLDS_Module_53));
                  MR_hl_field(MR_mktag(3), Const_56, 2) = ((MR_Box) (RttiId_55));
                }
                {
                  Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (Const_56));
                }
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (MLDS_Type_19));
                  MR_hl_field(MR_mktag(3), Rval0_17, 2) = ((MR_Box) (Var_83));
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ClassId_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                MR_String Instance_58 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                MR_Word TCName_59;
                MR_Word Var_80;
                MR_Word Var_81;
                MR_Word ModuleName_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                MR_Word MLDS_Module_93;
                MR_Word RttiId_94;
                MR_Word Const_95;

                MLDS_Module_93 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_92);
                TCName_59 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_57);
                {
                  Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (ModuleName_92));
                  MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Instance_58));
                }
                {
                  RttiId_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), RttiId_94, 0) = ((MR_Box) (TCName_59));
                  MR_hl_field(MR_mktag(1), RttiId_94, 1) = ((MR_Box) (Var_80));
                }
                {
                  Const_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Const_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                  MR_hl_field(MR_mktag(3), Const_95, 1) = ((MR_Box) (MLDS_Module_93));
                  MR_hl_field(MR_mktag(3), Const_95, 2) = ((MR_Box) (RttiId_94));
                }
                {
                  Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (Const_95));
                }
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (MLDS_Type_19));
                  MR_hl_field(MR_mktag(3), Rval0_17, 2) = ((MR_Box) (Var_81));
                }
              }
              break;
          }
          break;
      }
    }
    ArgWidth_23 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_11);
    Var_27 = mercury__term__context_init_0_f_0();
    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_14, Var_27, MLDS_Type_19, ArgWidth_23, Rval0_17, &Rval_24, STATE_VARIABLE_GlobalData_0_25, STATE_VARIABLE_GlobalData_26);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *RvalTypeWidth_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MLDS_Type_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ArgPosWidth_11));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__construct_ground_term_tagword_initializer_lld_5_p_0(
  MR_Word RHSVarTypeWidth_6,
  MR_Word STATE_VARIABLE_RevOrRvals_0_16,
  MR_Word * STATE_VARIABLE_RevOrRvals_17,
  MR_Word STATE_VARIABLE_GroundTermMap_0_18,
  MR_Word * STATE_VARIABLE_GroundTermMap_19)
{
  {
    MR_bool succeeded;
    MR_Word RHSVar_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSVarTypeWidth_6, (MR_Integer) 0))));
    MR_Word ArgPosWidth_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSVarTypeWidth_6, (MR_Integer) 2))));
    MR_Word RHSGroundTerm_12;
    MR_Word RHSRval_13;
    MR_Box conv0_RHSGroundTerm_12;

    mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (RHSVar_9)), &conv0_RHSGroundTerm_12, STATE_VARIABLE_GroundTermMap_0_18, STATE_VARIABLE_GroundTermMap_19);
    RHSGroundTerm_12 = ((MR_Word) (conv0_RHSGroundTerm_12));
    RHSRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSGroundTerm_12, (MR_Integer) 0))));
    switch (MR_tag((MR_Word) ArgPosWidth_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_maybe_shift_and_accumulate_packed_arg_rval\'/4", (MR_String) "not apw_partial_shifted or apw_none_shifted");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_maybe_shift_and_accumulate_packed_arg_rval\'/4", (MR_String) "not apw_partial_shifted or apw_none_shifted");
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
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_maybe_shift_and_accumulate_packed_arg_rval\'/4", (MR_String) "not apw_partial_shifted or apw_none_shifted");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Shift_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_11, (MR_Integer) 3))));
              MR_Word Fill_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_11, (MR_Integer) 6))));
              MR_Word UnboxedRHSRval_35;
              MR_Word UnboxedRvalPrime_55;
              MR_Word RvalConst_62;

              succeeded = ((((MR_tag((MR_Word) RHSRval_13)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RHSRval_13, (MR_Integer) 0))) == (MR_Integer) 2)));
              if (succeeded)
              {
                UnboxedRvalPrime_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RHSRval_13, (MR_Integer) 2))));
                UnboxedRHSRval_35 = UnboxedRvalPrime_55;
              }
              else
                UnboxedRHSRval_35 = RHSRval_13;
              succeeded = ((((MR_tag((MR_Word) UnboxedRHSRval_35)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), UnboxedRHSRval_35, (MR_Integer) 0))) == (MR_Integer) 1)));
              if (succeeded)
              {
                RvalConst_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UnboxedRHSRval_35, (MR_Integer) 1))));
                succeeded = ((((MR_tag((MR_Word) RvalConst_62)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalConst_62, (MR_Integer) 0))) == (MR_Integer) 20)));
                if (succeeded)
                {
                }
                if (!(succeeded))
                {
                  MR_Word Var_66;

                  Var_66 = ml_backend__ml_unify_gen_util__ml_is_zero_const_1_f_0(RvalConst_62);
                  succeeded = (Var_66 == (MR_Integer) 1);
                }
              }
              if (succeeded)
                *STATE_VARIABLE_RevOrRvals_17 = STATE_VARIABLE_RevOrRvals_0_16;
              else
              {
                MR_Word UnboxedRval_64;
                MR_Word ShiftedRval_65;
                MR_Word UnboxedRvalPrime_71;

                succeeded = ((((MR_tag((MR_Word) UnboxedRHSRval_35)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), UnboxedRHSRval_35, (MR_Integer) 0))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  UnboxedRvalPrime_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UnboxedRHSRval_35, (MR_Integer) 2))));
                  UnboxedRval_64 = UnboxedRvalPrime_71;
                }
                else
                  UnboxedRval_64 = UnboxedRHSRval_35;
                ShiftedRval_65 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(UnboxedRval_64, Shift_31, Fill_34);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_RevOrRvals_17 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ShiftedRval_65));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevOrRvals_0_16));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_RevOrRvals_17 = STATE_VARIABLE_RevOrRvals_0_16;
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
    MR_Word conv1_STATE_VARIABLE_ConstStructMap_76;
    MR_Word conv0_STATE_VARIABLE_GlobalData_78;

    ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ConstStructMap_76, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_GlobalData_78);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ConstStructMap_76));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_GlobalData_78));
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
      MR_hl_field(MR_mktag(0), Info_12, 1) = (MR_Box) (((((MR_Unsigned) (Target_7) << (MR_Integer) 1)) | (MR_Unsigned) (HighLevelData_11)));
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
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_5_p_0(
  MR_Word TermVar_6,
  MR_Word Goal_7,
  MR_Word * Stmts_8,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  {
    MR_Word TermVarIsNeeded_10;
    MR_Word Conjuncts_11;
    MR_Word GoalInfo_12;

    hlds__goal_form__get_from_ground_term_construct_info_5_p_0(TermVar_6, Goal_7, &TermVarIsNeeded_10, &Conjuncts_11, &GoalInfo_12);
    switch (TermVarIsNeeded_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ModuleInfo_13;
          MR_Word Target_14;
          MR_Word HighLevelData_15;
          MR_Word VarTypes_16;
          MR_Word GlobalData0_17;
          MR_Word GlobalData_18;
          MR_Word GroundTermMap_19;
          MR_Word TermVarGroundTerm_20;
          MR_Word TermVarLval_21;
          MR_Word TermVarRval_22;
          MR_Word Context_25;
          MR_Word Stmt_26;
          MR_Word Var_29;
          MR_Word STATE_VARIABLE_Info_30_30;
          MR_Box conv0_TermVarGroundTerm_20;

          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_27, &ModuleInfo_13);
          ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_27, &Target_14);
          ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_27, &HighLevelData_15);
          ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_27, &VarTypes_16);
          ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_27, &GlobalData0_17);
          Var_29 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0));
          ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjuncts_9_p_0(ModuleInfo_13, Target_14, HighLevelData_15, VarTypes_16, Conjuncts_11, GlobalData0_17, &GlobalData_18, Var_29, &GroundTermMap_19);
          ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_18, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_30_30);
          mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), GroundTermMap_19, ((MR_Box) (TermVar_6)), &conv0_TermVarGroundTerm_20);
          TermVarGroundTerm_20 = ((MR_Word) (conv0_TermVarGroundTerm_20));
          ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(TermVar_6, TermVarGroundTerm_20, STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Info_28);
          ml_backend__ml_code_util__ml_gen_var_3_p_0(*STATE_VARIABLE_Info_28, TermVar_6, &TermVarLval_21);
          TermVarRval_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermVarGroundTerm_20, (MR_Integer) 0))));
          Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_12);
          Stmt_26 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(TermVarLval_21, TermVarRval_22, Context_25);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_26));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          *Stmts_8 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_0_27;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjuncts_9_p_0(
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
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_GlobalData_0_6;
      MR_Word next_value_of_STATE_VARIABLE_GroundTermMap_0_8;

      ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0(ModuleInfo_1, Target_2, HighLevelData_3, VarTypes_4, Goal_24, STATE_VARIABLE_GlobalData_0_6, &STATE_VARIABLE_GlobalData_32_32, STATE_VARIABLE_GroundTermMap_0_8, &STATE_VARIABLE_GroundTermMap_33_33);
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
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_9(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1250__6_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_8(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1250__5_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_RevOrRvals_17;
    MR_Word conv3_STATE_VARIABLE_GroundTermMap_19;

    ml_backend__ml_unify_gen_construct__construct_ground_term_tagword_initializer_lld_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_RevOrRvals_17, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_GroundTermMap_19);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_RevOrRvals_17));
    *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_GroundTermMap_19));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_6(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1276__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_3;

    conv2_HeadVar__3_3 = hlds__vartypes__lookup_var_type_func_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1250__4_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1250__3_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1250__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1250__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Target_11,
  MR_Word HighLevelData_12,
  MR_Word VarTypes_13,
  MR_Word Goal_14,
  MR_Word STATE_VARIABLE_GlobalData_0_78,
  MR_Word * STATE_VARIABLE_GlobalData_79,
  MR_Word STATE_VARIABLE_GroundTermMap_0_80,
  MR_Word * STATE_VARIABLE_GroundTermMap_81)
{
  {
    MR_bool succeeded;
    MR_Word LHSVar_17;
    MR_Word ConsId_18;
    MR_Word RHSVars_19;
    MR_Word GoalInfo_20;
    MR_Word LHSType_21;
    MR_Word LHS_MLDS_Type_22;
    MR_Word ConsTag_23;
    MR_Word Context_24;

    hlds__goal_form__get_from_ground_term_construct_conjunct_info_5_p_0(Goal_14, &LHSVar_17, &ConsId_18, &RHSVars_19, &GoalInfo_20);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_13, LHSVar_17, &LHSType_21);
    LHS_MLDS_Type_22 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_10, LHSType_21);
    ConsTag_23 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_10, ConsId_18);
    Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_20);
    switch (MR_tag((MR_Word) ConsTag_23)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_23)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ConstRval_27;
              MR_Word ConstGroundTerm_38;
              MR_Word Var_115;
              MR_Word IntConst_121;

              IntConst_121 = ml_backend__ml_unify_gen_construct__int_tag_to_mlds_rval_const_3_f_0(LHSType_21, LHS_MLDS_Type_22, (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_6[1]));
              {
                ConstRval_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstRval_27, 1) = ((MR_Box) (IntConst_121));
              }
              {
                Var_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_115, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[9]));
                MR_hl_field(MR_mktag(0), Var_115, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_1));
                MR_hl_field(MR_mktag(0), Var_115, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_115, 3) = ((MR_Box) (RHSVars_19));
                MR_hl_field(MR_mktag(0), Var_115, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_115, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_conjunct\'/9", (MR_String) "constant has args");
              {
                ConstGroundTerm_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_38, 0) = ((MR_Box) (ConstRval_27));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_38, 1) = ((MR_Box) (LHSType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_38, 2) = ((MR_Box) (LHS_MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (ConstGroundTerm_38)), STATE_VARIABLE_GroundTermMap_0_80, STATE_VARIABLE_GroundTermMap_81);
              *STATE_VARIABLE_GlobalData_79 = STATE_VARIABLE_GlobalData_0_78;
            }
            break;
          case (MR_Integer) 1:
            ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0(ModuleInfo_10, Target_11, HighLevelData_12, VarTypes_13, LHSVar_17, LHSType_21, LHS_MLDS_Type_22, ConsId_18, ConsTag_23, RHSVars_19, Context_24, STATE_VARIABLE_GlobalData_0_78, STATE_VARIABLE_GlobalData_79, STATE_VARIABLE_GroundTermMap_0_80, STATE_VARIABLE_GroundTermMap_81);
            break;
          case (MR_Integer) 2:
            {
              MR_Word RHSVar_67;
              MR_Word RHSGroundTerm_68;
              MR_Word RHSRval_69;
              MR_Word RHS_MLDS_Type_71;
              MR_Word BoxedRHSRval0_72;
              MR_Word BoxedRHSRval_73;
              MR_Word GroundTerm_74;
              MR_Word STATE_VARIABLE_GroundTermMap_84_84;
              MR_Box conv0_RHSVar_67;
              MR_Box conv1_RHSGroundTerm_68;

              hlds__goal_form__get_notag_or_direct_arg_arg_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), RHSVars_19, &conv0_RHSVar_67);
              RHSVar_67 = ((MR_Word) (conv0_RHSVar_67));
              mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (RHSVar_67)), &conv1_RHSGroundTerm_68, STATE_VARIABLE_GroundTermMap_0_80, &STATE_VARIABLE_GroundTermMap_84_84);
              RHSGroundTerm_68 = ((MR_Word) (conv1_RHSGroundTerm_68));
              RHSRval_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSGroundTerm_68, (MR_Integer) 0))));
              RHS_MLDS_Type_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSGroundTerm_68, (MR_Integer) 2))));
              ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_10, Context_24, RHS_MLDS_Type_71, (MR_Integer) 2, RHSRval_69, &BoxedRHSRval0_72, STATE_VARIABLE_GlobalData_0_78, STATE_VARIABLE_GlobalData_79);
              BoxedRHSRval_73 = ml_backend__ml_unify_gen_construct__ml_cast_cons_tag_3_f_0(LHS_MLDS_Type_22, ConsTag_23, BoxedRHSRval0_72);
              {
                GroundTerm_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_74, 0) = ((MR_Box) (BoxedRHSRval_73));
                MR_hl_field(MR_mktag(0), GroundTerm_74, 1) = ((MR_Box) (LHSType_21));
                MR_hl_field(MR_mktag(0), GroundTerm_74, 2) = ((MR_Box) (LHS_MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (GroundTerm_74)), STATE_VARIABLE_GroundTermMap_84_84, STATE_VARIABLE_GroundTermMap_81);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntTag_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsTag_23, (MR_Integer) 0))));
          MR_Word IntConst_26;
          MR_Word ConstRval_171;
          MR_Word ConstGroundTerm_172;
          MR_Word Var_173;

          IntConst_26 = ml_backend__ml_unify_gen_construct__int_tag_to_mlds_rval_const_3_f_0(LHSType_21, LHS_MLDS_Type_22, IntTag_25);
          {
            ConstRval_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConstRval_171, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ConstRval_171, 1) = ((MR_Box) (IntConst_26));
          }
          {
            Var_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_173, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[9]));
            MR_hl_field(MR_mktag(0), Var_173, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_4));
            MR_hl_field(MR_mktag(0), Var_173, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_173, 3) = ((MR_Box) (RHSVars_19));
            MR_hl_field(MR_mktag(0), Var_173, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_173, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_conjunct\'/9", (MR_String) "constant has args");
          {
            ConstGroundTerm_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConstGroundTerm_172, 0) = ((MR_Box) (ConstRval_171));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_172, 1) = ((MR_Box) (LHSType_21));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_172, 2) = ((MR_Box) (LHS_MLDS_Type_22));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (ConstGroundTerm_172)), STATE_VARIABLE_GroundTermMap_0_80, STATE_VARIABLE_GroundTermMap_81);
          *STATE_VARIABLE_GlobalData_79 = STATE_VARIABLE_GlobalData_0_78;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_28 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_23, (MR_Integer) 0)));
          MR_Word Var_114;
          MR_Word ConstRval_149;
          MR_Word ConstGroundTerm_150;
          MR_Word Var_151;

          {
            Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
            MR_hl_field(MR_mktag(3), Var_114, 1) = MR_box_float(Float_28);
          }
          {
            ConstRval_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConstRval_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ConstRval_149, 1) = ((MR_Box) (Var_114));
          }
          {
            Var_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_151, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[9]));
            MR_hl_field(MR_mktag(0), Var_151, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_2));
            MR_hl_field(MR_mktag(0), Var_151, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_151, 3) = ((MR_Box) (RHSVars_19));
            MR_hl_field(MR_mktag(0), Var_151, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_151, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_conjunct\'/9", (MR_String) "constant has args");
          {
            ConstGroundTerm_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConstGroundTerm_150, 0) = ((MR_Box) (ConstRval_149));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_150, 1) = ((MR_Box) (LHSType_21));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_150, 2) = ((MR_Box) (LHS_MLDS_Type_22));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (ConstGroundTerm_150)), STATE_VARIABLE_GroundTermMap_0_80, STATE_VARIABLE_GroundTermMap_81);
          *STATE_VARIABLE_GlobalData_79 = STATE_VARIABLE_GlobalData_0_78;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_23, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String String_29 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_23, (MR_Integer) 1))));
              MR_Word Var_113;
              MR_Word ConstRval_193;
              MR_Word ConstGroundTerm_194;
              MR_Word Var_195;

              {
                Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (String_29));
              }
              {
                ConstRval_193 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_193, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstRval_193, 1) = ((MR_Box) (Var_113));
              }
              {
                Var_195 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_195, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[9]));
                MR_hl_field(MR_mktag(0), Var_195, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_9));
                MR_hl_field(MR_mktag(0), Var_195, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_195, 3) = ((MR_Box) (RHSVars_19));
                MR_hl_field(MR_mktag(0), Var_195, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_195, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_conjunct\'/9", (MR_String) "constant has args");
              {
                ConstGroundTerm_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_194, 0) = ((MR_Box) (ConstRval_193));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_194, 1) = ((MR_Box) (LHSType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_194, 2) = ((MR_Box) (LHS_MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (ConstGroundTerm_194)), STATE_VARIABLE_GroundTermMap_0_80, STATE_VARIABLE_GroundTermMap_81);
              *STATE_VARIABLE_GlobalData_79 = STATE_VARIABLE_GlobalData_0_78;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_23, (MR_Integer) 1))));
              MR_String ForeignTag_31 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_23, (MR_Integer) 2))));
              MR_Word Var_112;
              MR_Word ConstRval_160;
              MR_Word ConstGroundTerm_161;
              MR_Word Var_162;

              {
                Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), Var_112, 1) = ((MR_Box) (ForeignLang_30));
                MR_hl_field(MR_mktag(3), Var_112, 2) = ((MR_Box) (ForeignTag_31));
                MR_hl_field(MR_mktag(3), Var_112, 3) = ((MR_Box) (LHS_MLDS_Type_22));
              }
              {
                ConstRval_160 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_160, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstRval_160, 1) = ((MR_Box) (Var_112));
              }
              {
                Var_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_162, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[9]));
                MR_hl_field(MR_mktag(0), Var_162, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_3));
                MR_hl_field(MR_mktag(0), Var_162, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_162, 3) = ((MR_Box) (RHSVars_19));
                MR_hl_field(MR_mktag(0), Var_162, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_162, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_conjunct\'/9", (MR_String) "constant has args");
              {
                ConstGroundTerm_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_161, 0) = ((MR_Box) (ConstRval_160));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_161, 1) = ((MR_Box) (LHSType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_161, 2) = ((MR_Box) (LHS_MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (ConstGroundTerm_161)), STATE_VARIABLE_GroundTermMap_0_80, STATE_VARIABLE_GroundTermMap_81);
              *STATE_VARIABLE_GlobalData_79 = STATE_VARIABLE_GlobalData_0_78;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word LocalSectag_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_23, (MR_Integer) 2))));
              MR_Unsigned PrimSec_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_33, (MR_Integer) 1))));
              MR_Word Var_109;
              MR_Word Var_110;
              MR_Word ConstRval_182;
              MR_Word ConstGroundTerm_183;
              MR_Word Var_184;

              {
                Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_110, 1) = ((MR_Box) (PrimSec_36));
              }
              {
                Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_109, 1) = ((MR_Box) (Var_110));
              }
              {
                ConstRval_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), ConstRval_182, 1) = ((MR_Box) (LHS_MLDS_Type_22));
                MR_hl_field(MR_mktag(3), ConstRval_182, 2) = ((MR_Box) (Var_109));
              }
              {
                Var_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_184, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[9]));
                MR_hl_field(MR_mktag(0), Var_184, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_8));
                MR_hl_field(MR_mktag(0), Var_184, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_184, 3) = ((MR_Box) (RHSVars_19));
                MR_hl_field(MR_mktag(0), Var_184, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_184, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_conjunct\'/9", (MR_String) "constant has args");
              {
                ConstGroundTerm_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_183, 0) = ((MR_Box) (ConstRval_182));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_183, 1) = ((MR_Box) (LHSType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_183, 2) = ((MR_Box) (LHS_MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (ConstGroundTerm_183)), STATE_VARIABLE_GroundTermMap_0_80, STATE_VARIABLE_GroundTermMap_81);
              *STATE_VARIABLE_GlobalData_79 = STATE_VARIABLE_GlobalData_0_78;
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
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_conjunct\'/9", (MR_String) "unexpected constant");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
          case (MR_Integer) 12:
            ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0(ModuleInfo_10, Target_11, HighLevelData_12, VarTypes_13, LHSVar_17, LHSType_21, LHS_MLDS_Type_22, ConsId_18, ConsTag_23, RHSVars_19, Context_24, STATE_VARIABLE_GlobalData_0_78, STATE_VARIABLE_GlobalData_79, STATE_VARIABLE_GroundTermMap_0_80, STATE_VARIABLE_GroundTermMap_81);
            break;
          case (MR_Integer) 13:
            {
              MR_Word LocalArgsTagInfo_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_23, (MR_Integer) 1))));
              MR_Word RHSVarsTypesWidths_58;
              MR_Word RevOrRvals_59;
              MR_Word OrRvals_60;
              MR_Word TagwordRval_61;
              MR_Word CastTagwordRval_62;
              MR_Word Var_95;
              MR_Word Var_97;
              MR_Word STATE_VARIABLE_GroundTermMap_103_103;
              MR_Word Var_104;
              MR_Word Var_105;
              MR_Word LocalSectag_125;
              MR_Unsigned PrimSec_126;
              MR_Word ConstGroundTerm_127;
              MR_Box conv6_RevOrRvals_59;
              MR_Box conv5_STATE_VARIABLE_GroundTermMap_103_103;

              if ((LocalArgsTagInfo_55 == (MR_Word) ((MR_Unsigned) 0U)))
                LocalSectag_125 = (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[3]);
              else
                LocalSectag_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArgsTagInfo_55, (MR_Integer) 1))));
              PrimSec_126 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_125, (MR_Integer) 1))));
              {
                Var_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_5));
                MR_hl_field(MR_mktag(0), Var_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_95, 3) = ((MR_Box) (VarTypes_13));
              }
              ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_1((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), ModuleInfo_10, Var_95, (MR_Integer) 0, LHSType_21, ConsId_18, RHSVars_19, &RHSVarsTypesWidths_58);
              {
                Var_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[5]));
                MR_hl_field(MR_mktag(0), Var_97, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_6));
                MR_hl_field(MR_mktag(0), Var_97, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_97, 3) = ((MR_Box) (HighLevelData_12));
                MR_hl_field(MR_mktag(0), Var_97, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_97, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_conjunct\'/9", (MR_String) "HighLevelData = yes");
              mercury__list__foldl2_6_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[4]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[5]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[2]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[7]), RHSVarsTypesWidths_58, ((MR_Box) ((MR_Unsigned) 0U)), &conv6_RevOrRvals_59, ((MR_Box) (STATE_VARIABLE_GroundTermMap_0_80)), &conv5_STATE_VARIABLE_GroundTermMap_103_103);
              RevOrRvals_59 = ((MR_Word) (conv6_RevOrRvals_59));
              STATE_VARIABLE_GroundTermMap_103_103 = ((MR_Word) (conv5_STATE_VARIABLE_GroundTermMap_103_103));
              mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevOrRvals_59, &OrRvals_60);
              {
                Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_105, 1) = ((MR_Box) (PrimSec_126));
              }
              {
                Var_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_104, 1) = ((MR_Box) (Var_105));
              }
              TagwordRval_61 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(Var_104, OrRvals_60);
              {
                CastTagwordRval_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastTagwordRval_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), CastTagwordRval_62, 1) = ((MR_Box) (LHS_MLDS_Type_22));
                MR_hl_field(MR_mktag(3), CastTagwordRval_62, 2) = ((MR_Box) (TagwordRval_61));
              }
              {
                ConstGroundTerm_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_127, 0) = ((MR_Box) (CastTagwordRval_62));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_127, 1) = ((MR_Box) (LHSType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_127, 2) = ((MR_Box) (LHS_MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (ConstGroundTerm_127)), STATE_VARIABLE_GroundTermMap_103_103, STATE_VARIABLE_GroundTermMap_81);
              *STATE_VARIABLE_GlobalData_79 = STATE_VARIABLE_GlobalData_0_78;
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word RHSVar_67;
              MR_Word RHSGroundTerm_68;
              MR_Word RHSRval_69;
              MR_Word RHS_MLDS_Type_71;
              MR_Word BoxedRHSRval0_72;
              MR_Word BoxedRHSRval_73;
              MR_Word GroundTerm_74;
              MR_Word STATE_VARIABLE_GroundTermMap_84_84;
              MR_Box conv0_RHSVar_67;
              MR_Box conv1_RHSGroundTerm_68;

              hlds__goal_form__get_notag_or_direct_arg_arg_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), RHSVars_19, &conv0_RHSVar_67);
              RHSVar_67 = ((MR_Word) (conv0_RHSVar_67));
              mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (RHSVar_67)), &conv1_RHSGroundTerm_68, STATE_VARIABLE_GroundTermMap_0_80, &STATE_VARIABLE_GroundTermMap_84_84);
              RHSGroundTerm_68 = ((MR_Word) (conv1_RHSGroundTerm_68));
              RHSRval_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSGroundTerm_68, (MR_Integer) 0))));
              RHS_MLDS_Type_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSGroundTerm_68, (MR_Integer) 2))));
              ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_10, Context_24, RHS_MLDS_Type_71, (MR_Integer) 2, RHSRval_69, &BoxedRHSRval0_72, STATE_VARIABLE_GlobalData_0_78, STATE_VARIABLE_GlobalData_79);
              BoxedRHSRval_73 = ml_backend__ml_unify_gen_construct__ml_cast_cons_tag_3_f_0(LHS_MLDS_Type_22, ConsTag_23, BoxedRHSRval0_72);
              {
                GroundTerm_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_74, 0) = ((MR_Box) (BoxedRHSRval_73));
                MR_hl_field(MR_mktag(0), GroundTerm_74, 1) = ((MR_Box) (LHSType_21));
                MR_hl_field(MR_mktag(0), GroundTerm_74, 2) = ((MR_Box) (LHS_MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (GroundTerm_74)), STATE_VARIABLE_GroundTermMap_84_84, STATE_VARIABLE_GroundTermMap_81);
            }
            break;
          case (MR_Integer) 15:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_conjunct\'/9", (MR_String) "unexpected closure");
                return;
              }
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
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_3(
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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_memory_cell__1357__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_memory_cell__1342__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word Target_17,
  MR_Word HighLevelData_18,
  MR_Word VarTypes_19,
  MR_Word LHSVar_20,
  MR_Word LHSType_21,
  MR_Word LHS_MLDS_Type_22,
  MR_Word ConsId_23,
  MR_Word ConsTag_24,
  MR_Word RHSVars_25,
  MR_Word Context_26,
  MR_Word STATE_VARIABLE_GlobalData_0_41,
  MR_Word * STATE_VARIABLE_GlobalData_42,
  MR_Word STATE_VARIABLE_GroundTermMap_0_43,
  MR_Word * STATE_VARIABLE_GroundTermMap_44)
{
  {
    MR_bool succeeded;
    MR_Word Ptag_29;
    MR_Word ExtraRHSRvals_30;
    MR_Word RHSVarsTypesWidths_37;
    MR_Word RHSRvalsTypesWidths_38;
    MR_Word UsesBaseClass_39;
    MR_Word GroundTerm_40;
    MR_Word Var_58;
    MR_Word STATE_VARIABLE_GlobalData_62_62;
    MR_Word STATE_VARIABLE_GroundTermMap_63_63;
    MR_Word Var_64;

    switch (MR_tag((MR_Word) ConsTag_24)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Ptag_29 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
          ExtraRHSRvals_30 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 11:
            {
              Ptag_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1))));
              ExtraRHSRvals_30 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word RemoteSectag_31;
              MR_Unsigned SectagUint_32;
              MR_Word AddedBy_33;
              MR_Word UsesConstructors_34;

              Ptag_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 1))));
              RemoteSectag_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_24, (MR_Integer) 2))));
              SectagUint_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_31, (MR_Integer) 0))));
              AddedBy_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_31, (MR_Integer) 1))));
              UsesConstructors_34 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_17);
              switch (UsesConstructors_34) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word StagRval0_35;
                    MR_Word StagRval_36;
                    MR_Word Var_49;
                    MR_Word Var_53;
                    MR_Integer Var_54;

                    {
                      Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[8]));
                      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_1));
                      MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (AddedBy_33));
                      MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) ((MR_Integer) 0));
                    }
                    mercury__require__expect_3_p_0(Var_49, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_memory_cell\'/15", (MR_String) "AddedBy != sectag_added_by_unify");
                    Var_54 = mercury__uint__cast_to_int_1_f_0(SectagUint_32);
                    {
                      Var_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_53, 0) = ((MR_Box) (Var_54));
                    }
                    {
                      StagRval0_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), StagRval0_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), StagRval0_35, 1) = ((MR_Box) (Var_53));
                    }
                    switch (HighLevelData_18) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            StagRval_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), StagRval_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), StagRval_36, 1) = ((MR_Box) ((MR_Unsigned) 20U));
                            MR_hl_field(MR_mktag(3), StagRval_36, 2) = ((MR_Box) (StagRval0_35));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        StagRval_36 = StagRval0_35;
                        break;
                    }
                    {
                      ExtraRHSRvals_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ExtraRHSRvals_30, 0) = ((MR_Box) (StagRval_36));
                      MR_hl_field(MR_mktag(1), ExtraRHSRvals_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_45;

                    {
                      Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[8]));
                      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_2));
                      MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (AddedBy_33));
                      MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) ((MR_Integer) 1));
                    }
                    mercury__require__expect_3_p_0(Var_45, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_memory_cell\'/15", (MR_String) "AddedBy != sectag_added_by_constructor");
                    ExtraRHSRvals_30 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_3));
      MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (VarTypes_19));
    }
    ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_1((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), ModuleInfo_16, Var_58, (MR_Integer) 0, LHSType_21, ConsId_23, RHSVars_25, &RHSVarsTypesWidths_37);
    switch (HighLevelData_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_unify_gen_construct__construct_ground_term_initializers_lld_8_p_0(ModuleInfo_16, Context_26, RHSVarsTypesWidths_37, &RHSRvalsTypesWidths_38, STATE_VARIABLE_GlobalData_0_41, &STATE_VARIABLE_GlobalData_62_62, STATE_VARIABLE_GroundTermMap_0_43, &STATE_VARIABLE_GroundTermMap_63_63);
        break;
      case (MR_Integer) 1:
        ml_backend__ml_unify_gen_construct__construct_ground_term_initializers_hld_8_p_0(ModuleInfo_16, Context_26, RHSVarsTypesWidths_37, &RHSRvalsTypesWidths_38, STATE_VARIABLE_GlobalData_0_41, &STATE_VARIABLE_GlobalData_62_62, STATE_VARIABLE_GroundTermMap_0_43, &STATE_VARIABLE_GroundTermMap_63_63);
        break;
    }
    UsesBaseClass_39 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ConsTag_24);
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (ConsId_23));
    }
    ml_backend__ml_unify_gen_construct__construct_static_ground_term_14_p_0(ModuleInfo_16, Target_17, HighLevelData_18, Context_26, LHSType_21, LHS_MLDS_Type_22, Var_64, UsesBaseClass_39, Ptag_29, ExtraRHSRvals_30, RHSRvalsTypesWidths_38, &GroundTerm_40, STATE_VARIABLE_GlobalData_62_62, STATE_VARIABLE_GlobalData_42);
    mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_20)), ((MR_Box) (GroundTerm_40)), STATE_VARIABLE_GroundTermMap_63_63, STATE_VARIABLE_GroundTermMap_44);
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
    MR_Word RHSVarTypeWidth_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word RHSVarsTypesWidths_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word RHSRvalTypeWidth_21;
    MR_Word RHSRvalsTypesWidths_22;
    MR_Word STATE_VARIABLE_GlobalData_29_29;
    MR_Word STATE_VARIABLE_GroundTermMap_30_30;
    MR_Word RHSVar_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSVarTypeWidth_19, (MR_Integer) 0))));
    MR_Word ArgPosWidth_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSVarTypeWidth_19, (MR_Integer) 2))));
    MR_Word RHSGroundTerm_46;
    MR_Word RHSRval0_47;
    MR_Word RHS_MLDS_Type_49;
    MR_Word ArgWidth_50;
    MR_Word RHSRval_51;
    MR_Box conv0_RHSGroundTerm_46;

    mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (RHSVar_43)), &conv0_RHSGroundTerm_46, STATE_VARIABLE_GroundTermMap_0_7, &STATE_VARIABLE_GroundTermMap_30_30);
    RHSGroundTerm_46 = ((MR_Word) (conv0_RHSGroundTerm_46));
    RHSRval0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSGroundTerm_46, (MR_Integer) 0))));
    RHS_MLDS_Type_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSGroundTerm_46, (MR_Integer) 2))));
    ArgWidth_50 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_45);
    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_1, Context_2, RHS_MLDS_Type_49, ArgWidth_50, RHSRval0_47, &RHSRval_51, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_29_29);
    {
      RHSRvalTypeWidth_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RHSRvalTypeWidth_21, 0) = ((MR_Box) (RHSRval_51));
      MR_hl_field(MR_mktag(0), RHSRvalTypeWidth_21, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), RHSRvalTypeWidth_21, 2) = ((MR_Box) (ArgPosWidth_45));
    }
    ml_backend__ml_unify_gen_construct__construct_ground_term_initializers_lld_8_p_0(ModuleInfo_1, Context_2, RHSVarsTypesWidths_20, &RHSRvalsTypesWidths_22, STATE_VARIABLE_GlobalData_29_29, STATE_VARIABLE_GlobalData_6, STATE_VARIABLE_GroundTermMap_30_30, STATE_VARIABLE_GroundTermMap_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RHSRvalTypeWidth_21));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RHSRvalsTypesWidths_22));
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
    MR_Word RHSVarTypeWidth_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word RHSVarsTypesWidths_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word RHSRvalTypeWidth_21;
    MR_Word RHSRvalsTypesWidths_22;
    MR_Word STATE_VARIABLE_GlobalData_29_29;
    MR_Word STATE_VARIABLE_GroundTermMap_30_30;
    MR_Word RHSVar_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSVarTypeWidth_19, (MR_Integer) 0))));
    MR_Word ConsArgType_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSVarTypeWidth_19, (MR_Integer) 1))));
    MR_Word ArgPosWidth_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSVarTypeWidth_19, (MR_Integer) 2))));
    MR_Word RHSGroundTerm_46;
    MR_Word RHSRval0_47;
    MR_Word RHSType_48;
    MR_Word ArgWidth_50;
    MR_Word BoxedRHSType_51;
    MR_Word RHSRval_52;
    MR_Box conv0_RHSGroundTerm_46;

    mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (RHSVar_43)), &conv0_RHSGroundTerm_46, STATE_VARIABLE_GroundTermMap_0_7, &STATE_VARIABLE_GroundTermMap_30_30);
    RHSGroundTerm_46 = ((MR_Word) (conv0_RHSGroundTerm_46));
    RHSRval0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSGroundTerm_46, (MR_Integer) 0))));
    RHSType_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSGroundTerm_46, (MR_Integer) 1))));
    ArgWidth_50 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_45);
    ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_1, (MR_Integer) 1, ConsArgType_44, ArgWidth_50, &BoxedRHSType_51);
    switch (MR_tag((MR_Word) BoxedRHSType_51)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word MLDS_ArgType_70;

          MLDS_ArgType_70 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_1, RHSType_48);
          ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_1, Context_2, MLDS_ArgType_70, (MR_Integer) 2, RHSRval0_47, &RHSRval_52, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_29_29);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_1, RHSType_48, BoxedRHSType_51, (MR_Integer) 0, RHSRval0_47, &RHSRval_52);
          STATE_VARIABLE_GlobalData_29_29 = STATE_VARIABLE_GlobalData_0_5;
        }
        break;
      case (MR_Integer) 3:
        {
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_1, RHSType_48, BoxedRHSType_51, (MR_Integer) 0, RHSRval0_47, &RHSRval_52);
          STATE_VARIABLE_GlobalData_29_29 = STATE_VARIABLE_GlobalData_0_5;
        }
        break;
    }
    {
      RHSRvalTypeWidth_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RHSRvalTypeWidth_21, 0) = ((MR_Box) (RHSRval_52));
      MR_hl_field(MR_mktag(0), RHSRvalTypeWidth_21, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), RHSRvalTypeWidth_21, 2) = ((MR_Box) (ArgPosWidth_45));
    }
    ml_backend__ml_unify_gen_construct__construct_ground_term_initializers_hld_8_p_0(ModuleInfo_1, Context_2, RHSVarsTypesWidths_20, &RHSRvalsTypesWidths_22, STATE_VARIABLE_GlobalData_29_29, STATE_VARIABLE_GlobalData_6, STATE_VARIABLE_GroundTermMap_30_30, STATE_VARIABLE_GroundTermMap_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RHSRvalTypeWidth_21));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RHSRvalsTypesWidths_22));
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

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__234__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__243__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
  MR_Word LHSVar_12,
  MR_Word ConsId_13,
  MR_Word RHSVars_14,
  MR_Word ArgModes_15,
  MR_Word TakeAddr_16,
  MR_Word HowToConstruct_17,
  MR_Word Context_18,
  MR_Word * Defns_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_100,
  MR_Word * STATE_VARIABLE_Info_101)
{
  {
    MR_bool succeeded;
    MR_Word ConsTag_22;

    ml_backend__ml_unify_gen_util__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_100, ConsId_13, &ConsTag_22);
    switch (MR_tag((MR_Word) ConsTag_22)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_22)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word LHSType_47;
              MR_Word LHSLval_48;
              MR_Word ModuleInfo_49;
              MR_Word LHS_MLDS_Type_50;
              MR_Word ConstRval_52;
              MR_Word GroundTerm_90;
              MR_Word Stmt_91;
              MR_Word Var_114;

              {
                Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[9]));
                MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_1));
                MR_hl_field(MR_mktag(0), Var_114, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_114, 3) = ((MR_Box) (RHSVars_14));
                MR_hl_field(MR_mktag(0), Var_114, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_114, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "constant has arguments");
              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_100, LHSVar_12, &LHSType_47);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_100, LHSVar_12, &LHSLval_48);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_100, &ModuleInfo_49);
              LHS_MLDS_Type_50 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_49, LHSType_47);
              switch (MR_tag((MR_Word) ConsTag_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ConstRval_52 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_6[1]), LHSType_47, LHS_MLDS_Type_50);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word IntTag_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsTag_22, (MR_Integer) 0))));

                    ConstRval_52 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(IntTag_51, LHSType_47, LHS_MLDS_Type_50);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Float Float_53 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_22, (MR_Integer) 0)));
                    MR_Word Var_135;

                    {
                      Var_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                      MR_hl_field(MR_mktag(3), Var_135, 1) = MR_box_float(Float_53);
                    }
                    {
                      ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_135));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_String String_54 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word Var_134;

                        {
                          Var_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_134, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                          MR_hl_field(MR_mktag(3), Var_134, 1) = ((MR_Box) (String_54));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_134));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ForeignLang_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_String ForeignTag_56 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_Word Var_133;

                        {
                          Var_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                          MR_hl_field(MR_mktag(3), Var_133, 1) = ((MR_Box) (ForeignLang_55));
                          MR_hl_field(MR_mktag(3), Var_133, 2) = ((MR_Box) (ForeignTag_56));
                          MR_hl_field(MR_mktag(3), Var_133, 3) = ((MR_Box) (LHS_MLDS_Type_50));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_133));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word LocalSectag_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_Unsigned PrimSec_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_58, (MR_Integer) 1))));
                        MR_Word Var_129;
                        MR_Word Var_130;

                        {
                          Var_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), Var_130, 1) = ((MR_Box) (PrimSec_61));
                        }
                        {
                          Var_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_129, 1) = ((MR_Box) (Var_130));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (LHS_MLDS_Type_50));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_129));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Integer ConstNum_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word ConstStructMap_65;
                        MR_Word GroundTerm0_66;
                        MR_Box conv0_GroundTerm0_66;

                        ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_100, &ConstStructMap_65);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_65, ConstNum_63, &conv0_GroundTerm0_66);
                        GroundTerm0_66 = ((MR_Word) (conv0_GroundTerm0_66));
                        ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_66, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Integer ConstNum_160 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word ConstStructMap_161;
                        MR_Word GroundTerm0_162;
                        MR_Box conv1_GroundTerm0_162;

                        ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_100, &ConstStructMap_161);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_161, ConstNum_160, &conv1_GroundTerm0_162);
                        GroundTerm0_162 = ((MR_Word) (conv1_GroundTerm0_162));
                        ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_162, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Integer ConstNum_169 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word ConstStructMap_170;
                        MR_Word GroundTerm0_171;
                        MR_Box conv2_GroundTerm0_171;

                        ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_100, &ConstStructMap_170);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_170, ConstNum_169, &conv2_GroundTerm0_171);
                        GroundTerm0_171 = ((MR_Word) (conv2_GroundTerm0_171));
                        ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_171, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word ModuleName0_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_String TypeName_70 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_Integer TypeArity_71 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                        MR_Word ModuleName_72;
                        MR_Word MLDS_Module_73;
                        MR_Word RttiTypeCtor_74;
                        MR_Word RttiId_75;
                        MR_Word Const_76;
                        MR_Word Var_128;

                        ModuleName_72 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_69);
                        MLDS_Module_73 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_72);
                        {
                          RttiTypeCtor_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 0) = ((MR_Box) (ModuleName_72));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 1) = ((MR_Box) (TypeName_70));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 2) = ((MR_Box) (TypeArity_71));
                        }
                        {
                          RttiId_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), RttiId_75, 0) = ((MR_Box) (RttiTypeCtor_74));
                          MR_hl_field(MR_mktag(0), RttiId_75, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                        }
                        {
                          Const_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                          MR_hl_field(MR_mktag(3), Const_76, 1) = ((MR_Box) (MLDS_Module_73));
                          MR_hl_field(MR_mktag(3), Const_76, 2) = ((MR_Box) (RttiId_75));
                        }
                        {
                          Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_128, 1) = ((MR_Box) (Const_76));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (LHS_MLDS_Type_50));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_128));
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Word ClassId_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_String Instance_78 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                        MR_Word TCName_79;
                        MR_Word Var_125;
                        MR_Word Var_126;
                        MR_Word ModuleName_138 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word MLDS_Module_139;
                        MR_Word RttiId_140;
                        MR_Word Const_141;

                        MLDS_Module_139 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_138);
                        TCName_79 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_77);
                        {
                          Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (ModuleName_138));
                          MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Instance_78));
                        }
                        {
                          RttiId_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), RttiId_140, 0) = ((MR_Box) (TCName_79));
                          MR_hl_field(MR_mktag(1), RttiId_140, 1) = ((MR_Box) (Var_125));
                        }
                        {
                          Const_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                          MR_hl_field(MR_mktag(3), Const_141, 1) = ((MR_Box) (MLDS_Module_139));
                          MR_hl_field(MR_mktag(3), Const_141, 2) = ((MR_Box) (RttiId_140));
                        }
                        {
                          Var_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_126, 1) = ((MR_Box) (Const_141));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (LHS_MLDS_Type_50));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_126));
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "deep_profiling_proc_layout_tag NYI");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Word PredId_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Integer ProcId_83 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_Word PredLabel_84;
                        MR_Word PredModule_85;
                        MR_Word ProcLabel_86;
                        MR_Word QualProcLabel_87;
                        MR_Word Var_120;
                        MR_Word Var_122;
                        MR_Word Const_142;

                        {
                          Var_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (PredId_82));
                          MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (ProcId_83));
                        }
                        ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_49, Var_120, &PredLabel_84, &PredModule_85);
                        {
                          ProcLabel_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ProcLabel_86, 0) = ((MR_Box) (PredLabel_84));
                          MR_hl_field(MR_mktag(0), ProcLabel_86, 1) = ((MR_Box) (ProcId_83));
                        }
                        {
                          QualProcLabel_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), QualProcLabel_87, 0) = ((MR_Box) (PredModule_85));
                          MR_hl_field(MR_mktag(0), QualProcLabel_87, 1) = ((MR_Box) (ProcLabel_86));
                        }
                        {
                          Const_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
                          MR_hl_field(MR_mktag(3), Const_142, 1) = ((MR_Box) (QualProcLabel_87));
                          MR_hl_field(MR_mktag(3), Const_142, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_122, 1) = ((MR_Box) (Const_142));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (LHS_MLDS_Type_50));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_122));
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
                  }
                  break;
              }
              {
                GroundTerm_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_90, 0) = ((MR_Box) (ConstRval_52));
                MR_hl_field(MR_mktag(0), GroundTerm_90, 1) = ((MR_Box) (LHSType_47));
                MR_hl_field(MR_mktag(0), GroundTerm_90, 2) = ((MR_Box) (LHS_MLDS_Type_50));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_12, GroundTerm_90, STATE_VARIABLE_Info_0_100, STATE_VARIABLE_Info_101);
              Stmt_91 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_48, ConstRval_52, Context_18);
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
          case (MR_Integer) 1:
            ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_compound_12_p_0(LHSVar_12, ConsId_13, ConsTag_22, RHSVars_14, ArgModes_15, TakeAddr_16, HowToConstruct_17, Context_18, Defns_19, Stmts_20, STATE_VARIABLE_Info_0_100, STATE_VARIABLE_Info_101);
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_103;

              {
                Var_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[7]));
                MR_hl_field(MR_mktag(0), Var_103, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_2));
                MR_hl_field(MR_mktag(0), Var_103, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_103, 3) = ((MR_Box) (TakeAddr_16));
                MR_hl_field(MR_mktag(0), Var_103, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_103, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "notag or direct_arg_tag: take_addr");
              ml_backend__ml_unify_gen_construct__ml_genenate_dynamic_construct_notag_direct_arg_8_p_0(LHSVar_12, ConsTag_22, RHSVars_14, ArgModes_15, Context_18, Stmts_20, STATE_VARIABLE_Info_0_100, STATE_VARIABLE_Info_101);
              *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word LHSType_47;
          MR_Word LHSLval_48;
          MR_Word ModuleInfo_49;
          MR_Word LHS_MLDS_Type_50;
          MR_Word ConstRval_52;
          MR_Word GroundTerm_90;
          MR_Word Stmt_91;
          MR_Word Var_114;

          {
            Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[9]));
            MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_1));
            MR_hl_field(MR_mktag(0), Var_114, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_114, 3) = ((MR_Box) (RHSVars_14));
            MR_hl_field(MR_mktag(0), Var_114, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_114, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "constant has arguments");
          ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_100, LHSVar_12, &LHSType_47);
          ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_100, LHSVar_12, &LHSLval_48);
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_100, &ModuleInfo_49);
          LHS_MLDS_Type_50 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_49, LHSType_47);
          switch (MR_tag((MR_Word) ConsTag_22)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ConstRval_52 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_6[1]), LHSType_47, LHS_MLDS_Type_50);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntTag_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsTag_22, (MR_Integer) 0))));

                ConstRval_52 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(IntTag_51, LHSType_47, LHS_MLDS_Type_50);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Float Float_53 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_22, (MR_Integer) 0)));
                MR_Word Var_135;

                {
                  Var_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                  MR_hl_field(MR_mktag(3), Var_135, 1) = MR_box_float(Float_53);
                }
                {
                  ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_135));
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_String String_54 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                    MR_Word Var_134;

                    {
                      Var_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_134, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                      MR_hl_field(MR_mktag(3), Var_134, 1) = ((MR_Box) (String_54));
                    }
                    {
                      ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_134));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ForeignLang_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                    MR_String ForeignTag_56 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                    MR_Word Var_133;

                    {
                      Var_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                      MR_hl_field(MR_mktag(3), Var_133, 1) = ((MR_Box) (ForeignLang_55));
                      MR_hl_field(MR_mktag(3), Var_133, 2) = ((MR_Box) (ForeignTag_56));
                      MR_hl_field(MR_mktag(3), Var_133, 3) = ((MR_Box) (LHS_MLDS_Type_50));
                    }
                    {
                      ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_133));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word LocalSectag_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                    MR_Unsigned PrimSec_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_58, (MR_Integer) 1))));
                    MR_Word Var_129;
                    MR_Word Var_130;

                    {
                      Var_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), Var_130, 1) = ((MR_Box) (PrimSec_61));
                    }
                    {
                      Var_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_129, 1) = ((MR_Box) (Var_130));
                    }
                    {
                      ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (LHS_MLDS_Type_50));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_129));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Integer ConstNum_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                    MR_Word ConstStructMap_65;
                    MR_Word GroundTerm0_66;
                    MR_Box conv0_GroundTerm0_66;

                    ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_100, &ConstStructMap_65);
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_65, ConstNum_63, &conv0_GroundTerm0_66);
                    GroundTerm0_66 = ((MR_Word) (conv0_GroundTerm0_66));
                    ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_66, (MR_Integer) 0))));
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Integer ConstNum_160 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                    MR_Word ConstStructMap_161;
                    MR_Word GroundTerm0_162;
                    MR_Box conv1_GroundTerm0_162;

                    ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_100, &ConstStructMap_161);
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_161, ConstNum_160, &conv1_GroundTerm0_162);
                    GroundTerm0_162 = ((MR_Word) (conv1_GroundTerm0_162));
                    ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_162, (MR_Integer) 0))));
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Integer ConstNum_169 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                    MR_Word ConstStructMap_170;
                    MR_Word GroundTerm0_171;
                    MR_Box conv2_GroundTerm0_171;

                    ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_100, &ConstStructMap_170);
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_170, ConstNum_169, &conv2_GroundTerm0_171);
                    GroundTerm0_171 = ((MR_Word) (conv2_GroundTerm0_171));
                    ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_171, (MR_Integer) 0))));
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word ModuleName0_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                    MR_String TypeName_70 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                    MR_Integer TypeArity_71 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                    MR_Word ModuleName_72;
                    MR_Word MLDS_Module_73;
                    MR_Word RttiTypeCtor_74;
                    MR_Word RttiId_75;
                    MR_Word Const_76;
                    MR_Word Var_128;

                    ModuleName_72 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_69);
                    MLDS_Module_73 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_72);
                    {
                      RttiTypeCtor_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 0) = ((MR_Box) (ModuleName_72));
                      MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 1) = ((MR_Box) (TypeName_70));
                      MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 2) = ((MR_Box) (TypeArity_71));
                    }
                    {
                      RttiId_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), RttiId_75, 0) = ((MR_Box) (RttiTypeCtor_74));
                      MR_hl_field(MR_mktag(0), RttiId_75, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                    }
                    {
                      Const_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Const_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                      MR_hl_field(MR_mktag(3), Const_76, 1) = ((MR_Box) (MLDS_Module_73));
                      MR_hl_field(MR_mktag(3), Const_76, 2) = ((MR_Box) (RttiId_75));
                    }
                    {
                      Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_128, 1) = ((MR_Box) (Const_76));
                    }
                    {
                      ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (LHS_MLDS_Type_50));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_128));
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word ClassId_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                    MR_String Instance_78 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                    MR_Word TCName_79;
                    MR_Word Var_125;
                    MR_Word Var_126;
                    MR_Word ModuleName_138 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                    MR_Word MLDS_Module_139;
                    MR_Word RttiId_140;
                    MR_Word Const_141;

                    MLDS_Module_139 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_138);
                    TCName_79 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_77);
                    {
                      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (ModuleName_138));
                      MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Instance_78));
                    }
                    {
                      RttiId_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), RttiId_140, 0) = ((MR_Box) (TCName_79));
                      MR_hl_field(MR_mktag(1), RttiId_140, 1) = ((MR_Box) (Var_125));
                    }
                    {
                      Const_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Const_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                      MR_hl_field(MR_mktag(3), Const_141, 1) = ((MR_Box) (MLDS_Module_139));
                      MR_hl_field(MR_mktag(3), Const_141, 2) = ((MR_Box) (RttiId_140));
                    }
                    {
                      Var_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_126, 1) = ((MR_Box) (Const_141));
                    }
                    {
                      ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (LHS_MLDS_Type_50));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_126));
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "deep_profiling_proc_layout_tag NYI");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    MR_Word PredId_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                    MR_Integer ProcId_83 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                    MR_Word PredLabel_84;
                    MR_Word PredModule_85;
                    MR_Word ProcLabel_86;
                    MR_Word QualProcLabel_87;
                    MR_Word Var_120;
                    MR_Word Var_122;
                    MR_Word Const_142;

                    {
                      Var_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (PredId_82));
                      MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (ProcId_83));
                    }
                    ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_49, Var_120, &PredLabel_84, &PredModule_85);
                    {
                      ProcLabel_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ProcLabel_86, 0) = ((MR_Box) (PredLabel_84));
                      MR_hl_field(MR_mktag(0), ProcLabel_86, 1) = ((MR_Box) (ProcId_83));
                    }
                    {
                      QualProcLabel_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), QualProcLabel_87, 0) = ((MR_Box) (PredModule_85));
                      MR_hl_field(MR_mktag(0), QualProcLabel_87, 1) = ((MR_Box) (ProcLabel_86));
                    }
                    {
                      Const_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Const_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
                      MR_hl_field(MR_mktag(3), Const_142, 1) = ((MR_Box) (QualProcLabel_87));
                      MR_hl_field(MR_mktag(3), Const_142, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_122, 1) = ((MR_Box) (Const_142));
                    }
                    {
                      ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (LHS_MLDS_Type_50));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_122));
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
              }
              break;
          }
          {
            GroundTerm_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), GroundTerm_90, 0) = ((MR_Box) (ConstRval_52));
            MR_hl_field(MR_mktag(0), GroundTerm_90, 1) = ((MR_Box) (LHSType_47));
            MR_hl_field(MR_mktag(0), GroundTerm_90, 2) = ((MR_Box) (LHS_MLDS_Type_50));
          }
          ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_12, GroundTerm_90, STATE_VARIABLE_Info_0_100, STATE_VARIABLE_Info_101);
          Stmt_91 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_48, ConstRval_52, Context_18);
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
              MR_Word LHSType_47;
              MR_Word LHSLval_48;
              MR_Word ModuleInfo_49;
              MR_Word LHS_MLDS_Type_50;
              MR_Word ConstRval_52;
              MR_Word GroundTerm_90;
              MR_Word Stmt_91;
              MR_Word Var_114;

              {
                Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[9]));
                MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_1));
                MR_hl_field(MR_mktag(0), Var_114, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_114, 3) = ((MR_Box) (RHSVars_14));
                MR_hl_field(MR_mktag(0), Var_114, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_114, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "constant has arguments");
              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_100, LHSVar_12, &LHSType_47);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_100, LHSVar_12, &LHSLval_48);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_100, &ModuleInfo_49);
              LHS_MLDS_Type_50 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_49, LHSType_47);
              switch (MR_tag((MR_Word) ConsTag_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ConstRval_52 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_6[1]), LHSType_47, LHS_MLDS_Type_50);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word IntTag_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsTag_22, (MR_Integer) 0))));

                    ConstRval_52 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(IntTag_51, LHSType_47, LHS_MLDS_Type_50);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Float Float_53 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_22, (MR_Integer) 0)));
                    MR_Word Var_135;

                    {
                      Var_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                      MR_hl_field(MR_mktag(3), Var_135, 1) = MR_box_float(Float_53);
                    }
                    {
                      ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_135));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_String String_54 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word Var_134;

                        {
                          Var_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_134, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                          MR_hl_field(MR_mktag(3), Var_134, 1) = ((MR_Box) (String_54));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_134));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ForeignLang_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_String ForeignTag_56 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_Word Var_133;

                        {
                          Var_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                          MR_hl_field(MR_mktag(3), Var_133, 1) = ((MR_Box) (ForeignLang_55));
                          MR_hl_field(MR_mktag(3), Var_133, 2) = ((MR_Box) (ForeignTag_56));
                          MR_hl_field(MR_mktag(3), Var_133, 3) = ((MR_Box) (LHS_MLDS_Type_50));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_133));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word LocalSectag_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_Unsigned PrimSec_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_58, (MR_Integer) 1))));
                        MR_Word Var_129;
                        MR_Word Var_130;

                        {
                          Var_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), Var_130, 1) = ((MR_Box) (PrimSec_61));
                        }
                        {
                          Var_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_129, 1) = ((MR_Box) (Var_130));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (LHS_MLDS_Type_50));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_129));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Integer ConstNum_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word ConstStructMap_65;
                        MR_Word GroundTerm0_66;
                        MR_Box conv0_GroundTerm0_66;

                        ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_100, &ConstStructMap_65);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_65, ConstNum_63, &conv0_GroundTerm0_66);
                        GroundTerm0_66 = ((MR_Word) (conv0_GroundTerm0_66));
                        ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_66, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Integer ConstNum_160 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word ConstStructMap_161;
                        MR_Word GroundTerm0_162;
                        MR_Box conv1_GroundTerm0_162;

                        ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_100, &ConstStructMap_161);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_161, ConstNum_160, &conv1_GroundTerm0_162);
                        GroundTerm0_162 = ((MR_Word) (conv1_GroundTerm0_162));
                        ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_162, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Integer ConstNum_169 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word ConstStructMap_170;
                        MR_Word GroundTerm0_171;
                        MR_Box conv2_GroundTerm0_171;

                        ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_100, &ConstStructMap_170);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_170, ConstNum_169, &conv2_GroundTerm0_171);
                        GroundTerm0_171 = ((MR_Word) (conv2_GroundTerm0_171));
                        ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_171, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word ModuleName0_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_String TypeName_70 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_Integer TypeArity_71 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                        MR_Word ModuleName_72;
                        MR_Word MLDS_Module_73;
                        MR_Word RttiTypeCtor_74;
                        MR_Word RttiId_75;
                        MR_Word Const_76;
                        MR_Word Var_128;

                        ModuleName_72 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_69);
                        MLDS_Module_73 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_72);
                        {
                          RttiTypeCtor_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 0) = ((MR_Box) (ModuleName_72));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 1) = ((MR_Box) (TypeName_70));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 2) = ((MR_Box) (TypeArity_71));
                        }
                        {
                          RttiId_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), RttiId_75, 0) = ((MR_Box) (RttiTypeCtor_74));
                          MR_hl_field(MR_mktag(0), RttiId_75, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                        }
                        {
                          Const_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                          MR_hl_field(MR_mktag(3), Const_76, 1) = ((MR_Box) (MLDS_Module_73));
                          MR_hl_field(MR_mktag(3), Const_76, 2) = ((MR_Box) (RttiId_75));
                        }
                        {
                          Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_128, 1) = ((MR_Box) (Const_76));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (LHS_MLDS_Type_50));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_128));
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Word ClassId_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_String Instance_78 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                        MR_Word TCName_79;
                        MR_Word Var_125;
                        MR_Word Var_126;
                        MR_Word ModuleName_138 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word MLDS_Module_139;
                        MR_Word RttiId_140;
                        MR_Word Const_141;

                        MLDS_Module_139 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_138);
                        TCName_79 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_77);
                        {
                          Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (ModuleName_138));
                          MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Instance_78));
                        }
                        {
                          RttiId_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), RttiId_140, 0) = ((MR_Box) (TCName_79));
                          MR_hl_field(MR_mktag(1), RttiId_140, 1) = ((MR_Box) (Var_125));
                        }
                        {
                          Const_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                          MR_hl_field(MR_mktag(3), Const_141, 1) = ((MR_Box) (MLDS_Module_139));
                          MR_hl_field(MR_mktag(3), Const_141, 2) = ((MR_Box) (RttiId_140));
                        }
                        {
                          Var_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_126, 1) = ((MR_Box) (Const_141));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (LHS_MLDS_Type_50));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_126));
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "deep_profiling_proc_layout_tag NYI");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Word PredId_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Integer ProcId_83 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_Word PredLabel_84;
                        MR_Word PredModule_85;
                        MR_Word ProcLabel_86;
                        MR_Word QualProcLabel_87;
                        MR_Word Var_120;
                        MR_Word Var_122;
                        MR_Word Const_142;

                        {
                          Var_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (PredId_82));
                          MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (ProcId_83));
                        }
                        ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_49, Var_120, &PredLabel_84, &PredModule_85);
                        {
                          ProcLabel_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ProcLabel_86, 0) = ((MR_Box) (PredLabel_84));
                          MR_hl_field(MR_mktag(0), ProcLabel_86, 1) = ((MR_Box) (ProcId_83));
                        }
                        {
                          QualProcLabel_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), QualProcLabel_87, 0) = ((MR_Box) (PredModule_85));
                          MR_hl_field(MR_mktag(0), QualProcLabel_87, 1) = ((MR_Box) (ProcLabel_86));
                        }
                        {
                          Const_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
                          MR_hl_field(MR_mktag(3), Const_142, 1) = ((MR_Box) (QualProcLabel_87));
                          MR_hl_field(MR_mktag(3), Const_142, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_122, 1) = ((MR_Box) (Const_142));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (LHS_MLDS_Type_50));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_122));
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
                  }
                  break;
              }
              {
                GroundTerm_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_90, 0) = ((MR_Box) (ConstRval_52));
                MR_hl_field(MR_mktag(0), GroundTerm_90, 1) = ((MR_Box) (LHSType_47));
                MR_hl_field(MR_mktag(0), GroundTerm_90, 2) = ((MR_Box) (LHS_MLDS_Type_50));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_12, GroundTerm_90, STATE_VARIABLE_Info_0_100, STATE_VARIABLE_Info_101);
              Stmt_91 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_48, ConstRval_52, Context_18);
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
          case (MR_Integer) 11:
          case (MR_Integer) 12:
            ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_compound_12_p_0(LHSVar_12, ConsId_13, ConsTag_22, RHSVars_14, ArgModes_15, TakeAddr_16, HowToConstruct_17, Context_18, Defns_19, Stmts_20, STATE_VARIABLE_Info_0_100, STATE_VARIABLE_Info_101);
            break;
          case (MR_Integer) 13:
            {
              MR_Word LocalArgsTagInfo_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
              MR_Word Var_108;
              MR_Unsigned PrimSec_150;

              if ((LocalArgsTagInfo_95 == (MR_Word) ((MR_Unsigned) 0U)))
                PrimSec_150 = (MR_Unsigned) 0U;
              else
              {
                MR_Word LocalSectag_145 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArgsTagInfo_95, (MR_Integer) 1))));

                PrimSec_150 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_145, (MR_Integer) 1))));
              }
              {
                Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[7]));
                MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_3));
                MR_hl_field(MR_mktag(0), Var_108, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_108, 3) = ((MR_Box) (TakeAddr_16));
                MR_hl_field(MR_mktag(0), Var_108, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_108, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "taking address of non word-sized argument");
              ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_tagword_compound_10_p_0(ConsId_13, PrimSec_150, LHSVar_12, RHSVars_14, ArgModes_15, HowToConstruct_17, Context_18, Stmts_20, STATE_VARIABLE_Info_0_100, STATE_VARIABLE_Info_101);
              *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Var_103;

              {
                Var_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[7]));
                MR_hl_field(MR_mktag(0), Var_103, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_2));
                MR_hl_field(MR_mktag(0), Var_103, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_103, 3) = ((MR_Box) (TakeAddr_16));
                MR_hl_field(MR_mktag(0), Var_103, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_103, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "notag or direct_arg_tag: take_addr");
              ml_backend__ml_unify_gen_construct__ml_genenate_dynamic_construct_notag_direct_arg_8_p_0(LHSVar_12, ConsTag_22, RHSVars_14, ArgModes_15, Context_18, Stmts_20, STATE_VARIABLE_Info_0_100, STATE_VARIABLE_Info_101);
              *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word PredId_151 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
              MR_Integer ProcId_152 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));

              ml_backend__ml_closure_gen__ml_construct_closure_11_p_0(PredId_151, ProcId_152, LHSVar_12, RHSVars_14, ArgModes_15, HowToConstruct_17, Context_18, Defns_19, Stmts_20, STATE_VARIABLE_Info_0_100, STATE_VARIABLE_Info_101);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_genenate_dynamic_construct_notag_direct_arg_8_p_0(
  MR_Word LHSVar_9,
  MR_Word ConsTag_10,
  MR_Word RHSVars_11,
  MR_Word ArgModes_12,
  MR_Word Context_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  {
    MR_bool succeeded;
    MR_Word RHSVar_16;
    MR_Word ArgMode_17;
    MR_Word LHSType_18;
    MR_Word LHSLval_19;
    MR_Word ModuleInfo_20;
    MR_Word LHS_MLDS_Type_21;
    MR_Box conv1_RHSVar_16;
    MR_Box conv0_ArgMode_17;
    MR_Word RHSGroundTerm_22;

    hlds__goal_form__get_notag_or_direct_arg_arg_mode_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), RHSVars_11, ArgModes_12, &conv1_RHSVar_16, &conv0_ArgMode_17);
    RHSVar_16 = ((MR_Word) (conv1_RHSVar_16));
    ArgMode_17 = ((MR_Word) (conv0_ArgMode_17));
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_37, LHSVar_9, &LHSType_18);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_37, LHSVar_9, &LHSLval_19);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_37, &ModuleInfo_20);
    LHS_MLDS_Type_21 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_20, LHSType_18);
    succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_37, RHSVar_16, &RHSGroundTerm_22);
    if (succeeded)
    {
      MR_Word RHSRval0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSGroundTerm_22, (MR_Integer) 0))));
      MR_Word RHS_MLDS_Type_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSGroundTerm_22, (MR_Integer) 2))));
      MR_Word GlobalData0_26;
      MR_Word RHSRval_27;
      MR_Word GlobalData_28;
      MR_Word LHSRval_29;
      MR_Word LHSGroundTerm_30;
      MR_Word Stmt_31;
      MR_Word STATE_VARIABLE_Info_40_40;
      MR_Word TagRval_69;

      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_37, &GlobalData0_26);
      ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_20, Context_13, RHS_MLDS_Type_25, (MR_Integer) 2, RHSRval0_23, &RHSRval_27, GlobalData0_26, &GlobalData_28);
      ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_28, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_40_40);
      if ((ConsTag_10 == (MR_Word) ((MR_Unsigned) 8U)))
        TagRval_69 = RHSRval_27;
      else
      {
        MR_Word Ptag_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 1))));

        {
          TagRval_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), TagRval_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), TagRval_69, 1) = ((MR_Box) (Ptag_70));
          MR_hl_field(MR_mktag(3), TagRval_69, 2) = ((MR_Box) (RHSRval_27));
        }
      }
      {
        LHSRval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), LHSRval_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(3), LHSRval_29, 1) = ((MR_Box) (LHS_MLDS_Type_21));
        MR_hl_field(MR_mktag(3), LHSRval_29, 2) = ((MR_Box) (TagRval_69));
      }
      {
        LHSGroundTerm_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), LHSGroundTerm_30, 0) = ((MR_Box) (LHSRval_29));
        MR_hl_field(MR_mktag(0), LHSGroundTerm_30, 1) = ((MR_Box) (LHSType_18));
        MR_hl_field(MR_mktag(0), LHSGroundTerm_30, 2) = ((MR_Box) (LHS_MLDS_Type_21));
      }
      ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_9, LHSGroundTerm_30, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_38);
      Stmt_31 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_19, LHSRval_29, Context_13);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Stmts_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_31));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word RHSLval_32;
      MR_Word RHSType_33;
      MR_Word RHSRval_61;
      MR_Word Stmt_62;

      ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_37, RHSVar_16, &RHSLval_32);
      ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_37, RHSVar_16, &RHSType_33);
      if ((ConsTag_10 == (MR_Word) ((MR_Unsigned) 8U)))
      {
        MR_Word RHSRval0_52;

        {
          RHSRval0_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), RHSRval0_52, 0) = ((MR_Box) (RHSLval_32));
        }
        ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_20, RHSType_33, LHSType_18, (MR_Integer) 0, RHSRval0_52, &RHSRval_61);
      }
      else
      {
        MR_Word Ptag_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 1))));
        MR_Word Dir_35;
        MR_Word RHSRval1_36;
        MR_Word Var_49;
        MR_Word RHSRval0_55;

        ml_backend__ml_unify_gen_util__ml_compute_assign_direction_5_p_0(ModuleInfo_20, ArgMode_17, RHSType_33, LHSType_18, &Dir_35);
        switch (Dir_35) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_genenate_dynamic_construct_notag_direct_arg\'/8", (MR_String) "dummy unify");
                return;
              }
            }
            break;
          case (MR_Integer) 0:
            {
              RHSRval0_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), RHSRval0_55, 0) = ((MR_Box) (RHSLval_32));
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_genenate_dynamic_construct_notag_direct_arg\'/8", (MR_String) "left-to-right data flow in construction");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_45;
              MR_Word RHS_MLDS_Type_53;

              RHS_MLDS_Type_53 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_20, RHSType_33);
              {
                Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
                MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (RHS_MLDS_Type_53));
              }
              {
                RHSRval0_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RHSRval0_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), RHSRval0_55, 1) = ((MR_Box) (Var_45));
              }
            }
            break;
        }
        ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_20, RHSType_33, LHSType_18, (MR_Integer) 0, RHSRval0_55, &RHSRval1_36);
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (Ptag_34));
          MR_hl_field(MR_mktag(3), Var_49, 2) = ((MR_Box) (RHSRval1_36));
        }
        {
          RHSRval_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), RHSRval_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(3), RHSRval_61, 1) = ((MR_Box) (LHS_MLDS_Type_21));
          MR_hl_field(MR_mktag(3), RHSRval_61, 2) = ((MR_Box) (Var_49));
        }
      }
      Stmt_62 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_19, RHSRval_61, Context_13);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Stmts_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_62));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_tagword_compound_10_p_0_1(
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
ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_tagword_compound_10_p_0(
  MR_Word ConsId_11,
  MR_Unsigned PrimSec_12,
  MR_Word LHSVar_13,
  MR_Word ArgVars_14,
  MR_Word ArgModes_15,
  MR_Word HowToConstruct_16,
  MR_Word Context_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  {
    MR_Word ModuleInfo_20;
    MR_Word VarTypes_21;
    MR_Word LHSType_22;
    MR_Word ArgVarsTypesWidths_23;
    MR_Word Var_36;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_20);
    ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_34, &VarTypes_21);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_21, LHSVar_13, &LHSType_22);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_tagword_compound_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (VarTypes_21));
    }
    ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_1((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), ModuleInfo_20, Var_36, (MR_Integer) 0, LHSType_22, ConsId_11, ArgVars_14, &ArgVarsTypesWidths_23);
    switch (MR_tag((MR_Word) HowToConstruct_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HowToConstruct_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GroundTerm_31;
              MR_Word RevToOrRvals_52;
              MR_Word ToOrRvals_53;
              MR_Word TagwordRval_54;
              MR_Word LHS_MLDS_Type_55;
              MR_Word CastTagwordRval_56;
              MR_Word LHSLval_57;
              MR_Word Stmt_58;
              MR_Word Var_59;
              MR_Word Var_60;

              ml_backend__ml_unify_gen_construct__ml_gen_tagword_statically_4_p_0(STATE_VARIABLE_Info_0_34, ArgVarsTypesWidths_23, (MR_Word) ((MR_Unsigned) 0U), &RevToOrRvals_52);
              mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevToOrRvals_52, &ToOrRvals_53);
              {
                Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (PrimSec_12));
              }
              {
                Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (Var_60));
              }
              TagwordRval_54 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(Var_59, ToOrRvals_53);
              LHS_MLDS_Type_55 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_20, LHSType_22);
              {
                CastTagwordRval_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastTagwordRval_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), CastTagwordRval_56, 1) = ((MR_Box) (LHS_MLDS_Type_55));
                MR_hl_field(MR_mktag(3), CastTagwordRval_56, 2) = ((MR_Box) (TagwordRval_54));
              }
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_34, LHSVar_13, &LHSLval_57);
              Stmt_58 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_57, CastTagwordRval_56, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_58));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                GroundTerm_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_31, 0) = ((MR_Box) (CastTagwordRval_56));
                MR_hl_field(MR_mktag(0), GroundTerm_31, 1) = ((MR_Box) (LHSType_22));
                MR_hl_field(MR_mktag(0), GroundTerm_31, 2) = ((MR_Box) (LHS_MLDS_Type_55));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_13, GroundTerm_31, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word RevToOrRvals_24;
              MR_Word ToOrRvals_25;
              MR_Word TagwordRval_26;
              MR_Word LHS_MLDS_Type_27;
              MR_Word CastTagwordRval_28;
              MR_Word LHSLval_29;
              MR_Word Stmt_30;
              MR_Word Var_44;
              MR_Word Var_45;

              ml_backend__ml_unify_gen_construct__ml_gen_tagword_dynamically_5_p_0(STATE_VARIABLE_Info_0_34, ArgVarsTypesWidths_23, ArgModes_15, (MR_Word) ((MR_Unsigned) 0U), &RevToOrRvals_24);
              mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevToOrRvals_24, &ToOrRvals_25);
              {
                Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (PrimSec_12));
              }
              {
                Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Var_45));
              }
              TagwordRval_26 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(Var_44, ToOrRvals_25);
              LHS_MLDS_Type_27 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_20, LHSType_22);
              {
                CastTagwordRval_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastTagwordRval_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), CastTagwordRval_28, 1) = ((MR_Box) (LHS_MLDS_Type_27));
                MR_hl_field(MR_mktag(3), CastTagwordRval_28, 2) = ((MR_Box) (TagwordRval_26));
              }
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_34, LHSVar_13, &LHSLval_29);
              Stmt_30 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_29, CastTagwordRval_28, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_30));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_dynamic_construct_tagword_compound\'/10", (MR_String) "reuse_cell");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_dynamic_construct_tagword_compound\'/10", (MR_String) "construct_in_region");
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
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevOrRvals_4 = STATE_VARIABLE_RevOrRvals_0_3;
    else
    {
      MR_Word RHSVarTypeWidth_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word RHSVarsTypesWidths_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word RHSVar_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSVarTypeWidth_10, (MR_Integer) 0))));
      MR_Word ArgPosWidth_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSVarTypeWidth_10, (MR_Integer) 2))));
      MR_Word GroundTerm_16;
      MR_Word RHSRval_17;
      MR_Word STATE_VARIABLE_RevOrRvals_22_22;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_RevOrRvals_0_3;

      ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_p_0(Info_1, RHSVar_13, &GroundTerm_16);
      RHSRval_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_16, (MR_Integer) 0))));
      switch (MR_tag((MR_Word) ArgPosWidth_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_maybe_shift_and_accumulate_packed_arg_rval\'/4", (MR_String) "not apw_partial_shifted or apw_none_shifted");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_maybe_shift_and_accumulate_packed_arg_rval\'/4", (MR_String) "not apw_partial_shifted or apw_none_shifted");
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
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_maybe_shift_and_accumulate_packed_arg_rval\'/4", (MR_String) "not apw_partial_shifted or apw_none_shifted");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Shift_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_15, (MR_Integer) 3))));
                MR_Word Fill_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_15, (MR_Integer) 6))));
                MR_Word UnboxedRHSRval_35;
                MR_Word UnboxedRvalPrime_55;
                MR_Word RvalConst_62;

                succeeded = ((((MR_tag((MR_Word) RHSRval_17)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RHSRval_17, (MR_Integer) 0))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  UnboxedRvalPrime_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RHSRval_17, (MR_Integer) 2))));
                  UnboxedRHSRval_35 = UnboxedRvalPrime_55;
                }
                else
                  UnboxedRHSRval_35 = RHSRval_17;
                succeeded = ((((MR_tag((MR_Word) UnboxedRHSRval_35)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), UnboxedRHSRval_35, (MR_Integer) 0))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  RvalConst_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UnboxedRHSRval_35, (MR_Integer) 1))));
                  succeeded = ((((MR_tag((MR_Word) RvalConst_62)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalConst_62, (MR_Integer) 0))) == (MR_Integer) 20)));
                  if (succeeded)
                  {
                  }
                  if (!(succeeded))
                  {
                    MR_Word Var_66;

                    Var_66 = ml_backend__ml_unify_gen_util__ml_is_zero_const_1_f_0(RvalConst_62);
                    succeeded = (Var_66 == (MR_Integer) 1);
                  }
                }
                if (succeeded)
                  STATE_VARIABLE_RevOrRvals_22_22 = STATE_VARIABLE_RevOrRvals_0_3;
                else
                {
                  MR_Word UnboxedRval_64;
                  MR_Word ShiftedRval_65;
                  MR_Word UnboxedRvalPrime_71;

                  succeeded = ((((MR_tag((MR_Word) UnboxedRHSRval_35)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), UnboxedRHSRval_35, (MR_Integer) 0))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    UnboxedRvalPrime_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UnboxedRHSRval_35, (MR_Integer) 2))));
                    UnboxedRval_64 = UnboxedRvalPrime_71;
                  }
                  else
                    UnboxedRval_64 = UnboxedRHSRval_35;
                  ShiftedRval_65 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(UnboxedRval_64, Shift_31, Fill_34);
                  {
                    STATE_VARIABLE_RevOrRvals_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevOrRvals_22_22, 0) = ((MR_Box) (ShiftedRval_65));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevOrRvals_22_22, 1) = ((MR_Box) (STATE_VARIABLE_RevOrRvals_0_3));
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_RevOrRvals_22_22 = STATE_VARIABLE_RevOrRvals_0_3;
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = RHSVarsTypesWidths_11;
      next_value_of_STATE_VARIABLE_RevOrRvals_0_3 = STATE_VARIABLE_RevOrRvals_22_22;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_RevOrRvals_0_3 = next_value_of_STATE_VARIABLE_RevOrRvals_0_3;
      continue;
    }
    break;
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
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
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
      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
        MR_Word RHSVar_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 0))));
        MR_Word ConsArgType_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 1))));
        MR_Word ArgPosWidth_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 2))));
        MR_Word ModuleInfo_35;
        MR_Word RHSType_36;
        MR_Word RHSInsts_38;
        MR_Word RHSRval_40;
        MR_Word STATE_VARIABLE_RevOrRvals_47_47;
        MR_Word Var_44;
        MR_Word Var_49;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_RevOrRvals_0_4;

        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_35);
        ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_1, RHSVar_32, &RHSType_36);
        RHSInsts_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_29, (MR_Integer) 1))));
        check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_35, RHSInsts_38, RHSType_36, &Var_49);
        succeeded = ((MR_Integer) 0 == Var_49);
        if (succeeded)
        {
          Var_44 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_35, RHSType_36, ConsArgType_33);
          succeeded = (Var_44 == (MR_Integer) 1);
        }
        if (succeeded)
        {
          MR_Word RHSLval_39;

          ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_1, RHSVar_32, &RHSLval_39);
          {
            RHSRval_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), RHSRval_40, 0) = ((MR_Box) (RHSLval_39));
          }
        }
        else
          RHSRval_40 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[13]));
        ml_backend__ml_unify_gen_construct__ml_maybe_shift_and_accumulate_packed_arg_rval_4_p_0(ArgPosWidth_34, RHSRval_40, STATE_VARIABLE_RevOrRvals_0_4, &STATE_VARIABLE_RevOrRvals_47_47);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_50;
        next_value_of_HeadVar__3_3 = ArgModes_30;
        next_value_of_STATE_VARIABLE_RevOrRvals_0_4 = STATE_VARIABLE_RevOrRvals_47_47;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_RevOrRvals_0_4 = next_value_of_STATE_VARIABLE_RevOrRvals_0_4;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_maybe_shift_and_accumulate_packed_arg_rval_4_p_0(
  MR_Word ArgPosWidth_5,
  MR_Word RHSRval_6,
  MR_Word STATE_VARIABLE_RevOrRvals_0_28,
  MR_Word * STATE_VARIABLE_RevOrRvals_29)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ArgPosWidth_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_maybe_shift_and_accumulate_packed_arg_rval\'/4", (MR_String) "not apw_partial_shifted or apw_none_shifted");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_maybe_shift_and_accumulate_packed_arg_rval\'/4", (MR_String) "not apw_partial_shifted or apw_none_shifted");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_maybe_shift_and_accumulate_packed_arg_rval\'/4", (MR_String) "not apw_partial_shifted or apw_none_shifted");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Shift_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_5, (MR_Integer) 3))));
              MR_Word Fill_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_5, (MR_Integer) 6))));
              MR_Word UnboxedRHSRval_14;
              MR_Word UnboxedRvalPrime_36;
              MR_Word RvalConst_43;

              succeeded = ((((MR_tag((MR_Word) RHSRval_6)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RHSRval_6, (MR_Integer) 0))) == (MR_Integer) 2)));
              if (succeeded)
              {
                UnboxedRvalPrime_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RHSRval_6, (MR_Integer) 2))));
                UnboxedRHSRval_14 = UnboxedRvalPrime_36;
              }
              else
                UnboxedRHSRval_14 = RHSRval_6;
              succeeded = ((((MR_tag((MR_Word) UnboxedRHSRval_14)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), UnboxedRHSRval_14, (MR_Integer) 0))) == (MR_Integer) 1)));
              if (succeeded)
              {
                RvalConst_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UnboxedRHSRval_14, (MR_Integer) 1))));
                succeeded = ((((MR_tag((MR_Word) RvalConst_43)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalConst_43, (MR_Integer) 0))) == (MR_Integer) 20)));
                if (succeeded)
                {
                }
                if (!(succeeded))
                {
                  MR_Word Var_47;

                  Var_47 = ml_backend__ml_unify_gen_util__ml_is_zero_const_1_f_0(RvalConst_43);
                  succeeded = (Var_47 == (MR_Integer) 1);
                }
              }
              if (succeeded)
                *STATE_VARIABLE_RevOrRvals_29 = STATE_VARIABLE_RevOrRvals_0_28;
              else
              {
                MR_Word UnboxedRval_45;
                MR_Word ShiftedRval_46;
                MR_Word UnboxedRvalPrime_52;

                succeeded = ((((MR_tag((MR_Word) UnboxedRHSRval_14)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), UnboxedRHSRval_14, (MR_Integer) 0))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  UnboxedRvalPrime_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UnboxedRHSRval_14, (MR_Integer) 2))));
                  UnboxedRval_45 = UnboxedRvalPrime_52;
                }
                else
                  UnboxedRval_45 = UnboxedRHSRval_14;
                ShiftedRval_46 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(UnboxedRval_45, Shift_10, Fill_13);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_RevOrRvals_29 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ShiftedRval_46));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevOrRvals_0_28));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_RevOrRvals_29 = STATE_VARIABLE_RevOrRvals_0_28;
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_compound_12_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_dynamic_construct_compound__300__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_compound_12_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_dynamic_construct_compound__285__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_compound_12_p_0(
  MR_Word LHSVar_13,
  MR_Word ConsId_14,
  MR_Word ConsTag_15,
  MR_Word RHSVars_16,
  MR_Word ArgModes_17,
  MR_Word TakeAddr_18,
  MR_Word HowToConstruct_19,
  MR_Word Context_20,
  MR_Word * Defns_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_39,
  MR_Word * STATE_VARIABLE_Info_40)
{
  {
    MR_bool succeeded;
    MR_Word CompilationTarget_24;
    MR_Word UsesBaseClass_25;
    MR_Word MaybeCtorName_26;
    MR_Word Ptag_28;
    MR_Word ExplicitSectag_33;
    MR_Word ExtraRvalsTypesWidths_38;
    MR_Word Var_59;

    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_39, &CompilationTarget_24);
    UsesBaseClass_25 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ConsTag_15);
    switch (UsesBaseClass_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word CtorName_27;
          MR_Word ConsId_72;
          MR_Word ModuleName_73;
          MR_Word ConsSymName_66;
          MR_Integer ConsArity_67;
          MR_Word TypeCtor_68;
          MR_Word SymModuleName_69;

          succeeded = ((((MR_tag((MR_Word) ConsId_14)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_14, (MR_Integer) 0))) == (MR_Integer) 2)));
          if (succeeded)
          {
            ConsSymName_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_14, (MR_Integer) 1))));
            ConsArity_67 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_14, (MR_Integer) 2))));
            TypeCtor_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_14, (MR_Integer) 3))));
            succeeded = ((MR_tag((MR_Word) ConsSymName_66)) == (MR_Integer) 1);
            if (succeeded)
              SymModuleName_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsSymName_66, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_String ConsName_71;

            ConsName_71 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(CompilationTarget_24, TypeCtor_68, ConsSymName_66, ConsArity_67);
            {
              ConsId_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ConsId_72, 0) = ((MR_Box) (ConsName_71));
              MR_hl_field(MR_mktag(0), ConsId_72, 1) = ((MR_Box) (ConsArity_67));
            }
            ModuleName_73 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(SymModuleName_69);
          }
          else
          {
            MR_String ConsName_78;

            ConsName_78 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_14);
            {
              ConsId_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ConsId_72, 0) = ((MR_Box) (ConsName_78));
              MR_hl_field(MR_mktag(0), ConsId_72, 1) = ((MR_Box) ((MR_Integer) 0));
            }
            ModuleName_73 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_6[0]));
          }
          {
            CtorName_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CtorName_27, 0) = ((MR_Box) (ModuleName_73));
            MR_hl_field(MR_mktag(0), CtorName_27, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), CtorName_27, 2) = ((MR_Box) (ConsId_72));
          }
          {
            MaybeCtorName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeCtorName_26, 0) = ((MR_Box) (CtorName_27));
          }
        }
        break;
      case (MR_Integer) 1:
        MaybeCtorName_26 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
    switch (MR_tag((MR_Word) ConsTag_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Ptag_28 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
          ExplicitSectag_33 = (MR_Integer) 0;
          ExtraRvalsTypesWidths_38 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 11:
            {
              Ptag_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1))));
              ExplicitSectag_33 = (MR_Integer) 0;
              ExtraRvalsTypesWidths_38 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word RemoteSectag_29;
              MR_Unsigned SectagUint_30;
              MR_Word AddedBy_31;
              MR_Word UsesConstructors_32;

              Ptag_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1))));
              RemoteSectag_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 2))));
              SectagUint_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_29, (MR_Integer) 0))));
              AddedBy_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_29, (MR_Integer) 1))));
              UsesConstructors_32 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(CompilationTarget_24);
              switch (UsesConstructors_32) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word SectagRval0_34;
                    MR_Word SectagRval_36;
                    MR_Word Var_46;
                    MR_Word Var_50;
                    MR_Integer Var_51;
                    MR_Word Var_52;

                    {
                      Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[8]));
                      MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_compound_12_p_0_1));
                      MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (AddedBy_31));
                      MR_hl_field(MR_mktag(0), Var_46, 4) = ((MR_Box) ((MR_Integer) 0));
                    }
                    mercury__require__expect_3_p_0(Var_46, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_dynamic_construct_compound\'/12", (MR_String) "AddedBy != sectag_added_by_unify");
                    ExplicitSectag_33 = (MR_Integer) 1;
                    Var_51 = mercury__uint__cast_to_int_1_f_0(SectagUint_30);
                    {
                      Var_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_50, 0) = ((MR_Box) (Var_51));
                    }
                    {
                      SectagRval0_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SectagRval0_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), SectagRval0_34, 1) = ((MR_Box) (Var_50));
                    }
                    {
                      SectagRval_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SectagRval_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), SectagRval_36, 1) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(MR_mktag(3), SectagRval_36, 2) = ((MR_Box) (SectagRval0_34));
                    }
                    {
                      Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (SectagRval_36));
                      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 24U));
                      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_construct_scalar_common_1[7])));
                    }
                    {
                      ExtraRvalsTypesWidths_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ExtraRvalsTypesWidths_38, 0) = ((MR_Box) (Var_52));
                      MR_hl_field(MR_mktag(1), ExtraRvalsTypesWidths_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_42;

                    {
                      Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[8]));
                      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_compound_12_p_0_2));
                      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (AddedBy_31));
                      MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) ((MR_Integer) 1));
                    }
                    mercury__require__expect_3_p_0(Var_42, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_dynamic_construct_compound\'/12", (MR_String) "AddedBy != sectag_added_by_constructor");
                    ExplicitSectag_33 = (MR_Integer) 0;
                    ExtraRvalsTypesWidths_38 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (ConsId_14));
    }
    ml_backend__ml_unify_gen_construct__ml_gen_new_object_15_p_0(Var_59, MaybeCtorName_26, Ptag_28, ExplicitSectag_33, LHSVar_13, ExtraRvalsTypesWidths_38, RHSVars_16, ArgModes_17, TakeAddr_18, HowToConstruct_19, Context_20, Defns_21, Stmts_22, STATE_VARIABLE_Info_0_39, STATE_VARIABLE_Info_40);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_15_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object__388__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object__376__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_15_p_0(
  MR_Word MaybeConsId_16,
  MR_Word MaybeCtorName_17,
  MR_Word Ptag_18,
  MR_Word ExplicitSectag_19,
  MR_Word LHSVar_20,
  MR_Word ExtraRHSRvalsTypesWidths_21,
  MR_Word RHSVars_22,
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
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[5]));
        MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_new_object_15_p_0_1));
        MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (ExplicitSectag_19));
        MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_3_p_0(Var_37, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_new_object\'/15", (MR_String) "sectag on closure");
      mercury__list__length_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0), ExtraRHSRvalsTypesWidths_21, &NumExtras_32);
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
                MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[7]));
                MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_new_object_15_p_0_2));
                MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (TakeAddr_24));
                MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_44, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_new_object\'/15", (MR_String) "cannot take address of static object\'s field");
              ml_backend__ml_unify_gen_construct__ml_gen_new_object_statically_10_p_0(ConsIdOrClosure_31, MaybeCtorName_17, Ptag_18, LHSVar_20, ExtraRHSRvalsTypesWidths_21, RHSVars_22, Context_26, Stmts_28, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
              *Defns_27 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 1:
            {
              ml_backend__ml_unify_gen_construct__ml_gen_new_object_dynamically_13_p_0(ConsIdOrClosure_31, MaybeCtorName_17, Ptag_18, ExplicitSectag_19, LHSVar_20, ExtraRHSRvalsTypesWidths_21, RHSVars_22, ArgModes_23, TakeAddr_24, Context_26, Stmts_28, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
              *Defns_27 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CellToReuse_33 = (MR_Word) (MR_body((MR_Word) (HowToConstruct_25), (MR_Integer) 1));

          ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_15_p_0(ConsIdOrClosure_31, MaybeCtorName_17, Ptag_18, ExplicitSectag_19, LHSVar_20, ExtraRHSRvalsTypesWidths_21, RHSVars_22, ArgModes_23, TakeAddr_24, CellToReuse_33, Context_26, Defns_27, Stmts_28, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
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

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__585__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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

    ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__567__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_80);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_80));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_15_p_0(
  MR_Word ConsIdOrClosure_16,
  MR_Word MaybeCtorName_17,
  MR_Word Ptag_18,
  MR_Word ExplicitSectag_19,
  MR_Word LHSVar_20,
  MR_Word ExtraRHSRvalsTypesWidths_21,
  MR_Word RHSVars_22,
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
    MR_Word LHSType_41;
    MR_Word ConsTag_42;
    MR_Word PrimaryTag_43;
    MR_Word InitOffSet_44;
    MR_Word RHSVarRepns_45;
    MR_Word ReuseVarLval_46;
    MR_Word DifferentTags_48;
    MR_Word ReuseVarRval_49;
    MR_Word LHS_MLDS_Type_56;
    MR_Word CastReuseVarRval_57;
    MR_Word HeapTestStmt_58;
    MR_Word LHSLval_59;
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
      MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_15_p_0_1));
      MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (STATE_VARIABLE_Info_0_74));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0), Var_78, ReuseConsIds_31, &ReusePrimaryTags0_39);
    mercury__list__remove_dups_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0), ReusePrimaryTags0_39, &ReusePrimaryTags_40);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_74, LHSVar_20, &LHSType_41);
    ml_backend__ml_unify_gen_util__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_74, ConsId_33, &ConsTag_42);
    ml_backend__ml_unify_gen_util__ml_tag_ptag_and_initial_offset_3_p_0(ConsTag_42, &PrimaryTag_43, &InitOffSet_44);
    ml_backend__ml_unify_gen_util__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_74, LHSType_41, ConsId_33, InitOffSet_44, RHSVars_22, &RHSVarRepns_45);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_74, ReuseVar_30, &ReuseVarLval_46);
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[6]));
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
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_74, LHSType_41, &LHS_MLDS_Type_56);
    {
      CastReuseVarRval_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CastReuseVarRval_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), CastReuseVarRval_57, 1) = ((MR_Box) (LHS_MLDS_Type_56));
      MR_hl_field(MR_mktag(3), CastReuseVarRval_57, 2) = ((MR_Box) (ReuseVarRval_49));
    }
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_74, LHSVar_20, &LHSLval_59);
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_93, 1) = ((MR_Box) (LHSLval_59));
      MR_hl_field(MR_mktag(3), Var_93, 2) = ((MR_Box) (CastReuseVarRval_57));
    }
    {
      HeapTestStmt_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeapTestStmt_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), HeapTestStmt_58, 1) = ((MR_Box) (Var_93));
      MR_hl_field(MR_mktag(3), HeapTestStmt_58, 2) = ((MR_Box) (Context_26));
    }
    {
      MaybePtag_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePtag_60, 0) = ((MR_Box) (Ptag_18));
    }
    ml_backend__ml_unify_gen_construct__ml_gen_extra_arg_assigns_9_p_0(LHSLval_59, LHS_MLDS_Type_56, MaybePtag_60, (MR_Integer) 0, ExtraRHSRvalsTypesWidths_21, Context_26, &ExtraRvalStmts_61, STATE_VARIABLE_Info_0_74, &STATE_VARIABLE_Info_95_95);
    ml_backend__ml_unify_gen_util__decide_field_gen_6_p_0(STATE_VARIABLE_Info_95_95, LHSLval_59, LHSType_41, ConsId_33, ConsTag_42, &FieldGen_62);
    ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_1(FieldGen_62, RHSVarRepns_45, ArgModes_23, (MR_Integer) 1, Context_26, TakeAddr_24, &TakeAddrInfos_64, &FieldDefns_65, &FieldStmts_66, STATE_VARIABLE_Info_95_95, &STATE_VARIABLE_Info_96_96);
    ml_backend__ml_unify_gen_construct__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_64, LHSLval_59, LHS_MLDS_Type_56, MaybePtag_60, Context_26, STATE_VARIABLE_Info_96_96, &TakeAddrStmts_67);
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
    ml_backend__ml_unify_gen_construct__ml_gen_new_object_15_p_0(Var_100, MaybeCtorName_17, Ptag_18, ExplicitSectag_19, LHSVar_20, ExtraRHSRvalsTypesWidths_21, RHSVars_22, ArgModes_23, TakeAddr_24, (MR_Word) ((MR_Unsigned) 4U), Context_26, &DynamicDefns_70, &DynamicStmts_71, STATE_VARIABLE_Info_96_96, STATE_VARIABLE_Info_75);
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
      MR_hl_field(MR_mktag(2), Var_105, 0) = ((MR_Box) (LHSLval_59));
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
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeapTestStmt_58));
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

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_extra_arg_assigns__1039__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
      MR_Integer NextOffset_33;
      MR_Word FieldLval_34;
      MR_Word Var_37;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_47;

      ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_8, &HighLevelData_28);
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[5]));
        MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_extra_arg_assigns_9_p_0_1));
        MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (HighLevelData_28));
        MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_3_p_0(Var_37, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_extra_arg_assigns\'/9", (MR_String) "high-level data");
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_42, 0) = ((MR_Box) (CurOffset_4));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (Var_42));
      }
      {
        FieldId_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldId_29, 0) = ((MR_Box) (Var_41));
      }
      ExtraRval_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExtraRvalTypeWidth_22, (MR_Integer) 0))));
      ExtraType_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExtraRvalTypeWidth_22, (MR_Integer) 1))));
      ArgPosWidth_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExtraRvalTypeWidth_22, (MR_Integer) 2))));
      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_extra_arg_assigns_9_p_0_2));
        MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (ArgPosWidth_32));
      }
      mercury__require__expect_3_p_0(Var_43, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_extra_arg_assigns\'/9", (MR_String) "ArgPosWidth != apw_full(_)");
      NextOffset_33 = (MR_Integer) ((MR_Unsigned) CurOffset_4 + (MR_Unsigned) (MR_Integer) 1);
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_47, 0) = ((MR_Box) (VarLval_1));
      }
      {
        FieldLval_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldLval_34, 0) = ((MR_Box) (MaybePrimaryTag_3));
        MR_hl_field(MR_mktag(0), FieldLval_34, 1) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), FieldLval_34, 2) = ((MR_Box) (MLDS_VarType_2));
        MR_hl_field(MR_mktag(0), FieldLval_34, 3) = ((MR_Box) (FieldId_29));
        MR_hl_field(MR_mktag(0), FieldLval_34, 4) = ((MR_Box) (ExtraType_31));
      }
      Stmt_25 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_34, ExtraRval_30, Context_6);
      ml_backend__ml_unify_gen_construct__ml_gen_extra_arg_assigns_9_p_0(VarLval_1, MLDS_VarType_2, MaybePrimaryTag_3, NextOffset_33, ExtraRvalsTypesWidths_23, Context_6, &Stmts_26, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
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
    MR_Word conv0_LambdaHeadVar__2_49;

    conv0_LambdaHeadVar__2_49 = ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_statically__528__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_49));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_statically_10_p_0(
  MR_Word ConsIdOrClosure_11,
  MR_Word MaybeCtorName_12,
  MR_Word Ptag_13,
  MR_Word LHSVar_14,
  MR_Word ExtraRHSRvalsTypesWidths_15,
  MR_Word RHSVars_16,
  MR_Word Context_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42)
{
  {
    MR_Word LHSType_20;
    MR_Word RHSVarsTypesWidths_21;
    MR_Word ModuleInfo_23;
    MR_Word HighLevelData_24;
    MR_Word BoxedExtraRHSRvalsTypesWidths_25;
    MR_Word RHSRvalsTypesWidths_26;
    MR_Word UsesBaseClass_28;
    MR_Word ExtraRHSRvals_29;
    MR_Word Target_33;
    MR_Word LHS_MLDS_Type_34;
    MR_Word RHSGroundTerm_35;
    MR_Word LHSLval_36;
    MR_Word RHSRval_37;
    MR_Word AssignStmt_40;
    MR_Word STATE_VARIABLE_GlobalData_43_43;
    MR_Word STATE_VARIABLE_GlobalData_46_46;
    MR_Word STATE_VARIABLE_GlobalData_50_50;
    MR_Word STATE_VARIABLE_Info_51_51;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_41, LHSVar_14, &LHSType_20);
    ml_backend__ml_unify_gen_util__associate_maybe_cons_id_args_with_types_widths_5_p_0(STATE_VARIABLE_Info_0_41, LHSType_20, ConsIdOrClosure_11, RHSVars_16, &RHSVarsTypesWidths_21);
    ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_GlobalData_43_43);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_41, &ModuleInfo_23);
    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_41, &HighLevelData_24);
    switch (HighLevelData_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word STATE_VARIABLE_GlobalData_45_45;

          ml_backend__ml_unify_gen_construct__ml_gen_box_extra_const_rval_list_lld_6_p_0(ModuleInfo_23, Context_17, ExtraRHSRvalsTypesWidths_15, &BoxedExtraRHSRvalsTypesWidths_25, STATE_VARIABLE_GlobalData_43_43, &STATE_VARIABLE_GlobalData_45_45);
          ml_backend__ml_unify_gen_construct__ml_gen_box_const_rval_list_lld_6_p_0(STATE_VARIABLE_Info_0_41, Context_17, RHSVarsTypesWidths_21, &RHSRvalsTypesWidths_26, STATE_VARIABLE_GlobalData_45_45, &STATE_VARIABLE_GlobalData_46_46);
        }
        break;
      case (MR_Integer) 1:
        {
          ml_backend__ml_unify_gen_construct__ml_gen_box_or_unbox_const_rval_list_hld_6_p_0(STATE_VARIABLE_Info_0_41, Context_17, RHSVarsTypesWidths_21, &RHSRvalsTypesWidths_26, STATE_VARIABLE_GlobalData_43_43, &STATE_VARIABLE_GlobalData_46_46);
          BoxedExtraRHSRvalsTypesWidths_25 = ExtraRHSRvalsTypesWidths_15;
        }
        break;
    }
    if ((MaybeCtorName_12 == (MR_Word) ((MR_Unsigned) 0U)))
      UsesBaseClass_28 = (MR_Integer) 1;
    else
      UsesBaseClass_28 = (MR_Integer) 0;
    ExtraRHSRvals_29 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[6]), BoxedExtraRHSRvalsTypesWidths_25);
    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_41, &Target_33);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_41, LHSType_20, &LHS_MLDS_Type_34);
    ml_backend__ml_unify_gen_construct__construct_static_ground_term_14_p_0(ModuleInfo_23, Target_33, HighLevelData_24, Context_17, LHSType_20, LHS_MLDS_Type_34, ConsIdOrClosure_11, UsesBaseClass_28, Ptag_13, ExtraRHSRvals_29, RHSRvalsTypesWidths_26, &RHSGroundTerm_35, STATE_VARIABLE_GlobalData_46_46, &STATE_VARIABLE_GlobalData_50_50);
    ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(STATE_VARIABLE_GlobalData_50_50, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_51_51);
    ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_14, RHSGroundTerm_35, STATE_VARIABLE_Info_51_51, STATE_VARIABLE_Info_42);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(*STATE_VARIABLE_Info_42, LHSVar_14, &LHSLval_36);
    RHSRval_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSGroundTerm_35, (MR_Integer) 0))));
    AssignStmt_40 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_36, RHSRval_37, Context_17);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_18 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AssignStmt_40));
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

    conv0_LambdaHeadVar__2_44 = ml_backend__ml_unify_gen_construct__IntroducedFrom__func__construct_static_ground_term__1868__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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
    ExtraInits_29 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[5]), ExtraRvals_24);
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
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word RvalTypeWidth_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RvalsTypesWidths_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Rval_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_3, (MR_Integer) 0))));
      MR_Word ArgPosWidth_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_3, (MR_Integer) 2))));

      switch (MR_tag((MR_Word) ArgPosWidth_8)) {
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
            MR_Word HeadInit_14;
            MR_Word TailInits_15;

            {
              HeadInit_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), HeadInit_14, 0) = ((MR_Box) (Rval_6));
            }
            ml_backend__ml_unify_gen_construct__ml_pack_ground_term_args_into_word_inits_2_p_0(RvalsTypesWidths_4, &TailInits_15);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadInit_14));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailInits_15));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_8, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Shift_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_8, (MR_Integer) 3))));
                MR_Word Fill_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_8, (MR_Integer) 6))));
                MR_Word RevOrRvals0_22;
                MR_Word LeftOverRvalsTypesWidths_23;
                MR_Word OrAllRval_24;
                MR_Word HeadInit_36;
                MR_Word TailInits_37;
                MR_Word RevOrRvals_58;
                MR_Word OrRvals_59;
                MR_Word RvalConst_44;

                succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  RvalConst_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                  succeeded = ((((MR_tag((MR_Word) RvalConst_44)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalConst_44, (MR_Integer) 0))) == (MR_Integer) 20)));
                  if (succeeded)
                  {
                  }
                  if (!(succeeded))
                  {
                    MR_Word Var_48;

                    Var_48 = ml_backend__ml_unify_gen_util__ml_is_zero_const_1_f_0(RvalConst_44);
                    succeeded = (Var_48 == (MR_Integer) 1);
                  }
                }
                if (succeeded)
                  RevOrRvals0_22 = (MR_Word) ((MR_Unsigned) 0U);
                else
                {
                  MR_Word UnboxedRval_46;
                  MR_Word ShiftedRval_47;
                  MR_Word UnboxedRvalPrime_53;

                  succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    UnboxedRvalPrime_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                    UnboxedRval_46 = UnboxedRvalPrime_53;
                  }
                  else
                    UnboxedRval_46 = Rval_6;
                  ShiftedRval_47 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(UnboxedRval_46, Shift_18, Fill_21);
                  {
                    RevOrRvals0_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), RevOrRvals0_22, 0) = ((MR_Box) (ShiftedRval_47));
                    MR_hl_field(MR_mktag(1), RevOrRvals0_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                ml_backend__ml_unify_gen_construct__ml_pack_into_one_word_loop_4_p_0(RvalsTypesWidths_4, &LeftOverRvalsTypesWidths_23, RevOrRvals0_22, &RevOrRvals_58);
                mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevOrRvals_58, &OrRvals_59);
                if ((OrRvals_59 == (MR_Word) ((MR_Unsigned) 0U)))
                  OrAllRval_24 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[13]));
                else
                {
                  MR_Word HeadOrRval_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OrRvals_59, (MR_Integer) 0))));
                  MR_Word TailOrRvals_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OrRvals_59, (MR_Integer) 1))));
                  MR_Word OrAllRval_62;

                  OrAllRval_62 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(HeadOrRval_60, TailOrRvals_61);
                  {
                    OrAllRval_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), OrAllRval_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), OrAllRval_24, 1) = ((MR_Box) ((MR_Unsigned) 24U));
                    MR_hl_field(MR_mktag(3), OrAllRval_24, 2) = ((MR_Box) (OrAllRval_62));
                  }
                }
                {
                  HeadInit_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), HeadInit_36, 0) = ((MR_Box) (OrAllRval_24));
                }
                ml_backend__ml_unify_gen_construct__ml_pack_ground_term_args_into_word_inits_2_p_0(LeftOverRvalsTypesWidths_23, &TailInits_37);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadInit_36));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailInits_37));
                }
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_pack_ground_term_args_into_word_inits\'/2", (MR_String) "apw_partial_shifted or apw_none_shifted");
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
ml_backend__ml_unify_gen_construct__ml_pack_into_one_word_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevOrRvals_0_3,
  MR_Word * STATE_VARIABLE_RevOrRvals_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RevOrRvals_4 = STATE_VARIABLE_RevOrRvals_0_3;
    }
    else
    {
      MR_Word RvalTypeWidth_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RvalsTypesWidths_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Rval_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_8, (MR_Integer) 0))));
      MR_Word ArgPosWidth_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_8, (MR_Integer) 2))));

      switch (MR_tag((MR_Word) ArgPosWidth_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__2_2 = HeadVar__1_1;
            *STATE_VARIABLE_RevOrRvals_4 = STATE_VARIABLE_RevOrRvals_0_3;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *HeadVar__2_2 = HeadVar__1_1;
            *STATE_VARIABLE_RevOrRvals_4 = STATE_VARIABLE_RevOrRvals_0_3;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_14, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *HeadVar__2_2 = HeadVar__1_1;
                *STATE_VARIABLE_RevOrRvals_4 = STATE_VARIABLE_RevOrRvals_0_3;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Shift_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_14, (MR_Integer) 3))));
                MR_Word Fill_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_14, (MR_Integer) 6))));
                MR_Word STATE_VARIABLE_RevOrRvals_36_38;
                MR_Word RvalConst_45;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_STATE_VARIABLE_RevOrRvals_0_3;

                succeeded = ((((MR_tag((MR_Word) Rval_12)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 0))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  RvalConst_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1))));
                  succeeded = ((((MR_tag((MR_Word) RvalConst_45)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalConst_45, (MR_Integer) 0))) == (MR_Integer) 20)));
                  if (succeeded)
                  {
                  }
                  if (!(succeeded))
                  {
                    MR_Word Var_49;

                    Var_49 = ml_backend__ml_unify_gen_util__ml_is_zero_const_1_f_0(RvalConst_45);
                    succeeded = (Var_49 == (MR_Integer) 1);
                  }
                }
                if (succeeded)
                  STATE_VARIABLE_RevOrRvals_36_38 = STATE_VARIABLE_RevOrRvals_0_3;
                else
                {
                  MR_Word UnboxedRval_47;
                  MR_Word ShiftedRval_48;
                  MR_Word UnboxedRvalPrime_54;

                  succeeded = ((((MR_tag((MR_Word) Rval_12)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 0))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    UnboxedRvalPrime_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 2))));
                    UnboxedRval_47 = UnboxedRvalPrime_54;
                  }
                  else
                    UnboxedRval_47 = Rval_12;
                  ShiftedRval_48 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(UnboxedRval_47, Shift_28, Fill_31);
                  {
                    STATE_VARIABLE_RevOrRvals_36_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevOrRvals_36_38, 0) = ((MR_Box) (ShiftedRval_48));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevOrRvals_36_38, 1) = ((MR_Box) (STATE_VARIABLE_RevOrRvals_0_3));
                  }
                }
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = RvalsTypesWidths_9;
                next_value_of_STATE_VARIABLE_RevOrRvals_0_3 = STATE_VARIABLE_RevOrRvals_36_38;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                STATE_VARIABLE_RevOrRvals_0_3 = next_value_of_STATE_VARIABLE_RevOrRvals_0_3;
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word next_value_of_HeadVar__1_1 = RvalsTypesWidths_9;

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
        ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[11]));
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
            ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[11]));
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
                  ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[11]));
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
                    ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[11]));
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

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__766__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
      MR_Word ArgPosWidth_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RvalTypeWidth_14, (MR_Integer) 2))));
      MR_Word ArgWidth_22;
      MR_Word BoxedRval_23;
      MR_Word Var_26;
      MR_Word STATE_VARIABLE_GlobalData_30_30;

      ArgWidth_22 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_21);
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[2]));
        MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_box_extra_const_rval_list_lld_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (ArgWidth_22));
        MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) ((MR_Integer) 2));
      }
      mercury__require__expect_3_p_0(Var_26, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_box_extra_const_rval_list_lld\'/6", (MR_String) "ArgWidth != aw_full_word");
      ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_1, Context_2, MLDS_Type_20, ArgWidth_22, Rval_19, &BoxedRval_23, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_30_30);
      {
        BoxedRvalTypeWidth_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 0) = ((MR_Box) (BoxedRval_23));
        MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 1) = ((MR_Box) (MLDS_Type_20));
        MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 2) = ((MR_Box) (ArgPosWidth_21));
      }
      ml_backend__ml_unify_gen_construct__ml_gen_box_extra_const_rval_list_lld_6_p_0(ModuleInfo_1, Context_2, RvalsTypesWidths_15, &BoxedRvalsTypesWidths_17, STATE_VARIABLE_GlobalData_30_30, STATE_VARIABLE_GlobalData_6);
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
    MR_Word ArgWidth_27;
    MR_Word BoxedRval_28;
    MR_Word STATE_VARIABLE_GlobalData_31_31;

    ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_p_0(Info_1, ArgVar_19, &GroundTerm_22);
    Rval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_22, (MR_Integer) 0))));
    MLDS_Type_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_22, (MR_Integer) 2))));
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_26);
    ArgWidth_27 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_21);
    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_26, Context_2, MLDS_Type_25, ArgWidth_27, Rval_23, &BoxedRval_28, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_31_31);
    {
      BoxedRvalTypeWidth_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 0) = ((MR_Box) (BoxedRval_28));
      MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 2) = ((MR_Box) (ArgPosWidth_21));
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
    MR_Word GroundTerm_37;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_1, ArgVar_19, &ArgType_22);
    ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_p_0(Info_1, ArgVar_19, &GroundTerm_37);
    ArgRval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_37, (MR_Integer) 0))));
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_24);
    ConsWidth_26 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ConsArgPosWidth_21);
    ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_24, (MR_Integer) 1, ConsArgType_20, ConsWidth_26, &FieldType_27);
    switch (MR_tag((MR_Word) FieldType_27)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word MLDS_ArgType_51;

          MLDS_ArgType_51 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_24, ArgType_22);
          ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_24, Context_2, MLDS_ArgType_51, (MR_Integer) 2, ArgRval_23, &FieldRval_28, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_31_31);
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
      FieldRvalTypeWidth_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FieldRvalTypeWidth_16, 0) = ((MR_Box) (FieldRval_28));
      MR_hl_field(MR_mktag(0), FieldRvalTypeWidth_16, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), FieldRvalTypeWidth_16, 2) = ((MR_Box) (ConsArgPosWidth_21));
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
    MR_Word conv0_LambdaHeadVar__2_66;

    conv0_LambdaHeadVar__2_66 = ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_dynamically__468__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_66));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_dynamically_13_p_0(
  MR_Word ConsIdOrClosure_14,
  MR_Word MaybeCtorName_15,
  MR_Word Ptag_16,
  MR_Word ExplicitSectag_17,
  MR_Word LHSVar_18,
  MR_Word ExtraRHSRvalsTypesWidths_19,
  MR_Word RHSVars_20,
  MR_Word ArgModes_21,
  MR_Word TakeAddr_22,
  MR_Word Context_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_60,
  MR_Word * STATE_VARIABLE_Info_61)
{
  {
    MR_Word LHSType_26;
    MR_Word RHSVarsTypesWidths_27;
    MR_Word UseAtomicCells_28;
    MR_Word MayUseAtomic0_29;
    MR_Word TakeAddrInfos_31;
    MR_Word PackedRHSRvalsTypesWidths_32;
    MR_Word MayUseAtomic_33;
    MR_Word RHSRvalsTypesWidths_34;
    MR_Integer Size_35;
    MR_Word SizeInWordsRval_36;
    MR_Word ProfileMemory_37;
    MR_Word MaybeAllocId_48;
    MR_Word LHSLval_49;
    MR_Word ArgRvalsTypes_54;
    MR_Word LHS_MLDS_Type_55;
    MR_Word MakeNewObject_56;
    MR_Word MakeNewObjStmt_57;
    MR_Word MaybePtag_58;
    MR_Word TakeAddrStmts_59;
    MR_Word Var_62;
    MR_Word Var_67;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_60, LHSVar_18, &LHSType_26);
    ml_backend__ml_unify_gen_util__associate_maybe_cons_id_args_with_types_widths_5_p_0(STATE_VARIABLE_Info_0_60, LHSType_26, ConsIdOrClosure_14, RHSVars_20, &RHSVarsTypesWidths_27);
    ml_backend__ml_gen_info__ml_gen_info_get_use_atomic_cells_2_p_0(STATE_VARIABLE_Info_0_60, &UseAtomicCells_28);
    switch (UseAtomicCells_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MayUseAtomic0_29 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        MayUseAtomic0_29 = (MR_Integer) 0;
        break;
    }
    ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0(STATE_VARIABLE_Info_0_60, RHSVarsTypesWidths_27, ArgModes_21, (MR_Integer) 1, TakeAddr_22, &TakeAddrInfos_31, &PackedRHSRvalsTypesWidths_32, MayUseAtomic0_29, &MayUseAtomic_33);
    RHSRvalsTypesWidths_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0), ExtraRHSRvalsTypesWidths_19, PackedRHSRvalsTypesWidths_32);
    mercury__list__length_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0), RHSRvalsTypesWidths_34, &Size_35);
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_62, 0) = ((MR_Box) (Size_35));
    }
    {
      SizeInWordsRval_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SizeInWordsRval_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), SizeInWordsRval_36, 1) = ((MR_Box) (Var_62));
    }
    ml_backend__ml_gen_info__ml_gen_info_get_profile_memory_2_p_0(STATE_VARIABLE_Info_0_60, &ProfileMemory_37);
    switch (ProfileMemory_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeAllocId_48 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_61 = STATE_VARIABLE_Info_0_60;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleInfo_38;
          MR_Word PredProcId_39;
          MR_Word ProcLabel_41;
          MR_Word GlobalData0_42;
          MR_Word MaybeConsId_44;
          MR_Word AllocId_46;
          MR_Word GlobalData_47;
          MR_Word Var_63;
          MR_Word _Module_40;

          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_60, &ModuleInfo_38);
          ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_60, &PredProcId_39);
          ml_backend__ml_code_util__ml_gen_proc_label_4_p_0(ModuleInfo_38, PredProcId_39, &_Module_40, &ProcLabel_41);
          ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_60, &GlobalData0_42);
          if (((MR_tag((MR_Word) ConsIdOrClosure_14)) == (MR_Integer) 1))
            MaybeConsId_44 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word ConsId_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsIdOrClosure_14, (MR_Integer) 0))));

            {
              MaybeConsId_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeConsId_44, 0) = ((MR_Box) (ConsId_43));
            }
          }
          Var_63 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (ProcLabel_41)));
          ml_backend__ml_global_data__ml_gen_alloc_site_7_p_0(Var_63, MaybeConsId_44, Size_35, Context_23, &AllocId_46, GlobalData0_42, &GlobalData_47);
          ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_47, STATE_VARIABLE_Info_0_60, STATE_VARIABLE_Info_61);
          {
            MaybeAllocId_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeAllocId_48, 0) = ((MR_Box) (AllocId_46));
          }
        }
        break;
    }
    ml_backend__ml_code_util__ml_gen_var_3_p_0(*STATE_VARIABLE_Info_61, LHSVar_18, &LHSLval_49);
    ArgRvalsTypes_54 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[4]), RHSRvalsTypesWidths_34);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(*STATE_VARIABLE_Info_61, LHSType_26, &LHS_MLDS_Type_55);
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (SizeInWordsRval_36));
    }
    {
      MakeNewObject_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MakeNewObject_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), MakeNewObject_56, 1) = ((MR_Box) (LHSLval_49));
      MR_hl_field(MR_mktag(3), MakeNewObject_56, 2) = ((MR_Box) (Ptag_16));
      MR_hl_field(MR_mktag(3), MakeNewObject_56, 3) = ((MR_Box) (ExplicitSectag_17));
      MR_hl_field(MR_mktag(3), MakeNewObject_56, 4) = ((MR_Box) (LHS_MLDS_Type_55));
      MR_hl_field(MR_mktag(3), MakeNewObject_56, 5) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(3), MakeNewObject_56, 6) = ((MR_Box) (MaybeCtorName_15));
      MR_hl_field(MR_mktag(3), MakeNewObject_56, 7) = ((MR_Box) (ArgRvalsTypes_54));
      MR_hl_field(MR_mktag(3), MakeNewObject_56, 8) = ((MR_Box) (MayUseAtomic_33));
      MR_hl_field(MR_mktag(3), MakeNewObject_56, 9) = ((MR_Box) (MaybeAllocId_48));
    }
    {
      MakeNewObjStmt_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_57, 1) = ((MR_Box) (MakeNewObject_56));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_57, 2) = ((MR_Box) (Context_23));
    }
    {
      MaybePtag_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePtag_58, 0) = ((MR_Box) (Ptag_16));
    }
    ml_backend__ml_unify_gen_construct__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_31, LHSLval_49, LHS_MLDS_Type_55, MaybePtag_58, Context_23, *STATE_VARIABLE_Info_61, &TakeAddrStmts_59);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_24 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MakeNewObjStmt_57));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TakeAddrStmts_59));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__ml_not_taking_addr_of_cur_arg_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__ml_not_taking_addr_of_cur_arg_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__ml_not_taking_addr_of_cur_arg_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0(
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
  {
    MR_bool succeeded;

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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_args\'/9", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_182 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_args\'/9", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word ArgMode_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgModes_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word RHSVar_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_182, (MR_Integer) 0))));
        MR_Word ConsArgType_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_182, (MR_Integer) 1))));
        MR_Word ArgPosWidth_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_182, (MR_Integer) 2))));
        MR_Word HeadTakeAddrInfos_70;
        MR_Word HeadRHSRvalsTypesWidths_72;
        MR_Word LeftOverRHSVarsTypesWidths_87;
        MR_Word LeftOverArgModes_88;
        MR_Integer LeftOverArgNum_89;
        MR_Word TailTakeAddrInfos_112;
        MR_Word TailRHSRvalsTypesWidths_113;
        MR_Word STATE_VARIABLE_MayUseAtomic_134_134;
        MR_Word STATE_VARIABLE_TakeAddr_158_158;

        switch (MR_tag((MR_Word) ArgPosWidth_52)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_119;

              {
                Var_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[0]));
                MR_hl_field(MR_mktag(0), Var_119, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0_2));
                MR_hl_field(MR_mktag(0), Var_119, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_119, 3) = ((MR_Box) (STATE_VARIABLE_TakeAddr_0_5));
                MR_hl_field(MR_mktag(0), Var_119, 4) = ((MR_Box) (CurArgNum_4));
              }
              mercury__require__expect_3_p_0(Var_119, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_args\'/9", (MR_String) "taking address of not apw_full");
              HeadRHSRvalsTypesWidths_72 = (MR_Word) ((MR_Unsigned) 0U);
              HeadTakeAddrInfos_70 = (MR_Word) ((MR_Unsigned) 0U);
              LeftOverRHSVarsTypesWidths_87 = Var_181;
              LeftOverArgModes_88 = ArgModes_44;
              LeftOverArgNum_89 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) (MR_Integer) 1);
              STATE_VARIABLE_TakeAddr_158_158 = STATE_VARIABLE_TakeAddr_0_5;
              STATE_VARIABLE_MayUseAtomic_134_134 = STATE_VARIABLE_MayUseAtomic_0_8;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word RHSLval_58;
              MR_Word RHSType_59;
              MR_Word ModuleInfo_60;
              MR_Word HighLevelData_61;
              MR_Word ArgWidth_62;
              MR_Word BoxedRHSType_63;
              MR_Word RHS_MLDS_Type_64;

              ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_1, RHSVar_50, &RHSLval_58);
              ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_1, RHSVar_50, &RHSType_59);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_60);
              check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_60, RHSType_59, STATE_VARIABLE_MayUseAtomic_0_8, &STATE_VARIABLE_MayUseAtomic_134_134);
              ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_1, &HighLevelData_61);
              ArgWidth_62 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_52);
              ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_60, HighLevelData_61, ConsArgType_51, ArgWidth_62, &BoxedRHSType_63);
              RHS_MLDS_Type_64 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_60, BoxedRHSType_63);
              if (((MR_tag((MR_Word) ArgPosWidth_52)) == (MR_Integer) 2))
              {
                MR_Word DoubleWordKind_74 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_52, (MR_Integer) 2))));
                MR_Word SubstType_76;
                MR_Word RHSRvalA_77;
                MR_Word RHSRvalB_78;
                MR_Integer ArgOnly_79;
                MR_Word ArgOnlyOffsetA_80 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_52, (MR_Integer) 0))));
                MR_Word ArgOnlyOffsetB_81;
                MR_Integer Cell_82;
                MR_Word CellOffsetA_83 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_52, (MR_Integer) 1))));
                MR_Word CellOffsetB_84;
                MR_Word RHSRvalTypeWidthA_85;
                MR_Word RHSRvalTypeWidthB_86;
                MR_Word Var_135;
                MR_Integer Var_147;
                MR_Integer Var_149;
                MR_Word Var_151;
                MR_Word Var_152;
                MR_Word Var_153;
                MR_Word RHSRval_163;
                MR_Word Var_138;

                {
                  Var_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_135, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), Var_135, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_135, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_135, 3) = ((MR_Box) (STATE_VARIABLE_TakeAddr_0_5));
                  MR_hl_field(MR_mktag(0), Var_135, 4) = ((MR_Box) (CurArgNum_4));
                }
                mercury__require__expect_3_p_0(Var_135, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_args\'/9", (MR_String) "taking address of apw_double");
                ml_backend__ml_unify_gen_construct__ml_maybe_box_or_unbox_lval_8_p_0(ModuleInfo_60, ConsArgType_51, RHSType_59, BoxedRHSType_63, RHS_MLDS_Type_64, ArgMode_43, RHSLval_58, &RHSRval_163);
                succeeded = ((((MR_tag((MR_Word) RHSRval_163)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RHSRval_163, (MR_Integer) 0))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RHSRval_163, (MR_Integer) 1))));
                  succeeded = ((((MR_tag((MR_Word) Var_138)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_138, (MR_Integer) 0))) == (MR_Integer) 20)));
                  if (succeeded)
                  {
                  }
                }
                if (succeeded)
                {
                  SubstType_76 = (MR_Word) ((MR_Unsigned) 24U);
                  RHSRvalA_77 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[10]));
                  RHSRvalB_78 = RHSRvalA_77;
                }
                else
                {
                  SubstType_76 = (MR_Word) ((MR_Unsigned) 8U);
                  switch (DoubleWordKind_74) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          RHSRvalA_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RHSRvalA_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), RHSRvalA_77, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                          MR_hl_field(MR_mktag(3), RHSRvalA_77, 2) = ((MR_Box) (RHSRval_163));
                        }
                        {
                          RHSRvalB_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RHSRvalB_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), RHSRvalB_78, 1) = ((MR_Box) ((MR_Unsigned) 48U));
                          MR_hl_field(MR_mktag(3), RHSRvalB_78, 2) = ((MR_Box) (RHSRval_163));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          RHSRvalA_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RHSRvalA_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), RHSRvalA_77, 1) = ((MR_Box) ((MR_Unsigned) 52U));
                          MR_hl_field(MR_mktag(3), RHSRvalA_77, 2) = ((MR_Box) (RHSRval_163));
                        }
                        {
                          RHSRvalB_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RHSRvalB_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), RHSRvalB_78, 1) = ((MR_Box) ((MR_Unsigned) 56U));
                          MR_hl_field(MR_mktag(3), RHSRvalB_78, 2) = ((MR_Box) (RHSRval_163));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        {
                          RHSRvalA_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RHSRvalA_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), RHSRvalA_77, 1) = ((MR_Box) ((MR_Unsigned) 60U));
                          MR_hl_field(MR_mktag(3), RHSRvalA_77, 2) = ((MR_Box) (RHSRval_163));
                        }
                        {
                          RHSRvalB_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RHSRvalB_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), RHSRvalB_78, 1) = ((MR_Box) ((MR_Unsigned) 64U));
                          MR_hl_field(MR_mktag(3), RHSRvalB_78, 2) = ((MR_Box) (RHSRval_163));
                        }
                      }
                      break;
                  }
                }
                ArgOnly_79 = (MR_Integer) (ArgOnlyOffsetA_80);
                Var_147 = (MR_Integer) ((MR_Unsigned) ArgOnly_79 + (MR_Unsigned) (MR_Integer) 1);
                ArgOnlyOffsetB_81 = (MR_Word) (Var_147);
                Cell_82 = (MR_Integer) (CellOffsetA_83);
                Var_149 = (MR_Integer) ((MR_Unsigned) Cell_82 + (MR_Unsigned) (MR_Integer) 1);
                CellOffsetB_84 = (MR_Word) (Var_149);
                {
                  Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (ArgOnlyOffsetA_80));
                  MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) (CellOffsetA_83));
                }
                {
                  RHSRvalTypeWidthA_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RHSRvalTypeWidthA_85, 0) = ((MR_Box) (RHSRvalA_77));
                  MR_hl_field(MR_mktag(0), RHSRvalTypeWidthA_85, 1) = ((MR_Box) (SubstType_76));
                  MR_hl_field(MR_mktag(0), RHSRvalTypeWidthA_85, 2) = ((MR_Box) (Var_151));
                }
                {
                  Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (ArgOnlyOffsetB_81));
                  MR_hl_field(MR_mktag(1), Var_152, 1) = ((MR_Box) (CellOffsetB_84));
                }
                {
                  RHSRvalTypeWidthB_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RHSRvalTypeWidthB_86, 0) = ((MR_Box) (RHSRvalB_78));
                  MR_hl_field(MR_mktag(0), RHSRvalTypeWidthB_86, 1) = ((MR_Box) (SubstType_76));
                  MR_hl_field(MR_mktag(0), RHSRvalTypeWidthB_86, 2) = ((MR_Box) (Var_152));
                }
                {
                  Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) (RHSRvalTypeWidthB_86));
                  MR_hl_field(MR_mktag(1), Var_153, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  HeadRHSRvalsTypesWidths_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), HeadRHSRvalsTypesWidths_72, 0) = ((MR_Box) (RHSRvalTypeWidthA_85));
                  MR_hl_field(MR_mktag(1), HeadRHSRvalsTypesWidths_72, 1) = ((MR_Box) (Var_153));
                }
                HeadTakeAddrInfos_70 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_TakeAddr_158_158 = STATE_VARIABLE_TakeAddr_0_5;
              }
              else
              {
                MR_Word CellOffset_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgPosWidth_52, (MR_Integer) 1))));
                MR_Word RHSRval_67;
                MR_Word RHSRvalTypeWidth_71;
                MR_Word STATE_VARIABLE_TakeAddr_155_155;
                MR_Integer Var_180;

                succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TakeAddr_0_5)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_180 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_5, (MR_Integer) 0))));
                  STATE_VARIABLE_TakeAddr_155_155 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_5, (MR_Integer) 1))));
                  succeeded = (CurArgNum_4 == Var_180);
                }
                if (succeeded)
                {
                  MR_Word OrigMLDS_Type_68;
                  MR_Word TakeAddrInfo_69;
                  MR_Word Var_156;

                  STATE_VARIABLE_TakeAddr_158_158 = STATE_VARIABLE_TakeAddr_155_155;
                  {
                    Var_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
                    MR_hl_field(MR_mktag(3), Var_156, 1) = ((MR_Box) (RHS_MLDS_Type_64));
                  }
                  {
                    RHSRval_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), RHSRval_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), RHSRval_67, 1) = ((MR_Box) (Var_156));
                  }
                  OrigMLDS_Type_68 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_60, ConsArgType_51);
                  {
                    TakeAddrInfo_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), TakeAddrInfo_69, 0) = ((MR_Box) (RHSVar_50));
                    MR_hl_field(MR_mktag(0), TakeAddrInfo_69, 1) = ((MR_Box) (CellOffset_66));
                    MR_hl_field(MR_mktag(0), TakeAddrInfo_69, 2) = ((MR_Box) (OrigMLDS_Type_68));
                    MR_hl_field(MR_mktag(0), TakeAddrInfo_69, 3) = ((MR_Box) (RHS_MLDS_Type_64));
                  }
                  {
                    HeadTakeAddrInfos_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), HeadTakeAddrInfos_70, 0) = ((MR_Box) (TakeAddrInfo_69));
                    MR_hl_field(MR_mktag(1), HeadTakeAddrInfos_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                else
                {
                  ml_backend__ml_unify_gen_construct__ml_maybe_box_or_unbox_lval_8_p_0(ModuleInfo_60, ConsArgType_51, RHSType_59, BoxedRHSType_63, RHS_MLDS_Type_64, ArgMode_43, RHSLval_58, &RHSRval_67);
                  HeadTakeAddrInfos_70 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_TakeAddr_158_158 = STATE_VARIABLE_TakeAddr_0_5;
                }
                {
                  RHSRvalTypeWidth_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RHSRvalTypeWidth_71, 0) = ((MR_Box) (RHSRval_67));
                  MR_hl_field(MR_mktag(0), RHSRvalTypeWidth_71, 1) = ((MR_Box) (RHS_MLDS_Type_64));
                  MR_hl_field(MR_mktag(0), RHSRvalTypeWidth_71, 2) = ((MR_Box) (ArgPosWidth_52));
                }
                {
                  HeadRHSRvalsTypesWidths_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), HeadRHSRvalsTypesWidths_72, 0) = ((MR_Box) (RHSRvalTypeWidth_71));
                  MR_hl_field(MR_mktag(1), HeadRHSRvalsTypesWidths_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              LeftOverRHSVarsTypesWidths_87 = Var_181;
              LeftOverArgModes_88 = ArgModes_44;
              LeftOverArgNum_89 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Shift_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 3))));
                  MR_Word NumBits_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 4))));
                  MR_Word Fill_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 6))));
                  MR_Word RevToOrRvals0_94;
                  MR_Word RevPackedRHSVars0_95;
                  MR_Word RevToOrRvals_96;
                  MR_Word RevPackedRHSVars_97;
                  MR_Word PackedRHSVars_98;
                  MR_Word PackedArgsMap_99;
                  MR_Word WordRval_101;
                  MR_Word CastWordRval_103;
                  MR_Word Var_123;
                  MR_Word Var_127;
                  MR_Integer Var_129;
                  MR_Word Var_132;
                  MR_Word RHSLval_164;
                  MR_Word ModuleInfo_165;
                  MR_Word HighLevelData_166;
                  MR_Word ArgWidth_167;
                  MR_Word BoxedRHSType_168;
                  MR_Word RHS_MLDS_Type_169;
                  MR_Word CellOffset_170 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 2))));
                  MR_Word RHSRval_171;
                  MR_Word RHSRvalTypeWidth_172;
                  MR_Word ArgOnlyOffset_173 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 1))));
                  MR_Word OldWordRval_100;
                  MR_Box conv0_OldWordRval_100;

                  {
                    Var_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_123, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[0]));
                    MR_hl_field(MR_mktag(0), Var_123, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0_3));
                    MR_hl_field(MR_mktag(0), Var_123, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_123, 3) = ((MR_Box) (STATE_VARIABLE_TakeAddr_0_5));
                    MR_hl_field(MR_mktag(0), Var_123, 4) = ((MR_Box) (CurArgNum_4));
                  }
                  mercury__require__expect_3_p_0(Var_123, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_args\'/9", (MR_String) "taking address of apw_partial_first");
                  ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_1, RHSVar_50, &RHSLval_164);
                  {
                    RHSRval_171 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), RHSRval_171, 0) = ((MR_Box) (RHSLval_164));
                  }
                  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_165);
                  ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_1, &HighLevelData_166);
                  ArgWidth_167 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_52);
                  ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_165, HighLevelData_166, ConsArgType_51, ArgWidth_167, &BoxedRHSType_168);
                  RHS_MLDS_Type_169 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_165, BoxedRHSType_168);
                  ml_backend__ml_unify_gen_construct__ml_maybe_shift_and_accumulate_or_rval_5_p_0(RHSRval_171, Shift_90, Fill_93, (MR_Word) ((MR_Unsigned) 0U), &RevToOrRvals0_94);
                  {
                    Var_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_127, 0) = ((MR_Box) (RHSVar_50));
                    MR_hl_field(MR_mktag(0), Var_127, 1) = ((MR_Box) (Shift_90));
                    MR_hl_field(MR_mktag(0), Var_127, 2) = ((MR_Box) (NumBits_91));
                    MR_hl_field(MR_mktag(0), Var_127, 3) = ((MR_Box) (Fill_93));
                  }
                  {
                    RevPackedRHSVars0_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), RevPackedRHSVars0_95, 0) = ((MR_Box) (Var_127));
                    MR_hl_field(MR_mktag(1), RevPackedRHSVars0_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  Var_129 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) (MR_Integer) 1);
                  ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_packed_word_12_p_0(Info_1, Var_181, &LeftOverRHSVarsTypesWidths_87, ArgModes_44, &LeftOverArgModes_88, Var_129, &LeftOverArgNum_89, STATE_VARIABLE_TakeAddr_0_5, RevToOrRvals0_94, &RevToOrRvals_96, RevPackedRHSVars0_95, &RevPackedRHSVars_97);
                  mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0), RevPackedRHSVars_97, &PackedRHSVars_98);
                  ml_backend__ml_gen_info__ml_gen_info_get_packed_args_map_2_p_0(Info_1, &PackedArgsMap_99);
                  succeeded = mercury__map__search_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[3]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), PackedArgsMap_99, ((MR_Box) (PackedRHSVars_98)), &conv0_OldWordRval_100);
                  if (succeeded)
                  {
                    OldWordRval_100 = ((MR_Word) (conv0_OldWordRval_100));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                    WordRval_101 = OldWordRval_100;
                  else
                  {
                    MR_Word ToOrRvals_102;

                    mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevToOrRvals_96, &ToOrRvals_102);
                    WordRval_101 = ml_backend__ml_unify_gen_util__ml_bitwise_or_rvals_1_f_0(ToOrRvals_102);
                  }
                  {
                    CastWordRval_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), CastWordRval_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), CastWordRval_103, 1) = ((MR_Box) ((MR_Unsigned) 24U));
                    MR_hl_field(MR_mktag(3), CastWordRval_103, 2) = ((MR_Box) (WordRval_101));
                  }
                  {
                    Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (ArgOnlyOffset_173));
                    MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (CellOffset_170));
                  }
                  {
                    RHSRvalTypeWidth_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), RHSRvalTypeWidth_172, 0) = ((MR_Box) (CastWordRval_103));
                    MR_hl_field(MR_mktag(0), RHSRvalTypeWidth_172, 1) = ((MR_Box) (RHS_MLDS_Type_169));
                    MR_hl_field(MR_mktag(0), RHSRvalTypeWidth_172, 2) = ((MR_Box) (Var_132));
                  }
                  {
                    HeadRHSRvalsTypesWidths_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), HeadRHSRvalsTypesWidths_72, 0) = ((MR_Box) (RHSRvalTypeWidth_172));
                    MR_hl_field(MR_mktag(1), HeadRHSRvalsTypesWidths_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  HeadTakeAddrInfos_70 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_TakeAddr_158_158 = STATE_VARIABLE_TakeAddr_0_5;
                  STATE_VARIABLE_MayUseAtomic_134_134 = STATE_VARIABLE_MayUseAtomic_0_8;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_args\'/9", (MR_String) "apw_partial_shifted or apw_none_shifted");
                    return;
                  }
                }
                break;
            }
            break;
        }
        ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0(Info_1, LeftOverRHSVarsTypesWidths_87, LeftOverArgModes_88, LeftOverArgNum_89, STATE_VARIABLE_TakeAddr_158_158, &TailTakeAddrInfos_112, &TailRHSRvalsTypesWidths_113, STATE_VARIABLE_MayUseAtomic_134_134, STATE_VARIABLE_MayUseAtomic_9);
        *HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0), HeadRHSRvalsTypesWidths_72, TailRHSRvalsTypesWidths_113);
        *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__type_ctor_info_take_addr_info_0), HeadTakeAddrInfos_70, TailTakeAddrInfos_112);
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_maybe_box_or_unbox_lval_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ConsArgType_10,
  MR_Word ArgType_11,
  MR_Word BoxedArgType_12,
  MR_Word MLDS_Type_13,
  MR_Word ArgMode_14,
  MR_Word Lval_15,
  MR_Word * Rval_16)
{
  {
    MR_bool succeeded;
    MR_Word RHSInsts_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_14, (MR_Integer) 1))));
    MR_Word Var_20;
    MR_Word Var_24;

    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_9, RHSInsts_18, ArgType_11, &Var_24);
    succeeded = ((MR_Integer) 0 == Var_24);
    if (succeeded)
    {
      Var_20 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_9, ArgType_11, ConsArgType_10);
      succeeded = (Var_20 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word Var_22;

      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_22, 0) = ((MR_Box) (Lval_15));
      }
      ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_9, ArgType_11, BoxedArgType_12, (MR_Integer) 0, Var_22, Rval_16);
    }
    else
    {
      MR_Word Var_23;

      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
        MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (MLDS_Type_13));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Rval_16 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_23));
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_packed_word_12_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__ml_not_taking_addr_of_cur_arg_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_packed_word_12_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__ml_not_taking_addr_of_cur_arg_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_packed_word_12_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Integer HeadVar__6_6,
  MR_Integer * HeadVar__7_7,
  MR_Word TakeAddr_8,
  MR_Word STATE_VARIABLE_RevToOrRvals_0_9,
  MR_Word * STATE_VARIABLE_RevToOrRvals_10,
  MR_Word STATE_VARIABLE_RevPackedArgVars_0_11,
  MR_Word * STATE_VARIABLE_RevPackedArgVars_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_RevPackedArgVars_12 = STATE_VARIABLE_RevPackedArgVars_0_11;
        *STATE_VARIABLE_RevToOrRvals_10 = STATE_VARIABLE_RevToOrRvals_0_9;
        *HeadVar__7_7 = HeadVar__6_6;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_packed_word\'/12", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_packed_word\'/12", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word ArgModes_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
        MR_Word RHSVar_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_116, (MR_Integer) 0))));
        MR_Word ArgPosWidth_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_116, (MR_Integer) 2))));

        switch (MR_tag((MR_Word) ArgPosWidth_72)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HeadVar__3_3 = HeadVar__2_2;
              *HeadVar__5_5 = HeadVar__4_4;
              *HeadVar__7_7 = HeadVar__6_6;
              *STATE_VARIABLE_RevToOrRvals_10 = STATE_VARIABLE_RevToOrRvals_0_9;
              *STATE_VARIABLE_RevPackedArgVars_12 = STATE_VARIABLE_RevPackedArgVars_0_11;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *HeadVar__3_3 = HeadVar__2_2;
              *HeadVar__5_5 = HeadVar__4_4;
              *HeadVar__7_7 = HeadVar__6_6;
              *STATE_VARIABLE_RevToOrRvals_10 = STATE_VARIABLE_RevToOrRvals_0_9;
              *STATE_VARIABLE_RevPackedArgVars_12 = STATE_VARIABLE_RevPackedArgVars_0_11;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_72, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *HeadVar__3_3 = HeadVar__2_2;
                  *HeadVar__5_5 = HeadVar__4_4;
                  *HeadVar__7_7 = HeadVar__6_6;
                  *STATE_VARIABLE_RevToOrRvals_10 = STATE_VARIABLE_RevToOrRvals_0_9;
                  *STATE_VARIABLE_RevPackedArgVars_12 = STATE_VARIABLE_RevPackedArgVars_0_11;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Shift_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_72, (MR_Integer) 3))));
                  MR_Word NumBits_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_72, (MR_Integer) 4))));
                  MR_Word Fill_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_72, (MR_Integer) 6))));
                  MR_Word RHSLval_90;
                  MR_Word RHSRval_91;
                  MR_Word PackedArgVar_92;
                  MR_Word Var_102;
                  MR_Word STATE_VARIABLE_RevToOrRvals_105_111;
                  MR_Word STATE_VARIABLE_RevPackedArgVars_106_112;
                  MR_Integer Var_113;
                  MR_Word next_value_of_HeadVar__2_2;
                  MR_Word next_value_of_HeadVar__4_4;
                  MR_Integer next_value_of_HeadVar__6_6;
                  MR_Word next_value_of_STATE_VARIABLE_RevToOrRvals_0_9;
                  MR_Word next_value_of_STATE_VARIABLE_RevPackedArgVars_0_11;

                  {
                    Var_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[0]));
                    MR_hl_field(MR_mktag(0), Var_102, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_packed_word_12_p_0_2));
                    MR_hl_field(MR_mktag(0), Var_102, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_102, 3) = ((MR_Box) (TakeAddr_8));
                    MR_hl_field(MR_mktag(0), Var_102, 4) = ((MR_Box) (HeadVar__6_6));
                  }
                  mercury__require__expect_3_p_0(Var_102, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_packed_word\'/12", (MR_String) "taking address of apw_partial_shifted");
                  ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_1, RHSVar_70, &RHSLval_90);
                  {
                    RHSRval_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), RHSRval_91, 0) = ((MR_Box) (RHSLval_90));
                  }
                  ml_backend__ml_unify_gen_construct__ml_maybe_shift_and_accumulate_or_rval_5_p_0(RHSRval_91, Shift_86, Fill_89, STATE_VARIABLE_RevToOrRvals_0_9, &STATE_VARIABLE_RevToOrRvals_105_111);
                  {
                    PackedArgVar_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), PackedArgVar_92, 0) = ((MR_Box) (RHSVar_70));
                    MR_hl_field(MR_mktag(0), PackedArgVar_92, 1) = ((MR_Box) (Shift_86));
                    MR_hl_field(MR_mktag(0), PackedArgVar_92, 2) = ((MR_Box) (NumBits_87));
                    MR_hl_field(MR_mktag(0), PackedArgVar_92, 3) = ((MR_Box) (Fill_89));
                  }
                  {
                    STATE_VARIABLE_RevPackedArgVars_106_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPackedArgVars_106_112, 0) = ((MR_Box) (PackedArgVar_92));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPackedArgVars_106_112, 1) = ((MR_Box) (STATE_VARIABLE_RevPackedArgVars_0_11));
                  }
                  Var_113 = (MR_Integer) ((MR_Unsigned) HeadVar__6_6 + (MR_Unsigned) (MR_Integer) 1);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__2_2 = Var_115;
                  next_value_of_HeadVar__4_4 = ArgModes_63;
                  next_value_of_HeadVar__6_6 = Var_113;
                  next_value_of_STATE_VARIABLE_RevToOrRvals_0_9 = STATE_VARIABLE_RevToOrRvals_105_111;
                  next_value_of_STATE_VARIABLE_RevPackedArgVars_0_11 = STATE_VARIABLE_RevPackedArgVars_106_112;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  HeadVar__4_4 = next_value_of_HeadVar__4_4;
                  HeadVar__6_6 = next_value_of_HeadVar__6_6;
                  STATE_VARIABLE_RevToOrRvals_0_9 = next_value_of_STATE_VARIABLE_RevToOrRvals_0_9;
                  STATE_VARIABLE_RevPackedArgVars_0_11 = next_value_of_STATE_VARIABLE_RevPackedArgVars_0_11;
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_99;
                  MR_Integer Var_107;
                  MR_Word next_value_of_HeadVar__2_2;
                  MR_Word next_value_of_HeadVar__4_4;
                  MR_Integer next_value_of_HeadVar__6_6;

                  {
                    Var_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_3[0]));
                    MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_packed_word_12_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_99, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_99, 3) = ((MR_Box) (TakeAddr_8));
                    MR_hl_field(MR_mktag(0), Var_99, 4) = ((MR_Box) (HeadVar__6_6));
                  }
                  mercury__require__expect_3_p_0(Var_99, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_packed_word\'/12", (MR_String) "taking address of apw_none_shifted");
                  Var_107 = (MR_Integer) ((MR_Unsigned) HeadVar__6_6 + (MR_Unsigned) (MR_Integer) 1);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__2_2 = Var_115;
                  next_value_of_HeadVar__4_4 = ArgModes_63;
                  next_value_of_HeadVar__6_6 = Var_107;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  HeadVar__4_4 = next_value_of_HeadVar__4_4;
                  HeadVar__6_6 = next_value_of_HeadVar__6_6;
                  continue;
                }
                break;
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_maybe_shift_and_accumulate_or_rval_5_p_0(
  MR_Word Rval_6,
  MR_Word Shift_7,
  MR_Word Fill_8,
  MR_Word STATE_VARIABLE_RevOrRvals_0_14,
  MR_Word * STATE_VARIABLE_RevOrRvals_15)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 1)));
    MR_Word RvalConst_10;

    if (succeeded)
    {
      RvalConst_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
      succeeded = ((((MR_tag((MR_Word) RvalConst_10)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalConst_10, (MR_Integer) 0))) == (MR_Integer) 20)));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        MR_Word Var_16;

        Var_16 = ml_backend__ml_unify_gen_util__ml_is_zero_const_1_f_0(RvalConst_10);
        succeeded = (Var_16 == (MR_Integer) 1);
      }
    }
    if (succeeded)
      *STATE_VARIABLE_RevOrRvals_15 = STATE_VARIABLE_RevOrRvals_0_14;
    else
    {
      MR_Word UnboxedRval_12;
      MR_Word ShiftedRval_13;
      MR_Word UnboxedRvalPrime_21;

      succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))) == (MR_Integer) 2)));
      if (succeeded)
      {
        UnboxedRvalPrime_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
        UnboxedRval_12 = UnboxedRvalPrime_21;
      }
      else
        UnboxedRval_12 = Rval_6;
      ShiftedRval_13 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(UnboxedRval_12, Shift_7, Fill_8);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_RevOrRvals_15 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ShiftedRval_13));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevOrRvals_0_14));
      }
    }
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
