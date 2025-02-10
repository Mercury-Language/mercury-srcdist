/*
** Automatically generated from `ml_unify_gen_construct.m'
** by the Mercury compiler,
** version rotd-2025-02-10
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
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_class_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_top_functor.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_closure_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_type_gen.mih"
#include "ml_backend.ml_unify_gen_deconstruct.mih"
#include "ml_backend.ml_unify_gen_util.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_util__pti_arg_type_and_width_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

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

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__enum_ordinal_ordered_use_packed_word_map_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__enum_name_ordered_use_packed_word_map_0[2];

static const MR_Integer ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__functor_number_map_use_packed_word_map_0[2];

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__count_matching_bitfield__2551__1_2_p_0(
  MR_Word BitfieldA_14,
  MR_Word BitfieldB_16);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__construct_static_ground_term__1971__1_1_f_0(
  MR_Word LambdaHeadVar__1_43);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_const_static_args_widths__1766__1_1_f_0(
  MR_Word LambdaHeadVar__1_16);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_97_114_103_115_95_119_105_100_116_104_115_95_95_49_55_54_54_95_95_49_95_95_91_49_93_95_48_1_f_0(void);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_static_compound__1719__1_2_p_0(
  MR_Word HighLevelData_22,
  MR_Word HeadVar__2_62);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_static_compound__1702__1_2_p_0(
  MR_Word HeadVar__1_56,
  MR_Word UsesConstructors_74);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_static_compound__1692__1_2_p_0(
  MR_Word UsesConstructors_27,
  MR_Word HeadVar__2_51);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_struct__1638__1_2_p_0(
  MR_Word HighLevelData_52,
  MR_Word HeadVar__2_83);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_memory_cell__1456__1_2_p_0(
  MR_Word HighLevelData_18,
  MR_Word HeadVar__2_69);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_memory_cell__1439__1_2_p_0(
  MR_Word HeadVar__1_63,
  MR_Word UsesConstructors_84);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_memory_cell__1429__1_2_p_0(
  MR_Word UsesConstructors_33,
  MR_Word HeadVar__2_58);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1333__6_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_198);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1333__5_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_187);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1359__1_2_p_0(
  MR_Word HighLevelData_12,
  MR_Word HeadVar__2_103);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1333__4_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_176);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1333__3_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_165);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1333__2_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_154);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1333__1_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_89);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_extra_arg_assigns__1098__1_2_p_0(
  MR_Word HighLevelData_28,
  MR_Word HeadVar__2_40);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__818__1_2_p_0(
  MR_Word ArgWidth_22,
  MR_Word HeadVar__2_29);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__633__1_2_p_0(
  MR_Word PrimaryTag_44,
  MR_Word LambdaHeadVar__1_88);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_reuse_cell__624__1_1_f_0(
  MR_Word LambdaHeadVar__1_85);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__609__1_3_p_0(
  MR_Word STATE_VARIABLE_Info_0_77,
  MR_Word LambdaHeadVar__1_82,
  MR_Word * LambdaHeadVar__2_83);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_statically__567__1_1_f_0(
  MR_Word LambdaHeadVar__1_49);

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_dynamically__511__1_1_f_0(
  MR_Word LambdaHeadVar__1_63);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construct_compound__307__1_2_p_0(
  MR_Word HeadVar__1_71,
  MR_Word UsesConstructors_95);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construct_compound__283__1_2_p_0(
  MR_Word UsesConstructors_33,
  MR_Word HeadVar__2_66);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object__442__1_2_p_0(
  MR_Word TakeAddr_28,
  MR_Word HeadVar__2_43);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__225__1_2_p_0(
  MR_Word TakeAddr_16,
  MR_Word HeadVar__2_129);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__237__1_2_p_0(
  MR_Word TakeAddr_16,
  MR_Word HeadVar__2_134);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__14_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_437);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__13_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_416);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__12_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_395);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__11_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_374);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__10_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_353);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__9_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_332);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__8_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_311);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__7_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_290);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__6_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_269);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__5_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_248);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__4_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_227);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__3_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_206);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__2_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_185);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__1_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_103);

static void MR_CALL 
ml_backend__ml_unify_gen_construct____Compare____use_packed_word_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct____Unify____use_packed_word_map_0_0(
  MR_Word HeadVar__1_1,
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
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_2(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0(
  MR_Word Info_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ConstStructMap_0_67,
  MR_Word * STATE_VARIABLE_ConstStructMap_68,
  MR_Word STATE_VARIABLE_GlobalData_0_69,
  MR_Word * STATE_VARIABLE_GlobalData_70);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_2(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
  MR_Word VarTable_4,
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
  MR_Word VarTable_13,
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
  MR_Word VarTable_19,
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
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_16(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_15(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_14(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_13(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_12(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_11(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_10(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_9(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_8(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_7(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_6(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_4(
  MR_Box closure_arg);

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
ml_backend__ml_unify_gen_construct__ml_genenate_construct_notag_direct_arg_8_p_0(
  MR_Word LHSVar_9,
  MR_Word ConsTag_10,
  MR_Word RHSVars_11,
  MR_Word ArgModes_12,
  MR_Word Context_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construct_tagword_compound_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construct_tagword_compound_10_p_0(
  MR_Word ConsId_11,
  MR_Word TagFilledBitfield_12,
  MR_Word LHSVar_13,
  MR_Word ArgVars_14,
  MR_Word ArgModes_15,
  MR_Word HowToConstruct_16,
  MR_Word Context_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construct_compound_12_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construct_compound_12_p_0_2(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construct_compound_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construct_compound_12_p_0(
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
  MR_Word STATE_VARIABLE_Info_0_58,
  MR_Word * STATE_VARIABLE_Info_59);

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

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_17_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_17_p_0_2(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_16_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_16_p_0(
  MR_Word MaybeConsId_17,
  MR_Word MaybeCtorName_18,
  MR_Word Ptag_19,
  MR_Word ExplicitSectag_20,
  MR_Word LHSVar_21,
  MR_Word LHSVarEntry_22,
  MR_Word ExtraRHSRvalsTypesWidths_23,
  MR_Word RHSVarsTypesWidths_24,
  MR_Word ArgModes_25,
  MR_Word TakeAddr_26,
  MR_Word CellToReuse_27,
  MR_Word Context_28,
  MR_Word * Defns_29,
  MR_Word * Stmts_30,
  MR_Word STATE_VARIABLE_Info_0_77,
  MR_Word * STATE_VARIABLE_Info_78);

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
  MR_Word LHSVarEntry_21,
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

static void MR_CALL 
ml_backend__ml_unify_gen_construct__filled_bitfields_to_packed_word_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__filled_bitfields_to_packed_word_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_unify_gen_construct__filled_bitfields_to_packed_word_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
ml_backend__ml_unify_gen_construct__accumulate_translated_filled_bitfield_4_p_0(
  MR_Word Info_5,
  MR_Word FilledBitfield_6,
  MR_Word STATE_VARIABLE_RevToOrRvals_0_18,
  MR_Word * STATE_VARIABLE_RevToOrRvals_19);

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
ml_backend__ml_unify_gen_construct__ml_maybe_null_var_5_p_0(
  MR_Word Info_6,
  MR_Word RHSVar_7,
  MR_Word ConsArgType_8,
  MR_Word ArgMode_9,
  MR_Word * BitfieldValue_10);

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

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_2[14][3];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_3[4][1];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_4[12][5];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_5[3][6];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_6[2][7];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_7[1][4];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_8[1][8];

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_9[1][9];




static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_1[19][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_arg_type_and_width_1)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_arg_type_and_width_1)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0))
  },
  /* row   8 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) 0)))),
    ((MR_Box) (((MR_Box) ((MR_Integer) 0))))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_Unsigned) 20U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_construct_scalar_common_1[10])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) (UINT8_C(0))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 20U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_construct_scalar_common_1[15])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_2[14][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0])),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_1[13]))
  },
  /* row   4 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__filled_bitfields_to_packed_word_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_new_object_dynamically_15_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[4])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_16_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[7])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__construct_static_ground_term_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_new_object_17_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[9])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_new_object_17_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_8[0])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_8[0])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[11])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[11])),
    ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_3[4][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "")) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 1U) },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_4[12][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_util__pti_arg_type_and_width_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row  11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_5[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_6[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row   1 */
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
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_construct_scalar_common_8[1][8] = {
  /* row   0 */
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
  /* row   0 */
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



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0) }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_util__pti_arg_type_and_width_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_arg_type_and_width_1,
  { (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_construct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
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
  { (MR_PseudoTypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0) }
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

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_stag_ordered_ml_const_struct_info_0_0[1] = { &ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_functor_desc_ml_const_struct_info_0_0 };

static const MR_DuPtagLayout ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_ptag_ordered_ml_const_struct_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_stag_ordered_ml_const_struct_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_name_ordered_ml_const_struct_info_0[1] = { &ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_functor_desc_ml_const_struct_info_0_0 };

static const MR_Integer ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__functor_number_map_ml_const_struct_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_ml_const_struct_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_unify_gen_construct____Unify____ml_const_struct_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen_construct____Compare____ml_const_struct_info_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen_construct",
  (MR_String) "ml_const_struct_info",
  { ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_name_ordered_ml_const_struct_info_0 },
  { ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_ptag_ordered_ml_const_struct_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__functor_number_map_ml_const_struct_info_0,

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

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_stag_ordered_mlds_rval_type_and_width_0_0[1] = { &ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_functor_desc_mlds_rval_type_and_width_0_0 };

static const MR_DuPtagLayout ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_ptag_ordered_mlds_rval_type_and_width_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_stag_ordered_mlds_rval_type_and_width_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_name_ordered_mlds_rval_type_and_width_0[1] = { &ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_functor_desc_mlds_rval_type_and_width_0_0 };

static const MR_Integer ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__functor_number_map_mlds_rval_type_and_width_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_unify_gen_construct____Unify____mlds_rval_type_and_width_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen_construct____Compare____mlds_rval_type_and_width_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen_construct",
  (MR_String) "mlds_rval_type_and_width",
  { ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_name_ordered_mlds_rval_type_and_width_0 },
  { ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__du_ptag_ordered_mlds_rval_type_and_width_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__functor_number_map_mlds_rval_type_and_width_0,

};

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__enum_functor_desc_use_packed_word_map_0_0 = {
  (MR_String) "do_not_use_packed_word_map",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__enum_functor_desc_use_packed_word_map_0_1 = {
  (MR_String) "use_packed_word_map",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__enum_ordinal_ordered_use_packed_word_map_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_unify_gen_construct____Unify____use_packed_word_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen_construct____Compare____use_packed_word_map_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen_construct",
  (MR_String) "use_packed_word_map",
  { ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__enum_name_ordered_use_packed_word_map_0 },
  { ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__enum_ordinal_ordered_use_packed_word_map_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__functor_number_map_use_packed_word_map_0,

};

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__count_matching_bitfield__2551__1_2_p_0(
  MR_Word BitfieldA_14,
  MR_Word BitfieldB_16)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_gen_info____Unify____bitfield_0_0(BitfieldA_14, BitfieldB_16);
  return succeeded;
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__construct_static_ground_term__1971__1_1_f_0(
  MR_Word LambdaHeadVar__1_43)
{
  MR_Word LambdaHeadVar__2_44;

  {
    LambdaHeadVar__2_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_44, 0) = ((MR_Box) (LambdaHeadVar__1_43));
  }
  return LambdaHeadVar__2_44;
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_const_static_args_widths__1766__1_1_f_0(
  MR_Word LambdaHeadVar__1_16)
{
  MR_Word LambdaHeadVar__2_17;

  LambdaHeadVar__2_17 = ml_backend__ml_unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_97_114_103_115_95_119_105_100_116_104_115_95_95_49_55_54_54_95_95_49_95_95_91_49_93_95_48_1_f_0();
  return LambdaHeadVar__2_17;
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_109_108_95_103_101_110_95_99_111_110_115_116_95_115_116_97_116_105_99_95_97_114_103_115_95_119_105_100_116_104_115_95_95_49_55_54_54_95_95_49_95_95_91_49_93_95_48_1_f_0(void)
{
  MR_Word LambdaHeadVar__2_17;

  LambdaHeadVar__2_17 = parse_tree__builtin_lib_types__void_type_0_f_0();
  return LambdaHeadVar__2_17;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_static_compound__1719__1_2_p_0(
  MR_Word HighLevelData_22,
  MR_Word HeadVar__2_62)
{
  MR_bool succeeded = (HighLevelData_22 == HeadVar__2_62);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_static_compound__1702__1_2_p_0(
  MR_Word HeadVar__1_56,
  MR_Word UsesConstructors_74)
{
  MR_bool succeeded = (UsesConstructors_74 == HeadVar__1_56);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_static_compound__1692__1_2_p_0(
  MR_Word UsesConstructors_27,
  MR_Word HeadVar__2_51)
{
  MR_bool succeeded = (UsesConstructors_27 == HeadVar__2_51);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_struct__1638__1_2_p_0(
  MR_Word HighLevelData_52,
  MR_Word HeadVar__2_83)
{
  MR_bool succeeded = (HighLevelData_52 == HeadVar__2_83);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_memory_cell__1456__1_2_p_0(
  MR_Word HighLevelData_18,
  MR_Word HeadVar__2_69)
{
  MR_bool succeeded = (HighLevelData_18 == HeadVar__2_69);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_memory_cell__1439__1_2_p_0(
  MR_Word HeadVar__1_63,
  MR_Word UsesConstructors_84)
{
  MR_bool succeeded = (UsesConstructors_84 == HeadVar__1_63);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_memory_cell__1429__1_2_p_0(
  MR_Word UsesConstructors_33,
  MR_Word HeadVar__2_58)
{
  MR_bool succeeded = (UsesConstructors_33 == HeadVar__2_58);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1333__6_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_198)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_19)), ((MR_Box) (HeadVar__2_198)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1333__5_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_187)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_19)), ((MR_Box) (HeadVar__2_187)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1359__1_2_p_0(
  MR_Word HighLevelData_12,
  MR_Word HeadVar__2_103)
{
  MR_bool succeeded = (HighLevelData_12 == HeadVar__2_103);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1333__4_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_176)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_19)), ((MR_Box) (HeadVar__2_176)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1333__3_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_165)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_19)), ((MR_Box) (HeadVar__2_165)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1333__2_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_154)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_19)), ((MR_Box) (HeadVar__2_154)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1333__1_2_p_0(
  MR_Word RHSVars_19,
  MR_Word HeadVar__2_89)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_19)), ((MR_Box) (HeadVar__2_89)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_extra_arg_assigns__1098__1_2_p_0(
  MR_Word HighLevelData_28,
  MR_Word HeadVar__2_40)
{
  MR_bool succeeded = (HighLevelData_28 == HeadVar__2_40);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__818__1_2_p_0(
  MR_Word ArgWidth_22,
  MR_Word HeadVar__2_29)
{
  MR_bool succeeded = (ArgWidth_22 == HeadVar__2_29);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__633__1_2_p_0(
  MR_Word PrimaryTag_44,
  MR_Word LambdaHeadVar__1_88)
{
  MR_bool succeeded;
  uint8_t Var_132 = (uint8_t) (LambdaHeadVar__1_88);
  uint8_t Var_133 = (uint8_t) (PrimaryTag_44);

  succeeded = (Var_132 != Var_133);
  return succeeded;
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_reuse_cell__624__1_1_f_0(
  MR_Word LambdaHeadVar__1_85)
{
  MR_Word LambdaHeadVar__2_86 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_85, (MR_Integer) 0))));

  return LambdaHeadVar__2_86;
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__609__1_3_p_0(
  MR_Word STATE_VARIABLE_Info_0_77,
  MR_Word LambdaHeadVar__1_82,
  MR_Word * LambdaHeadVar__2_83)
{
  MR_Word ReuseConsTag_38;
  MR_Word _ReuseOffSet_39;

  ml_backend__ml_unify_gen_util__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_77, LambdaHeadVar__1_82, &ReuseConsTag_38);
  ml_backend__ml_unify_gen_util__ml_tag_ptag_and_initial_offset_3_p_0(ReuseConsTag_38, LambdaHeadVar__2_83, &_ReuseOffSet_39);
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_statically__567__1_1_f_0(
  MR_Word LambdaHeadVar__1_49)
{
  MR_Word LambdaHeadVar__2_50 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_49, (MR_Integer) 0))));

  return LambdaHeadVar__2_50;
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_dynamically__511__1_1_f_0(
  MR_Word LambdaHeadVar__1_63)
{
  MR_Word LambdaHeadVar__2_64;
  MR_Word Rv_68 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_63, (MR_Integer) 0))));
  MR_Word T_69 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_63, (MR_Integer) 1))));

  {
    LambdaHeadVar__2_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_64, 0) = ((MR_Box) (Rv_68));
    MR_hl_field(0, LambdaHeadVar__2_64, 1) = ((MR_Box) (T_69));
  }
  return LambdaHeadVar__2_64;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construct_compound__307__1_2_p_0(
  MR_Word HeadVar__1_71,
  MR_Word UsesConstructors_95)
{
  MR_bool succeeded = (UsesConstructors_95 == HeadVar__1_71);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construct_compound__283__1_2_p_0(
  MR_Word UsesConstructors_33,
  MR_Word HeadVar__2_66)
{
  MR_bool succeeded = (UsesConstructors_33 == HeadVar__2_66);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object__442__1_2_p_0(
  MR_Word TakeAddr_28,
  MR_Word HeadVar__2_43)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[2]), ((MR_Box) (TakeAddr_28)), ((MR_Box) (HeadVar__2_43)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__225__1_2_p_0(
  MR_Word TakeAddr_16,
  MR_Word HeadVar__2_129)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[2]), ((MR_Box) (TakeAddr_16)), ((MR_Box) (HeadVar__2_129)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__237__1_2_p_0(
  MR_Word TakeAddr_16,
  MR_Word HeadVar__2_134)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[2]), ((MR_Box) (TakeAddr_16)), ((MR_Box) (HeadVar__2_134)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__14_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_437)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_14)), ((MR_Box) (HeadVar__2_437)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__13_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_416)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_14)), ((MR_Box) (HeadVar__2_416)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__12_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_395)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_14)), ((MR_Box) (HeadVar__2_395)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__11_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_374)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_14)), ((MR_Box) (HeadVar__2_374)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__10_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_353)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_14)), ((MR_Box) (HeadVar__2_353)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__9_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_332)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_14)), ((MR_Box) (HeadVar__2_332)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__8_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_311)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_14)), ((MR_Box) (HeadVar__2_311)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__7_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_290)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_14)), ((MR_Box) (HeadVar__2_290)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__6_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_269)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_14)), ((MR_Box) (HeadVar__2_269)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__5_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_248)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_14)), ((MR_Box) (HeadVar__2_248)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__4_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_227)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_14)), ((MR_Box) (HeadVar__2_227)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__3_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_206)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_14)), ((MR_Box) (HeadVar__2_206)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__2_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_185)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_14)), ((MR_Box) (HeadVar__2_185)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__1_2_p_0(
  MR_Word RHSVars_14,
  MR_Word HeadVar__2_103)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_14)), ((MR_Box) (HeadVar__2_103)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct____Compare____use_packed_word_map_0_0(
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
ml_backend__ml_unify_gen_construct____Unify____use_packed_word_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ml_backend__ml_unify_gen_construct____Compare____mlds_rval_type_and_width_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
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

MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct____Unify____mlds_rval_type_and_width_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

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

static void MR_CALL 
ml_backend__ml_unify_gen_construct____Compare____ml_const_struct_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct____Unify____ml_const_struct_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

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

static void MR_CALL 
ml_backend__ml_unify_gen_construct__accumulate_bitfield_mask_3_p_0(
  MR_Word FilledBitfield_4,
  MR_Unsigned STATE_VARIABLE_Mask_0_7,
  MR_Unsigned * STATE_VARIABLE_Mask_8)
{
  MR_Unsigned BitfieldMask_6;
  MR_Word Bitfield_9 = ((MR_Word) ((MR_hl_field(0, FilledBitfield_4, (MR_Integer) 0))));
  MR_Word Shift_11 = ((MR_Word) ((MR_hl_field(0, Bitfield_9, (MR_Integer) 0))));
  MR_Word NumBits_12 = ((MR_Word) ((MR_hl_field(0, Bitfield_9, (MR_Integer) 1))));
  MR_Integer ShiftInt_14 = (MR_Integer) (Shift_11);
  MR_Integer NumBitsInt_15 = (MR_Integer) (NumBits_12);
  MR_Unsigned Var_16;
  MR_Unsigned Var_17;

  Var_17 = mercury__uint__f_60_60_2_f_0((MR_Unsigned) 1U, NumBitsInt_15);
  Var_16 = (Var_17 - (MR_Unsigned) 1U);
  BitfieldMask_6 = mercury__uint__f_60_60_2_f_0(Var_16, ShiftInt_14);
  *STATE_VARIABLE_Mask_8 = (STATE_VARIABLE_Mask_0_7 | BitfieldMask_6);
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_not_taking_addr_of_cur_arg_2_p_0(
  MR_Word TakeAddr_3,
  MR_Integer CurArgNum_4)
{
  MR_bool succeeded = (TakeAddr_3 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Integer Var_6;

  if (succeeded)
  {
    Var_6 = ((MR_Integer) ((MR_hl_field(1, TakeAddr_3, (MR_Integer) 0))));
    succeeded = (CurArgNum_4 == Var_6);
  }
  if (succeeded)
    succeeded = MR_FALSE;
  else
    succeeded = MR_TRUE;
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__is_apw_full_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1);

  if (succeeded)
  {
  }
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_tagword_arg_4_p_0(
  MR_Word Info_5,
  MR_Word RHSTypeWidth_6,
  MR_Word STATE_VARIABLE_RevOrRvals_0_18,
  MR_Word * STATE_VARIABLE_RevOrRvals_19)
{
  MR_Word ConstArg_8 = ((MR_Word) ((MR_hl_field(0, RHSTypeWidth_6, (MR_Integer) 0))));
  MR_Word ArgPosWidth_10 = ((MR_Word) ((MR_hl_field(0, RHSTypeWidth_6, (MR_Integer) 2))));
  MR_Word ModuleInfo_11 = ((MR_Word) ((MR_hl_field(0, Info_5, (MR_Integer) 0))));
  MR_Word RHSRval_17;

  if (((MR_tag((MR_Word) ConstArg_8)) == (MR_Integer) 0))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_tagword_arg\'/4", (MR_String) "csa_const_struct in tagword");
      return;
    }
  else
  {
    MR_Word ConsId_13 = ((MR_Word) ((MR_hl_field(1, ConstArg_8, (MR_Integer) 0))));
    MR_Word Type_14 = ((MR_Word) ((MR_hl_field(1, ConstArg_8, (MR_Integer) 1))));
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
              MR_Word RvalConst_76;

              RvalConst_76 = ml_backend__ml_unify_gen_construct__int_tag_to_mlds_rval_const_3_f_0(Type_14, MLDS_Type_16, (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_3[0]));
              {
                RHSRval_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, RHSRval_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, RHSRval_17, 1) = ((MR_Box) (RvalConst_76));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct_arg_tag\'/4", (MR_String) "unexpected tag");
              return;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntTag_24 = ((MR_Word) ((MR_hl_field(1, ConsTag_15, (MR_Integer) 0))));
          MR_Word RvalConst_25;

          RvalConst_25 = ml_backend__ml_unify_gen_construct__int_tag_to_mlds_rval_const_3_f_0(Type_14, MLDS_Type_16, IntTag_24);
          {
            RHSRval_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, RHSRval_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, RHSRval_17, 1) = ((MR_Box) (RvalConst_25));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_26 = MR_unbox_float((MR_hl_field(2, ConsTag_15, (MR_Integer) 0)));
          MR_Word Var_62;

          {
            Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(3, Var_62, 1) = MR_box_float(Float_26);
          }
          {
            RHSRval_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, RHSRval_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, RHSRval_17, 1) = ((MR_Box) (Var_62));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, ConsTag_15, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String String_27 = ((MR_String) ((MR_hl_field(3, ConsTag_15, (MR_Integer) 1))));
              MR_Word Var_63;

              {
                Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(3, Var_63, 1) = ((MR_Box) (String_27));
              }
              {
                RHSRval_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, RHSRval_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, RHSRval_17, 1) = ((MR_Box) (Var_63));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_34 = ((MR_Unsigned) ((MR_hl_field(3, ConsTag_15, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_String ForeignTag_35 = ((MR_String) ((MR_hl_field(3, ConsTag_15, (MR_Integer) 2))));
              MR_Word Var_66;

              {
                Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                MR_hl_field(3, Var_66, 1) = (MR_Box) ((MR_Unsigned) (ForeignLang_34));
                MR_hl_field(3, Var_66, 2) = ((MR_Box) (ForeignTag_35));
                MR_hl_field(3, Var_66, 3) = ((MR_Box) (MLDS_Type_16));
              }
              {
                RHSRval_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, RHSRval_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, RHSRval_17, 1) = ((MR_Box) (Var_66));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word LocalSectag_29 = ((MR_Word) ((MR_hl_field(3, ConsTag_15, (MR_Integer) 2))));
              MR_Unsigned PrimSec_32 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_29, (MR_Integer) 1))));
              MR_Word Var_64;
              MR_Word Var_65;

              {
                Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_65, 1) = ((MR_Box) (PrimSec_32));
              }
              {
                Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_64, 1) = ((MR_Box) (Var_65));
              }
              {
                RHSRval_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, RHSRval_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, RHSRval_17, 1) = ((MR_Box) (MLDS_Type_16));
                MR_hl_field(3, RHSRval_17, 2) = ((MR_Box) (Var_64));
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
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct_arg_tag\'/4", (MR_String) "unexpected tag");
              return;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ModuleName0_36 = ((MR_Word) ((MR_hl_field(3, ConsTag_15, (MR_Integer) 1))));
              MR_String TypeName_37 = ((MR_String) ((MR_hl_field(3, ConsTag_15, (MR_Integer) 2))));
              MR_Integer TypeArity_38 = ((MR_Integer) ((MR_hl_field(3, ConsTag_15, (MR_Integer) 3))));
              MR_Word ModuleName_39;
              MR_Word MLDS_Module_40;
              MR_Word RttiTypeCtor_41;
              MR_Word RttiId_42;
              MR_Word Const_43;
              uint16_t Var_68;
              MR_Word Var_70;

              ModuleName_39 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_36);
              MLDS_Module_40 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_39);
              Var_68 = mercury__uint16__det_from_int_1_f_0(TypeArity_38);
              {
                RttiTypeCtor_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, RttiTypeCtor_41, 0) = ((MR_Box) (ModuleName_39));
                MR_hl_field(0, RttiTypeCtor_41, 1) = ((MR_Box) (TypeName_37));
                MR_hl_field(0, RttiTypeCtor_41, 2) = ((MR_Box) (MR_Word) (Var_68));
              }
              {
                RttiId_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, RttiId_42, 0) = ((MR_Box) (RttiTypeCtor_41));
                MR_hl_field(0, RttiId_42, 1) = ((MR_Box) ((MR_Unsigned) 44U));
              }
              {
                Const_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Const_43, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                MR_hl_field(3, Const_43, 1) = ((MR_Box) (MLDS_Module_40));
                MR_hl_field(3, Const_43, 2) = ((MR_Box) (RttiId_42));
              }
              {
                Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_70, 1) = ((MR_Box) (Const_43));
              }
              {
                RHSRval_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, RHSRval_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, RHSRval_17, 1) = ((MR_Box) (MLDS_Type_16));
                MR_hl_field(3, RHSRval_17, 2) = ((MR_Box) (Var_70));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ClassId_44 = ((MR_Word) ((MR_hl_field(3, ConsTag_15, (MR_Integer) 2))));
              MR_String Instance_45 = ((MR_String) ((MR_hl_field(3, ConsTag_15, (MR_Integer) 3))));
              MR_Word TCName_46;
              MR_Word Var_71;
              MR_Word Var_72;
              MR_Word ModuleName_77 = ((MR_Word) ((MR_hl_field(3, ConsTag_15, (MR_Integer) 1))));
              MR_Word MLDS_Module_78;
              MR_Word RttiId_79;
              MR_Word Const_80;

              MLDS_Module_78 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_77);
              TCName_46 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_44);
              {
                Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_71, 0) = ((MR_Box) (ModuleName_77));
                MR_hl_field(1, Var_71, 1) = ((MR_Box) (Instance_45));
              }
              {
                RttiId_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, RttiId_79, 0) = ((MR_Box) (TCName_46));
                MR_hl_field(1, RttiId_79, 1) = ((MR_Box) (Var_71));
              }
              {
                Const_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Const_80, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                MR_hl_field(3, Const_80, 1) = ((MR_Box) (MLDS_Module_78));
                MR_hl_field(3, Const_80, 2) = ((MR_Box) (RttiId_79));
              }
              {
                Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_72, 1) = ((MR_Box) (Const_80));
              }
              {
                RHSRval_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, RHSRval_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, RHSRval_17, 1) = ((MR_Box) (MLDS_Type_16));
                MR_hl_field(3, RHSRval_17, 2) = ((MR_Box) (Var_72));
              }
            }
            break;
        }
        break;
    }
  }
  ml_backend__ml_unify_gen_construct__ml_maybe_shift_and_accumulate_packed_arg_rval_4_p_0(ArgPosWidth_10, RHSRval_17, STATE_VARIABLE_RevOrRvals_0_18, STATE_VARIABLE_RevOrRvals_19);
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_maybe_shift_and_accumulate_packed_arg_rval_4_p_0(
  MR_Word ArgPosWidth_5,
  MR_Word RHSRval_6,
  MR_Word STATE_VARIABLE_RevOrRvals_0_28,
  MR_Word * STATE_VARIABLE_RevOrRvals_29)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) ArgPosWidth_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_maybe_shift_and_accumulate_packed_arg_rval\'/4", (MR_String) "not apw_partial_shifted or apw_none_shifted");
        return;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_maybe_shift_and_accumulate_packed_arg_rval\'/4", (MR_String) "not apw_partial_shifted or apw_none_shifted");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Shift_10 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_5, (MR_Integer) 3))));
            MR_Word Fill_13 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_5, (MR_Integer) 6))) & (MR_Integer) 7);
            MR_Word UnboxedRHSRval_14;
            MR_Word UnboxedRvalPrime_34;
            MR_Word RvalConst_35;

            succeeded = ((((MR_tag((MR_Word) RHSRval_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RHSRval_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              UnboxedRvalPrime_34 = ((MR_Word) ((MR_hl_field(3, RHSRval_6, (MR_Integer) 2))));
              UnboxedRHSRval_14 = UnboxedRvalPrime_34;
            }
            else
              UnboxedRHSRval_14 = RHSRval_6;
            succeeded = ((((MR_tag((MR_Word) UnboxedRHSRval_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, UnboxedRHSRval_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              RvalConst_35 = ((MR_Word) ((MR_hl_field(3, UnboxedRHSRval_14, (MR_Integer) 1))));
              succeeded = ((((MR_tag((MR_Word) RvalConst_35)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RvalConst_35, (MR_Integer) 0)))) == (MR_Integer) 20)));
              if (succeeded)
              {
              }
              if (!(succeeded))
              {
                MR_Word Var_39;

                Var_39 = ml_backend__ml_unify_gen_util__ml_is_zero_const_1_f_0(RvalConst_35);
                succeeded = (Var_39 == (MR_Integer) 1);
              }
            }
            if (succeeded)
              *STATE_VARIABLE_RevOrRvals_29 = STATE_VARIABLE_RevOrRvals_0_28;
            else
            {
              MR_Word UnboxedRval_37;
              MR_Word ShiftedRval_38;
              MR_Word UnboxedRvalPrime_41;

              succeeded = ((((MR_tag((MR_Word) UnboxedRHSRval_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, UnboxedRHSRval_14, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                UnboxedRvalPrime_41 = ((MR_Word) ((MR_hl_field(3, UnboxedRHSRval_14, (MR_Integer) 2))));
                UnboxedRval_37 = UnboxedRvalPrime_41;
              }
              else
                UnboxedRval_37 = UnboxedRHSRval_14;
              ShiftedRval_38 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(UnboxedRval_37, Shift_10, Fill_13);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_RevOrRvals_29 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (ShiftedRval_38));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevOrRvals_0_28));
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

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_RevOrRvals_19;

  ml_backend__ml_unify_gen_construct__ml_gen_const_tagword_arg_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_RevOrRvals_19);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_RevOrRvals_19));
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_struct__1638__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_17;

  conv2_LambdaHeadVar__2_17 = ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_const_static_args_widths__1766__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_17));
  return wrapper_arg_2;
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
  MR_bool succeeded;
  MR_Integer ConstNum_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word ConstStruct_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word ConsId_12 = ((MR_Word) ((MR_hl_field(0, ConstStruct_9, (MR_Integer) 0))));
  MR_Word Args_13 = ((MR_Word) ((MR_hl_field(0, ConstStruct_9, (MR_Integer) 1))));
  MR_Word Type_14 = ((MR_Word) ((MR_hl_field(0, ConstStruct_9, (MR_Integer) 2))));
  MR_Word ModuleInfo_17 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
  MR_Word MLDS_Type_18;
  MR_Word ConsTag_19;

  MLDS_Type_18 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_17, Type_14);
  ConsTag_19 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_17, ConsId_12);
  switch (MR_tag((MR_Word) ConsTag_19)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ConsTag_19)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct\'/6", (MR_String) "unexpected tag");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Arg_131;
            MR_Word ArgRvalTypeWidth_132;
            MR_Word ArgRval_133;
            MR_Word Rval_136;
            MR_Word GroundTerm_138;
            MR_Word ToCastRval_141;
            MR_Box conv1_Arg_131;

            hlds__goal_form__get_notag_or_direct_arg_arg_2_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), Args_13, &conv1_Arg_131);
            Arg_131 = ((MR_Word) (conv1_Arg_131));
            ml_backend__ml_unify_gen_construct__ml_gen_const_struct_arg_7_p_0(Info_7, STATE_VARIABLE_ConstStructMap_0_67, Arg_131, (MR_Word) (MR_mkword(1, &ml_backend__ml_unify_gen_construct_scalar_common_1[8])), &ArgRvalTypeWidth_132, STATE_VARIABLE_GlobalData_0_69, STATE_VARIABLE_GlobalData_70);
            ArgRval_133 = ((MR_Word) ((MR_hl_field(0, ArgRvalTypeWidth_132, (MR_Integer) 0))));
            ToCastRval_141 = ArgRval_133;
            {
              Rval_136 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Rval_136, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, Rval_136, 1) = ((MR_Box) (MLDS_Type_18));
              MR_hl_field(3, Rval_136, 2) = ((MR_Box) (ToCastRval_141));
            }
            {
              GroundTerm_138 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, GroundTerm_138, 0) = ((MR_Box) (Rval_136));
              MR_hl_field(0, GroundTerm_138, 1) = ((MR_Box) (Type_14));
              MR_hl_field(0, GroundTerm_138, 2) = ((MR_Box) (MLDS_Type_18));
            }
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstNum_8, ((MR_Box) (GroundTerm_138)), STATE_VARIABLE_ConstStructMap_0_67, STATE_VARIABLE_ConstStructMap_68);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct\'/6", (MR_String) "unexpected tag");
        return;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsTag_19, (MR_Integer) 0))))) {
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
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct\'/6", (MR_String) "unexpected tag");
            return;
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word RemoteArgsTagInfo_44 = ((MR_Word) ((MR_hl_field(3, ConsTag_19, (MR_Integer) 1))));

            ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0(Info_7, ConstNum_8, Type_14, MLDS_Type_18, ConsId_12, RemoteArgsTagInfo_44, Args_13, STATE_VARIABLE_ConstStructMap_0_67, STATE_VARIABLE_ConstStructMap_68, STATE_VARIABLE_GlobalData_0_69, STATE_VARIABLE_GlobalData_70);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word LocalArgsTagInfo_45 = ((MR_Word) ((MR_hl_field(3, ConsTag_19, (MR_Integer) 1))));
            MR_Word LocalSectag_46;
            MR_Unsigned PrimSec_49;
            MR_Word ArgsTypesWidths_51;
            MR_Word HighLevelData_52;
            MR_Word RevOrRvals_53;
            MR_Word OrRvals_54;
            MR_Word TagwordRval_55;
            MR_Word CastTagwordRval_56;
            MR_Word GroundTerm_57;
            MR_Word Var_80;
            MR_Word Var_84;
            MR_Word Var_86;
            MR_Word Var_87;
            MR_Word HighLevelData_118;
            MR_Word Target_119;
            MR_Box conv4_RevOrRvals_53;

            if ((LocalArgsTagInfo_45 == (MR_Word) ((MR_Unsigned) 0U)))
              LocalSectag_46 = (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[3]);
            else
              LocalSectag_46 = ((MR_Word) ((MR_hl_field(1, LocalArgsTagInfo_45, (MR_Integer) 1))));
            PrimSec_49 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_46, (MR_Integer) 1))));
            Target_119 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
            HighLevelData_118 = ((MR_Unsigned) ((MR_hl_field(0, Info_7, (MR_Integer) 1))) & (MR_Integer) 1);
            switch (HighLevelData_118) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 1:
                succeeded = (Target_119 == (MR_Integer) 2);
                break;
            }
            if (succeeded)
            {
              MR_Word ModuleInfo_120 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));

              ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_1((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), ModuleInfo_120, (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[13]), (MR_Integer) 0, Type_14, ConsId_12, Args_13, &ArgsTypesWidths_51);
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_static_args_widths\'/5", (MR_String) "constant structures are not supported for this grade");
                return;
              }
            HighLevelData_52 = ((MR_Unsigned) ((MR_hl_field(0, Info_7, (MR_Integer) 1))) & (MR_Integer) 1);
            {
              Var_80 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_80, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[3]));
              MR_hl_field(0, Var_80, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_2));
              MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_80, 3) = ((MR_Box) (HighLevelData_52));
              MR_hl_field(0, Var_80, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_3_p_0(Var_80, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct\'/6", (MR_String) "HighLevelData = yes");
            {
              Var_84 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_84, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_6[1]));
              MR_hl_field(0, Var_84, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0_3));
              MR_hl_field(0, Var_84, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_84, 3) = ((MR_Box) (Info_7));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[5]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[4]), Var_84, ArgsTypesWidths_51, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_RevOrRvals_53);
            RevOrRvals_53 = ((MR_Word) (conv4_RevOrRvals_53));
            mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevOrRvals_53, &OrRvals_54);
            {
              Var_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_87, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_87, 1) = ((MR_Box) (PrimSec_49));
            }
            {
              Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_86, 1) = ((MR_Box) (Var_87));
            }
            TagwordRval_55 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(Var_86, OrRvals_54);
            {
              CastTagwordRval_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, CastTagwordRval_56, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, CastTagwordRval_56, 1) = ((MR_Box) (MLDS_Type_18));
              MR_hl_field(3, CastTagwordRval_56, 2) = ((MR_Box) (TagwordRval_55));
            }
            {
              GroundTerm_57 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, GroundTerm_57, 0) = ((MR_Box) (CastTagwordRval_56));
              MR_hl_field(0, GroundTerm_57, 1) = ((MR_Box) (Type_14));
              MR_hl_field(0, GroundTerm_57, 2) = ((MR_Box) (MLDS_Type_18));
            }
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstNum_8, ((MR_Box) (GroundTerm_57)), STATE_VARIABLE_ConstStructMap_0_67, STATE_VARIABLE_ConstStructMap_68);
            *STATE_VARIABLE_GlobalData_70 = STATE_VARIABLE_GlobalData_0_69;
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Arg_59;
            MR_Word ArgRvalTypeWidth_60;
            MR_Word ArgRval_61;
            MR_Word Rval_64;
            MR_Word GroundTerm_98;
            MR_Word ToCastRval_115;
            MR_Word Ptag_116;
            MR_Box conv0_Arg_59;
            uint8_t Var_117;

            hlds__goal_form__get_notag_or_direct_arg_arg_2_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), Args_13, &conv0_Arg_59);
            Arg_59 = ((MR_Word) (conv0_Arg_59));
            ml_backend__ml_unify_gen_construct__ml_gen_const_struct_arg_7_p_0(Info_7, STATE_VARIABLE_ConstStructMap_0_67, Arg_59, (MR_Word) (MR_mkword(1, &ml_backend__ml_unify_gen_construct_scalar_common_1[8])), &ArgRvalTypeWidth_60, STATE_VARIABLE_GlobalData_0_69, STATE_VARIABLE_GlobalData_70);
            ArgRval_61 = ((MR_Word) ((MR_hl_field(0, ArgRvalTypeWidth_60, (MR_Integer) 0))));
            Ptag_116 = ((MR_Word) ((MR_hl_field(3, ConsTag_19, (MR_Integer) 1))));
            Var_117 = (uint8_t) (Ptag_116);
            succeeded = (Var_117 == UINT8_C(0));
            if (succeeded)
              ToCastRval_115 = ArgRval_61;
            else
              {
                ToCastRval_115 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, ToCastRval_115, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, ToCastRval_115, 1) = ((MR_Box) (Ptag_116));
                MR_hl_field(3, ToCastRval_115, 2) = ((MR_Box) (ArgRval_61));
              }
            {
              Rval_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Rval_64, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, Rval_64, 1) = ((MR_Box) (MLDS_Type_18));
              MR_hl_field(3, Rval_64, 2) = ((MR_Box) (ToCastRval_115));
            }
            {
              GroundTerm_98 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, GroundTerm_98, 0) = ((MR_Box) (Rval_64));
              MR_hl_field(0, GroundTerm_98, 1) = ((MR_Box) (Type_14));
              MR_hl_field(0, GroundTerm_98, 2) = ((MR_Box) (MLDS_Type_18));
            }
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstNum_8, ((MR_Box) (GroundTerm_98)), STATE_VARIABLE_ConstStructMap_0_67, STATE_VARIABLE_ConstStructMap_68);
          }
          break;
        case (MR_Integer) 14:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct\'/6", (MR_String) "unexpected closure");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_RevOrRvals_19;

  ml_backend__ml_unify_gen_construct__ml_gen_const_tagword_arg_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_RevOrRvals_19);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_RevOrRvals_19));
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_static_compound__1719__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_static_compound__1702__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_const_static_compound__1692__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_17;

  conv0_LambdaHeadVar__2_17 = ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_const_static_args_widths__1766__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_17));
  return wrapper_arg_2;
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
  MR_bool succeeded;
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
  MR_Word HighLevelData_93 = ((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Target_94 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);

  switch (HighLevelData_93) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 1:
      succeeded = (Target_94 == (MR_Integer) 2);
      break;
  }
  if (succeeded)
  {
    MR_Word ModuleInfo_95 = ((MR_Word) ((MR_hl_field(0, Info_12, (MR_Integer) 0))));

    ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_1((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), ModuleInfo_95, (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[12]), (MR_Integer) 0, VarType_14, ConsId_16, Args_18, &ArgsTypesWidths_23);
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_static_args_widths\'/5", (MR_String) "constant structures are not supported for this grade");
      return;
    }
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
        Ptag_25 = ((MR_Word) ((MR_hl_field(1, RemoteArgsTagInfo_17, (MR_Integer) 0))));
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
        MR_Word Var_53;
        MR_Word UsesConstructors_74;

        Ptag_25 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_17, (MR_Integer) 0))));
        RemoteSectag_30 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_17, (MR_Integer) 1))));
        UsesBaseClass_24 = (MR_Integer) 0;
        UsesConstructors_74 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_94);
        {
          Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_53, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[3]));
          MR_hl_field(0, Var_53, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_3));
          MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_53, 3) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(0, Var_53, 4) = ((MR_Box) (UsesConstructors_74));
        }
        mercury__require__expect_3_p_0(Var_53, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_static_compound\'/11", (MR_String) "remote_args_shared but UsesConstructors = yes");
        SectagUint_31 = ((MR_Unsigned) ((MR_hl_field(0, RemoteSectag_30, (MR_Integer) 0))));
        SectagSize_32 = ((MR_Word) ((MR_hl_field(0, RemoteSectag_30, (MR_Integer) 1))));
        if ((SectagSize_32 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word StagRval0_33;
          MR_Word Var_57;

          {
            Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_57, 1) = ((MR_Box) (SectagUint_31));
          }
          {
            StagRval0_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, StagRval0_33, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, StagRval0_33, 1) = ((MR_Box) (Var_57));
          }
          switch (HighLevelData_93) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                TagwordRval_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, TagwordRval_34, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, TagwordRval_34, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(3, TagwordRval_34, 2) = ((MR_Box) (StagRval0_33));
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
          MR_Word Var_59;
          MR_Word Var_63;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Box conv2_RevToOrRvals_37;

          {
            Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_59, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[3]));
            MR_hl_field(0, Var_59, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_4));
            MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_59, 3) = ((MR_Box) (HighLevelData_93));
            MR_hl_field(0, Var_59, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_59, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_static_compound\'/11", (MR_String) "HighLevelData = yes");
          ml_backend__ml_unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_116_97_107_101_95_116_97_103_119_111_114_100_95_97_114_103_115_95_116_121_112_101_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(ArgsTypesWidths_23, &TagwordArgsTypesWidths_36, &NonTagwordArgsTypesWidths_29);
          {
            Var_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_63, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_6[1]));
            MR_hl_field(0, Var_63, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_5));
            MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_63, 3) = ((MR_Box) (Info_12));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[5]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[4]), Var_63, TagwordArgsTypesWidths_36, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_RevToOrRvals_37);
          RevToOrRvals_37 = ((MR_Word) (conv2_RevToOrRvals_37));
          mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevToOrRvals_37, &ToOrRvals_38);
          {
            Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_66, 1) = ((MR_Box) (SectagUint_31));
          }
          {
            Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_65, 1) = ((MR_Box) (Var_66));
          }
          RawTagwordRval_39 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(Var_65, ToOrRvals_38);
          {
            TagwordRval_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, TagwordRval_34, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, TagwordRval_34, 1) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(3, TagwordRval_34, 2) = ((MR_Box) (RawTagwordRval_39));
          }
        }
        {
          TagwordRvals_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, TagwordRvals_28, 0) = ((MR_Box) (TagwordRval_34));
          MR_hl_field(1, TagwordRvals_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word UsesConstructors_27;
        MR_Word Var_48;

        UsesBaseClass_24 = (MR_Integer) 0;
        UsesConstructors_27 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_94);
        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_48, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[3]));
          MR_hl_field(0, Var_48, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_const_static_compound_11_p_0_2));
          MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_48, 3) = ((MR_Box) (UsesConstructors_27));
          MR_hl_field(0, Var_48, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__require__expect_3_p_0(Var_48, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_static_compound\'/11", (MR_String) "remote_args_ctor but UsesConstructors = no");
        Ptag_25 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
        TagwordRvals_28 = (MR_Word) ((MR_Unsigned) 0U);
        NonTagwordArgsTypesWidths_29 = ArgsTypesWidths_23;
      }
      break;
  }
  ml_backend__ml_unify_gen_construct__ml_gen_const_struct_args_6_p_0(Info_12, STATE_VARIABLE_ConstStructMap_0_43, NonTagwordArgsTypesWidths_29, &NonTagwordRvalsTypesWidths_40, STATE_VARIABLE_GlobalData_0_45, &STATE_VARIABLE_GlobalData_69_69);
  ModuleInfo_41 = ((MR_Word) ((MR_hl_field(0, Info_12, (MR_Integer) 0))));
  Var_70 = mercury__term_context__dummy_context_0_f_0();
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (ConsId_16));
  }
  ml_backend__ml_unify_gen_construct__construct_static_ground_term_14_p_0(ModuleInfo_41, Target_94, HighLevelData_93, Var_70, VarType_14, MLDS_Type_15, Var_71, UsesBaseClass_24, Ptag_25, TagwordRvals_28, NonTagwordRvalsTypesWidths_40, &GroundTerm_42, STATE_VARIABLE_GlobalData_69_69, STATE_VARIABLE_GlobalData_46);
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstNum_13, ((MR_Box) (GroundTerm_42)), STATE_VARIABLE_ConstStructMap_0_43, STATE_VARIABLE_ConstStructMap_44);
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
    MR_Word ArgTypeWidth_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgsTypesWidths_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word RvalTypeWidth_16;
    MR_Word RvalsTypesWidths_17;
    MR_Word ConstArg_19 = ((MR_Word) ((MR_hl_field(0, ArgTypeWidth_14, (MR_Integer) 0))));
    MR_Word ArgPosWidth_21 = ((MR_Word) ((MR_hl_field(0, ArgTypeWidth_14, (MR_Integer) 2))));
    MR_Word STATE_VARIABLE_GlobalData_24_24;

    ml_backend__ml_unify_gen_construct__ml_gen_const_struct_arg_7_p_0(Info_1, ConstStructMap_2, ConstArg_19, ArgPosWidth_21, &RvalTypeWidth_16, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_24_24);
    ml_backend__ml_unify_gen_construct__ml_gen_const_struct_args_6_p_0(Info_1, ConstStructMap_2, ArgsTypesWidths_15, &RvalsTypesWidths_17, STATE_VARIABLE_GlobalData_24_24, STATE_VARIABLE_GlobalData_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (RvalTypeWidth_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (RvalsTypesWidths_17));
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
  MR_Word ModuleInfo_14 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
  MR_Word Rval0_17;
  MR_Word MLDS_Type_19;
  MR_Word ArgWidth_23;
  MR_Word Rval_24;
  MR_Word Var_27;

  if (((MR_tag((MR_Word) ConstArg_10)) == (MR_Integer) 0))
  {
    MR_Integer StructNum_15 = ((MR_Integer) ((MR_hl_field(0, ConstArg_10, (MR_Integer) 0))));
    MR_Word GroundTerm_16;
    MR_Box conv0_GroundTerm_16;

    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_9, StructNum_15, &conv0_GroundTerm_16);
    GroundTerm_16 = ((MR_Word) (conv0_GroundTerm_16));
    Rval0_17 = ((MR_Word) ((MR_hl_field(0, GroundTerm_16, (MR_Integer) 0))));
    MLDS_Type_19 = ((MR_Word) ((MR_hl_field(0, GroundTerm_16, (MR_Integer) 2))));
  }
  else
  {
    MR_Word ConsId_20 = ((MR_Word) ((MR_hl_field(1, ConstArg_10, (MR_Integer) 0))));
    MR_Word Type_21 = ((MR_Word) ((MR_hl_field(1, ConstArg_10, (MR_Integer) 1))));
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
              MR_Word RvalConst_84;

              RvalConst_84 = ml_backend__ml_unify_gen_construct__int_tag_to_mlds_rval_const_3_f_0(Type_21, MLDS_Type_19, (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_3[0]));
              {
                Rval0_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Rval0_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Rval0_17, 1) = ((MR_Box) (RvalConst_84));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct_arg_tag\'/4", (MR_String) "unexpected tag");
              return;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntTag_32 = ((MR_Word) ((MR_hl_field(1, ConsTag_22, (MR_Integer) 0))));
          MR_Word RvalConst_33;

          RvalConst_33 = ml_backend__ml_unify_gen_construct__int_tag_to_mlds_rval_const_3_f_0(Type_21, MLDS_Type_19, IntTag_32);
          {
            Rval0_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Rval0_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Rval0_17, 1) = ((MR_Box) (RvalConst_33));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_34 = MR_unbox_float((MR_hl_field(2, ConsTag_22, (MR_Integer) 0)));
          MR_Word Var_70;

          {
            Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(3, Var_70, 1) = MR_box_float(Float_34);
          }
          {
            Rval0_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Rval0_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Rval0_17, 1) = ((MR_Box) (Var_70));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String String_35 = ((MR_String) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 1))));
              MR_Word Var_71;

              {
                Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(3, Var_71, 1) = ((MR_Box) (String_35));
              }
              {
                Rval0_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Rval0_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Rval0_17, 1) = ((MR_Box) (Var_71));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_42 = ((MR_Unsigned) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_String ForeignTag_43 = ((MR_String) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 2))));
              MR_Word Var_74;

              {
                Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                MR_hl_field(3, Var_74, 1) = (MR_Box) ((MR_Unsigned) (ForeignLang_42));
                MR_hl_field(3, Var_74, 2) = ((MR_Box) (ForeignTag_43));
                MR_hl_field(3, Var_74, 3) = ((MR_Box) (MLDS_Type_19));
              }
              {
                Rval0_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Rval0_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Rval0_17, 1) = ((MR_Box) (Var_74));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word LocalSectag_37 = ((MR_Word) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 2))));
              MR_Unsigned PrimSec_40 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_37, (MR_Integer) 1))));
              MR_Word Var_72;
              MR_Word Var_73;

              {
                Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_73, 1) = ((MR_Box) (PrimSec_40));
              }
              {
                Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_72, 1) = ((MR_Box) (Var_73));
              }
              {
                Rval0_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Rval0_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, Rval0_17, 1) = ((MR_Box) (MLDS_Type_19));
                MR_hl_field(3, Rval0_17, 2) = ((MR_Box) (Var_72));
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
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_const_struct_arg_tag\'/4", (MR_String) "unexpected tag");
              return;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ModuleName0_44 = ((MR_Word) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 1))));
              MR_String TypeName_45 = ((MR_String) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 2))));
              MR_Integer TypeArity_46 = ((MR_Integer) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 3))));
              MR_Word ModuleName_47;
              MR_Word MLDS_Module_48;
              MR_Word RttiTypeCtor_49;
              MR_Word RttiId_50;
              MR_Word Const_51;
              uint16_t Var_76;
              MR_Word Var_78;

              ModuleName_47 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_44);
              MLDS_Module_48 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_47);
              Var_76 = mercury__uint16__det_from_int_1_f_0(TypeArity_46);
              {
                RttiTypeCtor_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, RttiTypeCtor_49, 0) = ((MR_Box) (ModuleName_47));
                MR_hl_field(0, RttiTypeCtor_49, 1) = ((MR_Box) (TypeName_45));
                MR_hl_field(0, RttiTypeCtor_49, 2) = ((MR_Box) (MR_Word) (Var_76));
              }
              {
                RttiId_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, RttiId_50, 0) = ((MR_Box) (RttiTypeCtor_49));
                MR_hl_field(0, RttiId_50, 1) = ((MR_Box) ((MR_Unsigned) 44U));
              }
              {
                Const_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Const_51, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                MR_hl_field(3, Const_51, 1) = ((MR_Box) (MLDS_Module_48));
                MR_hl_field(3, Const_51, 2) = ((MR_Box) (RttiId_50));
              }
              {
                Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_78, 1) = ((MR_Box) (Const_51));
              }
              {
                Rval0_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Rval0_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, Rval0_17, 1) = ((MR_Box) (MLDS_Type_19));
                MR_hl_field(3, Rval0_17, 2) = ((MR_Box) (Var_78));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ClassId_52 = ((MR_Word) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 2))));
              MR_String Instance_53 = ((MR_String) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 3))));
              MR_Word TCName_54;
              MR_Word Var_79;
              MR_Word Var_80;
              MR_Word ModuleName_85 = ((MR_Word) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 1))));
              MR_Word MLDS_Module_86;
              MR_Word RttiId_87;
              MR_Word Const_88;

              MLDS_Module_86 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_85);
              TCName_54 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_52);
              {
                Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_79, 0) = ((MR_Box) (ModuleName_85));
                MR_hl_field(1, Var_79, 1) = ((MR_Box) (Instance_53));
              }
              {
                RttiId_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, RttiId_87, 0) = ((MR_Box) (TCName_54));
                MR_hl_field(1, RttiId_87, 1) = ((MR_Box) (Var_79));
              }
              {
                Const_88 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Const_88, 0) = ((MR_Box) ((MR_Unsigned) 18U));
                MR_hl_field(3, Const_88, 1) = ((MR_Box) (MLDS_Module_86));
                MR_hl_field(3, Const_88, 2) = ((MR_Box) (RttiId_87));
              }
              {
                Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_80, 1) = ((MR_Box) (Const_88));
              }
              {
                Rval0_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Rval0_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, Rval0_17, 1) = ((MR_Box) (MLDS_Type_19));
                MR_hl_field(3, Rval0_17, 2) = ((MR_Box) (Var_80));
              }
            }
            break;
        }
        break;
    }
  }
  ArgWidth_23 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_11);
  Var_27 = mercury__term_context__dummy_context_0_f_0();
  ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_14, Var_27, MLDS_Type_19, ArgWidth_23, Rval0_17, &Rval_24, STATE_VARIABLE_GlobalData_0_25, STATE_VARIABLE_GlobalData_26);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *RvalTypeWidth_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Rval_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (MLDS_Type_19));
    MR_hl_field(0, base, 2) = ((MR_Box) (ArgPosWidth_11));
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
  MR_bool succeeded;
  MR_Word RHSVar_9 = ((MR_Word) ((MR_hl_field(0, RHSVarTypeWidth_6, (MR_Integer) 0))));
  MR_Word ArgPosWidth_11 = ((MR_Word) ((MR_hl_field(0, RHSVarTypeWidth_6, (MR_Integer) 2))));
  MR_Word RHSGroundTerm_12;
  MR_Word RHSRval_13;
  MR_Box conv0_RHSGroundTerm_12;

  mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (RHSVar_9)), &conv0_RHSGroundTerm_12, STATE_VARIABLE_GroundTermMap_0_18, STATE_VARIABLE_GroundTermMap_19);
  RHSGroundTerm_12 = ((MR_Word) (conv0_RHSGroundTerm_12));
  RHSRval_13 = ((MR_Word) ((MR_hl_field(0, RHSGroundTerm_12, (MR_Integer) 0))));
  switch (MR_tag((MR_Word) ArgPosWidth_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_maybe_shift_and_accumulate_packed_arg_rval\'/4", (MR_String) "not apw_partial_shifted or apw_none_shifted");
        return;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_maybe_shift_and_accumulate_packed_arg_rval\'/4", (MR_String) "not apw_partial_shifted or apw_none_shifted");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Shift_24 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_11, (MR_Integer) 3))));
            MR_Word Fill_27 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_11, (MR_Integer) 6))) & (MR_Integer) 7);
            MR_Word UnboxedRHSRval_28;
            MR_Word UnboxedRvalPrime_45;
            MR_Word RvalConst_46;

            succeeded = ((((MR_tag((MR_Word) RHSRval_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RHSRval_13, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              UnboxedRvalPrime_45 = ((MR_Word) ((MR_hl_field(3, RHSRval_13, (MR_Integer) 2))));
              UnboxedRHSRval_28 = UnboxedRvalPrime_45;
            }
            else
              UnboxedRHSRval_28 = RHSRval_13;
            succeeded = ((((MR_tag((MR_Word) UnboxedRHSRval_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, UnboxedRHSRval_28, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              RvalConst_46 = ((MR_Word) ((MR_hl_field(3, UnboxedRHSRval_28, (MR_Integer) 1))));
              succeeded = ((((MR_tag((MR_Word) RvalConst_46)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RvalConst_46, (MR_Integer) 0)))) == (MR_Integer) 20)));
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
              *STATE_VARIABLE_RevOrRvals_17 = STATE_VARIABLE_RevOrRvals_0_16;
            else
            {
              MR_Word UnboxedRval_48;
              MR_Word ShiftedRval_49;
              MR_Word UnboxedRvalPrime_52;

              succeeded = ((((MR_tag((MR_Word) UnboxedRHSRval_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, UnboxedRHSRval_28, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                UnboxedRvalPrime_52 = ((MR_Word) ((MR_hl_field(3, UnboxedRHSRval_28, (MR_Integer) 2))));
                UnboxedRval_48 = UnboxedRvalPrime_52;
              }
              else
                UnboxedRval_48 = UnboxedRHSRval_28;
              ShiftedRval_49 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(UnboxedRval_48, Shift_24, Fill_27);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_RevOrRvals_17 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (ShiftedRval_49));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevOrRvals_0_16));
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

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_const_structs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ConstStructMap_68;
  MR_Word conv0_STATE_VARIABLE_GlobalData_70;

  ml_backend__ml_unify_gen_construct__ml_gen_const_struct_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ConstStructMap_68, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_GlobalData_70);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ConstStructMap_68));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_GlobalData_70));
}

void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_const_structs_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Target_7,
  MR_Word * ConstStructMap_8,
  MR_Word STATE_VARIABLE_GlobalData_0_14,
  MR_Word * STATE_VARIABLE_GlobalData_15)
{
  MR_Word HighLevelData_10;
  MR_Word Info_11;
  MR_Word ConstStructDb_12;
  MR_Word ConstStructs_13;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Box conv3_ConstStructMap_8;
  MR_Box conv2_STATE_VARIABLE_GlobalData_15;

  HighLevelData_10 = ml_backend__ml_util__mlds_target_high_level_data_1_f_0(Target_7);
  {
    Info_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_11, 0) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, Info_11, 1) = (MR_Box) (((((MR_Unsigned) (Target_7) << 1)) | (MR_Unsigned) (HighLevelData_10)));
  }
  hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_6, &ConstStructDb_12);
  hlds__const_struct__const_struct_db_get_structs_2_p_0(ConstStructDb_12, &ConstStructs_13);
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_9[0]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_const_structs_5_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (Info_11));
  }
  Var_17 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0));
  mercury__list__foldl2_6_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[0]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[1]), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0), Var_16, ConstStructs_13, ((MR_Box) (Var_17)), &conv3_ConstStructMap_8, ((MR_Box) (STATE_VARIABLE_GlobalData_0_14)), &conv2_STATE_VARIABLE_GlobalData_15);
  *ConstStructMap_8 = ((MR_Word) (conv3_ConstStructMap_8));
  *STATE_VARIABLE_GlobalData_15 = ((MR_Word) (conv2_STATE_VARIABLE_GlobalData_15));
}

void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_5_p_0(
  MR_Word TermVar_6,
  MR_Word Goal_7,
  MR_Word * Stmts_8,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
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
        MR_Word VarTable_16;
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
        ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_27, &VarTable_16);
        ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_27, &GlobalData0_17);
        Var_29 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0));
        ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjuncts_9_p_0(ModuleInfo_13, Target_14, HighLevelData_15, VarTable_16, Conjuncts_11, GlobalData0_17, &GlobalData_18, Var_29, &GroundTermMap_19);
        ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_18, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_30_30);
        mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), GroundTermMap_19, ((MR_Box) (TermVar_6)), &conv0_TermVarGroundTerm_20);
        TermVarGroundTerm_20 = ((MR_Word) (conv0_TermVarGroundTerm_20));
        ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(TermVar_6, TermVarGroundTerm_20, STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Info_28);
        ml_backend__ml_code_util__ml_gen_var_direct_3_p_0(*STATE_VARIABLE_Info_28, TermVar_6, &TermVarLval_21);
        TermVarRval_22 = ((MR_Word) ((MR_hl_field(0, TermVarGroundTerm_20, (MR_Integer) 0))));
        Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_12);
        Stmt_26 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(TermVarLval_21, TermVarRval_22, Context_25);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_26));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjuncts_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Target_2,
  MR_Word HighLevelData_3,
  MR_Word VarTable_4,
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
      MR_Word Goal_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Goals_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_GlobalData_32_32;
      MR_Word STATE_VARIABLE_GroundTermMap_33_33;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_GlobalData_0_6;
      MR_Word next_value_of_STATE_VARIABLE_GroundTermMap_0_8;

      ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0(ModuleInfo_1, Target_2, HighLevelData_3, VarTable_4, Goal_24, STATE_VARIABLE_GlobalData_0_6, &STATE_VARIABLE_GlobalData_32_32, STATE_VARIABLE_GroundTermMap_0_8, &STATE_VARIABLE_GroundTermMap_33_33);
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
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1333__6_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_8(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1333__5_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
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
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_RevOrRvals_17;
  MR_Word conv3_STATE_VARIABLE_GroundTermMap_19;

  ml_backend__ml_unify_gen_construct__construct_ground_term_tagword_initializer_lld_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_RevOrRvals_17, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_GroundTermMap_19);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_RevOrRvals_17));
  *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_GroundTermMap_19));
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_6(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1359__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;

  conv2_HeadVar__3_3 = parse_tree__var_table__lookup_var_type_func_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1333__4_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1333__3_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1333__2_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_conjunct__1333__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Target_11,
  MR_Word HighLevelData_12,
  MR_Word VarTable_13,
  MR_Word Goal_14,
  MR_Word STATE_VARIABLE_GlobalData_0_76,
  MR_Word * STATE_VARIABLE_GlobalData_77,
  MR_Word STATE_VARIABLE_GroundTermMap_0_78,
  MR_Word * STATE_VARIABLE_GroundTermMap_79)
{
  MR_bool succeeded;
  MR_Word LHSVar_17;
  MR_Word ConsId_18;
  MR_Word RHSVars_19;
  MR_Word GoalInfo_20;
  MR_Word LHSVarEntry_21;
  MR_Word LHSType_22;
  MR_Word LHS_MLDS_Type_23;
  MR_Word ConsTag_24;
  MR_Word Context_25;

  hlds__goal_form__get_from_ground_term_construct_conjunct_info_5_p_0(Goal_14, &LHSVar_17, &ConsId_18, &RHSVars_19, &GoalInfo_20);
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_13, LHSVar_17, &LHSVarEntry_21);
  LHSType_22 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_21, (MR_Integer) 1))));
  LHS_MLDS_Type_23 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_10, LHSType_22);
  ConsTag_24 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_10, ConsId_18);
  Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_20);
  switch (MR_tag((MR_Word) ConsTag_24)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ConsTag_24)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ConstRval_28;
            MR_Word ConstGroundTerm_39;
            MR_Word Var_86;
            MR_Word IntConst_119;

            IntConst_119 = ml_backend__ml_unify_gen_construct__int_tag_to_mlds_rval_const_3_f_0(LHSType_22, LHS_MLDS_Type_23, (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_3[0]));
            {
              ConstRval_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConstRval_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, ConstRval_28, 1) = ((MR_Box) (IntConst_119));
            }
            {
              Var_86 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_86, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
              MR_hl_field(0, Var_86, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_1));
              MR_hl_field(0, Var_86, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_86, 3) = ((MR_Box) (RHSVars_19));
              MR_hl_field(0, Var_86, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_86, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_conjunct\'/9", (MR_String) "constant has args");
            {
              ConstGroundTerm_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ConstGroundTerm_39, 0) = ((MR_Box) (ConstRval_28));
              MR_hl_field(0, ConstGroundTerm_39, 1) = ((MR_Box) (LHSType_22));
              MR_hl_field(0, ConstGroundTerm_39, 2) = ((MR_Box) (LHS_MLDS_Type_23));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (ConstGroundTerm_39)), STATE_VARIABLE_GroundTermMap_0_78, STATE_VARIABLE_GroundTermMap_79);
            *STATE_VARIABLE_GlobalData_77 = STATE_VARIABLE_GlobalData_0_76;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RHSVar_66;
            MR_Word RHSGroundTerm_67;
            MR_Word RHSRval_68;
            MR_Word RHS_MLDS_Type_70;
            MR_Word BoxedRHSRval0_71;
            MR_Word BoxedRHSRval_72;
            MR_Word GroundTerm_73;
            MR_Word STATE_VARIABLE_GroundTermMap_112_112;
            MR_Box conv0_RHSVar_66;
            MR_Box conv1_RHSGroundTerm_67;

            hlds__goal_form__get_notag_or_direct_arg_arg_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), RHSVars_19, &conv0_RHSVar_66);
            RHSVar_66 = ((MR_Word) (conv0_RHSVar_66));
            mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (RHSVar_66)), &conv1_RHSGroundTerm_67, STATE_VARIABLE_GroundTermMap_0_78, &STATE_VARIABLE_GroundTermMap_112_112);
            RHSGroundTerm_67 = ((MR_Word) (conv1_RHSGroundTerm_67));
            RHSRval_68 = ((MR_Word) ((MR_hl_field(0, RHSGroundTerm_67, (MR_Integer) 0))));
            RHS_MLDS_Type_70 = ((MR_Word) ((MR_hl_field(0, RHSGroundTerm_67, (MR_Integer) 2))));
            ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_10, Context_25, RHS_MLDS_Type_70, (MR_Integer) 2, RHSRval_68, &BoxedRHSRval0_71, STATE_VARIABLE_GlobalData_0_76, STATE_VARIABLE_GlobalData_77);
            BoxedRHSRval_72 = ml_backend__ml_unify_gen_construct__ml_cast_cons_tag_3_f_0(LHS_MLDS_Type_23, ConsTag_24, BoxedRHSRval0_71);
            {
              GroundTerm_73 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, GroundTerm_73, 0) = ((MR_Box) (BoxedRHSRval_72));
              MR_hl_field(0, GroundTerm_73, 1) = ((MR_Box) (LHSType_22));
              MR_hl_field(0, GroundTerm_73, 2) = ((MR_Box) (LHS_MLDS_Type_23));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (GroundTerm_73)), STATE_VARIABLE_GroundTermMap_112_112, STATE_VARIABLE_GroundTermMap_79);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word IntTag_26 = ((MR_Word) ((MR_hl_field(1, ConsTag_24, (MR_Integer) 0))));
        MR_Word IntConst_27;
        MR_Word ConstRval_171;
        MR_Word ConstGroundTerm_172;
        MR_Word Var_173;

        IntConst_27 = ml_backend__ml_unify_gen_construct__int_tag_to_mlds_rval_const_3_f_0(LHSType_22, LHS_MLDS_Type_23, IntTag_26);
        {
          ConstRval_171 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ConstRval_171, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, ConstRval_171, 1) = ((MR_Box) (IntConst_27));
        }
        {
          Var_173 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_173, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
          MR_hl_field(0, Var_173, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_4));
          MR_hl_field(0, Var_173, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_173, 3) = ((MR_Box) (RHSVars_19));
          MR_hl_field(0, Var_173, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_173, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_conjunct\'/9", (MR_String) "constant has args");
        {
          ConstGroundTerm_172 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ConstGroundTerm_172, 0) = ((MR_Box) (ConstRval_171));
          MR_hl_field(0, ConstGroundTerm_172, 1) = ((MR_Box) (LHSType_22));
          MR_hl_field(0, ConstGroundTerm_172, 2) = ((MR_Box) (LHS_MLDS_Type_23));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (ConstGroundTerm_172)), STATE_VARIABLE_GroundTermMap_0_78, STATE_VARIABLE_GroundTermMap_79);
        *STATE_VARIABLE_GlobalData_77 = STATE_VARIABLE_GlobalData_0_76;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Float Float_29 = MR_unbox_float((MR_hl_field(2, ConsTag_24, (MR_Integer) 0)));
        MR_Word Var_80;
        MR_Word ConstRval_149;
        MR_Word ConstGroundTerm_150;
        MR_Word Var_151;

        {
          Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_80, 1) = MR_box_float(Float_29);
        }
        {
          ConstRval_149 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ConstRval_149, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, ConstRval_149, 1) = ((MR_Box) (Var_80));
        }
        {
          Var_151 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_151, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
          MR_hl_field(0, Var_151, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_2));
          MR_hl_field(0, Var_151, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_151, 3) = ((MR_Box) (RHSVars_19));
          MR_hl_field(0, Var_151, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_151, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_conjunct\'/9", (MR_String) "constant has args");
        {
          ConstGroundTerm_150 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ConstGroundTerm_150, 0) = ((MR_Box) (ConstRval_149));
          MR_hl_field(0, ConstGroundTerm_150, 1) = ((MR_Box) (LHSType_22));
          MR_hl_field(0, ConstGroundTerm_150, 2) = ((MR_Box) (LHS_MLDS_Type_23));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (ConstGroundTerm_150)), STATE_VARIABLE_GroundTermMap_0_78, STATE_VARIABLE_GroundTermMap_79);
        *STATE_VARIABLE_GlobalData_77 = STATE_VARIABLE_GlobalData_0_76;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsTag_24, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String String_30 = ((MR_String) ((MR_hl_field(3, ConsTag_24, (MR_Integer) 1))));
            MR_Word Var_81;
            MR_Word ConstRval_193;
            MR_Word ConstGroundTerm_194;
            MR_Word Var_195;

            {
              Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(3, Var_81, 1) = ((MR_Box) (String_30));
            }
            {
              ConstRval_193 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConstRval_193, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, ConstRval_193, 1) = ((MR_Box) (Var_81));
            }
            {
              Var_195 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_195, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
              MR_hl_field(0, Var_195, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_9));
              MR_hl_field(0, Var_195, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_195, 3) = ((MR_Box) (RHSVars_19));
              MR_hl_field(0, Var_195, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_195, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_conjunct\'/9", (MR_String) "constant has args");
            {
              ConstGroundTerm_194 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ConstGroundTerm_194, 0) = ((MR_Box) (ConstRval_193));
              MR_hl_field(0, ConstGroundTerm_194, 1) = ((MR_Box) (LHSType_22));
              MR_hl_field(0, ConstGroundTerm_194, 2) = ((MR_Box) (LHS_MLDS_Type_23));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (ConstGroundTerm_194)), STATE_VARIABLE_GroundTermMap_0_78, STATE_VARIABLE_GroundTermMap_79);
            *STATE_VARIABLE_GlobalData_77 = STATE_VARIABLE_GlobalData_0_76;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ForeignLang_31 = ((MR_Unsigned) ((MR_hl_field(3, ConsTag_24, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_String ForeignTag_32 = ((MR_String) ((MR_hl_field(3, ConsTag_24, (MR_Integer) 2))));
            MR_Word Var_82;
            MR_Word ConstRval_160;
            MR_Word ConstGroundTerm_161;
            MR_Word Var_162;

            {
              Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(3, Var_82, 1) = (MR_Box) ((MR_Unsigned) (ForeignLang_31));
              MR_hl_field(3, Var_82, 2) = ((MR_Box) (ForeignTag_32));
              MR_hl_field(3, Var_82, 3) = ((MR_Box) (LHS_MLDS_Type_23));
            }
            {
              ConstRval_160 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConstRval_160, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, ConstRval_160, 1) = ((MR_Box) (Var_82));
            }
            {
              Var_162 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_162, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
              MR_hl_field(0, Var_162, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_3));
              MR_hl_field(0, Var_162, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_162, 3) = ((MR_Box) (RHSVars_19));
              MR_hl_field(0, Var_162, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_162, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_conjunct\'/9", (MR_String) "constant has args");
            {
              ConstGroundTerm_161 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ConstGroundTerm_161, 0) = ((MR_Box) (ConstRval_160));
              MR_hl_field(0, ConstGroundTerm_161, 1) = ((MR_Box) (LHSType_22));
              MR_hl_field(0, ConstGroundTerm_161, 2) = ((MR_Box) (LHS_MLDS_Type_23));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (ConstGroundTerm_161)), STATE_VARIABLE_GroundTermMap_0_78, STATE_VARIABLE_GroundTermMap_79);
            *STATE_VARIABLE_GlobalData_77 = STATE_VARIABLE_GlobalData_0_76;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word LocalSectag_34 = ((MR_Word) ((MR_hl_field(3, ConsTag_24, (MR_Integer) 2))));
            MR_Unsigned PrimSec_37 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_34, (MR_Integer) 1))));
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word ConstRval_182;
            MR_Word ConstGroundTerm_183;
            MR_Word Var_184;

            {
              Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_85, 1) = ((MR_Box) (PrimSec_37));
            }
            {
              Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_84, 1) = ((MR_Box) (Var_85));
            }
            {
              ConstRval_182 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConstRval_182, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, ConstRval_182, 1) = ((MR_Box) (LHS_MLDS_Type_23));
              MR_hl_field(3, ConstRval_182, 2) = ((MR_Box) (Var_84));
            }
            {
              Var_184 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_184, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
              MR_hl_field(0, Var_184, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_8));
              MR_hl_field(0, Var_184, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_184, 3) = ((MR_Box) (RHSVars_19));
              MR_hl_field(0, Var_184, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_184, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_conjunct\'/9", (MR_String) "constant has args");
            {
              ConstGroundTerm_183 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ConstGroundTerm_183, 0) = ((MR_Box) (ConstRval_182));
              MR_hl_field(0, ConstGroundTerm_183, 1) = ((MR_Box) (LHSType_22));
              MR_hl_field(0, ConstGroundTerm_183, 2) = ((MR_Box) (LHS_MLDS_Type_23));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (ConstGroundTerm_183)), STATE_VARIABLE_GroundTermMap_0_78, STATE_VARIABLE_GroundTermMap_79);
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
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_conjunct\'/9", (MR_String) "unexpected constant");
            return;
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word RemoteArgsTagInfo_64 = ((MR_Word) ((MR_hl_field(3, ConsTag_24, (MR_Integer) 1))));

            ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0(ModuleInfo_10, Target_11, HighLevelData_12, VarTable_13, LHSVar_17, LHSType_22, LHS_MLDS_Type_23, ConsId_18, RemoteArgsTagInfo_64, RHSVars_19, Context_25, STATE_VARIABLE_GlobalData_0_76, STATE_VARIABLE_GlobalData_77, STATE_VARIABLE_GroundTermMap_0_78, STATE_VARIABLE_GroundTermMap_79);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word LocalArgsTagInfo_56 = ((MR_Word) ((MR_hl_field(3, ConsTag_24, (MR_Integer) 1))));
            MR_Word RHSVarsTypesWidths_59;
            MR_Word RevOrRvals_60;
            MR_Word OrRvals_61;
            MR_Word TagwordRval_62;
            MR_Word CastTagwordRval_63;
            MR_Word Var_98;
            MR_Word Var_100;
            MR_Word STATE_VARIABLE_GroundTermMap_106_106;
            MR_Word Var_107;
            MR_Word Var_108;
            MR_Word LocalSectag_123;
            MR_Unsigned PrimSec_124;
            MR_Word ConstGroundTerm_125;
            MR_Box conv6_RevOrRvals_60;
            MR_Box conv5_STATE_VARIABLE_GroundTermMap_106_106;

            if ((LocalArgsTagInfo_56 == (MR_Word) ((MR_Unsigned) 0U)))
              LocalSectag_123 = (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[3]);
            else
              LocalSectag_123 = ((MR_Word) ((MR_hl_field(1, LocalArgsTagInfo_56, (MR_Integer) 1))));
            PrimSec_124 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_123, (MR_Integer) 1))));
            {
              Var_98 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_98, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_5[2]));
              MR_hl_field(0, Var_98, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_5));
              MR_hl_field(0, Var_98, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_98, 3) = ((MR_Box) (VarTable_13));
            }
            ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_1((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), ModuleInfo_10, Var_98, (MR_Integer) 0, LHSType_22, ConsId_18, RHSVars_19, &RHSVarsTypesWidths_59);
            {
              Var_100 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_100, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[3]));
              MR_hl_field(0, Var_100, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_conjunct_9_p_0_6));
              MR_hl_field(0, Var_100, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_100, 3) = ((MR_Box) (HighLevelData_12));
              MR_hl_field(0, Var_100, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_3_p_0(Var_100, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_conjunct\'/9", (MR_String) "HighLevelData = yes");
            mercury__list__foldl2_6_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[3]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[4]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[2]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[11]), RHSVarsTypesWidths_59, ((MR_Box) ((MR_Unsigned) 0U)), &conv6_RevOrRvals_60, ((MR_Box) (STATE_VARIABLE_GroundTermMap_0_78)), &conv5_STATE_VARIABLE_GroundTermMap_106_106);
            RevOrRvals_60 = ((MR_Word) (conv6_RevOrRvals_60));
            STATE_VARIABLE_GroundTermMap_106_106 = ((MR_Word) (conv5_STATE_VARIABLE_GroundTermMap_106_106));
            mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevOrRvals_60, &OrRvals_61);
            {
              Var_108 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_108, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_108, 1) = ((MR_Box) (PrimSec_124));
            }
            {
              Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_107, 1) = ((MR_Box) (Var_108));
            }
            TagwordRval_62 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(Var_107, OrRvals_61);
            {
              CastTagwordRval_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, CastTagwordRval_63, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, CastTagwordRval_63, 1) = ((MR_Box) (LHS_MLDS_Type_23));
              MR_hl_field(3, CastTagwordRval_63, 2) = ((MR_Box) (TagwordRval_62));
            }
            {
              ConstGroundTerm_125 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ConstGroundTerm_125, 0) = ((MR_Box) (CastTagwordRval_63));
              MR_hl_field(0, ConstGroundTerm_125, 1) = ((MR_Box) (LHSType_22));
              MR_hl_field(0, ConstGroundTerm_125, 2) = ((MR_Box) (LHS_MLDS_Type_23));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (ConstGroundTerm_125)), STATE_VARIABLE_GroundTermMap_106_106, STATE_VARIABLE_GroundTermMap_79);
            *STATE_VARIABLE_GlobalData_77 = STATE_VARIABLE_GlobalData_0_76;
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word RHSVar_66;
            MR_Word RHSGroundTerm_67;
            MR_Word RHSRval_68;
            MR_Word RHS_MLDS_Type_70;
            MR_Word BoxedRHSRval0_71;
            MR_Word BoxedRHSRval_72;
            MR_Word GroundTerm_73;
            MR_Word STATE_VARIABLE_GroundTermMap_112_112;
            MR_Box conv0_RHSVar_66;
            MR_Box conv1_RHSGroundTerm_67;

            hlds__goal_form__get_notag_or_direct_arg_arg_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), RHSVars_19, &conv0_RHSVar_66);
            RHSVar_66 = ((MR_Word) (conv0_RHSVar_66));
            mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (RHSVar_66)), &conv1_RHSGroundTerm_67, STATE_VARIABLE_GroundTermMap_0_78, &STATE_VARIABLE_GroundTermMap_112_112);
            RHSGroundTerm_67 = ((MR_Word) (conv1_RHSGroundTerm_67));
            RHSRval_68 = ((MR_Word) ((MR_hl_field(0, RHSGroundTerm_67, (MR_Integer) 0))));
            RHS_MLDS_Type_70 = ((MR_Word) ((MR_hl_field(0, RHSGroundTerm_67, (MR_Integer) 2))));
            ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_10, Context_25, RHS_MLDS_Type_70, (MR_Integer) 2, RHSRval_68, &BoxedRHSRval0_71, STATE_VARIABLE_GlobalData_0_76, STATE_VARIABLE_GlobalData_77);
            BoxedRHSRval_72 = ml_backend__ml_unify_gen_construct__ml_cast_cons_tag_3_f_0(LHS_MLDS_Type_23, ConsTag_24, BoxedRHSRval0_71);
            {
              GroundTerm_73 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, GroundTerm_73, 0) = ((MR_Box) (BoxedRHSRval_72));
              MR_hl_field(0, GroundTerm_73, 1) = ((MR_Box) (LHSType_22));
              MR_hl_field(0, GroundTerm_73, 2) = ((MR_Box) (LHS_MLDS_Type_23));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_17)), ((MR_Box) (GroundTerm_73)), STATE_VARIABLE_GroundTermMap_112_112, STATE_VARIABLE_GroundTermMap_79);
          }
          break;
        case (MR_Integer) 14:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_conjunct\'/9", (MR_String) "unexpected closure");
            return;
          }
          break;
      }
      break;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__ml_cast_cons_tag_3_f_0(
  MR_Word Type_5,
  MR_Word ConsTag_6,
  MR_Word Rval_7)
{
  MR_bool succeeded;
  MR_Word CastRval_8;
  MR_Word ToCastRval_9;

  if ((ConsTag_6 == (MR_Word) ((MR_Unsigned) 4U)))
    ToCastRval_9 = Rval_7;
  else
  {
    MR_Word Ptag_10 = ((MR_Word) ((MR_hl_field(3, ConsTag_6, (MR_Integer) 1))));
    uint8_t Var_11 = (uint8_t) (Ptag_10);

    succeeded = (Var_11 == UINT8_C(0));
    if (succeeded)
      ToCastRval_9 = Rval_7;
    else
      {
        ToCastRval_9 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ToCastRval_9, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, ToCastRval_9, 1) = ((MR_Box) (Ptag_10));
        MR_hl_field(3, ToCastRval_9, 2) = ((MR_Box) (Rval_7));
      }
  }
  {
    CastRval_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, CastRval_8, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, CastRval_8, 1) = ((MR_Box) (Type_5));
    MR_hl_field(3, CastRval_8, 2) = ((MR_Box) (ToCastRval_9));
  }
  return CastRval_8;
}

static MR_Word MR_CALL 
ml_backend__ml_unify_gen_construct__int_tag_to_mlds_rval_const_3_f_0(
  MR_Word Type_5,
  MR_Word MLDS_Type_6,
  MR_Word IntTag_7)
{
  MR_bool succeeded;
  MR_Word Const_8;

  switch (MR_tag((MR_Word) IntTag_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Int_9 = ((MR_Integer) ((MR_hl_field(0, IntTag_7, (MR_Integer) 0))));
        MR_Word Var_19;

        Var_19 = parse_tree__builtin_lib_types__int_type_0_f_0();
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_5, Var_19);
        if (succeeded)
          {
            Const_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Const_8, 0) = ((MR_Box) (Int_9));
          }
        else
        {
          MR_Word Var_20;

          Var_20 = parse_tree__builtin_lib_types__char_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_5, Var_20);
          if (succeeded)
            {
              Const_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_8, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(3, Const_8, 1) = ((MR_Box) (Int_9));
            }
          else
            {
              Const_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_8, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Const_8, 1) = ((MR_Box) (Int_9));
              MR_hl_field(3, Const_8, 2) = ((MR_Box) (MLDS_Type_6));
            }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Unsigned UInt_10 = ((MR_Unsigned) ((MR_hl_field(1, IntTag_7, (MR_Integer) 0))));

        {
          Const_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Const_8, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Const_8, 1) = ((MR_Box) (UInt_10));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        int8_t Int8_11 = ((int8_t) (MR_Word) (MR_hl_field(2, IntTag_7, (MR_Integer) 0)));

        {
          Const_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Const_8, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Const_8, 1) = ((MR_Box) (MR_Word) (Int8_11));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, IntTag_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            uint8_t UInt8_12 = ((uint8_t) (MR_Word) (MR_hl_field(3, IntTag_7, (MR_Integer) 1)));

            {
              Const_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_8, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, Const_8, 1) = ((MR_Box) (MR_Word) (UInt8_12));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            int16_t Int16_13 = ((int16_t) (MR_Word) (MR_hl_field(3, IntTag_7, (MR_Integer) 1)));

            {
              Const_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_8, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, Const_8, 1) = ((MR_Box) (MR_Word) (Int16_13));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            uint16_t UInt16_14 = ((uint16_t) (MR_Word) (MR_hl_field(3, IntTag_7, (MR_Integer) 1)));

            {
              Const_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_8, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, Const_8, 1) = ((MR_Box) (MR_Word) (UInt16_14));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            int32_t Int32_15 = ((int32_t) (MR_Word) (MR_hl_field(3, IntTag_7, (MR_Integer) 1)));

            {
              Const_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_8, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, Const_8, 1) = ((MR_Box) (MR_Word) (Int32_15));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            uint32_t UInt32_16 = ((uint32_t) (MR_Word) (MR_hl_field(3, IntTag_7, (MR_Integer) 1)));

            {
              Const_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_8, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, Const_8, 1) = ((MR_Box) (MR_Word) (UInt32_16));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            int64_t Int64_17 = MR_unbox_int64((MR_hl_field(3, IntTag_7, (MR_Integer) 1)));

            {
              Const_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_8, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, Const_8, 1) = MR_box_int64(Int64_17);
            }
          }
          break;
        case (MR_Integer) 6:
          {
            uint64_t UInt64_18 = MR_unbox_uint64((MR_hl_field(3, IntTag_7, (MR_Integer) 1)));

            {
              Const_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_8, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, Const_8, 1) = MR_box_uint64(UInt64_18);
            }
          }
          break;
      }
      break;
  }
  return Const_8;
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
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_RevOrRvals_17;
  MR_Word conv1_STATE_VARIABLE_GroundTermMap_19;

  ml_backend__ml_unify_gen_construct__construct_ground_term_tagword_initializer_lld_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_RevOrRvals_17, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_GroundTermMap_19);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_RevOrRvals_17));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_GroundTermMap_19));
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_memory_cell__1456__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_memory_cell__1439__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_ground_term_memory_cell__1429__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = parse_tree__var_table__lookup_var_type_func_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word Target_17,
  MR_Word HighLevelData_18,
  MR_Word VarTable_19,
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
  MR_bool succeeded;
  MR_Word RHSVarsTypesWidths_29;
  MR_Word UsesBaseClass_30;
  MR_Word Ptag_31;
  MR_Word TagwordRHSRvals_34;
  MR_Word NonTagwordRHSVarsTypesWidths_35;
  MR_Word NonTagwordRHSRvalsTypesWidths_46;
  MR_Word GroundTerm_47;
  MR_Word Var_52;
  MR_Word STATE_VARIABLE_GroundTermMap_72_72;
  MR_Word STATE_VARIABLE_GlobalData_77_77;
  MR_Word STATE_VARIABLE_GroundTermMap_78_78;
  MR_Word Var_81;

  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_5[2]));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_1));
    MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_52, 3) = ((MR_Box) (VarTable_19));
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
        STATE_VARIABLE_GroundTermMap_72_72 = STATE_VARIABLE_GroundTermMap_0_50;
      }
      break;
    case (MR_Integer) 1:
      {
        Ptag_31 = ((MR_Word) ((MR_hl_field(1, RemoteArgsTagInfo_24, (MR_Integer) 0))));
        UsesBaseClass_30 = (MR_Integer) 0;
        TagwordRHSRvals_34 = (MR_Word) ((MR_Unsigned) 0U);
        NonTagwordRHSVarsTypesWidths_35 = RHSVarsTypesWidths_29;
        STATE_VARIABLE_GroundTermMap_72_72 = STATE_VARIABLE_GroundTermMap_0_50;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word RemoteSectag_36;
        MR_Unsigned SectagUint_37;
        MR_Word SectagSize_38;
        MR_Word TagwordRHSRval_40;
        MR_Word Var_60;
        MR_Word UsesConstructors_84;

        Ptag_31 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_24, (MR_Integer) 0))));
        RemoteSectag_36 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_24, (MR_Integer) 1))));
        UsesBaseClass_30 = (MR_Integer) 0;
        UsesConstructors_84 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_17);
        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_60, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[3]));
          MR_hl_field(0, Var_60, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_3));
          MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_60, 3) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(0, Var_60, 4) = ((MR_Box) (UsesConstructors_84));
        }
        mercury__require__expect_3_p_0(Var_60, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_memory_cell\'/15", (MR_String) "remote_args_shared but UsesConstructors = yes");
        SectagUint_37 = ((MR_Unsigned) ((MR_hl_field(0, RemoteSectag_36, (MR_Integer) 0))));
        SectagSize_38 = ((MR_Word) ((MR_hl_field(0, RemoteSectag_36, (MR_Integer) 1))));
        if ((SectagSize_38 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word SectagRval0_39;
          MR_Word Var_64;

          {
            Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_64, 1) = ((MR_Box) (SectagUint_37));
          }
          {
            SectagRval0_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, SectagRval0_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, SectagRval0_39, 1) = ((MR_Box) (Var_64));
          }
          switch (HighLevelData_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                TagwordRHSRval_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, TagwordRHSRval_40, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, TagwordRHSRval_40, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(3, TagwordRHSRval_40, 2) = ((MR_Box) (SectagRval0_39));
              }
              break;
            case (MR_Integer) 1:
              TagwordRHSRval_40 = SectagRval0_39;
              break;
          }
          NonTagwordRHSVarsTypesWidths_35 = RHSVarsTypesWidths_29;
          STATE_VARIABLE_GroundTermMap_72_72 = STATE_VARIABLE_GroundTermMap_0_50;
        }
        else
        {
          MR_Word TagwordRHSVarsTypesWidths_42;
          MR_Word RevToOrRvals_43;
          MR_Word ToOrRvals_44;
          MR_Word RawTagwordRHSRval_45;
          MR_Word Var_66;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Box conv4_RevToOrRvals_43;
          MR_Box conv3_STATE_VARIABLE_GroundTermMap_72_72;

          {
            Var_66 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_66, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[3]));
            MR_hl_field(0, Var_66, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_4));
            MR_hl_field(0, Var_66, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_66, 3) = ((MR_Box) (HighLevelData_18));
            MR_hl_field(0, Var_66, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_66, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_memory_cell\'/15", (MR_String) "HighLevelData = yes");
          ml_backend__ml_unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_116_97_107_101_95_116_97_103_119_111_114_100_95_97_114_103_115_95_116_121_112_101_95_119_105_100_116_104_115_95_95_91_49_93_95_48_3_p_0(RHSVarsTypesWidths_29, &TagwordRHSVarsTypesWidths_42, &NonTagwordRHSVarsTypesWidths_35);
          mercury__list__foldl2_6_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[3]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[4]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[2]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[10]), TagwordRHSVarsTypesWidths_42, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_RevToOrRvals_43, ((MR_Box) (STATE_VARIABLE_GroundTermMap_0_50)), &conv3_STATE_VARIABLE_GroundTermMap_72_72);
          RevToOrRvals_43 = ((MR_Word) (conv4_RevToOrRvals_43));
          STATE_VARIABLE_GroundTermMap_72_72 = ((MR_Word) (conv3_STATE_VARIABLE_GroundTermMap_72_72));
          mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevToOrRvals_43, &ToOrRvals_44);
          {
            Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_74, 1) = ((MR_Box) (SectagUint_37));
          }
          {
            Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_73, 1) = ((MR_Box) (Var_74));
          }
          RawTagwordRHSRval_45 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(Var_73, ToOrRvals_44);
          {
            TagwordRHSRval_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, TagwordRHSRval_40, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, TagwordRHSRval_40, 1) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(3, TagwordRHSRval_40, 2) = ((MR_Box) (RawTagwordRHSRval_45));
          }
        }
        {
          TagwordRHSRvals_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, TagwordRHSRvals_34, 0) = ((MR_Box) (TagwordRHSRval_40));
          MR_hl_field(1, TagwordRHSRvals_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word UsesConstructors_33;
        MR_Word Var_55;

        UsesBaseClass_30 = (MR_Integer) 0;
        UsesConstructors_33 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_17);
        {
          Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_55, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[3]));
          MR_hl_field(0, Var_55, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_ground_term_memory_cell_15_p_0_2));
          MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_55, 3) = ((MR_Box) (UsesConstructors_33));
          MR_hl_field(0, Var_55, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__require__expect_3_p_0(Var_55, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_ground_term_memory_cell\'/15", (MR_String) "remote_args_ctor but UsesConstructors = no");
        Ptag_31 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
        TagwordRHSRvals_34 = (MR_Word) ((MR_Unsigned) 0U);
        NonTagwordRHSVarsTypesWidths_35 = RHSVarsTypesWidths_29;
        STATE_VARIABLE_GroundTermMap_72_72 = STATE_VARIABLE_GroundTermMap_0_50;
      }
      break;
  }
  switch (HighLevelData_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ml_backend__ml_unify_gen_construct__construct_ground_term_initializers_lld_8_p_0(ModuleInfo_16, Context_26, NonTagwordRHSVarsTypesWidths_35, &NonTagwordRHSRvalsTypesWidths_46, STATE_VARIABLE_GlobalData_0_48, &STATE_VARIABLE_GlobalData_77_77, STATE_VARIABLE_GroundTermMap_72_72, &STATE_VARIABLE_GroundTermMap_78_78);
      break;
    case (MR_Integer) 1:
      ml_backend__ml_unify_gen_construct__construct_ground_term_initializers_hld_8_p_0(ModuleInfo_16, Context_26, NonTagwordRHSVarsTypesWidths_35, &NonTagwordRHSRvalsTypesWidths_46, STATE_VARIABLE_GlobalData_0_48, &STATE_VARIABLE_GlobalData_77_77, STATE_VARIABLE_GroundTermMap_72_72, &STATE_VARIABLE_GroundTermMap_78_78);
      break;
  }
  {
    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_81, 0) = ((MR_Box) (ConsId_23));
  }
  ml_backend__ml_unify_gen_construct__construct_static_ground_term_14_p_0(ModuleInfo_16, Target_17, HighLevelData_18, Context_26, LHSType_21, LHS_MLDS_Type_22, Var_81, UsesBaseClass_30, Ptag_31, TagwordRHSRvals_34, NonTagwordRHSRvalsTypesWidths_46, &GroundTerm_47, STATE_VARIABLE_GlobalData_77_77, STATE_VARIABLE_GlobalData_49);
  mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (LHSVar_20)), ((MR_Box) (GroundTerm_47)), STATE_VARIABLE_GroundTermMap_78_78, STATE_VARIABLE_GroundTermMap_51);
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
    MR_Word ArgTypeWidth_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgsTypesWidths_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgPosWidth_10 = ((MR_Word) ((MR_hl_field(0, ArgTypeWidth_4, (MR_Integer) 2))));

    switch (MR_tag((MR_Word) ArgPosWidth_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          *HeadVar__3_3 = HeadVar__1_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_10, (MR_Integer) 0))))) {
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
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (ArgTypeWidth_4));
                MR_hl_field(1, base, 1) = ((MR_Box) (TailTagwordArgsTypesWidths_19));
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
    MR_Word RHSVarTypeWidth_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word RHSVarsTypesWidths_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word RHSRvalTypeWidth_21;
    MR_Word RHSRvalsTypesWidths_22;
    MR_Word STATE_VARIABLE_GlobalData_29_29;
    MR_Word STATE_VARIABLE_GroundTermMap_30_30;
    MR_Word RHSVar_31 = ((MR_Word) ((MR_hl_field(0, RHSVarTypeWidth_19, (MR_Integer) 0))));
    MR_Word ArgPosWidth_33 = ((MR_Word) ((MR_hl_field(0, RHSVarTypeWidth_19, (MR_Integer) 2))));
    MR_Word RHSGroundTerm_34;
    MR_Word RHSRval0_35;
    MR_Word RHS_MLDS_Type_37;
    MR_Word ArgWidth_38;
    MR_Word RHSRval_39;
    MR_Box conv0_RHSGroundTerm_34;

    mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (RHSVar_31)), &conv0_RHSGroundTerm_34, STATE_VARIABLE_GroundTermMap_0_7, &STATE_VARIABLE_GroundTermMap_30_30);
    RHSGroundTerm_34 = ((MR_Word) (conv0_RHSGroundTerm_34));
    RHSRval0_35 = ((MR_Word) ((MR_hl_field(0, RHSGroundTerm_34, (MR_Integer) 0))));
    RHS_MLDS_Type_37 = ((MR_Word) ((MR_hl_field(0, RHSGroundTerm_34, (MR_Integer) 2))));
    ArgWidth_38 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_33);
    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_1, Context_2, RHS_MLDS_Type_37, ArgWidth_38, RHSRval0_35, &RHSRval_39, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_29_29);
    {
      RHSRvalTypeWidth_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, RHSRvalTypeWidth_21, 0) = ((MR_Box) (RHSRval_39));
      MR_hl_field(0, RHSRvalTypeWidth_21, 1) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(0, RHSRvalTypeWidth_21, 2) = ((MR_Box) (ArgPosWidth_33));
    }
    ml_backend__ml_unify_gen_construct__construct_ground_term_initializers_lld_8_p_0(ModuleInfo_1, Context_2, RHSVarsTypesWidths_20, &RHSRvalsTypesWidths_22, STATE_VARIABLE_GlobalData_29_29, STATE_VARIABLE_GlobalData_6, STATE_VARIABLE_GroundTermMap_30_30, STATE_VARIABLE_GroundTermMap_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (RHSRvalTypeWidth_21));
      MR_hl_field(1, base, 1) = ((MR_Box) (RHSRvalsTypesWidths_22));
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
    MR_Word RHSVarTypeWidth_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word RHSVarsTypesWidths_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word RHSRvalTypeWidth_21;
    MR_Word RHSRvalsTypesWidths_22;
    MR_Word STATE_VARIABLE_GlobalData_29_29;
    MR_Word STATE_VARIABLE_GroundTermMap_30_30;
    MR_Word RHSVar_31 = ((MR_Word) ((MR_hl_field(0, RHSVarTypeWidth_19, (MR_Integer) 0))));
    MR_Word ConsArgType_32 = ((MR_Word) ((MR_hl_field(0, RHSVarTypeWidth_19, (MR_Integer) 1))));
    MR_Word ArgPosWidth_33 = ((MR_Word) ((MR_hl_field(0, RHSVarTypeWidth_19, (MR_Integer) 2))));
    MR_Word RHSGroundTerm_34;
    MR_Word RHSRval0_35;
    MR_Word RHSType_36;
    MR_Word ArgWidth_38;
    MR_Word BoxedRHSType_39;
    MR_Word RHSRval_40;
    MR_Box conv0_RHSGroundTerm_34;

    mercury__map__det_remove_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ((MR_Box) (RHSVar_31)), &conv0_RHSGroundTerm_34, STATE_VARIABLE_GroundTermMap_0_7, &STATE_VARIABLE_GroundTermMap_30_30);
    RHSGroundTerm_34 = ((MR_Word) (conv0_RHSGroundTerm_34));
    RHSRval0_35 = ((MR_Word) ((MR_hl_field(0, RHSGroundTerm_34, (MR_Integer) 0))));
    RHSType_36 = ((MR_Word) ((MR_hl_field(0, RHSGroundTerm_34, (MR_Integer) 1))));
    ArgWidth_38 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_33);
    ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_1, (MR_Integer) 1, ConsArgType_32, ArgWidth_38, &BoxedRHSType_39);
    switch (MR_tag((MR_Word) BoxedRHSType_39)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word MLDS_ArgType_47;

          MLDS_ArgType_47 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_1, RHSType_36);
          ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_1, Context_2, MLDS_ArgType_47, (MR_Integer) 2, RHSRval0_35, &RHSRval_40, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_29_29);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_1, RHSType_36, BoxedRHSType_39, (MR_Integer) 0, RHSRval0_35, &RHSRval_40);
          STATE_VARIABLE_GlobalData_29_29 = STATE_VARIABLE_GlobalData_0_5;
        }
        break;
    }
    {
      RHSRvalTypeWidth_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, RHSRvalTypeWidth_21, 0) = ((MR_Box) (RHSRval_40));
      MR_hl_field(0, RHSRvalTypeWidth_21, 1) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(0, RHSRvalTypeWidth_21, 2) = ((MR_Box) (ArgPosWidth_33));
    }
    ml_backend__ml_unify_gen_construct__construct_ground_term_initializers_hld_8_p_0(ModuleInfo_1, Context_2, RHSVarsTypesWidths_20, &RHSRvalsTypesWidths_22, STATE_VARIABLE_GlobalData_29_29, STATE_VARIABLE_GlobalData_6, STATE_VARIABLE_GroundTermMap_30_30, STATE_VARIABLE_GroundTermMap_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (RHSRvalTypeWidth_21));
      MR_hl_field(1, base, 1) = ((MR_Box) (RHSRvalsTypesWidths_22));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_16(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__225__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_15(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__237__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_14(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__14_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_13(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__13_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_12(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__12_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_11(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__11_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_10(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__10_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_9(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__9_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_8(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__8_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_7(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__7_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_6(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__6_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_5(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__5_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__4_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__3_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__2_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construction_unification__142__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
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
  MR_Word STATE_VARIABLE_Info_0_98,
  MR_Word * STATE_VARIABLE_Info_99)
{
  MR_bool succeeded;
  MR_Word ConsTag_22;

  ml_backend__ml_unify_gen_util__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_98, ConsId_13, &ConsTag_22);
  switch (MR_tag((MR_Word) ConsTag_22)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ConsTag_22)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word VarTable_194;
            MR_Word LHSVarEntry_195;
            MR_Word LHSType_196;
            MR_Word LHSLval_197;
            MR_Word ModuleInfo_198;
            MR_Word LHS_MLDS_Type_199;
            MR_Word ConstRval_200;
            MR_Word GroundTerm_201;
            MR_Word Stmt_202;
            MR_Word Var_203;

            {
              Var_203 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_203, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
              MR_hl_field(0, Var_203, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_3));
              MR_hl_field(0, Var_203, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_203, 3) = ((MR_Box) (RHSVars_14));
              MR_hl_field(0, Var_203, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_203, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "constant has arguments");
            ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_98, &VarTable_194);
            parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_194, LHSVar_12, &LHSVarEntry_195);
            LHSType_196 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_195, (MR_Integer) 1))));
            ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_98, LHSVar_12, LHSVarEntry_195, &LHSLval_197);
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_98, &ModuleInfo_198);
            LHS_MLDS_Type_199 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_198, LHSType_196);
            ConstRval_200 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_3[0]), LHSType_196, LHS_MLDS_Type_199);
            {
              GroundTerm_201 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, GroundTerm_201, 0) = ((MR_Box) (ConstRval_200));
              MR_hl_field(0, GroundTerm_201, 1) = ((MR_Box) (LHSType_196));
              MR_hl_field(0, GroundTerm_201, 2) = ((MR_Box) (LHS_MLDS_Type_199));
            }
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_12, GroundTerm_201, STATE_VARIABLE_Info_0_98, STATE_VARIABLE_Info_99);
            Stmt_202 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_197, ConstRval_200, Context_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_20 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_202));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_131;

            {
              Var_131 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_131, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[8]));
              MR_hl_field(0, Var_131, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_15));
              MR_hl_field(0, Var_131, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_131, 3) = ((MR_Box) (TakeAddr_16));
              MR_hl_field(0, Var_131, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_131, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "notag or direct_arg_tag: take_addr");
            ml_backend__ml_unify_gen_construct__ml_genenate_construct_notag_direct_arg_8_p_0(LHSVar_12, ConsTag_22, RHSVars_14, ArgModes_15, Context_18, Stmts_20, STATE_VARIABLE_Info_0_98, STATE_VARIABLE_Info_99);
            *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word IntTag_53;
        MR_Word VarTable_278;
        MR_Word LHSVarEntry_279;
        MR_Word LHSType_280;
        MR_Word LHSLval_281;
        MR_Word ModuleInfo_282;
        MR_Word LHS_MLDS_Type_283;
        MR_Word ConstRval_284;
        MR_Word GroundTerm_285;
        MR_Word Stmt_286;
        MR_Word Var_287;

        {
          Var_287 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_287, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
          MR_hl_field(0, Var_287, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_7));
          MR_hl_field(0, Var_287, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_287, 3) = ((MR_Box) (RHSVars_14));
          MR_hl_field(0, Var_287, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_287, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "constant has arguments");
        ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_98, &VarTable_278);
        parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_278, LHSVar_12, &LHSVarEntry_279);
        LHSType_280 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_279, (MR_Integer) 1))));
        ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_98, LHSVar_12, LHSVarEntry_279, &LHSLval_281);
        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_98, &ModuleInfo_282);
        LHS_MLDS_Type_283 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_282, LHSType_280);
        IntTag_53 = ((MR_Word) ((MR_hl_field(1, ConsTag_22, (MR_Integer) 0))));
        ConstRval_284 = ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(IntTag_53, LHSType_280, LHS_MLDS_Type_283);
        {
          GroundTerm_285 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, GroundTerm_285, 0) = ((MR_Box) (ConstRval_284));
          MR_hl_field(0, GroundTerm_285, 1) = ((MR_Box) (LHSType_280));
          MR_hl_field(0, GroundTerm_285, 2) = ((MR_Box) (LHS_MLDS_Type_283));
        }
        ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_12, GroundTerm_285, STATE_VARIABLE_Info_0_98, STATE_VARIABLE_Info_99);
        Stmt_286 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_281, ConstRval_284, Context_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_20 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_286));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Float Float_55;
        MR_Word Var_104;
        MR_Word VarTable_215;
        MR_Word LHSVarEntry_216;
        MR_Word LHSType_217;
        MR_Word LHSLval_218;
        MR_Word ModuleInfo_219;
        MR_Word LHS_MLDS_Type_220;
        MR_Word ConstRval_221;
        MR_Word GroundTerm_222;
        MR_Word Stmt_223;
        MR_Word Var_224;

        {
          Var_224 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_224, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
          MR_hl_field(0, Var_224, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_4));
          MR_hl_field(0, Var_224, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_224, 3) = ((MR_Box) (RHSVars_14));
          MR_hl_field(0, Var_224, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_224, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "constant has arguments");
        ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_98, &VarTable_215);
        parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_215, LHSVar_12, &LHSVarEntry_216);
        LHSType_217 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_216, (MR_Integer) 1))));
        ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_98, LHSVar_12, LHSVarEntry_216, &LHSLval_218);
        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_98, &ModuleInfo_219);
        LHS_MLDS_Type_220 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_219, LHSType_217);
        Float_55 = MR_unbox_float((MR_hl_field(2, ConsTag_22, (MR_Integer) 0)));
        {
          Var_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_104, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_104, 1) = MR_box_float(Float_55);
        }
        {
          ConstRval_221 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ConstRval_221, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, ConstRval_221, 1) = ((MR_Box) (Var_104));
        }
        {
          GroundTerm_222 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, GroundTerm_222, 0) = ((MR_Box) (ConstRval_221));
          MR_hl_field(0, GroundTerm_222, 1) = ((MR_Box) (LHSType_217));
          MR_hl_field(0, GroundTerm_222, 2) = ((MR_Box) (LHS_MLDS_Type_220));
        }
        ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_12, GroundTerm_222, STATE_VARIABLE_Info_0_98, STATE_VARIABLE_Info_99);
        Stmt_223 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_218, ConstRval_221, Context_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_20 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_223));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String String_56;
            MR_Word Var_105;
            MR_Word VarTable_320;
            MR_Word LHSVarEntry_321;
            MR_Word LHSType_322;
            MR_Word LHSLval_323;
            MR_Word ModuleInfo_324;
            MR_Word LHS_MLDS_Type_325;
            MR_Word ConstRval_326;
            MR_Word GroundTerm_327;
            MR_Word Stmt_328;
            MR_Word Var_329;

            {
              Var_329 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_329, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
              MR_hl_field(0, Var_329, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_9));
              MR_hl_field(0, Var_329, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_329, 3) = ((MR_Box) (RHSVars_14));
              MR_hl_field(0, Var_329, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_329, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "constant has arguments");
            ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_98, &VarTable_320);
            parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_320, LHSVar_12, &LHSVarEntry_321);
            LHSType_322 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_321, (MR_Integer) 1))));
            ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_98, LHSVar_12, LHSVarEntry_321, &LHSLval_323);
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_98, &ModuleInfo_324);
            LHS_MLDS_Type_325 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_324, LHSType_322);
            String_56 = ((MR_String) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 1))));
            {
              Var_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_105, 0) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(3, Var_105, 1) = ((MR_Box) (String_56));
            }
            {
              ConstRval_326 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConstRval_326, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, ConstRval_326, 1) = ((MR_Box) (Var_105));
            }
            {
              GroundTerm_327 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, GroundTerm_327, 0) = ((MR_Box) (ConstRval_326));
              MR_hl_field(0, GroundTerm_327, 1) = ((MR_Box) (LHSType_322));
              MR_hl_field(0, GroundTerm_327, 2) = ((MR_Box) (LHS_MLDS_Type_325));
            }
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_12, GroundTerm_327, STATE_VARIABLE_Info_0_98, STATE_VARIABLE_Info_99);
            Stmt_328 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_323, ConstRval_326, Context_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_20 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_328));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ForeignLang_57;
            MR_String ForeignTag_58;
            MR_Word Var_106;
            MR_Word VarTable_236;
            MR_Word LHSVarEntry_237;
            MR_Word LHSType_238;
            MR_Word LHSLval_239;
            MR_Word ModuleInfo_240;
            MR_Word LHS_MLDS_Type_241;
            MR_Word ConstRval_242;
            MR_Word GroundTerm_243;
            MR_Word Stmt_244;
            MR_Word Var_245;

            {
              Var_245 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_245, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
              MR_hl_field(0, Var_245, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_5));
              MR_hl_field(0, Var_245, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_245, 3) = ((MR_Box) (RHSVars_14));
              MR_hl_field(0, Var_245, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_245, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "constant has arguments");
            ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_98, &VarTable_236);
            parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_236, LHSVar_12, &LHSVarEntry_237);
            LHSType_238 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_237, (MR_Integer) 1))));
            ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_98, LHSVar_12, LHSVarEntry_237, &LHSLval_239);
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_98, &ModuleInfo_240);
            LHS_MLDS_Type_241 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_240, LHSType_238);
            ForeignLang_57 = ((MR_Unsigned) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 1))) & (MR_Integer) 3);
            ForeignTag_58 = ((MR_String) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 2))));
            {
              Var_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_106, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(3, Var_106, 1) = (MR_Box) ((MR_Unsigned) (ForeignLang_57));
              MR_hl_field(3, Var_106, 2) = ((MR_Box) (ForeignTag_58));
              MR_hl_field(3, Var_106, 3) = ((MR_Box) (LHS_MLDS_Type_241));
            }
            {
              ConstRval_242 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConstRval_242, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, ConstRval_242, 1) = ((MR_Box) (Var_106));
            }
            {
              GroundTerm_243 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, GroundTerm_243, 0) = ((MR_Box) (ConstRval_242));
              MR_hl_field(0, GroundTerm_243, 1) = ((MR_Box) (LHSType_238));
              MR_hl_field(0, GroundTerm_243, 2) = ((MR_Box) (LHS_MLDS_Type_241));
            }
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_12, GroundTerm_243, STATE_VARIABLE_Info_0_98, STATE_VARIABLE_Info_99);
            Stmt_244 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_239, ConstRval_242, Context_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_20 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_244));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word LocalSectag_60;
            MR_Unsigned PrimSec_63;
            MR_Word Var_109;
            MR_Word Var_110;
            MR_Word VarTable_299;
            MR_Word LHSVarEntry_300;
            MR_Word LHSType_301;
            MR_Word LHSLval_302;
            MR_Word ModuleInfo_303;
            MR_Word LHS_MLDS_Type_304;
            MR_Word ConstRval_305;
            MR_Word GroundTerm_306;
            MR_Word Stmt_307;
            MR_Word Var_308;

            {
              Var_308 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_308, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
              MR_hl_field(0, Var_308, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_8));
              MR_hl_field(0, Var_308, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_308, 3) = ((MR_Box) (RHSVars_14));
              MR_hl_field(0, Var_308, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_308, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "constant has arguments");
            ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_98, &VarTable_299);
            parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_299, LHSVar_12, &LHSVarEntry_300);
            LHSType_301 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_300, (MR_Integer) 1))));
            ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_98, LHSVar_12, LHSVarEntry_300, &LHSLval_302);
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_98, &ModuleInfo_303);
            LHS_MLDS_Type_304 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_303, LHSType_301);
            LocalSectag_60 = ((MR_Word) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 2))));
            PrimSec_63 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_60, (MR_Integer) 1))));
            {
              Var_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_110, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_110, 1) = ((MR_Box) (PrimSec_63));
            }
            {
              Var_109 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_109, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_109, 1) = ((MR_Box) (Var_110));
            }
            {
              ConstRval_305 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConstRval_305, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, ConstRval_305, 1) = ((MR_Box) (LHS_MLDS_Type_304));
              MR_hl_field(3, ConstRval_305, 2) = ((MR_Box) (Var_109));
            }
            {
              GroundTerm_306 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, GroundTerm_306, 0) = ((MR_Box) (ConstRval_305));
              MR_hl_field(0, GroundTerm_306, 1) = ((MR_Box) (LHSType_301));
              MR_hl_field(0, GroundTerm_306, 2) = ((MR_Box) (LHS_MLDS_Type_304));
            }
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_12, GroundTerm_306, STATE_VARIABLE_Info_0_98, STATE_VARIABLE_Info_99);
            Stmt_307 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_302, ConstRval_305, Context_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_20 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_307));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Integer ConstNum_65;
            MR_Word ConstStructMap_67;
            MR_Word GroundTerm0_68;
            MR_Word VarTable_257;
            MR_Word LHSVarEntry_258;
            MR_Word LHSType_259;
            MR_Word LHSLval_260;
            MR_Word ModuleInfo_261;
            MR_Word LHS_MLDS_Type_262;
            MR_Word ConstRval_263;
            MR_Word GroundTerm_264;
            MR_Word Stmt_265;
            MR_Word Var_266;
            MR_Box conv0_GroundTerm0_68;

            {
              Var_266 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_266, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
              MR_hl_field(0, Var_266, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_6));
              MR_hl_field(0, Var_266, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_266, 3) = ((MR_Box) (RHSVars_14));
              MR_hl_field(0, Var_266, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_266, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "constant has arguments");
            ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_98, &VarTable_257);
            parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_257, LHSVar_12, &LHSVarEntry_258);
            LHSType_259 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_258, (MR_Integer) 1))));
            ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_98, LHSVar_12, LHSVarEntry_258, &LHSLval_260);
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_98, &ModuleInfo_261);
            LHS_MLDS_Type_262 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_261, LHSType_259);
            ConstNum_65 = ((MR_Integer) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 1))));
            ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_98, &ConstStructMap_67);
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_67, ConstNum_65, &conv0_GroundTerm0_68);
            GroundTerm0_68 = ((MR_Word) (conv0_GroundTerm0_68));
            ConstRval_263 = ((MR_Word) ((MR_hl_field(0, GroundTerm0_68, (MR_Integer) 0))));
            {
              GroundTerm_264 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, GroundTerm_264, 0) = ((MR_Box) (ConstRval_263));
              MR_hl_field(0, GroundTerm_264, 1) = ((MR_Box) (LHSType_259));
              MR_hl_field(0, GroundTerm_264, 2) = ((MR_Box) (LHS_MLDS_Type_262));
            }
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_12, GroundTerm_264, STATE_VARIABLE_Info_0_98, STATE_VARIABLE_Info_99);
            Stmt_265 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_260, ConstRval_263, Context_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_20 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_265));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Integer ConstNum_153;
            MR_Word ConstStructMap_154;
            MR_Word GroundTerm0_155;
            MR_Word VarTable_404;
            MR_Word LHSVarEntry_405;
            MR_Word LHSType_406;
            MR_Word LHSLval_407;
            MR_Word ModuleInfo_408;
            MR_Word LHS_MLDS_Type_409;
            MR_Word ConstRval_410;
            MR_Word GroundTerm_411;
            MR_Word Stmt_412;
            MR_Word Var_413;
            MR_Box conv1_GroundTerm0_155;

            {
              Var_413 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_413, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
              MR_hl_field(0, Var_413, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_13));
              MR_hl_field(0, Var_413, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_413, 3) = ((MR_Box) (RHSVars_14));
              MR_hl_field(0, Var_413, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_413, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "constant has arguments");
            ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_98, &VarTable_404);
            parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_404, LHSVar_12, &LHSVarEntry_405);
            LHSType_406 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_405, (MR_Integer) 1))));
            ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_98, LHSVar_12, LHSVarEntry_405, &LHSLval_407);
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_98, &ModuleInfo_408);
            LHS_MLDS_Type_409 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_408, LHSType_406);
            ConstNum_153 = ((MR_Integer) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 1))));
            ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_98, &ConstStructMap_154);
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_154, ConstNum_153, &conv1_GroundTerm0_155);
            GroundTerm0_155 = ((MR_Word) (conv1_GroundTerm0_155));
            ConstRval_410 = ((MR_Word) ((MR_hl_field(0, GroundTerm0_155, (MR_Integer) 0))));
            {
              GroundTerm_411 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, GroundTerm_411, 0) = ((MR_Box) (ConstRval_410));
              MR_hl_field(0, GroundTerm_411, 1) = ((MR_Box) (LHSType_406));
              MR_hl_field(0, GroundTerm_411, 2) = ((MR_Box) (LHS_MLDS_Type_409));
            }
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_12, GroundTerm_411, STATE_VARIABLE_Info_0_98, STATE_VARIABLE_Info_99);
            Stmt_412 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_407, ConstRval_410, Context_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_20 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_412));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Integer ConstNum_162;
            MR_Word ConstStructMap_163;
            MR_Word GroundTerm0_164;
            MR_Word VarTable_425;
            MR_Word LHSVarEntry_426;
            MR_Word LHSType_427;
            MR_Word LHSLval_428;
            MR_Word ModuleInfo_429;
            MR_Word LHS_MLDS_Type_430;
            MR_Word ConstRval_431;
            MR_Word GroundTerm_432;
            MR_Word Stmt_433;
            MR_Word Var_434;
            MR_Box conv2_GroundTerm0_164;

            {
              Var_434 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_434, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
              MR_hl_field(0, Var_434, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_14));
              MR_hl_field(0, Var_434, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_434, 3) = ((MR_Box) (RHSVars_14));
              MR_hl_field(0, Var_434, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_434, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "constant has arguments");
            ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_98, &VarTable_425);
            parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_425, LHSVar_12, &LHSVarEntry_426);
            LHSType_427 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_426, (MR_Integer) 1))));
            ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_98, LHSVar_12, LHSVarEntry_426, &LHSLval_428);
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_98, &ModuleInfo_429);
            LHS_MLDS_Type_430 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_429, LHSType_427);
            ConstNum_162 = ((MR_Integer) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 1))));
            ml_backend__ml_gen_info__ml_gen_info_get_const_struct_map_2_p_0(STATE_VARIABLE_Info_0_98, &ConstStructMap_163);
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), ConstStructMap_163, ConstNum_162, &conv2_GroundTerm0_164);
            GroundTerm0_164 = ((MR_Word) (conv2_GroundTerm0_164));
            ConstRval_431 = ((MR_Word) ((MR_hl_field(0, GroundTerm0_164, (MR_Integer) 0))));
            {
              GroundTerm_432 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, GroundTerm_432, 0) = ((MR_Box) (ConstRval_431));
              MR_hl_field(0, GroundTerm_432, 1) = ((MR_Box) (LHSType_427));
              MR_hl_field(0, GroundTerm_432, 2) = ((MR_Box) (LHS_MLDS_Type_430));
            }
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_12, GroundTerm_432, STATE_VARIABLE_Info_0_98, STATE_VARIABLE_Info_99);
            Stmt_433 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_428, ConstRval_431, Context_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_20 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_433));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ModuleName0_71;
            MR_String TypeName_72;
            MR_Integer TypeArity_73;
            MR_Word ModuleName_74;
            MR_Word MLDS_Module_75;
            MR_Word RttiTypeCtor_76;
            MR_Word RttiId_77;
            MR_Word Const_78;
            uint16_t Var_111;
            MR_Word Var_113;
            MR_Word VarTable_383;
            MR_Word LHSVarEntry_384;
            MR_Word LHSType_385;
            MR_Word LHSLval_386;
            MR_Word ModuleInfo_387;
            MR_Word LHS_MLDS_Type_388;
            MR_Word ConstRval_389;
            MR_Word GroundTerm_390;
            MR_Word Stmt_391;
            MR_Word Var_392;

            {
              Var_392 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_392, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
              MR_hl_field(0, Var_392, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_12));
              MR_hl_field(0, Var_392, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_392, 3) = ((MR_Box) (RHSVars_14));
              MR_hl_field(0, Var_392, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_392, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "constant has arguments");
            ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_98, &VarTable_383);
            parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_383, LHSVar_12, &LHSVarEntry_384);
            LHSType_385 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_384, (MR_Integer) 1))));
            ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_98, LHSVar_12, LHSVarEntry_384, &LHSLval_386);
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_98, &ModuleInfo_387);
            LHS_MLDS_Type_388 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_387, LHSType_385);
            ModuleName0_71 = ((MR_Word) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 1))));
            TypeName_72 = ((MR_String) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 2))));
            TypeArity_73 = ((MR_Integer) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 3))));
            ModuleName_74 = ml_backend__ml_code_util__fixup_builtin_module_1_f_0(ModuleName0_71);
            MLDS_Module_75 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_74);
            Var_111 = mercury__uint16__det_from_int_1_f_0(TypeArity_73);
            {
              RttiTypeCtor_76 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, RttiTypeCtor_76, 0) = ((MR_Box) (ModuleName_74));
              MR_hl_field(0, RttiTypeCtor_76, 1) = ((MR_Box) (TypeName_72));
              MR_hl_field(0, RttiTypeCtor_76, 2) = ((MR_Box) (MR_Word) (Var_111));
            }
            {
              RttiId_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, RttiId_77, 0) = ((MR_Box) (RttiTypeCtor_76));
              MR_hl_field(0, RttiId_77, 1) = ((MR_Box) ((MR_Unsigned) 44U));
            }
            {
              Const_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_78, 0) = ((MR_Box) ((MR_Unsigned) 18U));
              MR_hl_field(3, Const_78, 1) = ((MR_Box) (MLDS_Module_75));
              MR_hl_field(3, Const_78, 2) = ((MR_Box) (RttiId_77));
            }
            {
              Var_113 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_113, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_113, 1) = ((MR_Box) (Const_78));
            }
            {
              ConstRval_389 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConstRval_389, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, ConstRval_389, 1) = ((MR_Box) (LHS_MLDS_Type_388));
              MR_hl_field(3, ConstRval_389, 2) = ((MR_Box) (Var_113));
            }
            {
              GroundTerm_390 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, GroundTerm_390, 0) = ((MR_Box) (ConstRval_389));
              MR_hl_field(0, GroundTerm_390, 1) = ((MR_Box) (LHSType_385));
              MR_hl_field(0, GroundTerm_390, 2) = ((MR_Box) (LHS_MLDS_Type_388));
            }
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_12, GroundTerm_390, STATE_VARIABLE_Info_0_98, STATE_VARIABLE_Info_99);
            Stmt_391 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_386, ConstRval_389, Context_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_20 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_391));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word VarTable_47;
            MR_Word LHSVarEntry_48;
            MR_Word LHSType_49;
            MR_Word LHSLval_50;
            MR_Word ModuleInfo_51;
            MR_Word LHS_MLDS_Type_52;
            MR_Word ConstRval_54;
            MR_Word ClassId_79;
            MR_String Instance_80;
            MR_Word TCName_81;
            MR_Word GroundTerm_92;
            MR_Word Stmt_93;
            MR_Word Var_100;
            MR_Word Var_114;
            MR_Word Var_115;
            MR_Word ModuleName_137;
            MR_Word MLDS_Module_138;
            MR_Word RttiId_139;
            MR_Word Const_140;

            {
              Var_100 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_100, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
              MR_hl_field(0, Var_100, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_1));
              MR_hl_field(0, Var_100, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_100, 3) = ((MR_Box) (RHSVars_14));
              MR_hl_field(0, Var_100, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_100, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "constant has arguments");
            ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_98, &VarTable_47);
            parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_47, LHSVar_12, &LHSVarEntry_48);
            LHSType_49 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_48, (MR_Integer) 1))));
            ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_98, LHSVar_12, LHSVarEntry_48, &LHSLval_50);
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_98, &ModuleInfo_51);
            LHS_MLDS_Type_52 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_51, LHSType_49);
            ModuleName_137 = ((MR_Word) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 1))));
            ClassId_79 = ((MR_Word) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 2))));
            Instance_80 = ((MR_String) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 3))));
            MLDS_Module_138 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_137);
            TCName_81 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_79);
            {
              Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_114, 0) = ((MR_Box) (ModuleName_137));
              MR_hl_field(1, Var_114, 1) = ((MR_Box) (Instance_80));
            }
            {
              RttiId_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, RttiId_139, 0) = ((MR_Box) (TCName_81));
              MR_hl_field(1, RttiId_139, 1) = ((MR_Box) (Var_114));
            }
            {
              Const_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_140, 0) = ((MR_Box) ((MR_Unsigned) 18U));
              MR_hl_field(3, Const_140, 1) = ((MR_Box) (MLDS_Module_138));
              MR_hl_field(3, Const_140, 2) = ((MR_Box) (RttiId_139));
            }
            {
              Var_115 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_115, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_115, 1) = ((MR_Box) (Const_140));
            }
            {
              ConstRval_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConstRval_54, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, ConstRval_54, 1) = ((MR_Box) (LHS_MLDS_Type_52));
              MR_hl_field(3, ConstRval_54, 2) = ((MR_Box) (Var_115));
            }
            {
              GroundTerm_92 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, GroundTerm_92, 0) = ((MR_Box) (ConstRval_54));
              MR_hl_field(0, GroundTerm_92, 1) = ((MR_Box) (LHSType_49));
              MR_hl_field(0, GroundTerm_92, 2) = ((MR_Box) (LHS_MLDS_Type_52));
            }
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_12, GroundTerm_92, STATE_VARIABLE_Info_0_98, STATE_VARIABLE_Info_99);
            Stmt_93 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_50, ConstRval_54, Context_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_20 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_93));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word VarTable_173;
            MR_Word LHSVarEntry_174;
            MR_Word LHSType_175;
            MR_Word ModuleInfo_177;
            MR_Word Var_182;
            MR_Word LHSLval_176;
            MR_Word LHS_MLDS_Type_178;

            {
              Var_182 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_182, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
              MR_hl_field(0, Var_182, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_2));
              MR_hl_field(0, Var_182, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_182, 3) = ((MR_Box) (RHSVars_14));
              MR_hl_field(0, Var_182, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_182, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "constant has arguments");
            ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_98, &VarTable_173);
            parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_173, LHSVar_12, &LHSVarEntry_174);
            LHSType_175 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_174, (MR_Integer) 1))));
            ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_98, LHSVar_12, LHSVarEntry_174, &LHSLval_176);
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_98, &ModuleInfo_177);
            LHS_MLDS_Type_178 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_177, LHSType_175);
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "deep_profiling_proc_layout_tag NYI");
              return;
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word PredId_84;
            MR_Integer ProcId_85;
            MR_Word PredLabel_86;
            MR_Word PredModule_87;
            MR_Word ProcLabel_88;
            MR_Word QualProcLabel_89;
            MR_Word Var_118;
            MR_Word Var_120;
            MR_Word Const_141;
            MR_Word VarTable_362;
            MR_Word LHSVarEntry_363;
            MR_Word LHSType_364;
            MR_Word LHSLval_365;
            MR_Word ModuleInfo_366;
            MR_Word LHS_MLDS_Type_367;
            MR_Word ConstRval_368;
            MR_Word GroundTerm_369;
            MR_Word Stmt_370;
            MR_Word Var_371;

            {
              Var_371 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_371, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
              MR_hl_field(0, Var_371, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_11));
              MR_hl_field(0, Var_371, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_371, 3) = ((MR_Box) (RHSVars_14));
              MR_hl_field(0, Var_371, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_371, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "constant has arguments");
            ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_98, &VarTable_362);
            parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_362, LHSVar_12, &LHSVarEntry_363);
            LHSType_364 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_363, (MR_Integer) 1))));
            ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_98, LHSVar_12, LHSVarEntry_363, &LHSLval_365);
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_98, &ModuleInfo_366);
            LHS_MLDS_Type_367 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_366, LHSType_364);
            PredId_84 = ((MR_Word) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 1))));
            ProcId_85 = ((MR_Integer) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 2))));
            {
              Var_118 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_118, 0) = ((MR_Box) (PredId_84));
              MR_hl_field(0, Var_118, 1) = ((MR_Box) (ProcId_85));
            }
            ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(ModuleInfo_366, Var_118, &PredLabel_86, &PredModule_87);
            {
              ProcLabel_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ProcLabel_88, 0) = ((MR_Box) (PredLabel_86));
              MR_hl_field(0, ProcLabel_88, 1) = ((MR_Box) (ProcId_85));
            }
            {
              QualProcLabel_89 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, QualProcLabel_89, 0) = ((MR_Box) (PredModule_87));
              MR_hl_field(0, QualProcLabel_89, 1) = ((MR_Box) (ProcLabel_88));
            }
            {
              Const_141 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_141, 0) = ((MR_Box) ((MR_Unsigned) 19U));
              MR_hl_field(3, Const_141, 1) = ((MR_Box) (QualProcLabel_89));
              MR_hl_field(3, Const_141, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_120 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_120, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_120, 1) = ((MR_Box) (Const_141));
            }
            {
              ConstRval_368 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConstRval_368, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, ConstRval_368, 1) = ((MR_Box) (LHS_MLDS_Type_367));
              MR_hl_field(3, ConstRval_368, 2) = ((MR_Box) (Var_120));
            }
            {
              GroundTerm_369 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, GroundTerm_369, 0) = ((MR_Box) (ConstRval_368));
              MR_hl_field(0, GroundTerm_369, 1) = ((MR_Box) (LHSType_364));
              MR_hl_field(0, GroundTerm_369, 2) = ((MR_Box) (LHS_MLDS_Type_367));
            }
            ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_12, GroundTerm_369, STATE_VARIABLE_Info_0_98, STATE_VARIABLE_Info_99);
            Stmt_370 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_365, ConstRval_368, Context_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_20 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_370));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word VarTable_341;
            MR_Word LHSVarEntry_342;
            MR_Word LHSType_343;
            MR_Word ModuleInfo_345;
            MR_Word Var_350;
            MR_Word LHSLval_344;
            MR_Word LHS_MLDS_Type_346;

            {
              Var_350 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_350, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[10]));
              MR_hl_field(0, Var_350, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_10));
              MR_hl_field(0, Var_350, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_350, 3) = ((MR_Box) (RHSVars_14));
              MR_hl_field(0, Var_350, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_350, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "constant has arguments");
            ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_98, &VarTable_341);
            parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_341, LHSVar_12, &LHSVarEntry_342);
            LHSType_343 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_342, (MR_Integer) 1))));
            ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_98, LHSVar_12, LHSVarEntry_342, &LHSLval_344);
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_98, &ModuleInfo_345);
            LHS_MLDS_Type_346 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_345, LHSType_343);
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "table_io_entry_tag NYI");
              return;
            }
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word RemoteArgsTagInfo_94 = ((MR_Word) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 1))));

            ml_backend__ml_unify_gen_construct__ml_generate_construct_compound_12_p_0(LHSVar_12, ConsId_13, RemoteArgsTagInfo_94, RHSVars_14, ArgModes_15, TakeAddr_16, HowToConstruct_17, Context_18, Defns_19, Stmts_20, STATE_VARIABLE_Info_0_98, STATE_VARIABLE_Info_99);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word LocalArgsTagInfo_95 = ((MR_Word) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 1))));
            MR_Word TagFilledBitfield_96;
            MR_Word Var_126;

            {
              Var_126 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_126, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[8]));
              MR_hl_field(0, Var_126, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_16));
              MR_hl_field(0, Var_126, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_126, 3) = ((MR_Box) (TakeAddr_16));
              MR_hl_field(0, Var_126, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_126, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "taking address of non word-sized argument");
            ml_backend__ml_unify_gen_util__local_primsectag_filled_bitfield_3_p_0(STATE_VARIABLE_Info_0_98, LocalArgsTagInfo_95, &TagFilledBitfield_96);
            ml_backend__ml_unify_gen_construct__ml_generate_construct_tagword_compound_10_p_0(ConsId_13, TagFilledBitfield_96, LHSVar_12, RHSVars_14, ArgModes_15, HowToConstruct_17, Context_18, Stmts_20, STATE_VARIABLE_Info_0_98, STATE_VARIABLE_Info_99);
            *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Var_131;

            {
              Var_131 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_131, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[8]));
              MR_hl_field(0, Var_131, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construction_unification_11_p_0_15));
              MR_hl_field(0, Var_131, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_131, 3) = ((MR_Box) (TakeAddr_16));
              MR_hl_field(0, Var_131, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_131, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construction_unification\'/11", (MR_String) "notag or direct_arg_tag: take_addr");
            ml_backend__ml_unify_gen_construct__ml_genenate_construct_notag_direct_arg_8_p_0(LHSVar_12, ConsTag_22, RHSVars_14, ArgModes_15, Context_18, Stmts_20, STATE_VARIABLE_Info_0_98, STATE_VARIABLE_Info_99);
            *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word PredId_142 = ((MR_Word) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 1))));
            MR_Integer ProcId_143 = ((MR_Integer) ((MR_hl_field(3, ConsTag_22, (MR_Integer) 2))));

            ml_backend__ml_closure_gen__ml_construct_closure_11_p_0(PredId_142, ProcId_143, LHSVar_12, RHSVars_14, ArgModes_15, HowToConstruct_17, Context_18, Defns_19, Stmts_20, STATE_VARIABLE_Info_0_98, STATE_VARIABLE_Info_99);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_genenate_construct_notag_direct_arg_8_p_0(
  MR_Word LHSVar_9,
  MR_Word ConsTag_10,
  MR_Word RHSVars_11,
  MR_Word ArgModes_12,
  MR_Word Context_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41)
{
  MR_bool succeeded;
  MR_Word RHSVar_16;
  MR_Word ArgMode_17;
  MR_Word VarTable_18;
  MR_Word LHSVarEntry_19;
  MR_Word LHSType_20;
  MR_Word LHSLval_21;
  MR_Word ModuleInfo_22;
  MR_Word LHS_MLDS_Type_23;
  MR_Box conv1_RHSVar_16;
  MR_Box conv0_ArgMode_17;
  MR_Word RHSGroundTerm_24;

  hlds__goal_form__get_notag_or_direct_arg_arg_mode_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), RHSVars_11, ArgModes_12, &conv1_RHSVar_16, &conv0_ArgMode_17);
  RHSVar_16 = ((MR_Word) (conv1_RHSVar_16));
  ArgMode_17 = ((MR_Word) (conv0_ArgMode_17));
  ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_40, &VarTable_18);
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_18, LHSVar_9, &LHSVarEntry_19);
  LHSType_20 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_19, (MR_Integer) 1))));
  ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_40, LHSVar_9, LHSVarEntry_19, &LHSLval_21);
  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_40, &ModuleInfo_22);
  LHS_MLDS_Type_23 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_22, LHSType_20);
  succeeded = ml_backend__ml_gen_info__ml_gen_info_search_const_var_3_p_0(STATE_VARIABLE_Info_0_40, RHSVar_16, &RHSGroundTerm_24);
  if (succeeded)
  {
    MR_Word RHSRval0_25 = ((MR_Word) ((MR_hl_field(0, RHSGroundTerm_24, (MR_Integer) 0))));
    MR_Word RHS_MLDS_Type_27 = ((MR_Word) ((MR_hl_field(0, RHSGroundTerm_24, (MR_Integer) 2))));
    MR_Word GlobalData0_28;
    MR_Word RHSRval_29;
    MR_Word GlobalData_30;
    MR_Word LHSRval_31;
    MR_Word LHSGroundTerm_32;
    MR_Word Stmt_33;
    MR_Word STATE_VARIABLE_Info_43_43;
    MR_Word ToCastRval_73;

    ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_40, &GlobalData0_28);
    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_22, Context_13, RHS_MLDS_Type_27, (MR_Integer) 2, RHSRval0_25, &RHSRval_29, GlobalData0_28, &GlobalData_30);
    ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_30, STATE_VARIABLE_Info_0_40, &STATE_VARIABLE_Info_43_43);
    if ((ConsTag_10 == (MR_Word) ((MR_Unsigned) 4U)))
      ToCastRval_73 = RHSRval_29;
    else
    {
      MR_Word Ptag_74 = ((MR_Word) ((MR_hl_field(3, ConsTag_10, (MR_Integer) 1))));
      uint8_t Var_75 = (uint8_t) (Ptag_74);

      succeeded = (Var_75 == UINT8_C(0));
      if (succeeded)
        ToCastRval_73 = RHSRval_29;
      else
        {
          ToCastRval_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ToCastRval_73, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, ToCastRval_73, 1) = ((MR_Box) (Ptag_74));
          MR_hl_field(3, ToCastRval_73, 2) = ((MR_Box) (RHSRval_29));
        }
    }
    {
      LHSRval_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, LHSRval_31, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, LHSRval_31, 1) = ((MR_Box) (LHS_MLDS_Type_23));
      MR_hl_field(3, LHSRval_31, 2) = ((MR_Box) (ToCastRval_73));
    }
    {
      LHSGroundTerm_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, LHSGroundTerm_32, 0) = ((MR_Box) (LHSRval_31));
      MR_hl_field(0, LHSGroundTerm_32, 1) = ((MR_Box) (LHSType_20));
      MR_hl_field(0, LHSGroundTerm_32, 2) = ((MR_Box) (LHS_MLDS_Type_23));
    }
    ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_9, LHSGroundTerm_32, STATE_VARIABLE_Info_43_43, STATE_VARIABLE_Info_41);
    Stmt_33 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_21, LHSRval_31, Context_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_33));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_Word RHSVarEntry_34;
    MR_Word RHSType_35;
    MR_Word RHSLval_36;
    MR_Word RHSRval_65;
    MR_Word Stmt_66;

    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_18, RHSVar_16, &RHSVarEntry_34);
    RHSType_35 = ((MR_Word) ((MR_hl_field(0, RHSVarEntry_34, (MR_Integer) 1))));
    ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_40, RHSVar_16, RHSVarEntry_34, &RHSLval_36);
    if ((ConsTag_10 == (MR_Word) ((MR_Unsigned) 4U)))
    {
      MR_Word RHSRval0_56;

      {
        RHSRval0_56 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, RHSRval0_56, 0) = ((MR_Box) (RHSLval_36));
      }
      ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_22, RHSType_35, LHSType_20, (MR_Integer) 0, RHSRval0_56, &RHSRval_65);
    }
    else
    {
      MR_Word Ptag_37 = ((MR_Word) ((MR_hl_field(3, ConsTag_10, (MR_Integer) 1))));
      MR_Word Dir_38;
      MR_Word RHSRval1_39;
      MR_Word RHSRval0_59;
      uint8_t Var_53;

      ml_backend__ml_unify_gen_util__ml_compute_assign_direction_5_p_0(ModuleInfo_22, ArgMode_17, LHSType_20, RHSVarEntry_34, &Dir_38);
      switch (Dir_38) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_genenate_construct_notag_direct_arg\'/8", (MR_String) "dummy unify");
            return;
          }
          break;
        case (MR_Integer) 0:
          {
            RHSRval0_59 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, RHSRval0_59, 0) = ((MR_Box) (RHSLval_36));
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_genenate_construct_notag_direct_arg\'/8", (MR_String) "left-to-right data flow in construction");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_49;
            MR_Word RHS_MLDS_Type_57;

            RHS_MLDS_Type_57 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_22, RHSType_35);
            {
              Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(3, Var_49, 1) = ((MR_Box) (RHS_MLDS_Type_57));
            }
            {
              RHSRval0_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, RHSRval0_59, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, RHSRval0_59, 1) = ((MR_Box) (Var_49));
            }
          }
          break;
      }
      ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_22, RHSType_35, LHSType_20, (MR_Integer) 0, RHSRval0_59, &RHSRval1_39);
      Var_53 = (uint8_t) (Ptag_37);
      succeeded = (Var_53 == UINT8_C(0));
      if (succeeded)
        {
          RHSRval_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, RHSRval_65, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, RHSRval_65, 1) = ((MR_Box) (LHS_MLDS_Type_23));
          MR_hl_field(3, RHSRval_65, 2) = ((MR_Box) (RHSRval1_39));
        }
      else
      {
        MR_Word Var_54;

        {
          Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_54, 1) = ((MR_Box) (Ptag_37));
          MR_hl_field(3, Var_54, 2) = ((MR_Box) (RHSRval1_39));
        }
        {
          RHSRval_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, RHSRval_65, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, RHSRval_65, 1) = ((MR_Box) (LHS_MLDS_Type_23));
          MR_hl_field(3, RHSRval_65, 2) = ((MR_Box) (Var_54));
        }
      }
    }
    Stmt_66 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_21, RHSRval_65, Context_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_66));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_Info_41 = STATE_VARIABLE_Info_0_40;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construct_tagword_compound_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = parse_tree__var_table__lookup_var_type_func_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construct_tagword_compound_10_p_0(
  MR_Word ConsId_11,
  MR_Word TagFilledBitfield_12,
  MR_Word LHSVar_13,
  MR_Word ArgVars_14,
  MR_Word ArgModes_15,
  MR_Word HowToConstruct_16,
  MR_Word Context_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  MR_Word ModuleInfo_20;
  MR_Word VarTable_21;
  MR_Word LHSVarEntry_22;
  MR_Word LHSType_23;
  MR_Word ArgVarsTypesWidths_24;
  MR_Word Var_40;

  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_38, &ModuleInfo_20);
  ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_38, &VarTable_21);
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_21, LHSVar_13, &LHSVarEntry_22);
  LHSType_23 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_22, (MR_Integer) 1))));
  {
    Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_40, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_5[2]));
    MR_hl_field(0, Var_40, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construct_tagword_compound_10_p_0_1));
    MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_40, 3) = ((MR_Box) (VarTable_21));
  }
  ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_1((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), ModuleInfo_20, Var_40, (MR_Integer) 0, LHSType_23, ConsId_11, ArgVars_14, &ArgVarsTypesWidths_24);
  switch (MR_tag((MR_Word) HowToConstruct_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RevArgFilledBitfields_25;
        MR_Word ArgFilledBitfields_28;
        MR_Word LHS_MLDS_Type_29;
        MR_Word TagwordRval_30;
        MR_Word CastTagwordRval_31;
        MR_Word LHSLval_32;
        MR_Word Stmt_33;

        ml_backend__ml_unify_gen_construct__ml_gen_tagword_dynamically_5_p_0(STATE_VARIABLE_Info_0_38, ArgVarsTypesWidths_24, ArgModes_15, (MR_Word) ((MR_Unsigned) 0U), &RevArgFilledBitfields_25);
        mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), RevArgFilledBitfields_25, &ArgFilledBitfields_28);
        LHS_MLDS_Type_29 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_20, LHSType_23);
        ml_backend__ml_unify_gen_construct__filled_bitfields_to_packed_word_5_p_0(STATE_VARIABLE_Info_0_38, (MR_Integer) 1, TagFilledBitfield_12, ArgFilledBitfields_28, &TagwordRval_30);
        {
          CastTagwordRval_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, CastTagwordRval_31, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, CastTagwordRval_31, 1) = ((MR_Box) (LHS_MLDS_Type_29));
          MR_hl_field(3, CastTagwordRval_31, 2) = ((MR_Box) (TagwordRval_30));
        }
        ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_38, LHSVar_13, LHSVarEntry_22, &LHSLval_32);
        Stmt_33 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_32, CastTagwordRval_31, Context_17);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_18 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_33));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_0_38;
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construct_tagword_compound\'/10", (MR_String) "reuse_cell");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word GroundTerm_35;
        MR_Word RevArgFilledBitfields_56;
        MR_Word ArgFilledBitfields_58;
        MR_Word LHS_MLDS_Type_59;
        MR_Word TagwordRval_60;
        MR_Word CastTagwordRval_61;
        MR_Word LHSLval_62;
        MR_Word Stmt_63;

        ml_backend__ml_unify_gen_construct__ml_gen_tagword_statically_4_p_0(STATE_VARIABLE_Info_0_38, ArgVarsTypesWidths_24, (MR_Word) ((MR_Unsigned) 0U), &RevArgFilledBitfields_56);
        mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), RevArgFilledBitfields_56, &ArgFilledBitfields_58);
        LHS_MLDS_Type_59 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_20, LHSType_23);
        ml_backend__ml_unify_gen_construct__filled_bitfields_to_packed_word_5_p_0(STATE_VARIABLE_Info_0_38, (MR_Integer) 0, TagFilledBitfield_12, ArgFilledBitfields_58, &TagwordRval_60);
        {
          CastTagwordRval_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, CastTagwordRval_61, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, CastTagwordRval_61, 1) = ((MR_Box) (LHS_MLDS_Type_59));
          MR_hl_field(3, CastTagwordRval_61, 2) = ((MR_Box) (TagwordRval_60));
        }
        ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_38, LHSVar_13, LHSVarEntry_22, &LHSLval_62);
        Stmt_63 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_62, CastTagwordRval_61, Context_17);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_18 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_63));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          GroundTerm_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, GroundTerm_35, 0) = ((MR_Box) (CastTagwordRval_61));
          MR_hl_field(0, GroundTerm_35, 1) = ((MR_Box) (LHSType_23));
          MR_hl_field(0, GroundTerm_35, 2) = ((MR_Box) (LHS_MLDS_Type_59));
        }
        ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_13, GroundTerm_35, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
      }
      break;
    case (MR_Integer) 3:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construct_tagword_compound\'/10", (MR_String) "construct_in_region");
        return;
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construct_compound_12_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construct_compound__307__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construct_compound_12_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_generate_construct_compound__283__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construct_compound_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = parse_tree__var_table__lookup_var_type_func_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_construct_compound_12_p_0(
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
  MR_Word STATE_VARIABLE_Info_0_58,
  MR_Word * STATE_VARIABLE_Info_59)
{
  MR_bool succeeded;
  MR_Word Target_24;
  MR_Word ModuleInfo_25;
  MR_Word VarTable_26;
  MR_Word LHSVarEntry_27;
  MR_Word LHSType_28;
  MR_Word RHSVarsTypesWidths_29;
  MR_Word UsesBaseClass_30;
  MR_Word Ptag_31;
  MR_Word ExplicitSectag_34;
  MR_Integer FirstArgNum_35;
  MR_Word TagwordRvalsTypesWidths_36;
  MR_Word NonTagwordRHSVarsTypesWidths_37;
  MR_Word NonTagwordArgModes_38;
  MR_Word MaybeCtorName_56;
  MR_Word Var_60;
  MR_Word Var_93;

  ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_58, &Target_24);
  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_58, &ModuleInfo_25);
  ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_58, &VarTable_26);
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_26, LHSVar_13, &LHSVarEntry_27);
  LHSType_28 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_27, (MR_Integer) 1))));
  {
    Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_60, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_5[2]));
    MR_hl_field(0, Var_60, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construct_compound_12_p_0_1));
    MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_60, 3) = ((MR_Box) (VarTable_26));
  }
  ml_backend__ml_unify_gen_util__associate_cons_id_args_with_types_widths_7_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), ModuleInfo_25, Var_60, (MR_Integer) 1, LHSType_28, ConsId_14, RHSVars_16, &RHSVarsTypesWidths_29);
  switch (MR_tag((MR_Word) RemoteArgsTagInfo_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        UsesBaseClass_30 = (MR_Integer) 1;
        Ptag_31 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
        ExplicitSectag_34 = (MR_Integer) 0;
        FirstArgNum_35 = (MR_Integer) 1;
        TagwordRvalsTypesWidths_36 = (MR_Word) ((MR_Unsigned) 0U);
        NonTagwordRHSVarsTypesWidths_37 = RHSVarsTypesWidths_29;
        NonTagwordArgModes_38 = ArgModes_17;
      }
      break;
    case (MR_Integer) 1:
      {
        Ptag_31 = ((MR_Word) ((MR_hl_field(1, RemoteArgsTagInfo_15, (MR_Integer) 0))));
        UsesBaseClass_30 = (MR_Integer) 0;
        ExplicitSectag_34 = (MR_Integer) 0;
        FirstArgNum_35 = (MR_Integer) 1;
        TagwordRvalsTypesWidths_36 = (MR_Word) ((MR_Unsigned) 0U);
        NonTagwordRHSVarsTypesWidths_37 = RHSVarsTypesWidths_29;
        NonTagwordArgModes_38 = ArgModes_17;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word RemoteSectag_39;
        MR_Unsigned SectagUint_40;
        MR_Word SectagSize_41;
        MR_Word TagwordArgPosWidth_42;
        MR_Word Var_68;
        MR_Word UsesConstructors_95;

        Ptag_31 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_15, (MR_Integer) 0))));
        RemoteSectag_39 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_15, (MR_Integer) 1))));
        UsesBaseClass_30 = (MR_Integer) 0;
        UsesConstructors_95 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_24);
        {
          Var_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_68, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[3]));
          MR_hl_field(0, Var_68, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construct_compound_12_p_0_3));
          MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_68, 3) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(0, Var_68, 4) = ((MR_Box) (UsesConstructors_95));
        }
        mercury__require__expect_3_p_0(Var_68, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construct_compound\'/12", (MR_String) "remote_args_shared but UsesConstructors = yes");
        ExplicitSectag_34 = (MR_Integer) 1;
        SectagUint_40 = ((MR_Unsigned) ((MR_hl_field(0, RemoteSectag_39, (MR_Integer) 0))));
        SectagSize_41 = ((MR_Word) ((MR_hl_field(0, RemoteSectag_39, (MR_Integer) 1))));
        TagwordArgPosWidth_42 = (MR_Word) (MR_mkword(1, &ml_backend__ml_unify_gen_construct_scalar_common_1[8]));
        if ((SectagSize_41 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word SectagRval0_43;
          MR_Word SectagRval_44;
          MR_Word Var_76;
          MR_Word Var_79;

          FirstArgNum_35 = (MR_Integer) 1;
          {
            Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_76, 1) = ((MR_Box) (SectagUint_40));
          }
          {
            SectagRval0_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, SectagRval0_43, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, SectagRval0_43, 1) = ((MR_Box) (Var_76));
          }
          {
            SectagRval_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, SectagRval_44, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, SectagRval_44, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_construct_scalar_common_1[9])));
            MR_hl_field(3, SectagRval_44, 2) = ((MR_Box) (SectagRval0_43));
          }
          {
            Var_79 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_79, 0) = ((MR_Box) (SectagRval_44));
            MR_hl_field(0, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(0, Var_79, 2) = ((MR_Box) (TagwordArgPosWidth_42));
          }
          {
            TagwordRvalsTypesWidths_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, TagwordRvalsTypesWidths_36, 0) = ((MR_Box) (Var_79));
            MR_hl_field(1, TagwordRvalsTypesWidths_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          NonTagwordRHSVarsTypesWidths_37 = RHSVarsTypesWidths_29;
          NonTagwordArgModes_38 = ArgModes_17;
        }
        else
        {
          MR_Word SectagBits_45 = (MR_Word) (MR_body((MR_Word) (SectagSize_41), (MR_Integer) 1));
          MR_Word TagwordRHSVarsTypesWidths_46;
          MR_Word TagwordArgModes_47;
          MR_Word RevArgFilledBitfields_48;
          MR_Word UseMap_49;
          MR_Word TagFilledBitfield_53;
          MR_Word ArgFilledBitfields_54;
          MR_Word TagwordRval_55;
          MR_Word Var_89;

          ml_backend__ml_unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_116_97_107_101_95_116_97_103_119_111_114_100_95_97_114_103_115_95_116_121_112_101_95_119_105_100_116_104_115_95_109_111_100_101_115_95_95_91_49_93_95_48_8_p_0(RHSVarsTypesWidths_29, ArgModes_17, &TagwordRHSVarsTypesWidths_46, &TagwordArgModes_47, &NonTagwordRHSVarsTypesWidths_37, &NonTagwordArgModes_38, (MR_Integer) 1, &FirstArgNum_35);
          switch (MR_tag((MR_Word) HowToConstruct_19)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ml_backend__ml_unify_gen_construct__ml_gen_tagword_dynamically_5_p_0(STATE_VARIABLE_Info_0_58, TagwordRHSVarsTypesWidths_46, TagwordArgModes_47, (MR_Word) ((MR_Unsigned) 0U), &RevArgFilledBitfields_48);
                UseMap_49 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construct_compound\'/12", (MR_String) "reuse_cell NYI");
                return;
              }
              break;
            case (MR_Integer) 2:
              {
                ml_backend__ml_unify_gen_construct__ml_gen_tagword_statically_4_p_0(STATE_VARIABLE_Info_0_58, TagwordRHSVarsTypesWidths_46, (MR_Word) ((MR_Unsigned) 0U), &RevArgFilledBitfields_48);
                UseMap_49 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construct_compound\'/12", (MR_String) "construct_in_region NYI");
                return;
              }
              break;
          }
          ml_backend__ml_unify_gen_util__remote_sectag_filled_bitfield_3_p_0(SectagUint_40, SectagBits_45, &TagFilledBitfield_53);
          mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), RevArgFilledBitfields_48, &ArgFilledBitfields_54);
          ml_backend__ml_unify_gen_construct__filled_bitfields_to_packed_word_5_p_0(STATE_VARIABLE_Info_0_58, UseMap_49, TagFilledBitfield_53, ArgFilledBitfields_54, &TagwordRval_55);
          {
            Var_89 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_89, 0) = ((MR_Box) (TagwordRval_55));
            MR_hl_field(0, Var_89, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_construct_scalar_common_1[9])));
            MR_hl_field(0, Var_89, 2) = ((MR_Box) (TagwordArgPosWidth_42));
          }
          {
            TagwordRvalsTypesWidths_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, TagwordRvalsTypesWidths_36, 0) = ((MR_Box) (Var_89));
            MR_hl_field(1, TagwordRvalsTypesWidths_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word UsesConstructors_33;
        MR_Word Var_63;

        UsesBaseClass_30 = (MR_Integer) 0;
        UsesConstructors_33 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_24);
        {
          Var_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_63, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[3]));
          MR_hl_field(0, Var_63, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_construct_compound_12_p_0_2));
          MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_63, 3) = ((MR_Box) (UsesConstructors_33));
          MR_hl_field(0, Var_63, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_construct_compound\'/12", (MR_String) "remote_args_ctor but UsesConstructors = no");
        Ptag_31 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
        ExplicitSectag_34 = (MR_Integer) 0;
        FirstArgNum_35 = (MR_Integer) 1;
        TagwordRvalsTypesWidths_36 = (MR_Word) ((MR_Unsigned) 0U);
        NonTagwordRHSVarsTypesWidths_37 = RHSVarsTypesWidths_29;
        NonTagwordArgModes_38 = ArgModes_17;
      }
      break;
  }
  switch (UsesBaseClass_30) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word CtorName_57;
        MR_Word ConsId_110;
        MR_Word ModuleName_111;
        MR_Word ConsSymName_104;
        MR_Integer ConsArity_105;
        MR_Word TypeCtor_106;
        MR_Word SymModuleName_107;
        MR_Word Var_112;

        succeeded = ((MR_tag((MR_Word) ConsId_14)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_112 = (MR_Word) (MR_body((MR_Word) (ConsId_14), (MR_Integer) 1));
          ConsSymName_104 = ((MR_Word) ((MR_hl_field(0, Var_112, (MR_Integer) 0))));
          ConsArity_105 = ((MR_Integer) ((MR_hl_field(0, Var_112, (MR_Integer) 1))));
          TypeCtor_106 = ((MR_Word) ((MR_hl_field(0, Var_112, (MR_Integer) 2))));
          succeeded = ((MR_tag((MR_Word) ConsSymName_104)) == (MR_Integer) 1);
          if (succeeded)
            SymModuleName_107 = ((MR_Word) ((MR_hl_field(1, ConsSymName_104, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_String ConsName_109;

          ConsName_109 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(Target_24, TypeCtor_106, ConsSymName_104, ConsArity_105);
          {
            ConsId_110 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ConsId_110, 0) = ((MR_Box) (ConsName_109));
            MR_hl_field(0, ConsId_110, 1) = ((MR_Box) (ConsArity_105));
          }
          ModuleName_111 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(SymModuleName_107);
        }
        else
        {
          MR_String ConsName_117;

          ConsName_117 = parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_1_f_0(ConsId_14);
          {
            ConsId_110 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ConsId_110, 0) = ((MR_Box) (ConsName_117));
            MR_hl_field(0, ConsId_110, 1) = ((MR_Box) ((MR_Integer) 0));
          }
          ModuleName_111 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_3[2]));
        }
        {
          CtorName_57 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CtorName_57, 0) = ((MR_Box) (ModuleName_111));
          MR_hl_field(0, CtorName_57, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, CtorName_57, 2) = ((MR_Box) (ConsId_110));
        }
        {
          MaybeCtorName_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeCtorName_56, 0) = ((MR_Box) (CtorName_57));
        }
      }
      break;
    case (MR_Integer) 1:
      MaybeCtorName_56 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  {
    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_93, 0) = ((MR_Box) (ConsId_14));
  }
  ml_backend__ml_unify_gen_construct__ml_gen_new_object_17_p_0(Var_93, MaybeCtorName_56, Ptag_31, ExplicitSectag_34, LHSVar_13, LHSVarEntry_27, TagwordRvalsTypesWidths_36, NonTagwordRHSVarsTypesWidths_37, NonTagwordArgModes_38, FirstArgNum_35, TakeAddr_18, HowToConstruct_19, Context_20, Defns_21, Stmts_22, STATE_VARIABLE_Info_0_58, STATE_VARIABLE_Info_59);
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_take_tagword_args_type_widths_modes\'/8", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_72 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_take_tagword_args_type_widths_modes\'/8", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word ArgMode_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgModes_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgPosWidth_45 = ((MR_Word) ((MR_hl_field(0, Var_73, (MR_Integer) 2))));

      switch (MR_tag((MR_Word) ArgPosWidth_45)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
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
          switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_45, (MR_Integer) 0))))) {
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

                ml_backend__ml_unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_116_97_107_101_95_116_97_103_119_111_114_100_95_97_114_103_115_95_116_121_112_101_95_119_105_100_116_104_115_95_109_111_100_101_115_95_95_91_49_93_95_48_8_p_0(Var_72, ArgModes_37, &TailTagwordArgsTypesWidths_54, &TailTagwordArgModes_55, HeadVar__5_5, HeadVar__6_6, STATE_VARIABLE_CurArgNum_69_69, STATE_VARIABLE_CurArgNum_8);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_73));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TailTagwordArgsTypesWidths_54));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (ArgMode_36));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TailTagwordArgModes_55));
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
      MR_Word RHSVarTypeWidth_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word RHSVarsTypesWidths_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word RHSVar_13 = ((MR_Word) ((MR_hl_field(0, RHSVarTypeWidth_10, (MR_Integer) 0))));
      MR_Word ArgPosWidth_15 = ((MR_Word) ((MR_hl_field(0, RHSVarTypeWidth_10, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_RevFilledBitfields_46_46;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      switch (MR_tag((MR_Word) ArgPosWidth_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_tagword_statically\'/4", (MR_String) "non-tagword ArgPosWidth");
            return;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_15, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_tagword_statically\'/4", (MR_String) "non-tagword ArgPosWidth");
                return;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Shift_29 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_15, (MR_Integer) 3))));
                MR_Word NumBits_30 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_15, (MR_Integer) 4))));
                MR_Word Fill_32 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_15, (MR_Integer) 6))) & (MR_Integer) 7);
                MR_Word Bitfield_33;
                MR_Word GroundTerm_34;
                MR_Word RHSRval_35;
                MR_Word BitfieldValue_38;
                MR_Word FilledBitfield_39;

                {
                  Bitfield_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Bitfield_33, 0) = ((MR_Box) (Shift_29));
                  MR_hl_field(0, Bitfield_33, 1) = ((MR_Box) (NumBits_30));
                  MR_hl_field(0, Bitfield_33, 2) = (MR_Box) ((MR_Unsigned) (Fill_32));
                }
                ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_p_0(Info_1, RHSVar_13, &GroundTerm_34);
                RHSRval_35 = ((MR_Word) ((MR_hl_field(0, GroundTerm_34, (MR_Integer) 0))));
                {
                  BitfieldValue_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, BitfieldValue_38, 0) = ((MR_Box) (RHSRval_35));
                }
                {
                  FilledBitfield_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, FilledBitfield_39, 0) = ((MR_Box) (Bitfield_33));
                  MR_hl_field(0, FilledBitfield_39, 1) = ((MR_Box) (BitfieldValue_38));
                }
                {
                  STATE_VARIABLE_RevFilledBitfields_46_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevFilledBitfields_46_46, 0) = ((MR_Box) (FilledBitfield_39));
                  MR_hl_field(1, STATE_VARIABLE_RevFilledBitfields_46_46, 1) = ((MR_Box) (HeadVar__3_3));
                }
              }
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_RevFilledBitfields_46_46 = HeadVar__3_3;
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = RHSVarsTypesWidths_11;
      next_value_of_HeadVar__3_3 = STATE_VARIABLE_RevFilledBitfields_46_46;
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_tagword_dynamically\'/5", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_tagword_dynamically\'/5", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word ArgMode_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgModes_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
        MR_Word RHSVar_32 = ((MR_Word) ((MR_hl_field(0, Var_63, (MR_Integer) 0))));
        MR_Word ConsArgType_33 = ((MR_Word) ((MR_hl_field(0, Var_63, (MR_Integer) 1))));
        MR_Word ArgPosWidth_34 = ((MR_Word) ((MR_hl_field(0, Var_63, (MR_Integer) 2))));
        MR_Word STATE_VARIABLE_RevFilledBitfields_61_61;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_RevFilledBitfields_0_4;

        switch (MR_tag((MR_Word) ArgPosWidth_34)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_tagword_dynamically\'/5", (MR_String) "non-tagword ArgPosWidth");
              return;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_34, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_tagword_dynamically\'/5", (MR_String) "non-tagword ArgPosWidth");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Shift_48 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_34, (MR_Integer) 3))));
                  MR_Word NumBits_49 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_34, (MR_Integer) 4))));
                  MR_Word Fill_51 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_34, (MR_Integer) 6))) & (MR_Integer) 7);
                  MR_Word Bitfield_52;
                  MR_Word BitfieldValue_53;
                  MR_Word FilledBitfield_54;
                  MR_Word ModuleInfo_64;
                  MR_Word RHSInitInst_67;
                  MR_Word RHSFinalInst_68;
                  MR_Word RHSType_69;
                  MR_Word Var_71;
                  MR_Word Var_73;

                  {
                    Bitfield_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Bitfield_52, 0) = ((MR_Box) (Shift_48));
                    MR_hl_field(0, Bitfield_52, 1) = ((MR_Box) (NumBits_49));
                    MR_hl_field(0, Bitfield_52, 2) = (MR_Box) ((MR_Unsigned) (Fill_51));
                  }
                  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_64);
                  RHSInitInst_67 = ((MR_Word) ((MR_hl_field(0, ArgMode_29, (MR_Integer) 2))));
                  RHSFinalInst_68 = ((MR_Word) ((MR_hl_field(0, ArgMode_29, (MR_Integer) 3))));
                  ml_backend__ml_code_util__ml_variable_type_direct_3_p_0(Info_1, RHSVar_32, &RHSType_69);
                  check_hlds__mode_top_functor__init_final_insts_to_top_functor_mode_5_p_0(ModuleInfo_64, RHSInitInst_67, RHSFinalInst_68, RHSType_69, &Var_73);
                  succeeded = ((MR_Integer) 0 == Var_73);
                  if (succeeded)
                  {
                    Var_71 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_64, RHSType_69, ConsArgType_33);
                    succeeded = (Var_71 == (MR_Integer) 1);
                  }
                  if (succeeded)
                    {
                      BitfieldValue_53 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, BitfieldValue_53, 0) = ((MR_Box) (RHSVar_32));
                    }
                  else
                    BitfieldValue_53 = (MR_Word) (MR_mkword(2, &ml_backend__ml_unify_gen_construct_scalar_common_3[1]));
                  {
                    FilledBitfield_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, FilledBitfield_54, 0) = ((MR_Box) (Bitfield_52));
                    MR_hl_field(0, FilledBitfield_54, 1) = ((MR_Box) (BitfieldValue_53));
                  }
                  {
                    STATE_VARIABLE_RevFilledBitfields_61_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_RevFilledBitfields_61_61, 0) = ((MR_Box) (FilledBitfield_54));
                    MR_hl_field(1, STATE_VARIABLE_RevFilledBitfields_61_61, 1) = ((MR_Box) (STATE_VARIABLE_RevFilledBitfields_0_4));
                  }
                }
                break;
              case (MR_Integer) 2:
                STATE_VARIABLE_RevFilledBitfields_61_61 = STATE_VARIABLE_RevFilledBitfields_0_4;
                break;
            }
            break;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_62;
        next_value_of_HeadVar__3_3 = ArgModes_30;
        next_value_of_STATE_VARIABLE_RevFilledBitfields_0_4 = STATE_VARIABLE_RevFilledBitfields_61_61;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_RevFilledBitfields_0_4 = next_value_of_STATE_VARIABLE_RevFilledBitfields_0_4;
        continue;
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_17_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_50;

  conv1_LambdaHeadVar__2_50 = ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_statically__567__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_50));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_17_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object__442__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_64;

  conv0_LambdaHeadVar__2_64 = ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_dynamically__511__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_64));
  return wrapper_arg_2;
}

void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_17_p_0(
  MR_Word MaybeConsId_18,
  MR_Word MaybeCtorName_19,
  MR_Word Ptag_20,
  MR_Word ExplicitSectag_21,
  MR_Word LHSVar_22,
  MR_Word LHSVarEntry_23,
  MR_Word ExtraRHSRvalsTypesWidths_24,
  MR_Word RHSVarsTypesWidths_25,
  MR_Word ArgModes_26,
  MR_Integer FirstArgNum_27,
  MR_Word TakeAddr_28,
  MR_Word HowToConstruct_29,
  MR_Word Context_30,
  MR_Word * Defns_31,
  MR_Word * Stmts_32,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HowToConstruct_29)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word UseAtomicCells_48;
        MR_Word MayUseAtomic0_49;
        MR_Word TakeAddrInfos_50;
        MR_Word PackedRHSRvalsTypesWidths_51;
        MR_Word MayUseAtomic_52;
        MR_Word RHSRvalsTypesWidths_53;
        MR_Integer Size_54;
        MR_Word SizeInWordsRval_55;
        MR_Word ProfileMemory_56;
        MR_Word MaybeAllocId_64;
        MR_Word LHSLval_65;
        MR_Word ArgRvalsTypes_67;
        MR_Word LHS_MLDS_Type_68;
        MR_Word MakeNewObject_69;
        MR_Word MakeNewObjStmt_70;
        MR_Word MaybePtag_71;
        MR_Word TakeAddrStmts_72;
        MR_Word Var_73;
        MR_Word Var_75;
        MR_Word Var_76;

        ml_backend__ml_gen_info__ml_gen_info_get_use_atomic_cells_2_p_0(STATE_VARIABLE_Info_0_37, &UseAtomicCells_48);
        switch (UseAtomicCells_48) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            MayUseAtomic0_49 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            MayUseAtomic0_49 = (MR_Integer) 0;
            break;
        }
        ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0(STATE_VARIABLE_Info_0_37, RHSVarsTypesWidths_25, ArgModes_26, FirstArgNum_27, TakeAddr_28, &TakeAddrInfos_50, &PackedRHSRvalsTypesWidths_51, MayUseAtomic0_49, &MayUseAtomic_52);
        RHSRvalsTypesWidths_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0), ExtraRHSRvalsTypesWidths_24, PackedRHSRvalsTypesWidths_51);
        mercury__list__length_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0), RHSRvalsTypesWidths_53, &Size_54);
        {
          Var_73 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_73, 0) = ((MR_Box) (Size_54));
        }
        {
          SizeInWordsRval_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, SizeInWordsRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, SizeInWordsRval_55, 1) = ((MR_Box) (Var_73));
        }
        ml_backend__ml_gen_info__ml_gen_info_get_profile_memory_2_p_0(STATE_VARIABLE_Info_0_37, &ProfileMemory_56);
        switch (ProfileMemory_56) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MaybeAllocId_64 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ModuleInfo_57;
              MR_Word PredProcId_58;
              MR_Word ProcLabel_60;
              MR_Word GlobalData0_61;
              MR_Word AllocId_62;
              MR_Word GlobalData_63;
              MR_Word Var_74;
              MR_Word _Module_59;

              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_37, &ModuleInfo_57);
              ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_37, &PredProcId_58);
              ml_backend__ml_code_util__ml_gen_proc_label_4_p_0(ModuleInfo_57, PredProcId_58, &_Module_59, &ProcLabel_60);
              ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_37, &GlobalData0_61);
              Var_74 = (MR_Word) ((MR_Word) (ProcLabel_60));
              ml_backend__ml_global_data__ml_gen_alloc_site_7_p_0(Var_74, MaybeConsId_18, Size_54, Context_30, &AllocId_62, GlobalData0_61, &GlobalData_63);
              ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_63, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
              {
                MaybeAllocId_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeAllocId_64, 0) = ((MR_Box) (AllocId_62));
              }
            }
            break;
        }
        ml_backend__ml_code_util__ml_gen_var_4_p_0(*STATE_VARIABLE_Info_38, LHSVar_22, LHSVarEntry_23, &LHSLval_65);
        ArgRvalsTypes_67 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[8]), RHSRvalsTypesWidths_53);
        Var_75 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_23, (MR_Integer) 1))));
        ml_backend__ml_code_util__ml_gen_mlds_type_3_p_0(*STATE_VARIABLE_Info_38, Var_75, &LHS_MLDS_Type_68);
        {
          Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_76, 0) = ((MR_Box) (SizeInWordsRval_55));
        }
        {
          MakeNewObject_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, MakeNewObject_69, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, MakeNewObject_69, 1) = ((MR_Box) (LHSLval_65));
          MR_hl_field(3, MakeNewObject_69, 2) = ((MR_Box) (Ptag_20));
          MR_hl_field(3, MakeNewObject_69, 3) = (MR_Box) ((MR_Unsigned) (ExplicitSectag_21));
          MR_hl_field(3, MakeNewObject_69, 4) = ((MR_Box) (LHS_MLDS_Type_68));
          MR_hl_field(3, MakeNewObject_69, 5) = ((MR_Box) (Var_76));
          MR_hl_field(3, MakeNewObject_69, 6) = ((MR_Box) (MaybeCtorName_19));
          MR_hl_field(3, MakeNewObject_69, 7) = ((MR_Box) (ArgRvalsTypes_67));
          MR_hl_field(3, MakeNewObject_69, 8) = (MR_Box) ((MR_Unsigned) (MayUseAtomic_52));
          MR_hl_field(3, MakeNewObject_69, 9) = ((MR_Box) (MaybeAllocId_64));
        }
        {
          MakeNewObjStmt_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, MakeNewObjStmt_70, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, MakeNewObjStmt_70, 1) = ((MR_Box) (MakeNewObject_69));
          MR_hl_field(3, MakeNewObjStmt_70, 2) = ((MR_Box) (Context_30));
        }
        {
          MaybePtag_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybePtag_71, 0) = ((MR_Box) (Ptag_20));
        }
        ml_backend__ml_unify_gen_construct__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_50, LHSLval_65, LHS_MLDS_Type_68, MaybePtag_71, Context_30, *STATE_VARIABLE_Info_38, &TakeAddrStmts_72);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_32 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (MakeNewObjStmt_70));
          MR_hl_field(1, base, 1) = ((MR_Box) (TakeAddrStmts_72));
        }
        *Defns_31 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CellToReuse_35 = (MR_Word) (MR_body((MR_Word) (HowToConstruct_29), (MR_Integer) 1));

        ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_16_p_0(MaybeConsId_18, MaybeCtorName_19, Ptag_20, ExplicitSectag_21, LHSVar_22, LHSVarEntry_23, ExtraRHSRvalsTypesWidths_24, RHSVarsTypesWidths_25, ArgModes_26, TakeAddr_28, CellToReuse_35, Context_30, Defns_31, Stmts_32, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_40;
        MR_Word ModuleInfo_81;
        MR_Word HighLevelData_82;
        MR_Word BoxedExtraRHSRvalsTypesWidths_83;
        MR_Word RHSRvalsTypesWidths_84;
        MR_Word UsesBaseClass_85;
        MR_Word ExtraRHSRvals_86;
        MR_Word Target_87;
        MR_Word LHSType_88;
        MR_Word LHS_MLDS_Type_89;
        MR_Word RHSGroundTerm_90;
        MR_Word LHSLval_91;
        MR_Word RHSRval_92;
        MR_Word AssignStmt_95;
        MR_Word STATE_VARIABLE_GlobalData_44_96;
        MR_Word STATE_VARIABLE_GlobalData_46_98;
        MR_Word STATE_VARIABLE_GlobalData_51_100;
        MR_Word STATE_VARIABLE_Info_52_101;

        {
          Var_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_40, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[8]));
          MR_hl_field(0, Var_40, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_new_object_17_p_0_2));
          MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_40, 3) = ((MR_Box) (TakeAddr_28));
          MR_hl_field(0, Var_40, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_40, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_new_object\'/17", (MR_String) "cannot take address of static object\'s field");
        ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_GlobalData_44_96);
        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_37, &ModuleInfo_81);
        ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_37, &HighLevelData_82);
        switch (HighLevelData_82) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word STATE_VARIABLE_GlobalData_45_97;

              ml_backend__ml_unify_gen_construct__ml_gen_box_extra_const_rval_list_lld_6_p_0(ModuleInfo_81, Context_30, ExtraRHSRvalsTypesWidths_24, &BoxedExtraRHSRvalsTypesWidths_83, STATE_VARIABLE_GlobalData_44_96, &STATE_VARIABLE_GlobalData_45_97);
              ml_backend__ml_unify_gen_construct__ml_gen_box_const_rval_list_lld_6_p_0(STATE_VARIABLE_Info_0_37, Context_30, RHSVarsTypesWidths_25, &RHSRvalsTypesWidths_84, STATE_VARIABLE_GlobalData_45_97, &STATE_VARIABLE_GlobalData_46_98);
            }
            break;
          case (MR_Integer) 1:
            {
              ml_backend__ml_unify_gen_construct__ml_gen_box_or_unbox_const_rval_list_hld_6_p_0(STATE_VARIABLE_Info_0_37, Context_30, RHSVarsTypesWidths_25, &RHSRvalsTypesWidths_84, STATE_VARIABLE_GlobalData_44_96, &STATE_VARIABLE_GlobalData_46_98);
              BoxedExtraRHSRvalsTypesWidths_83 = ExtraRHSRvalsTypesWidths_24;
            }
            break;
        }
        if ((MaybeCtorName_19 == (MR_Word) ((MR_Unsigned) 0U)))
          UsesBaseClass_85 = (MR_Integer) 1;
        else
          UsesBaseClass_85 = (MR_Integer) 0;
        ExtraRHSRvals_86 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[9]), BoxedExtraRHSRvalsTypesWidths_83);
        ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_37, &Target_87);
        LHSType_88 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_23, (MR_Integer) 1))));
        ml_backend__ml_code_util__ml_gen_mlds_type_3_p_0(STATE_VARIABLE_Info_0_37, LHSType_88, &LHS_MLDS_Type_89);
        ml_backend__ml_unify_gen_construct__construct_static_ground_term_14_p_0(ModuleInfo_81, Target_87, HighLevelData_82, Context_30, LHSType_88, LHS_MLDS_Type_89, MaybeConsId_18, UsesBaseClass_85, Ptag_20, ExtraRHSRvals_86, RHSRvalsTypesWidths_84, &RHSGroundTerm_90, STATE_VARIABLE_GlobalData_46_98, &STATE_VARIABLE_GlobalData_51_100);
        ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(STATE_VARIABLE_GlobalData_51_100, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_52_101);
        ml_backend__ml_gen_info__ml_gen_info_set_const_var_4_p_0(LHSVar_22, RHSGroundTerm_90, STATE_VARIABLE_Info_52_101, STATE_VARIABLE_Info_38);
        ml_backend__ml_code_util__ml_gen_var_4_p_0(*STATE_VARIABLE_Info_38, LHSVar_22, LHSVarEntry_23, &LHSLval_91);
        RHSRval_92 = ((MR_Word) ((MR_hl_field(0, RHSGroundTerm_90, (MR_Integer) 0))));
        AssignStmt_95 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_91, RHSRval_92, Context_30);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_32 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (AssignStmt_95));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *Defns_31 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 3:
      {
        mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_new_object\'/17", (MR_String) "construct_in_region NYI");
        return;
      }
      break;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__construct_static_ground_term_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_44;

  conv0_LambdaHeadVar__2_44 = ml_backend__ml_unify_gen_construct__IntroducedFrom__func__construct_static_ground_term__1971__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_44));
  return wrapper_arg_2;
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
  ExtraInits_29 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[7]), ExtraRvals_24);
  AllInits_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ExtraInits_29, NonExtraInits_28);
  switch (HighLevelData_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ConstType_32 = (MR_Word) (MR_mkword(3, &ml_backend__ml_unify_gen_construct_scalar_common_1[14]));
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeCtorCategory_52;

        succeeded = (Target_16 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = ((((MR_tag((MR_Word) MLDS_Type_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, MLDS_Type_20, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            TypeCtorCategory_52 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_20, (MR_Integer) 2))));
            succeeded = ((((MR_tag((MR_Word) TypeCtorCategory_52)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeCtorCategory_52, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
            }
          }
        }
        if (succeeded)
          ConstType_32 = (MR_Word) (MR_mkword(3, &ml_backend__ml_unify_gen_construct_scalar_common_1[14]));
        else
        {
          MR_Word CtorSymName_56;
          MR_Integer CtorArity_57;
          MR_Word QualTypeName_59;
          MR_Integer TypeArity_60;
          MR_Word ConsId_54;
          MR_Word DuCtor_55;

          succeeded = (UsesBaseClass_22 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (MaybeConsId_21 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ConsId_54 = ((MR_Word) ((MR_hl_field(1, MaybeConsId_21, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) ConsId_54)) == (MR_Integer) 1);
              if (succeeded)
              {
                DuCtor_55 = (MR_Word) (MR_body((MR_Word) (ConsId_54), (MR_Integer) 1));
                CtorSymName_56 = ((MR_Word) ((MR_hl_field(0, DuCtor_55, (MR_Integer) 0))));
                CtorArity_57 = ((MR_Integer) ((MR_hl_field(0, DuCtor_55, (MR_Integer) 1))));
                if (((MR_tag((MR_Word) MLDS_Type_20)) == (MR_Integer) 1))
                {
                  MR_Word Var_81 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_20), (MR_Integer) 1));

                  QualTypeName_59 = ((MR_Word) ((MR_hl_field(0, Var_81, (MR_Integer) 0))));
                  TypeArity_60 = ((MR_Integer) ((MR_hl_field(0, Var_81, (MR_Integer) 1))));
                  succeeded = MR_TRUE;
                }
                else
                if (((((MR_tag((MR_Word) MLDS_Type_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, MLDS_Type_20, (MR_Integer) 0)))) == (MR_Integer) 3))))
                {
                  MR_Word MercuryType_61 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_20, (MR_Integer) 1))));
                  MR_Word TypeCtor_63;
                  MR_Word Var_82 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_20, (MR_Integer) 2))));

                  succeeded = ((((MR_tag((MR_Word) Var_82)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_82, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(MercuryType_61, &TypeCtor_63);
                    if (succeeded)
                    {
                      ml_backend__ml_type_gen__ml_gen_class_name_3_p_0(TypeCtor_63, &QualTypeName_59, &TypeArity_60);
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
            MR_String UnqualTypeName_66 = ((MR_String) ((MR_hl_field(0, QualTypeName_59, (MR_Integer) 2))));
            MR_String CtorName_67;
            MR_Word MLDS_Module_68;
            MR_String TypeName_70;
            MR_Word ClassQualifier_71;
            MR_Word QualClassName_72;
            MR_Word ClassId_73;

            CtorName_67 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_unqual_type_5_f_0(Target_16, UnqualTypeName_66, TypeArity_60, CtorSymName_56, CtorArity_57);
            MLDS_Module_68 = ((MR_Word) ((MR_hl_field(0, QualTypeName_59, (MR_Integer) 0))));
            TypeName_70 = ((MR_String) ((MR_hl_field(0, QualTypeName_59, (MR_Integer) 2))));
            ClassQualifier_71 = ml_backend__mlds__mlds_append_class_qualifier_module_qual_3_f_0(MLDS_Module_68, TypeName_70, TypeArity_60);
            {
              QualClassName_72 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, QualClassName_72, 0) = ((MR_Box) (ClassQualifier_71));
              MR_hl_field(0, QualClassName_72, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(0, QualClassName_72, 2) = ((MR_Box) (CtorName_67));
            }
            {
              ClassId_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ClassId_73, 0) = ((MR_Box) (QualClassName_72));
              MR_hl_field(0, ClassId_73, 1) = ((MR_Box) (CtorArity_57));
            }
            ConstType_32 = (MR_Word) (MR_mkword(1, (MR_Word) (ClassId_73)));
          }
          else
          {
            MR_Word TypeCtor_91;
            MR_Word Var_84;
            MR_Word MercuryType_89;

            succeeded = ((((MR_tag((MR_Word) MLDS_Type_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, MLDS_Type_20, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (succeeded)
            {
              MercuryType_89 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_20, (MR_Integer) 1))));
              Var_84 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_20, (MR_Integer) 2))));
              succeeded = ((((MR_tag((MR_Word) Var_84)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_84, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
                succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(MercuryType_89, &TypeCtor_91);
            }
            if (succeeded)
            {
              MR_Word ClassName_75;
              MR_Integer ClassArity_76;
              MR_Word ClassId_90;

              ml_backend__ml_type_gen__ml_gen_class_name_3_p_0(TypeCtor_91, &ClassName_75, &ClassArity_76);
              {
                ClassId_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ClassId_90, 0) = ((MR_Box) (ClassName_75));
                MR_hl_field(0, ClassId_90, 1) = ((MR_Box) (ClassArity_76));
              }
              ConstType_32 = (MR_Word) (MR_mkword(1, (MR_Word) (ClassId_90)));
            }
            else
            {
              MR_Word Var_85;

              succeeded = ((((MR_tag((MR_Word) MLDS_Type_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, MLDS_Type_20, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                Var_85 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_20, (MR_Integer) 2))));
                succeeded = (Var_85 == (MR_Word) ((MR_Unsigned) 16U));
              }
              if (succeeded)
                ConstType_32 = (MR_Word) (MR_mkword(3, &ml_backend__ml_unify_gen_construct_scalar_common_1[14]));
              else
              {
                MR_Word Var_87;

                succeeded = ((((MR_tag((MR_Word) MLDS_Type_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, MLDS_Type_20, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  Var_87 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_20, (MR_Integer) 2))));
                  succeeded = (Var_87 == (MR_Word) ((MR_Unsigned) 12U));
                }
                if (succeeded)
                  ConstType_32 = (MR_Word) (MR_mkword(3, &ml_backend__ml_unify_gen_construct_scalar_common_1[14]));
                else
                  ConstType_32 = MLDS_Type_20;
              }
            }
          }
        }
      }
      break;
  }
  succeeded = ((((MR_tag((MR_Word) ConstType_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstType_32, (MR_Integer) 0)))) == (MR_Integer) 8)));
  if (succeeded)
    {
      Initializer_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Initializer_34, 0) = ((MR_Box) (AllInits_31));
    }
  else
    {
      Initializer_34 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Initializer_34, 0) = ((MR_Box) (ConstType_32));
      MR_hl_field(2, Initializer_34, 1) = ((MR_Box) (AllInits_31));
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
      TaggedRval_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, TaggedRval_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, TaggedRval_38, 1) = ((MR_Box) (Ptag_23));
      MR_hl_field(3, TaggedRval_38, 2) = ((MR_Box) (ConstDataAddrRval_37));
    }
  {
    Rval_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Rval_39, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Rval_39, 1) = ((MR_Box) (MLDS_Type_20));
    MR_hl_field(3, Rval_39, 2) = ((MR_Box) (TaggedRval_38));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *GroundTerm_26 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Rval_39));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarType_19));
    MR_hl_field(0, base, 2) = ((MR_Box) (MLDS_Type_20));
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
      MR_Word RvalTypeWidth_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RvalsTypesWidths_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Rval_6 = ((MR_Word) ((MR_hl_field(0, RvalTypeWidth_3, (MR_Integer) 0))));
      MR_Word ArgPosWidth_8 = ((MR_Word) ((MR_hl_field(0, RvalTypeWidth_3, (MR_Integer) 2))));

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
              HeadInit_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HeadInit_14, 0) = ((MR_Box) (Rval_6));
            }
            ml_backend__ml_unify_gen_construct__ml_pack_ground_term_args_into_word_inits_2_p_0(RvalsTypesWidths_4, &TailInits_15);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (HeadInit_14));
              MR_hl_field(1, base, 1) = ((MR_Box) (TailInits_15));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_8, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Shift_18 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_8, (MR_Integer) 3))));
                MR_Word Fill_21 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_8, (MR_Integer) 6))) & (MR_Integer) 7);
                MR_Word RevOrRvals0_22;
                MR_Word LeftOverRvalsTypesWidths_23;
                MR_Word OrAllRval_24;
                MR_Word HeadInit_36;
                MR_Word TailInits_37;
                MR_Word RevOrRvals_45;
                MR_Word OrRvals_46;
                MR_Word RvalConst_38;

                succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  RvalConst_38 = ((MR_Word) ((MR_hl_field(3, Rval_6, (MR_Integer) 1))));
                  succeeded = ((((MR_tag((MR_Word) RvalConst_38)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RvalConst_38, (MR_Integer) 0)))) == (MR_Integer) 20)));
                  if (succeeded)
                  {
                  }
                  if (!(succeeded))
                  {
                    MR_Word Var_42;

                    Var_42 = ml_backend__ml_unify_gen_util__ml_is_zero_const_1_f_0(RvalConst_38);
                    succeeded = (Var_42 == (MR_Integer) 1);
                  }
                }
                if (succeeded)
                  RevOrRvals0_22 = (MR_Word) ((MR_Unsigned) 0U);
                else
                {
                  MR_Word UnboxedRval_40;
                  MR_Word ShiftedRval_41;
                  MR_Word UnboxedRvalPrime_44;

                  succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    UnboxedRvalPrime_44 = ((MR_Word) ((MR_hl_field(3, Rval_6, (MR_Integer) 2))));
                    UnboxedRval_40 = UnboxedRvalPrime_44;
                  }
                  else
                    UnboxedRval_40 = Rval_6;
                  ShiftedRval_41 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(UnboxedRval_40, Shift_18, Fill_21);
                  {
                    RevOrRvals0_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, RevOrRvals0_22, 0) = ((MR_Box) (ShiftedRval_41));
                    MR_hl_field(1, RevOrRvals0_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                ml_backend__ml_unify_gen_construct__ml_pack_into_one_word_loop_4_p_0(RvalsTypesWidths_4, &LeftOverRvalsTypesWidths_23, RevOrRvals0_22, &RevOrRvals_45);
                mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevOrRvals_45, &OrRvals_46);
                if ((OrRvals_46 == (MR_Word) ((MR_Unsigned) 0U)))
                  OrAllRval_24 = (MR_Word) (MR_mkword(3, &ml_backend__ml_unify_gen_construct_scalar_common_1[16]));
                else
                {
                  MR_Word HeadOrRval_47 = ((MR_Word) ((MR_hl_field(1, OrRvals_46, (MR_Integer) 0))));
                  MR_Word TailOrRvals_48 = ((MR_Word) ((MR_hl_field(1, OrRvals_46, (MR_Integer) 1))));
                  MR_Word OrAllRval_49;

                  OrAllRval_49 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(HeadOrRval_47, TailOrRvals_48);
                  {
                    OrAllRval_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, OrAllRval_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(3, OrAllRval_24, 1) = ((MR_Box) ((MR_Unsigned) 20U));
                    MR_hl_field(3, OrAllRval_24, 2) = ((MR_Box) (OrAllRval_49));
                  }
                }
                {
                  HeadInit_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, HeadInit_36, 0) = ((MR_Box) (OrAllRval_24));
                }
                ml_backend__ml_unify_gen_construct__ml_pack_ground_term_args_into_word_inits_2_p_0(LeftOverRvalsTypesWidths_23, &TailInits_37);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__2_2 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (HeadInit_36));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TailInits_37));
                }
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_pack_ground_term_args_into_word_inits\'/2", (MR_String) "apw_partial_shifted or apw_none_shifted");
                return;
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
      MR_Word RvalTypeWidth_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RvalsTypesWidths_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Rval_12 = ((MR_Word) ((MR_hl_field(0, RvalTypeWidth_8, (MR_Integer) 0))));
      MR_Word ArgPosWidth_14 = ((MR_Word) ((MR_hl_field(0, RvalTypeWidth_8, (MR_Integer) 2))));

      switch (MR_tag((MR_Word) ArgPosWidth_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *HeadVar__2_2 = HeadVar__1_1;
            *STATE_VARIABLE_RevOrRvals_4 = STATE_VARIABLE_RevOrRvals_0_3;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_14, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *HeadVar__2_2 = HeadVar__1_1;
                *STATE_VARIABLE_RevOrRvals_4 = STATE_VARIABLE_RevOrRvals_0_3;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Shift_28 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_14, (MR_Integer) 3))));
                MR_Word Fill_31 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_14, (MR_Integer) 6))) & (MR_Integer) 7);
                MR_Word STATE_VARIABLE_RevOrRvals_36_37;
                MR_Word RvalConst_38;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_STATE_VARIABLE_RevOrRvals_0_3;

                succeeded = ((((MR_tag((MR_Word) Rval_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  RvalConst_38 = ((MR_Word) ((MR_hl_field(3, Rval_12, (MR_Integer) 1))));
                  succeeded = ((((MR_tag((MR_Word) RvalConst_38)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RvalConst_38, (MR_Integer) 0)))) == (MR_Integer) 20)));
                  if (succeeded)
                  {
                  }
                  if (!(succeeded))
                  {
                    MR_Word Var_42;

                    Var_42 = ml_backend__ml_unify_gen_util__ml_is_zero_const_1_f_0(RvalConst_38);
                    succeeded = (Var_42 == (MR_Integer) 1);
                  }
                }
                if (succeeded)
                  STATE_VARIABLE_RevOrRvals_36_37 = STATE_VARIABLE_RevOrRvals_0_3;
                else
                {
                  MR_Word UnboxedRval_40;
                  MR_Word ShiftedRval_41;
                  MR_Word UnboxedRvalPrime_44;

                  succeeded = ((((MR_tag((MR_Word) Rval_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    UnboxedRvalPrime_44 = ((MR_Word) ((MR_hl_field(3, Rval_12, (MR_Integer) 2))));
                    UnboxedRval_40 = UnboxedRvalPrime_44;
                  }
                  else
                    UnboxedRval_40 = Rval_12;
                  ShiftedRval_41 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(UnboxedRval_40, Shift_28, Fill_31);
                  {
                    STATE_VARIABLE_RevOrRvals_36_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_RevOrRvals_36_37, 0) = ((MR_Box) (ShiftedRval_41));
                    MR_hl_field(1, STATE_VARIABLE_RevOrRvals_36_37, 1) = ((MR_Box) (STATE_VARIABLE_RevOrRvals_0_3));
                  }
                }
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = RvalsTypesWidths_9;
                next_value_of_STATE_VARIABLE_RevOrRvals_0_3 = STATE_VARIABLE_RevOrRvals_36_37;
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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_box_extra_const_rval_list_lld_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_box_extra_const_rval_list_lld__818__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
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
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_GlobalData_6 = STATE_VARIABLE_GlobalData_0_5;
  }
  else
  {
    MR_Word RvalTypeWidth_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word RvalsTypesWidths_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word BoxedRvalTypeWidth_16;
    MR_Word BoxedRvalsTypesWidths_17;
    MR_Word Rval_19 = ((MR_Word) ((MR_hl_field(0, RvalTypeWidth_14, (MR_Integer) 0))));
    MR_Word MLDS_Type_20 = ((MR_Word) ((MR_hl_field(0, RvalTypeWidth_14, (MR_Integer) 1))));
    MR_Word ArgPosWidth_21 = ((MR_Word) ((MR_hl_field(0, RvalTypeWidth_14, (MR_Integer) 2))));
    MR_Word ArgWidth_22;
    MR_Word BoxedRval_23;
    MR_Word Var_26;
    MR_Word STATE_VARIABLE_GlobalData_30_30;

    ArgWidth_22 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_21);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_26, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[6]));
      MR_hl_field(0, Var_26, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_box_extra_const_rval_list_lld_6_p_0_1));
      MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_26, 3) = ((MR_Box) (ArgWidth_22));
      MR_hl_field(0, Var_26, 4) = ((MR_Box) ((MR_Integer) 2));
    }
    mercury__require__expect_3_p_0(Var_26, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_box_extra_const_rval_list_lld\'/6", (MR_String) "ArgWidth != aw_full_word");
    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_1, Context_2, MLDS_Type_20, ArgWidth_22, Rval_19, &BoxedRval_23, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_30_30);
    {
      BoxedRvalTypeWidth_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, BoxedRvalTypeWidth_16, 0) = ((MR_Box) (BoxedRval_23));
      MR_hl_field(0, BoxedRvalTypeWidth_16, 1) = ((MR_Box) (MLDS_Type_20));
      MR_hl_field(0, BoxedRvalTypeWidth_16, 2) = ((MR_Box) (ArgPosWidth_21));
    }
    ml_backend__ml_unify_gen_construct__ml_gen_box_extra_const_rval_list_lld_6_p_0(ModuleInfo_1, Context_2, RvalsTypesWidths_15, &BoxedRvalsTypesWidths_17, STATE_VARIABLE_GlobalData_30_30, STATE_VARIABLE_GlobalData_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (BoxedRvalTypeWidth_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (BoxedRvalsTypesWidths_17));
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
    MR_Word ArgVarTypeWidth_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgVarsTypesWidths_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word BoxedRvalTypeWidth_16;
    MR_Word BoxedRvalsTypesWidths_17;
    MR_Word ArgVar_19 = ((MR_Word) ((MR_hl_field(0, ArgVarTypeWidth_14, (MR_Integer) 0))));
    MR_Word ArgPosWidth_21 = ((MR_Word) ((MR_hl_field(0, ArgVarTypeWidth_14, (MR_Integer) 2))));
    MR_Word GroundTerm_22;
    MR_Word Rval_23;
    MR_Word MLDS_Type_25;
    MR_Word ModuleInfo_26;
    MR_Word ArgWidth_27;
    MR_Word BoxedRval_28;
    MR_Word STATE_VARIABLE_GlobalData_31_31;

    ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_p_0(Info_1, ArgVar_19, &GroundTerm_22);
    Rval_23 = ((MR_Word) ((MR_hl_field(0, GroundTerm_22, (MR_Integer) 0))));
    MLDS_Type_25 = ((MR_Word) ((MR_hl_field(0, GroundTerm_22, (MR_Integer) 2))));
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_26);
    ArgWidth_27 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_21);
    ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_26, Context_2, MLDS_Type_25, ArgWidth_27, Rval_23, &BoxedRval_28, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_31_31);
    {
      BoxedRvalTypeWidth_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, BoxedRvalTypeWidth_16, 0) = ((MR_Box) (BoxedRval_28));
      MR_hl_field(0, BoxedRvalTypeWidth_16, 1) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(0, BoxedRvalTypeWidth_16, 2) = ((MR_Box) (ArgPosWidth_21));
    }
    ml_backend__ml_unify_gen_construct__ml_gen_box_const_rval_list_lld_6_p_0(Info_1, Context_2, ArgVarsTypesWidths_15, &BoxedRvalsTypesWidths_17, STATE_VARIABLE_GlobalData_31_31, STATE_VARIABLE_GlobalData_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (BoxedRvalTypeWidth_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (BoxedRvalsTypesWidths_17));
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
    MR_Word ArgVarTypeWidth_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgVarsTypesWidths_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word FieldRvalTypeWidth_16;
    MR_Word FieldRvalsTypesWidths_17;
    MR_Word ArgVar_19 = ((MR_Word) ((MR_hl_field(0, ArgVarTypeWidth_14, (MR_Integer) 0))));
    MR_Word ConsArgType_20 = ((MR_Word) ((MR_hl_field(0, ArgVarTypeWidth_14, (MR_Integer) 1))));
    MR_Word ConsArgPosWidth_21 = ((MR_Word) ((MR_hl_field(0, ArgVarTypeWidth_14, (MR_Integer) 2))));
    MR_Word ArgType_22;
    MR_Word ArgRval_23;
    MR_Word ModuleInfo_24;
    MR_Word ConsWidth_26;
    MR_Word FieldType_27;
    MR_Word FieldRval_28;
    MR_Word STATE_VARIABLE_GlobalData_31_31;
    MR_Word GroundTerm_33;

    ml_backend__ml_code_util__ml_variable_type_direct_3_p_0(Info_1, ArgVar_19, &ArgType_22);
    ml_backend__ml_gen_info__ml_gen_info_lookup_const_var_3_p_0(Info_1, ArgVar_19, &GroundTerm_33);
    ArgRval_23 = ((MR_Word) ((MR_hl_field(0, GroundTerm_33, (MR_Integer) 0))));
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_24);
    ConsWidth_26 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ConsArgPosWidth_21);
    ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_24, (MR_Integer) 1, ConsArgType_20, ConsWidth_26, &FieldType_27);
    switch (MR_tag((MR_Word) FieldType_27)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word MLDS_ArgType_38;

          MLDS_ArgType_38 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_24, ArgType_22);
          ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(ModuleInfo_24, Context_2, MLDS_ArgType_38, (MR_Integer) 2, ArgRval_23, &FieldRval_28, STATE_VARIABLE_GlobalData_0_5, &STATE_VARIABLE_GlobalData_31_31);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_24, ArgType_22, FieldType_27, (MR_Integer) 0, ArgRval_23, &FieldRval_28);
          STATE_VARIABLE_GlobalData_31_31 = STATE_VARIABLE_GlobalData_0_5;
        }
        break;
    }
    {
      FieldRvalTypeWidth_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FieldRvalTypeWidth_16, 0) = ((MR_Box) (FieldRval_28));
      MR_hl_field(0, FieldRvalTypeWidth_16, 1) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(0, FieldRvalTypeWidth_16, 2) = ((MR_Box) (ConsArgPosWidth_21));
    }
    ml_backend__ml_unify_gen_construct__ml_gen_box_or_unbox_const_rval_list_hld_6_p_0(Info_1, Context_2, ArgVarsTypesWidths_15, &FieldRvalsTypesWidths_17, STATE_VARIABLE_GlobalData_31_31, STATE_VARIABLE_GlobalData_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FieldRvalTypeWidth_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (FieldRvalsTypesWidths_17));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_16_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__633__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_86;

  conv1_LambdaHeadVar__2_86 = ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_reuse_cell__624__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_86));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_83;

  ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_new_object_reuse_cell__609__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_83);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_83));
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_16_p_0(
  MR_Word MaybeConsId_17,
  MR_Word MaybeCtorName_18,
  MR_Word Ptag_19,
  MR_Word ExplicitSectag_20,
  MR_Word LHSVar_21,
  MR_Word LHSVarEntry_22,
  MR_Word ExtraRHSRvalsTypesWidths_23,
  MR_Word RHSVarsTypesWidths_24,
  MR_Word ArgModes_25,
  MR_Word TakeAddr_26,
  MR_Word CellToReuse_27,
  MR_Word Context_28,
  MR_Word * Defns_29,
  MR_Word * Stmts_30,
  MR_Word STATE_VARIABLE_Info_0_77,
  MR_Word * STATE_VARIABLE_Info_78)
{
  MR_bool succeeded;
  MR_Word ReuseVar_32 = ((MR_Word) ((MR_hl_field(0, CellToReuse_27, (MR_Integer) 0))));
  MR_Word ReuseConsIds_33 = ((MR_Word) ((MR_hl_field(0, CellToReuse_27, (MR_Integer) 1))));
  MR_Word ConsId_35;
  MR_Word ReusePrimaryTags0_40;
  MR_Word ReusePrimaryTags_41;
  MR_Word LHSType_42;
  MR_Word ConsTag_43;
  MR_Word PrimaryTag_44;
  MR_Word InitOffSet_45;
  MR_Word RHSVars_46;
  MR_Word RHSVarRepns_50;
  MR_Word ReuseVarLval_51;
  MR_Word DifferentTags_53;
  MR_Word ReuseVarRval_54;
  MR_Word LHS_MLDS_Type_61;
  MR_Word CastReuseVarRval_62;
  MR_Word HeapTestStmt_63;
  MR_Word LHSLval_64;
  MR_Word MaybePtag_65;
  MR_Word ExtraRvalStmts_66;
  MR_Word FieldGen_67;
  MR_Word TakeAddrInfos_69;
  MR_Word FieldStmts_70;
  MR_Word TakeAddrStmts_71;
  MR_Word ThenStmts_72;
  MR_Word ThenStmt_73;
  MR_Word DynamicStmts_74;
  MR_Word ElseStmt_75;
  MR_Word IfStmt_76;
  MR_Word Var_81;
  MR_Word Var_87;
  MR_Word Var_99;
  MR_Word STATE_VARIABLE_Info_101_101;
  MR_Word STATE_VARIABLE_Info_102_102;
  MR_Word Var_103;
  MR_Word Var_106;
  MR_Word Var_110;
  MR_Word Var_111;
  MR_Word Var_112;

  if ((MaybeConsId_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_new_object_reuse_cell\'/16", (MR_String) "attempt to reuse closure");
      return;
    }
  else
    ConsId_35 = ((MR_Word) ((MR_hl_field(1, MaybeConsId_17, (MR_Integer) 0))));
  {
    Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_81, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_5[1]));
    MR_hl_field(0, Var_81, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_16_p_0_1));
    MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_81, 3) = ((MR_Box) (STATE_VARIABLE_Info_0_77));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), Var_81, ReuseConsIds_33, &ReusePrimaryTags0_40);
  mercury__list__remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), ReusePrimaryTags0_40, &ReusePrimaryTags_41);
  LHSType_42 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_22, (MR_Integer) 1))));
  ml_backend__ml_unify_gen_util__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_77, ConsId_35, &ConsTag_43);
  ml_backend__ml_unify_gen_util__ml_tag_ptag_and_initial_offset_3_p_0(ConsTag_43, &PrimaryTag_44, &InitOffSet_45);
  RHSVars_46 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[3]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[6]), RHSVarsTypesWidths_24);
  ml_backend__ml_unify_gen_util__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_77, LHSType_42, ConsId_35, InitOffSet_45, RHSVars_46, &RHSVarRepns_50);
  ml_backend__ml_code_util__ml_gen_var_direct_3_p_0(STATE_VARIABLE_Info_0_77, ReuseVar_32, &ReuseVarLval_51);
  {
    Var_87 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_87, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[5]));
    MR_hl_field(0, Var_87, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_new_object_reuse_cell_16_p_0_3));
    MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_87, 3) = ((MR_Box) (PrimaryTag_44));
  }
  mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), Var_87, ReusePrimaryTags_41, &DifferentTags_53);
  if ((DifferentTags_53 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      ReuseVarRval_54 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, ReuseVarRval_54, 0) = ((MR_Box) (ReuseVarLval_51));
    }
  else
  {
    MR_Word Var_129 = ((MR_Word) ((MR_hl_field(1, DifferentTags_53, (MR_Integer) 1))));
    MR_Word Var_130 = ((MR_Word) ((MR_hl_field(1, DifferentTags_53, (MR_Integer) 0))));

    if ((Var_129 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      uint8_t ReusePrimaryTagUint8_56 = (uint8_t) (Var_130);
      MR_Integer ReusePrimaryTagInt_57;
      MR_Word Var_90;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_94;

      ReusePrimaryTagInt_57 = mercury__uint8__cast_to_int_1_f_0(ReusePrimaryTagUint8_56);
      {
        Var_92 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_92, 0) = ((MR_Box) (ReuseVarLval_51));
      }
      {
        Var_94 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_94, 0) = ((MR_Box) (ReusePrimaryTagInt_57));
      }
      {
        Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_93, 1) = ((MR_Box) (Var_94));
      }
      {
        Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_90, 1) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, Var_90, 2) = ((MR_Box) (Var_92));
        MR_hl_field(3, Var_90, 3) = ((MR_Box) (Var_93));
      }
      {
        ReuseVarRval_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ReuseVarRval_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, ReuseVarRval_54, 1) = ((MR_Box) (PrimaryTag_44));
        MR_hl_field(3, ReuseVarRval_54, 2) = ((MR_Box) (Var_90));
      }
    }
    else
    {
      MR_Word Var_96;
      MR_Word Var_98;

      {
        Var_98 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_98, 0) = ((MR_Box) (ReuseVarLval_51));
      }
      {
        Var_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, Var_96, 2) = ((MR_Box) (Var_98));
      }
      {
        ReuseVarRval_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ReuseVarRval_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, ReuseVarRval_54, 1) = ((MR_Box) (PrimaryTag_44));
        MR_hl_field(3, ReuseVarRval_54, 2) = ((MR_Box) (Var_96));
      }
    }
  }
  ml_backend__ml_code_util__ml_gen_mlds_type_3_p_0(STATE_VARIABLE_Info_0_77, LHSType_42, &LHS_MLDS_Type_61);
  {
    CastReuseVarRval_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, CastReuseVarRval_62, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, CastReuseVarRval_62, 1) = ((MR_Box) (LHS_MLDS_Type_61));
    MR_hl_field(3, CastReuseVarRval_62, 2) = ((MR_Box) (ReuseVarRval_54));
  }
  ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_77, LHSVar_21, LHSVarEntry_22, &LHSLval_64);
  {
    Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_99, 1) = ((MR_Box) (LHSLval_64));
    MR_hl_field(3, Var_99, 2) = ((MR_Box) (CastReuseVarRval_62));
  }
  {
    HeapTestStmt_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeapTestStmt_63, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, HeapTestStmt_63, 1) = ((MR_Box) (Var_99));
    MR_hl_field(3, HeapTestStmt_63, 2) = ((MR_Box) (Context_28));
  }
  {
    MaybePtag_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybePtag_65, 0) = ((MR_Box) (Ptag_19));
  }
  ml_backend__ml_unify_gen_construct__ml_gen_extra_arg_assigns_9_p_0(LHSLval_64, LHS_MLDS_Type_61, MaybePtag_65, (MR_Integer) 0, ExtraRHSRvalsTypesWidths_23, Context_28, &ExtraRvalStmts_66, STATE_VARIABLE_Info_0_77, &STATE_VARIABLE_Info_101_101);
  ml_backend__ml_unify_gen_util__decide_field_gen_7_p_0(STATE_VARIABLE_Info_101_101, LHSLval_64, LHSType_42, ConsId_35, ConsTag_43, Ptag_19, &FieldGen_67);
  ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_1(FieldGen_67, RHSVarRepns_50, ArgModes_25, (MR_Integer) 1, Context_28, TakeAddr_26, &TakeAddrInfos_69, Defns_29, &FieldStmts_70, STATE_VARIABLE_Info_101_101, &STATE_VARIABLE_Info_102_102);
  ml_backend__ml_unify_gen_construct__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_69, LHSLval_64, LHS_MLDS_Type_61, MaybePtag_65, Context_28, STATE_VARIABLE_Info_102_102, &TakeAddrStmts_71);
  Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), FieldStmts_70, TakeAddrStmts_71);
  ThenStmts_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ExtraRvalStmts_66, Var_103);
  {
    ThenStmt_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ThenStmt_73, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ThenStmt_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ThenStmt_73, 2) = ((MR_Box) (ThenStmts_72));
    MR_hl_field(0, ThenStmt_73, 3) = ((MR_Box) (Context_28));
  }
  {
    Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_106, 0) = ((MR_Box) (ConsId_35));
  }
  ml_backend__ml_unify_gen_construct__ml_gen_new_object_dynamically_15_p_0(Var_106, MaybeCtorName_18, Ptag_19, ExplicitSectag_20, LHSVar_21, LHSVarEntry_22, ExtraRHSRvalsTypesWidths_23, RHSVarsTypesWidths_24, ArgModes_25, (MR_Integer) 1, TakeAddr_26, Context_28, &DynamicStmts_74, STATE_VARIABLE_Info_102_102, STATE_VARIABLE_Info_78);
  {
    ElseStmt_75 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ElseStmt_75, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ElseStmt_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ElseStmt_75, 2) = ((MR_Box) (DynamicStmts_74));
    MR_hl_field(0, ElseStmt_75, 3) = ((MR_Box) (Context_28));
  }
  {
    Var_110 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_110, 0) = ((MR_Box) (LHSLval_64));
  }
  {
    Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_111, 0) = ((MR_Box) (ElseStmt_75));
  }
  {
    IfStmt_76 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, IfStmt_76, 0) = ((MR_Box) (Var_110));
    MR_hl_field(2, IfStmt_76, 1) = ((MR_Box) (ThenStmt_73));
    MR_hl_field(2, IfStmt_76, 2) = ((MR_Box) (Var_111));
    MR_hl_field(2, IfStmt_76, 3) = ((MR_Box) (Context_28));
  }
  {
    Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_112, 0) = ((MR_Box) (IfStmt_76));
    MR_hl_field(1, Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Stmts_30 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (HeapTestStmt_63));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_112));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_extra_arg_assigns_9_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__is_apw_full_1_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_extra_arg_assigns_9_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__ml_gen_extra_arg_assigns__1098__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
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
  MR_bool succeeded;

  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
  }
  else
  {
    MR_Word ExtraRvalTypeWidth_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
    MR_Word ExtraRvalsTypesWidths_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
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
      MR_hl_field(0, Var_37, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[3]));
      MR_hl_field(0, Var_37, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_extra_arg_assigns_9_p_0_1));
      MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_37, 3) = ((MR_Box) (HighLevelData_28));
      MR_hl_field(0, Var_37, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_37, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_extra_arg_assigns\'/9", (MR_String) "high-level data");
    {
      Var_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_42, 0) = ((MR_Box) (CurOffset_4));
    }
    {
      Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_41, 1) = ((MR_Box) (Var_42));
    }
    {
      FieldId_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FieldId_29, 0) = ((MR_Box) (Var_41));
    }
    ExtraRval_30 = ((MR_Word) ((MR_hl_field(0, ExtraRvalTypeWidth_22, (MR_Integer) 0))));
    ExtraType_31 = ((MR_Word) ((MR_hl_field(0, ExtraRvalTypeWidth_22, (MR_Integer) 1))));
    ArgPosWidth_32 = ((MR_Word) ((MR_hl_field(0, ExtraRvalTypeWidth_22, (MR_Integer) 2))));
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_43, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_7[0]));
      MR_hl_field(0, Var_43, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_gen_extra_arg_assigns_9_p_0_2));
      MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_43, 3) = ((MR_Box) (ArgPosWidth_32));
    }
    mercury__require__expect_3_p_0(Var_43, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_gen_extra_arg_assigns\'/9", (MR_String) "ArgPosWidth != apw_full(_)");
    NextOffset_33 = (MR_Integer) ((MR_Unsigned) CurOffset_4 + (MR_Unsigned) 1);
    {
      Var_47 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_47, 0) = ((MR_Box) (VarLval_1));
    }
    {
      FieldLval_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FieldLval_34, 0) = ((MR_Box) (MaybePrimaryTag_3));
      MR_hl_field(0, FieldLval_34, 1) = ((MR_Box) (Var_47));
      MR_hl_field(0, FieldLval_34, 2) = ((MR_Box) (MLDS_VarType_2));
      MR_hl_field(0, FieldLval_34, 3) = ((MR_Box) (FieldId_29));
      MR_hl_field(0, FieldLval_34, 4) = ((MR_Box) (ExtraType_31));
    }
    Stmt_25 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_34, ExtraRval_30, Context_6);
    ml_backend__ml_unify_gen_construct__ml_gen_extra_arg_assigns_9_p_0(VarLval_1, MLDS_VarType_2, MaybePrimaryTag_3, NextOffset_33, ExtraRvalsTypesWidths_23, Context_6, &Stmts_26, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_25));
      MR_hl_field(1, base, 1) = ((MR_Box) (Stmts_26));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_dynamically_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_64;

  conv0_LambdaHeadVar__2_64 = ml_backend__ml_unify_gen_construct__IntroducedFrom__func__ml_gen_new_object_dynamically__511__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_64));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__ml_gen_new_object_dynamically_15_p_0(
  MR_Word MaybeConsId_16,
  MR_Word MaybeCtorName_17,
  MR_Word Ptag_18,
  MR_Word ExplicitSectag_19,
  MR_Word LHSVar_20,
  MR_Word LHSVarEntry_21,
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
  MR_Word Var_66;

  ml_backend__ml_gen_info__ml_gen_info_get_use_atomic_cells_2_p_0(STATE_VARIABLE_Info_0_58, &UseAtomicCells_30);
  switch (UseAtomicCells_30) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      MayUseAtomic0_31 = (MR_Integer) 1;
      break;
    case (MR_Integer) 0:
      MayUseAtomic0_31 = (MR_Integer) 0;
      break;
  }
  ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0(STATE_VARIABLE_Info_0_58, RHSVarsTypesWidths_23, ArgModes_24, FirstArgNum_25, TakeAddr_26, &TakeAddrInfos_32, &PackedRHSRvalsTypesWidths_33, MayUseAtomic0_31, &MayUseAtomic_34);
  RHSRvalsTypesWidths_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0), ExtraRHSRvalsTypesWidths_22, PackedRHSRvalsTypesWidths_33);
  mercury__list__length_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0), RHSRvalsTypesWidths_35, &Size_36);
  {
    Var_60 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_60, 0) = ((MR_Box) (Size_36));
  }
  {
    SizeInWordsRval_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, SizeInWordsRval_37, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, SizeInWordsRval_37, 1) = ((MR_Box) (Var_60));
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
          MaybeAllocId_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeAllocId_46, 0) = ((MR_Box) (AllocId_44));
        }
      }
      break;
  }
  ml_backend__ml_code_util__ml_gen_var_4_p_0(*STATE_VARIABLE_Info_59, LHSVar_20, LHSVarEntry_21, &LHSLval_47);
  ArgRvalsTypes_52 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[5]), RHSRvalsTypesWidths_35);
  Var_65 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_21, (MR_Integer) 1))));
  ml_backend__ml_code_util__ml_gen_mlds_type_3_p_0(*STATE_VARIABLE_Info_59, Var_65, &LHS_MLDS_Type_53);
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (SizeInWordsRval_37));
  }
  {
    MakeNewObject_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MakeNewObject_54, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, MakeNewObject_54, 1) = ((MR_Box) (LHSLval_47));
    MR_hl_field(3, MakeNewObject_54, 2) = ((MR_Box) (Ptag_18));
    MR_hl_field(3, MakeNewObject_54, 3) = (MR_Box) ((MR_Unsigned) (ExplicitSectag_19));
    MR_hl_field(3, MakeNewObject_54, 4) = ((MR_Box) (LHS_MLDS_Type_53));
    MR_hl_field(3, MakeNewObject_54, 5) = ((MR_Box) (Var_66));
    MR_hl_field(3, MakeNewObject_54, 6) = ((MR_Box) (MaybeCtorName_17));
    MR_hl_field(3, MakeNewObject_54, 7) = ((MR_Box) (ArgRvalsTypes_52));
    MR_hl_field(3, MakeNewObject_54, 8) = (MR_Box) ((MR_Unsigned) (MayUseAtomic_34));
    MR_hl_field(3, MakeNewObject_54, 9) = ((MR_Box) (MaybeAllocId_46));
  }
  {
    MakeNewObjStmt_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MakeNewObjStmt_55, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, MakeNewObjStmt_55, 1) = ((MR_Box) (MakeNewObject_54));
    MR_hl_field(3, MakeNewObjStmt_55, 2) = ((MR_Box) (Context_27));
  }
  {
    MaybePtag_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybePtag_56, 0) = ((MR_Box) (Ptag_18));
  }
  ml_backend__ml_unify_gen_construct__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_32, LHSLval_47, LHS_MLDS_Type_53, MaybePtag_56, Context_27, *STATE_VARIABLE_Info_59, &TakeAddrStmts_57);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Stmts_28 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (MakeNewObjStmt_55));
    MR_hl_field(1, base, 1) = ((MR_Box) (TakeAddrStmts_57));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__ml_not_taking_addr_of_cur_arg_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__ml_not_taking_addr_of_cur_arg_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__ml_not_taking_addr_of_cur_arg_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_args\'/9", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_177 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_178 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_args\'/9", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word ArgMode_43 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgModes_44 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word RHSVar_50 = ((MR_Word) ((MR_hl_field(0, Var_178, (MR_Integer) 0))));
      MR_Word ConsArgType_51 = ((MR_Word) ((MR_hl_field(0, Var_178, (MR_Integer) 1))));
      MR_Word ArgPosWidth_52 = ((MR_Word) ((MR_hl_field(0, Var_178, (MR_Integer) 2))));
      MR_Word HeadTakeAddrInfos_72;
      MR_Word HeadRHSRvalsTypesWidths_74;
      MR_Word LeftOverRHSVarsTypesWidths_89;
      MR_Word LeftOverArgModes_90;
      MR_Integer LeftOverArgNum_91;
      MR_Word TailTakeAddrInfos_111;
      MR_Word TailRHSRvalsTypesWidths_112;
      MR_Word STATE_VARIABLE_MayUseAtomic_116_116;
      MR_Word STATE_VARIABLE_TakeAddr_120_120;

      switch (MR_tag((MR_Word) ArgPosWidth_52)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_154;

            {
              Var_154 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_154, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[0]));
              MR_hl_field(0, Var_154, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0_2));
              MR_hl_field(0, Var_154, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_154, 3) = ((MR_Box) (STATE_VARIABLE_TakeAddr_0_5));
              MR_hl_field(0, Var_154, 4) = ((MR_Box) (CurArgNum_4));
            }
            mercury__require__expect_3_p_0(Var_154, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_args\'/9", (MR_String) "taking address of not apw_full");
            HeadRHSRvalsTypesWidths_74 = (MR_Word) ((MR_Unsigned) 0U);
            HeadTakeAddrInfos_72 = (MR_Word) ((MR_Unsigned) 0U);
            LeftOverRHSVarsTypesWidths_89 = Var_177;
            LeftOverArgModes_90 = ArgModes_44;
            LeftOverArgNum_91 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) 1);
            STATE_VARIABLE_TakeAddr_120_120 = STATE_VARIABLE_TakeAddr_0_5;
            STATE_VARIABLE_MayUseAtomic_116_116 = STATE_VARIABLE_MayUseAtomic_0_8;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CellOffset_68;
            MR_Word RHSRval_69;
            MR_Word RHSRvalTypeWidth_73;
            MR_Word VarTable_181;
            MR_Word RHSVarEntry_182;
            MR_Word RHSType_183;
            MR_Word RHSLval_184;
            MR_Word ModuleInfo_185;
            MR_Word HighLevelData_186;
            MR_Word ArgWidth_187;
            MR_Word BoxedRHSType_188;
            MR_Word RHS_MLDS_Type_189;
            MR_Word STATE_VARIABLE_TakeAddr_117_117;
            MR_Integer Var_176;

            ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(Info_1, &VarTable_181);
            parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_181, RHSVar_50, &RHSVarEntry_182);
            RHSType_183 = ((MR_Word) ((MR_hl_field(0, RHSVarEntry_182, (MR_Integer) 1))));
            ml_backend__ml_code_util__ml_gen_var_4_p_0(Info_1, RHSVar_50, RHSVarEntry_182, &RHSLval_184);
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_185);
            check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_185, RHSType_183, STATE_VARIABLE_MayUseAtomic_0_8, &STATE_VARIABLE_MayUseAtomic_116_116);
            ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_1, &HighLevelData_186);
            ArgWidth_187 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_52);
            ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_185, HighLevelData_186, ConsArgType_51, ArgWidth_187, &BoxedRHSType_188);
            RHS_MLDS_Type_189 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_185, BoxedRHSType_188);
            CellOffset_68 = ((MR_Word) ((MR_hl_field(1, ArgPosWidth_52, (MR_Integer) 1))));
            succeeded = (STATE_VARIABLE_TakeAddr_0_5 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_176 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TakeAddr_0_5, (MR_Integer) 0))));
              STATE_VARIABLE_TakeAddr_117_117 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TakeAddr_0_5, (MR_Integer) 1))));
              succeeded = (CurArgNum_4 == Var_176);
            }
            if (succeeded)
            {
              MR_Word OrigMLDS_Type_70;
              MR_Word TakeAddrInfo_71;
              MR_Word Var_118;

              STATE_VARIABLE_TakeAddr_120_120 = STATE_VARIABLE_TakeAddr_117_117;
              {
                Var_118 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_118, 0) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(3, Var_118, 1) = ((MR_Box) (RHS_MLDS_Type_189));
              }
              {
                RHSRval_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, RHSRval_69, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, RHSRval_69, 1) = ((MR_Box) (Var_118));
              }
              OrigMLDS_Type_70 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_185, ConsArgType_51);
              {
                TakeAddrInfo_71 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TakeAddrInfo_71, 0) = ((MR_Box) (RHSVar_50));
                MR_hl_field(0, TakeAddrInfo_71, 1) = ((MR_Box) (CellOffset_68));
                MR_hl_field(0, TakeAddrInfo_71, 2) = ((MR_Box) (OrigMLDS_Type_70));
                MR_hl_field(0, TakeAddrInfo_71, 3) = ((MR_Box) (RHS_MLDS_Type_189));
              }
              {
                HeadTakeAddrInfos_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, HeadTakeAddrInfos_72, 0) = ((MR_Box) (TakeAddrInfo_71));
                MR_hl_field(1, HeadTakeAddrInfos_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            else
            {
              ml_backend__ml_unify_gen_construct__ml_maybe_box_unbox_or_null_lval_8_p_0(ModuleInfo_185, ConsArgType_51, RHSType_183, BoxedRHSType_188, RHS_MLDS_Type_189, ArgMode_43, RHSLval_184, &RHSRval_69);
              HeadTakeAddrInfos_72 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_TakeAddr_120_120 = STATE_VARIABLE_TakeAddr_0_5;
            }
            {
              RHSRvalTypeWidth_73 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, RHSRvalTypeWidth_73, 0) = ((MR_Box) (RHSRval_69));
              MR_hl_field(0, RHSRvalTypeWidth_73, 1) = ((MR_Box) (RHS_MLDS_Type_189));
              MR_hl_field(0, RHSRvalTypeWidth_73, 2) = ((MR_Box) (ArgPosWidth_52));
            }
            {
              HeadRHSRvalsTypesWidths_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HeadRHSRvalsTypesWidths_74, 0) = ((MR_Box) (RHSRvalTypeWidth_73));
              MR_hl_field(1, HeadRHSRvalsTypesWidths_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            LeftOverRHSVarsTypesWidths_89 = Var_177;
            LeftOverArgModes_90 = ArgModes_44;
            LeftOverArgNum_91 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) 1);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word VarTable_58;
            MR_Word RHSVarEntry_59;
            MR_Word RHSType_60;
            MR_Word RHSLval_61;
            MR_Word ModuleInfo_62;
            MR_Word HighLevelData_63;
            MR_Word ArgWidth_64;
            MR_Word BoxedRHSType_65;
            MR_Word RHS_MLDS_Type_66;
            MR_Word DoubleWordKind_76;
            MR_Word SubstType_78;
            MR_Word RHSRvalA_79;
            MR_Word RHSRvalB_80;
            MR_Integer ArgOnly_81;
            MR_Word ArgOnlyOffsetA_82;
            MR_Word ArgOnlyOffsetB_83;
            MR_Integer Cell_84;
            MR_Word CellOffsetA_85;
            MR_Word CellOffsetB_86;
            MR_Word RHSRvalTypeWidthA_87;
            MR_Word RHSRvalTypeWidthB_88;
            MR_Word Var_122;
            MR_Integer Var_135;
            MR_Integer Var_137;
            MR_Word Var_139;
            MR_Word Var_140;
            MR_Word Var_141;
            MR_Word RHSRval_162;
            MR_Word Var_125;

            ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(Info_1, &VarTable_58);
            parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_58, RHSVar_50, &RHSVarEntry_59);
            RHSType_60 = ((MR_Word) ((MR_hl_field(0, RHSVarEntry_59, (MR_Integer) 1))));
            ml_backend__ml_code_util__ml_gen_var_4_p_0(Info_1, RHSVar_50, RHSVarEntry_59, &RHSLval_61);
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_62);
            check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_62, RHSType_60, STATE_VARIABLE_MayUseAtomic_0_8, &STATE_VARIABLE_MayUseAtomic_116_116);
            ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_1, &HighLevelData_63);
            ArgWidth_64 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_52);
            ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_62, HighLevelData_63, ConsArgType_51, ArgWidth_64, &BoxedRHSType_65);
            RHS_MLDS_Type_66 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_62, BoxedRHSType_65);
            ArgOnlyOffsetA_82 = ((MR_Word) ((MR_hl_field(2, ArgPosWidth_52, (MR_Integer) 0))));
            CellOffsetA_85 = ((MR_Word) ((MR_hl_field(2, ArgPosWidth_52, (MR_Integer) 1))));
            DoubleWordKind_76 = ((MR_Unsigned) ((MR_hl_field(2, ArgPosWidth_52, (MR_Integer) 2))) & (MR_Integer) 3);
            {
              Var_122 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_122, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[0]));
              MR_hl_field(0, Var_122, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0_1));
              MR_hl_field(0, Var_122, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_122, 3) = ((MR_Box) (STATE_VARIABLE_TakeAddr_0_5));
              MR_hl_field(0, Var_122, 4) = ((MR_Box) (CurArgNum_4));
            }
            mercury__require__expect_3_p_0(Var_122, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_args\'/9", (MR_String) "taking address of apw_double");
            ml_backend__ml_unify_gen_construct__ml_maybe_box_unbox_or_null_lval_8_p_0(ModuleInfo_62, ConsArgType_51, RHSType_60, BoxedRHSType_65, RHS_MLDS_Type_66, ArgMode_43, RHSLval_61, &RHSRval_162);
            succeeded = ((((MR_tag((MR_Word) RHSRval_162)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RHSRval_162, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_125 = ((MR_Word) ((MR_hl_field(3, RHSRval_162, (MR_Integer) 1))));
              succeeded = ((((MR_tag((MR_Word) Var_125)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_125, (MR_Integer) 0)))) == (MR_Integer) 20)));
              if (succeeded)
              {
              }
            }
            if (succeeded)
            {
              SubstType_78 = (MR_Word) ((MR_Unsigned) 20U);
              RHSRvalA_79 = (MR_Word) (MR_mkword(3, &ml_backend__ml_unify_gen_construct_scalar_common_1[11]));
              RHSRvalB_80 = (MR_Word) (MR_mkword(3, &ml_backend__ml_unify_gen_construct_scalar_common_1[11]));
            }
            else
            {
              SubstType_78 = (MR_Word) (MR_mkword(3, &ml_backend__ml_unify_gen_construct_scalar_common_1[12]));
              switch (DoubleWordKind_76) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      RHSRvalA_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, RHSRvalA_79, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(3, RHSRvalA_79, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                      MR_hl_field(3, RHSRvalA_79, 2) = ((MR_Box) (RHSRval_162));
                    }
                    {
                      RHSRvalB_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, RHSRvalB_80, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(3, RHSRvalB_80, 1) = ((MR_Box) ((MR_Unsigned) 48U));
                      MR_hl_field(3, RHSRvalB_80, 2) = ((MR_Box) (RHSRval_162));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      RHSRvalA_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, RHSRvalA_79, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(3, RHSRvalA_79, 1) = ((MR_Box) ((MR_Unsigned) 52U));
                      MR_hl_field(3, RHSRvalA_79, 2) = ((MR_Box) (RHSRval_162));
                    }
                    {
                      RHSRvalB_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, RHSRvalB_80, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(3, RHSRvalB_80, 1) = ((MR_Box) ((MR_Unsigned) 56U));
                      MR_hl_field(3, RHSRvalB_80, 2) = ((MR_Box) (RHSRval_162));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      RHSRvalA_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, RHSRvalA_79, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(3, RHSRvalA_79, 1) = ((MR_Box) ((MR_Unsigned) 60U));
                      MR_hl_field(3, RHSRvalA_79, 2) = ((MR_Box) (RHSRval_162));
                    }
                    {
                      RHSRvalB_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, RHSRvalB_80, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(3, RHSRvalB_80, 1) = ((MR_Box) ((MR_Unsigned) 64U));
                      MR_hl_field(3, RHSRvalB_80, 2) = ((MR_Box) (RHSRval_162));
                    }
                  }
                  break;
              }
            }
            ArgOnly_81 = (MR_Integer) (ArgOnlyOffsetA_82);
            Var_135 = (MR_Integer) ((MR_Unsigned) ArgOnly_81 + (MR_Unsigned) 1);
            ArgOnlyOffsetB_83 = (MR_Word) (Var_135);
            Cell_84 = (MR_Integer) (CellOffsetA_85);
            Var_137 = (MR_Integer) ((MR_Unsigned) Cell_84 + (MR_Unsigned) 1);
            CellOffsetB_86 = (MR_Word) (Var_137);
            {
              Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_139, 0) = ((MR_Box) (ArgOnlyOffsetA_82));
              MR_hl_field(1, Var_139, 1) = ((MR_Box) (CellOffsetA_85));
            }
            {
              RHSRvalTypeWidthA_87 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, RHSRvalTypeWidthA_87, 0) = ((MR_Box) (RHSRvalA_79));
              MR_hl_field(0, RHSRvalTypeWidthA_87, 1) = ((MR_Box) (SubstType_78));
              MR_hl_field(0, RHSRvalTypeWidthA_87, 2) = ((MR_Box) (Var_139));
            }
            {
              Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_140, 0) = ((MR_Box) (ArgOnlyOffsetB_83));
              MR_hl_field(1, Var_140, 1) = ((MR_Box) (CellOffsetB_86));
            }
            {
              RHSRvalTypeWidthB_88 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, RHSRvalTypeWidthB_88, 0) = ((MR_Box) (RHSRvalB_80));
              MR_hl_field(0, RHSRvalTypeWidthB_88, 1) = ((MR_Box) (SubstType_78));
              MR_hl_field(0, RHSRvalTypeWidthB_88, 2) = ((MR_Box) (Var_140));
            }
            {
              Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_141, 0) = ((MR_Box) (RHSRvalTypeWidthB_88));
              MR_hl_field(1, Var_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              HeadRHSRvalsTypesWidths_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HeadRHSRvalsTypesWidths_74, 0) = ((MR_Box) (RHSRvalTypeWidthA_87));
              MR_hl_field(1, HeadRHSRvalsTypesWidths_74, 1) = ((MR_Box) (Var_141));
            }
            HeadTakeAddrInfos_72 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_TakeAddr_120_120 = STATE_VARIABLE_TakeAddr_0_5;
            LeftOverRHSVarsTypesWidths_89 = Var_177;
            LeftOverArgModes_90 = ArgModes_44;
            LeftOverArgNum_91 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) 1);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_52, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Shift_92 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_52, (MR_Integer) 3))));
                MR_Word NumBits_93 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_52, (MR_Integer) 4))));
                MR_Word Fill_95 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_52, (MR_Integer) 6))) & (MR_Integer) 7);
                MR_Word HeadBitfield_96;
                MR_Word HeadBitfieldValue_97;
                MR_Word HeadFilledBitfield_98;
                MR_Word RevTailFilledBitfields_99;
                MR_Word TailFilledBitfields_100;
                MR_Word WordRval_101;
                MR_Word CastWordRval_102;
                MR_Word Var_144;
                MR_Integer Var_147;
                MR_Word Var_152;
                MR_Word ModuleInfo_163;
                MR_Word HighLevelData_164;
                MR_Word ArgWidth_165;
                MR_Word BoxedRHSType_166;
                MR_Word RHS_MLDS_Type_167;
                MR_Word CellOffset_168 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_52, (MR_Integer) 2))));
                MR_Word RHSRvalTypeWidth_169;
                MR_Word ArgOnlyOffset_170 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_52, (MR_Integer) 1))));

                {
                  Var_144 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_144, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[0]));
                  MR_hl_field(0, Var_144, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0_3));
                  MR_hl_field(0, Var_144, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_144, 3) = ((MR_Box) (STATE_VARIABLE_TakeAddr_0_5));
                  MR_hl_field(0, Var_144, 4) = ((MR_Box) (CurArgNum_4));
                }
                mercury__require__expect_3_p_0(Var_144, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_args\'/9", (MR_String) "taking address of apw_partial_first");
                ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_163);
                ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_1, &HighLevelData_164);
                ArgWidth_165 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_52);
                ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_163, HighLevelData_164, ConsArgType_51, ArgWidth_165, &BoxedRHSType_166);
                RHS_MLDS_Type_167 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_163, BoxedRHSType_166);
                {
                  HeadBitfield_96 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, HeadBitfield_96, 0) = ((MR_Box) (Shift_92));
                  MR_hl_field(0, HeadBitfield_96, 1) = ((MR_Box) (NumBits_93));
                  MR_hl_field(0, HeadBitfield_96, 2) = (MR_Box) ((MR_Unsigned) (Fill_95));
                }
                ml_backend__ml_unify_gen_construct__ml_maybe_null_var_5_p_0(Info_1, RHSVar_50, ConsArgType_51, ArgMode_43, &HeadBitfieldValue_97);
                {
                  HeadFilledBitfield_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, HeadFilledBitfield_98, 0) = ((MR_Box) (HeadBitfield_96));
                  MR_hl_field(0, HeadFilledBitfield_98, 1) = ((MR_Box) (HeadBitfieldValue_97));
                }
                Var_147 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) 1);
                ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_packed_word_10_p_0(Info_1, Var_177, &LeftOverRHSVarsTypesWidths_89, ArgModes_44, &LeftOverArgModes_90, Var_147, &LeftOverArgNum_91, STATE_VARIABLE_TakeAddr_0_5, (MR_Word) ((MR_Unsigned) 0U), &RevTailFilledBitfields_99);
                mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), RevTailFilledBitfields_99, &TailFilledBitfields_100);
                ml_backend__ml_unify_gen_construct__filled_bitfields_to_packed_word_5_p_0(Info_1, (MR_Integer) 1, HeadFilledBitfield_98, TailFilledBitfields_100, &WordRval_101);
                {
                  CastWordRval_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, CastWordRval_102, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, CastWordRval_102, 1) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(3, CastWordRval_102, 2) = ((MR_Box) (WordRval_101));
                }
                {
                  Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_152, 0) = ((MR_Box) (ArgOnlyOffset_170));
                  MR_hl_field(1, Var_152, 1) = ((MR_Box) (CellOffset_168));
                }
                {
                  RHSRvalTypeWidth_169 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, RHSRvalTypeWidth_169, 0) = ((MR_Box) (CastWordRval_102));
                  MR_hl_field(0, RHSRvalTypeWidth_169, 1) = ((MR_Box) (RHS_MLDS_Type_167));
                  MR_hl_field(0, RHSRvalTypeWidth_169, 2) = ((MR_Box) (Var_152));
                }
                {
                  HeadRHSRvalsTypesWidths_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, HeadRHSRvalsTypesWidths_74, 0) = ((MR_Box) (RHSRvalTypeWidth_169));
                  MR_hl_field(1, HeadRHSRvalsTypesWidths_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                HeadTakeAddrInfos_72 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_TakeAddr_120_120 = STATE_VARIABLE_TakeAddr_0_5;
                STATE_VARIABLE_MayUseAtomic_116_116 = STATE_VARIABLE_MayUseAtomic_0_8;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_args\'/9", (MR_String) "apw_partial_shifted or apw_none_shifted");
                return;
              }
              break;
          }
          break;
      }
      ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_args_9_p_0(Info_1, LeftOverRHSVarsTypesWidths_89, LeftOverArgModes_90, LeftOverArgNum_91, STATE_VARIABLE_TakeAddr_120_120, &TailTakeAddrInfos_111, &TailRHSRvalsTypesWidths_112, STATE_VARIABLE_MayUseAtomic_116_116, STATE_VARIABLE_MayUseAtomic_9);
      *HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_construct__ml_backend__ml_unify_gen_construct__type_ctor_info_mlds_rval_type_and_width_0), HeadRHSRvalsTypesWidths_74, TailRHSRvalsTypesWidths_112);
      *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__type_ctor_info_take_addr_info_0), HeadTakeAddrInfos_72, TailTakeAddrInfos_111);
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__filled_bitfields_to_packed_word_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_RevToOrRvals_19;

  ml_backend__ml_unify_gen_construct__accumulate_translated_filled_bitfield_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_RevToOrRvals_19);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_RevToOrRvals_19));
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__filled_bitfields_to_packed_word_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_RevToOrRvals_19;

  ml_backend__ml_unify_gen_construct__accumulate_translated_filled_bitfield_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_RevToOrRvals_19);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_RevToOrRvals_19));
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__filled_bitfields_to_packed_word_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Unsigned conv1_STATE_VARIABLE_Mask_8;

  ml_backend__ml_unify_gen_construct__accumulate_bitfield_mask_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Unsigned) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Mask_8);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Mask_8));
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__filled_bitfields_to_packed_word_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__count_matching_bitfield__2551__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__filled_bitfields_to_packed_word_5_p_0(
  MR_Word Info_6,
  MR_Word UseMap_7,
  MR_Word HeadFilledBitfield_8,
  MR_Word TailFilledBitfields_9,
  MR_Word * WordRval_10)
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
  MR_Word HeadInstance_33;
  MR_Word TailInstances_34;
  MR_Word HeadFilledPackedWord_35;
  MR_Integer HeadMatches_37;
  MR_Integer HeadNonMatches_38;
  MR_Word HeadMissing_39;
  MR_Word BestInstance_40;
  MR_Integer BestMatches_41;
  MR_Integer Var_44;
  MR_Word HeadFilledBitfieldA_45;
  MR_Word TailFilledBitfieldsA_46;
  MR_Word HeadFilledBitfieldB_47;
  MR_Word TailFilledBitfieldsB_48;
  MR_Integer STATE_VARIABLE_Matches_18_49;
  MR_Integer STATE_VARIABLE_NonMatches_19_50;
  MR_Word STATE_VARIABLE_RevMissingB_20_51;
  MR_Integer STATE_VARIABLE_Matches_21_52;
  MR_Integer STATE_VARIABLE_NonMatches_22_53;
  MR_Word STATE_VARIABLE_RevMissingB_23_54;
  MR_Word BitfieldA_55;
  MR_Word BitfieldValueA_56;
  MR_Word BitfieldB_57;
  MR_Word BitfieldValueB_58;
  MR_Word Var_59;
  MR_String Var_60;
  MR_String Var_61;
  MR_Box conv0_Instances_14;
  MR_Integer _BestNonMatches_42;

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
      HeadInstance_33 = ((MR_Word) ((MR_hl_field(0, Instances_14, (MR_Integer) 0))));
      TailInstances_34 = ((MR_Word) ((MR_hl_field(0, Instances_14, (MR_Integer) 1))));
      HeadFilledPackedWord_35 = ((MR_Word) ((MR_hl_field(0, HeadInstance_33, (MR_Integer) 0))));
      HeadFilledBitfieldA_45 = ((MR_Word) ((MR_hl_field(0, HeadFilledPackedWord_35, (MR_Integer) 0))));
      TailFilledBitfieldsA_46 = ((MR_Word) ((MR_hl_field(0, HeadFilledPackedWord_35, (MR_Integer) 1))));
      HeadFilledBitfieldB_47 = ((MR_Word) ((MR_hl_field(0, FilledPackedWord_12, (MR_Integer) 0))));
      TailFilledBitfieldsB_48 = ((MR_Word) ((MR_hl_field(0, FilledPackedWord_12, (MR_Integer) 1))));
      STATE_VARIABLE_Matches_18_49 = (MR_Integer) 0;
      STATE_VARIABLE_NonMatches_19_50 = (MR_Integer) 0;
      STATE_VARIABLE_RevMissingB_20_51 = (MR_Word) ((MR_Unsigned) 0U);
      BitfieldA_55 = ((MR_Word) ((MR_hl_field(0, HeadFilledBitfieldA_45, (MR_Integer) 0))));
      BitfieldValueA_56 = ((MR_Word) ((MR_hl_field(0, HeadFilledBitfieldA_45, (MR_Integer) 1))));
      BitfieldB_57 = ((MR_Word) ((MR_hl_field(0, HeadFilledBitfieldB_47, (MR_Integer) 0))));
      BitfieldValueB_58 = ((MR_Word) ((MR_hl_field(0, HeadFilledBitfieldB_47, (MR_Integer) 1))));
      Var_60 = (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.count_matching_bitfield\'/8";
      Var_61 = (MR_String) "mismatched bitfields";
      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_59, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[1]));
        MR_hl_field(0, Var_59, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__filled_bitfields_to_packed_word_5_p_0_1));
        MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_59, 3) = ((MR_Box) (BitfieldA_55));
        MR_hl_field(0, Var_59, 4) = ((MR_Box) (BitfieldB_57));
      }
      mercury__require__expect_3_p_0(Var_59, Var_60, Var_61);
      succeeded = ml_backend__ml_gen_info____Unify____bitfield_value_0_0(BitfieldValueA_56, BitfieldValueB_58);
      if (succeeded)
      {
        STATE_VARIABLE_Matches_21_52 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Matches_18_49 + (MR_Unsigned) 1);
        STATE_VARIABLE_RevMissingB_23_54 = STATE_VARIABLE_RevMissingB_20_51;
        STATE_VARIABLE_NonMatches_22_53 = STATE_VARIABLE_NonMatches_19_50;
      }
      else
      {
        STATE_VARIABLE_NonMatches_22_53 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NonMatches_19_50 + (MR_Unsigned) 1);
        {
          STATE_VARIABLE_RevMissingB_23_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevMissingB_23_54, 0) = ((MR_Box) (HeadFilledBitfieldB_47));
          MR_hl_field(1, STATE_VARIABLE_RevMissingB_23_54, 1) = ((MR_Box) (STATE_VARIABLE_RevMissingB_20_51));
        }
        STATE_VARIABLE_Matches_21_52 = STATE_VARIABLE_Matches_18_49;
      }
      ml_backend__ml_unify_gen_construct__count_matching_bitfields_loop_8_p_0(TailFilledBitfieldsA_46, TailFilledBitfieldsB_48, STATE_VARIABLE_Matches_21_52, &HeadMatches_37, STATE_VARIABLE_NonMatches_22_53, &HeadNonMatches_38, STATE_VARIABLE_RevMissingB_23_54, &HeadMissing_39);
      ml_backend__ml_unify_gen_construct__find_best_matching_instance_loop_10_p_0(TailInstances_34, FilledPackedWord_12, HeadInstance_33, HeadMatches_37, HeadNonMatches_38, HeadMissing_39, &BestInstance_40, &BestMatches_41, &_BestNonMatches_42, &MissingBitfields_15);
      Var_44 = (MR_Integer) 2;
      succeeded = (BestMatches_41 >= Var_44);
      if (succeeded)
      {
        OldWordRval_16 = ((MR_Word) ((MR_hl_field(0, BestInstance_40, (MR_Integer) 1))));
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
    if ((MissingBitfields_15 == (MR_Word) ((MR_Unsigned) 0U)))
      *WordRval_10 = OldWordRval_16;
    else
    {
      MR_Word HeadMissingBitfield_17 = ((MR_Word) ((MR_hl_field(1, MissingBitfields_15, (MR_Integer) 0))));
      MR_Word TailMissingBitfields_18 = ((MR_Word) ((MR_hl_field(1, MissingBitfields_15, (MR_Integer) 1))));
      MR_Unsigned MissingBitfieldsMask_19;
      MR_Word ComplementMaskRval_20;
      MR_Word MaskedOldWordRval_21;
      MR_Word MissingBitfieldsRval_22;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Unsigned HeadBitfieldMask_65;
      MR_Word Bitfield_69 = ((MR_Word) ((MR_hl_field(0, HeadMissingBitfield_17, (MR_Integer) 0))));
      MR_Word Shift_71 = ((MR_Word) ((MR_hl_field(0, Bitfield_69, (MR_Integer) 0))));
      MR_Word NumBits_72 = ((MR_Word) ((MR_hl_field(0, Bitfield_69, (MR_Integer) 1))));
      MR_Integer ShiftInt_74 = (MR_Integer) (Shift_71);
      MR_Integer NumBitsInt_75 = (MR_Integer) (NumBits_72);
      MR_Unsigned Var_76;
      MR_Unsigned Var_77;
      MR_Word RevToOrRvals1_81;
      MR_Word RevToOrRvals_82;
      MR_Word ToOrRvals_83;
      MR_Word Var_84;
      MR_Box conv2_MissingBitfieldsMask_19;
      MR_Box conv4_RevToOrRvals_82;

      Var_77 = mercury__uint__f_60_60_2_f_0((MR_Unsigned) 1U, NumBitsInt_75);
      Var_76 = (Var_77 - (MR_Unsigned) 1U);
      HeadBitfieldMask_65 = mercury__uint__f_60_60_2_f_0(Var_76, ShiftInt_74);
      mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_2[4]), TailMissingBitfields_18, ((MR_Box) (HeadBitfieldMask_65)), &conv2_MissingBitfieldsMask_19);
      MissingBitfieldsMask_19 = ((MR_Unsigned) (conv2_MissingBitfieldsMask_19));
      {
        Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_26, 1) = ((MR_Box) (MissingBitfieldsMask_19));
      }
      {
        Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_25, 1) = ((MR_Box) (Var_26));
      }
      {
        ComplementMaskRval_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ComplementMaskRval_20, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, ComplementMaskRval_20, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_unify_gen_construct_scalar_common_3[3])));
        MR_hl_field(3, ComplementMaskRval_20, 2) = ((MR_Box) (Var_25));
      }
      {
        MaskedOldWordRval_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, MaskedOldWordRval_21, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, MaskedOldWordRval_21, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_construct_scalar_common_1[17])));
        MR_hl_field(3, MaskedOldWordRval_21, 2) = ((MR_Box) (OldWordRval_16));
        MR_hl_field(3, MaskedOldWordRval_21, 3) = ((MR_Box) (ComplementMaskRval_20));
      }
      ml_backend__ml_unify_gen_construct__accumulate_translated_filled_bitfield_4_p_0(Info_6, HeadMissingBitfield_17, (MR_Word) ((MR_Unsigned) 0U), &RevToOrRvals1_81);
      {
        Var_84 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_84, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_6[0]));
        MR_hl_field(0, Var_84, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__filled_bitfields_to_packed_word_5_p_0_3));
        MR_hl_field(0, Var_84, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_84, 3) = ((MR_Box) (Info_6));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[4]), Var_84, TailMissingBitfields_18, ((MR_Box) (RevToOrRvals1_81)), &conv4_RevToOrRvals_82);
      RevToOrRvals_82 = ((MR_Word) (conv4_RevToOrRvals_82));
      mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevToOrRvals_82, &ToOrRvals_83);
      MissingBitfieldsRval_22 = ml_backend__ml_unify_gen_util__ml_bitwise_or_rvals_1_f_0(ToOrRvals_83);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        *WordRval_10 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_construct_scalar_common_1[18])));
        MR_hl_field(3, base, 2) = ((MR_Box) (MaskedOldWordRval_21));
        MR_hl_field(3, base, 3) = ((MR_Box) (MissingBitfieldsRval_22));
      }
    }
  else
  {
    MR_Word RevToOrRvals1_89;
    MR_Word RevToOrRvals_90;
    MR_Word ToOrRvals_91;
    MR_Word Var_92;
    MR_Box conv6_RevToOrRvals_90;

    ml_backend__ml_unify_gen_construct__accumulate_translated_filled_bitfield_4_p_0(Info_6, HeadFilledBitfield_8, (MR_Word) ((MR_Unsigned) 0U), &RevToOrRvals1_89);
    {
      Var_92 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_92, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_6[0]));
      MR_hl_field(0, Var_92, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__filled_bitfields_to_packed_word_5_p_0_4));
      MR_hl_field(0, Var_92, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_92, 3) = ((MR_Box) (Info_6));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), (MR_Word) (&ml_backend__ml_unify_gen_construct_scalar_common_1[4]), Var_92, TailFilledBitfields_9, ((MR_Box) (RevToOrRvals1_89)), &conv6_RevToOrRvals_90);
    RevToOrRvals_90 = ((MR_Word) (conv6_RevToOrRvals_90));
    mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), RevToOrRvals_90, &ToOrRvals_91);
    *WordRval_10 = ml_backend__ml_unify_gen_util__ml_bitwise_or_rvals_1_f_0(ToOrRvals_91);
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct__accumulate_translated_filled_bitfield_4_p_0(
  MR_Word Info_5,
  MR_Word FilledBitfield_6,
  MR_Word STATE_VARIABLE_RevToOrRvals_0_18,
  MR_Word * STATE_VARIABLE_RevToOrRvals_19)
{
  MR_bool succeeded;
  MR_Word Bitfield_8 = ((MR_Word) ((MR_hl_field(0, FilledBitfield_6, (MR_Integer) 0))));
  MR_Word BitfieldValue_9 = ((MR_Word) ((MR_hl_field(0, FilledBitfield_6, (MR_Integer) 1))));
  MR_Word Shift_10 = ((MR_Word) ((MR_hl_field(0, Bitfield_8, (MR_Integer) 0))));
  MR_Word Fill_12 = ((MR_Unsigned) ((MR_hl_field(0, Bitfield_8, (MR_Integer) 2))) & (MR_Integer) 7);

  switch (MR_tag((MR_Word) BitfieldValue_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, BitfieldValue_9, (MR_Integer) 0))));
        MR_Word VarLval_14;
        MR_Word UnboxedRval_39;
        MR_Word ShiftedRval_40;

        ml_backend__ml_code_util__ml_gen_var_direct_3_p_0(Info_5, Var_13, &VarLval_14);
        {
          UnboxedRval_39 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, UnboxedRval_39, 0) = ((MR_Box) (VarLval_14));
        }
        ShiftedRval_40 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(UnboxedRval_39, Shift_10, Fill_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_RevToOrRvals_19 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ShiftedRval_40));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevToOrRvals_0_18));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgRval_15 = ((MR_Word) ((MR_hl_field(1, BitfieldValue_9, (MR_Integer) 0))));
        MR_Word RvalConst_30;

        succeeded = ((((MR_tag((MR_Word) ArgRval_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ArgRval_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          RvalConst_30 = ((MR_Word) ((MR_hl_field(3, ArgRval_15, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) RvalConst_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RvalConst_30, (MR_Integer) 0)))) == (MR_Integer) 20)));
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
          MR_Word UnboxedRval_32;
          MR_Word ShiftedRval_33;
          MR_Word UnboxedRvalPrime_36;

          succeeded = ((((MR_tag((MR_Word) ArgRval_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ArgRval_15, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            UnboxedRvalPrime_36 = ((MR_Word) ((MR_hl_field(3, ArgRval_15, (MR_Integer) 2))));
            UnboxedRval_32 = UnboxedRvalPrime_36;
          }
          else
            UnboxedRval_32 = ArgRval_15;
          ShiftedRval_33 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(UnboxedRval_32, Shift_10, Fill_12);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_RevToOrRvals_19 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ShiftedRval_33));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevToOrRvals_0_18));
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Unsigned ValueUint_16 = ((MR_Unsigned) ((MR_hl_field(2, BitfieldValue_9, (MR_Integer) 0))));

        succeeded = (ValueUint_16 == (MR_Unsigned) 0U);
        if (succeeded)
          *STATE_VARIABLE_RevToOrRvals_19 = STATE_VARIABLE_RevToOrRvals_0_18;
        else
        {
          MR_Word Rval_17;
          MR_Word Var_21;
          MR_Word RvalConst_23;

          {
            Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_21, 1) = ((MR_Box) (ValueUint_16));
          }
          {
            Rval_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Rval_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Rval_17, 1) = ((MR_Box) (Var_21));
          }
          succeeded = ((((MR_tag((MR_Word) Rval_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            RvalConst_23 = ((MR_Word) ((MR_hl_field(3, Rval_17, (MR_Integer) 1))));
            succeeded = ((((MR_tag((MR_Word) RvalConst_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RvalConst_23, (MR_Integer) 0)))) == (MR_Integer) 20)));
            if (succeeded)
            {
            }
            if (!(succeeded))
            {
              MR_Word Var_27;

              Var_27 = ml_backend__ml_unify_gen_util__ml_is_zero_const_1_f_0(RvalConst_23);
              succeeded = (Var_27 == (MR_Integer) 1);
            }
          }
          if (succeeded)
            *STATE_VARIABLE_RevToOrRvals_19 = STATE_VARIABLE_RevToOrRvals_0_18;
          else
          {
            MR_Word ShiftedRval_26;

            ShiftedRval_26 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(Rval_17, Shift_10, Fill_12);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_RevToOrRvals_19 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ShiftedRval_26));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevToOrRvals_0_18));
            }
          }
        }
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__find_best_matching_instance_loop_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__count_matching_bitfield__2551__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
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
      MR_Word Instance_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instances_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word InsFilledPackedWord_35 = ((MR_Word) ((MR_hl_field(0, Instance_24, (MR_Integer) 0))));
      MR_Integer Matches_37;
      MR_Integer NonMatches_38;
      MR_Word Missing_39;
      MR_Word STATE_VARIABLE_BestInstanceSF_44_44;
      MR_Integer STATE_VARIABLE_BestMatchesSF_45_45;
      MR_Integer STATE_VARIABLE_BestNonMatchesSF_46_46;
      MR_Word STATE_VARIABLE_BestMissingSF_47_47;
      MR_Word HeadFilledBitfieldA_48 = ((MR_Word) ((MR_hl_field(0, InsFilledPackedWord_35, (MR_Integer) 0))));
      MR_Word TailFilledBitfieldsA_49 = ((MR_Word) ((MR_hl_field(0, InsFilledPackedWord_35, (MR_Integer) 1))));
      MR_Word HeadFilledBitfieldB_50 = ((MR_Word) ((MR_hl_field(0, FilledPackedWord_2, (MR_Integer) 0))));
      MR_Word TailFilledBitfieldsB_51 = ((MR_Word) ((MR_hl_field(0, FilledPackedWord_2, (MR_Integer) 1))));
      MR_Integer STATE_VARIABLE_Matches_21_55;
      MR_Integer STATE_VARIABLE_NonMatches_22_56;
      MR_Word STATE_VARIABLE_RevMissingB_23_57;
      MR_Word BitfieldA_58 = ((MR_Word) ((MR_hl_field(0, HeadFilledBitfieldA_48, (MR_Integer) 0))));
      MR_Word BitfieldValueA_59 = ((MR_Word) ((MR_hl_field(0, HeadFilledBitfieldA_48, (MR_Integer) 1))));
      MR_Word BitfieldB_60 = ((MR_Word) ((MR_hl_field(0, HeadFilledBitfieldB_50, (MR_Integer) 0))));
      MR_Word BitfieldValueB_61 = ((MR_Word) ((MR_hl_field(0, HeadFilledBitfieldB_50, (MR_Integer) 1))));
      MR_Word Var_62;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_BestInstanceSF_0_3;
      MR_Integer next_value_of_STATE_VARIABLE_BestMatchesSF_0_4;
      MR_Integer next_value_of_STATE_VARIABLE_BestNonMatchesSF_0_5;
      MR_Word next_value_of_STATE_VARIABLE_BestMissingSF_0_6;

      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_62, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[1]));
        MR_hl_field(0, Var_62, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__find_best_matching_instance_loop_10_p_0_1));
        MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_62, 3) = ((MR_Box) (BitfieldA_58));
        MR_hl_field(0, Var_62, 4) = ((MR_Box) (BitfieldB_60));
      }
      mercury__require__expect_3_p_0(Var_62, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.count_matching_bitfield\'/8", (MR_String) "mismatched bitfields");
      succeeded = ml_backend__ml_gen_info____Unify____bitfield_value_0_0(BitfieldValueA_59, BitfieldValueB_61);
      if (succeeded)
      {
        STATE_VARIABLE_Matches_21_55 = (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1);
        STATE_VARIABLE_RevMissingB_23_57 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_NonMatches_22_56 = (MR_Integer) 0;
      }
      else
      {
        STATE_VARIABLE_NonMatches_22_56 = (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1);
        {
          STATE_VARIABLE_RevMissingB_23_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevMissingB_23_57, 0) = ((MR_Box) (HeadFilledBitfieldB_50));
          MR_hl_field(1, STATE_VARIABLE_RevMissingB_23_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        STATE_VARIABLE_Matches_21_55 = (MR_Integer) 0;
      }
      ml_backend__ml_unify_gen_construct__count_matching_bitfields_loop_8_p_0(TailFilledBitfieldsA_49, TailFilledBitfieldsB_51, STATE_VARIABLE_Matches_21_55, &Matches_37, STATE_VARIABLE_NonMatches_22_56, &NonMatches_38, STATE_VARIABLE_RevMissingB_23_57, &Missing_39);
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
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__IntroducedFrom__pred__count_matching_bitfield__2551__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.count_matching_bitfields_loop\'/8", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_60 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_61 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.count_matching_bitfields_loop\'/8", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word FilledBitfieldB_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        MR_Word FilledBitfieldsB_47 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Integer STATE_VARIABLE_Matches_57_57;
        MR_Integer STATE_VARIABLE_NonMatches_58_58;
        MR_Word STATE_VARIABLE_RevMissingB_59_59;
        MR_Word BitfieldA_62 = ((MR_Word) ((MR_hl_field(0, Var_61, (MR_Integer) 0))));
        MR_Word BitfieldValueA_63 = ((MR_Word) ((MR_hl_field(0, Var_61, (MR_Integer) 1))));
        MR_Word BitfieldB_64 = ((MR_Word) ((MR_hl_field(0, FilledBitfieldB_46, (MR_Integer) 0))));
        MR_Word BitfieldValueB_65 = ((MR_Word) ((MR_hl_field(0, FilledBitfieldB_46, (MR_Integer) 1))));
        MR_Word Var_66;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Integer next_value_of_STATE_VARIABLE_Matches_0_3;
        MR_Integer next_value_of_STATE_VARIABLE_NonMatches_0_5;
        MR_Word next_value_of_STATE_VARIABLE_RevMissingB_0_7;

        {
          Var_66 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_66, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[1]));
          MR_hl_field(0, Var_66, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__count_matching_bitfields_loop_8_p_0_1));
          MR_hl_field(0, Var_66, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_66, 3) = ((MR_Box) (BitfieldA_62));
          MR_hl_field(0, Var_66, 4) = ((MR_Box) (BitfieldB_64));
        }
        mercury__require__expect_3_p_0(Var_66, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.count_matching_bitfield\'/8", (MR_String) "mismatched bitfields");
        succeeded = ml_backend__ml_gen_info____Unify____bitfield_value_0_0(BitfieldValueA_63, BitfieldValueB_65);
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
            STATE_VARIABLE_RevMissingB_59_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_RevMissingB_59_59, 0) = ((MR_Box) (FilledBitfieldB_46));
            MR_hl_field(1, STATE_VARIABLE_RevMissingB_59_59, 1) = ((MR_Box) (STATE_VARIABLE_RevMissingB_0_7));
          }
          STATE_VARIABLE_Matches_57_57 = STATE_VARIABLE_Matches_0_3;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_60;
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
ml_backend__ml_unify_gen_construct__ml_maybe_null_var_5_p_0(
  MR_Word Info_6,
  MR_Word RHSVar_7,
  MR_Word ConsArgType_8,
  MR_Word ArgMode_9,
  MR_Word * BitfieldValue_10)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_11;
  MR_Word RHSInitInst_14;
  MR_Word RHSFinalInst_15;
  MR_Word RHSType_16;
  MR_Word Var_18;
  MR_Word Var_20;

  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_11);
  RHSInitInst_14 = ((MR_Word) ((MR_hl_field(0, ArgMode_9, (MR_Integer) 2))));
  RHSFinalInst_15 = ((MR_Word) ((MR_hl_field(0, ArgMode_9, (MR_Integer) 3))));
  ml_backend__ml_code_util__ml_variable_type_direct_3_p_0(Info_6, RHSVar_7, &RHSType_16);
  check_hlds__mode_top_functor__init_final_insts_to_top_functor_mode_5_p_0(ModuleInfo_11, RHSInitInst_14, RHSFinalInst_15, RHSType_16, &Var_20);
  succeeded = ((MR_Integer) 0 == Var_20);
  if (succeeded)
  {
    Var_18 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_11, RHSType_16, ConsArgType_8);
    succeeded = (Var_18 == (MR_Integer) 1);
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *BitfieldValue_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (RHSVar_7));
    }
  else
    *BitfieldValue_10 = (MR_Word) (MR_mkword(2, &ml_backend__ml_unify_gen_construct_scalar_common_3[1]));
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
  MR_bool succeeded;
  MR_Word RHSInitInst_19 = ((MR_Word) ((MR_hl_field(0, ArgMode_14, (MR_Integer) 2))));
  MR_Word RHSFinalInst_20 = ((MR_Word) ((MR_hl_field(0, ArgMode_14, (MR_Integer) 3))));
  MR_Word Var_22;
  MR_Word Var_26;

  check_hlds__mode_top_functor__init_final_insts_to_top_functor_mode_5_p_0(ModuleInfo_9, RHSInitInst_19, RHSFinalInst_20, RHSType_11, &Var_26);
  succeeded = ((MR_Integer) 0 == Var_26);
  if (succeeded)
  {
    Var_22 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_9, RHSType_11, ConsArgType_10);
    succeeded = (Var_22 == (MR_Integer) 1);
  }
  if (succeeded)
  {
    MR_Word Var_24;

    {
      Var_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_24, 0) = ((MR_Box) (RHSLval_15));
    }
    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_9, RHSType_11, BoxedRHSType_12, (MR_Integer) 0, Var_24, RHSRval_16);
  }
  else
  {
    MR_Word Var_25;

    {
      Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(3, Var_25, 1) = ((MR_Box) (RHS_MLDS_Type_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *RHSRval_16 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, base, 1) = ((MR_Box) (Var_25));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_packed_word_10_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__ml_not_taking_addr_of_cur_arg_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_packed_word_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_construct__ml_not_taking_addr_of_cur_arg_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_packed_word\'/10", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_98 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_99 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_packed_word\'/10", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word ArgMode_51 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
        MR_Word ArgModes_52 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
        MR_Word RHSVar_58 = ((MR_Word) ((MR_hl_field(0, Var_99, (MR_Integer) 0))));
        MR_Word ConsArgType_59 = ((MR_Word) ((MR_hl_field(0, Var_99, (MR_Integer) 1))));
        MR_Word ArgPosWidth_60 = ((MR_Word) ((MR_hl_field(0, Var_99, (MR_Integer) 2))));

        switch (MR_tag((MR_Word) ArgPosWidth_60)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
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
            switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_60, (MR_Integer) 0))))) {
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
                  MR_Word Shift_74 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_60, (MR_Integer) 3))));
                  MR_Word NumBits_75 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_60, (MR_Integer) 4))));
                  MR_Word Fill_77 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_60, (MR_Integer) 6))) & (MR_Integer) 7);
                  MR_Word Bitfield_78;
                  MR_Word BitfieldValue_79;
                  MR_Word FilledBitfield_80;
                  MR_Word Var_85;
                  MR_Word STATE_VARIABLE_RevFilledBitfields_88_95;
                  MR_Integer Var_96;
                  MR_Word ModuleInfo_100;
                  MR_Word RHSInitInst_103;
                  MR_Word RHSFinalInst_104;
                  MR_Word RHSType_105;
                  MR_Word Var_107;
                  MR_Word Var_109;
                  MR_Word next_value_of_HeadVar__2_2;
                  MR_Word next_value_of_HeadVar__4_4;
                  MR_Integer next_value_of_HeadVar__6_6;
                  MR_Word next_value_of_STATE_VARIABLE_RevFilledBitfields_0_9;

                  {
                    Var_85 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_85, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[0]));
                    MR_hl_field(0, Var_85, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_packed_word_10_p_0_2));
                    MR_hl_field(0, Var_85, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_85, 3) = ((MR_Box) (TakeAddr_8));
                    MR_hl_field(0, Var_85, 4) = ((MR_Box) (HeadVar__6_6));
                  }
                  mercury__require__expect_3_p_0(Var_85, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_packed_word\'/10", (MR_String) "taking address of apw_partial_shifted");
                  {
                    Bitfield_78 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Bitfield_78, 0) = ((MR_Box) (Shift_74));
                    MR_hl_field(0, Bitfield_78, 1) = ((MR_Box) (NumBits_75));
                    MR_hl_field(0, Bitfield_78, 2) = (MR_Box) ((MR_Unsigned) (Fill_77));
                  }
                  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_100);
                  RHSInitInst_103 = ((MR_Word) ((MR_hl_field(0, ArgMode_51, (MR_Integer) 2))));
                  RHSFinalInst_104 = ((MR_Word) ((MR_hl_field(0, ArgMode_51, (MR_Integer) 3))));
                  ml_backend__ml_code_util__ml_variable_type_direct_3_p_0(Info_1, RHSVar_58, &RHSType_105);
                  check_hlds__mode_top_functor__init_final_insts_to_top_functor_mode_5_p_0(ModuleInfo_100, RHSInitInst_103, RHSFinalInst_104, RHSType_105, &Var_109);
                  succeeded = ((MR_Integer) 0 == Var_109);
                  if (succeeded)
                  {
                    Var_107 = check_hlds__type_util__is_either_type_a_dummy_3_f_0(ModuleInfo_100, RHSType_105, ConsArgType_59);
                    succeeded = (Var_107 == (MR_Integer) 1);
                  }
                  if (succeeded)
                    {
                      BitfieldValue_79 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, BitfieldValue_79, 0) = ((MR_Box) (RHSVar_58));
                    }
                  else
                    BitfieldValue_79 = (MR_Word) (MR_mkword(2, &ml_backend__ml_unify_gen_construct_scalar_common_3[1]));
                  {
                    FilledBitfield_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, FilledBitfield_80, 0) = ((MR_Box) (Bitfield_78));
                    MR_hl_field(0, FilledBitfield_80, 1) = ((MR_Box) (BitfieldValue_79));
                  }
                  {
                    STATE_VARIABLE_RevFilledBitfields_88_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_RevFilledBitfields_88_95, 0) = ((MR_Box) (FilledBitfield_80));
                    MR_hl_field(1, STATE_VARIABLE_RevFilledBitfields_88_95, 1) = ((MR_Box) (STATE_VARIABLE_RevFilledBitfields_0_9));
                  }
                  Var_96 = (MR_Integer) ((MR_Unsigned) HeadVar__6_6 + (MR_Unsigned) 1);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__2_2 = Var_98;
                  next_value_of_HeadVar__4_4 = ArgModes_52;
                  next_value_of_HeadVar__6_6 = Var_96;
                  next_value_of_STATE_VARIABLE_RevFilledBitfields_0_9 = STATE_VARIABLE_RevFilledBitfields_88_95;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  HeadVar__4_4 = next_value_of_HeadVar__4_4;
                  HeadVar__6_6 = next_value_of_HeadVar__6_6;
                  STATE_VARIABLE_RevFilledBitfields_0_9 = next_value_of_STATE_VARIABLE_RevFilledBitfields_0_9;
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_89;
                  MR_Integer Var_92;
                  MR_Word next_value_of_HeadVar__2_2;
                  MR_Word next_value_of_HeadVar__4_4;
                  MR_Integer next_value_of_HeadVar__6_6;

                  {
                    Var_89 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_89, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_construct_scalar_common_4[0]));
                    MR_hl_field(0, Var_89, 1) = ((MR_Box) (ml_backend__ml_unify_gen_construct__ml_generate_and_pack_dynamic_construct_packed_word_10_p_0_1));
                    MR_hl_field(0, Var_89, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_89, 3) = ((MR_Box) (TakeAddr_8));
                    MR_hl_field(0, Var_89, 4) = ((MR_Box) (HeadVar__6_6));
                  }
                  mercury__require__expect_3_p_0(Var_89, (MR_String) "predicate \140ml_backend.ml_unify_gen_construct.ml_generate_and_pack_dynamic_construct_packed_word\'/10", (MR_String) "taking address of apw_none_shifted");
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
    MR_Word TakeAddrInfo_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TakeAddrInfos_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Assign_20;
    MR_Word Assigns_21;
    MR_Word AddrVar_22 = ((MR_Word) ((MR_hl_field(0, TakeAddrInfo_13, (MR_Integer) 0))));
    MR_Word Offset_23 = ((MR_Word) ((MR_hl_field(0, TakeAddrInfo_13, (MR_Integer) 1))));
    MR_Word FieldType_25 = ((MR_Word) ((MR_hl_field(0, TakeAddrInfo_13, (MR_Integer) 3))));
    MR_Word HighLevelData_26;

    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_6, &HighLevelData_26);
    switch (HighLevelData_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer OffsetInt_27 = (MR_Integer) (Offset_23);
          MR_Word FieldId_28;
          MR_Word SourceRval_29;
          MR_Word VarTable_30;
          MR_Word AddrVarEntry_31;
          MR_Word AddrVarType_32;
          MR_Word AddrLval_33;
          MR_Word ModuleInfo_34;
          MR_Word MLDS_AddrVarType_35;
          MR_Word CastSourceRval_36;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word Var_40;

          {
            Var_38 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_38, 0) = ((MR_Box) (OffsetInt_27));
          }
          {
            Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_37, 1) = ((MR_Box) (Var_38));
          }
          {
            FieldId_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, FieldId_28, 0) = ((MR_Box) (Var_37));
          }
          {
            Var_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_40, 0) = ((MR_Box) (CellLval_2));
          }
          {
            Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_39, 0) = ((MR_Box) (MaybePtag_4));
            MR_hl_field(0, Var_39, 1) = ((MR_Box) (Var_40));
            MR_hl_field(0, Var_39, 2) = ((MR_Box) (CellType_3));
            MR_hl_field(0, Var_39, 3) = ((MR_Box) (FieldId_28));
            MR_hl_field(0, Var_39, 4) = ((MR_Box) (FieldType_25));
          }
          {
            SourceRval_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, SourceRval_29, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(3, SourceRval_29, 1) = ((MR_Box) (Var_39));
          }
          ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(Info_6, &VarTable_30);
          parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_30, AddrVar_22, &AddrVarEntry_31);
          AddrVarType_32 = ((MR_Word) ((MR_hl_field(0, AddrVarEntry_31, (MR_Integer) 1))));
          ml_backend__ml_code_util__ml_gen_var_4_p_0(Info_6, AddrVar_22, AddrVarEntry_31, &AddrLval_33);
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_34);
          MLDS_AddrVarType_35 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_34, AddrVarType_32);
          {
            CastSourceRval_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, CastSourceRval_36, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, CastSourceRval_36, 1) = ((MR_Box) (MLDS_AddrVarType_35));
            MR_hl_field(3, CastSourceRval_36, 2) = ((MR_Box) (SourceRval_29));
          }
          Assign_20 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(AddrLval_33, CastSourceRval_36, Context_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_41;
          MR_Word AddrLval_42;

          ml_backend__ml_code_util__ml_gen_var_direct_3_p_0(Info_6, AddrVar_22, &AddrLval_42);
          {
            Var_41 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_41, 0) = ((MR_Box) (CellLval_2));
          }
          Assign_20 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(AddrLval_42, Var_41, Context_5);
        }
        break;
    }
    ml_backend__ml_unify_gen_construct__ml_gen_field_take_address_assigns_7_p_0(TakeAddrInfos_14, CellLval_2, CellType_3, MaybePtag_4, Context_5, Info_6, &Assigns_21);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Assign_20));
      MR_hl_field(1, base, 1) = ((MR_Box) (Assigns_21));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct____Unify____ml_const_struct_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_unify_gen_construct____Unify____ml_const_struct_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct____Compare____ml_const_struct_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_unify_gen_construct____Compare____ml_const_struct_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct____Unify____mlds_rval_type_and_width_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_unify_gen_construct____Unify____mlds_rval_type_and_width_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct____Compare____mlds_rval_type_and_width_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_unify_gen_construct____Compare____mlds_rval_type_and_width_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_construct____Unify____use_packed_word_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_unify_gen_construct____Unify____use_packed_word_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_unify_gen_construct____Compare____use_packed_word_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_unify_gen_construct____Compare____use_packed_word_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
