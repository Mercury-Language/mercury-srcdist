/*
** Automatically generated from `ml_unify_gen_construct.m'
** by the Mercury compiler,
** version rotd-2019-07-28
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
#include "uint16.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
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

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_util__pti_arg_type_and_width_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen_construct__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

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

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__enum_functor_desc_use_packed_word_map_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__enum_functor_desc_use_packed_word_map_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__enum_value_ordered_use_packed_word_map_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__enum_name_ordered_use_packed_word_map_0[2];

static const MR_Integer ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__functor_number_map_use_packed_word_map_0[2];

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__count_matching_bitfield__2539__1_2_p_0(
  MR_Word BitfieldA_14,
  MR_Word BitfieldB_16);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__construct_static_ground_term__1961__1_1_f_0(
  MR_Word LambdaHeadVar__1_43);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_const_static_args_widths__1756__1_1_f_0(
  MR_Word LambdaHeadVar__1_16);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_97_114_103_115_95_119_105_100_116_104_115_95_95_49_55_53_54_95_95_49_95_95_91_49_93_95_48_1_f_0(void);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_static_compound__1709__1_2_p_0(
  MR_Word HighLevelData_22,
  MR_Word HeadVar__2_54);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_static_compound__1692__1_2_p_0(
  MR_Word HeadVar__1_50,
  MR_Word UsesConstructors_74);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_static_compound__1682__1_2_p_0(
  MR_Word UsesConstructors_27,
  MR_Word HeadVar__2_66);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_struct__1628__1_2_p_0(
  MR_Word HighLevelData_51,
  MR_Word HeadVar__2_88);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_memory_cell__1445__1_2_p_0(
  MR_Word HighLevelData_18,
  MR_Word HeadVar__2_61);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_memory_cell__1428__1_2_p_0(
  MR_Word HeadVar__1_57,
  MR_Word UsesConstructors_84);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_memory_cell__1418__1_2_p_0(
  MR_Word UsesConstructors_33,
  MR_Word HeadVar__2_74);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1322__6_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_196);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1322__5_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_185);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1348__1_2_p_0(
  MR_Word HighLevelData_12,
  MR_Word HeadVar__2_98);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1322__4_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_174);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1322__3_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_163);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1322__2_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_152);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1322__1_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_116);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_extra_arg_assigns__1091__1_2_p_0(
  MR_Word HighLevelData_28,
  MR_Word HeadVar__2_40);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__813__1_2_p_0(
  MR_Word ArgWidth_22,
  MR_Word HeadVar__2_29);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__630__1_2_p_0(
  MR_Word PrimaryTag_42,
  MR_Word LambdaHeadVar__1_86);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_reuse_cell__621__1_1_f_0(
  MR_Word LambdaHeadVar__1_83);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__606__1_3_p_0(
  MR_Word STATE_VARIABLE_Info_0_75,
  MR_Word LambdaHeadVar__1_80,
  MR_Word * LambdaHeadVar__2_81);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_statically__566__1_1_f_0(
  MR_Word LambdaHeadVar__1_48);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_dynamically__510__1_1_f_0(
  MR_Word LambdaHeadVar__1_63);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_dynamic_construct_compound__307__1_2_p_0(
  MR_Word HeadVar__1_63,
  MR_Word UsesConstructors_93);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_dynamic_construct_compound__283__1_2_p_0(
  MR_Word UsesConstructors_32,
  MR_Word HeadVar__2_88);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object__441__1_2_p_0(
  MR_Word TakeAddr_28,
  MR_Word HeadVar__2_44);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__226__1_2_p_0(
  MR_Word TakeAddr_16,
  MR_Word HeadVar__2_108);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__238__1_2_p_0(
  MR_Word TakeAddr_16,
  MR_Word HeadVar__2_103);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__145__1_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_114);

static void MR_CALL 
ml_backend__ml_unify_gen_construct____Compare____use_packed_word_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct____Unify____use_packed_word_map_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_unify_gen_construct____Compare____ml_const_struct_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct____Unify____ml_const_struct_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__accumulate_bitfield_mask_3_p_0(
  MR_Word FilledBitfield_4,
  MR_Unsigned STATE_VARIABLE_Mask_0_7,
  MR_Unsigned * STATE_VARIABLE_Mask_8);

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

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_maybe_shift_and_accumulate_packed_arg_rval_4_p_0(
  MR_Word ArgPosWidth_5,
  MR_Word RHSRval_6,
  MR_Word STATE_VARIABLE_RevOrRvals_0_28,
  MR_Word * STATE_VARIABLE_RevOrRvals_29);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0(
  MR_Word Info_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ConstStructMap_0_67,
  MR_Word * STATE_VARIABLE_ConstStructMap_68,
  MR_Word STATE_VARIABLE_GlobalData_0_69,
  MR_Word * STATE_VARIABLE_GlobalData_70);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0(
  MR_Word Info_12,
  MR_Integer ConstNum_13,
  MR_Word VarType_14,
  MR_Word MLDS_Type_15,
  MR_Word ConsId_16,
  MR_Word RemoteArgsTagInfo_17,
  MR_Word Args_18,
  MR_Word STATE_VARIABLE_ConstStructMap_0_43,
  MR_Word * STATE_VARIABLE_ConstStructMap_44,
  MR_Word STATE_VARIABLE_GlobalData_0_45,
  MR_Word * STATE_VARIABLE_GlobalData_46);

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

static void MR_CALL 
ml_backend__ml_unify_gen_construct__construct_ground_term_tagword_initializer_lld_5_p_0(
  MR_Word RHSVarTypeWidth_6,
  MR_Word STATE_VARIABLE_RevOrRvals_0_16,
  MR_Word * STATE_VARIABLE_RevOrRvals_17,
  MR_Word STATE_VARIABLE_GroundTermMap_0_18,
  MR_Word * STATE_VARIABLE_GroundTermMap_19);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_const_structs_5_p_0_1(
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
  MR_Word STATE_VARIABLE_GlobalData_0_76,
  MR_Word * STATE_VARIABLE_GlobalData_77,
  MR_Word STATE_VARIABLE_GroundTermMap_0_78,
  MR_Word * STATE_VARIABLE_GroundTermMap_79);

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

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_2(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
  MR_Word RemoteArgsTagInfo_24,
  MR_Word RHSVars_25,
  MR_Word Context_26,
  MR_Word STATE_VARIABLE_GlobalData_0_48,
  MR_Word * STATE_VARIABLE_GlobalData_49,
  MR_Word STATE_VARIABLE_GroundTermMap_0_50,
  MR_Word * STATE_VARIABLE_GroundTermMap_51);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_116_97_107_101_95_116_97_103_119_111_114_100_95_97_114_103_115_95_116_121_112_101_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

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
  MR_Word TagFilledBitfield_12,
  MR_Word LHSVar_13,
  MR_Word ArgVars_14,
  MR_Word ArgModes_15,
  MR_Word HowToConstruct_16,
  MR_Word Context_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_compound_12_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_compound_12_p_0_2(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_compound_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_compound_12_p_0(
  MR_Word LHSVar_13,
  MR_Word ConsId_14,
  MR_Word RemoteArgsTagInfo_15,
  MR_Word RHSVars_16,
  MR_Word ArgModes_17,
  MR_Word TakeAddr_18,
  MR_Word HowToConstruct_19,
  MR_Word Context_20,
  MR_Word * Defns_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_56,
  MR_Word * STATE_VARIABLE_Info_57);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_116_97_107_101_95_116_97_103_119_111_114_100_95_97_114_103_115_95_116_121_112_101_95_119_105_100_116_104_115_95_109_111_100_101_115_95_95_91_49_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Integer STATE_VARIABLE_CurArgNum_0_7,
  MR_Integer * STATE_VARIABLE_CurArgNum_8);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_cons_name_3_p_0(
  MR_Word Target_4,
  MR_Word HLDS_ConsId_5,
  MR_Word * QualifiedConsId_6);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_tagword_statically_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_tagword_dynamically_5_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevFilledBitfields_0_4,
  MR_Word * STATE_VARIABLE_RevFilledBitfields_5);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_17_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
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
  MR_Word MaybeConsId_16,
  MR_Word MaybeCtorName_17,
  MR_Word Ptag_18,
  MR_Word ExplicitSectag_19,
  MR_Word LHSVar_20,
  MR_Word ExtraRHSRvalsTypesWidths_21,
  MR_Word RHSVarsTypesWidths_22,
  MR_Word ArgModes_23,
  MR_Word TakeAddr_24,
  MR_Word CellToReuse_25,
  MR_Word Context_26,
  MR_Word * Defns_27,
  MR_Word * Stmts_28,
  MR_Word STATE_VARIABLE_Info_0_75,
  MR_Word * STATE_VARIABLE_Info_76);

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
ml_backend__ml_unify_gen_construct__ml_gen_new_object_statically_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_statically_11_p_0(
  MR_Word MaybeConsId_12,
  MR_Word MaybeCtorName_13,
  MR_Word Ptag_14,
  MR_Word LHSVar_15,
  MR_Word LHSType_16,
  MR_Word ExtraRHSRvalsTypesWidths_17,
  MR_Word RHSVarsTypesWidths_18,
  MR_Word Context_19,
  MR_Word * Stmts_20,
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
  MR_Word MaybeConsId_21,
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
  MR_Word MaybeConsId_11);

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
ml_backend__ml_unify_gen_construct__ml_gen_new_object_dynamically_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_dynamically_15_p_0(
  MR_Word MaybeConsId_16,
  MR_Word MaybeCtorName_17,
  MR_Word Ptag_18,
  MR_Word ExplicitSectag_19,
  MR_Word LHSVar_20,
  MR_Word LHSType_21,
  MR_Word ExtraRHSRvalsTypesWidths_22,
  MR_Word RHSVarsTypesWidths_23,
  MR_Word ArgModes_24,
  MR_Integer FirstArgNum_25,
  MR_Word TakeAddr_26,
  MR_Word Context_27,
  MR_Word * Stmts_28,
  MR_Word STATE_VARIABLE_Info_0_58,
  MR_Word * STATE_VARIABLE_Info_59);

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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__filled_bitfields_to_packed_word_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__filled_bitfields_to_packed_word_5_p_0(
  MR_Word Info_6,
  MR_Word UseMap_7,
  MR_Word HeadFilledBitfield_8,
  MR_Word TailFilledBitfields_9,
  MR_Word * WordRval_10);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__construct_rval_for_filled_bitfields_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__construct_rval_for_filled_bitfields_4_p_0(
  MR_Word Info_5,
  MR_Word HeadFilledBitfield_6,
  MR_Word TailFilledBitfields_7,
  MR_Word * WordRval_8);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__accumulate_translated_filled_bitfield_4_p_0(
  MR_Word Info_5,
  MR_Word FilledBitfield_6,
  MR_Word STATE_VARIABLE_RevToOrRvals_0_18,
  MR_Word * STATE_VARIABLE_RevToOrRvals_19);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__construct_missing_bitfields_mask_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__construct_missing_bitfields_mask_3_p_0(
  MR_Word HeadMissingBitfield_4,
  MR_Word TailMissingBitfields_5,
  MR_Unsigned * MissingBitfieldsMask_6);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__find_best_matching_instance_loop_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__find_best_matching_instance_loop_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word FilledPackedWord_2,
  MR_Word STATE_VARIABLE_BestInstanceSF_0_3,
  MR_Integer STATE_VARIABLE_BestMatchesSF_0_4,
  MR_Integer STATE_VARIABLE_BestNonMatchesSF_0_5,
  MR_Word STATE_VARIABLE_BestMissingSF_0_6,
  MR_Word * BestInstance_7,
  MR_Integer * BestMatches_8,
  MR_Integer * BestNonMatches_9,
  MR_Word * BestMissing_10);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__count_matching_bitfields_loop_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__count_matching_bitfields_loop_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_Matches_0_3,
  MR_Integer * STATE_VARIABLE_Matches_4,
  MR_Integer STATE_VARIABLE_NonMatches_0_5,
  MR_Integer * STATE_VARIABLE_NonMatches_6,
  MR_Word STATE_VARIABLE_RevMissingB_0_7,
  MR_Word * STATE_VARIABLE_RevMissingB_8);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_maybe_box_unbox_or_null_lval_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ConsArgType_10,
  MR_Word RHSType_11,
  MR_Word BoxedRHSType_12,
  MR_Word RHS_MLDS_Type_13,
  MR_Word ArgMode_14,
  MR_Word RHSLval_15,
  MR_Word * RHSRval_16);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_packed_word_10_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_packed_word_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_packed_word_10_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Integer HeadVar__6_6,
  MR_Integer * HeadVar__7_7,
  MR_Word TakeAddr_8,
  MR_Word STATE_VARIABLE_RevFilledBitfields_0_9,
  MR_Word * STATE_VARIABLE_RevFilledBitfields_10);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_maybe_null_var_5_p_0(
  MR_Word Info_6,
  MR_Word RHSVar_7,
  MR_Word ConsArgType_8,
  MR_Word ArgMode_9,
  MR_Word * BitfieldValue_10);

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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct____Unify____use_packed_word_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen_construct____Compare____use_packed_word_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_1[19][2];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_2[12][3];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_3[4][1];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_4[12][5];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_5[3][6];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_6[2][7];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_7[1][4];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_8[1][8];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_9[1][9];




static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_1[19][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0))
  },
  /* row 8 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) 0)))),
    ((MR_Box) (((MR_Box) ((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) (UINT8_C(0))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_Unsigned) 20U))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_Unsigned) 20U))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_2[12][3] = {
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
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_1[9]))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__construct_missing_bitfields_mask_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_new_object_dynamically_15_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[4])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__construct_static_ground_term_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[5])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_new_object_statically_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[7])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_15_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_8[0])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_8[0])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[11])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_static_args_widths_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_4[12][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_util__pti_arg_type_and_width_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_5[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_6[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_ml_const_struct_info_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_util__pti_arg_type_and_width_1__plain_hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_7[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_8[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_util__pti_arg_type_and_width_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_9[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_ml_const_struct_info_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
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

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_util__pti_arg_type_and_width_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_arg_type_and_width_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_unify_gen_construct__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
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
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
    UINT32_C(1),
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_unify_gen_construct____Unify____ml_const_struct_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen_construct____Compare____ml_const_struct_info_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen_construct",
  (MR_String) "ml_const_struct_info",
  {     ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_name_ordered_ml_const_struct_info_0 },
  {     ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_ptag_ordered_ml_const_struct_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__functor_number_map_ml_const_struct_info_0
};

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__field_types_mlds_rval_type_and_width_0_0[3] = {
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0)
};

static const MR_DuFunctorDesc ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_functor_desc_mlds_rval_type_and_width_0_0 = {
  (MR_String) "rval_type_and_width",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
    UINT32_C(1),
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_unify_gen_construct____Unify____mlds_rval_type_and_width_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen_construct____Compare____mlds_rval_type_and_width_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen_construct",
  (MR_String) "mlds_rval_type_and_width",
  {     ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_name_ordered_mlds_rval_type_and_width_0 },
  {     ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_ptag_ordered_mlds_rval_type_and_width_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__functor_number_map_mlds_rval_type_and_width_0
};

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__enum_functor_desc_use_packed_word_map_0_0 = {
  (MR_String) "do_not_use_packed_word_map",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__enum_functor_desc_use_packed_word_map_0_1 = {
  (MR_String) "use_packed_word_map",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__enum_value_ordered_use_packed_word_map_0[2] = {
  &ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__enum_functor_desc_use_packed_word_map_0_0,
  &ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__enum_functor_desc_use_packed_word_map_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__enum_name_ordered_use_packed_word_map_0[2] = {
  &ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__enum_functor_desc_use_packed_word_map_0_0,
  &ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__enum_functor_desc_use_packed_word_map_0_1
};

static const MR_Integer ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__functor_number_map_use_packed_word_map_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_use_packed_word_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_unify_gen_construct____Unify____use_packed_word_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen_construct____Compare____use_packed_word_map_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen_construct",
  (MR_String) "use_packed_word_map",
  {     ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__enum_name_ordered_use_packed_word_map_0 },
  {     ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__enum_value_ordered_use_packed_word_map_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__functor_number_map_use_packed_word_map_0
};

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__count_matching_bitfield__2539__1_2_p_0(
  MR_Word BitfieldA_14,
  MR_Word BitfieldB_16)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_gen_info____Unify____bitfield_0_0(BitfieldA_14, BitfieldB_16);
    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__construct_static_ground_term__1961__1_1_f_0(
  MR_Word LambdaHeadVar__1_43)
{
  {
    MR_Word LambdaHeadVar__2_44;

    {
      LambdaHeadVar__2_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_44, 0) = ((MR_Box) (LambdaHeadVar__1_43));
    }
    return LambdaHeadVar__2_44;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_const_static_args_widths__1756__1_1_f_0(
  MR_Word LambdaHeadVar__1_16)
{
  {
    MR_Word LambdaHeadVar__2_17;

    LambdaHeadVar__2_17 = ml_backend__ml_unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_97_114_103_115_95_119_105_100_116_104_115_95_95_49_55_53_54_95_95_49_95_95_91_49_93_95_48_1_f_0();
    return LambdaHeadVar__2_17;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_97_114_103_115_95_119_105_100_116_104_115_95_95_49_55_53_54_95_95_49_95_95_91_49_93_95_48_1_f_0(void)
{
  {
    MR_Word LambdaHeadVar__2_17;

    LambdaHeadVar__2_17 = parse_tree__builtin_lib_types__void_type_0_f_0();
    return LambdaHeadVar__2_17;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_static_compound__1709__1_2_p_0(
  MR_Word HighLevelData_22,
  MR_Word HeadVar__2_54)
{
  {
    MR_bool succeeded = (HighLevelData_22 == HeadVar__2_54);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_static_compound__1692__1_2_p_0(
  MR_Word HeadVar__1_50,
  MR_Word UsesConstructors_74)
{
  {
    MR_bool succeeded = (UsesConstructors_74 == HeadVar__1_50);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_static_compound__1682__1_2_p_0(
  MR_Word UsesConstructors_27,
  MR_Word HeadVar__2_66)
{
  {
    MR_bool succeeded = (UsesConstructors_27 == HeadVar__2_66);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_struct__1628__1_2_p_0(
  MR_Word HighLevelData_51,
  MR_Word HeadVar__2_88)
{
  {
    MR_bool succeeded = (HighLevelData_51 == HeadVar__2_88);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_memory_cell__1445__1_2_p_0(
  MR_Word HighLevelData_18,
  MR_Word HeadVar__2_61)
{
  {
    MR_bool succeeded = (HighLevelData_18 == HeadVar__2_61);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_memory_cell__1428__1_2_p_0(
  MR_Word HeadVar__1_57,
  MR_Word UsesConstructors_84)
{
  {
    MR_bool succeeded = (UsesConstructors_84 == HeadVar__1_57);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_memory_cell__1418__1_2_p_0(
  MR_Word UsesConstructors_33,
  MR_Word HeadVar__2_74)
{
  {
    MR_bool succeeded = (UsesConstructors_33 == HeadVar__2_74);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1322__6_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_196)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_19)), ((MR_Box) (HeadVar__2_196)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1322__5_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_185)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_19)), ((MR_Box) (HeadVar__2_185)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1348__1_2_p_0(
  MR_Word HighLevelData_12,
  MR_Word HeadVar__2_98)
{
  {
    MR_bool succeeded = (HighLevelData_12 == HeadVar__2_98);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1322__4_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_174)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_19)), ((MR_Box) (HeadVar__2_174)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1322__3_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_163)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_19)), ((MR_Box) (HeadVar__2_163)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1322__2_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_152)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_19)), ((MR_Box) (HeadVar__2_152)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1322__1_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_116)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_19)), ((MR_Box) (HeadVar__2_116)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_extra_arg_assigns__1091__1_2_p_0(
  MR_Word HighLevelData_28,
  MR_Word HeadVar__2_40)
{
  {
    MR_bool succeeded = (HighLevelData_28 == HeadVar__2_40);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__813__1_2_p_0(
  MR_Word ArgWidth_22,
  MR_Word HeadVar__2_29)
{
  {
    MR_bool succeeded = (ArgWidth_22 == HeadVar__2_29);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__630__1_2_p_0(
  MR_Word PrimaryTag_42,
  MR_Word LambdaHeadVar__1_86)
{
  {
    MR_bool succeeded;
    uint8_t Var_128 = (uint8_t) (LambdaHeadVar__1_86);
    uint8_t Var_129 = (uint8_t) (PrimaryTag_42);

    succeeded = (Var_128 != Var_129);
    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_reuse_cell__621__1_1_f_0(
  MR_Word LambdaHeadVar__1_83)
{
  {
    MR_Word LambdaHeadVar__2_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_83, (MR_Integer) 0))));

    return LambdaHeadVar__2_84;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__606__1_3_p_0(
  MR_Word STATE_VARIABLE_Info_0_75,
  MR_Word LambdaHeadVar__1_80,
  MR_Word * LambdaHeadVar__2_81)
{
  {
    MR_Word ReuseConsTag_36;
    MR_Word _ReuseOffSet_37;

    ml_backend__ml_unify_gen_util__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_75, LambdaHeadVar__1_80, &ReuseConsTag_36);
    ml_backend__ml_unify_gen_util__ml_tag_ptag_and_initial_offset_3_p_0(ReuseConsTag_36, LambdaHeadVar__2_81, &_ReuseOffSet_37);
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_statically__566__1_1_f_0(
  MR_Word LambdaHeadVar__1_48)
{
  {
    MR_Word LambdaHeadVar__2_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_48, (MR_Integer) 0))));

    return LambdaHeadVar__2_49;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_dynamically__510__1_1_f_0(
  MR_Word LambdaHeadVar__1_63)
{
  {
    MR_Word LambdaHeadVar__2_64;
    MR_Word Rv_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_63, (MR_Integer) 0))));
    MR_Word T_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_63, (MR_Integer) 1))));

    {
      LambdaHeadVar__2_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_64, 0) = ((MR_Box) (Rv_67));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_64, 1) = ((MR_Box) (T_68));
    }
    return LambdaHeadVar__2_64;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_dynamic_construct_compound__307__1_2_p_0(
  MR_Word HeadVar__1_63,
  MR_Word UsesConstructors_93)
{
  {
    MR_bool succeeded = (UsesConstructors_93 == HeadVar__1_63);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_dynamic_construct_compound__283__1_2_p_0(
  MR_Word UsesConstructors_32,
  MR_Word HeadVar__2_88)
{
  {
    MR_bool succeeded = (UsesConstructors_32 == HeadVar__2_88);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object__441__1_2_p_0(
  MR_Word TakeAddr_28,
  MR_Word HeadVar__2_44)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[2]), ((MR_Box) (TakeAddr_28)), ((MR_Box) (HeadVar__2_44)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__226__1_2_p_0(
  MR_Word TakeAddr_16,
  MR_Word HeadVar__2_108)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[2]), ((MR_Box) (TakeAddr_16)), ((MR_Box) (HeadVar__2_108)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__238__1_2_p_0(
  MR_Word TakeAddr_16,
  MR_Word HeadVar__2_103)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[2]), ((MR_Box) (TakeAddr_16)), ((MR_Box) (HeadVar__2_103)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__145__1_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_114)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_14)), ((MR_Box) (HeadVar__2_114)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct____Compare____use_packed_word_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct____Unify____use_packed_word_map_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

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
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      ml_backend__mlds____Compare____mlds_rval_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        ml_backend__mlds____Compare____mlds_type_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          parse_tree__prog_data____Compare____arg_pos_width_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
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
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;
        MR_Integer Var_17 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_18 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_17 < Var_18);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_17 > Var_18);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Integer Var_19 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_20 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_19 < Var_20);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_19 > Var_20);
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
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

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
ml_backend__ml_unify_gen_construct__accumulate_bitfield_mask_3_p_0(
  MR_Word FilledBitfield_4,
  MR_Unsigned STATE_VARIABLE_Mask_0_7,
  MR_Unsigned * STATE_VARIABLE_Mask_8)
{
  {
    MR_Unsigned BitfieldMask_6;
    MR_Word Bitfield_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FilledBitfield_4, (MR_Integer) 0))));
    MR_Word Shift_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Bitfield_12, (MR_Integer) 0))));
    MR_Word NumBits_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Bitfield_12, (MR_Integer) 1))));
    MR_Integer ShiftInt_17 = (MR_Integer) (Shift_14);
    MR_Integer NumBitsInt_18 = (MR_Integer) (NumBits_15);
    MR_Unsigned Var_19;
    MR_Unsigned Var_20;

    Var_20 = mercury__uint__f_60_60_2_f_0((MR_Unsigned) 1U, NumBitsInt_18);
    Var_19 = (Var_20 - (MR_Unsigned) 1U);
    BitfieldMask_6 = mercury__uint__f_60_60_2_f_0(Var_19, ShiftInt_17);
    *STATE_VARIABLE_Mask_8 = (STATE_VARIABLE_Mask_0_7 | BitfieldMask_6);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_not_taking_addr_of_cur_arg_2_p_0(
  MR_Word TakeAddr_3,
  MR_Integer CurArgNum_4)
{
  {
    MR_bool succeeded = (TakeAddr_3 != (MR_Word) ((MR_Unsigned) 0U));
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
                MR_Word RvalConst_82;

                RvalConst_82 = ml_backend__ml_unify_gen_construct__int_tag_to_mlds_rval_const_3_f_0(Type_14, MLDS_Type_16, (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_3[3]));
                {
                  RHSRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 1) = ((MR_Box) (RvalConst_82));
                }
              }
              break;
            case (MR_Integer) 1:
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
              RHSRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), RHSRval_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), RHSRval_17, 1) = ((MR_Box) (RvalConst_30));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Float Float_31 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_15, (MR_Integer) 0)));
            MR_Word Var_80;

            {
              Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(MR_mktag(3), Var_80, 1) = MR_box_float(Float_31);
            }
            {
              RHSRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), RHSRval_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), RHSRval_17, 1) = ((MR_Box) (Var_80));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String String_32 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1))));
                MR_Word Var_79;

                {
                  Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (String_32));
                }
                {
                  RHSRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 1) = ((MR_Box) (Var_79));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ForeignLang_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1))) & (MR_Integer) 3);
                MR_String ForeignTag_40 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 2))));
                MR_Word Var_76;

                {
                  Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                  MR_hl_field(MR_mktag(3), Var_76, 1) = (MR_Box) ((MR_Unsigned) (ForeignLang_39));
                  MR_hl_field(MR_mktag(3), Var_76, 2) = ((MR_Box) (ForeignTag_40));
                  MR_hl_field(MR_mktag(3), Var_76, 3) = ((MR_Box) (MLDS_Type_16));
                }
                {
                  RHSRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 1) = ((MR_Box) (Var_76));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word LocalSectag_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 2))));
                MR_Unsigned PrimSec_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_34, (MR_Integer) 1))));
                MR_Word Var_77;
                MR_Word Var_78;

                {
                  Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (PrimSec_37));
                }
                {
                  Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (Var_78));
                }
                {
                  RHSRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 1) = ((MR_Box) (MLDS_Type_16));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 2) = ((MR_Box) (Var_77));
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
                uint16_t Var_72;
                MR_Word Var_74;

                ModuleName_44 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_41);
                MLDS_Module_45 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_44);
                Var_72 = mercury__uint16__det_from_int_1_f_0(TypeArity_43);
                {
                  RttiTypeCtor_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RttiTypeCtor_46, 0) = ((MR_Box) (ModuleName_44));
                  MR_hl_field(MR_mktag(0), RttiTypeCtor_46, 1) = ((MR_Box) (TypeName_42));
                  MR_hl_field(MR_mktag(0), RttiTypeCtor_46, 2) = ((MR_Box) (MR_Word) (Var_72));
                }
                {
                  RttiId_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RttiId_47, 0) = ((MR_Box) (RttiTypeCtor_46));
                  MR_hl_field(MR_mktag(0), RttiId_47, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                }
                {
                  Const_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Const_48, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                  MR_hl_field(MR_mktag(3), Const_48, 1) = ((MR_Box) (MLDS_Module_45));
                  MR_hl_field(MR_mktag(3), Const_48, 2) = ((MR_Box) (RttiId_47));
                }
                {
                  Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (Const_48));
                }
                {
                  RHSRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 1) = ((MR_Box) (MLDS_Type_16));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 2) = ((MR_Box) (Var_74));
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ClassId_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 2))));
                MR_String Instance_50 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 3))));
                MR_Word TCName_51;
                MR_Word Var_70;
                MR_Word Var_71;
                MR_Word ModuleName_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1))));
                MR_Word MLDS_Module_84;
                MR_Word RttiId_85;
                MR_Word Const_86;

                MLDS_Module_84 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_83);
                TCName_51 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_49);
                {
                  Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (ModuleName_83));
                  MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Instance_50));
                }
                {
                  RttiId_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), RttiId_85, 0) = ((MR_Box) (TCName_51));
                  MR_hl_field(MR_mktag(1), RttiId_85, 1) = ((MR_Box) (Var_70));
                }
                {
                  Const_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Const_86, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                  MR_hl_field(MR_mktag(3), Const_86, 1) = ((MR_Box) (MLDS_Module_84));
                  MR_hl_field(MR_mktag(3), Const_86, 2) = ((MR_Box) (RttiId_85));
                }
                {
                  Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (Const_86));
                }
                {
                  RHSRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 1) = ((MR_Box) (MLDS_Type_16));
                  MR_hl_field(MR_mktag(3), RHSRval_17, 2) = ((MR_Box) (Var_71));
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_5, (MR_Integer) 0))))) {
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
              MR_Word Fill_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_5, (MR_Integer) 6))) & (MR_Integer) 7);
              MR_Word UnboxedRHSRval_14;
              MR_Word UnboxedRvalPrime_36;
              MR_Word RvalConst_43;

              succeeded = ((((MR_tag((MR_Word) RHSRval_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), RHSRval_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                UnboxedRvalPrime_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RHSRval_6, (MR_Integer) 2))));
                UnboxedRHSRval_14 = UnboxedRvalPrime_36;
              }
              else
                UnboxedRHSRval_14 = RHSRval_6;
              succeeded = ((((MR_tag((MR_Word) UnboxedRHSRval_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), UnboxedRHSRval_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                RvalConst_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UnboxedRHSRval_14, (MR_Integer) 1))));
                succeeded = ((((MR_tag((MR_Word) RvalConst_43)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), RvalConst_43, (MR_Integer) 0)))) == (MR_Integer) 20)));
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

                succeeded = ((((MR_tag((MR_Word) UnboxedRHSRval_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), UnboxedRHSRval_14, (MR_Integer) 0)))) == (MR_Integer) 2)));
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
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_2(
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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_struct__1628__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0(
  MR_Word Info_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ConstStructMap_0_67,
  MR_Word * STATE_VARIABLE_ConstStructMap_68,
  MR_Word STATE_VARIABLE_GlobalData_0_69,
  MR_Word * STATE_VARIABLE_GlobalData_70)
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
              MR_Word Arg_58;
              MR_Word ArgRvalTypeWidth_59;
              MR_Word ArgRval_60;
              MR_Word Rval_63;
              MR_Word GroundTerm_98;
              MR_Box conv0_Arg_58;

              hlds__goal_form__get_notag_or_direct_arg_arg_2_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), Args_13, &conv0_Arg_58);
              Arg_58 = ((MR_Word) (conv0_Arg_58));
              ml_backend__ml_unify_gen_construct__ml_gen_const_struct_arg_7_p_0(Info_7, STATE_VARIABLE_ConstStructMap_0_67, Arg_58, (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_construct_scalar_common_1[8])), &ArgRvalTypeWidth_59, STATE_VARIABLE_GlobalData_0_69, STATE_VARIABLE_GlobalData_70);
              ArgRval_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRvalTypeWidth_59, (MR_Integer) 0))));
              Rval_63 = ml_backend__ml_unify_gen_construct__ml_cast_cons_tag_3_f_0(MLDS_Type_17, ConsTag_18, ArgRval_60);
              {
                GroundTerm_98 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_98, 0) = ((MR_Box) (Rval_63));
                MR_hl_field(MR_mktag(0), GroundTerm_98, 1) = ((MR_Box) (Type_14));
                MR_hl_field(MR_mktag(0), GroundTerm_98, 2) = ((MR_Box) (MLDS_Type_17));
              }
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstNum_8, ((MR_Box) (GroundTerm_98)), STATE_VARIABLE_ConstStructMap_0_67, STATE_VARIABLE_ConstStructMap_68);
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_18, (MR_Integer) 0))))) {
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
              MR_Word RemoteArgsTagInfo_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_18, (MR_Integer) 1))));

              ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0(Info_7, ConstNum_8, Type_14, MLDS_Type_17, ConsId_12, RemoteArgsTagInfo_43, Args_13, STATE_VARIABLE_ConstStructMap_0_67, STATE_VARIABLE_ConstStructMap_68, STATE_VARIABLE_GlobalData_0_69, STATE_VARIABLE_GlobalData_70);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word LocalArgsTagInfo_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_18, (MR_Integer) 1))));
              MR_Word LocalSectag_45;
              MR_Unsigned PrimSec_48;
              MR_Word ArgsTypesWidths_50;
              MR_Word HighLevelData_51;
              MR_Word RevOrRvals_52;
              MR_Word OrRvals_53;
              MR_Word TagwordRval_54;
              MR_Word CastTagwordRval_55;
              MR_Word GroundTerm_56;
              MR_Word Var_85;
              MR_Word Var_89;
              MR_Word Var_91;
              MR_Word Var_92;
              MR_Box conv2_RevOrRvals_52;

              if ((LocalArgsTagInfo_44 == (MR_Word) ((MR_Unsigned) 0U)))
                LocalSectag_45 = (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[3]);
              else
                LocalSectag_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArgsTagInfo_44, (MR_Integer) 1))));
              PrimSec_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_45, (MR_Integer) 1))));
              ml_backend__ml_unify_gen_construct__ml_gen_const_static_args_widths_5_p_0(Info_7, Type_14, ConsId_12, Args_13, &ArgsTypesWidths_50);
              HighLevelData_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) & (MR_Integer) 1);
              {
                Var_85 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[6]));
                MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_1));
                MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (HighLevelData_51));
                MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_85, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct\'/6", (MR_String) "HighLevelData = yes");
              {
                Var_89 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_6[1]));
                MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_2));
                MR_hl_field(MR_mktag(0), Var_89, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_89, 3) = ((MR_Box) (Info_7));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[5]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[4]), Var_89, ArgsTypesWidths_50, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_RevOrRvals_52);
              RevOrRvals_52 = ((MR_Word) (conv2_RevOrRvals_52));
              mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevOrRvals_52, &OrRvals_53);
              {
                Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) (PrimSec_48));
              }
              {
                Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_91, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_91, 1) = ((MR_Box) (Var_92));
              }
              TagwordRval_54 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(Var_91, OrRvals_53);
              {
                CastTagwordRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastTagwordRval_55, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), CastTagwordRval_55, 1) = ((MR_Box) (MLDS_Type_17));
                MR_hl_field(MR_mktag(3), CastTagwordRval_55, 2) = ((MR_Box) (TagwordRval_54));
              }
              {
                GroundTerm_56 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_56, 0) = ((MR_Box) (CastTagwordRval_55));
                MR_hl_field(MR_mktag(0), GroundTerm_56, 1) = ((MR_Box) (Type_14));
                MR_hl_field(MR_mktag(0), GroundTerm_56, 2) = ((MR_Box) (MLDS_Type_17));
              }
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstNum_8, ((MR_Box) (GroundTerm_56)), STATE_VARIABLE_ConstStructMap_0_67, STATE_VARIABLE_ConstStructMap_68);
              *STATE_VARIABLE_GlobalData_70 = STATE_VARIABLE_GlobalData_0_69;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word Arg_58;
              MR_Word ArgRvalTypeWidth_59;
              MR_Word ArgRval_60;
              MR_Word Rval_63;
              MR_Word GroundTerm_98;
              MR_Box conv0_Arg_58;

              hlds__goal_form__get_notag_or_direct_arg_arg_2_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), Args_13, &conv0_Arg_58);
              Arg_58 = ((MR_Word) (conv0_Arg_58));
              ml_backend__ml_unify_gen_construct__ml_gen_const_struct_arg_7_p_0(Info_7, STATE_VARIABLE_ConstStructMap_0_67, Arg_58, (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_construct_scalar_common_1[8])), &ArgRvalTypeWidth_59, STATE_VARIABLE_GlobalData_0_69, STATE_VARIABLE_GlobalData_70);
              ArgRval_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRvalTypeWidth_59, (MR_Integer) 0))));
              Rval_63 = ml_backend__ml_unify_gen_construct__ml_cast_cons_tag_3_f_0(MLDS_Type_17, ConsTag_18, ArgRval_60);
              {
                GroundTerm_98 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_98, 0) = ((MR_Box) (Rval_63));
                MR_hl_field(MR_mktag(0), GroundTerm_98, 1) = ((MR_Box) (Type_14));
                MR_hl_field(MR_mktag(0), GroundTerm_98, 2) = ((MR_Box) (MLDS_Type_17));
              }
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstNum_8, ((MR_Box) (GroundTerm_98)), STATE_VARIABLE_ConstStructMap_0_67, STATE_VARIABLE_ConstStructMap_68);
            }
            break;
          case (MR_Integer) 14:
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

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_RevOrRvals_19;

    ml_backend__ml_unify_gen_construct__ml_gen_const_tagword_arg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_RevOrRvals_19);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_RevOrRvals_19));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_static_compound__1709__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_static_compound__1692__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_static_compound__1682__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0(
  MR_Word Info_12,
  MR_Integer ConstNum_13,
  MR_Word VarType_14,
  MR_Word MLDS_Type_15,
  MR_Word ConsId_16,
  MR_Word RemoteArgsTagInfo_17,
  MR_Word Args_18,
  MR_Word STATE_VARIABLE_ConstStructMap_0_43,
  MR_Word * STATE_VARIABLE_ConstStructMap_44,
  MR_Word STATE_VARIABLE_GlobalData_0_45,
  MR_Word * STATE_VARIABLE_GlobalData_46)
{
  {
    MR_bool succeeded;
    MR_Word Target_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
    MR_Word HighLevelData_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgsTypesWidths_23;
    MR_Word UsesBaseClass_24;
    MR_Word Ptag_25;
    MR_Word TagwordRvals_28;
    MR_Word NonTagwordArgsTypesWidths_29;
    MR_Word NonTagwordRvalsTypesWidths_40;
    MR_Word ModuleInfo_41;
    MR_Word GroundTerm_42;
    MR_Word STATE_VARIABLE_GlobalData_69_69;
    MR_Word Var_70;
    MR_Word Var_71;

    ml_backend__ml_unify_gen_construct__ml_gen_const_static_args_widths_5_p_0(Info_12, VarType_14, ConsId_16, Args_18, &ArgsTypesWidths_23);
    switch (MR_tag((MR_Word) RemoteArgsTagInfo_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          UsesBaseClass_24 = (MR_Integer) 1;
          Ptag_25 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
          TagwordRvals_28 = (MR_Word) ((MR_Unsigned) 0U);
          NonTagwordArgsTypesWidths_29 = ArgsTypesWidths_23;
        }
        break;
      case (MR_Integer) 1:
        {
          Ptag_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RemoteArgsTagInfo_17, (MR_Integer) 0))));
          UsesBaseClass_24 = (MR_Integer) 0;
          TagwordRvals_28 = (MR_Word) ((MR_Unsigned) 0U);
          NonTagwordArgsTypesWidths_29 = ArgsTypesWidths_23;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word RemoteSectag_30;
          MR_Unsigned SectagUint_31;
          MR_Word SectagSize_32;
          MR_Word TagwordRval_34;
          MR_Word Var_47;
          MR_Word UsesConstructors_74;

          Ptag_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_17, (MR_Integer) 0))));
          RemoteSectag_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_17, (MR_Integer) 1))));
          UsesBaseClass_24 = (MR_Integer) 0;
          UsesConstructors_74 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_21);
          {
            Var_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[6]));
            MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_2));
            MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) (UsesConstructors_74));
          }
          mercury__require__expect_3_p_0(Var_47, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_static_compound\'/11", (MR_String) "remote_args_shared but UsesConstructors = yes");
          SectagUint_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_30, (MR_Integer) 0))));
          SectagSize_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_30, (MR_Integer) 1))));
          if ((SectagSize_32 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word StagRval0_33;
            MR_Word Var_60;

            {
              Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (SectagUint_31));
            }
            {
              StagRval0_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), StagRval0_33, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), StagRval0_33, 1) = ((MR_Box) (Var_60));
            }
            switch (HighLevelData_22) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    TagwordRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), TagwordRval_34, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(MR_mktag(3), TagwordRval_34, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(3), TagwordRval_34, 2) = ((MR_Box) (StagRval0_33));
                  }
                }
                break;
              case (MR_Integer) 1:
                TagwordRval_34 = StagRval0_33;
                break;
            }
            NonTagwordArgsTypesWidths_29 = ArgsTypesWidths_23;
          }
          else
          {
            MR_Word TagwordArgsTypesWidths_36;
            MR_Word RevToOrRvals_37;
            MR_Word ToOrRvals_38;
            MR_Word RawTagwordRval_39;
            MR_Word Var_51;
            MR_Word Var_55;
            MR_Word Var_57;
            MR_Word Var_58;
            MR_Box conv1_RevToOrRvals_37;

            {
              Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[6]));
              MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_3));
              MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (HighLevelData_22));
              MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_3_p_0(Var_51, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_static_compound\'/11", (MR_String) "HighLevelData = yes");
            ml_backend__ml_unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_116_97_107_101_95_116_97_103_119_111_114_100_95_97_114_103_115_95_116_121_112_101_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(ArgsTypesWidths_23, &TagwordArgsTypesWidths_36, &NonTagwordArgsTypesWidths_29);
            {
              Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_6[1]));
              MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_4));
              MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Info_12));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[5]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[4]), Var_55, TagwordArgsTypesWidths_36, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_RevToOrRvals_37);
            RevToOrRvals_37 = ((MR_Word) (conv1_RevToOrRvals_37));
            mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevToOrRvals_37, &ToOrRvals_38);
            {
              Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (SectagUint_31));
            }
            {
              Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (Var_58));
            }
            RawTagwordRval_39 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(Var_57, ToOrRvals_38);
            {
              TagwordRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), TagwordRval_34, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), TagwordRval_34, 1) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(3), TagwordRval_34, 2) = ((MR_Box) (RawTagwordRval_39));
            }
          }
          {
            TagwordRvals_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), TagwordRvals_28, 0) = ((MR_Box) (TagwordRval_34));
            MR_hl_field(MR_mktag(1), TagwordRvals_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word UsesConstructors_27;
          MR_Word Var_63;

          UsesBaseClass_24 = (MR_Integer) 0;
          UsesConstructors_27 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_21);
          {
            Var_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[6]));
            MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_1));
            MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (UsesConstructors_27));
            MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_static_compound\'/11", (MR_String) "remote_args_ctor but UsesConstructors = no");
          Ptag_25 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
          TagwordRvals_28 = (MR_Word) ((MR_Unsigned) 0U);
          NonTagwordArgsTypesWidths_29 = ArgsTypesWidths_23;
        }
        break;
    }
    ml_backend__ml_unify_gen_construct__ml_gen_const_struct_args_6_p_0(Info_12, STATE_VARIABLE_ConstStructMap_0_43, NonTagwordArgsTypesWidths_29, &NonTagwordRvalsTypesWidths_40, STATE_VARIABLE_GlobalData_0_45, &STATE_VARIABLE_GlobalData_69_69);
    ModuleInfo_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 0))));
    Var_70 = mercury__term__context_init_0_f_0();
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (ConsId_16));
    }
    ml_backend__ml_unify_gen_construct__construct_static_ground_term_14_p_0(ModuleInfo_41, Target_21, HighLevelData_22, Var_70, VarType_14, MLDS_Type_15, Var_71, UsesBaseClass_24, Ptag_25, TagwordRvals_28, NonTagwordRvalsTypesWidths_40, &GroundTerm_42, STATE_VARIABLE_GlobalData_69_69, STATE_VARIABLE_GlobalData_46);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstNum_13, ((MR_Box) (GroundTerm_42)), STATE_VARIABLE_ConstStructMap_0_43, STATE_VARIABLE_ConstStructMap_44);
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
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
                MR_Word RvalConst_90;

                RvalConst_90 = ml_backend__ml_unify_gen_construct__int_tag_to_mlds_rval_const_3_f_0(Type_21, MLDS_Type_19, (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_3[3]));
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (RvalConst_90));
                }
              }
              break;
            case (MR_Integer) 1:
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
              Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (RvalConst_38));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Float Float_39 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_22, (MR_Integer) 0)));
            MR_Word Var_88;

            {
              Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(MR_mktag(3), Var_88, 1) = MR_box_float(Float_39);
            }
            {
              Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (Var_88));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String String_40 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                MR_Word Var_87;

                {
                  Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (String_40));
                }
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (Var_87));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ForeignLang_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))) & (MR_Integer) 3);
                MR_String ForeignTag_48 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                MR_Word Var_84;

                {
                  Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                  MR_hl_field(MR_mktag(3), Var_84, 1) = (MR_Box) ((MR_Unsigned) (ForeignLang_47));
                  MR_hl_field(MR_mktag(3), Var_84, 2) = ((MR_Box) (ForeignTag_48));
                  MR_hl_field(MR_mktag(3), Var_84, 3) = ((MR_Box) (MLDS_Type_19));
                }
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (Var_84));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word LocalSectag_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                MR_Unsigned PrimSec_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_42, (MR_Integer) 1))));
                MR_Word Var_85;
                MR_Word Var_86;

                {
                  Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (PrimSec_45));
                }
                {
                  Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (Var_86));
                }
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (MLDS_Type_19));
                  MR_hl_field(MR_mktag(3), Rval0_17, 2) = ((MR_Box) (Var_85));
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
                uint16_t Var_80;
                MR_Word Var_82;

                ModuleName_52 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_49);
                MLDS_Module_53 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_52);
                Var_80 = mercury__uint16__det_from_int_1_f_0(TypeArity_51);
                {
                  RttiTypeCtor_54 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RttiTypeCtor_54, 0) = ((MR_Box) (ModuleName_52));
                  MR_hl_field(MR_mktag(0), RttiTypeCtor_54, 1) = ((MR_Box) (TypeName_50));
                  MR_hl_field(MR_mktag(0), RttiTypeCtor_54, 2) = ((MR_Box) (MR_Word) (Var_80));
                }
                {
                  RttiId_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RttiId_55, 0) = ((MR_Box) (RttiTypeCtor_54));
                  MR_hl_field(MR_mktag(0), RttiId_55, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                }
                {
                  Const_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Const_56, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                  MR_hl_field(MR_mktag(3), Const_56, 1) = ((MR_Box) (MLDS_Module_53));
                  MR_hl_field(MR_mktag(3), Const_56, 2) = ((MR_Box) (RttiId_55));
                }
                {
                  Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (Const_56));
                }
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (MLDS_Type_19));
                  MR_hl_field(MR_mktag(3), Rval0_17, 2) = ((MR_Box) (Var_82));
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ClassId_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                MR_String Instance_58 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                MR_Word TCName_59;
                MR_Word Var_78;
                MR_Word Var_79;
                MR_Word ModuleName_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                MR_Word MLDS_Module_92;
                MR_Word RttiId_93;
                MR_Word Const_94;

                MLDS_Module_92 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_91);
                TCName_59 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_57);
                {
                  Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (ModuleName_91));
                  MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Instance_58));
                }
                {
                  RttiId_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), RttiId_93, 0) = ((MR_Box) (TCName_59));
                  MR_hl_field(MR_mktag(1), RttiId_93, 1) = ((MR_Box) (Var_78));
                }
                {
                  Const_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Const_94, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                  MR_hl_field(MR_mktag(3), Const_94, 1) = ((MR_Box) (MLDS_Module_92));
                  MR_hl_field(MR_mktag(3), Const_94, 2) = ((MR_Box) (RttiId_93));
                }
                {
                  Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (Const_94));
                }
                {
                  Rval0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval0_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), Rval0_17, 1) = ((MR_Box) (MLDS_Type_19));
                  MR_hl_field(MR_mktag(3), Rval0_17, 2) = ((MR_Box) (Var_79));
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
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *RvalTypeWidth_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MLDS_Type_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ArgPosWidth_11));
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

    conv0_LambdaHeadVar__2_17 = ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_const_static_args_widths__1756__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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
    MR_Word Target_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);

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

      ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_1((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), ModuleInfo_13, (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[11]), (MR_Integer) 0, VarType_7, ConsId_8, Args_9, ArgsTypesWidths_10);
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_11, (MR_Integer) 0))))) {
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
              MR_Word Fill_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_11, (MR_Integer) 6))) & (MR_Integer) 7);
              MR_Word UnboxedRHSRval_35;
              MR_Word UnboxedRvalPrime_55;
              MR_Word RvalConst_62;

              succeeded = ((((MR_tag((MR_Word) RHSRval_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), RHSRval_13, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                UnboxedRvalPrime_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RHSRval_13, (MR_Integer) 2))));
                UnboxedRHSRval_35 = UnboxedRvalPrime_55;
              }
              else
                UnboxedRHSRval_35 = RHSRval_13;
              succeeded = ((((MR_tag((MR_Word) UnboxedRHSRval_35)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), UnboxedRHSRval_35, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                RvalConst_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), UnboxedRHSRval_35, (MR_Integer) 1))));
                succeeded = ((((MR_tag((MR_Word) RvalConst_62)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), RvalConst_62, (MR_Integer) 0)))) == (MR_Integer) 20)));
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

                succeeded = ((((MR_tag((MR_Word) UnboxedRHSRval_35)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), UnboxedRHSRval_35, (MR_Integer) 0)))) == (MR_Integer) 2)));
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
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
ml_backend__ml_unify_gen_construct__ml_generate_const_structs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ConstStructMap_68;
    MR_Word conv0_STATE_VARIABLE_GlobalData_70;

    ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ConstStructMap_68, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_GlobalData_70);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ConstStructMap_68));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_GlobalData_70));
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_const_structs_5_p_0(
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
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 282, &HighLevelData_11);
    {
      Info_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_12, 0) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Info_12, 1) = (MR_Box) (((((MR_Unsigned) (Target_7) << 1)) | (MR_Unsigned) (HighLevelData_11)));
    }
    hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_6, &ConstStructDb_13);
    hlds__const_struct__const_struct_db_get_structs_2_p_0(ConstStructDb_13, &ConstStructs_14);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_const_structs_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
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
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1322__6_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1322__5_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1348__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1322__4_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1322__3_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1322__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1322__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
  MR_Word STATE_VARIABLE_GlobalData_0_76,
  MR_Word * STATE_VARIABLE_GlobalData_77,
  MR_Word STATE_VARIABLE_GroundTermMap_0_78,
  MR_Word * STATE_VARIABLE_GroundTermMap_79)
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
              MR_Word Var_113;
              MR_Word IntConst_119;

              IntConst_119 = ml_backend__ml_unify_gen_construct__int_tag_to_mlds_rval_const_3_f_0(LHSType_21, LHS_MLDS_Type_22, (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_3[3]));
              {
                ConstRval_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), ConstRval_27, 1) = ((MR_Box) (IntConst_119));
              }
              {
                Var_113 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
                MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_1));
                MR_hl_field(MR_mktag(0), Var_113, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_113, 3) = ((MR_Box) (RHSVars_19));
                MR_hl_field(MR_mktag(0), Var_113, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_113, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_conjunct\'/9", (MR_String) "constant has args");
              {
                ConstGroundTerm_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_38, 0) = ((MR_Box) (ConstRval_27));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_38, 1) = ((MR_Box) (LHSType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_38, 2) = ((MR_Box) (LHS_MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (ConstGroundTerm_38)), STATE_VARIABLE_GroundTermMap_0_78, STATE_VARIABLE_GroundTermMap_79);
              *STATE_VARIABLE_GlobalData_77 = STATE_VARIABLE_GlobalData_0_76;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word RHSVar_65;
              MR_Word RHSGroundTerm_66;
              MR_Word RHSRval_67;
              MR_Word RHS_MLDS_Type_69;
              MR_Word BoxedRHSRval0_70;
              MR_Word BoxedRHSRval_71;
              MR_Word GroundTerm_72;
              MR_Word STATE_VARIABLE_GroundTermMap_82_82;
              MR_Box conv0_RHSVar_65;
              MR_Box conv1_RHSGroundTerm_66;

              hlds__goal_form__get_notag_or_direct_arg_arg_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), RHSVars_19, &conv0_RHSVar_65);
              RHSVar_65 = ((MR_Word) (conv0_RHSVar_65));
              mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (RHSVar_65)), &conv1_RHSGroundTerm_66, STATE_VARIABLE_GroundTermMap_0_78, &STATE_VARIABLE_GroundTermMap_82_82);
              RHSGroundTerm_66 = ((MR_Word) (conv1_RHSGroundTerm_66));
              RHSRval_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSGroundTerm_66, (MR_Integer) 0))));
              RHS_MLDS_Type_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSGroundTerm_66, (MR_Integer) 2))));
              ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_10, Context_24, RHS_MLDS_Type_69, (MR_Integer) 2, RHSRval_67, &BoxedRHSRval0_70, STATE_VARIABLE_GlobalData_0_76, STATE_VARIABLE_GlobalData_77);
              BoxedRHSRval_71 = ml_backend__ml_unify_gen_construct__ml_cast_cons_tag_3_f_0(LHS_MLDS_Type_22, ConsTag_23, BoxedRHSRval0_70);
              {
                GroundTerm_72 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_72, 0) = ((MR_Box) (BoxedRHSRval_71));
                MR_hl_field(MR_mktag(0), GroundTerm_72, 1) = ((MR_Box) (LHSType_21));
                MR_hl_field(MR_mktag(0), GroundTerm_72, 2) = ((MR_Box) (LHS_MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (GroundTerm_72)), STATE_VARIABLE_GroundTermMap_82_82, STATE_VARIABLE_GroundTermMap_79);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntTag_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsTag_23, (MR_Integer) 0))));
          MR_Word IntConst_26;
          MR_Word ConstRval_169;
          MR_Word ConstGroundTerm_170;
          MR_Word Var_171;

          IntConst_26 = ml_backend__ml_unify_gen_construct__int_tag_to_mlds_rval_const_3_f_0(LHSType_21, LHS_MLDS_Type_22, IntTag_25);
          {
            ConstRval_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConstRval_169, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), ConstRval_169, 1) = ((MR_Box) (IntConst_26));
          }
          {
            Var_171 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_171, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
            MR_hl_field(MR_mktag(0), Var_171, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_4));
            MR_hl_field(MR_mktag(0), Var_171, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_171, 3) = ((MR_Box) (RHSVars_19));
            MR_hl_field(MR_mktag(0), Var_171, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_171, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_conjunct\'/9", (MR_String) "constant has args");
          {
            ConstGroundTerm_170 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConstGroundTerm_170, 0) = ((MR_Box) (ConstRval_169));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_170, 1) = ((MR_Box) (LHSType_21));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_170, 2) = ((MR_Box) (LHS_MLDS_Type_22));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (ConstGroundTerm_170)), STATE_VARIABLE_GroundTermMap_0_78, STATE_VARIABLE_GroundTermMap_79);
          *STATE_VARIABLE_GlobalData_77 = STATE_VARIABLE_GlobalData_0_76;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_28 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_23, (MR_Integer) 0)));
          MR_Word Var_112;
          MR_Word ConstRval_147;
          MR_Word ConstGroundTerm_148;
          MR_Word Var_149;

          {
            Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_112, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(MR_mktag(3), Var_112, 1) = MR_box_float(Float_28);
          }
          {
            ConstRval_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConstRval_147, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), ConstRval_147, 1) = ((MR_Box) (Var_112));
          }
          {
            Var_149 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_149, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
            MR_hl_field(MR_mktag(0), Var_149, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_2));
            MR_hl_field(MR_mktag(0), Var_149, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_149, 3) = ((MR_Box) (RHSVars_19));
            MR_hl_field(MR_mktag(0), Var_149, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_149, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_conjunct\'/9", (MR_String) "constant has args");
          {
            ConstGroundTerm_148 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConstGroundTerm_148, 0) = ((MR_Box) (ConstRval_147));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_148, 1) = ((MR_Box) (LHSType_21));
            MR_hl_field(MR_mktag(0), ConstGroundTerm_148, 2) = ((MR_Box) (LHS_MLDS_Type_22));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (ConstGroundTerm_148)), STATE_VARIABLE_GroundTermMap_0_78, STATE_VARIABLE_GroundTermMap_79);
          *STATE_VARIABLE_GlobalData_77 = STATE_VARIABLE_GlobalData_0_76;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_23, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String String_29 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_23, (MR_Integer) 1))));
              MR_Word Var_111;
              MR_Word ConstRval_191;
              MR_Word ConstGroundTerm_192;
              MR_Word Var_193;

              {
                Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_111, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(3), Var_111, 1) = ((MR_Box) (String_29));
              }
              {
                ConstRval_191 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_191, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), ConstRval_191, 1) = ((MR_Box) (Var_111));
              }
              {
                Var_193 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_193, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
                MR_hl_field(MR_mktag(0), Var_193, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_9));
                MR_hl_field(MR_mktag(0), Var_193, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_193, 3) = ((MR_Box) (RHSVars_19));
                MR_hl_field(MR_mktag(0), Var_193, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_193, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_conjunct\'/9", (MR_String) "constant has args");
              {
                ConstGroundTerm_192 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_192, 0) = ((MR_Box) (ConstRval_191));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_192, 1) = ((MR_Box) (LHSType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_192, 2) = ((MR_Box) (LHS_MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (ConstGroundTerm_192)), STATE_VARIABLE_GroundTermMap_0_78, STATE_VARIABLE_GroundTermMap_79);
              *STATE_VARIABLE_GlobalData_77 = STATE_VARIABLE_GlobalData_0_76;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsTag_23, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_String ForeignTag_31 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_23, (MR_Integer) 2))));
              MR_Word Var_110;
              MR_Word ConstRval_158;
              MR_Word ConstGroundTerm_159;
              MR_Word Var_160;

              {
                Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_110, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                MR_hl_field(MR_mktag(3), Var_110, 1) = (MR_Box) ((MR_Unsigned) (ForeignLang_30));
                MR_hl_field(MR_mktag(3), Var_110, 2) = ((MR_Box) (ForeignTag_31));
                MR_hl_field(MR_mktag(3), Var_110, 3) = ((MR_Box) (LHS_MLDS_Type_22));
              }
              {
                ConstRval_158 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_158, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), ConstRval_158, 1) = ((MR_Box) (Var_110));
              }
              {
                Var_160 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_160, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
                MR_hl_field(MR_mktag(0), Var_160, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_3));
                MR_hl_field(MR_mktag(0), Var_160, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_160, 3) = ((MR_Box) (RHSVars_19));
                MR_hl_field(MR_mktag(0), Var_160, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_160, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_conjunct\'/9", (MR_String) "constant has args");
              {
                ConstGroundTerm_159 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_159, 0) = ((MR_Box) (ConstRval_158));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_159, 1) = ((MR_Box) (LHSType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_159, 2) = ((MR_Box) (LHS_MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (ConstGroundTerm_159)), STATE_VARIABLE_GroundTermMap_0_78, STATE_VARIABLE_GroundTermMap_79);
              *STATE_VARIABLE_GlobalData_77 = STATE_VARIABLE_GlobalData_0_76;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word LocalSectag_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_23, (MR_Integer) 2))));
              MR_Unsigned PrimSec_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_33, (MR_Integer) 1))));
              MR_Word Var_107;
              MR_Word Var_108;
              MR_Word ConstRval_180;
              MR_Word ConstGroundTerm_181;
              MR_Word Var_182;

              {
                Var_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_108, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_108, 1) = ((MR_Box) (PrimSec_36));
              }
              {
                Var_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_107, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_107, 1) = ((MR_Box) (Var_108));
              }
              {
                ConstRval_180 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstRval_180, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), ConstRval_180, 1) = ((MR_Box) (LHS_MLDS_Type_22));
                MR_hl_field(MR_mktag(3), ConstRval_180, 2) = ((MR_Box) (Var_107));
              }
              {
                Var_182 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_182, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
                MR_hl_field(MR_mktag(0), Var_182, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_8));
                MR_hl_field(MR_mktag(0), Var_182, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_182, 3) = ((MR_Box) (RHSVars_19));
                MR_hl_field(MR_mktag(0), Var_182, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_182, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_conjunct\'/9", (MR_String) "constant has args");
              {
                ConstGroundTerm_181 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_181, 0) = ((MR_Box) (ConstRval_180));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_181, 1) = ((MR_Box) (LHSType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_181, 2) = ((MR_Box) (LHS_MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (ConstGroundTerm_181)), STATE_VARIABLE_GroundTermMap_0_78, STATE_VARIABLE_GroundTermMap_79);
              *STATE_VARIABLE_GlobalData_77 = STATE_VARIABLE_GlobalData_0_76;
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
            {
              MR_Word RemoteArgsTagInfo_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_23, (MR_Integer) 1))));

              ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0(ModuleInfo_10, Target_11, HighLevelData_12, VarTypes_13, LHSVar_17, LHSType_21, LHS_MLDS_Type_22, ConsId_18, RemoteArgsTagInfo_63, RHSVars_19, Context_24, STATE_VARIABLE_GlobalData_0_76, STATE_VARIABLE_GlobalData_77, STATE_VARIABLE_GroundTermMap_0_78, STATE_VARIABLE_GroundTermMap_79);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word LocalArgsTagInfo_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_23, (MR_Integer) 1))));
              MR_Word RHSVarsTypesWidths_58;
              MR_Word RevOrRvals_59;
              MR_Word OrRvals_60;
              MR_Word TagwordRval_61;
              MR_Word CastTagwordRval_62;
              MR_Word Var_93;
              MR_Word Var_95;
              MR_Word STATE_VARIABLE_GroundTermMap_101_101;
              MR_Word Var_102;
              MR_Word Var_103;
              MR_Word LocalSectag_123;
              MR_Unsigned PrimSec_124;
              MR_Word ConstGroundTerm_125;
              MR_Box conv6_RevOrRvals_59;
              MR_Box conv5_STATE_VARIABLE_GroundTermMap_101_101;

              if ((LocalArgsTagInfo_55 == (MR_Word) ((MR_Unsigned) 0U)))
                LocalSectag_123 = (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[3]);
              else
                LocalSectag_123 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArgsTagInfo_55, (MR_Integer) 1))));
              PrimSec_124 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_123, (MR_Integer) 1))));
              {
                Var_93 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_5[2]));
                MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_5));
                MR_hl_field(MR_mktag(0), Var_93, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_93, 3) = ((MR_Box) (VarTypes_13));
              }
              ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_1((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), ModuleInfo_10, Var_93, (MR_Integer) 0, LHSType_21, ConsId_18, RHSVars_19, &RHSVarsTypesWidths_58);
              {
                Var_95 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[6]));
                MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_6));
                MR_hl_field(MR_mktag(0), Var_95, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_95, 3) = ((MR_Box) (HighLevelData_12));
                MR_hl_field(MR_mktag(0), Var_95, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_95, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_conjunct\'/9", (MR_String) "HighLevelData = yes");
              mercury__list__foldl2_6_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[3]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[4]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[2]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[10]), RHSVarsTypesWidths_58, ((MR_Box) ((MR_Unsigned) 0U)), &conv6_RevOrRvals_59, ((MR_Box) (STATE_VARIABLE_GroundTermMap_0_78)), &conv5_STATE_VARIABLE_GroundTermMap_101_101);
              RevOrRvals_59 = ((MR_Word) (conv6_RevOrRvals_59));
              STATE_VARIABLE_GroundTermMap_101_101 = ((MR_Word) (conv5_STATE_VARIABLE_GroundTermMap_101_101));
              mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevOrRvals_59, &OrRvals_60);
              {
                Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_103, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_103, 1) = ((MR_Box) (PrimSec_124));
              }
              {
                Var_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_102, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_102, 1) = ((MR_Box) (Var_103));
              }
              TagwordRval_61 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(Var_102, OrRvals_60);
              {
                CastTagwordRval_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastTagwordRval_62, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), CastTagwordRval_62, 1) = ((MR_Box) (LHS_MLDS_Type_22));
                MR_hl_field(MR_mktag(3), CastTagwordRval_62, 2) = ((MR_Box) (TagwordRval_61));
              }
              {
                ConstGroundTerm_125 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ConstGroundTerm_125, 0) = ((MR_Box) (CastTagwordRval_62));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_125, 1) = ((MR_Box) (LHSType_21));
                MR_hl_field(MR_mktag(0), ConstGroundTerm_125, 2) = ((MR_Box) (LHS_MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (ConstGroundTerm_125)), STATE_VARIABLE_GroundTermMap_101_101, STATE_VARIABLE_GroundTermMap_79);
              *STATE_VARIABLE_GlobalData_77 = STATE_VARIABLE_GlobalData_0_76;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word RHSVar_65;
              MR_Word RHSGroundTerm_66;
              MR_Word RHSRval_67;
              MR_Word RHS_MLDS_Type_69;
              MR_Word BoxedRHSRval0_70;
              MR_Word BoxedRHSRval_71;
              MR_Word GroundTerm_72;
              MR_Word STATE_VARIABLE_GroundTermMap_82_82;
              MR_Box conv0_RHSVar_65;
              MR_Box conv1_RHSGroundTerm_66;

              hlds__goal_form__get_notag_or_direct_arg_arg_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), RHSVars_19, &conv0_RHSVar_65);
              RHSVar_65 = ((MR_Word) (conv0_RHSVar_65));
              mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (RHSVar_65)), &conv1_RHSGroundTerm_66, STATE_VARIABLE_GroundTermMap_0_78, &STATE_VARIABLE_GroundTermMap_82_82);
              RHSGroundTerm_66 = ((MR_Word) (conv1_RHSGroundTerm_66));
              RHSRval_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSGroundTerm_66, (MR_Integer) 0))));
              RHS_MLDS_Type_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSGroundTerm_66, (MR_Integer) 2))));
              ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_10, Context_24, RHS_MLDS_Type_69, (MR_Integer) 2, RHSRval_67, &BoxedRHSRval0_70, STATE_VARIABLE_GlobalData_0_76, STATE_VARIABLE_GlobalData_77);
              BoxedRHSRval_71 = ml_backend__ml_unify_gen_construct__ml_cast_cons_tag_3_f_0(LHS_MLDS_Type_22, ConsTag_23, BoxedRHSRval0_70);
              {
                GroundTerm_72 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_72, 0) = ((MR_Box) (BoxedRHSRval_71));
                MR_hl_field(MR_mktag(0), GroundTerm_72, 1) = ((MR_Box) (LHSType_21));
                MR_hl_field(MR_mktag(0), GroundTerm_72, 2) = ((MR_Box) (LHS_MLDS_Type_22));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (GroundTerm_72)), STATE_VARIABLE_GroundTermMap_82_82, STATE_VARIABLE_GroundTermMap_79);
            }
            break;
          case (MR_Integer) 14:
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
    MR_bool succeeded;
    MR_Word CastRval_8;
    MR_Word ToCastRval_9;

    if ((ConsTag_6 == (MR_Word) ((MR_Unsigned) 4U)))
      ToCastRval_9 = Rval_7;
    else
    {
      MR_Word Ptag_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_6, (MR_Integer) 1))));
      uint8_t Var_11 = (uint8_t) (Ptag_10);

      succeeded = (Var_11 == UINT8_C(0));
      if (succeeded)
        ToCastRval_9 = Rval_7;
      else
        {
          ToCastRval_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ToCastRval_9, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), ToCastRval_9, 1) = ((MR_Box) (Ptag_10));
          MR_hl_field(MR_mktag(3), ToCastRval_9, 2) = ((MR_Box) (Rval_7));
        }
    }
    {
      CastRval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CastRval_8, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), CastRval_8, 1) = ((MR_Box) (Type_5));
      MR_hl_field(MR_mktag(3), CastRval_8, 2) = ((MR_Box) (ToCastRval_9));
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
              Const_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Const_8, 0) = ((MR_Box) (Int_9));
            }
          else
          {
            MR_Word Var_20;

            Var_20 = parse_tree__builtin_lib_types__char_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_5, Var_20);
            if (succeeded)
              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (Int_9));
              }
            else
              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) ((MR_Unsigned) 9U));
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
            Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (UInt_10));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          int8_t Int8_11 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(2), IntTag_7, (MR_Integer) 0)));

          {
            Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (MR_Word) (Int8_11));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              uint8_t UInt8_12 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 1)));

              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (MR_Word) (UInt8_12));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              int16_t Int16_13 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 1)));

              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (MR_Word) (Int16_13));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              uint16_t UInt16_14 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 1)));

              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (MR_Word) (UInt16_14));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              int32_t Int32_15 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 1)));

              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (MR_Word) (Int32_15));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              uint32_t UInt32_16 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 1)));

              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), Const_8, 1) = ((MR_Box) (MR_Word) (UInt32_16));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              int64_t Int64_17 = MR_unbox_int64((MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 1)));

              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), Const_8, 1) = MR_box_int64(Int64_17);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              uint64_t UInt64_18 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), IntTag_7, (MR_Integer) 1)));

              {
                Const_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_8, 0) = ((MR_Box) ((MR_Unsigned) 8U));
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

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_RevOrRvals_17;
    MR_Word conv1_STATE_VARIABLE_GroundTermMap_19;

    ml_backend__ml_unify_gen_construct__construct_ground_term_tagword_initializer_lld_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_RevOrRvals_17, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_GroundTermMap_19);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_RevOrRvals_17));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_GroundTermMap_19));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_memory_cell__1445__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_memory_cell__1428__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_memory_cell__1418__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_1(
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
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word Target_17,
  MR_Word HighLevelData_18,
  MR_Word VarTypes_19,
  MR_Word LHSVar_20,
  MR_Word LHSType_21,
  MR_Word LHS_MLDS_Type_22,
  MR_Word ConsId_23,
  MR_Word RemoteArgsTagInfo_24,
  MR_Word RHSVars_25,
  MR_Word Context_26,
  MR_Word STATE_VARIABLE_GlobalData_0_48,
  MR_Word * STATE_VARIABLE_GlobalData_49,
  MR_Word STATE_VARIABLE_GroundTermMap_0_50,
  MR_Word * STATE_VARIABLE_GroundTermMap_51)
{
  {
    MR_bool succeeded;
    MR_Word RHSVarsTypesWidths_29;
    MR_Word UsesBaseClass_30;
    MR_Word Ptag_31;
    MR_Word TagwordRHSRvals_34;
    MR_Word NonTagwordRHSVarsTypesWidths_35;
    MR_Word NonTagwordRHSRvalsTypesWidths_46;
    MR_Word GroundTerm_47;
    MR_Word Var_52;
    MR_Word STATE_VARIABLE_GroundTermMap_64_64;
    MR_Word STATE_VARIABLE_GlobalData_79_79;
    MR_Word STATE_VARIABLE_GroundTermMap_80_80;
    MR_Word Var_81;

    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_1));
      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (VarTypes_19));
    }
    ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_1((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), ModuleInfo_16, Var_52, (MR_Integer) 0, LHSType_21, ConsId_23, RHSVars_25, &RHSVarsTypesWidths_29);
    switch (MR_tag((MR_Word) RemoteArgsTagInfo_24)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          UsesBaseClass_30 = (MR_Integer) 1;
          Ptag_31 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
          TagwordRHSRvals_34 = (MR_Word) ((MR_Unsigned) 0U);
          NonTagwordRHSVarsTypesWidths_35 = RHSVarsTypesWidths_29;
          STATE_VARIABLE_GroundTermMap_64_64 = STATE_VARIABLE_GroundTermMap_0_50;
        }
        break;
      case (MR_Integer) 1:
        {
          Ptag_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RemoteArgsTagInfo_24, (MR_Integer) 0))));
          UsesBaseClass_30 = (MR_Integer) 0;
          TagwordRHSRvals_34 = (MR_Word) ((MR_Unsigned) 0U);
          NonTagwordRHSVarsTypesWidths_35 = RHSVarsTypesWidths_29;
          STATE_VARIABLE_GroundTermMap_64_64 = STATE_VARIABLE_GroundTermMap_0_50;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word RemoteSectag_36;
          MR_Unsigned SectagUint_37;
          MR_Word SectagSize_38;
          MR_Word TagwordRHSRval_40;
          MR_Word Var_54;
          MR_Word UsesConstructors_84;

          Ptag_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_24, (MR_Integer) 0))));
          RemoteSectag_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_24, (MR_Integer) 1))));
          UsesBaseClass_30 = (MR_Integer) 0;
          UsesConstructors_84 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_17);
          {
            Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[6]));
            MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_3));
            MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) (UsesConstructors_84));
          }
          mercury__require__expect_3_p_0(Var_54, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_memory_cell\'/15", (MR_String) "remote_args_shared but UsesConstructors = yes");
          SectagUint_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_36, (MR_Integer) 0))));
          SectagSize_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_36, (MR_Integer) 1))));
          if ((SectagSize_38 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word SectagRval0_39;
            MR_Word Var_68;

            {
              Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (SectagUint_37));
            }
            {
              SectagRval0_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), SectagRval0_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), SectagRval0_39, 1) = ((MR_Box) (Var_68));
            }
            switch (HighLevelData_18) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    TagwordRHSRval_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), TagwordRHSRval_40, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(MR_mktag(3), TagwordRHSRval_40, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(3), TagwordRHSRval_40, 2) = ((MR_Box) (SectagRval0_39));
                  }
                }
                break;
              case (MR_Integer) 1:
                TagwordRHSRval_40 = SectagRval0_39;
                break;
            }
            NonTagwordRHSVarsTypesWidths_35 = RHSVarsTypesWidths_29;
            STATE_VARIABLE_GroundTermMap_64_64 = STATE_VARIABLE_GroundTermMap_0_50;
          }
          else
          {
            MR_Word TagwordRHSVarsTypesWidths_42;
            MR_Word RevToOrRvals_43;
            MR_Word ToOrRvals_44;
            MR_Word RawTagwordRHSRval_45;
            MR_Word Var_58;
            MR_Word Var_65;
            MR_Word Var_66;
            MR_Box conv4_RevToOrRvals_43;
            MR_Box conv3_STATE_VARIABLE_GroundTermMap_64_64;

            {
              Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[6]));
              MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_4));
              MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (HighLevelData_18));
              MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_3_p_0(Var_58, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_memory_cell\'/15", (MR_String) "HighLevelData = yes");
            ml_backend__ml_unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_116_97_107_101_95_116_97_103_119_111_114_100_95_97_114_103_115_95_116_121_112_101_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(RHSVarsTypesWidths_29, &TagwordRHSVarsTypesWidths_42, &NonTagwordRHSVarsTypesWidths_35);
            mercury__list__foldl2_6_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[3]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[4]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[2]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[9]), TagwordRHSVarsTypesWidths_42, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_RevToOrRvals_43, ((MR_Box) (STATE_VARIABLE_GroundTermMap_0_50)), &conv3_STATE_VARIABLE_GroundTermMap_64_64);
            RevToOrRvals_43 = ((MR_Word) (conv4_RevToOrRvals_43));
            STATE_VARIABLE_GroundTermMap_64_64 = ((MR_Word) (conv3_STATE_VARIABLE_GroundTermMap_64_64));
            mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevToOrRvals_43, &ToOrRvals_44);
            {
              Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (SectagUint_37));
            }
            {
              Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (Var_66));
            }
            RawTagwordRHSRval_45 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(Var_65, ToOrRvals_44);
            {
              TagwordRHSRval_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), TagwordRHSRval_40, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), TagwordRHSRval_40, 1) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(3), TagwordRHSRval_40, 2) = ((MR_Box) (RawTagwordRHSRval_45));
            }
          }
          {
            TagwordRHSRvals_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), TagwordRHSRvals_34, 0) = ((MR_Box) (TagwordRHSRval_40));
            MR_hl_field(MR_mktag(1), TagwordRHSRvals_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word UsesConstructors_33;
          MR_Word Var_71;

          UsesBaseClass_30 = (MR_Integer) 0;
          UsesConstructors_33 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_17);
          {
            Var_71 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[6]));
            MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_2));
            MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (UsesConstructors_33));
            MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__require__expect_3_p_0(Var_71, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_memory_cell\'/15", (MR_String) "remote_args_ctor but UsesConstructors = no");
          Ptag_31 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
          TagwordRHSRvals_34 = (MR_Word) ((MR_Unsigned) 0U);
          NonTagwordRHSVarsTypesWidths_35 = RHSVarsTypesWidths_29;
          STATE_VARIABLE_GroundTermMap_64_64 = STATE_VARIABLE_GroundTermMap_0_50;
        }
        break;
    }
    switch (HighLevelData_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_unify_gen_construct__construct_ground_term_initializers_lld_8_p_0(ModuleInfo_16, Context_26, NonTagwordRHSVarsTypesWidths_35, &NonTagwordRHSRvalsTypesWidths_46, STATE_VARIABLE_GlobalData_0_48, &STATE_VARIABLE_GlobalData_79_79, STATE_VARIABLE_GroundTermMap_64_64, &STATE_VARIABLE_GroundTermMap_80_80);
        break;
      case (MR_Integer) 1:
        ml_backend__ml_unify_gen_construct__construct_ground_term_initializers_hld_8_p_0(ModuleInfo_16, Context_26, NonTagwordRHSVarsTypesWidths_35, &NonTagwordRHSRvalsTypesWidths_46, STATE_VARIABLE_GlobalData_0_48, &STATE_VARIABLE_GlobalData_79_79, STATE_VARIABLE_GroundTermMap_64_64, &STATE_VARIABLE_GroundTermMap_80_80);
        break;
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (ConsId_23));
    }
    ml_backend__ml_unify_gen_construct__construct_static_ground_term_14_p_0(ModuleInfo_16, Target_17, HighLevelData_18, Context_26, LHSType_21, LHS_MLDS_Type_22, Var_81, UsesBaseClass_30, Ptag_31, TagwordRHSRvals_34, NonTagwordRHSRvalsTypesWidths_46, &GroundTerm_47, STATE_VARIABLE_GlobalData_79_79, STATE_VARIABLE_GlobalData_49);
    mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_20)), ((MR_Box) (GroundTerm_47)), STATE_VARIABLE_GroundTermMap_80_80, STATE_VARIABLE_GroundTermMap_51);
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_116_97_107_101_95_116_97_103_119_111_114_100_95_97_114_103_115_95_116_121_112_101_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ArgTypeWidth_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgsTypesWidths_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgPosWidth_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeWidth_4, (MR_Integer) 2))));

    switch (MR_tag((MR_Word) ArgPosWidth_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          *HeadVar__3_3 = HeadVar__1_1;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          *HeadVar__3_3 = HeadVar__1_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
              *HeadVar__3_3 = HeadVar__1_1;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word TailTagwordArgsTypesWidths_19;

              ml_backend__ml_unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_116_97_107_101_95_116_97_103_119_111_114_100_95_97_114_103_115_95_116_121_112_101_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(ArgsTypesWidths_5, &TailTagwordArgsTypesWidths_19, HeadVar__3_3);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgTypeWidth_4));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTagwordArgsTypesWidths_19));
              }
            }
            break;
        }
        break;
    }
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
      RHSRvalTypeWidth_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RHSRvalTypeWidth_21, 0) = ((MR_Box) (RHSRval_51));
      MR_hl_field(MR_mktag(0), RHSRvalTypeWidth_21, 1) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(0), RHSRvalTypeWidth_21, 2) = ((MR_Box) (ArgPosWidth_45));
    }
    ml_backend__ml_unify_gen_construct__construct_ground_term_initializers_lld_8_p_0(ModuleInfo_1, Context_2, RHSVarsTypesWidths_20, &RHSRvalsTypesWidths_22, STATE_VARIABLE_GlobalData_29_29, STATE_VARIABLE_GlobalData_6, STATE_VARIABLE_GroundTermMap_30_30, STATE_VARIABLE_GroundTermMap_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
      RHSRvalTypeWidth_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RHSRvalTypeWidth_21, 0) = ((MR_Box) (RHSRval_52));
      MR_hl_field(MR_mktag(0), RHSRvalTypeWidth_21, 1) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(0), RHSRvalTypeWidth_21, 2) = ((MR_Box) (ArgPosWidth_45));
    }
    ml_backend__ml_unify_gen_construct__construct_ground_term_initializers_hld_8_p_0(ModuleInfo_1, Context_2, RHSVarsTypesWidths_20, &RHSRvalsTypesWidths_22, STATE_VARIABLE_GlobalData_29_29, STATE_VARIABLE_GlobalData_6, STATE_VARIABLE_GroundTermMap_30_30, STATE_VARIABLE_GroundTermMap_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__226__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__238__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__145__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
  MR_Word STATE_VARIABLE_Info_0_97,
  MR_Word * STATE_VARIABLE_Info_98)
{
  {
    MR_bool succeeded;
    MR_Word ConsTag_22;

    ml_backend__ml_unify_gen_util__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_97, ConsId_13, &ConsTag_22);
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
              MR_Word Var_111;

              {
                Var_111 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
                MR_hl_field(MR_mktag(0), Var_111, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_1));
                MR_hl_field(MR_mktag(0), Var_111, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_111, 3) = ((MR_Box) (RHSVars_14));
                MR_hl_field(MR_mktag(0), Var_111, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_111, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "constant has arguments");
              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_97, LHSVar_12, &LHSType_47);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_97, LHSVar_12, &LHSLval_48);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_97, &ModuleInfo_49);
              LHS_MLDS_Type_50 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_49, LHSType_47);
              switch (MR_tag((MR_Word) ConsTag_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ConstRval_52 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_3[3]), LHSType_47, LHS_MLDS_Type_50);
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
                    MR_Word Var_133;

                    {
                      Var_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_133, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                      MR_hl_field(MR_mktag(3), Var_133, 1) = MR_box_float(Float_53);
                    }
                    {
                      ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_133));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_String String_54 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word Var_132;

                        {
                          Var_132 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_132, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                          MR_hl_field(MR_mktag(3), Var_132, 1) = ((MR_Box) (String_54));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_132));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ForeignLang_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))) & (MR_Integer) 3);
                        MR_String ForeignTag_56 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_Word Var_131;

                        {
                          Var_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_131, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                          MR_hl_field(MR_mktag(3), Var_131, 1) = (MR_Box) ((MR_Unsigned) (ForeignLang_55));
                          MR_hl_field(MR_mktag(3), Var_131, 2) = ((MR_Box) (ForeignTag_56));
                          MR_hl_field(MR_mktag(3), Var_131, 3) = ((MR_Box) (LHS_MLDS_Type_50));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_131));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word LocalSectag_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_Unsigned PrimSec_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_58, (MR_Integer) 1))));
                        MR_Word Var_127;
                        MR_Word Var_128;

                        {
                          Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(3), Var_128, 1) = ((MR_Box) (PrimSec_61));
                        }
                        {
                          Var_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_127, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), Var_127, 1) = ((MR_Box) (Var_128));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (LHS_MLDS_Type_50));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_127));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Integer ConstNum_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word ConstStructMap_65;
                        MR_Word GroundTerm0_66;
                        MR_Box conv0_GroundTerm0_66;

                        ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_97, &ConstStructMap_65);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_65, ConstNum_63, &conv0_GroundTerm0_66);
                        GroundTerm0_66 = ((MR_Word) (conv0_GroundTerm0_66));
                        ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_66, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Integer ConstNum_150 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word ConstStructMap_151;
                        MR_Word GroundTerm0_152;
                        MR_Box conv1_GroundTerm0_152;

                        ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_97, &ConstStructMap_151);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_151, ConstNum_150, &conv1_GroundTerm0_152);
                        GroundTerm0_152 = ((MR_Word) (conv1_GroundTerm0_152));
                        ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_152, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Integer ConstNum_159 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word ConstStructMap_160;
                        MR_Word GroundTerm0_161;
                        MR_Box conv2_GroundTerm0_161;

                        ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_97, &ConstStructMap_160);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_160, ConstNum_159, &conv2_GroundTerm0_161);
                        GroundTerm0_161 = ((MR_Word) (conv2_GroundTerm0_161));
                        ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_161, (MR_Integer) 0))));
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
                        uint16_t Var_124;
                        MR_Word Var_126;

                        ModuleName_72 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_69);
                        MLDS_Module_73 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_72);
                        Var_124 = mercury__uint16__det_from_int_1_f_0(TypeArity_71);
                        {
                          RttiTypeCtor_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 0) = ((MR_Box) (ModuleName_72));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 1) = ((MR_Box) (TypeName_70));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 2) = ((MR_Box) (MR_Word) (Var_124));
                        }
                        {
                          RttiId_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), RttiId_75, 0) = ((MR_Box) (RttiTypeCtor_74));
                          MR_hl_field(MR_mktag(0), RttiId_75, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                        }
                        {
                          Const_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_76, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                          MR_hl_field(MR_mktag(3), Const_76, 1) = ((MR_Box) (MLDS_Module_73));
                          MR_hl_field(MR_mktag(3), Const_76, 2) = ((MR_Box) (RttiId_75));
                        }
                        {
                          Var_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_126, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), Var_126, 1) = ((MR_Box) (Const_76));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (LHS_MLDS_Type_50));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_126));
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Word ClassId_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_String Instance_78 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                        MR_Word TCName_79;
                        MR_Word Var_122;
                        MR_Word Var_123;
                        MR_Word ModuleName_136 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word MLDS_Module_137;
                        MR_Word RttiId_138;
                        MR_Word Const_139;

                        MLDS_Module_137 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_136);
                        TCName_79 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_77);
                        {
                          Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (ModuleName_136));
                          MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Instance_78));
                        }
                        {
                          RttiId_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), RttiId_138, 0) = ((MR_Box) (TCName_79));
                          MR_hl_field(MR_mktag(1), RttiId_138, 1) = ((MR_Box) (Var_122));
                        }
                        {
                          Const_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_139, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                          MR_hl_field(MR_mktag(3), Const_139, 1) = ((MR_Box) (MLDS_Module_137));
                          MR_hl_field(MR_mktag(3), Const_139, 2) = ((MR_Box) (RttiId_138));
                        }
                        {
                          Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_123, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), Var_123, 1) = ((MR_Box) (Const_139));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (LHS_MLDS_Type_50));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_123));
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
                        MR_Word Var_117;
                        MR_Word Var_119;
                        MR_Word Const_140;

                        {
                          Var_117 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_117, 0) = ((MR_Box) (PredId_82));
                          MR_hl_field(MR_mktag(0), Var_117, 1) = ((MR_Box) (ProcId_83));
                        }
                        ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_49, Var_117, &PredLabel_84, &PredModule_85);
                        {
                          ProcLabel_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ProcLabel_86, 0) = ((MR_Box) (PredLabel_84));
                          MR_hl_field(MR_mktag(0), ProcLabel_86, 1) = ((MR_Box) (ProcId_83));
                        }
                        {
                          QualProcLabel_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), QualProcLabel_87, 0) = ((MR_Box) (PredModule_85));
                          MR_hl_field(MR_mktag(0), QualProcLabel_87, 1) = ((MR_Box) (ProcLabel_86));
                        }
                        {
                          Const_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_140, 0) = ((MR_Box) ((MR_Unsigned) 19U));
                          MR_hl_field(MR_mktag(3), Const_140, 1) = ((MR_Box) (QualProcLabel_87));
                          MR_hl_field(MR_mktag(3), Const_140, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (Const_140));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (LHS_MLDS_Type_50));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_119));
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
                GroundTerm_90 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_90, 0) = ((MR_Box) (ConstRval_52));
                MR_hl_field(MR_mktag(0), GroundTerm_90, 1) = ((MR_Box) (LHSType_47));
                MR_hl_field(MR_mktag(0), GroundTerm_90, 2) = ((MR_Box) (LHS_MLDS_Type_50));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_12, GroundTerm_90, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
              Stmt_91 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_48, ConstRval_52, Context_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_20 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_91));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_100;

              {
                Var_100 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[9]));
                MR_hl_field(MR_mktag(0), Var_100, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_2));
                MR_hl_field(MR_mktag(0), Var_100, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_100, 3) = ((MR_Box) (TakeAddr_16));
                MR_hl_field(MR_mktag(0), Var_100, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_100, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "notag or direct_arg_tag: take_addr");
              ml_backend__ml_unify_gen_construct__ml_genenate_dynamic_construct_notag_direct_arg_8_p_0(LHSVar_12, ConsTag_22, RHSVars_14, ArgModes_15, Context_18, Stmts_20, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
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
          MR_Word Var_111;

          {
            Var_111 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
            MR_hl_field(MR_mktag(0), Var_111, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_1));
            MR_hl_field(MR_mktag(0), Var_111, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_111, 3) = ((MR_Box) (RHSVars_14));
            MR_hl_field(MR_mktag(0), Var_111, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_111, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "constant has arguments");
          ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_97, LHSVar_12, &LHSType_47);
          ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_97, LHSVar_12, &LHSLval_48);
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_97, &ModuleInfo_49);
          LHS_MLDS_Type_50 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_49, LHSType_47);
          switch (MR_tag((MR_Word) ConsTag_22)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ConstRval_52 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_3[3]), LHSType_47, LHS_MLDS_Type_50);
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
                MR_Word Var_133;

                {
                  Var_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_133, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                  MR_hl_field(MR_mktag(3), Var_133, 1) = MR_box_float(Float_53);
                }
                {
                  ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_133));
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_String String_54 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                    MR_Word Var_132;

                    {
                      Var_132 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_132, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(3), Var_132, 1) = ((MR_Box) (String_54));
                    }
                    {
                      ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_132));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ForeignLang_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))) & (MR_Integer) 3);
                    MR_String ForeignTag_56 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                    MR_Word Var_131;

                    {
                      Var_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_131, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                      MR_hl_field(MR_mktag(3), Var_131, 1) = (MR_Box) ((MR_Unsigned) (ForeignLang_55));
                      MR_hl_field(MR_mktag(3), Var_131, 2) = ((MR_Box) (ForeignTag_56));
                      MR_hl_field(MR_mktag(3), Var_131, 3) = ((MR_Box) (LHS_MLDS_Type_50));
                    }
                    {
                      ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_131));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word LocalSectag_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                    MR_Unsigned PrimSec_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_58, (MR_Integer) 1))));
                    MR_Word Var_127;
                    MR_Word Var_128;

                    {
                      Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), Var_128, 1) = ((MR_Box) (PrimSec_61));
                    }
                    {
                      Var_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_127, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), Var_127, 1) = ((MR_Box) (Var_128));
                    }
                    {
                      ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (LHS_MLDS_Type_50));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_127));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Integer ConstNum_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                    MR_Word ConstStructMap_65;
                    MR_Word GroundTerm0_66;
                    MR_Box conv0_GroundTerm0_66;

                    ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_97, &ConstStructMap_65);
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_65, ConstNum_63, &conv0_GroundTerm0_66);
                    GroundTerm0_66 = ((MR_Word) (conv0_GroundTerm0_66));
                    ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_66, (MR_Integer) 0))));
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Integer ConstNum_150 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                    MR_Word ConstStructMap_151;
                    MR_Word GroundTerm0_152;
                    MR_Box conv1_GroundTerm0_152;

                    ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_97, &ConstStructMap_151);
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_151, ConstNum_150, &conv1_GroundTerm0_152);
                    GroundTerm0_152 = ((MR_Word) (conv1_GroundTerm0_152));
                    ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_152, (MR_Integer) 0))));
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Integer ConstNum_159 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                    MR_Word ConstStructMap_160;
                    MR_Word GroundTerm0_161;
                    MR_Box conv2_GroundTerm0_161;

                    ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_97, &ConstStructMap_160);
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_160, ConstNum_159, &conv2_GroundTerm0_161);
                    GroundTerm0_161 = ((MR_Word) (conv2_GroundTerm0_161));
                    ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_161, (MR_Integer) 0))));
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
                    uint16_t Var_124;
                    MR_Word Var_126;

                    ModuleName_72 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_69);
                    MLDS_Module_73 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_72);
                    Var_124 = mercury__uint16__det_from_int_1_f_0(TypeArity_71);
                    {
                      RttiTypeCtor_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 0) = ((MR_Box) (ModuleName_72));
                      MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 1) = ((MR_Box) (TypeName_70));
                      MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 2) = ((MR_Box) (MR_Word) (Var_124));
                    }
                    {
                      RttiId_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), RttiId_75, 0) = ((MR_Box) (RttiTypeCtor_74));
                      MR_hl_field(MR_mktag(0), RttiId_75, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                    }
                    {
                      Const_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Const_76, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                      MR_hl_field(MR_mktag(3), Const_76, 1) = ((MR_Box) (MLDS_Module_73));
                      MR_hl_field(MR_mktag(3), Const_76, 2) = ((MR_Box) (RttiId_75));
                    }
                    {
                      Var_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_126, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), Var_126, 1) = ((MR_Box) (Const_76));
                    }
                    {
                      ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (LHS_MLDS_Type_50));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_126));
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word ClassId_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                    MR_String Instance_78 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                    MR_Word TCName_79;
                    MR_Word Var_122;
                    MR_Word Var_123;
                    MR_Word ModuleName_136 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                    MR_Word MLDS_Module_137;
                    MR_Word RttiId_138;
                    MR_Word Const_139;

                    MLDS_Module_137 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_136);
                    TCName_79 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_77);
                    {
                      Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (ModuleName_136));
                      MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Instance_78));
                    }
                    {
                      RttiId_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), RttiId_138, 0) = ((MR_Box) (TCName_79));
                      MR_hl_field(MR_mktag(1), RttiId_138, 1) = ((MR_Box) (Var_122));
                    }
                    {
                      Const_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Const_139, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                      MR_hl_field(MR_mktag(3), Const_139, 1) = ((MR_Box) (MLDS_Module_137));
                      MR_hl_field(MR_mktag(3), Const_139, 2) = ((MR_Box) (RttiId_138));
                    }
                    {
                      Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_123, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), Var_123, 1) = ((MR_Box) (Const_139));
                    }
                    {
                      ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (LHS_MLDS_Type_50));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_123));
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
                    MR_Word Var_117;
                    MR_Word Var_119;
                    MR_Word Const_140;

                    {
                      Var_117 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_117, 0) = ((MR_Box) (PredId_82));
                      MR_hl_field(MR_mktag(0), Var_117, 1) = ((MR_Box) (ProcId_83));
                    }
                    ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_49, Var_117, &PredLabel_84, &PredModule_85);
                    {
                      ProcLabel_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ProcLabel_86, 0) = ((MR_Box) (PredLabel_84));
                      MR_hl_field(MR_mktag(0), ProcLabel_86, 1) = ((MR_Box) (ProcId_83));
                    }
                    {
                      QualProcLabel_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), QualProcLabel_87, 0) = ((MR_Box) (PredModule_85));
                      MR_hl_field(MR_mktag(0), QualProcLabel_87, 1) = ((MR_Box) (ProcLabel_86));
                    }
                    {
                      Const_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Const_140, 0) = ((MR_Box) ((MR_Unsigned) 19U));
                      MR_hl_field(MR_mktag(3), Const_140, 1) = ((MR_Box) (QualProcLabel_87));
                      MR_hl_field(MR_mktag(3), Const_140, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (Const_140));
                    }
                    {
                      ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (LHS_MLDS_Type_50));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_119));
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
            GroundTerm_90 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), GroundTerm_90, 0) = ((MR_Box) (ConstRval_52));
            MR_hl_field(MR_mktag(0), GroundTerm_90, 1) = ((MR_Box) (LHSType_47));
            MR_hl_field(MR_mktag(0), GroundTerm_90, 2) = ((MR_Box) (LHS_MLDS_Type_50));
          }
          ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_12, GroundTerm_90, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
          Stmt_91 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_48, ConstRval_52, Context_18);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_20 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_91));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 0))))) {
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
              MR_Word Var_111;

              {
                Var_111 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
                MR_hl_field(MR_mktag(0), Var_111, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_1));
                MR_hl_field(MR_mktag(0), Var_111, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_111, 3) = ((MR_Box) (RHSVars_14));
                MR_hl_field(MR_mktag(0), Var_111, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_111, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "constant has arguments");
              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_97, LHSVar_12, &LHSType_47);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_97, LHSVar_12, &LHSLval_48);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_97, &ModuleInfo_49);
              LHS_MLDS_Type_50 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_49, LHSType_47);
              switch (MR_tag((MR_Word) ConsTag_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ConstRval_52 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_3[3]), LHSType_47, LHS_MLDS_Type_50);
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
                    MR_Word Var_133;

                    {
                      Var_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_133, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                      MR_hl_field(MR_mktag(3), Var_133, 1) = MR_box_float(Float_53);
                    }
                    {
                      ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_133));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_String String_54 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word Var_132;

                        {
                          Var_132 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_132, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                          MR_hl_field(MR_mktag(3), Var_132, 1) = ((MR_Box) (String_54));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_132));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ForeignLang_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))) & (MR_Integer) 3);
                        MR_String ForeignTag_56 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_Word Var_131;

                        {
                          Var_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_131, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                          MR_hl_field(MR_mktag(3), Var_131, 1) = (MR_Box) ((MR_Unsigned) (ForeignLang_55));
                          MR_hl_field(MR_mktag(3), Var_131, 2) = ((MR_Box) (ForeignTag_56));
                          MR_hl_field(MR_mktag(3), Var_131, 3) = ((MR_Box) (LHS_MLDS_Type_50));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (Var_131));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word LocalSectag_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_Unsigned PrimSec_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_58, (MR_Integer) 1))));
                        MR_Word Var_127;
                        MR_Word Var_128;

                        {
                          Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(3), Var_128, 1) = ((MR_Box) (PrimSec_61));
                        }
                        {
                          Var_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_127, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), Var_127, 1) = ((MR_Box) (Var_128));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (LHS_MLDS_Type_50));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_127));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Integer ConstNum_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word ConstStructMap_65;
                        MR_Word GroundTerm0_66;
                        MR_Box conv0_GroundTerm0_66;

                        ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_97, &ConstStructMap_65);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_65, ConstNum_63, &conv0_GroundTerm0_66);
                        GroundTerm0_66 = ((MR_Word) (conv0_GroundTerm0_66));
                        ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_66, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Integer ConstNum_150 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word ConstStructMap_151;
                        MR_Word GroundTerm0_152;
                        MR_Box conv1_GroundTerm0_152;

                        ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_97, &ConstStructMap_151);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_151, ConstNum_150, &conv1_GroundTerm0_152);
                        GroundTerm0_152 = ((MR_Word) (conv1_GroundTerm0_152));
                        ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_152, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Integer ConstNum_159 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word ConstStructMap_160;
                        MR_Word GroundTerm0_161;
                        MR_Box conv2_GroundTerm0_161;

                        ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_97, &ConstStructMap_160);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_160, ConstNum_159, &conv2_GroundTerm0_161);
                        GroundTerm0_161 = ((MR_Word) (conv2_GroundTerm0_161));
                        ConstRval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm0_161, (MR_Integer) 0))));
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
                        uint16_t Var_124;
                        MR_Word Var_126;

                        ModuleName_72 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_69);
                        MLDS_Module_73 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_72);
                        Var_124 = mercury__uint16__det_from_int_1_f_0(TypeArity_71);
                        {
                          RttiTypeCtor_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 0) = ((MR_Box) (ModuleName_72));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 1) = ((MR_Box) (TypeName_70));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 2) = ((MR_Box) (MR_Word) (Var_124));
                        }
                        {
                          RttiId_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), RttiId_75, 0) = ((MR_Box) (RttiTypeCtor_74));
                          MR_hl_field(MR_mktag(0), RttiId_75, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                        }
                        {
                          Const_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_76, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                          MR_hl_field(MR_mktag(3), Const_76, 1) = ((MR_Box) (MLDS_Module_73));
                          MR_hl_field(MR_mktag(3), Const_76, 2) = ((MR_Box) (RttiId_75));
                        }
                        {
                          Var_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_126, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), Var_126, 1) = ((MR_Box) (Const_76));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (LHS_MLDS_Type_50));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_126));
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Word ClassId_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));
                        MR_String Instance_78 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 3))));
                        MR_Word TCName_79;
                        MR_Word Var_122;
                        MR_Word Var_123;
                        MR_Word ModuleName_136 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
                        MR_Word MLDS_Module_137;
                        MR_Word RttiId_138;
                        MR_Word Const_139;

                        MLDS_Module_137 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_136);
                        TCName_79 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_77);
                        {
                          Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (ModuleName_136));
                          MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Instance_78));
                        }
                        {
                          RttiId_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), RttiId_138, 0) = ((MR_Box) (TCName_79));
                          MR_hl_field(MR_mktag(1), RttiId_138, 1) = ((MR_Box) (Var_122));
                        }
                        {
                          Const_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_139, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                          MR_hl_field(MR_mktag(3), Const_139, 1) = ((MR_Box) (MLDS_Module_137));
                          MR_hl_field(MR_mktag(3), Const_139, 2) = ((MR_Box) (RttiId_138));
                        }
                        {
                          Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_123, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), Var_123, 1) = ((MR_Box) (Const_139));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (LHS_MLDS_Type_50));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_123));
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
                        MR_Word Var_117;
                        MR_Word Var_119;
                        MR_Word Const_140;

                        {
                          Var_117 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_117, 0) = ((MR_Box) (PredId_82));
                          MR_hl_field(MR_mktag(0), Var_117, 1) = ((MR_Box) (ProcId_83));
                        }
                        ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_49, Var_117, &PredLabel_84, &PredModule_85);
                        {
                          ProcLabel_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ProcLabel_86, 0) = ((MR_Box) (PredLabel_84));
                          MR_hl_field(MR_mktag(0), ProcLabel_86, 1) = ((MR_Box) (ProcId_83));
                        }
                        {
                          QualProcLabel_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), QualProcLabel_87, 0) = ((MR_Box) (PredModule_85));
                          MR_hl_field(MR_mktag(0), QualProcLabel_87, 1) = ((MR_Box) (ProcLabel_86));
                        }
                        {
                          Const_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Const_140, 0) = ((MR_Box) ((MR_Unsigned) 19U));
                          MR_hl_field(MR_mktag(3), Const_140, 1) = ((MR_Box) (QualProcLabel_87));
                          MR_hl_field(MR_mktag(3), Const_140, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (Const_140));
                        }
                        {
                          ConstRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 1) = ((MR_Box) (LHS_MLDS_Type_50));
                          MR_hl_field(MR_mktag(3), ConstRval_52, 2) = ((MR_Box) (Var_119));
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
                GroundTerm_90 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_90, 0) = ((MR_Box) (ConstRval_52));
                MR_hl_field(MR_mktag(0), GroundTerm_90, 1) = ((MR_Box) (LHSType_47));
                MR_hl_field(MR_mktag(0), GroundTerm_90, 2) = ((MR_Box) (LHS_MLDS_Type_50));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_12, GroundTerm_90, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
              Stmt_91 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_48, ConstRval_52, Context_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_20 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_91));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word RemoteArgsTagInfo_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));

              ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_compound_12_p_0(LHSVar_12, ConsId_13, RemoteArgsTagInfo_92, RHSVars_14, ArgModes_15, TakeAddr_16, HowToConstruct_17, Context_18, Defns_19, Stmts_20, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word LocalArgsTagInfo_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
              MR_Word TagFilledBitfield_94;
              MR_Word Var_105;

              {
                Var_105 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[9]));
                MR_hl_field(MR_mktag(0), Var_105, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_3));
                MR_hl_field(MR_mktag(0), Var_105, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_105, 3) = ((MR_Box) (TakeAddr_16));
                MR_hl_field(MR_mktag(0), Var_105, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_105, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "taking address of non word-sized argument");
              ml_backend__ml_unify_gen_util__local_primsectag_filled_bitfield_3_p_0(STATE_VARIABLE_Info_0_97, LocalArgsTagInfo_93, &TagFilledBitfield_94);
              ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_tagword_compound_10_p_0(ConsId_13, TagFilledBitfield_94, LHSVar_12, RHSVars_14, ArgModes_15, HowToConstruct_17, Context_18, Stmts_20, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
              *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word Var_100;

              {
                Var_100 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[9]));
                MR_hl_field(MR_mktag(0), Var_100, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_2));
                MR_hl_field(MR_mktag(0), Var_100, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_100, 3) = ((MR_Box) (TakeAddr_16));
                MR_hl_field(MR_mktag(0), Var_100, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_100, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "notag or direct_arg_tag: take_addr");
              ml_backend__ml_unify_gen_construct__ml_genenate_dynamic_construct_notag_direct_arg_8_p_0(LHSVar_12, ConsTag_22, RHSVars_14, ArgModes_15, Context_18, Stmts_20, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
              *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word PredId_141 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 1))));
              MR_Integer ProcId_142 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_22, (MR_Integer) 2))));

              ml_backend__ml_closure_gen__ml_construct_closure_11_p_0(PredId_141, ProcId_142, LHSVar_12, RHSVars_14, ArgModes_15, HowToConstruct_17, Context_18, Defns_19, Stmts_20, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
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
      MR_Word ToCastRval_70;

      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_37, &GlobalData0_26);
      ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_20, Context_13, RHS_MLDS_Type_25, (MR_Integer) 2, RHSRval0_23, &RHSRval_27, GlobalData0_26, &GlobalData_28);
      ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_28, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_40_40);
      if ((ConsTag_10 == (MR_Word) ((MR_Unsigned) 4U)))
        ToCastRval_70 = RHSRval_27;
      else
      {
        MR_Word Ptag_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 1))));
        uint8_t Var_72 = (uint8_t) (Ptag_71);

        succeeded = (Var_72 == UINT8_C(0));
        if (succeeded)
          ToCastRval_70 = RHSRval_27;
        else
          {
            ToCastRval_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ToCastRval_70, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), ToCastRval_70, 1) = ((MR_Box) (Ptag_71));
            MR_hl_field(MR_mktag(3), ToCastRval_70, 2) = ((MR_Box) (RHSRval_27));
          }
      }
      {
        LHSRval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), LHSRval_29, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), LHSRval_29, 1) = ((MR_Box) (LHS_MLDS_Type_21));
        MR_hl_field(MR_mktag(3), LHSRval_29, 2) = ((MR_Box) (ToCastRval_70));
      }
      {
        LHSGroundTerm_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), LHSGroundTerm_30, 0) = ((MR_Box) (LHSRval_29));
        MR_hl_field(MR_mktag(0), LHSGroundTerm_30, 1) = ((MR_Box) (LHSType_18));
        MR_hl_field(MR_mktag(0), LHSGroundTerm_30, 2) = ((MR_Box) (LHS_MLDS_Type_21));
      }
      ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_9, LHSGroundTerm_30, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_38);
      Stmt_31 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_19, LHSRval_29, Context_13);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Stmts_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_31));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word RHSLval_32;
      MR_Word RHSType_33;
      MR_Word RHSRval_62;
      MR_Word Stmt_63;

      ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_37, RHSVar_16, &RHSLval_32);
      ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_37, RHSVar_16, &RHSType_33);
      if ((ConsTag_10 == (MR_Word) ((MR_Unsigned) 4U)))
      {
        MR_Word RHSRval0_53;

        {
          RHSRval0_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), RHSRval0_53, 0) = ((MR_Box) (RHSLval_32));
        }
        ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_20, RHSType_33, LHSType_18, (MR_Integer) 0, RHSRval0_53, &RHSRval_62);
      }
      else
      {
        MR_Word Ptag_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 1))));
        MR_Word Dir_35;
        MR_Word RHSRval1_36;
        MR_Word RHSRval0_56;
        uint8_t Var_49;

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
              RHSRval0_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), RHSRval0_56, 0) = ((MR_Box) (RHSLval_32));
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
              MR_Word RHS_MLDS_Type_54;

              RHS_MLDS_Type_54 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_20, RHSType_33);
              {
                Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (RHS_MLDS_Type_54));
              }
              {
                RHSRval0_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RHSRval0_56, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), RHSRval0_56, 1) = ((MR_Box) (Var_45));
              }
            }
            break;
        }
        ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_20, RHSType_33, LHSType_18, (MR_Integer) 0, RHSRval0_56, &RHSRval1_36);
        Var_49 = (uint8_t) (Ptag_34);
        succeeded = (Var_49 == UINT8_C(0));
        if (succeeded)
          {
            RHSRval_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RHSRval_62, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), RHSRval_62, 1) = ((MR_Box) (LHS_MLDS_Type_21));
            MR_hl_field(MR_mktag(3), RHSRval_62, 2) = ((MR_Box) (RHSRval1_36));
          }
        else
        {
          MR_Word Var_50;

          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (Ptag_34));
            MR_hl_field(MR_mktag(3), Var_50, 2) = ((MR_Box) (RHSRval1_36));
          }
          {
            RHSRval_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RHSRval_62, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), RHSRval_62, 1) = ((MR_Box) (LHS_MLDS_Type_21));
            MR_hl_field(MR_mktag(3), RHSRval_62, 2) = ((MR_Box) (Var_50));
          }
        }
      }
      Stmt_63 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_19, RHSRval_62, Context_13);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Stmts_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_63));
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
  MR_Word TagFilledBitfield_12,
  MR_Word LHSVar_13,
  MR_Word ArgVars_14,
  MR_Word ArgModes_15,
  MR_Word HowToConstruct_16,
  MR_Word Context_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  {
    MR_Word ModuleInfo_20;
    MR_Word VarTypes_21;
    MR_Word LHSType_22;
    MR_Word ArgVarsTypesWidths_23;
    MR_Word Var_37;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_35, &ModuleInfo_20);
    ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_35, &VarTypes_21);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_21, LHSVar_13, &LHSType_22);
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_tagword_compound_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (VarTypes_21));
    }
    ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_1((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), ModuleInfo_20, Var_37, (MR_Integer) 0, LHSType_22, ConsId_11, ArgVars_14, &ArgVarsTypesWidths_23);
    switch (MR_tag((MR_Word) HowToConstruct_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HowToConstruct_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GroundTerm_32;
              MR_Word RevArgFilledBitfields_51;
              MR_Word ArgFilledBitfields_53;
              MR_Word LHS_MLDS_Type_54;
              MR_Word TagwordRval_55;
              MR_Word CastTagwordRval_56;
              MR_Word LHSLval_57;
              MR_Word Stmt_58;

              ml_backend__ml_unify_gen_construct__ml_gen_tagword_statically_4_p_0(STATE_VARIABLE_Info_0_35, ArgVarsTypesWidths_23, (MR_Word) ((MR_Unsigned) 0U), &RevArgFilledBitfields_51);
              mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), RevArgFilledBitfields_51, &ArgFilledBitfields_53);
              LHS_MLDS_Type_54 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_20, LHSType_22);
              ml_backend__ml_unify_gen_construct__filled_bitfields_to_packed_word_5_p_0(STATE_VARIABLE_Info_0_35, (MR_Integer) 0, TagFilledBitfield_12, ArgFilledBitfields_53, &TagwordRval_55);
              {
                CastTagwordRval_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastTagwordRval_56, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), CastTagwordRval_56, 1) = ((MR_Box) (LHS_MLDS_Type_54));
                MR_hl_field(MR_mktag(3), CastTagwordRval_56, 2) = ((MR_Box) (TagwordRval_55));
              }
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_35, LHSVar_13, &LHSLval_57);
              Stmt_58 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_57, CastTagwordRval_56, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_58));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                GroundTerm_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GroundTerm_32, 0) = ((MR_Box) (CastTagwordRval_56));
                MR_hl_field(MR_mktag(0), GroundTerm_32, 1) = ((MR_Box) (LHSType_22));
                MR_hl_field(MR_mktag(0), GroundTerm_32, 2) = ((MR_Box) (LHS_MLDS_Type_54));
              }
              ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_13, GroundTerm_32, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word RevArgFilledBitfields_24;
              MR_Word ArgFilledBitfields_26;
              MR_Word LHS_MLDS_Type_27;
              MR_Word TagwordRval_28;
              MR_Word CastTagwordRval_29;
              MR_Word LHSLval_30;
              MR_Word Stmt_31;

              ml_backend__ml_unify_gen_construct__ml_gen_tagword_dynamically_5_p_0(STATE_VARIABLE_Info_0_35, ArgVarsTypesWidths_23, ArgModes_15, (MR_Word) ((MR_Unsigned) 0U), &RevArgFilledBitfields_24);
              mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), RevArgFilledBitfields_24, &ArgFilledBitfields_26);
              LHS_MLDS_Type_27 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_20, LHSType_22);
              ml_backend__ml_unify_gen_construct__filled_bitfields_to_packed_word_5_p_0(STATE_VARIABLE_Info_0_35, (MR_Integer) 1, TagFilledBitfield_12, ArgFilledBitfields_26, &TagwordRval_28);
              {
                CastTagwordRval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastTagwordRval_29, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), CastTagwordRval_29, 1) = ((MR_Box) (LHS_MLDS_Type_27));
                MR_hl_field(MR_mktag(3), CastTagwordRval_29, 2) = ((MR_Box) (TagwordRval_28));
              }
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_35, LHSVar_13, &LHSLval_30);
              Stmt_31 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_30, CastTagwordRval_29, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_31));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_compound_12_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_dynamic_construct_compound__307__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_compound_12_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_dynamic_construct_compound__283__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_compound_12_p_0_1(
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
ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_compound_12_p_0(
  MR_Word LHSVar_13,
  MR_Word ConsId_14,
  MR_Word RemoteArgsTagInfo_15,
  MR_Word RHSVars_16,
  MR_Word ArgModes_17,
  MR_Word TakeAddr_18,
  MR_Word HowToConstruct_19,
  MR_Word Context_20,
  MR_Word * Defns_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_56,
  MR_Word * STATE_VARIABLE_Info_57)
{
  {
    MR_bool succeeded;
    MR_Word Target_24;
    MR_Word ModuleInfo_25;
    MR_Word VarTypes_26;
    MR_Word LHSType_27;
    MR_Word RHSVarsTypesWidths_28;
    MR_Word UsesBaseClass_29;
    MR_Word Ptag_30;
    MR_Word ExplicitSectag_33;
    MR_Integer FirstArgNum_34;
    MR_Word TagwordRvalsTypesWidths_35;
    MR_Word NonTagwordRHSVarsTypesWidths_36;
    MR_Word NonTagwordArgModes_37;
    MR_Word MaybeCtorName_54;
    MR_Word Var_58;
    MR_Word Var_91;

    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_56, &Target_24);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_56, &ModuleInfo_25);
    ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_56, &VarTypes_26);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_56, LHSVar_13, &LHSType_27);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_compound_12_p_0_1));
      MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (VarTypes_26));
    }
    ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), ModuleInfo_25, Var_58, (MR_Integer) 1, LHSType_27, ConsId_14, RHSVars_16, &RHSVarsTypesWidths_28);
    switch (MR_tag((MR_Word) RemoteArgsTagInfo_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          UsesBaseClass_29 = (MR_Integer) 1;
          Ptag_30 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
          ExplicitSectag_33 = (MR_Integer) 0;
          FirstArgNum_34 = (MR_Integer) 1;
          TagwordRvalsTypesWidths_35 = (MR_Word) ((MR_Unsigned) 0U);
          NonTagwordRHSVarsTypesWidths_36 = RHSVarsTypesWidths_28;
          NonTagwordArgModes_37 = ArgModes_17;
        }
        break;
      case (MR_Integer) 1:
        {
          Ptag_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RemoteArgsTagInfo_15, (MR_Integer) 0))));
          UsesBaseClass_29 = (MR_Integer) 0;
          ExplicitSectag_33 = (MR_Integer) 0;
          FirstArgNum_34 = (MR_Integer) 1;
          TagwordRvalsTypesWidths_35 = (MR_Word) ((MR_Unsigned) 0U);
          NonTagwordRHSVarsTypesWidths_36 = RHSVarsTypesWidths_28;
          NonTagwordArgModes_37 = ArgModes_17;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word RemoteSectag_38;
          MR_Unsigned SectagUint_39;
          MR_Word SectagSize_40;
          MR_Word TagwordArgPosWidth_41;
          MR_Word Var_60;
          MR_Word UsesConstructors_93;

          Ptag_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_15, (MR_Integer) 0))));
          RemoteSectag_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_15, (MR_Integer) 1))));
          UsesBaseClass_29 = (MR_Integer) 0;
          UsesConstructors_93 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_24);
          {
            Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[6]));
            MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_compound_12_p_0_3));
            MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), Var_60, 4) = ((MR_Box) (UsesConstructors_93));
          }
          mercury__require__expect_3_p_0(Var_60, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_dynamic_construct_compound\'/12", (MR_String) "remote_args_shared but UsesConstructors = yes");
          ExplicitSectag_33 = (MR_Integer) 1;
          SectagUint_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_38, (MR_Integer) 0))));
          SectagSize_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_38, (MR_Integer) 1))));
          TagwordArgPosWidth_41 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_construct_scalar_common_1[8]));
          if ((SectagSize_40 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word SectagRval0_42;
            MR_Word SectagRval_43;
            MR_Word Var_79;
            MR_Word Var_82;

            FirstArgNum_34 = (MR_Integer) 1;
            {
              Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (SectagUint_39));
            }
            {
              SectagRval0_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), SectagRval0_42, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), SectagRval0_42, 1) = ((MR_Box) (Var_79));
            }
            {
              SectagRval_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), SectagRval_43, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), SectagRval_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[18])));
              MR_hl_field(MR_mktag(3), SectagRval_43, 2) = ((MR_Box) (SectagRval0_42));
            }
            {
              Var_82 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (SectagRval_43));
              MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) (TagwordArgPosWidth_41));
            }
            {
              TagwordRvalsTypesWidths_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), TagwordRvalsTypesWidths_35, 0) = ((MR_Box) (Var_82));
              MR_hl_field(MR_mktag(1), TagwordRvalsTypesWidths_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            NonTagwordRHSVarsTypesWidths_36 = RHSVarsTypesWidths_28;
            NonTagwordArgModes_37 = ArgModes_17;
          }
          else
          {
            MR_Word SectagBits_44 = (MR_Word) (MR_body((MR_Word) (SectagSize_40), (MR_Integer) 1));
            MR_Word TagwordRHSVarsTypesWidths_45;
            MR_Word TagwordArgModes_46;
            MR_Word RevArgFilledBitfields_47;
            MR_Word UseMap_48;
            MR_Word TagFilledBitfield_51;
            MR_Word ArgFilledBitfields_52;
            MR_Word TagwordRval_53;
            MR_Word Var_75;

            ml_backend__ml_unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_116_97_107_101_95_116_97_103_119_111_114_100_95_97_114_103_115_95_116_121_112_101_95_119_105_100_116_104_115_95_109_111_100_101_115_95_95_91_49_93_95_48_8_p_0(RHSVarsTypesWidths_28, ArgModes_17, &TagwordRHSVarsTypesWidths_45, &TagwordArgModes_46, &NonTagwordRHSVarsTypesWidths_36, &NonTagwordArgModes_37, (MR_Integer) 1, &FirstArgNum_34);
            switch (MR_tag((MR_Word) HowToConstruct_19)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HowToConstruct_19)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      ml_backend__ml_unify_gen_construct__ml_gen_tagword_statically_4_p_0(STATE_VARIABLE_Info_0_56, TagwordRHSVarsTypesWidths_45, (MR_Word) ((MR_Unsigned) 0U), &RevArgFilledBitfields_47);
                      UseMap_48 = (MR_Integer) 0;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      ml_backend__ml_unify_gen_construct__ml_gen_tagword_dynamically_5_p_0(STATE_VARIABLE_Info_0_56, TagwordRHSVarsTypesWidths_45, TagwordArgModes_46, (MR_Word) ((MR_Unsigned) 0U), &RevArgFilledBitfields_47);
                      UseMap_48 = (MR_Integer) 1;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_dynamic_construct_compound\'/12", (MR_String) "reuse_cell NYI");
                    return;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_dynamic_construct_compound\'/12", (MR_String) "construct_in_region NYI");
                    return;
                  }
                }
                break;
            }
            ml_backend__ml_unify_gen_util__remote_sectag_filled_bitfield_3_p_0(SectagUint_39, SectagBits_44, &TagFilledBitfield_51);
            mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), RevArgFilledBitfields_47, &ArgFilledBitfields_52);
            ml_backend__ml_unify_gen_construct__filled_bitfields_to_packed_word_5_p_0(STATE_VARIABLE_Info_0_56, UseMap_48, TagFilledBitfield_51, ArgFilledBitfields_52, &TagwordRval_53);
            {
              Var_75 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (TagwordRval_53));
              MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[18])));
              MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) (TagwordArgPosWidth_41));
            }
            {
              TagwordRvalsTypesWidths_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), TagwordRvalsTypesWidths_35, 0) = ((MR_Box) (Var_75));
              MR_hl_field(MR_mktag(1), TagwordRvalsTypesWidths_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word UsesConstructors_32;
          MR_Word Var_85;

          UsesBaseClass_29 = (MR_Integer) 0;
          UsesConstructors_32 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_24);
          {
            Var_85 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[6]));
            MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_dynamic_construct_compound_12_p_0_2));
            MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (UsesConstructors_32));
            MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__require__expect_3_p_0(Var_85, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_dynamic_construct_compound\'/12", (MR_String) "remote_args_ctor but UsesConstructors = no");
          Ptag_30 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
          ExplicitSectag_33 = (MR_Integer) 0;
          FirstArgNum_34 = (MR_Integer) 1;
          TagwordRvalsTypesWidths_35 = (MR_Word) ((MR_Unsigned) 0U);
          NonTagwordRHSVarsTypesWidths_36 = RHSVarsTypesWidths_28;
          NonTagwordArgModes_37 = ArgModes_17;
        }
        break;
    }
    switch (UsesBaseClass_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word CtorName_55;

          ml_backend__ml_unify_gen_construct__ml_cons_name_3_p_0(Target_24, ConsId_14, &CtorName_55);
          {
            MaybeCtorName_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeCtorName_54, 0) = ((MR_Box) (CtorName_55));
          }
        }
        break;
      case (MR_Integer) 1:
        MaybeCtorName_54 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (ConsId_14));
    }
    ml_backend__ml_unify_gen_construct__ml_gen_new_object_17_p_0(Var_91, MaybeCtorName_54, Ptag_30, ExplicitSectag_33, LHSVar_13, LHSType_27, TagwordRvalsTypesWidths_35, NonTagwordRHSVarsTypesWidths_36, NonTagwordArgModes_37, FirstArgNum_34, TakeAddr_18, HowToConstruct_19, Context_20, Defns_21, Stmts_22, STATE_VARIABLE_Info_0_56, STATE_VARIABLE_Info_57);
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_116_97_107_101_95_116_97_103_119_111_114_100_95_97_114_103_115_95_116_121_112_101_95_119_105_100_116_104_115_95_109_111_100_101_115_95_95_91_49_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Integer STATE_VARIABLE_CurArgNum_0_7,
  MR_Integer * STATE_VARIABLE_CurArgNum_8)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_CurArgNum_8 = STATE_VARIABLE_CurArgNum_0_7;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_take_tagword_args_type_widths_modes\'/8", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_take_tagword_args_type_widths_modes\'/8", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word ArgMode_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgModes_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgPosWidth_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_74, (MR_Integer) 2))));

      switch (MR_tag((MR_Word) ArgPosWidth_45)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__5_5 = HeadVar__1_1;
            *HeadVar__6_6 = HeadVar__2_2;
            *STATE_VARIABLE_CurArgNum_8 = STATE_VARIABLE_CurArgNum_0_7;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__5_5 = HeadVar__1_1;
            *HeadVar__6_6 = HeadVar__2_2;
            *STATE_VARIABLE_CurArgNum_8 = STATE_VARIABLE_CurArgNum_0_7;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_45, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
                *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
                *HeadVar__5_5 = HeadVar__1_1;
                *HeadVar__6_6 = HeadVar__2_2;
                *STATE_VARIABLE_CurArgNum_8 = STATE_VARIABLE_CurArgNum_0_7;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word TailTagwordArgsTypesWidths_54;
                MR_Word TailTagwordArgModes_55;
                MR_Integer STATE_VARIABLE_CurArgNum_69_69 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurArgNum_0_7 + (MR_Unsigned) 1);

                ml_backend__ml_unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_116_97_107_101_95_116_97_103_119_111_114_100_95_97_114_103_115_95_116_121_112_101_95_119_105_100_116_104_115_95_109_111_100_101_115_95_95_91_49_93_95_48_8_p_0(Var_73, ArgModes_37, &TailTagwordArgsTypesWidths_54, &TailTagwordArgModes_55, HeadVar__5_5, HeadVar__6_6, STATE_VARIABLE_CurArgNum_69_69, STATE_VARIABLE_CurArgNum_8);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_74));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTagwordArgsTypesWidths_54));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgMode_36));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTagwordArgModes_55));
                }
              }
              break;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_cons_name_3_p_0(
  MR_Word Target_4,
  MR_Word HLDS_ConsId_5,
  MR_Word * QualifiedConsId_6)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) HLDS_ConsId_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HLDS_ConsId_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word ConsId_13;
    MR_Word ModuleName_14;
    MR_Word ConsSymName_7;
    MR_Integer ConsArity_8;
    MR_Word TypeCtor_9;
    MR_Word SymModuleName_10;

    if (succeeded)
    {
      ConsSymName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HLDS_ConsId_5, (MR_Integer) 1))));
      ConsArity_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HLDS_ConsId_5, (MR_Integer) 2))));
      TypeCtor_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HLDS_ConsId_5, (MR_Integer) 3))));
      succeeded = ((MR_tag((MR_Word) ConsSymName_7)) == (MR_Integer) 1);
      if (succeeded)
        SymModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsSymName_7, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_String ConsName_12;

      ConsName_12 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(Target_4, TypeCtor_9, ConsSymName_7, ConsArity_8);
      {
        ConsId_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConsId_13, 0) = ((MR_Box) (ConsName_12));
        MR_hl_field(MR_mktag(0), ConsId_13, 1) = ((MR_Box) (ConsArity_8));
      }
      ModuleName_14 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(SymModuleName_10);
    }
    else
    {
      MR_String ConsName_19;

      ConsName_19 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(HLDS_ConsId_5);
      {
        ConsId_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConsId_13, 0) = ((MR_Box) (ConsName_19));
        MR_hl_field(MR_mktag(0), ConsId_13, 1) = ((MR_Box) ((MR_Integer) 0));
      }
      ModuleName_14 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_3[2]));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *QualifiedConsId_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_14));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ConsId_13));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_tagword_statically_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word RHSVarTypeWidth_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word RHSVarsTypesWidths_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word RHSVar_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSVarTypeWidth_10, (MR_Integer) 0))));
      MR_Word ArgPosWidth_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSVarTypeWidth_10, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_RevFilledBitfields_44_44;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      switch (MR_tag((MR_Word) ArgPosWidth_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_tagword_statically\'/4", (MR_String) "non-tagword ArgPosWidth");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_tagword_statically\'/4", (MR_String) "non-tagword ArgPosWidth");
              return;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_15, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_tagword_statically\'/4", (MR_String) "non-tagword ArgPosWidth");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Shift_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_15, (MR_Integer) 3))));
                MR_Word NumBits_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_15, (MR_Integer) 4))));
                MR_Word Fill_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_15, (MR_Integer) 6))) & (MR_Integer) 7);
                MR_Word Bitfield_33;
                MR_Word GroundTerm_34;
                MR_Word RHSRval_35;
                MR_Word BitfieldValue_38;
                MR_Word FilledBitfield_39;

                {
                  Bitfield_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Bitfield_33, 0) = ((MR_Box) (Shift_29));
                  MR_hl_field(MR_mktag(0), Bitfield_33, 1) = ((MR_Box) (NumBits_30));
                  MR_hl_field(MR_mktag(0), Bitfield_33, 2) = (MR_Box) ((MR_Unsigned) (Fill_32));
                }
                ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_p_0(Info_1, RHSVar_13, &GroundTerm_34);
                RHSRval_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_34, (MR_Integer) 0))));
                {
                  BitfieldValue_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), BitfieldValue_38, 0) = ((MR_Box) (RHSRval_35));
                }
                {
                  FilledBitfield_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), FilledBitfield_39, 0) = ((MR_Box) (Bitfield_33));
                  MR_hl_field(MR_mktag(0), FilledBitfield_39, 1) = ((MR_Box) (BitfieldValue_38));
                }
                {
                  STATE_VARIABLE_RevFilledBitfields_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFilledBitfields_44_44, 0) = ((MR_Box) (FilledBitfield_39));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFilledBitfields_44_44, 1) = ((MR_Box) (HeadVar__3_3));
                }
              }
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_RevFilledBitfields_44_44 = HeadVar__3_3;
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = RHSVarsTypesWidths_11;
      next_value_of_HeadVar__3_3 = STATE_VARIABLE_RevFilledBitfields_44_44;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
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
  MR_Word STATE_VARIABLE_RevFilledBitfields_0_4,
  MR_Word * STATE_VARIABLE_RevFilledBitfields_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevFilledBitfields_5 = STATE_VARIABLE_RevFilledBitfields_0_4;
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_tagword_dynamically\'/5", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
        MR_Word RHSVar_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 0))));
        MR_Word ConsArgType_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 1))));
        MR_Word ArgPosWidth_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 2))));
        MR_Word STATE_VARIABLE_RevFilledBitfields_59_59;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_RevFilledBitfields_0_4;

        switch (MR_tag((MR_Word) ArgPosWidth_34)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_tagword_dynamically\'/5", (MR_String) "non-tagword ArgPosWidth");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_tagword_dynamically\'/5", (MR_String) "non-tagword ArgPosWidth");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_34, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_tagword_dynamically\'/5", (MR_String) "non-tagword ArgPosWidth");
                    return;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Shift_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_34, (MR_Integer) 3))));
                  MR_Word NumBits_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_34, (MR_Integer) 4))));
                  MR_Word Fill_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_34, (MR_Integer) 6))) & (MR_Integer) 7);
                  MR_Word Bitfield_52;
                  MR_Word BitfieldValue_53;
                  MR_Word FilledBitfield_54;
                  MR_Word RHSType_70;
                  MR_Word RHSInsts_72;
                  MR_Word ModuleInfo_73;
                  MR_Word Var_75;
                  MR_Word Var_77;

                  {
                    Bitfield_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Bitfield_52, 0) = ((MR_Box) (Shift_48));
                    MR_hl_field(MR_mktag(0), Bitfield_52, 1) = ((MR_Box) (NumBits_49));
                    MR_hl_field(MR_mktag(0), Bitfield_52, 2) = (MR_Box) ((MR_Unsigned) (Fill_51));
                  }
                  ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_1, RHSVar_32, &RHSType_70);
                  RHSInsts_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_29, (MR_Integer) 1))));
                  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_73);
                  check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_73, RHSInsts_72, RHSType_70, &Var_77);
                  succeeded = ((MR_Integer) 0 == Var_77);
                  if (succeeded)
                  {
                    Var_75 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_73, RHSType_70, ConsArgType_33);
                    succeeded = (Var_75 == (MR_Integer) 1);
                  }
                  if (succeeded)
                    {
                      BitfieldValue_53 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), BitfieldValue_53, 0) = ((MR_Box) (RHSVar_32));
                    }
                  else
                    BitfieldValue_53 = (MR_Word) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_construct_scalar_common_3[0]));
                  {
                    FilledBitfield_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), FilledBitfield_54, 0) = ((MR_Box) (Bitfield_52));
                    MR_hl_field(MR_mktag(0), FilledBitfield_54, 1) = ((MR_Box) (BitfieldValue_53));
                  }
                  {
                    STATE_VARIABLE_RevFilledBitfields_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFilledBitfields_59_59, 0) = ((MR_Box) (FilledBitfield_54));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFilledBitfields_59_59, 1) = ((MR_Box) (STATE_VARIABLE_RevFilledBitfields_0_4));
                  }
                }
                break;
              case (MR_Integer) 2:
                STATE_VARIABLE_RevFilledBitfields_59_59 = STATE_VARIABLE_RevFilledBitfields_0_4;
                break;
            }
            break;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_63;
        next_value_of_HeadVar__3_3 = ArgModes_30;
        next_value_of_STATE_VARIABLE_RevFilledBitfields_0_4 = STATE_VARIABLE_RevFilledBitfields_59_59;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_RevFilledBitfields_0_4 = next_value_of_STATE_VARIABLE_RevFilledBitfields_0_4;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_17_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object__441__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_17_p_0(
  MR_Word MaybeConsId_18,
  MR_Word MaybeCtorName_19,
  MR_Word Ptag_20,
  MR_Word ExplicitSectag_21,
  MR_Word LHSVar_22,
  MR_Word LHSType_23,
  MR_Word ExtraRHSRvalsTypesWidths_24,
  MR_Word RHSVarsTypesWidths_25,
  MR_Word ArgModes_26,
  MR_Integer FirstArgNum_27,
  MR_Word TakeAddr_28,
  MR_Word HowToConstruct_29,
  MR_Word Context_30,
  MR_Word * Defns_31,
  MR_Word * Stmts_32,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HowToConstruct_29)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HowToConstruct_29)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_41;

              {
                Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[9]));
                MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_new_object_17_p_0_1));
                MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (TakeAddr_28));
                MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_41, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_new_object\'/17", (MR_String) "cannot take address of static object\'s field");
              ml_backend__ml_unify_gen_construct__ml_gen_new_object_statically_11_p_0(MaybeConsId_18, MaybeCtorName_19, Ptag_20, LHSVar_22, LHSType_23, ExtraRHSRvalsTypesWidths_24, RHSVarsTypesWidths_25, Context_30, Stmts_32, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
              *Defns_31 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 1:
            {
              ml_backend__ml_unify_gen_construct__ml_gen_new_object_dynamically_15_p_0(MaybeConsId_18, MaybeCtorName_19, Ptag_20, ExplicitSectag_21, LHSVar_22, LHSType_23, ExtraRHSRvalsTypesWidths_24, RHSVarsTypesWidths_25, ArgModes_26, FirstArgNum_27, TakeAddr_28, Context_30, Stmts_32, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
              *Defns_31 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CellToReuse_34 = (MR_Word) (MR_body((MR_Word) (HowToConstruct_29), (MR_Integer) 1));

          ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_15_p_0(MaybeConsId_18, MaybeCtorName_19, Ptag_20, ExplicitSectag_21, LHSVar_22, ExtraRHSRvalsTypesWidths_24, RHSVarsTypesWidths_25, ArgModes_26, TakeAddr_28, CellToReuse_34, Context_30, Defns_31, Stmts_32, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37);
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_new_object\'/17", (MR_String) "construct_in_region NYI");
            return;
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_15_p_0_3(
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

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_84;

    conv1_LambdaHeadVar__2_84 = ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_reuse_cell__621__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_84));
    return wrapper_arg_2;
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
    MR_Word conv0_LambdaHeadVar__2_81;

    ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__606__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_81);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_81));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_15_p_0(
  MR_Word MaybeConsId_16,
  MR_Word MaybeCtorName_17,
  MR_Word Ptag_18,
  MR_Word ExplicitSectag_19,
  MR_Word LHSVar_20,
  MR_Word ExtraRHSRvalsTypesWidths_21,
  MR_Word RHSVarsTypesWidths_22,
  MR_Word ArgModes_23,
  MR_Word TakeAddr_24,
  MR_Word CellToReuse_25,
  MR_Word Context_26,
  MR_Word * Defns_27,
  MR_Word * Stmts_28,
  MR_Word STATE_VARIABLE_Info_0_75,
  MR_Word * STATE_VARIABLE_Info_76)
{
  {
    MR_bool succeeded;
    MR_Word ReuseVar_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellToReuse_25, (MR_Integer) 0))));
    MR_Word ReuseConsIds_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellToReuse_25, (MR_Integer) 1))));
    MR_Word ConsId_33;
    MR_Word ReusePrimaryTags0_38;
    MR_Word ReusePrimaryTags_39;
    MR_Word LHSType_40;
    MR_Word ConsTag_41;
    MR_Word PrimaryTag_42;
    MR_Word InitOffSet_43;
    MR_Word RHSVars_44;
    MR_Word RHSVarRepns_48;
    MR_Word ReuseVarLval_49;
    MR_Word DifferentTags_51;
    MR_Word ReuseVarRval_52;
    MR_Word LHS_MLDS_Type_59;
    MR_Word CastReuseVarRval_60;
    MR_Word HeapTestStmt_61;
    MR_Word LHSLval_62;
    MR_Word MaybePtag_63;
    MR_Word ExtraRvalStmts_64;
    MR_Word FieldGen_65;
    MR_Word TakeAddrInfos_67;
    MR_Word FieldStmts_68;
    MR_Word TakeAddrStmts_69;
    MR_Word ThenStmts_70;
    MR_Word ThenStmt_71;
    MR_Word DynamicStmts_72;
    MR_Word ElseStmt_73;
    MR_Word IfStmt_74;
    MR_Word Var_79;
    MR_Word Var_85;
    MR_Word Var_97;
    MR_Word STATE_VARIABLE_Info_99_99;
    MR_Word STATE_VARIABLE_Info_100_100;
    MR_Word Var_101;
    MR_Word Var_104;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_110;

    if ((MaybeConsId_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_new_object_reuse_cell\'/15", (MR_String) "attempt to reuse closure");
        return;
      }
    }
    else
      ConsId_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeConsId_16, (MR_Integer) 0))));
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_15_p_0_1));
      MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (STATE_VARIABLE_Info_0_75));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0), Var_79, ReuseConsIds_31, &ReusePrimaryTags0_38);
    mercury__list__remove_dups_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0), ReusePrimaryTags0_38, &ReusePrimaryTags_39);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_75, LHSVar_20, &LHSType_40);
    ml_backend__ml_unify_gen_util__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_75, ConsId_33, &ConsTag_41);
    ml_backend__ml_unify_gen_util__ml_tag_ptag_and_initial_offset_3_p_0(ConsTag_41, &PrimaryTag_42, &InitOffSet_43);
    RHSVars_44 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[3]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[8]), RHSVarsTypesWidths_22);
    ml_backend__ml_unify_gen_util__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_75, LHSType_40, ConsId_33, InitOffSet_43, RHSVars_44, &RHSVarRepns_48);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_75, ReuseVar_30, &ReuseVarLval_49);
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[8]));
      MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_15_p_0_3));
      MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (PrimaryTag_42));
    }
    mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0), Var_85, ReusePrimaryTags_39, &DifferentTags_51);
    if ((DifferentTags_51 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        ReuseVarRval_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ReuseVarRval_52, 0) = ((MR_Box) (ReuseVarLval_49));
      }
    else
    {
      MR_Word Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DifferentTags_51, (MR_Integer) 1))));
      MR_Word Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DifferentTags_51, (MR_Integer) 0))));

      if ((Var_125 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        uint8_t ReusePrimaryTagUint8_54 = (uint8_t) (Var_126);
        MR_Integer ReusePrimaryTagInt_55;
        MR_Word Var_92;
        MR_Word Var_94;
        MR_Word Var_95;
        MR_Word Var_96;

        ReusePrimaryTagInt_55 = mercury__uint8__cast_to_int_1_f_0(ReusePrimaryTagUint8_54);
        {
          Var_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_94, 0) = ((MR_Box) (ReuseVarLval_49));
        }
        {
          Var_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_96, 0) = ((MR_Box) (ReusePrimaryTagInt_55));
        }
        {
          Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_95, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_95, 1) = ((MR_Box) (Var_96));
        }
        {
          Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(3), Var_92, 2) = ((MR_Box) (Var_94));
          MR_hl_field(MR_mktag(3), Var_92, 3) = ((MR_Box) (Var_95));
        }
        {
          ReuseVarRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ReuseVarRval_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), ReuseVarRval_52, 1) = ((MR_Box) (PrimaryTag_42));
          MR_hl_field(MR_mktag(3), ReuseVarRval_52, 2) = ((MR_Box) (Var_92));
        }
      }
      else
      {
        MR_Word Var_88;
        MR_Word Var_90;

        {
          Var_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_90, 0) = ((MR_Box) (ReuseVarLval_49));
        }
        {
          Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), Var_88, 2) = ((MR_Box) (Var_90));
        }
        {
          ReuseVarRval_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ReuseVarRval_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), ReuseVarRval_52, 1) = ((MR_Box) (PrimaryTag_42));
          MR_hl_field(MR_mktag(3), ReuseVarRval_52, 2) = ((MR_Box) (Var_88));
        }
      }
    }
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_75, LHSType_40, &LHS_MLDS_Type_59);
    {
      CastReuseVarRval_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CastReuseVarRval_60, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), CastReuseVarRval_60, 1) = ((MR_Box) (LHS_MLDS_Type_59));
      MR_hl_field(MR_mktag(3), CastReuseVarRval_60, 2) = ((MR_Box) (ReuseVarRval_52));
    }
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_75, LHSVar_20, &LHSLval_62);
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_97, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_97, 1) = ((MR_Box) (LHSLval_62));
      MR_hl_field(MR_mktag(3), Var_97, 2) = ((MR_Box) (CastReuseVarRval_60));
    }
    {
      HeapTestStmt_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeapTestStmt_61, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), HeapTestStmt_61, 1) = ((MR_Box) (Var_97));
      MR_hl_field(MR_mktag(3), HeapTestStmt_61, 2) = ((MR_Box) (Context_26));
    }
    {
      MaybePtag_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePtag_63, 0) = ((MR_Box) (Ptag_18));
    }
    ml_backend__ml_unify_gen_construct__ml_gen_extra_arg_assigns_9_p_0(LHSLval_62, LHS_MLDS_Type_59, MaybePtag_63, (MR_Integer) 0, ExtraRHSRvalsTypesWidths_21, Context_26, &ExtraRvalStmts_64, STATE_VARIABLE_Info_0_75, &STATE_VARIABLE_Info_99_99);
    ml_backend__ml_unify_gen_util__decide_field_gen_7_p_0(STATE_VARIABLE_Info_99_99, LHSLval_62, LHSType_40, ConsId_33, ConsTag_41, Ptag_18, &FieldGen_65);
    ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_1(FieldGen_65, RHSVarRepns_48, ArgModes_23, (MR_Integer) 1, Context_26, TakeAddr_24, &TakeAddrInfos_67, Defns_27, &FieldStmts_68, STATE_VARIABLE_Info_99_99, &STATE_VARIABLE_Info_100_100);
    ml_backend__ml_unify_gen_construct__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_67, LHSLval_62, LHS_MLDS_Type_59, MaybePtag_63, Context_26, STATE_VARIABLE_Info_100_100, &TakeAddrStmts_69);
    Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), FieldStmts_68, TakeAddrStmts_69);
    ThenStmts_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ExtraRvalStmts_64, Var_101);
    {
      ThenStmt_71 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ThenStmt_71, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ThenStmt_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ThenStmt_71, 2) = ((MR_Box) (ThenStmts_70));
      MR_hl_field(MR_mktag(0), ThenStmt_71, 3) = ((MR_Box) (Context_26));
    }
    {
      Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (ConsId_33));
    }
    ml_backend__ml_unify_gen_construct__ml_gen_new_object_dynamically_15_p_0(Var_104, MaybeCtorName_17, Ptag_18, ExplicitSectag_19, LHSVar_20, LHSType_40, ExtraRHSRvalsTypesWidths_21, RHSVarsTypesWidths_22, ArgModes_23, (MR_Integer) 1, TakeAddr_24, Context_26, &DynamicStmts_72, STATE_VARIABLE_Info_100_100, STATE_VARIABLE_Info_76);
    {
      ElseStmt_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ElseStmt_73, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ElseStmt_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ElseStmt_73, 2) = ((MR_Box) (DynamicStmts_72));
      MR_hl_field(MR_mktag(0), ElseStmt_73, 3) = ((MR_Box) (Context_26));
    }
    {
      Var_108 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_108, 0) = ((MR_Box) (LHSLval_62));
    }
    {
      Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (ElseStmt_73));
    }
    {
      IfStmt_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), IfStmt_74, 0) = ((MR_Box) (Var_108));
      MR_hl_field(MR_mktag(2), IfStmt_74, 1) = ((MR_Box) (ThenStmt_71));
      MR_hl_field(MR_mktag(2), IfStmt_74, 2) = ((MR_Box) (Var_109));
      MR_hl_field(MR_mktag(2), IfStmt_74, 3) = ((MR_Box) (Context_26));
    }
    {
      Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (IfStmt_74));
      MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_28 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeapTestStmt_61));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_110));
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

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_extra_arg_assigns__1091__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
        Var_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[6]));
        MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_extra_arg_assigns_9_p_0_1));
        MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (HighLevelData_28));
        MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_3_p_0(Var_37, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_extra_arg_assigns\'/9", (MR_String) "high-level data");
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_42, 0) = ((MR_Box) (CurOffset_4));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (Var_42));
      }
      {
        FieldId_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldId_29, 0) = ((MR_Box) (Var_41));
      }
      ExtraRval_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExtraRvalTypeWidth_22, (MR_Integer) 0))));
      ExtraType_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExtraRvalTypeWidth_22, (MR_Integer) 1))));
      ArgPosWidth_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExtraRvalTypeWidth_22, (MR_Integer) 2))));
      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_extra_arg_assigns_9_p_0_2));
        MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (ArgPosWidth_32));
      }
      mercury__require__expect_3_p_0(Var_43, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_extra_arg_assigns\'/9", (MR_String) "ArgPosWidth != apw_full(_)");
      NextOffset_33 = (MR_Integer) ((MR_Unsigned) CurOffset_4 + (MR_Unsigned) 1);
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_47, 0) = ((MR_Box) (VarLval_1));
      }
      {
        FieldLval_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
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
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_25));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Stmts_26));
      }
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_statically_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_49;

    conv0_LambdaHeadVar__2_49 = ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_statically__566__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_49));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_statically_11_p_0(
  MR_Word MaybeConsId_12,
  MR_Word MaybeCtorName_13,
  MR_Word Ptag_14,
  MR_Word LHSVar_15,
  MR_Word LHSType_16,
  MR_Word ExtraRHSRvalsTypesWidths_17,
  MR_Word RHSVarsTypesWidths_18,
  MR_Word Context_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42)
{
  {
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

    ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_GlobalData_43_43);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_41, &ModuleInfo_23);
    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_41, &HighLevelData_24);
    switch (HighLevelData_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word STATE_VARIABLE_GlobalData_45_45;

          ml_backend__ml_unify_gen_construct__ml_gen_box_extra_const_rval_list_lld_6_p_0(ModuleInfo_23, Context_19, ExtraRHSRvalsTypesWidths_17, &BoxedExtraRHSRvalsTypesWidths_25, STATE_VARIABLE_GlobalData_43_43, &STATE_VARIABLE_GlobalData_45_45);
          ml_backend__ml_unify_gen_construct__ml_gen_box_const_rval_list_lld_6_p_0(STATE_VARIABLE_Info_0_41, Context_19, RHSVarsTypesWidths_18, &RHSRvalsTypesWidths_26, STATE_VARIABLE_GlobalData_45_45, &STATE_VARIABLE_GlobalData_46_46);
        }
        break;
      case (MR_Integer) 1:
        {
          ml_backend__ml_unify_gen_construct__ml_gen_box_or_unbox_const_rval_list_hld_6_p_0(STATE_VARIABLE_Info_0_41, Context_19, RHSVarsTypesWidths_18, &RHSRvalsTypesWidths_26, STATE_VARIABLE_GlobalData_43_43, &STATE_VARIABLE_GlobalData_46_46);
          BoxedExtraRHSRvalsTypesWidths_25 = ExtraRHSRvalsTypesWidths_17;
        }
        break;
    }
    if ((MaybeCtorName_13 == (MR_Word) ((MR_Unsigned) 0U)))
      UsesBaseClass_28 = (MR_Integer) 1;
    else
      UsesBaseClass_28 = (MR_Integer) 0;
    ExtraRHSRvals_29 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[7]), BoxedExtraRHSRvalsTypesWidths_25);
    ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_41, &Target_33);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_41, LHSType_16, &LHS_MLDS_Type_34);
    ml_backend__ml_unify_gen_construct__construct_static_ground_term_14_p_0(ModuleInfo_23, Target_33, HighLevelData_24, Context_19, LHSType_16, LHS_MLDS_Type_34, MaybeConsId_12, UsesBaseClass_28, Ptag_14, ExtraRHSRvals_29, RHSRvalsTypesWidths_26, &RHSGroundTerm_35, STATE_VARIABLE_GlobalData_46_46, &STATE_VARIABLE_GlobalData_50_50);
    ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(STATE_VARIABLE_GlobalData_50_50, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_51_51);
    ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_15, RHSGroundTerm_35, STATE_VARIABLE_Info_51_51, STATE_VARIABLE_Info_42);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(*STATE_VARIABLE_Info_42, LHSVar_15, &LHSLval_36);
    RHSRval_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSGroundTerm_35, (MR_Integer) 0))));
    AssignStmt_40 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_36, RHSRval_37, Context_19);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_20 = base;
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

    conv0_LambdaHeadVar__2_44 = ml_backend__ml_unify_gen_construct__IntroducedFrom__func__construct_static_ground_term__1961__1_1_f_0(((MR_Word) (wrapper_arg_1)));
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
  MR_Word MaybeConsId_21,
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
    ExtraInits_29 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[6]), ExtraRvals_24);
    AllInits_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ExtraInits_29, NonExtraInits_28);
    ConstType_32 = ml_backend__ml_unify_gen_construct__get_const_type_for_cons_id_5_f_0(Target_16, HighLevelData_17, MLDS_Type_20, UsesBaseClass_22, MaybeConsId_21);
    succeeded = ((((MR_tag((MR_Word) ConstType_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConstType_32, (MR_Integer) 0)))) == (MR_Integer) 5)));
    if (succeeded)
    {
      {
        Initializer_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Initializer_34, 0) = ((MR_Box) (AllInits_31));
      }
    }
    else
      {
        Initializer_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
        TaggedRval_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TaggedRval_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), TaggedRval_38, 1) = ((MR_Box) (Ptag_23));
        MR_hl_field(MR_mktag(3), TaggedRval_38, 2) = ((MR_Box) (ConstDataAddrRval_37));
      }
    {
      Rval_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Rval_39, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Rval_39, 1) = ((MR_Box) (MLDS_Type_20));
      MR_hl_field(MR_mktag(3), Rval_39, 2) = ((MR_Box) (TaggedRval_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
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
              HeadInit_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), HeadInit_14, 0) = ((MR_Box) (Rval_6));
            }
            ml_backend__ml_unify_gen_construct__ml_pack_ground_term_args_into_word_inits_2_p_0(RvalsTypesWidths_4, &TailInits_15);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadInit_14));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailInits_15));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_8, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Shift_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_8, (MR_Integer) 3))));
                MR_Word Fill_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_8, (MR_Integer) 6))) & (MR_Integer) 7);
                MR_Word RevOrRvals0_22;
                MR_Word LeftOverRvalsTypesWidths_23;
                MR_Word OrAllRval_24;
                MR_Word HeadInit_36;
                MR_Word TailInits_37;
                MR_Word RevOrRvals_58;
                MR_Word OrRvals_59;
                MR_Word RvalConst_44;

                succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  RvalConst_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                  succeeded = ((((MR_tag((MR_Word) RvalConst_44)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), RvalConst_44, (MR_Integer) 0)))) == (MR_Integer) 20)));
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

                  succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    UnboxedRvalPrime_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                    UnboxedRval_46 = UnboxedRvalPrime_53;
                  }
                  else
                    UnboxedRval_46 = Rval_6;
                  ShiftedRval_47 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(UnboxedRval_46, Shift_18, Fill_21);
                  {
                    RevOrRvals0_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), RevOrRvals0_22, 0) = ((MR_Box) (ShiftedRval_47));
                    MR_hl_field(MR_mktag(1), RevOrRvals0_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                ml_backend__ml_unify_gen_construct__ml_pack_into_one_word_loop_4_p_0(RvalsTypesWidths_4, &LeftOverRvalsTypesWidths_23, RevOrRvals0_22, &RevOrRvals_58);
                mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevOrRvals_58, &OrRvals_59);
                if ((OrRvals_59 == (MR_Word) ((MR_Unsigned) 0U)))
                  OrAllRval_24 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[17]));
                else
                {
                  MR_Word HeadOrRval_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OrRvals_59, (MR_Integer) 0))));
                  MR_Word TailOrRvals_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OrRvals_59, (MR_Integer) 1))));
                  MR_Word OrAllRval_62;

                  OrAllRval_62 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(HeadOrRval_60, TailOrRvals_61);
                  {
                    OrAllRval_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), OrAllRval_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(3), OrAllRval_24, 1) = ((MR_Box) ((MR_Unsigned) 20U));
                    MR_hl_field(MR_mktag(3), OrAllRval_24, 2) = ((MR_Box) (OrAllRval_62));
                  }
                }
                {
                  HeadInit_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), HeadInit_36, 0) = ((MR_Box) (OrAllRval_24));
                }
                ml_backend__ml_unify_gen_construct__ml_pack_ground_term_args_into_word_inits_2_p_0(LeftOverRvalsTypesWidths_23, &TailInits_37);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_14, (MR_Integer) 0))))) {
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
                MR_Word Fill_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_14, (MR_Integer) 6))) & (MR_Integer) 7);
                MR_Word STATE_VARIABLE_RevOrRvals_36_38;
                MR_Word RvalConst_45;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_STATE_VARIABLE_RevOrRvals_0_3;

                succeeded = ((((MR_tag((MR_Word) Rval_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  RvalConst_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1))));
                  succeeded = ((((MR_tag((MR_Word) RvalConst_45)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), RvalConst_45, (MR_Integer) 0)))) == (MR_Integer) 20)));
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

                  succeeded = ((((MR_tag((MR_Word) Rval_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    UnboxedRvalPrime_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 2))));
                    UnboxedRval_47 = UnboxedRvalPrime_54;
                  }
                  else
                    UnboxedRval_47 = Rval_12;
                  ShiftedRval_48 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(UnboxedRval_47, Shift_28, Fill_31);
                  {
                    STATE_VARIABLE_RevOrRvals_36_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
  MR_Word MaybeConsId_11)
{
  {
    MR_bool succeeded;
    MR_Word ConstType_12;

    switch (HighLevelData_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[15]));
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorCategory_14;

          succeeded = (Target_7 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              TypeCtorCategory_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 2))));
              succeeded = ((((MR_tag((MR_Word) TypeCtorCategory_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeCtorCategory_14, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
              }
            }
          }
          if (succeeded)
            ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[15]));
          else
          {
            MR_Word CtorSymName_17;
            MR_Integer CtorArity_18;
            MR_Word QualTypeName_20;
            MR_Integer TypeArity_21;
            MR_Word ConsId_16;

            succeeded = (UsesBaseClass_10 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (MaybeConsId_11 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ConsId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeConsId_11, (MR_Integer) 0))));
                succeeded = ((((MR_tag((MR_Word) ConsId_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_16, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  CtorSymName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_16, (MR_Integer) 1))));
                  CtorArity_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_16, (MR_Integer) 2))));
                  if (((MR_tag((MR_Word) MLDS_Type_9)) == (MR_Integer) 1))
                  {
                    MR_Word Var_43 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_9), (MR_Integer) 1));

                    QualTypeName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 0))));
                    TypeArity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 1))));
                    succeeded = MR_TRUE;
                  }
                  else
                  if (((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0)))) == (MR_Integer) 0))))
                  {
                    MR_Word MercuryType_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1))));
                    MR_Word TypeCtor_25;
                    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 2))));

                    succeeded = ((((MR_tag((MR_Word) Var_42)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_42, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(MercuryType_23, &TypeCtor_25);
                      if (succeeded)
                      {
                        ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_25, &QualTypeName_20, &TypeArity_21);
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
              MR_String UnqualTypeName_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), QualTypeName_20, (MR_Integer) 2))));
              MR_String CtorName_29;
              MR_Word MLDS_Module_30;
              MR_String TypeName_32;
              MR_Word ClassQualifier_33;
              MR_Word QualClassName_34;
              MR_Word ClassId_35;

              CtorName_29 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_unqual_type_5_f_0(Target_7, UnqualTypeName_28, TypeArity_21, CtorSymName_17, CtorArity_18);
              MLDS_Module_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualTypeName_20, (MR_Integer) 0))));
              TypeName_32 = ((MR_String) ((MR_hl_field(MR_mktag(0), QualTypeName_20, (MR_Integer) 2))));
              ClassQualifier_33 = ml_backend__mlds__mlds_append_class_qualifier_module_qual_3_f_0(MLDS_Module_30, TypeName_32, TypeArity_21);
              {
                QualClassName_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), QualClassName_34, 0) = ((MR_Box) (ClassQualifier_33));
                MR_hl_field(MR_mktag(0), QualClassName_34, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), QualClassName_34, 2) = ((MR_Box) (CtorName_29));
              }
              {
                ClassId_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ClassId_35, 0) = ((MR_Box) (QualClassName_34));
                MR_hl_field(MR_mktag(0), ClassId_35, 1) = ((MR_Box) (CtorArity_18));
                MR_hl_field(MR_mktag(0), ClassId_35, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_35)));
            }
            else
            {
              MR_Word TypeCtor_56;
              MR_Word Var_46;
              MR_Word MercuryType_53;

              succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                MercuryType_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 1))));
                Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 2))));
                succeeded = ((((MR_tag((MR_Word) Var_46)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_46, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(MercuryType_53, &TypeCtor_56);
                }
              }
              if (succeeded)
              {
                MR_Word ClassName_37;
                MR_Integer ClassArity_38;
                MR_Word ClassId_54;

                ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_56, &ClassName_37, &ClassArity_38);
                {
                  ClassId_54 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ClassId_54, 0) = ((MR_Box) (ClassName_37));
                  MR_hl_field(MR_mktag(0), ClassId_54, 1) = ((MR_Box) (ClassArity_38));
                  MR_hl_field(MR_mktag(0), ClassId_54, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_54)));
              }
              else
              {
                MR_Word Var_48;

                succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 2))));
                  succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 4U));
                }
                if (succeeded)
                  ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[15]));
                else
                {
                  MR_Word Var_50;

                  succeeded = ((((MR_tag((MR_Word) MLDS_Type_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_9, (MR_Integer) 2))));
                    succeeded = (Var_50 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                  if (succeeded)
                    ConstType_12 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[15]));
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

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__813__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
        Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_box_extra_const_rval_list_lld_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (ArgWidth_22));
        MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) ((MR_Integer) 2));
      }
      mercury__require__expect_3_p_0(Var_26, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_box_extra_const_rval_list_lld\'/6", (MR_String) "ArgWidth != aw_full_word");
      ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_1, Context_2, MLDS_Type_20, ArgWidth_22, Rval_19, &BoxedRval_23, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_30_30);
      {
        BoxedRvalTypeWidth_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 0) = ((MR_Box) (BoxedRval_23));
        MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 1) = ((MR_Box) (MLDS_Type_20));
        MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 2) = ((MR_Box) (ArgPosWidth_21));
      }
      ml_backend__ml_unify_gen_construct__ml_gen_box_extra_const_rval_list_lld_6_p_0(ModuleInfo_1, Context_2, RvalsTypesWidths_15, &BoxedRvalsTypesWidths_17, STATE_VARIABLE_GlobalData_30_30, STATE_VARIABLE_GlobalData_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
      BoxedRvalTypeWidth_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 0) = ((MR_Box) (BoxedRval_28));
      MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 1) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(0), BoxedRvalTypeWidth_16, 2) = ((MR_Box) (ArgPosWidth_21));
    }
    ml_backend__ml_unify_gen_construct__ml_gen_box_const_rval_list_lld_6_p_0(Info_1, Context_2, ArgVarsTypesWidths_15, &BoxedRvalsTypesWidths_17, STATE_VARIABLE_GlobalData_31_31, STATE_VARIABLE_GlobalData_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
      FieldRvalTypeWidth_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FieldRvalTypeWidth_16, 0) = ((MR_Box) (FieldRval_28));
      MR_hl_field(MR_mktag(0), FieldRvalTypeWidth_16, 1) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(0), FieldRvalTypeWidth_16, 2) = ((MR_Box) (ConsArgPosWidth_21));
    }
    ml_backend__ml_unify_gen_construct__ml_gen_box_or_unbox_const_rval_list_hld_6_p_0(Info_1, Context_2, ArgVarsTypesWidths_15, &FieldRvalsTypesWidths_17, STATE_VARIABLE_GlobalData_31_31, STATE_VARIABLE_GlobalData_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FieldRvalTypeWidth_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FieldRvalsTypesWidths_17));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_dynamically_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_64;

    conv0_LambdaHeadVar__2_64 = ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_dynamically__510__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_64));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_dynamically_15_p_0(
  MR_Word MaybeConsId_16,
  MR_Word MaybeCtorName_17,
  MR_Word Ptag_18,
  MR_Word ExplicitSectag_19,
  MR_Word LHSVar_20,
  MR_Word LHSType_21,
  MR_Word ExtraRHSRvalsTypesWidths_22,
  MR_Word RHSVarsTypesWidths_23,
  MR_Word ArgModes_24,
  MR_Integer FirstArgNum_25,
  MR_Word TakeAddr_26,
  MR_Word Context_27,
  MR_Word * Stmts_28,
  MR_Word STATE_VARIABLE_Info_0_58,
  MR_Word * STATE_VARIABLE_Info_59)
{
  {
    MR_Word UseAtomicCells_30;
    MR_Word MayUseAtomic0_31;
    MR_Word TakeAddrInfos_32;
    MR_Word PackedRHSRvalsTypesWidths_33;
    MR_Word MayUseAtomic_34;
    MR_Word RHSRvalsTypesWidths_35;
    MR_Integer Size_36;
    MR_Word SizeInWordsRval_37;
    MR_Word ProfileMemory_38;
    MR_Word MaybeAllocId_46;
    MR_Word LHSLval_47;
    MR_Word ArgRvalsTypes_52;
    MR_Word LHS_MLDS_Type_53;
    MR_Word MakeNewObject_54;
    MR_Word MakeNewObjStmt_55;
    MR_Word MaybePtag_56;
    MR_Word TakeAddrStmts_57;
    MR_Word Var_60;
    MR_Word Var_65;

    ml_backend__ml_gen_info__ml_gen_info_get_use_atomic_cells_2_p_0(STATE_VARIABLE_Info_0_58, &UseAtomicCells_30);
    switch (UseAtomicCells_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MayUseAtomic0_31 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        MayUseAtomic0_31 = (MR_Integer) 0;
        break;
    }
    ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0(STATE_VARIABLE_Info_0_58, RHSVarsTypesWidths_23, ArgModes_24, FirstArgNum_25, TakeAddr_26, &TakeAddrInfos_32, &PackedRHSRvalsTypesWidths_33, MayUseAtomic0_31, &MayUseAtomic_34);
    RHSRvalsTypesWidths_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0), ExtraRHSRvalsTypesWidths_22, PackedRHSRvalsTypesWidths_33);
    mercury__list__length_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0), RHSRvalsTypesWidths_35, &Size_36);
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_60, 0) = ((MR_Box) (Size_36));
    }
    {
      SizeInWordsRval_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SizeInWordsRval_37, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), SizeInWordsRval_37, 1) = ((MR_Box) (Var_60));
    }
    ml_backend__ml_gen_info__ml_gen_info_get_profile_memory_2_p_0(STATE_VARIABLE_Info_0_58, &ProfileMemory_38);
    switch (ProfileMemory_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeAllocId_46 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_59 = STATE_VARIABLE_Info_0_58;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleInfo_39;
          MR_Word PredProcId_40;
          MR_Word ProcLabel_42;
          MR_Word GlobalData0_43;
          MR_Word AllocId_44;
          MR_Word GlobalData_45;
          MR_Word Var_61;
          MR_Word _Module_41;

          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_58, &ModuleInfo_39);
          ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_58, &PredProcId_40);
          ml_backend__ml_code_util__ml_gen_proc_label_4_p_0(ModuleInfo_39, PredProcId_40, &_Module_41, &ProcLabel_42);
          ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_58, &GlobalData0_43);
          Var_61 = (MR_Word) ((MR_Word) (ProcLabel_42));
          ml_backend__ml_global_data__ml_gen_alloc_site_7_p_0(Var_61, MaybeConsId_16, Size_36, Context_27, &AllocId_44, GlobalData0_43, &GlobalData_45);
          ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_45, STATE_VARIABLE_Info_0_58, STATE_VARIABLE_Info_59);
          {
            MaybeAllocId_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeAllocId_46, 0) = ((MR_Box) (AllocId_44));
          }
        }
        break;
    }
    ml_backend__ml_code_util__ml_gen_var_3_p_0(*STATE_VARIABLE_Info_59, LHSVar_20, &LHSLval_47);
    ArgRvalsTypes_52 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[5]), RHSRvalsTypesWidths_35);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(*STATE_VARIABLE_Info_59, LHSType_21, &LHS_MLDS_Type_53);
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (SizeInWordsRval_37));
    }
    {
      MakeNewObject_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MakeNewObject_54, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), MakeNewObject_54, 1) = ((MR_Box) (LHSLval_47));
      MR_hl_field(MR_mktag(3), MakeNewObject_54, 2) = ((MR_Box) (Ptag_18));
      MR_hl_field(MR_mktag(3), MakeNewObject_54, 3) = (MR_Box) ((MR_Unsigned) (ExplicitSectag_19));
      MR_hl_field(MR_mktag(3), MakeNewObject_54, 4) = ((MR_Box) (LHS_MLDS_Type_53));
      MR_hl_field(MR_mktag(3), MakeNewObject_54, 5) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(3), MakeNewObject_54, 6) = ((MR_Box) (MaybeCtorName_17));
      MR_hl_field(MR_mktag(3), MakeNewObject_54, 7) = ((MR_Box) (ArgRvalsTypes_52));
      MR_hl_field(MR_mktag(3), MakeNewObject_54, 8) = (MR_Box) ((MR_Unsigned) (MayUseAtomic_34));
      MR_hl_field(MR_mktag(3), MakeNewObject_54, 9) = ((MR_Box) (MaybeAllocId_46));
    }
    {
      MakeNewObjStmt_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_55, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_55, 1) = ((MR_Box) (MakeNewObject_54));
      MR_hl_field(MR_mktag(3), MakeNewObjStmt_55, 2) = ((MR_Box) (Context_27));
    }
    {
      MaybePtag_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybePtag_56, 0) = ((MR_Box) (Ptag_18));
    }
    ml_backend__ml_unify_gen_construct__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_32, LHSLval_47, LHS_MLDS_Type_53, MaybePtag_56, Context_27, *STATE_VARIABLE_Info_59, &TakeAddrStmts_57);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_28 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MakeNewObjStmt_55));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TakeAddrStmts_57));
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
      MR_Word Var_173 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
        MR_Word RHSVar_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_174, (MR_Integer) 0))));
        MR_Word ConsArgType_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_174, (MR_Integer) 1))));
        MR_Word ArgPosWidth_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_174, (MR_Integer) 2))));
        MR_Word HeadTakeAddrInfos_70;
        MR_Word HeadRHSRvalsTypesWidths_72;
        MR_Word LeftOverRHSVarsTypesWidths_87;
        MR_Word LeftOverArgModes_88;
        MR_Integer LeftOverArgNum_89;
        MR_Word TailTakeAddrInfos_109;
        MR_Word TailRHSRvalsTypesWidths_110;
        MR_Word STATE_VARIABLE_MayUseAtomic_130_130;
        MR_Word STATE_VARIABLE_TakeAddr_155_155;

        switch (MR_tag((MR_Word) ArgPosWidth_52)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_116;

              {
                Var_116 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0_2));
                MR_hl_field(MR_mktag(0), Var_116, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_116, 3) = ((MR_Box) (STATE_VARIABLE_TakeAddr_0_5));
                MR_hl_field(MR_mktag(0), Var_116, 4) = ((MR_Box) (CurArgNum_4));
              }
              mercury__require__expect_3_p_0(Var_116, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_args\'/9", (MR_String) "taking address of not apw_full");
              HeadRHSRvalsTypesWidths_72 = (MR_Word) ((MR_Unsigned) 0U);
              HeadTakeAddrInfos_70 = (MR_Word) ((MR_Unsigned) 0U);
              LeftOverRHSVarsTypesWidths_87 = Var_173;
              LeftOverArgModes_88 = ArgModes_44;
              LeftOverArgNum_89 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) 1);
              STATE_VARIABLE_TakeAddr_155_155 = STATE_VARIABLE_TakeAddr_0_5;
              STATE_VARIABLE_MayUseAtomic_130_130 = STATE_VARIABLE_MayUseAtomic_0_8;
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
              check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_60, RHSType_59, STATE_VARIABLE_MayUseAtomic_0_8, &STATE_VARIABLE_MayUseAtomic_130_130);
              ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_1, &HighLevelData_61);
              ArgWidth_62 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_52);
              ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_60, HighLevelData_61, ConsArgType_51, ArgWidth_62, &BoxedRHSType_63);
              RHS_MLDS_Type_64 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_60, BoxedRHSType_63);
              if (((MR_tag((MR_Word) ArgPosWidth_52)) == (MR_Integer) 2))
              {
                MR_Word DoubleWordKind_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), ArgPosWidth_52, (MR_Integer) 2))) & (MR_Integer) 3);
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
                MR_Word Var_131;
                MR_Integer Var_144;
                MR_Integer Var_146;
                MR_Word Var_148;
                MR_Word Var_149;
                MR_Word Var_150;
                MR_Word RHSRval_160;
                MR_Word Var_134;

                {
                  Var_131 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_131, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[0]));
                  MR_hl_field(MR_mktag(0), Var_131, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_131, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_131, 3) = ((MR_Box) (STATE_VARIABLE_TakeAddr_0_5));
                  MR_hl_field(MR_mktag(0), Var_131, 4) = ((MR_Box) (CurArgNum_4));
                }
                mercury__require__expect_3_p_0(Var_131, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_args\'/9", (MR_String) "taking address of apw_double");
                ml_backend__ml_unify_gen_construct__ml_maybe_box_unbox_or_null_lval_8_p_0(ModuleInfo_60, ConsArgType_51, RHSType_59, BoxedRHSType_63, RHS_MLDS_Type_64, ArgMode_43, RHSLval_58, &RHSRval_160);
                succeeded = ((((MR_tag((MR_Word) RHSRval_160)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), RHSRval_160, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RHSRval_160, (MR_Integer) 1))));
                  succeeded = ((((MR_tag((MR_Word) Var_134)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_134, (MR_Integer) 0)))) == (MR_Integer) 20)));
                  if (succeeded)
                  {
                  }
                }
                if (succeeded)
                {
                  SubstType_76 = (MR_Word) ((MR_Unsigned) 20U);
                  RHSRvalA_77 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[13]));
                  RHSRvalB_78 = RHSRvalA_77;
                }
                else
                {
                  SubstType_76 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[14]));
                  switch (DoubleWordKind_74) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          RHSRvalA_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RHSRvalA_77, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), RHSRvalA_77, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                          MR_hl_field(MR_mktag(3), RHSRvalA_77, 2) = ((MR_Box) (RHSRval_160));
                        }
                        {
                          RHSRvalB_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RHSRvalB_78, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), RHSRvalB_78, 1) = ((MR_Box) ((MR_Unsigned) 48U));
                          MR_hl_field(MR_mktag(3), RHSRvalB_78, 2) = ((MR_Box) (RHSRval_160));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          RHSRvalA_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RHSRvalA_77, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), RHSRvalA_77, 1) = ((MR_Box) ((MR_Unsigned) 52U));
                          MR_hl_field(MR_mktag(3), RHSRvalA_77, 2) = ((MR_Box) (RHSRval_160));
                        }
                        {
                          RHSRvalB_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RHSRvalB_78, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), RHSRvalB_78, 1) = ((MR_Box) ((MR_Unsigned) 56U));
                          MR_hl_field(MR_mktag(3), RHSRvalB_78, 2) = ((MR_Box) (RHSRval_160));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        {
                          RHSRvalA_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RHSRvalA_77, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), RHSRvalA_77, 1) = ((MR_Box) ((MR_Unsigned) 60U));
                          MR_hl_field(MR_mktag(3), RHSRvalA_77, 2) = ((MR_Box) (RHSRval_160));
                        }
                        {
                          RHSRvalB_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), RHSRvalB_78, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), RHSRvalB_78, 1) = ((MR_Box) ((MR_Unsigned) 64U));
                          MR_hl_field(MR_mktag(3), RHSRvalB_78, 2) = ((MR_Box) (RHSRval_160));
                        }
                      }
                      break;
                  }
                }
                ArgOnly_79 = (MR_Integer) (ArgOnlyOffsetA_80);
                Var_144 = (MR_Integer) ((MR_Unsigned) ArgOnly_79 + (MR_Unsigned) 1);
                ArgOnlyOffsetB_81 = (MR_Word) (Var_144);
                Cell_82 = (MR_Integer) (CellOffsetA_83);
                Var_146 = (MR_Integer) ((MR_Unsigned) Cell_82 + (MR_Unsigned) 1);
                CellOffsetB_84 = (MR_Word) (Var_146);
                {
                  Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (ArgOnlyOffsetA_80));
                  MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (CellOffsetA_83));
                }
                {
                  RHSRvalTypeWidthA_85 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RHSRvalTypeWidthA_85, 0) = ((MR_Box) (RHSRvalA_77));
                  MR_hl_field(MR_mktag(0), RHSRvalTypeWidthA_85, 1) = ((MR_Box) (SubstType_76));
                  MR_hl_field(MR_mktag(0), RHSRvalTypeWidthA_85, 2) = ((MR_Box) (Var_148));
                }
                {
                  Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (ArgOnlyOffsetB_81));
                  MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) (CellOffsetB_84));
                }
                {
                  RHSRvalTypeWidthB_86 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RHSRvalTypeWidthB_86, 0) = ((MR_Box) (RHSRvalB_78));
                  MR_hl_field(MR_mktag(0), RHSRvalTypeWidthB_86, 1) = ((MR_Box) (SubstType_76));
                  MR_hl_field(MR_mktag(0), RHSRvalTypeWidthB_86, 2) = ((MR_Box) (Var_149));
                }
                {
                  Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (RHSRvalTypeWidthB_86));
                  MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  HeadRHSRvalsTypesWidths_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), HeadRHSRvalsTypesWidths_72, 0) = ((MR_Box) (RHSRvalTypeWidthA_85));
                  MR_hl_field(MR_mktag(1), HeadRHSRvalsTypesWidths_72, 1) = ((MR_Box) (Var_150));
                }
                HeadTakeAddrInfos_70 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_TakeAddr_155_155 = STATE_VARIABLE_TakeAddr_0_5;
              }
              else
              {
                MR_Word CellOffset_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgPosWidth_52, (MR_Integer) 1))));
                MR_Word RHSRval_67;
                MR_Word RHSRvalTypeWidth_71;
                MR_Word STATE_VARIABLE_TakeAddr_152_152;
                MR_Integer Var_172;

                succeeded = (STATE_VARIABLE_TakeAddr_0_5 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_172 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_5, (MR_Integer) 0))));
                  STATE_VARIABLE_TakeAddr_152_152 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_5, (MR_Integer) 1))));
                  succeeded = (CurArgNum_4 == Var_172);
                }
                if (succeeded)
                {
                  MR_Word OrigMLDS_Type_68;
                  MR_Word TakeAddrInfo_69;
                  MR_Word Var_153;

                  STATE_VARIABLE_TakeAddr_155_155 = STATE_VARIABLE_TakeAddr_152_152;
                  {
                    Var_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_153, 0) = ((MR_Box) ((MR_Unsigned) 20U));
                    MR_hl_field(MR_mktag(3), Var_153, 1) = ((MR_Box) (RHS_MLDS_Type_64));
                  }
                  {
                    RHSRval_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), RHSRval_67, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), RHSRval_67, 1) = ((MR_Box) (Var_153));
                  }
                  OrigMLDS_Type_68 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_60, ConsArgType_51);
                  {
                    TakeAddrInfo_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), TakeAddrInfo_69, 0) = ((MR_Box) (RHSVar_50));
                    MR_hl_field(MR_mktag(0), TakeAddrInfo_69, 1) = ((MR_Box) (CellOffset_66));
                    MR_hl_field(MR_mktag(0), TakeAddrInfo_69, 2) = ((MR_Box) (OrigMLDS_Type_68));
                    MR_hl_field(MR_mktag(0), TakeAddrInfo_69, 3) = ((MR_Box) (RHS_MLDS_Type_64));
                  }
                  {
                    HeadTakeAddrInfos_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), HeadTakeAddrInfos_70, 0) = ((MR_Box) (TakeAddrInfo_69));
                    MR_hl_field(MR_mktag(1), HeadTakeAddrInfos_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                else
                {
                  ml_backend__ml_unify_gen_construct__ml_maybe_box_unbox_or_null_lval_8_p_0(ModuleInfo_60, ConsArgType_51, RHSType_59, BoxedRHSType_63, RHS_MLDS_Type_64, ArgMode_43, RHSLval_58, &RHSRval_67);
                  HeadTakeAddrInfos_70 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_TakeAddr_155_155 = STATE_VARIABLE_TakeAddr_0_5;
                }
                {
                  RHSRvalTypeWidth_71 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), RHSRvalTypeWidth_71, 0) = ((MR_Box) (RHSRval_67));
                  MR_hl_field(MR_mktag(0), RHSRvalTypeWidth_71, 1) = ((MR_Box) (RHS_MLDS_Type_64));
                  MR_hl_field(MR_mktag(0), RHSRvalTypeWidth_71, 2) = ((MR_Box) (ArgPosWidth_52));
                }
                {
                  HeadRHSRvalsTypesWidths_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), HeadRHSRvalsTypesWidths_72, 0) = ((MR_Box) (RHSRvalTypeWidth_71));
                  MR_hl_field(MR_mktag(1), HeadRHSRvalsTypesWidths_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              LeftOverRHSVarsTypesWidths_87 = Var_173;
              LeftOverArgModes_88 = ArgModes_44;
              LeftOverArgNum_89 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) 1);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Shift_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 3))));
                  MR_Word NumBits_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 4))));
                  MR_Word Fill_93 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 6))) & (MR_Integer) 7);
                  MR_Word HeadBitfield_94;
                  MR_Word HeadBitfieldValue_95;
                  MR_Word HeadFilledBitfield_96;
                  MR_Word RevTailFilledBitfields_97;
                  MR_Word TailFilledBitfields_98;
                  MR_Word WordRval_99;
                  MR_Word CastWordRval_100;
                  MR_Word Var_120;
                  MR_Integer Var_123;
                  MR_Word Var_128;
                  MR_Word ModuleInfo_161;
                  MR_Word HighLevelData_162;
                  MR_Word ArgWidth_163;
                  MR_Word BoxedRHSType_164;
                  MR_Word RHS_MLDS_Type_165;
                  MR_Word CellOffset_166 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 2))));
                  MR_Word RHSRvalTypeWidth_167;
                  MR_Word ArgOnlyOffset_168 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 1))));

                  {
                    Var_120 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[0]));
                    MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0_3));
                    MR_hl_field(MR_mktag(0), Var_120, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_120, 3) = ((MR_Box) (STATE_VARIABLE_TakeAddr_0_5));
                    MR_hl_field(MR_mktag(0), Var_120, 4) = ((MR_Box) (CurArgNum_4));
                  }
                  mercury__require__expect_3_p_0(Var_120, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_args\'/9", (MR_String) "taking address of apw_partial_first");
                  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_161);
                  ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_1, &HighLevelData_162);
                  ArgWidth_163 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_52);
                  ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_161, HighLevelData_162, ConsArgType_51, ArgWidth_163, &BoxedRHSType_164);
                  RHS_MLDS_Type_165 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_161, BoxedRHSType_164);
                  {
                    HeadBitfield_94 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), HeadBitfield_94, 0) = ((MR_Box) (Shift_90));
                    MR_hl_field(MR_mktag(0), HeadBitfield_94, 1) = ((MR_Box) (NumBits_91));
                    MR_hl_field(MR_mktag(0), HeadBitfield_94, 2) = (MR_Box) ((MR_Unsigned) (Fill_93));
                  }
                  ml_backend__ml_unify_gen_construct__ml_maybe_null_var_5_p_0(Info_1, RHSVar_50, ConsArgType_51, ArgMode_43, &HeadBitfieldValue_95);
                  {
                    HeadFilledBitfield_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), HeadFilledBitfield_96, 0) = ((MR_Box) (HeadBitfield_94));
                    MR_hl_field(MR_mktag(0), HeadFilledBitfield_96, 1) = ((MR_Box) (HeadBitfieldValue_95));
                  }
                  Var_123 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) 1);
                  ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_packed_word_10_p_0(Info_1, Var_173, &LeftOverRHSVarsTypesWidths_87, ArgModes_44, &LeftOverArgModes_88, Var_123, &LeftOverArgNum_89, STATE_VARIABLE_TakeAddr_0_5, (MR_Word) ((MR_Unsigned) 0U), &RevTailFilledBitfields_97);
                  mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), RevTailFilledBitfields_97, &TailFilledBitfields_98);
                  ml_backend__ml_unify_gen_construct__filled_bitfields_to_packed_word_5_p_0(Info_1, (MR_Integer) 1, HeadFilledBitfield_96, TailFilledBitfields_98, &WordRval_99);
                  {
                    CastWordRval_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), CastWordRval_100, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(3), CastWordRval_100, 1) = ((MR_Box) ((MR_Unsigned) 20U));
                    MR_hl_field(MR_mktag(3), CastWordRval_100, 2) = ((MR_Box) (WordRval_99));
                  }
                  {
                    Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (ArgOnlyOffset_168));
                    MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (CellOffset_166));
                  }
                  {
                    RHSRvalTypeWidth_167 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), RHSRvalTypeWidth_167, 0) = ((MR_Box) (CastWordRval_100));
                    MR_hl_field(MR_mktag(0), RHSRvalTypeWidth_167, 1) = ((MR_Box) (RHS_MLDS_Type_165));
                    MR_hl_field(MR_mktag(0), RHSRvalTypeWidth_167, 2) = ((MR_Box) (Var_128));
                  }
                  {
                    HeadRHSRvalsTypesWidths_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), HeadRHSRvalsTypesWidths_72, 0) = ((MR_Box) (RHSRvalTypeWidth_167));
                    MR_hl_field(MR_mktag(1), HeadRHSRvalsTypesWidths_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  HeadTakeAddrInfos_70 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_TakeAddr_155_155 = STATE_VARIABLE_TakeAddr_0_5;
                  STATE_VARIABLE_MayUseAtomic_130_130 = STATE_VARIABLE_MayUseAtomic_0_8;
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
        ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0(Info_1, LeftOverRHSVarsTypesWidths_87, LeftOverArgModes_88, LeftOverArgNum_89, STATE_VARIABLE_TakeAddr_155_155, &TailTakeAddrInfos_109, &TailRHSRvalsTypesWidths_110, STATE_VARIABLE_MayUseAtomic_130_130, STATE_VARIABLE_MayUseAtomic_9);
        *HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0), HeadRHSRvalsTypesWidths_72, TailRHSRvalsTypesWidths_110);
        *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__type_ctor_info_take_addr_info_0), HeadTakeAddrInfos_70, TailTakeAddrInfos_109);
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__filled_bitfields_to_packed_word_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__count_matching_bitfield__2539__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__filled_bitfields_to_packed_word_5_p_0(
  MR_Word Info_6,
  MR_Word UseMap_7,
  MR_Word HeadFilledBitfield_8,
  MR_Word TailFilledBitfields_9,
  MR_Word * WordRval_10)
{
  {
    MR_bool succeeded;
    MR_Word PackedWord_11;
    MR_Word FilledPackedWord_12;
    MR_Word PackedWordMap_13;
    MR_Word MissingBitfields_15;
    MR_Word OldWordRval_16;
    MR_Word TypeInfo_31_31;
    MR_Word TypeInfo_32_32;
    MR_Word Instances_14;
    MR_Word HeadInstance_37;
    MR_Word TailInstances_38;
    MR_Word HeadFilledPackedWord_39;
    MR_Integer HeadMatches_41;
    MR_Integer HeadNonMatches_42;
    MR_Word HeadMissing_43;
    MR_Word BestInstance_44;
    MR_Integer BestMatches_45;
    MR_Integer Var_48;
    MR_Word HeadFilledBitfieldA_57;
    MR_Word TailFilledBitfieldsA_58;
    MR_Word HeadFilledBitfieldB_59;
    MR_Word TailFilledBitfieldsB_60;
    MR_Integer STATE_VARIABLE_Matches_18_61;
    MR_Integer STATE_VARIABLE_NonMatches_19_62;
    MR_Word STATE_VARIABLE_RevMissingB_20_63;
    MR_Integer STATE_VARIABLE_Matches_21_64;
    MR_Integer STATE_VARIABLE_NonMatches_22_65;
    MR_Word STATE_VARIABLE_RevMissingB_23_66;
    MR_Word BitfieldA_81;
    MR_Word BitfieldValueA_82;
    MR_Word BitfieldB_83;
    MR_Word BitfieldValueB_84;
    MR_Word Var_85;
    MR_String Var_86;
    MR_String Var_87;
    MR_Box conv0_Instances_14;
    MR_Integer _BestNonMatches_46;

    ml_backend__ml_gen_info__get_unfilled_filled_packed_words_4_p_0(HeadFilledBitfield_8, TailFilledBitfields_9, &PackedWord_11, &FilledPackedWord_12);
    ml_backend__ml_gen_info__ml_gen_info_get_packed_word_map_2_p_0(Info_6, &PackedWordMap_13);
    succeeded = (UseMap_7 == (MR_Integer) 1);
    if (succeeded)
    {
      TypeInfo_31_31 = (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[6]);
      TypeInfo_32_32 = (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[7]);
      succeeded = mercury__map__search_3_p_0(TypeInfo_31_31, TypeInfo_32_32, PackedWordMap_13, ((MR_Box) (PackedWord_11)), &conv0_Instances_14);
      if (succeeded)
      {
        Instances_14 = ((MR_Word) (conv0_Instances_14));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        HeadInstance_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instances_14, (MR_Integer) 0))));
        TailInstances_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instances_14, (MR_Integer) 1))));
        HeadFilledPackedWord_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadInstance_37, (MR_Integer) 0))));
        HeadFilledBitfieldA_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFilledPackedWord_39, (MR_Integer) 0))));
        TailFilledBitfieldsA_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFilledPackedWord_39, (MR_Integer) 1))));
        HeadFilledBitfieldB_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FilledPackedWord_12, (MR_Integer) 0))));
        TailFilledBitfieldsB_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FilledPackedWord_12, (MR_Integer) 1))));
        STATE_VARIABLE_Matches_18_61 = (MR_Integer) 0;
        STATE_VARIABLE_NonMatches_19_62 = (MR_Integer) 0;
        STATE_VARIABLE_RevMissingB_20_63 = (MR_Word) ((MR_Unsigned) 0U);
        BitfieldA_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFilledBitfieldA_57, (MR_Integer) 0))));
        BitfieldValueA_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFilledBitfieldA_57, (MR_Integer) 1))));
        BitfieldB_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFilledBitfieldB_59, (MR_Integer) 0))));
        BitfieldValueB_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFilledBitfieldB_59, (MR_Integer) 1))));
        Var_86 = (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.count_matching_bitfield\'/8";
        Var_87 = (MR_String) "mismatched bitfields";
        {
          Var_85 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__filled_bitfields_to_packed_word_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (BitfieldA_81));
          MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) (BitfieldB_83));
        }
        mercury__require__expect_3_p_0(Var_85, Var_86, Var_87);
        succeeded = ml_backend__ml_gen_info____Unify____bitfield_value_0_0(BitfieldValueA_82, BitfieldValueB_84);
        if (succeeded)
        {
          STATE_VARIABLE_Matches_21_64 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Matches_18_61 + (MR_Unsigned) 1);
          STATE_VARIABLE_RevMissingB_23_66 = STATE_VARIABLE_RevMissingB_20_63;
          STATE_VARIABLE_NonMatches_22_65 = STATE_VARIABLE_NonMatches_19_62;
        }
        else
        {
          STATE_VARIABLE_NonMatches_22_65 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NonMatches_19_62 + (MR_Unsigned) 1);
          {
            STATE_VARIABLE_RevMissingB_23_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMissingB_23_66, 0) = ((MR_Box) (HeadFilledBitfieldB_59));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMissingB_23_66, 1) = ((MR_Box) (STATE_VARIABLE_RevMissingB_20_63));
          }
          STATE_VARIABLE_Matches_21_64 = STATE_VARIABLE_Matches_18_61;
        }
        ml_backend__ml_unify_gen_construct__count_matching_bitfields_loop_8_p_0(TailFilledBitfieldsA_58, TailFilledBitfieldsB_60, STATE_VARIABLE_Matches_21_64, &HeadMatches_41, STATE_VARIABLE_NonMatches_22_65, &HeadNonMatches_42, STATE_VARIABLE_RevMissingB_23_66, &HeadMissing_43);
        ml_backend__ml_unify_gen_construct__find_best_matching_instance_loop_10_p_0(TailInstances_38, FilledPackedWord_12, HeadInstance_37, HeadMatches_41, HeadNonMatches_42, HeadMissing_43, &BestInstance_44, &BestMatches_45, &_BestNonMatches_46, &MissingBitfields_15);
        Var_48 = (MR_Integer) 2;
        succeeded = (BestMatches_45 >= Var_48);
        if (succeeded)
        {
          OldWordRval_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BestInstance_44, (MR_Integer) 1))));
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      if ((MissingBitfields_15 == (MR_Word) ((MR_Unsigned) 0U)))
        *WordRval_10 = OldWordRval_16;
      else
      {
        MR_Word HeadMissingBitfield_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MissingBitfields_15, (MR_Integer) 0))));
        MR_Word TailMissingBitfields_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MissingBitfields_15, (MR_Integer) 1))));
        MR_Unsigned MissingBitfieldsMask_19;
        MR_Word ComplementMaskRval_20;
        MR_Word MaskedOldWordRval_21;
        MR_Word MissingBitfieldsRval_22;
        MR_Word Var_25;
        MR_Word Var_26;

        ml_backend__ml_unify_gen_construct__construct_missing_bitfields_mask_3_p_0(HeadMissingBitfield_17, TailMissingBitfields_18, &MissingBitfieldsMask_19);
        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (MissingBitfieldsMask_19));
        }
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (Var_26));
        }
        {
          ComplementMaskRval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ComplementMaskRval_20, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), ComplementMaskRval_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_construct_scalar_common_3[1])));
          MR_hl_field(MR_mktag(3), ComplementMaskRval_20, 2) = ((MR_Box) (Var_25));
        }
        {
          MaskedOldWordRval_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), MaskedOldWordRval_21, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(MR_mktag(3), MaskedOldWordRval_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[10])));
          MR_hl_field(MR_mktag(3), MaskedOldWordRval_21, 2) = ((MR_Box) (OldWordRval_16));
          MR_hl_field(MR_mktag(3), MaskedOldWordRval_21, 3) = ((MR_Box) (ComplementMaskRval_20));
        }
        ml_backend__ml_unify_gen_construct__construct_rval_for_filled_bitfields_4_p_0(Info_6, HeadMissingBitfield_17, TailMissingBitfields_18, &MissingBitfieldsRval_22);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *WordRval_10 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_construct_scalar_common_1[11])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedOldWordRval_21));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MissingBitfieldsRval_22));
        }
      }
    else
      ml_backend__ml_unify_gen_construct__construct_rval_for_filled_bitfields_4_p_0(Info_6, HeadFilledBitfield_8, TailFilledBitfields_9, WordRval_10);
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__construct_rval_for_filled_bitfields_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_RevToOrRvals_19;

    ml_backend__ml_unify_gen_construct__accumulate_translated_filled_bitfield_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_RevToOrRvals_19);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_RevToOrRvals_19));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__construct_rval_for_filled_bitfields_4_p_0(
  MR_Word Info_5,
  MR_Word HeadFilledBitfield_6,
  MR_Word TailFilledBitfields_7,
  MR_Word * WordRval_8)
{
  {
    MR_Word RevToOrRvals1_10;
    MR_Word RevToOrRvals_11;
    MR_Word ToOrRvals_12;
    MR_Word Var_13;
    MR_Box conv1_RevToOrRvals_11;

    ml_backend__ml_unify_gen_construct__accumulate_translated_filled_bitfield_4_p_0(Info_5, HeadFilledBitfield_6, (MR_Word) ((MR_Unsigned) 0U), &RevToOrRvals1_10);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__construct_rval_for_filled_bitfields_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[4]), Var_13, TailFilledBitfields_7, ((MR_Box) (RevToOrRvals1_10)), &conv1_RevToOrRvals_11);
    RevToOrRvals_11 = ((MR_Word) (conv1_RevToOrRvals_11));
    mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevToOrRvals_11, &ToOrRvals_12);
    *WordRval_8 = ml_backend__ml_unify_gen_util__ml_bitwise_or_rvals_1_f_0(ToOrRvals_12);
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__accumulate_translated_filled_bitfield_4_p_0(
  MR_Word Info_5,
  MR_Word FilledBitfield_6,
  MR_Word STATE_VARIABLE_RevToOrRvals_0_18,
  MR_Word * STATE_VARIABLE_RevToOrRvals_19)
{
  {
    MR_bool succeeded;
    MR_Word Bitfield_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FilledBitfield_6, (MR_Integer) 0))));
    MR_Word BitfieldValue_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FilledBitfield_6, (MR_Integer) 1))));
    MR_Word Shift_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Bitfield_8, (MR_Integer) 0))));
    MR_Word Fill_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Bitfield_8, (MR_Integer) 2))) & (MR_Integer) 7);

    switch (MR_tag((MR_Word) BitfieldValue_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BitfieldValue_9, (MR_Integer) 0))));
          MR_Word VarLval_14;
          MR_Word UnboxedRval_64;
          MR_Word ShiftedRval_65;

          ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_5, Var_13, &VarLval_14);
          {
            UnboxedRval_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), UnboxedRval_64, 0) = ((MR_Box) (VarLval_14));
          }
          ShiftedRval_65 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(UnboxedRval_64, Shift_10, Fill_12);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_RevToOrRvals_19 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ShiftedRval_65));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevToOrRvals_0_18));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgRval_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BitfieldValue_9, (MR_Integer) 0))));
          MR_Word RvalConst_46;

          succeeded = ((((MR_tag((MR_Word) ArgRval_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgRval_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            RvalConst_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgRval_15, (MR_Integer) 1))));
            succeeded = ((((MR_tag((MR_Word) RvalConst_46)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), RvalConst_46, (MR_Integer) 0)))) == (MR_Integer) 20)));
            if (succeeded)
            {
            }
            if (!(succeeded))
            {
              MR_Word Var_50;

              Var_50 = ml_backend__ml_unify_gen_util__ml_is_zero_const_1_f_0(RvalConst_46);
              succeeded = (Var_50 == (MR_Integer) 1);
            }
          }
          if (succeeded)
            *STATE_VARIABLE_RevToOrRvals_19 = STATE_VARIABLE_RevToOrRvals_0_18;
          else
          {
            MR_Word UnboxedRval_48;
            MR_Word ShiftedRval_49;
            MR_Word UnboxedRvalPrime_55;

            succeeded = ((((MR_tag((MR_Word) ArgRval_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgRval_15, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              UnboxedRvalPrime_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgRval_15, (MR_Integer) 2))));
              UnboxedRval_48 = UnboxedRvalPrime_55;
            }
            else
              UnboxedRval_48 = ArgRval_15;
            ShiftedRval_49 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(UnboxedRval_48, Shift_10, Fill_12);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_RevToOrRvals_19 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ShiftedRval_49));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevToOrRvals_0_18));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Unsigned ValueUint_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), BitfieldValue_9, (MR_Integer) 0))));

          succeeded = (ValueUint_16 == (MR_Unsigned) 0U);
          if (succeeded)
            *STATE_VARIABLE_RevToOrRvals_19 = STATE_VARIABLE_RevToOrRvals_0_18;
          else
          {
            MR_Word Rval_17;
            MR_Word Var_20;
            MR_Word RvalConst_30;

            {
              Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (ValueUint_16));
            }
            {
              Rval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Rval_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Rval_17, 1) = ((MR_Box) (Var_20));
            }
            succeeded = ((((MR_tag((MR_Word) Rval_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              RvalConst_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_17, (MR_Integer) 1))));
              succeeded = ((((MR_tag((MR_Word) RvalConst_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), RvalConst_30, (MR_Integer) 0)))) == (MR_Integer) 20)));
              if (succeeded)
              {
              }
              if (!(succeeded))
              {
                MR_Word Var_34;

                Var_34 = ml_backend__ml_unify_gen_util__ml_is_zero_const_1_f_0(RvalConst_30);
                succeeded = (Var_34 == (MR_Integer) 1);
              }
            }
            if (succeeded)
              *STATE_VARIABLE_RevToOrRvals_19 = STATE_VARIABLE_RevToOrRvals_0_18;
            else
            {
              MR_Word ShiftedRval_33;

              ShiftedRval_33 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(Rval_17, Shift_10, Fill_12);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_RevToOrRvals_19 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ShiftedRval_33));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevToOrRvals_0_18));
              }
            }
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__construct_missing_bitfields_mask_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Unsigned conv0_STATE_VARIABLE_Mask_8;

    ml_backend__ml_unify_gen_construct__accumulate_bitfield_mask_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Unsigned) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Mask_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Mask_8));
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__construct_missing_bitfields_mask_3_p_0(
  MR_Word HeadMissingBitfield_4,
  MR_Word TailMissingBitfields_5,
  MR_Unsigned * MissingBitfieldsMask_6)
{
  {
    MR_Unsigned HeadBitfieldMask_7;
    MR_Word Bitfield_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadMissingBitfield_4, (MR_Integer) 0))));
    MR_Word Shift_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Bitfield_16, (MR_Integer) 0))));
    MR_Word NumBits_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Bitfield_16, (MR_Integer) 1))));
    MR_Integer ShiftInt_21 = (MR_Integer) (Shift_18);
    MR_Integer NumBitsInt_22 = (MR_Integer) (NumBits_19);
    MR_Unsigned Var_23;
    MR_Unsigned Var_24;
    MR_Box conv1_MissingBitfieldsMask_6;

    Var_24 = mercury__uint__f_60_60_2_f_0((MR_Unsigned) 1U, NumBitsInt_22);
    Var_23 = (Var_24 - (MR_Unsigned) 1U);
    HeadBitfieldMask_7 = mercury__uint__f_60_60_2_f_0(Var_23, ShiftInt_21);
    mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[4]), TailMissingBitfields_5, ((MR_Box) (HeadBitfieldMask_7)), &conv1_MissingBitfieldsMask_6);
    *MissingBitfieldsMask_6 = ((MR_Unsigned) (conv1_MissingBitfieldsMask_6));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__find_best_matching_instance_loop_10_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__count_matching_bitfield__2539__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__find_best_matching_instance_loop_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word FilledPackedWord_2,
  MR_Word STATE_VARIABLE_BestInstanceSF_0_3,
  MR_Integer STATE_VARIABLE_BestMatchesSF_0_4,
  MR_Integer STATE_VARIABLE_BestNonMatchesSF_0_5,
  MR_Word STATE_VARIABLE_BestMissingSF_0_6,
  MR_Word * BestInstance_7,
  MR_Integer * BestMatches_8,
  MR_Integer * BestNonMatches_9,
  MR_Word * BestMissing_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *BestInstance_7 = STATE_VARIABLE_BestInstanceSF_0_3;
      *BestMatches_8 = STATE_VARIABLE_BestMatchesSF_0_4;
      *BestNonMatches_9 = STATE_VARIABLE_BestNonMatchesSF_0_5;
      *BestMissing_10 = STATE_VARIABLE_BestMissingSF_0_6;
    }
    else
    {
      MR_Word Instance_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instances_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word InsFilledPackedWord_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_24, (MR_Integer) 0))));
      MR_Integer Matches_37;
      MR_Integer NonMatches_38;
      MR_Word Missing_39;
      MR_Word STATE_VARIABLE_BestInstanceSF_44_44;
      MR_Integer STATE_VARIABLE_BestMatchesSF_45_45;
      MR_Integer STATE_VARIABLE_BestNonMatchesSF_46_46;
      MR_Word STATE_VARIABLE_BestMissingSF_47_47;
      MR_Word HeadFilledBitfieldA_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InsFilledPackedWord_35, (MR_Integer) 0))));
      MR_Word TailFilledBitfieldsA_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InsFilledPackedWord_35, (MR_Integer) 1))));
      MR_Word HeadFilledBitfieldB_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FilledPackedWord_2, (MR_Integer) 0))));
      MR_Word TailFilledBitfieldsB_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FilledPackedWord_2, (MR_Integer) 1))));
      MR_Integer STATE_VARIABLE_Matches_21_63;
      MR_Integer STATE_VARIABLE_NonMatches_22_64;
      MR_Word STATE_VARIABLE_RevMissingB_23_65;
      MR_Word BitfieldA_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFilledBitfieldA_56, (MR_Integer) 0))));
      MR_Word BitfieldValueA_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFilledBitfieldA_56, (MR_Integer) 1))));
      MR_Word BitfieldB_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFilledBitfieldB_58, (MR_Integer) 0))));
      MR_Word BitfieldValueB_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadFilledBitfieldB_58, (MR_Integer) 1))));
      MR_Word Var_84;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_BestInstanceSF_0_3;
      MR_Integer next_value_of_STATE_VARIABLE_BestMatchesSF_0_4;
      MR_Integer next_value_of_STATE_VARIABLE_BestNonMatchesSF_0_5;
      MR_Word next_value_of_STATE_VARIABLE_BestMissingSF_0_6;

      {
        Var_84 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__find_best_matching_instance_loop_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_84, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_84, 3) = ((MR_Box) (BitfieldA_80));
        MR_hl_field(MR_mktag(0), Var_84, 4) = ((MR_Box) (BitfieldB_82));
      }
      mercury__require__expect_3_p_0(Var_84, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.count_matching_bitfield\'/8", (MR_String) "mismatched bitfields");
      succeeded = ml_backend__ml_gen_info____Unify____bitfield_value_0_0(BitfieldValueA_81, BitfieldValueB_83);
      if (succeeded)
      {
        STATE_VARIABLE_Matches_21_63 = (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1);
        STATE_VARIABLE_RevMissingB_23_65 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_NonMatches_22_64 = (MR_Integer) 0;
      }
      else
      {
        STATE_VARIABLE_NonMatches_22_64 = (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1);
        {
          STATE_VARIABLE_RevMissingB_23_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMissingB_23_65, 0) = ((MR_Box) (HeadFilledBitfieldB_58));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMissingB_23_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        STATE_VARIABLE_Matches_21_63 = (MR_Integer) 0;
      }
      ml_backend__ml_unify_gen_construct__count_matching_bitfields_loop_8_p_0(TailFilledBitfieldsA_57, TailFilledBitfieldsB_59, STATE_VARIABLE_Matches_21_63, &Matches_37, STATE_VARIABLE_NonMatches_22_64, &NonMatches_38, STATE_VARIABLE_RevMissingB_23_65, &Missing_39);
      succeeded = (Matches_37 > STATE_VARIABLE_BestMatchesSF_0_4);
      if (succeeded)
      {
        STATE_VARIABLE_BestInstanceSF_44_44 = Instance_24;
        STATE_VARIABLE_BestMatchesSF_45_45 = Matches_37;
        STATE_VARIABLE_BestNonMatchesSF_46_46 = NonMatches_38;
        STATE_VARIABLE_BestMissingSF_47_47 = Missing_39;
      }
      else
      {
        STATE_VARIABLE_BestMissingSF_47_47 = STATE_VARIABLE_BestMissingSF_0_6;
        STATE_VARIABLE_BestNonMatchesSF_46_46 = STATE_VARIABLE_BestNonMatchesSF_0_5;
        STATE_VARIABLE_BestMatchesSF_45_45 = STATE_VARIABLE_BestMatchesSF_0_4;
        STATE_VARIABLE_BestInstanceSF_44_44 = STATE_VARIABLE_BestInstanceSF_0_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Instances_25;
      next_value_of_STATE_VARIABLE_BestInstanceSF_0_3 = STATE_VARIABLE_BestInstanceSF_44_44;
      next_value_of_STATE_VARIABLE_BestMatchesSF_0_4 = STATE_VARIABLE_BestMatchesSF_45_45;
      next_value_of_STATE_VARIABLE_BestNonMatchesSF_0_5 = STATE_VARIABLE_BestNonMatchesSF_46_46;
      next_value_of_STATE_VARIABLE_BestMissingSF_0_6 = STATE_VARIABLE_BestMissingSF_47_47;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_BestInstanceSF_0_3 = next_value_of_STATE_VARIABLE_BestInstanceSF_0_3;
      STATE_VARIABLE_BestMatchesSF_0_4 = next_value_of_STATE_VARIABLE_BestMatchesSF_0_4;
      STATE_VARIABLE_BestNonMatchesSF_0_5 = next_value_of_STATE_VARIABLE_BestNonMatchesSF_0_5;
      STATE_VARIABLE_BestMissingSF_0_6 = next_value_of_STATE_VARIABLE_BestMissingSF_0_6;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__count_matching_bitfields_loop_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__count_matching_bitfield__2539__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__count_matching_bitfields_loop_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_Matches_0_3,
  MR_Integer * STATE_VARIABLE_Matches_4,
  MR_Integer STATE_VARIABLE_NonMatches_0_5,
  MR_Integer * STATE_VARIABLE_NonMatches_6,
  MR_Word STATE_VARIABLE_RevMissingB_0_7,
  MR_Word * STATE_VARIABLE_RevMissingB_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_RevMissingB_8 = STATE_VARIABLE_RevMissingB_0_7;
        *STATE_VARIABLE_NonMatches_6 = STATE_VARIABLE_NonMatches_0_5;
        *STATE_VARIABLE_Matches_4 = STATE_VARIABLE_Matches_0_3;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.count_matching_bitfields_loop\'/8", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.count_matching_bitfields_loop\'/8", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word FilledBitfieldB_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word FilledBitfieldsB_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Integer STATE_VARIABLE_Matches_57_57;
        MR_Integer STATE_VARIABLE_NonMatches_58_58;
        MR_Word STATE_VARIABLE_RevMissingB_59_59;
        MR_Word BitfieldA_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 0))));
        MR_Word BitfieldValueA_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 1))));
        MR_Word BitfieldB_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FilledBitfieldB_46, (MR_Integer) 0))));
        MR_Word BitfieldValueB_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FilledBitfieldB_46, (MR_Integer) 1))));
        MR_Word Var_80;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Integer next_value_of_STATE_VARIABLE_Matches_0_3;
        MR_Integer next_value_of_STATE_VARIABLE_NonMatches_0_5;
        MR_Word next_value_of_STATE_VARIABLE_RevMissingB_0_7;

        {
          Var_80 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__count_matching_bitfields_loop_8_p_0_1));
          MR_hl_field(MR_mktag(0), Var_80, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_80, 3) = ((MR_Box) (BitfieldA_76));
          MR_hl_field(MR_mktag(0), Var_80, 4) = ((MR_Box) (BitfieldB_78));
        }
        mercury__require__expect_3_p_0(Var_80, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.count_matching_bitfield\'/8", (MR_String) "mismatched bitfields");
        succeeded = ml_backend__ml_gen_info____Unify____bitfield_value_0_0(BitfieldValueA_77, BitfieldValueB_79);
        if (succeeded)
        {
          STATE_VARIABLE_Matches_57_57 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Matches_0_3 + (MR_Unsigned) 1);
          STATE_VARIABLE_RevMissingB_59_59 = STATE_VARIABLE_RevMissingB_0_7;
          STATE_VARIABLE_NonMatches_58_58 = STATE_VARIABLE_NonMatches_0_5;
        }
        else
        {
          STATE_VARIABLE_NonMatches_58_58 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NonMatches_0_5 + (MR_Unsigned) 1);
          {
            STATE_VARIABLE_RevMissingB_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMissingB_59_59, 0) = ((MR_Box) (FilledBitfieldB_46));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMissingB_59_59, 1) = ((MR_Box) (STATE_VARIABLE_RevMissingB_0_7));
          }
          STATE_VARIABLE_Matches_57_57 = STATE_VARIABLE_Matches_0_3;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_63;
        next_value_of_HeadVar__2_2 = FilledBitfieldsB_47;
        next_value_of_STATE_VARIABLE_Matches_0_3 = STATE_VARIABLE_Matches_57_57;
        next_value_of_STATE_VARIABLE_NonMatches_0_5 = STATE_VARIABLE_NonMatches_58_58;
        next_value_of_STATE_VARIABLE_RevMissingB_0_7 = STATE_VARIABLE_RevMissingB_59_59;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Matches_0_3 = next_value_of_STATE_VARIABLE_Matches_0_3;
        STATE_VARIABLE_NonMatches_0_5 = next_value_of_STATE_VARIABLE_NonMatches_0_5;
        STATE_VARIABLE_RevMissingB_0_7 = next_value_of_STATE_VARIABLE_RevMissingB_0_7;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_maybe_box_unbox_or_null_lval_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ConsArgType_10,
  MR_Word RHSType_11,
  MR_Word BoxedRHSType_12,
  MR_Word RHS_MLDS_Type_13,
  MR_Word ArgMode_14,
  MR_Word RHSLval_15,
  MR_Word * RHSRval_16)
{
  {
    MR_bool succeeded;
    MR_Word RHSInsts_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_14, (MR_Integer) 1))));
    MR_Word Var_20;
    MR_Word Var_24;

    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_9, RHSInsts_18, RHSType_11, &Var_24);
    succeeded = ((MR_Integer) 0 == Var_24);
    if (succeeded)
    {
      Var_20 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_9, RHSType_11, ConsArgType_10);
      succeeded = (Var_20 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word Var_22;

      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_22, 0) = ((MR_Box) (RHSLval_15));
      }
      ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_9, RHSType_11, BoxedRHSType_12, (MR_Integer) 0, Var_22, RHSRval_16);
    }
    else
    {
      MR_Word Var_23;

      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (RHS_MLDS_Type_13));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *RHSRval_16 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_23));
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_packed_word_10_p_0_2(
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
ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_packed_word_10_p_0_1(
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
ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_packed_word_10_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Integer HeadVar__6_6,
  MR_Integer * HeadVar__7_7,
  MR_Word TakeAddr_8,
  MR_Word STATE_VARIABLE_RevFilledBitfields_0_9,
  MR_Word * STATE_VARIABLE_RevFilledBitfields_10)
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
        *STATE_VARIABLE_RevFilledBitfields_10 = STATE_VARIABLE_RevFilledBitfields_0_9;
        *HeadVar__7_7 = HeadVar__6_6;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_packed_word\'/10", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_packed_word\'/10", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word ArgMode_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
        MR_Word ArgModes_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
        MR_Word RHSVar_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_99, (MR_Integer) 0))));
        MR_Word ConsArgType_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_99, (MR_Integer) 1))));
        MR_Word ArgPosWidth_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_99, (MR_Integer) 2))));

        switch (MR_tag((MR_Word) ArgPosWidth_60)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HeadVar__3_3 = HeadVar__2_2;
              *HeadVar__5_5 = HeadVar__4_4;
              *HeadVar__7_7 = HeadVar__6_6;
              *STATE_VARIABLE_RevFilledBitfields_10 = STATE_VARIABLE_RevFilledBitfields_0_9;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *HeadVar__3_3 = HeadVar__2_2;
              *HeadVar__5_5 = HeadVar__4_4;
              *HeadVar__7_7 = HeadVar__6_6;
              *STATE_VARIABLE_RevFilledBitfields_10 = STATE_VARIABLE_RevFilledBitfields_0_9;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_60, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *HeadVar__3_3 = HeadVar__2_2;
                  *HeadVar__5_5 = HeadVar__4_4;
                  *HeadVar__7_7 = HeadVar__6_6;
                  *STATE_VARIABLE_RevFilledBitfields_10 = STATE_VARIABLE_RevFilledBitfields_0_9;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Shift_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_60, (MR_Integer) 3))));
                  MR_Word NumBits_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_60, (MR_Integer) 4))));
                  MR_Word Fill_77 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_60, (MR_Integer) 6))) & (MR_Integer) 7);
                  MR_Word Bitfield_78;
                  MR_Word BitfieldValue_79;
                  MR_Word FilledBitfield_80;
                  MR_Word Var_88;
                  MR_Word STATE_VARIABLE_RevFilledBitfields_91_95;
                  MR_Integer Var_96;
                  MR_Word next_value_of_HeadVar__2_2;
                  MR_Word next_value_of_HeadVar__4_4;
                  MR_Integer next_value_of_HeadVar__6_6;
                  MR_Word next_value_of_STATE_VARIABLE_RevFilledBitfields_0_9;

                  {
                    Var_88 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[0]));
                    MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_packed_word_10_p_0_2));
                    MR_hl_field(MR_mktag(0), Var_88, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_88, 3) = ((MR_Box) (TakeAddr_8));
                    MR_hl_field(MR_mktag(0), Var_88, 4) = ((MR_Box) (HeadVar__6_6));
                  }
                  mercury__require__expect_3_p_0(Var_88, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_packed_word\'/10", (MR_String) "taking address of apw_partial_shifted");
                  {
                    Bitfield_78 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Bitfield_78, 0) = ((MR_Box) (Shift_74));
                    MR_hl_field(MR_mktag(0), Bitfield_78, 1) = ((MR_Box) (NumBits_75));
                    MR_hl_field(MR_mktag(0), Bitfield_78, 2) = (MR_Box) ((MR_Unsigned) (Fill_77));
                  }
                  ml_backend__ml_unify_gen_construct__ml_maybe_null_var_5_p_0(Info_1, RHSVar_58, ConsArgType_59, ArgMode_51, &BitfieldValue_79);
                  {
                    FilledBitfield_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), FilledBitfield_80, 0) = ((MR_Box) (Bitfield_78));
                    MR_hl_field(MR_mktag(0), FilledBitfield_80, 1) = ((MR_Box) (BitfieldValue_79));
                  }
                  {
                    STATE_VARIABLE_RevFilledBitfields_91_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFilledBitfields_91_95, 0) = ((MR_Box) (FilledBitfield_80));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFilledBitfields_91_95, 1) = ((MR_Box) (STATE_VARIABLE_RevFilledBitfields_0_9));
                  }
                  Var_96 = (MR_Integer) ((MR_Unsigned) HeadVar__6_6 + (MR_Unsigned) 1);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__2_2 = Var_98;
                  next_value_of_HeadVar__4_4 = ArgModes_52;
                  next_value_of_HeadVar__6_6 = Var_96;
                  next_value_of_STATE_VARIABLE_RevFilledBitfields_0_9 = STATE_VARIABLE_RevFilledBitfields_91_95;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  HeadVar__4_4 = next_value_of_HeadVar__4_4;
                  HeadVar__6_6 = next_value_of_HeadVar__6_6;
                  STATE_VARIABLE_RevFilledBitfields_0_9 = next_value_of_STATE_VARIABLE_RevFilledBitfields_0_9;
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_85;
                  MR_Integer Var_92;
                  MR_Word next_value_of_HeadVar__2_2;
                  MR_Word next_value_of_HeadVar__4_4;
                  MR_Integer next_value_of_HeadVar__6_6;

                  {
                    Var_85 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[0]));
                    MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_packed_word_10_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (TakeAddr_8));
                    MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) (HeadVar__6_6));
                  }
                  mercury__require__expect_3_p_0(Var_85, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_packed_word\'/10", (MR_String) "taking address of apw_none_shifted");
                  Var_92 = (MR_Integer) ((MR_Unsigned) HeadVar__6_6 + (MR_Unsigned) 1);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__2_2 = Var_98;
                  next_value_of_HeadVar__4_4 = ArgModes_52;
                  next_value_of_HeadVar__6_6 = Var_92;
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
ml_backend__ml_unify_gen_construct__ml_maybe_null_var_5_p_0(
  MR_Word Info_6,
  MR_Word RHSVar_7,
  MR_Word ConsArgType_8,
  MR_Word ArgMode_9,
  MR_Word * BitfieldValue_10)
{
  {
    MR_bool succeeded;
    MR_Word RHSType_11;
    MR_Word RHSInsts_13;
    MR_Word ModuleInfo_14;
    MR_Word Var_16;
    MR_Word Var_18;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_6, RHSVar_7, &RHSType_11);
    RHSInsts_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_9, (MR_Integer) 1))));
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_14);
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_14, RHSInsts_13, RHSType_11, &Var_18);
    succeeded = ((MR_Integer) 0 == Var_18);
    if (succeeded)
    {
      Var_16 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_14, RHSType_11, ConsArgType_8);
      succeeded = (Var_16 == (MR_Integer) 1);
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *BitfieldValue_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RHSVar_7));
      }
    else
      *BitfieldValue_10 = (MR_Word) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_construct_scalar_common_3[0]));
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
            Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_37, 0) = ((MR_Box) (OffsetInt_27));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (Var_37));
          }
          {
            FieldId_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldId_28, 0) = ((MR_Box) (Var_36));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_39, 0) = ((MR_Box) (CellLval_2));
          }
          {
            Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (MaybePtag_4));
            MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (Var_39));
            MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) (CellType_3));
            MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (FieldId_28));
            MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (FieldType_25));
          }
          {
            SourceRval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SourceRval_29, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), SourceRval_29, 1) = ((MR_Box) (Var_38));
          }
          ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_6, AddrVar_22, &AddrLval_30);
          ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_6, AddrVar_22, &AddrVarType_31);
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_32);
          MLDS_AddrVarType_33 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_32, AddrVarType_31);
          {
            CastSourceRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastSourceRval_34, 0) = ((MR_Box) ((MR_Unsigned) 4U));
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
            Var_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_35, 0) = ((MR_Box) (CellLval_2));
          }
          Assign_20 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(AddrLval_40, Var_35, Context_5);
        }
        break;
    }
    ml_backend__ml_unify_gen_construct__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_14, CellLval_2, CellType_3, MaybePtag_4, Context_5, Info_6, &Assigns_21);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct____Unify____use_packed_word_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen_construct____Unify____use_packed_word_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct____Compare____use_packed_word_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen_construct____Compare____use_packed_word_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_use_packed_word_map_0);
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
