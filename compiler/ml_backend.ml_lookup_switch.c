/*
** Automatically generated from `ml_lookup_switch.m'
** by the Mercury compiler,
** version rotd-2022-04-02
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


// :- module ml_backend.ml_lookup_switch.
// :- implementation.

/*
INIT mercury__ml_backend__ml_lookup_switch__init
ENDINIT
*/

#include "ml_backend.ml_lookup_switch.mih"


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
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.switch_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
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
#include "hlds.instmap.mih"
#include "hlds.mark_tail_calls.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.var_table.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
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




static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch____vpti_pred_2__plain_hlds__hlds_data__type_ctor_info_cons_tag_0__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__pseudo_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_lookup_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_lookup_switch__backend_libs__switch_util__pti_soln_consts_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0;

static const MR_FA_TypeInfo_Struct3 ml_backend__ml_lookup_switch__backend_libs__switch_util__ti_case_consts_3hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__mlds__type_ctor_info_mlds_rval_0unit__type_ctor_info_unit_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0;

static const MR_PseudoTypeInfo ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_lookup_switch_info_0_0[3];

static const MR_ConstString ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_names_ml_lookup_switch_info_0_0[3];

static const MR_DuFunctorDesc ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_lookup_switch_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_lookup_switch_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_lookup_switch_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_name_ordered_ml_lookup_switch_info_0[1];

static const MR_Integer ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__functor_number_map_ml_lookup_switch_info_0[1];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;

static const MR_PseudoTypeInfo ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_several_soln_lookup_vars_0_0[6];

static const MR_ConstString ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_names_ml_several_soln_lookup_vars_0_0[6];

static const MR_DuFunctorDesc ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_several_soln_lookup_vars_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_several_soln_lookup_vars_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_several_soln_lookup_vars_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_name_ordered_ml_several_soln_lookup_vars_0[1];

static const MR_Integer ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__functor_number_map_ml_several_soln_lookup_vars_0[1];

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id__ho6_5_p_0(
  MR_Word SolnConsts_7,
  MR_Word TaggedConsId_8,
  MR_Word STATE_VARIABLE_IndexMap_0_13,
  MR_Word * STATE_VARIABLE_IndexMap_14);

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id__ho5_5_p_0(
  MR_Word SolnConsts_7,
  MR_Word TaggedConsId_8,
  MR_Word STATE_VARIABLE_IndexMap_0_13,
  MR_Word * STATE_VARIABLE_IndexMap_14);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__465__1_2_p_0(
  MR_Word HadDummyRows_45,
  MR_Word HeadVar__2_73);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__461__1_2_p_0(
  MR_Word HadDummyRows_45,
  MR_Word HeadVar__2_77);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__457__1_2_p_0(
  MR_Word HadDummyRows_45,
  MR_Word HeadVar__2_81);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_atomic_lookup_switch__336__1_2_p_0(
  MR_Word NeedRangeCheck_23,
  MR_Word HeadVar__2_79);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_atomic_lookup_switch__282__1_2_p_0(
  MR_Word CodeModel_16,
  MR_Word HeadVar__2_46);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_case_id_soln_consts_to_tag_soln_consts__225__1_2_p_0(
  MR_Word TypeInfo_for_V_15,
  MR_Word DepletedCaseIdMap_9);

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word GetTag_6,
  MR_Box SolnConsts_7,
  MR_Word TaggedConsId_8,
  MR_Word STATE_VARIABLE_IndexMap_0_13,
  MR_Word * STATE_VARIABLE_IndexMap_14);

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho4_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho4_6_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CaseIdMap_0_3,
  MR_Word * STATE_VARIABLE_CaseIdMap_4,
  MR_Word STATE_VARIABLE_TagMap_0_5,
  MR_Word * STATE_VARIABLE_TagMap_6);

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho3_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho3_6_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CaseIdMap_0_3,
  MR_Word * STATE_VARIABLE_CaseIdMap_4,
  MR_Word STATE_VARIABLE_TagMap_0_5,
  MR_Word * STATE_VARIABLE_TagMap_6);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0(
  MR_Word IndexRval_13,
  MR_Word OutVars_14,
  MR_Word OutTypes_15,
  MR_Word CaseSolns_16,
  MR_Word Context_17,
  MR_Integer StartVal_18,
  MR_Integer EndVal_19,
  MR_Word NeedBitVecCheck_20,
  MR_Word NeedRangeCheck_21,
  MR_Word * Stmt_22,
  MR_Word STATE_VARIABLE_Info_0_57,
  MR_Word * STATE_VARIABLE_Info_58);

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0(
  MR_Integer CurIndex_2,
  MR_Integer EndVal_3,
  MR_Integer STATE_VARIABLE_NextLaterSolnRow_0_4,
  MR_Word HeadVar__5_5,
  MR_Word FirstSolnStructType_6,
  MR_Word LaterSolnStructType_7,
  MR_Word FieldTypes_8,
  MR_Word STATE_VARIABLE_RevFirstSolnRowInitializers_0_9,
  MR_Word * STATE_VARIABLE_RevFirstSolnRowInitializers_10,
  MR_Word STATE_VARIABLE_LaterSolnRowInitializersCord_0_11,
  MR_Word * STATE_VARIABLE_LaterSolnRowInitializersCord_12,
  MR_Word STATE_VARIABLE_HadDummyRows_0_13,
  MR_Word * STATE_VARIABLE_HadDummyRows_14);

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0(
  MR_Word FirstSolnStructType_5,
  MR_Word FieldTypes_6,
  MR_Word STATE_VARIABLE_RevFirstSolnRowInitializers_0_14,
  MR_Word * STATE_VARIABLE_RevFirstSolnRowInitializers_15);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0(
  MR_Word IndexRval_14,
  MR_Word OutVars_15,
  MR_Word OutTypes_16,
  MR_Word CaseValues_17,
  MR_Word CodeModel_18,
  MR_Word Context_19,
  MR_Integer StartVal_20,
  MR_Integer EndVal_21,
  MR_Word NeedBitVecCheck_22,
  MR_Word NeedRangeCheck_23,
  MR_Word * Stmt_24,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49);

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0(
  MR_Word StructType_2,
  MR_Word FieldTypes_3,
  MR_Integer CurIndex_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_55_93_95_48_9_p_0(
  MR_Word MLDS_ModuleName_10,
  MR_Word Context_11,
  MR_Word IndexRval_12,
  MR_Word CaseVals_13,
  MR_Integer Start_14,
  MR_Word * CheckRval_16,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Start_2,
  MR_Integer WordBits_3,
  MR_Word STATE_VARIABLE_BitMap_0_4,
  MR_Word * STATE_VARIABLE_BitMap_5);

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_generate_bit_vec_initializers_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Count_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop_6_p_0(
  MR_Word TypeInfo_for_Key_34,
  MR_Word TypeInfo_for_V_35,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CaseIdMap_0_3,
  MR_Word * STATE_VARIABLE_CaseIdMap_4,
  MR_Word STATE_VARIABLE_TagMap_0_5,
  MR_Word * STATE_VARIABLE_TagMap_6);

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_105_115_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_8_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_lookup_switch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_lookup_switch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_several_soln_lookup_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_several_soln_lookup_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_1[40][2];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_2[1][4];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_3[4][1];

static /* final */ const MR_Float ml_backend__ml_lookup_switch_scalar_common_4[1];

static /* final */ const int64_t ml_backend__ml_lookup_switch_scalar_common_5[1];

static /* final */ const uint64_t ml_backend__ml_lookup_switch_scalar_common_6[1];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_7[2][6];

static /* final */ const MR_Integer ml_backend__ml_lookup_switch_scalar_common_8[2][3];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_9[1][10];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_10[6][5];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_11[9][3];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_12[2][7];


struct ml_backend__ml_lookup_switch__vector_common_type_13_0_s {
  const MR_Word ml_backend__ml_lookup_switch__vector_common_type_13_0__vct_13_f_0;
};

static /* final */ const struct ml_backend__ml_lookup_switch__vector_common_type_13_0_s ml_backend__ml_lookup_switch_vector_common_13[10];



static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_1[40][2] = {
  /* row   0 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_1[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 12U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 15U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_lookup_switch_scalar_common_3[1])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_lookup_switch_scalar_common_3[2])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 10U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[11])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 11U)),
    (MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[0])
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[13])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) (MR_Word) (INT16_C(0)))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[15])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) (MR_Word) (INT32_C(0)))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[17])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_5[0])
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[19])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_Word) (INT8_C(0)))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[21])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[23])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_Word) (UINT16_C(0)))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[25])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) (MR_Word) (UINT32_C(0)))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[27])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_6[0])
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[29])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    ((MR_Box) (MR_Word) (UINT8_C(0)))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[31])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) (((MR_Unsigned) 0U << 1))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 10U)),
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_3[3]))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) (((MR_Unsigned) 0U << 1))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[6])))
  },
};

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_3[4][1] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   3 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Float ml_backend__ml_lookup_switch_scalar_common_4[1] = {
  /* row   0 */
  (MR_Float) 0.0000000000000000,
};

static /* final */ const int64_t ml_backend__ml_lookup_switch_scalar_common_5[1] = {
  /* row   0 */
  INT64_C(0),
};

static /* final */ const uint64_t ml_backend__ml_lookup_switch_scalar_common_6[1] = {
  /* row   0 */
  UINT64_C(0),
};

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_7[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Integer ml_backend__ml_lookup_switch_scalar_common_8[2][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
  /* row   1 */
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_9[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch____vpti_pred_2__plain_hlds__hlds_data__type_ctor_info_cons_tag_0__pseudo_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__tree234__pti_tree234_2__pseudo_1__pseudo_2)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__tree234__pti_tree234_2__pseudo_1__pseudo_2))
  },
};

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_10[6][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_8[1])),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__pseudo_2))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_need_range_check_0)),
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_need_range_check_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_11[9][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_10[1])),
    ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_10[2])),
    ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_10[1])),
    ((MR_Box) (ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_10[2])),
    ((MR_Box) (ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_10[2])),
    ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_10[2])),
    ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_1[1]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_1[0]))
  },
  /* row   8 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_10[2])),
    ((MR_Box) (ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_12[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__backend_libs__switch_util__pti_soln_consts_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
};


static /* final */ const struct ml_backend__ml_lookup_switch__vector_common_type_13_0_s ml_backend__ml_lookup_switch_vector_common_13[10] = {
  /* row   0 */   { (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[9])) },
  /* row   1 */   { (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[24])) },
  /* row   2 */   { (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[22])) },
  /* row   3 */   { (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[32])) },
  /* row   4 */   { (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[16])) },
  /* row   5 */   { (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[26])) },
  /* row   6 */   { (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[18])) },
  /* row   7 */   { (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[28])) },
  /* row   8 */   { (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[20])) },
  /* row   9 */   { (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[30])) },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch____vpti_pred_2__plain_hlds__hlds_data__type_ctor_info_cons_tag_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__pseudo_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_lookup_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_lookup_switch__backend_libs__switch_util__pti_soln_consts_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&ml_backend__ml_lookup_switch__backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0)
  }
};

static const MR_FA_TypeInfo_Struct3 ml_backend__ml_lookup_switch__backend_libs__switch_util__ti_case_consts_3hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__mlds__type_ctor_info_mlds_rval_0unit__type_ctor_info_unit_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_3,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0),
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0),
    (MR_TypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ml_backend__ml_lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_lookup_switch_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&ml_backend__ml_lookup_switch__backend_libs__switch_util__ti_case_consts_3hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__mlds__type_ctor_info_mlds_rval_0unit__type_ctor_info_unit_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0)
};

static const MR_ConstString ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_names_ml_lookup_switch_info_0_0[3] = {
  (MR_String) "mllsi_cases",
  (MR_String) "mllsi_out_variables",
  (MR_String) "mllsi_out_types"
};

static const MR_DuFunctorDesc ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_lookup_switch_info_0_0 = {
  (MR_String) "ml_lookup_switch_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_lookup_switch_info_0_0,
  ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_names_ml_lookup_switch_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_lookup_switch_info_0_0[1] = {
  &ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_lookup_switch_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_lookup_switch_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_lookup_switch_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_name_ordered_ml_lookup_switch_info_0[1] = {
  &ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_lookup_switch_info_0_0
};

static const MR_Integer ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__functor_number_map_ml_lookup_switch_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__type_ctor_info_ml_lookup_switch_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_lookup_switch____Unify____ml_lookup_switch_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_lookup_switch____Compare____ml_lookup_switch_info_0_0_10001)),
  (MR_String) "ml_backend.ml_lookup_switch",
  (MR_String) "ml_lookup_switch_info",
  { ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_name_ordered_ml_lookup_switch_info_0 },
  { ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_lookup_switch_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__functor_number_map_ml_lookup_switch_info_0,

};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_several_soln_lookup_vars_0_0[6] = {
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_type_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_type_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_type_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)
};

static const MR_ConstString ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_names_ml_several_soln_lookup_vars_0_0[6] = {
  (MR_String) "msslv_num_later_solns_var",
  (MR_String) "msslv_later_slot_var",
  (MR_String) "msslv_limit_var",
  (MR_String) "msslv_limit_assign_statement",
  (MR_String) "msslv_incr_later_slot_statement",
  (MR_String) "msslv_denfs"
};

static const MR_DuFunctorDesc ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_several_soln_lookup_vars_0_0 = {
  (MR_String) "ml_several_soln_lookup_vars",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_several_soln_lookup_vars_0_0,
  ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_names_ml_several_soln_lookup_vars_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_several_soln_lookup_vars_0_0[1] = {
  &ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_several_soln_lookup_vars_0_0
};

static const MR_DuPtagLayout ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_several_soln_lookup_vars_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_several_soln_lookup_vars_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_name_ordered_ml_several_soln_lookup_vars_0[1] = {
  &ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_several_soln_lookup_vars_0_0
};

static const MR_Integer ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__functor_number_map_ml_several_soln_lookup_vars_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__type_ctor_info_ml_several_soln_lookup_vars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_lookup_switch____Unify____ml_several_soln_lookup_vars_0_0_10001)),
  ((MR_Box) (ml_backend__ml_lookup_switch____Compare____ml_several_soln_lookup_vars_0_0_10001)),
  (MR_String) "ml_backend.ml_lookup_switch",
  (MR_String) "ml_several_soln_lookup_vars",
  { ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_name_ordered_ml_several_soln_lookup_vars_0 },
  { ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_several_soln_lookup_vars_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__functor_number_map_ml_several_soln_lookup_vars_0,

};

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id__ho6_5_p_0(
  MR_Word SolnConsts_7,
  MR_Word TaggedConsId_8,
  MR_Word STATE_VARIABLE_IndexMap_0_13,
  MR_Word * STATE_VARIABLE_IndexMap_14)
{
  MR_Word ConsTag_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedConsId_8, (MR_Integer) 1))));
  MR_Integer Index_12;

  backend_libs__switch_util__get_int_tag_2_p_0(ConsTag_11, &Index_12);
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_1[1]), Index_12, ((MR_Box) (SolnConsts_7)), STATE_VARIABLE_IndexMap_0_13, STATE_VARIABLE_IndexMap_14);
}

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id__ho5_5_p_0(
  MR_Word SolnConsts_7,
  MR_Word TaggedConsId_8,
  MR_Word STATE_VARIABLE_IndexMap_0_13,
  MR_Word * STATE_VARIABLE_IndexMap_14)
{
  MR_Word ConsTag_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedConsId_8, (MR_Integer) 1))));
  MR_Integer Index_12;

  backend_libs__switch_util__get_int_tag_2_p_0(ConsTag_11, &Index_12);
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_1[0]), Index_12, ((MR_Box) (SolnConsts_7)), STATE_VARIABLE_IndexMap_0_13, STATE_VARIABLE_IndexMap_14);
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__465__1_2_p_0(
  MR_Word HadDummyRows_45,
  MR_Word HeadVar__2_73)
{
  MR_bool succeeded = (HadDummyRows_45 == HeadVar__2_73);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__461__1_2_p_0(
  MR_Word HadDummyRows_45,
  MR_Word HeadVar__2_77)
{
  MR_bool succeeded = (HadDummyRows_45 == HeadVar__2_77);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__457__1_2_p_0(
  MR_Word HadDummyRows_45,
  MR_Word HeadVar__2_81)
{
  MR_bool succeeded = (HadDummyRows_45 == HeadVar__2_81);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_atomic_lookup_switch__336__1_2_p_0(
  MR_Word NeedRangeCheck_23,
  MR_Word HeadVar__2_79)
{
  MR_bool succeeded = (NeedRangeCheck_23 == HeadVar__2_79);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_atomic_lookup_switch__282__1_2_p_0(
  MR_Word CodeModel_16,
  MR_Word HeadVar__2_46)
{
  MR_bool succeeded = (CodeModel_16 == HeadVar__2_46);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_case_id_soln_consts_to_tag_soln_consts__225__1_2_p_0(
  MR_Word TypeInfo_for_V_15,
  MR_Word DepletedCaseIdMap_9)
{
  MR_bool succeeded;

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), TypeInfo_for_V_15, DepletedCaseIdMap_9);
  return succeeded;
}

void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_several_soln_lookup_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
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
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
    MR_Word SubResult1_6;

    ml_backend__mlds____Compare____mlds_local_var_name_type_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      ml_backend__mlds____Compare____mlds_local_var_name_type_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        ml_backend__mlds____Compare____mlds_local_var_name_type_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          ml_backend__mlds____Compare____mlds_stmt_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            ml_backend__mlds____Compare____mlds_stmt_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_several_soln_lookup_vars_0_0(
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
  {
    MR_Word TypeInfo_22_22;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));

    succeeded = ml_backend__mlds____Unify____mlds_local_var_name_type_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = ml_backend__mlds____Unify____mlds_local_var_name_type_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = ml_backend__mlds____Unify____mlds_local_var_name_type_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = ml_backend__mlds____Unify____mlds_stmt_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            succeeded = ml_backend__mlds____Unify____mlds_stmt_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              TypeInfo_22_22 = (MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_1[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_lookup_switch_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_1[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_lookup_switch_info_0_0(
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
    MR_Word TypeInfo_12_12;
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word GetTag_6,
  MR_Box SolnConsts_7,
  MR_Word TaggedConsId_8,
  MR_Word STATE_VARIABLE_IndexMap_0_13,
  MR_Word * STATE_VARIABLE_IndexMap_14)
{
  MR_Word ConsTag_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedConsId_8, (MR_Integer) 1))));
  MR_Box Index_12;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), GetTag_6, (MR_Integer) 1))));

  func_0(((MR_Box) (GetTag_6)), ((MR_Box) (ConsTag_11)), &Index_12);
  mercury__map__det_insert_4_p_0(TypeInfo_for_T_16, TypeInfo_for_V_17, Index_12, SolnConsts_7, STATE_VARIABLE_IndexMap_0_13, STATE_VARIABLE_IndexMap_14);
}

MR_Word MR_CALL 
ml_backend__ml_lookup_switch__ml_default_value_for_type_1_f_0(
  MR_Word MLDS_Type_3)
{
  MR_Word DefaultRval_4;

  switch (MR_tag((MR_Word) MLDS_Type_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(MLDS_Type_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 6:
        case (MR_Integer) 9:
          mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_lookup_switch.ml_default_value_for_type\'/1", (MR_String) "unexpected MLDS_Type");
          break;
        case (MR_Integer) 1:
          DefaultRval_4 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[14]));
          break;
        case (MR_Integer) 2:
          {
            DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), DefaultRval_4, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), DefaultRval_4, 1) = ((MR_Box) (MLDS_Type_3));
            MR_hl_field(MR_mktag(3), DefaultRval_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[9])));
          }
          break;
        case (MR_Integer) 3:
          DefaultRval_4 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[12]));
          break;
        case (MR_Integer) 4:
          DefaultRval_4 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[33]));
          break;
        case (MR_Integer) 5:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
          {
            DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), DefaultRval_4, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), DefaultRval_4, 1) = ((MR_Box) (MLDS_Type_3));
            MR_hl_field(MR_mktag(3), DefaultRval_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[9])));
          }
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), DefaultRval_4, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), DefaultRval_4, 1) = ((MR_Box) (MLDS_Type_3));
        MR_hl_field(MR_mktag(3), DefaultRval_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[9])));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), MLDS_Type_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
          {
            DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), DefaultRval_4, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), DefaultRval_4, 1) = ((MR_Box) (MLDS_Type_3));
            MR_hl_field(MR_mktag(3), DefaultRval_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[9])));
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
          mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_lookup_switch.ml_default_value_for_type\'/1", (MR_String) "unexpected MLDS_Type");
          break;
        case (MR_Integer) 3:
          {
            MR_Word IntType_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), MLDS_Type_3, (MR_Integer) 1))) & (MR_Integer) 15);

            DefaultRval_4 = ((&ml_backend__ml_lookup_switch_vector_common_13[0 + IntType_5]))->ml_backend__ml_lookup_switch__vector_common_type_13_0__vct_13_f_0;
          }
          break;
      }
      break;
  }
  return DefaultRval_4;
}

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0(
  MR_Word StructType_4,
  MR_Word Rvals_5)
{
  MR_Word RowInitializer_6;
  MR_Word FieldInitializers_7;

  FieldInitializers_7 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_11[8]), Rvals_5);
  {
    RowInitializer_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), RowInitializer_6, 0) = ((MR_Box) (StructType_4));
    MR_hl_field(MR_mktag(2), RowInitializer_6, 1) = ((MR_Box) (FieldInitializers_7));
  }
  return RowInitializer_6;
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_case_id_soln_consts_to_tag_soln_consts__225__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_atomic_lookup_switch__282__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_case_id_soln_consts_to_tag_soln_consts__225__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0(
  MR_Word SwitchVar_13,
  MR_Word TaggedCases_14,
  MR_Word LookupSwitchInfo_15,
  MR_Word CodeModel_16,
  MR_Word Context_17,
  MR_Integer StartVal_18,
  MR_Integer EndVal_19,
  MR_Word NeedBitVecCheck_20,
  MR_Word NeedRangeCheck_21,
  MR_Word * Stmt_22,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  MR_bool succeeded;
  MR_Word CaseIdConstMap_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupSwitchInfo_15, (MR_Integer) 0))));
  MR_Word OutVars_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupSwitchInfo_15, (MR_Integer) 1))));
  MR_Word FieldTypes_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LookupSwitchInfo_15, (MR_Integer) 2))));
  MR_Word SwitchVarLval_27;
  MR_Word SwitchVarRval_28;
  MR_Word IndexRval_29;

  ml_backend__ml_code_util__ml_gen_var_direct_3_p_0(STATE_VARIABLE_Info_0_38, SwitchVar_13, &SwitchVarLval_27);
  {
    SwitchVarRval_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), SwitchVarRval_28, 0) = ((MR_Box) (SwitchVarLval_27));
  }
  succeeded = (StartVal_18 == (MR_Integer) 0);
  if (succeeded)
    IndexRval_29 = SwitchVarRval_28;
  else
  {
    MR_Word StartRval_30;
    MR_Word Var_40;

    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_40, 0) = ((MR_Box) (StartVal_18));
    }
    {
      StartRval_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), StartRval_30, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), StartRval_30, 1) = ((MR_Box) (Var_40));
    }
    {
      IndexRval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), IndexRval_29, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), IndexRval_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_lookup_switch_scalar_common_3[0])));
      MR_hl_field(MR_mktag(3), IndexRval_29, 2) = ((MR_Box) (SwitchVarRval_28));
      MR_hl_field(MR_mktag(3), IndexRval_29, 3) = ((MR_Box) (StartRval_30));
    }
  }
  if (((MR_tag((MR_Word) CaseIdConstMap_24)) == (MR_Integer) 0))
  {
    MR_Word CaseIdValueMap_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseIdConstMap_24, (MR_Integer) 0))));
    MR_Word IntValueMap_32;
    MR_Word IntValues_33;
    MR_Word DepletedCaseIdMap_65;
    MR_Word Var_66;
    MR_Word Var_67;

    Var_66 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_1[1]));
    ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho3_6_p_0(TaggedCases_14, CaseIdValueMap_31, &DepletedCaseIdMap_65, Var_66, &IntValueMap_32);
    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_1));
      MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_1[1]));
      MR_hl_field(MR_mktag(0), Var_67, 4) = ((MR_Box) (DepletedCaseIdMap_65));
    }
    mercury__require__expect_3_p_0(Var_67, (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_case_id_soln_consts_to_tag_soln_consts\'/4", (MR_String) "DepletedCaseIdMap not empty");
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_1[1]), IntValueMap_32, &IntValues_33);
    ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0(IndexRval_29, OutVars_25, FieldTypes_26, IntValues_33, CodeModel_16, Context_17, StartVal_18, EndVal_19, NeedBitVecCheck_20, NeedRangeCheck_21, Stmt_22, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
  }
  else
  {
    MR_Word CaseIdSolnMap_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CaseIdConstMap_24, (MR_Integer) 0))));
    MR_Word IntSolnMap_36;
    MR_Word IntSolns_37;
    MR_Word Var_43;
    MR_Word DepletedCaseIdMap_78;
    MR_Word Var_79;
    MR_Word Var_80;

    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_10[5]));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_2));
      MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (CodeModel_16));
      MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) ((MR_Integer) 2));
    }
    mercury__require__expect_3_p_0(Var_43, (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_atomic_lookup_switch\'/12", (MR_String) "CodeModel != model_non");
    Var_79 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_1[0]));
    ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho4_6_p_0(TaggedCases_14, CaseIdSolnMap_34, &DepletedCaseIdMap_78, Var_79, &IntSolnMap_36);
    {
      Var_80 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_3));
      MR_hl_field(MR_mktag(0), Var_80, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_80, 3) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_1[0]));
      MR_hl_field(MR_mktag(0), Var_80, 4) = ((MR_Box) (DepletedCaseIdMap_78));
    }
    mercury__require__expect_3_p_0(Var_80, (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_case_id_soln_consts_to_tag_soln_consts\'/4", (MR_String) "DepletedCaseIdMap not empty");
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_1[0]), IntSolnMap_36, &IntSolns_37);
    ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0(IndexRval_29, OutVars_25, FieldTypes_26, IntSolns_37, Context_17, StartVal_18, EndVal_19, NeedBitVecCheck_20, NeedRangeCheck_21, Stmt_22, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
  }
}

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho4_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_IndexMap_14;

  ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id__ho5_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_IndexMap_14);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_IndexMap_14));
}

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho4_6_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CaseIdMap_0_3,
  MR_Word * STATE_VARIABLE_CaseIdMap_4,
  MR_Word STATE_VARIABLE_TagMap_0_5,
  MR_Word * STATE_VARIABLE_TagMap_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_TagMap_6 = STATE_VARIABLE_TagMap_0_5;
      *STATE_VARIABLE_CaseIdMap_4 = STATE_VARIABLE_CaseIdMap_0_3;
    }
    else
    {
      MR_Word TaggedCase_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TaggedCases_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word TaggedMainConsId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_15, (MR_Integer) 0))));
      MR_Word TaggedOtherConsIds_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_15, (MR_Integer) 1))));
      MR_Word CaseId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_15, (MR_Integer) 2))));
      MR_Word SolnConsts_23;
      MR_Word STATE_VARIABLE_CaseIdMap_28_28;
      MR_Word STATE_VARIABLE_TagMap_29_29;
      MR_Word Var_30;
      MR_Word STATE_VARIABLE_TagMap_31_31;
      MR_Word ConsTag_54;
      MR_Integer Index_55;
      MR_Box conv0_SolnConsts_23;
      MR_Box conv2_STATE_VARIABLE_TagMap_31_31;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_CaseIdMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_TagMap_0_5;

      mercury__map__det_remove_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_1[0]), ((MR_Box) (CaseId_21)), &conv0_SolnConsts_23, STATE_VARIABLE_CaseIdMap_0_3, &STATE_VARIABLE_CaseIdMap_28_28);
      SolnConsts_23 = ((MR_Word) (conv0_SolnConsts_23));
      ConsTag_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedMainConsId_19, (MR_Integer) 1))));
      backend_libs__switch_util__get_int_tag_2_p_0(ConsTag_54, &Index_55);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_1[0]), Index_55, ((MR_Box) (SolnConsts_23)), STATE_VARIABLE_TagMap_0_5, &STATE_VARIABLE_TagMap_29_29);
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_12[1]));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho4_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (SolnConsts_23));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_11[7]), Var_30, TaggedOtherConsIds_20, ((MR_Box) (STATE_VARIABLE_TagMap_29_29)), &conv2_STATE_VARIABLE_TagMap_31_31);
      STATE_VARIABLE_TagMap_31_31 = ((MR_Word) (conv2_STATE_VARIABLE_TagMap_31_31));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TaggedCases_16;
      next_value_of_STATE_VARIABLE_CaseIdMap_0_3 = STATE_VARIABLE_CaseIdMap_28_28;
      next_value_of_STATE_VARIABLE_TagMap_0_5 = STATE_VARIABLE_TagMap_31_31;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_CaseIdMap_0_3 = next_value_of_STATE_VARIABLE_CaseIdMap_0_3;
      STATE_VARIABLE_TagMap_0_5 = next_value_of_STATE_VARIABLE_TagMap_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho3_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_IndexMap_14;

  ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id__ho6_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_IndexMap_14);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_IndexMap_14));
}

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho3_6_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CaseIdMap_0_3,
  MR_Word * STATE_VARIABLE_CaseIdMap_4,
  MR_Word STATE_VARIABLE_TagMap_0_5,
  MR_Word * STATE_VARIABLE_TagMap_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_TagMap_6 = STATE_VARIABLE_TagMap_0_5;
      *STATE_VARIABLE_CaseIdMap_4 = STATE_VARIABLE_CaseIdMap_0_3;
    }
    else
    {
      MR_Word TaggedCase_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TaggedCases_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word TaggedMainConsId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_15, (MR_Integer) 0))));
      MR_Word TaggedOtherConsIds_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_15, (MR_Integer) 1))));
      MR_Word CaseId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_15, (MR_Integer) 2))));
      MR_Word SolnConsts_23;
      MR_Word STATE_VARIABLE_CaseIdMap_28_28;
      MR_Word STATE_VARIABLE_TagMap_29_29;
      MR_Word Var_30;
      MR_Word STATE_VARIABLE_TagMap_31_31;
      MR_Word ConsTag_54;
      MR_Integer Index_55;
      MR_Box conv0_SolnConsts_23;
      MR_Box conv2_STATE_VARIABLE_TagMap_31_31;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_CaseIdMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_TagMap_0_5;

      mercury__map__det_remove_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_1[1]), ((MR_Box) (CaseId_21)), &conv0_SolnConsts_23, STATE_VARIABLE_CaseIdMap_0_3, &STATE_VARIABLE_CaseIdMap_28_28);
      SolnConsts_23 = ((MR_Word) (conv0_SolnConsts_23));
      ConsTag_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedMainConsId_19, (MR_Integer) 1))));
      backend_libs__switch_util__get_int_tag_2_p_0(ConsTag_54, &Index_55);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_1[1]), Index_55, ((MR_Box) (SolnConsts_23)), STATE_VARIABLE_TagMap_0_5, &STATE_VARIABLE_TagMap_29_29);
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_12[0]));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho3_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (SolnConsts_23));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_11[6]), Var_30, TaggedOtherConsIds_20, ((MR_Box) (STATE_VARIABLE_TagMap_29_29)), &conv2_STATE_VARIABLE_TagMap_31_31);
      STATE_VARIABLE_TagMap_31_31 = ((MR_Word) (conv2_STATE_VARIABLE_TagMap_31_31));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TaggedCases_16;
      next_value_of_STATE_VARIABLE_CaseIdMap_0_3 = STATE_VARIABLE_CaseIdMap_28_28;
      next_value_of_STATE_VARIABLE_TagMap_0_5 = STATE_VARIABLE_TagMap_31_31;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_CaseIdMap_0_3 = next_value_of_STATE_VARIABLE_CaseIdMap_0_3;
      STATE_VARIABLE_TagMap_0_5 = next_value_of_STATE_VARIABLE_TagMap_0_5;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__465__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__461__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__457__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0(
  MR_Word IndexRval_13,
  MR_Word OutVars_14,
  MR_Word OutTypes_15,
  MR_Word CaseSolns_16,
  MR_Word Context_17,
  MR_Integer StartVal_18,
  MR_Integer EndVal_19,
  MR_Word NeedBitVecCheck_20,
  MR_Word NeedRangeCheck_21,
  MR_Word * Stmt_22,
  MR_Word STATE_VARIABLE_Info_0_57,
  MR_Word * STATE_VARIABLE_Info_58)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_24;
  MR_Word ModuleName_25;
  MR_Word MLDS_ModuleName_26;
  MR_Word Target_27;
  MR_Word MLDS_IntType_28;
  MR_Word FirstSolnFieldTypes_29;
  MR_Word GlobalData0_30;
  MR_Word FirstSolnStructTypeNum_31;
  MR_Word FirstSolnStructType_32;
  MR_Word FirstSolnTableFieldIds_33;
  MR_Word GlobalData1_34;
  MR_Word LaterSolnStructTypeNum_35;
  MR_Word LaterSolnStructType_36;
  MR_Word LaterSolnOutFieldIds_37;
  MR_Word GlobalData2_38;
  MR_Word NumLaterSolnsFieldId_40;
  MR_Word FirstLaterSolnRowFieldId_41;
  MR_Word FirstSolnOutFieldIds_42;
  MR_Word RevFirstSolnRowInitializers_43;
  MR_Word LaterSolnRowInitializersCord_44;
  MR_Word HadDummyRows_45;
  MR_Word FirstSolnRowInitializers_46;
  MR_Word LaterSolnRowInitializers_47;
  MR_Word FirstSolnVectorCommon_48;
  MR_Word GlobalData3_49;
  MR_Word LaterSolnVectorCommon_50;
  MR_Word GlobalData_51;
  MR_Word MatchDefns_52;
  MR_Word InRangeStmts_53;
  MR_Word InRangeStmt_54;
  MR_Word Var_60;
  MR_Word Var_67;
  MR_Word STATE_VARIABLE_Info_69_69;

  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_57, &ModuleInfo_24);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_24, &ModuleName_25);
  MLDS_ModuleName_26 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_25);
  ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_57, &Target_27);
  MLDS_IntType_28 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[6]));
  {
    Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MLDS_IntType_28));
    MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (OutTypes_15));
  }
  {
    FirstSolnFieldTypes_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), FirstSolnFieldTypes_29, 0) = ((MR_Box) (MLDS_IntType_28));
    MR_hl_field(MR_mktag(1), FirstSolnFieldTypes_29, 1) = ((MR_Box) (Var_60));
  }
  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_57, &GlobalData0_30);
  ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(MLDS_ModuleName_26, Context_17, Target_27, FirstSolnFieldTypes_29, &FirstSolnStructTypeNum_31, &FirstSolnStructType_32, &FirstSolnTableFieldIds_33, GlobalData0_30, &GlobalData1_34);
  ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(MLDS_ModuleName_26, Context_17, Target_27, OutTypes_15, &LaterSolnStructTypeNum_35, &LaterSolnStructType_36, &LaterSolnOutFieldIds_37, GlobalData1_34, &GlobalData2_38);
  if ((FirstSolnTableFieldIds_33 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_several_soln_atomic_lookup_switch\'/12", (MR_String) "not enough field_ids");
      return;
    }
  else
  {
    MR_Word Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FirstSolnTableFieldIds_33, (MR_Integer) 1))));
    MR_Word Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FirstSolnTableFieldIds_33, (MR_Integer) 0))));

    if ((Var_96 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_several_soln_atomic_lookup_switch\'/12", (MR_String) "not enough field_ids");
        return;
      }
    else
    {
      NumLaterSolnsFieldId_40 = Var_97;
      FirstLaterSolnRowFieldId_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_96, (MR_Integer) 0))));
      FirstSolnOutFieldIds_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_96, (MR_Integer) 1))));
    }
  }
  Var_67 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0));
  ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0(StartVal_18, EndVal_19, (MR_Integer) 0, CaseSolns_16, FirstSolnStructType_32, LaterSolnStructType_36, OutTypes_15, (MR_Word) ((MR_Unsigned) 0U), &RevFirstSolnRowInitializers_43, Var_67, &LaterSolnRowInitializersCord_44, (MR_Integer) 0, &HadDummyRows_45);
  mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RevFirstSolnRowInitializers_43, &FirstSolnRowInitializers_46);
  LaterSolnRowInitializers_47 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), LaterSolnRowInitializersCord_44);
  ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_26, FirstSolnStructTypeNum_31, FirstSolnRowInitializers_46, &FirstSolnVectorCommon_48, GlobalData2_38, &GlobalData3_49);
  ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_26, LaterSolnStructTypeNum_35, LaterSolnRowInitializers_47, &LaterSolnVectorCommon_50, GlobalData3_49, &GlobalData_51);
  ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_51, STATE_VARIABLE_Info_0_57, &STATE_VARIABLE_Info_69_69);
  switch (NeedBitVecCheck_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_78;

        {
          Var_78 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_10[4]));
          MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_1));
          MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (HadDummyRows_45));
          MR_hl_field(MR_mktag(0), Var_78, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__require__expect_3_p_0(Var_78, (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_several_soln_atomic_lookup_switch\'/12", (MR_String) "bad dont_need_bit_vec_check_no_gaps");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_74;

        {
          Var_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_10[4]));
          MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_2));
          MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (HadDummyRows_45));
          MR_hl_field(MR_mktag(0), Var_74, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__require__expect_3_p_0(Var_74, (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_several_soln_atomic_lookup_switch\'/12", (MR_String) "bad dont_need_bit_vec_check_with_gaps");
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_70;

        {
          Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_10[4]));
          MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_3));
          MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (HadDummyRows_45));
          MR_hl_field(MR_mktag(0), Var_70, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__require__expect_3_p_0(Var_70, (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_several_soln_atomic_lookup_switch\'/12", (MR_String) "bad need_bit_vec_check");
      }
      break;
  }
  ml_backend__ml_lookup_switch__ml_gen_several_soln_lookup_code_17_p_0(Context_17, IndexRval_13, OutVars_14, OutTypes_15, FirstSolnStructType_32, LaterSolnStructType_36, NumLaterSolnsFieldId_40, FirstLaterSolnRowFieldId_41, FirstSolnOutFieldIds_42, LaterSolnOutFieldIds_37, FirstSolnVectorCommon_48, LaterSolnVectorCommon_50, NeedBitVecCheck_20, &MatchDefns_52, &InRangeStmts_53, STATE_VARIABLE_Info_69_69, STATE_VARIABLE_Info_58);
  {
    InRangeStmt_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), InRangeStmt_54, 0) = ((MR_Box) (MatchDefns_52));
    MR_hl_field(MR_mktag(0), InRangeStmt_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), InRangeStmt_54, 2) = ((MR_Box) (InRangeStmts_53));
    MR_hl_field(MR_mktag(0), InRangeStmt_54, 3) = ((MR_Box) (Context_17));
  }
  switch (NeedRangeCheck_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *Stmt_22 = InRangeStmt_54;
      break;
    case (MR_Integer) 0:
      {
        MR_Integer Difference_55 = (MR_Integer) ((MR_Unsigned) EndVal_19 - (MR_Unsigned) StartVal_18);
        MR_Word RangeCheckCond_56;
        MR_Word Var_85;
        MR_Word Var_86;

        {
          Var_86 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_86, 0) = ((MR_Box) (Difference_55));
        }
        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (Var_86));
        }
        {
          RangeCheckCond_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), RangeCheckCond_56, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(MR_mktag(3), RangeCheckCond_56, 1) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(MR_mktag(3), RangeCheckCond_56, 2) = ((MR_Box) (IndexRval_13));
          MR_hl_field(MR_mktag(3), RangeCheckCond_56, 3) = ((MR_Box) (Var_85));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *Stmt_22 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (RangeCheckCond_56));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (InRangeStmt_54));
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Context_17));
        }
      }
      break;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_RowInitializer_6;

  conv2_RowInitializer_6 = ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_RowInitializer_6));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0(
  MR_Integer CurIndex_2,
  MR_Integer EndVal_3,
  MR_Integer STATE_VARIABLE_NextLaterSolnRow_0_4,
  MR_Word HeadVar__5_5,
  MR_Word FirstSolnStructType_6,
  MR_Word LaterSolnStructType_7,
  MR_Word FieldTypes_8,
  MR_Word STATE_VARIABLE_RevFirstSolnRowInitializers_0_9,
  MR_Word * STATE_VARIABLE_RevFirstSolnRowInitializers_10,
  MR_Word STATE_VARIABLE_LaterSolnRowInitializersCord_0_11,
  MR_Word * STATE_VARIABLE_LaterSolnRowInitializersCord_12,
  MR_Word STATE_VARIABLE_HadDummyRows_0_13,
  MR_Word * STATE_VARIABLE_HadDummyRows_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (CurIndex_2 > EndVal_3);
      if (succeeded)
      {
        *STATE_VARIABLE_HadDummyRows_14 = STATE_VARIABLE_HadDummyRows_0_13;
        *STATE_VARIABLE_LaterSolnRowInitializersCord_12 = STATE_VARIABLE_LaterSolnRowInitializersCord_0_11;
        *STATE_VARIABLE_RevFirstSolnRowInitializers_10 = STATE_VARIABLE_RevFirstSolnRowInitializers_0_9;
      }
      else
      {
        MR_Word STATE_VARIABLE_RevFirstSolnRowInitializers_32_32;
        MR_Integer Var_34;
        MR_Integer next_value_of_CurIndex_2;
        MR_Word next_value_of_STATE_VARIABLE_RevFirstSolnRowInitializers_0_9;

        ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0(FirstSolnStructType_6, FieldTypes_8, STATE_VARIABLE_RevFirstSolnRowInitializers_0_9, &STATE_VARIABLE_RevFirstSolnRowInitializers_32_32);
        Var_34 = (MR_Integer) ((MR_Unsigned) CurIndex_2 + (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_CurIndex_2 = Var_34;
        next_value_of_STATE_VARIABLE_RevFirstSolnRowInitializers_0_9 = STATE_VARIABLE_RevFirstSolnRowInitializers_32_32;
        CurIndex_2 = next_value_of_CurIndex_2;
        HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_RevFirstSolnRowInitializers_0_9 = next_value_of_STATE_VARIABLE_RevFirstSolnRowInitializers_0_9;
        STATE_VARIABLE_HadDummyRows_0_13 = (MR_Integer) 1;
        continue;
      }
    }
    else
    {
      MR_Word Pair_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Pairs_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Integer Index_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Pair_44, (MR_Integer) 0))));
      MR_Word Soln_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pair_44, (MR_Integer) 1))));
      MR_Word NextPairs_54;
      MR_Word STATE_VARIABLE_RevFirstSolnRowInitializers_72_72;
      MR_Word STATE_VARIABLE_HadDummyRows_73_73;
      MR_Word STATE_VARIABLE_LaterSolnRowInitializersCord_78_78;
      MR_Integer STATE_VARIABLE_NextLaterSolnRow_80_80;
      MR_Integer Var_86;
      MR_Integer next_value_of_CurIndex_2;
      MR_Integer next_value_of_STATE_VARIABLE_NextLaterSolnRow_0_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_RevFirstSolnRowInitializers_0_9;
      MR_Word next_value_of_STATE_VARIABLE_LaterSolnRowInitializersCord_0_11;
      MR_Word next_value_of_STATE_VARIABLE_HadDummyRows_0_13;

      succeeded = (CurIndex_2 < Index_52);
      if (succeeded)
      {
        ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0(FirstSolnStructType_6, FieldTypes_8, STATE_VARIABLE_RevFirstSolnRowInitializers_0_9, &STATE_VARIABLE_RevFirstSolnRowInitializers_72_72);
        STATE_VARIABLE_HadDummyRows_73_73 = (MR_Integer) 1;
        NextPairs_54 = HeadVar__5_5;
        STATE_VARIABLE_LaterSolnRowInitializersCord_78_78 = STATE_VARIABLE_LaterSolnRowInitializersCord_0_11;
        STATE_VARIABLE_NextLaterSolnRow_80_80 = STATE_VARIABLE_NextLaterSolnRow_0_4;
      }
      else
      {
        if (((MR_tag((MR_Word) Soln_53)) == (MR_Integer) 0))
        {
          MR_Word FieldRvals_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Soln_53, (MR_Integer) 0))));
          MR_Word FieldInitializers_56;
          MR_Word NumLaterSolnsInitializer_57;
          MR_Word FirstLaterSlotInitializer_58;
          MR_Word FirstSolnFieldInitializers_59;
          MR_Word FirstSolnRowInitializer_60;
          MR_Word Var_84;

          FieldInitializers_56 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_11[4]), FieldRvals_55);
          NumLaterSolnsInitializer_57 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
          FirstLaterSlotInitializer_58 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) -1);
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (FirstLaterSlotInitializer_58));
            MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (FieldInitializers_56));
          }
          {
            FirstSolnFieldInitializers_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), FirstSolnFieldInitializers_59, 0) = ((MR_Box) (NumLaterSolnsInitializer_57));
            MR_hl_field(MR_mktag(1), FirstSolnFieldInitializers_59, 1) = ((MR_Box) (Var_84));
          }
          {
            FirstSolnRowInitializer_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), FirstSolnRowInitializer_60, 0) = ((MR_Box) (FirstSolnStructType_6));
            MR_hl_field(MR_mktag(2), FirstSolnRowInitializer_60, 1) = ((MR_Box) (FirstSolnFieldInitializers_59));
          }
          {
            STATE_VARIABLE_RevFirstSolnRowInitializers_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFirstSolnRowInitializers_72_72, 0) = ((MR_Box) (FirstSolnRowInitializer_60));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFirstSolnRowInitializers_72_72, 1) = ((MR_Box) (STATE_VARIABLE_RevFirstSolnRowInitializers_0_9));
          }
          STATE_VARIABLE_NextLaterSolnRow_80_80 = STATE_VARIABLE_NextLaterSolnRow_0_4;
          STATE_VARIABLE_LaterSolnRowInitializersCord_78_78 = STATE_VARIABLE_LaterSolnRowInitializersCord_0_11;
        }
        else
        {
          MR_Word FirstSolnRvals_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Soln_53, (MR_Integer) 0))));
          MR_Word LaterSolns_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Soln_53, (MR_Integer) 1))));
          MR_Integer NumLaterSolns_63;
          MR_Word LaterSolnRowInitializers_64;
          MR_Word Var_75;
          MR_Word Var_77;
          MR_Word Var_79;
          MR_Word FieldInitializers_91;
          MR_Word NumLaterSolnsInitializer_92;
          MR_Word FirstLaterSlotInitializer_93;
          MR_Word FirstSolnFieldInitializers_94;
          MR_Word FirstSolnRowInitializer_95;

          FieldInitializers_91 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_11[5]), FirstSolnRvals_61);
          mercury__list__length_2_p_0((MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_1[1]), LaterSolns_62, &NumLaterSolns_63);
          NumLaterSolnsInitializer_92 = ml_backend__ml_util__gen_init_int_1_f_0(NumLaterSolns_63);
          FirstLaterSlotInitializer_93 = ml_backend__ml_util__gen_init_int_1_f_0(STATE_VARIABLE_NextLaterSolnRow_0_4);
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (FirstLaterSlotInitializer_93));
            MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (FieldInitializers_91));
          }
          {
            FirstSolnFieldInitializers_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), FirstSolnFieldInitializers_94, 0) = ((MR_Box) (NumLaterSolnsInitializer_92));
            MR_hl_field(MR_mktag(1), FirstSolnFieldInitializers_94, 1) = ((MR_Box) (Var_75));
          }
          {
            FirstSolnRowInitializer_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), FirstSolnRowInitializer_95, 0) = ((MR_Box) (FirstSolnStructType_6));
            MR_hl_field(MR_mktag(2), FirstSolnRowInitializer_95, 1) = ((MR_Box) (FirstSolnFieldInitializers_94));
          }
          {
            STATE_VARIABLE_RevFirstSolnRowInitializers_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFirstSolnRowInitializers_72_72, 0) = ((MR_Box) (FirstSolnRowInitializer_95));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevFirstSolnRowInitializers_72_72, 1) = ((MR_Box) (STATE_VARIABLE_RevFirstSolnRowInitializers_0_9));
          }
          {
            Var_77 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_7[1]));
            MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_3));
            MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (LaterSolnStructType_7));
          }
          LaterSolnRowInitializers_64 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_1[1]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Var_77, LaterSolns_62);
          Var_79 = mercury__cord__from_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), LaterSolnRowInitializers_64);
          STATE_VARIABLE_LaterSolnRowInitializersCord_78_78 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), STATE_VARIABLE_LaterSolnRowInitializersCord_0_11, Var_79);
          STATE_VARIABLE_NextLaterSolnRow_80_80 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NextLaterSolnRow_0_4 + (MR_Unsigned) NumLaterSolns_63);
        }
        NextPairs_54 = Pairs_45;
        STATE_VARIABLE_HadDummyRows_73_73 = STATE_VARIABLE_HadDummyRows_0_13;
      }
      Var_86 = (MR_Integer) ((MR_Unsigned) CurIndex_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurIndex_2 = Var_86;
      next_value_of_STATE_VARIABLE_NextLaterSolnRow_0_4 = STATE_VARIABLE_NextLaterSolnRow_80_80;
      next_value_of_HeadVar__5_5 = NextPairs_54;
      next_value_of_STATE_VARIABLE_RevFirstSolnRowInitializers_0_9 = STATE_VARIABLE_RevFirstSolnRowInitializers_72_72;
      next_value_of_STATE_VARIABLE_LaterSolnRowInitializersCord_0_11 = STATE_VARIABLE_LaterSolnRowInitializersCord_78_78;
      next_value_of_STATE_VARIABLE_HadDummyRows_0_13 = STATE_VARIABLE_HadDummyRows_73_73;
      CurIndex_2 = next_value_of_CurIndex_2;
      STATE_VARIABLE_NextLaterSolnRow_0_4 = next_value_of_STATE_VARIABLE_NextLaterSolnRow_0_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_RevFirstSolnRowInitializers_0_9 = next_value_of_STATE_VARIABLE_RevFirstSolnRowInitializers_0_9;
      STATE_VARIABLE_LaterSolnRowInitializersCord_0_11 = next_value_of_STATE_VARIABLE_LaterSolnRowInitializersCord_0_11;
      STATE_VARIABLE_HadDummyRows_0_13 = next_value_of_STATE_VARIABLE_HadDummyRows_0_13;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_DefaultRval_4;

  conv0_DefaultRval_4 = ml_backend__ml_lookup_switch__ml_default_value_for_type_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_DefaultRval_4));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0(
  MR_Word FirstSolnStructType_5,
  MR_Word FieldTypes_6,
  MR_Word STATE_VARIABLE_RevFirstSolnRowInitializers_0_14,
  MR_Word * STATE_VARIABLE_RevFirstSolnRowInitializers_15)
{
  MR_Word FieldRvals_8;
  MR_Word FieldInitializers_9;
  MR_Word NumLaterSolnsInitializer_10;
  MR_Word FirstLaterSlotInitializer_11;
  MR_Word FirstSolnFieldInitializers_12;
  MR_Word FirstSolnRowInitializer_13;
  MR_Word Var_20;

  FieldRvals_8 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_11[2]), FieldTypes_6);
  FieldInitializers_9 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_11[3]), FieldRvals_8);
  NumLaterSolnsInitializer_10 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) -1);
  FirstLaterSlotInitializer_11 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) -1);
  {
    Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (FirstLaterSlotInitializer_11));
    MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (FieldInitializers_9));
  }
  {
    FirstSolnFieldInitializers_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), FirstSolnFieldInitializers_12, 0) = ((MR_Box) (NumLaterSolnsInitializer_10));
    MR_hl_field(MR_mktag(1), FirstSolnFieldInitializers_12, 1) = ((MR_Box) (Var_20));
  }
  {
    FirstSolnRowInitializer_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), FirstSolnRowInitializer_13, 0) = ((MR_Box) (FirstSolnStructType_5));
    MR_hl_field(MR_mktag(2), FirstSolnRowInitializer_13, 1) = ((MR_Box) (FirstSolnFieldInitializers_12));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_RevFirstSolnRowInitializers_15 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstSolnRowInitializer_13));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevFirstSolnRowInitializers_0_14));
  }
}

void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_lookup_code_17_p_0(
  MR_Word Context_18,
  MR_Word SlotVarRval_19,
  MR_Word OutVars_20,
  MR_Word OutTypes_21,
  MR_Word FirstSolnStructType_22,
  MR_Word LaterSolnStructType_23,
  MR_Word NumLaterSolnsFieldId_24,
  MR_Word FirstLaterSolnRowFieldId_25,
  MR_Word FirstSolnOutFieldIds_26,
  MR_Word LaterSolnOutFieldIds_27,
  MR_Word FirstSolnVectorCommon_28,
  MR_Word LaterSolnVectorCommon_29,
  MR_Word NeedBitVecCheck_30,
  MR_Word * MatchDefns_31,
  MR_Word * Stmts_32,
  MR_Word STATE_VARIABLE_Info_0_66,
  MR_Word * STATE_VARIABLE_Info_67)
{
  MR_Word SeveralSolnLookupVars_34;
  MR_Word NumLaterSolnsVarNameType_35;
  MR_Word LaterSlotVarNameType_36;
  MR_Word LimitVarNameType_37;
  MR_Word LimitAssignStmt_38;
  MR_Word IncrLaterSlotVarStmt_39;
  MR_Word NumLaterSolnsVarName_40;
  MR_Word NumLaterSolnsType_41;
  MR_Word NumLaterSolnsVarLval_42;
  MR_Word LaterSlotVarName_43;
  MR_Word LaterSlotType_44;
  MR_Word LaterSlotVarLval_45;
  MR_Word LimitVarName_46;
  MR_Word LimitType_47;
  MR_Word LimitVarLval_48;
  MR_Word NumLaterSolnsVarRval_49;
  MR_Word LaterSlotVarRval_50;
  MR_Word LimitVarRval_51;
  MR_Word MLDS_IntType_52;
  MR_Word NumLaterSolnsAssignStmt_53;
  MR_Word LaterSlotVarAssignStmt_54;
  MR_Word FirstSolnLookupStmts_55;
  MR_Word LaterSolnLookupStmts_56;
  MR_Word CallContStmt_57;
  MR_Word FirstLookupSucceedStmt_58;
  MR_Word LaterLookupSucceedStmt_59;
  MR_Word MoreSolnsLoopCond_60;
  MR_Word MoreSolnsLoopStmt_61;
  MR_Word OneOrMoreSolnsStmts_62;
  MR_Word STATE_VARIABLE_Info_68_68;
  MR_Word STATE_VARIABLE_Info_70_70;
  MR_Word STATE_VARIABLE_Info_71_71;
  MR_Word STATE_VARIABLE_Info_72_72;
  MR_Word STATE_VARIABLE_Info_73_73;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_89;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;

  ml_backend__ml_lookup_switch__make_several_soln_lookup_vars_4_p_0(Context_18, &SeveralSolnLookupVars_34, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_68_68);
  NumLaterSolnsVarNameType_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SeveralSolnLookupVars_34, (MR_Integer) 0))));
  LaterSlotVarNameType_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SeveralSolnLookupVars_34, (MR_Integer) 1))));
  LimitVarNameType_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SeveralSolnLookupVars_34, (MR_Integer) 2))));
  LimitAssignStmt_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SeveralSolnLookupVars_34, (MR_Integer) 3))));
  IncrLaterSlotVarStmt_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SeveralSolnLookupVars_34, (MR_Integer) 4))));
  *MatchDefns_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SeveralSolnLookupVars_34, (MR_Integer) 5))));
  NumLaterSolnsVarName_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NumLaterSolnsVarNameType_35, (MR_Integer) 0))));
  NumLaterSolnsType_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NumLaterSolnsVarNameType_35, (MR_Integer) 1))));
  {
    NumLaterSolnsVarLval_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), NumLaterSolnsVarLval_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), NumLaterSolnsVarLval_42, 1) = ((MR_Box) (NumLaterSolnsVarName_40));
    MR_hl_field(MR_mktag(3), NumLaterSolnsVarLval_42, 2) = ((MR_Box) (NumLaterSolnsType_41));
  }
  LaterSlotVarName_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LaterSlotVarNameType_36, (MR_Integer) 0))));
  LaterSlotType_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LaterSlotVarNameType_36, (MR_Integer) 1))));
  {
    LaterSlotVarLval_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), LaterSlotVarLval_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), LaterSlotVarLval_45, 1) = ((MR_Box) (LaterSlotVarName_43));
    MR_hl_field(MR_mktag(3), LaterSlotVarLval_45, 2) = ((MR_Box) (LaterSlotType_44));
  }
  LimitVarName_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LimitVarNameType_37, (MR_Integer) 0))));
  LimitType_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LimitVarNameType_37, (MR_Integer) 1))));
  {
    LimitVarLval_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), LimitVarLval_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), LimitVarLval_48, 1) = ((MR_Box) (LimitVarName_46));
    MR_hl_field(MR_mktag(3), LimitVarLval_48, 2) = ((MR_Box) (LimitType_47));
  }
  {
    NumLaterSolnsVarRval_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), NumLaterSolnsVarRval_49, 0) = ((MR_Box) (NumLaterSolnsVarLval_42));
  }
  {
    LaterSlotVarRval_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), LaterSlotVarRval_50, 0) = ((MR_Box) (LaterSlotVarLval_45));
  }
  {
    LimitVarRval_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), LimitVarRval_51, 0) = ((MR_Box) (LimitVarLval_48));
  }
  MLDS_IntType_52 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[6]));
  ml_backend__ml_code_util__ml_generate_field_assign_10_p_0(NumLaterSolnsVarLval_42, MLDS_IntType_52, NumLaterSolnsFieldId_24, FirstSolnVectorCommon_28, FirstSolnStructType_22, SlotVarRval_19, Context_18, &NumLaterSolnsAssignStmt_53, STATE_VARIABLE_Info_68_68, &STATE_VARIABLE_Info_70_70);
  ml_backend__ml_code_util__ml_generate_field_assign_10_p_0(LaterSlotVarLval_45, MLDS_IntType_52, FirstLaterSolnRowFieldId_25, FirstSolnVectorCommon_28, FirstSolnStructType_22, SlotVarRval_19, Context_18, &LaterSlotVarAssignStmt_54, STATE_VARIABLE_Info_70_70, &STATE_VARIABLE_Info_71_71);
  ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(OutVars_20, OutTypes_21, FirstSolnOutFieldIds_26, FirstSolnVectorCommon_28, FirstSolnStructType_22, SlotVarRval_19, Context_18, &FirstSolnLookupStmts_55, STATE_VARIABLE_Info_71_71, &STATE_VARIABLE_Info_72_72);
  ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(OutVars_20, OutTypes_21, LaterSolnOutFieldIds_27, LaterSolnVectorCommon_29, LaterSolnStructType_23, LaterSlotVarRval_50, Context_18, &LaterSolnLookupStmts_56, STATE_VARIABLE_Info_72_72, &STATE_VARIABLE_Info_73_73);
  ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(Context_18, &CallContStmt_57, STATE_VARIABLE_Info_73_73, STATE_VARIABLE_Info_67);
  {
    Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (CallContStmt_57));
    MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), FirstSolnLookupStmts_55, Var_78);
  {
    FirstLookupSucceedStmt_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), FirstLookupSucceedStmt_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), FirstLookupSucceedStmt_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), FirstLookupSucceedStmt_58, 2) = ((MR_Box) (Var_77));
    MR_hl_field(MR_mktag(0), FirstLookupSucceedStmt_58, 3) = ((MR_Box) (Context_18));
  }
  {
    Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (IncrLaterSlotVarStmt_39));
    MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (CallContStmt_57));
    MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_84));
  }
  Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), LaterSolnLookupStmts_56, Var_83);
  {
    LaterLookupSucceedStmt_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), LaterLookupSucceedStmt_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), LaterLookupSucceedStmt_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), LaterLookupSucceedStmt_59, 2) = ((MR_Box) (Var_82));
    MR_hl_field(MR_mktag(0), LaterLookupSucceedStmt_59, 3) = ((MR_Box) (Context_18));
  }
  {
    MoreSolnsLoopCond_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MoreSolnsLoopCond_60, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(MR_mktag(3), MoreSolnsLoopCond_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[7])));
    MR_hl_field(MR_mktag(3), MoreSolnsLoopCond_60, 2) = ((MR_Box) (LaterSlotVarRval_50));
    MR_hl_field(MR_mktag(3), MoreSolnsLoopCond_60, 3) = ((MR_Box) (LimitVarRval_51));
  }
  {
    Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (LaterSlotVarName_43));
    MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MoreSolnsLoopStmt_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), MoreSolnsLoopStmt_61, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(1), MoreSolnsLoopStmt_61, 1) = ((MR_Box) (MoreSolnsLoopCond_60));
    MR_hl_field(MR_mktag(1), MoreSolnsLoopStmt_61, 2) = ((MR_Box) (LaterLookupSucceedStmt_59));
    MR_hl_field(MR_mktag(1), MoreSolnsLoopStmt_61, 3) = ((MR_Box) (Var_89));
    MR_hl_field(MR_mktag(1), MoreSolnsLoopStmt_61, 4) = ((MR_Box) (Context_18));
  }
  {
    Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (MoreSolnsLoopStmt_61));
    MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (LimitAssignStmt_38));
    MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_93));
  }
  {
    Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (LaterSlotVarAssignStmt_54));
    MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_92));
  }
  {
    OneOrMoreSolnsStmts_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), OneOrMoreSolnsStmts_62, 0) = ((MR_Box) (FirstLookupSucceedStmt_58));
    MR_hl_field(MR_mktag(1), OneOrMoreSolnsStmts_62, 1) = ((MR_Box) (Var_91));
  }
  switch (NeedBitVecCheck_30) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Stmts_32 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NumLaterSolnsAssignStmt_53));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OneOrMoreSolnsStmts_62));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word OneOrMoreSolnsBlockStmt_63;
        MR_Word AnySolnsCond_64;
        MR_Word ZeroOrMoreSolnsStmt_65;
        MR_Word Var_103;

        {
          OneOrMoreSolnsBlockStmt_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OneOrMoreSolnsBlockStmt_63, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), OneOrMoreSolnsBlockStmt_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), OneOrMoreSolnsBlockStmt_63, 2) = ((MR_Box) (OneOrMoreSolnsStmts_62));
          MR_hl_field(MR_mktag(0), OneOrMoreSolnsBlockStmt_63, 3) = ((MR_Box) (Context_18));
        }
        {
          AnySolnsCond_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), AnySolnsCond_64, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(MR_mktag(3), AnySolnsCond_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[8])));
          MR_hl_field(MR_mktag(3), AnySolnsCond_64, 2) = ((MR_Box) (NumLaterSolnsVarRval_49));
          MR_hl_field(MR_mktag(3), AnySolnsCond_64, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[9])));
        }
        {
          ZeroOrMoreSolnsStmt_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ZeroOrMoreSolnsStmt_65, 0) = ((MR_Box) (AnySolnsCond_64));
          MR_hl_field(MR_mktag(2), ZeroOrMoreSolnsStmt_65, 1) = ((MR_Box) (OneOrMoreSolnsBlockStmt_63));
          MR_hl_field(MR_mktag(2), ZeroOrMoreSolnsStmt_65, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(2), ZeroOrMoreSolnsStmt_65, 3) = ((MR_Box) (Context_18));
        }
        {
          Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (ZeroOrMoreSolnsStmt_65));
          MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_32 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NumLaterSolnsAssignStmt_53));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_103));
        }
      }
      break;
  }
}

void MR_CALL 
ml_backend__ml_lookup_switch__make_several_soln_lookup_vars_4_p_0(
  MR_Word Context_5,
  MR_Word * SeveralSolnLookupVars_6,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_Word NumLaterSolnsVarName_8;
  MR_Word IntType_9;
  MR_Word NumLaterSolnsVarDefn_10;
  MR_Word NumLaterSolnsVarNameType_11;
  MR_Word NumLaterSolnsVarLval_12;
  MR_Word LaterSlotVarName_13;
  MR_Word LaterSlotVarDefn_14;
  MR_Word LaterSlotVarNameType_15;
  MR_Word LaterSlotVarLval_16;
  MR_Word LimitVarName_17;
  MR_Word LimitVarDefn_18;
  MR_Word LimitVarNameType_19;
  MR_Word LimitVarLval_20;
  MR_Word Defns_21;
  MR_Word LaterSlotVarRval_22;
  MR_Word NumLaterSolnsVarRval_23;
  MR_Word LimitAssign_24;
  MR_Word LimitAssignStmt_25;
  MR_Word IncrLaterSlotVar_26;
  MR_Word IncrLaterSlotVarStmt_27;
  MR_Word STATE_VARIABLE_Info_31_31;
  MR_Word STATE_VARIABLE_Info_35_35;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_46;

  ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 3, &NumLaterSolnsVarName_8, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_31_31);
  IntType_9 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[6]));
  NumLaterSolnsVarDefn_10 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(NumLaterSolnsVarName_8, IntType_9, (MR_Word) ((MR_Unsigned) 0U), Context_5);
  {
    NumLaterSolnsVarNameType_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), NumLaterSolnsVarNameType_11, 0) = ((MR_Box) (NumLaterSolnsVarName_8));
    MR_hl_field(MR_mktag(0), NumLaterSolnsVarNameType_11, 1) = ((MR_Box) (IntType_9));
  }
  {
    NumLaterSolnsVarLval_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), NumLaterSolnsVarLval_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), NumLaterSolnsVarLval_12, 1) = ((MR_Box) (NumLaterSolnsVarName_8));
    MR_hl_field(MR_mktag(3), NumLaterSolnsVarLval_12, 2) = ((MR_Box) (IntType_9));
  }
  ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 2, &LaterSlotVarName_13, STATE_VARIABLE_Info_31_31, &STATE_VARIABLE_Info_35_35);
  LaterSlotVarDefn_14 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(LaterSlotVarName_13, IntType_9, (MR_Word) ((MR_Unsigned) 0U), Context_5);
  {
    LaterSlotVarNameType_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), LaterSlotVarNameType_15, 0) = ((MR_Box) (LaterSlotVarName_13));
    MR_hl_field(MR_mktag(0), LaterSlotVarNameType_15, 1) = ((MR_Box) (IntType_9));
  }
  {
    LaterSlotVarLval_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), LaterSlotVarLval_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), LaterSlotVarLval_16, 1) = ((MR_Box) (LaterSlotVarName_13));
    MR_hl_field(MR_mktag(3), LaterSlotVarLval_16, 2) = ((MR_Box) (IntType_9));
  }
  ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 4, &LimitVarName_17, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_29);
  LimitVarDefn_18 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(LimitVarName_17, IntType_9, (MR_Word) ((MR_Unsigned) 0U), Context_5);
  {
    LimitVarNameType_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), LimitVarNameType_19, 0) = ((MR_Box) (LimitVarName_17));
    MR_hl_field(MR_mktag(0), LimitVarNameType_19, 1) = ((MR_Box) (IntType_9));
  }
  {
    LimitVarLval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), LimitVarLval_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), LimitVarLval_20, 1) = ((MR_Box) (LimitVarName_17));
    MR_hl_field(MR_mktag(3), LimitVarLval_20, 2) = ((MR_Box) (IntType_9));
  }
  {
    Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (LimitVarDefn_18));
    MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (LaterSlotVarDefn_14));
    MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_41));
  }
  {
    Defns_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Defns_21, 0) = ((MR_Box) (NumLaterSolnsVarDefn_10));
    MR_hl_field(MR_mktag(1), Defns_21, 1) = ((MR_Box) (Var_40));
  }
  {
    LaterSlotVarRval_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), LaterSlotVarRval_22, 0) = ((MR_Box) (LaterSlotVarLval_16));
  }
  {
    NumLaterSolnsVarRval_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), NumLaterSolnsVarRval_23, 0) = ((MR_Box) (NumLaterSolnsVarLval_12));
  }
  Var_44 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_lookup_switch_scalar_common_3[0]));
  {
    Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (Var_44));
    MR_hl_field(MR_mktag(3), Var_43, 2) = ((MR_Box) (LaterSlotVarRval_22));
    MR_hl_field(MR_mktag(3), Var_43, 3) = ((MR_Box) (NumLaterSolnsVarRval_23));
  }
  {
    LimitAssign_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), LimitAssign_24, 0) = ((MR_Box) (LimitVarLval_20));
    MR_hl_field(MR_mktag(2), LimitAssign_24, 1) = ((MR_Box) (Var_43));
  }
  {
    LimitAssignStmt_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), LimitAssignStmt_25, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(MR_mktag(3), LimitAssignStmt_25, 1) = ((MR_Box) (LimitAssign_24));
    MR_hl_field(MR_mktag(3), LimitAssignStmt_25, 2) = ((MR_Box) (Context_5));
  }
  {
    Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (Var_44));
    MR_hl_field(MR_mktag(3), Var_46, 2) = ((MR_Box) (LaterSlotVarRval_22));
    MR_hl_field(MR_mktag(3), Var_46, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[10])));
  }
  {
    IncrLaterSlotVar_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), IncrLaterSlotVar_26, 0) = ((MR_Box) (LaterSlotVarLval_16));
    MR_hl_field(MR_mktag(2), IncrLaterSlotVar_26, 1) = ((MR_Box) (Var_46));
  }
  {
    IncrLaterSlotVarStmt_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), IncrLaterSlotVarStmt_27, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(MR_mktag(3), IncrLaterSlotVarStmt_27, 1) = ((MR_Box) (IncrLaterSlotVar_26));
    MR_hl_field(MR_mktag(3), IncrLaterSlotVarStmt_27, 2) = ((MR_Box) (Context_5));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *SeveralSolnLookupVars_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NumLaterSolnsVarNameType_11));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LaterSlotVarNameType_15));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (LimitVarNameType_19));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (LimitAssignStmt_25));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (IncrLaterSlotVarStmt_27));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Defns_21));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_atomic_lookup_switch__336__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0(
  MR_Word IndexRval_14,
  MR_Word OutVars_15,
  MR_Word OutTypes_16,
  MR_Word CaseValues_17,
  MR_Word CodeModel_18,
  MR_Word Context_19,
  MR_Integer StartVal_20,
  MR_Integer EndVal_21,
  MR_Word NeedBitVecCheck_22,
  MR_Word NeedRangeCheck_23,
  MR_Word * Stmt_24,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_26;
  MR_Word ModuleName_27;
  MR_Word MLDS_ModuleName_28;
  MR_Word Target_29;
  MR_Word LookupStmts_30;
  MR_Word STATE_VARIABLE_Info_51_51;

  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_48, &ModuleInfo_26);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_26, &ModuleName_27);
  MLDS_ModuleName_28 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_27);
  ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_48, &Target_29);
  if ((OutTypes_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    LookupStmts_30 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Info_51_51 = STATE_VARIABLE_Info_0_48;
  }
  else
  {
    MR_Word GlobalData0_33;
    MR_Word StructTypeNum_34;
    MR_Word StructType_35;
    MR_Word FieldIds_36;
    MR_Word GlobalData1_37;
    MR_Word RowInitializers_38;
    MR_Word VectorCommon_39;
    MR_Word GlobalData_40;
    MR_Word STATE_VARIABLE_Info_50_50;

    ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_48, &GlobalData0_33);
    ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(MLDS_ModuleName_28, Context_19, Target_29, OutTypes_16, &StructTypeNum_34, &StructType_35, &FieldIds_36, GlobalData0_33, &GlobalData1_37);
    ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0(StructType_35, OutTypes_16, StartVal_20, CaseValues_17, &RowInitializers_38);
    ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(MLDS_ModuleName_28, StructTypeNum_34, RowInitializers_38, &VectorCommon_39, GlobalData1_37, &GlobalData_40);
    ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_40, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_50_50);
    ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(OutVars_15, OutTypes_16, FieldIds_36, VectorCommon_39, StructType_35, IndexRval_14, Context_19, &LookupStmts_30, STATE_VARIABLE_Info_50_50, &STATE_VARIABLE_Info_51_51);
  }
  switch (CodeModel_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_76;

        {
          Var_76 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_10[3]));
          MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0_1));
          MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (NeedRangeCheck_23));
          MR_hl_field(MR_mktag(0), Var_76, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__require__expect_3_p_0(Var_76, (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_simple_atomic_lookup_switch\'/13", (MR_String) "model_det need_range_check");
        switch (NeedBitVecCheck_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
            }
            break;
          case (MR_Integer) 2:
            {
            }
            break;
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_simple_atomic_lookup_switch\'/13", (MR_String) "model_det need_bit_vec_check");
              return;
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *Stmt_24 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (LookupStmts_30));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_19));
        }
        *STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_51_51;
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_simple_atomic_lookup_switch\'/13", (MR_String) "model_non");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SetSuccessTrueStmt_41;
        MR_Word LookupSucceedStmt_42;
        MR_Word STATE_VARIABLE_Info_55_55;
        MR_Word Var_59;
        MR_Word Var_60;

        ml_backend__ml_code_util__ml_gen_set_success_5_p_0((MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[34])), Context_19, &SetSuccessTrueStmt_41, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_55_55);
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (SetSuccessTrueStmt_41));
          MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), LookupStmts_30, Var_60);
        {
          LookupSucceedStmt_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), LookupSucceedStmt_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), LookupSucceedStmt_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), LookupSucceedStmt_42, 2) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(0), LookupSucceedStmt_42, 3) = ((MR_Box) (Context_19));
        }
        switch (NeedRangeCheck_23) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            switch (NeedBitVecCheck_22) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  *Stmt_24 = LookupSucceedStmt_42;
                  *STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_55_55;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word BitVecCheckCond_43;
                  MR_Word SetSuccessFalseStmt_44;
                  MR_Word STATE_VARIABLE_Info_71_71;
                  MR_Word Var_75;

                  ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_55_93_95_48_9_p_0(MLDS_ModuleName_28, Context_19, IndexRval_14, CaseValues_17, StartVal_20, &BitVecCheckCond_43, STATE_VARIABLE_Info_55_55, &STATE_VARIABLE_Info_71_71);
                  ml_backend__ml_code_util__ml_gen_set_success_5_p_0((MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[33])), Context_19, &SetSuccessFalseStmt_44, STATE_VARIABLE_Info_71_71, STATE_VARIABLE_Info_49);
                  {
                    Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (SetSuccessFalseStmt_44));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *Stmt_24 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (BitVecCheckCond_43));
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (LookupSucceedStmt_42));
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (Var_75));
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Context_19));
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Integer Difference_45 = (MR_Integer) ((MR_Unsigned) EndVal_21 - (MR_Unsigned) StartVal_20);
              MR_Word RangeCheckCond_46;
              MR_Word RangeCheckSuccessStmt_47;
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Word STATE_VARIABLE_Info_66_66;
              MR_Word Var_70;
              MR_Word SetSuccessFalseStmt_87;

              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_64, 0) = ((MR_Box) (Difference_45));
              }
              {
                Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (Var_64));
              }
              {
                RangeCheckCond_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RangeCheckCond_46, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), RangeCheckCond_46, 1) = ((MR_Box) ((MR_Unsigned) 48U));
                MR_hl_field(MR_mktag(3), RangeCheckCond_46, 2) = ((MR_Box) (IndexRval_14));
                MR_hl_field(MR_mktag(3), RangeCheckCond_46, 3) = ((MR_Box) (Var_63));
              }
              ml_backend__ml_code_util__ml_gen_set_success_5_p_0((MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[33])), Context_19, &SetSuccessFalseStmt_87, STATE_VARIABLE_Info_55_55, &STATE_VARIABLE_Info_66_66);
              switch (NeedBitVecCheck_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    RangeCheckSuccessStmt_47 = LookupSucceedStmt_42;
                    *STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_66_66;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Var_69;
                    MR_Word BitVecCheckCond_84;

                    ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_55_93_95_48_9_p_0(MLDS_ModuleName_28, Context_19, IndexRval_14, CaseValues_17, StartVal_20, &BitVecCheckCond_84, STATE_VARIABLE_Info_66_66, STATE_VARIABLE_Info_49);
                    {
                      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (SetSuccessFalseStmt_87));
                    }
                    {
                      RangeCheckSuccessStmt_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), RangeCheckSuccessStmt_47, 0) = ((MR_Box) (BitVecCheckCond_84));
                      MR_hl_field(MR_mktag(2), RangeCheckSuccessStmt_47, 1) = ((MR_Box) (LookupSucceedStmt_42));
                      MR_hl_field(MR_mktag(2), RangeCheckSuccessStmt_47, 2) = ((MR_Box) (Var_69));
                      MR_hl_field(MR_mktag(2), RangeCheckSuccessStmt_47, 3) = ((MR_Box) (Context_19));
                    }
                  }
                  break;
              }
              {
                Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (SetSuccessFalseStmt_87));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Stmt_24 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (RangeCheckCond_46));
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (RangeCheckSuccessStmt_47));
                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (Var_70));
                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Context_19));
              }
            }
            break;
        }
      }
      break;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_DefaultRval_4;

  conv0_DefaultRval_4 = ml_backend__ml_lookup_switch__ml_default_value_for_type_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_DefaultRval_4));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0(
  MR_Word StructType_2,
  MR_Word FieldTypes_3,
  MR_Integer CurIndex_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  MR_bool succeeded;

  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Pair_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word Pairs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
    MR_Word RowInitializer_17;
    MR_Word RowInitializers_18;
    MR_Integer Index_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Pair_15, (MR_Integer) 0))));
    MR_Word Rvals_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pair_15, (MR_Integer) 1))));
    MR_Word FieldRvals_21;
    MR_Word RemainingPairs_22;
    MR_Word FieldInitializers_23;
    MR_Integer Var_26;

    succeeded = (CurIndex_4 < Index_19);
    if (succeeded)
    {
      FieldRvals_21 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_11[0]), FieldTypes_3);
      RemainingPairs_22 = HeadVar__5_5;
    }
    else
    {
      FieldRvals_21 = Rvals_20;
      RemainingPairs_22 = Pairs_16;
    }
    FieldInitializers_23 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_11[1]), FieldRvals_21);
    {
      RowInitializer_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), RowInitializer_17, 0) = ((MR_Box) (StructType_2));
      MR_hl_field(MR_mktag(2), RowInitializer_17, 1) = ((MR_Box) (FieldInitializers_23));
    }
    Var_26 = (MR_Integer) ((MR_Unsigned) CurIndex_4 + (MR_Unsigned) 1);
    ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0(StructType_2, FieldTypes_3, Var_26, RemainingPairs_22, &RowInitializers_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RowInitializer_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RowInitializers_18));
    }
  }
}

static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_55_93_95_48_9_p_0(
  MR_Word MLDS_ModuleName_10,
  MR_Word Context_11,
  MR_Word IndexRval_12,
  MR_Word CaseVals_13,
  MR_Integer Start_14,
  MR_Word * CheckRval_16,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  MR_bool succeeded;
  MR_Word Globals_18;
  MR_Integer WordBits_19;
  MR_Integer Log2WordBits_20;
  MR_Word GlobalData0_21;
  MR_Word BitVecArgRvals_22;
  MR_Word BitVecRval_23;
  MR_Word GlobalData_24;
  MR_Word WordRval_26;
  MR_Word BitNumRval_27;
  MR_Word Var_49;
  MR_Word BitMap0_67;
  MR_Word BitMap_68;
  MR_Word WordVals_69;
  MR_Word WordInitializers_70;
  MR_Word Initializer_71;
  MR_Word SingleWordRval_25;
  MR_Word Var_32;

  ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(STATE_VARIABLE_Info_0_30, &Globals_18);
  backend_libs__switch_util__get_word_bits_3_p_0(Globals_18, &WordBits_19, &Log2WordBits_20);
  ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_30, &GlobalData0_21);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), &BitMap0_67);
  ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(CaseVals_13, Start_14, WordBits_19, BitMap0_67, &BitMap_68);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), BitMap_68, &WordVals_69);
  ml_backend__ml_lookup_switch__ml_generate_bit_vec_initializers_4_p_0(WordVals_69, (MR_Integer) 0, &BitVecArgRvals_22, &WordInitializers_70);
  {
    Initializer_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Initializer_71, 0) = ((MR_Box) (WordInitializers_70));
  }
  ml_backend__ml_global_data__ml_gen_static_scalar_const_value_8_p_0(MLDS_ModuleName_10, (MR_Integer) 6, (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[39])), Initializer_71, Context_11, &BitVecRval_23, GlobalData0_21, &GlobalData_24);
  succeeded = (BitVecArgRvals_22 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    SingleWordRval_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BitVecArgRvals_22, (MR_Integer) 0))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BitVecArgRvals_22, (MR_Integer) 1))));
    succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    WordRval_26 = SingleWordRval_25;
    BitNumRval_27 = IndexRval_12;
    *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
  }
  else
  {
    MR_Word WordNumRval_28;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Integer Var_45;

    ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_24, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_38, 0) = ((MR_Box) (Log2WordBits_20));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (Var_38));
    }
    {
      WordNumRval_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), WordNumRval_28, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), WordNumRval_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[35])));
      MR_hl_field(MR_mktag(3), WordNumRval_28, 2) = ((MR_Box) (IndexRval_12));
      MR_hl_field(MR_mktag(3), WordNumRval_28, 3) = ((MR_Box) (Var_37));
    }
    {
      WordRval_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), WordRval_26, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), WordRval_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[36])));
      MR_hl_field(MR_mktag(3), WordRval_26, 2) = ((MR_Box) (BitVecRval_23));
      MR_hl_field(MR_mktag(3), WordRval_26, 3) = ((MR_Box) (WordNumRval_28));
    }
    Var_45 = (MR_Integer) ((MR_Unsigned) WordBits_19 - (MR_Unsigned) 1);
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_44, 0) = ((MR_Box) (Var_45));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (Var_44));
    }
    {
      BitNumRval_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), BitNumRval_27, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), BitNumRval_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[37])));
      MR_hl_field(MR_mktag(3), BitNumRval_27, 2) = ((MR_Box) (IndexRval_12));
      MR_hl_field(MR_mktag(3), BitNumRval_27, 3) = ((MR_Box) (Var_43));
    }
  }
  {
    Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[38])));
    MR_hl_field(MR_mktag(3), Var_49, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[10])));
    MR_hl_field(MR_mktag(3), Var_49, 3) = ((MR_Box) (BitNumRval_27));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    *CheckRval_16 = base;
    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[37])));
    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (WordRval_26));
    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_49));
  }
}

static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Start_2,
  MR_Integer WordBits_3,
  MR_Word STATE_VARIABLE_BitMap_0_4,
  MR_Word * STATE_VARIABLE_BitMap_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_BitMap_5 = STATE_VARIABLE_BitMap_0_4;
    else
    {
      MR_Integer Tag_11;
      MR_Word Rest_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Val_17;
      MR_Integer WordNum_18;
      MR_Integer Offset_19;
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_BitMap_27_27;
      MR_Unsigned X0_20;
      MR_Box conv0_X0_20;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_BitMap_0_4;

      Tag_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
      Val_17 = (MR_Integer) ((MR_Unsigned) Tag_11 - (MR_Unsigned) Start_2);
      WordNum_18 = mercury__int__f_47_47_2_f_0(Val_17, WordBits_3);
      Offset_19 = mercury__int__mod_2_f_0(Val_17, WordBits_3);
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), STATE_VARIABLE_BitMap_0_4, WordNum_18, &conv0_X0_20);
      if (succeeded)
      {
        X0_20 = ((MR_Unsigned) (conv0_X0_20));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Unsigned X1_21;
        MR_Unsigned Var_25;

        Var_25 = mercury__uint__f_60_60_2_f_0((MR_Unsigned) 1U, Offset_19);
        X1_21 = (X0_20 | Var_25);
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), WordNum_18, ((MR_Box) (X1_21)), STATE_VARIABLE_BitMap_0_4, &STATE_VARIABLE_BitMap_27_27);
      }
      else
      {
        MR_Unsigned X1_31;

        X1_31 = mercury__uint__f_60_60_2_f_0((MR_Unsigned) 1U, Offset_19);
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), WordNum_18, ((MR_Box) (X1_31)), STATE_VARIABLE_BitMap_0_4, &STATE_VARIABLE_BitMap_27_27);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Rest_13;
      next_value_of_STATE_VARIABLE_BitMap_0_4 = STATE_VARIABLE_BitMap_27_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_BitMap_0_4 = next_value_of_STATE_VARIABLE_BitMap_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_generate_bit_vec_initializers_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Count_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Integer WordNum_7;
    MR_Unsigned Bits_8;
    MR_Word Rest_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Rval_11;
    MR_Word Rvals_12;
    MR_Word Initializer_13;
    MR_Word Initializers_14;
    MR_Unsigned WordVal_15;
    MR_Word Remainder_16;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_18;
    MR_Integer Var_19;

    WordNum_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
    Bits_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1))));
    succeeded = (Count_2 < WordNum_7);
    if (succeeded)
    {
      WordVal_15 = (MR_Unsigned) 0U;
      Remainder_16 = HeadVar__1_1;
    }
    else
    {
      WordVal_15 = Bits_8;
      Remainder_16 = Rest_9;
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (WordVal_15));
    }
    {
      Rval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Rval_11, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Rval_11, 1) = ((MR_Box) (Var_18));
    }
    {
      Initializer_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Initializer_13, 0) = ((MR_Box) (Rval_11));
    }
    Var_19 = (MR_Integer) ((MR_Unsigned) Count_2 + (MR_Unsigned) 1);
    ml_backend__ml_lookup_switch__ml_generate_bit_vec_initializers_4_p_0(Remainder_16, Var_19, &Rvals_12, &Initializers_14);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Rval_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Rvals_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Initializer_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Initializers_14));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_case_id_soln_consts_to_tag_soln_consts__225__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeInfo_for_V_15,
  MR_Word GetTag_5,
  MR_Word TaggedCases_6,
  MR_Word CaseIdMap_7,
  MR_Word * TagMap_8)
{
  MR_bool succeeded;
  MR_Word DepletedCaseIdMap_9;
  MR_Word Var_10;
  MR_Word Var_11;

  Var_10 = mercury__map__init_0_f_0(TypeInfo_for_T_14, TypeInfo_for_V_15);
  ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop_6_p_0(TypeInfo_for_T_14, TypeInfo_for_V_15, GetTag_5, TaggedCases_6, CaseIdMap_7, &DepletedCaseIdMap_9, Var_10, TagMap_8);
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_10[0]));
    MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (TypeInfo_for_V_15));
    MR_hl_field(MR_mktag(0), Var_11, 4) = ((MR_Box) (DepletedCaseIdMap_9));
  }
  mercury__require__expect_3_p_0(Var_11, (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_case_id_soln_consts_to_tag_soln_consts\'/4", (MR_String) "DepletedCaseIdMap not empty");
}

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_IndexMap_14;

  ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_IndexMap_14);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_IndexMap_14));
}

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop_6_p_0(
  MR_Word TypeInfo_for_Key_34,
  MR_Word TypeInfo_for_V_35,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CaseIdMap_0_3,
  MR_Word * STATE_VARIABLE_CaseIdMap_4,
  MR_Word STATE_VARIABLE_TagMap_0_5,
  MR_Word * STATE_VARIABLE_TagMap_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_TagMap_6 = STATE_VARIABLE_TagMap_0_5;
      *STATE_VARIABLE_CaseIdMap_4 = STATE_VARIABLE_CaseIdMap_0_3;
    }
    else
    {
      MR_Word TypeInfo_42_42;
      MR_Word TaggedCase_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TaggedCases_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word TaggedMainConsId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_15, (MR_Integer) 0))));
      MR_Word TaggedOtherConsIds_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_15, (MR_Integer) 1))));
      MR_Word CaseId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_15, (MR_Integer) 2))));
      MR_Box SolnConsts_23;
      MR_Word STATE_VARIABLE_CaseIdMap_28_28;
      MR_Word STATE_VARIABLE_TagMap_29_29;
      MR_Word Var_30;
      MR_Word STATE_VARIABLE_TagMap_31_31;
      MR_Word ConsTag_50;
      MR_Box Index_51;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
      MR_Box conv2_STATE_VARIABLE_TagMap_31_31;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_CaseIdMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_TagMap_0_5;

      mercury__map__det_remove_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), TypeInfo_for_V_35, ((MR_Box) (CaseId_21)), &SolnConsts_23, STATE_VARIABLE_CaseIdMap_0_3, &STATE_VARIABLE_CaseIdMap_28_28);
      ConsTag_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedMainConsId_19, (MR_Integer) 1))));
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      func_0(((MR_Box) (HeadVar__1_1)), ((MR_Box) (ConsTag_50)), &Index_51);
      mercury__map__det_insert_4_p_0(TypeInfo_for_Key_34, TypeInfo_for_V_35, Index_51, SolnConsts_23, STATE_VARIABLE_TagMap_0_5, &STATE_VARIABLE_TagMap_29_29);
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (TypeInfo_for_Key_34));
        MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) (TypeInfo_for_V_35));
        MR_hl_field(MR_mktag(0), Var_30, 5) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(MR_mktag(0), Var_30, 6) = SolnConsts_23;
      }
      {
        TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_42_42, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
        MR_hl_field(MR_mktag(0), TypeInfo_42_42, 1) = ((MR_Box) (TypeInfo_for_Key_34));
        MR_hl_field(MR_mktag(0), TypeInfo_42_42, 2) = ((MR_Box) (TypeInfo_for_V_35));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), TypeInfo_42_42, (MR_Word) (Var_30), TaggedOtherConsIds_20, ((MR_Box) (STATE_VARIABLE_TagMap_29_29)), &conv2_STATE_VARIABLE_TagMap_31_31);
      STATE_VARIABLE_TagMap_31_31 = ((MR_Word) (conv2_STATE_VARIABLE_TagMap_31_31));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TaggedCases_16;
      next_value_of_STATE_VARIABLE_CaseIdMap_0_3 = STATE_VARIABLE_CaseIdMap_28_28;
      next_value_of_STATE_VARIABLE_TagMap_0_5 = STATE_VARIABLE_TagMap_31_31;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_CaseIdMap_0_3 = next_value_of_STATE_VARIABLE_CaseIdMap_0_3;
      STATE_VARIABLE_TagMap_0_5 = next_value_of_STATE_VARIABLE_TagMap_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
ml_backend__ml_lookup_switch__ml_is_lookup_switch_7_p_0(
  MR_Word SwitchVar_8,
  MR_Word TaggedCases_9,
  MR_Word GoalInfo_10,
  MR_Word CodeModel_11,
  MR_Word * MaybeLookupSwitchInfo_12,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_105_115_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_7_p_0(SwitchVar_8, TaggedCases_9, GoalInfo_10, MaybeLookupSwitchInfo_12, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
}

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_105_115_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = ml_backend__ml_code_util__var_table_entry_to_mlds_type_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_105_115_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_7_p_0(
  MR_Word SwitchVar_8,
  MR_Word TaggedCases_9,
  MR_Word GoalInfo_10,
  MR_Word * MaybeLookupSwitchInfo_12,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_bool succeeded;
  MR_Word NonLocals_14;
  MR_Word OtherNonLocals_15;
  MR_Word OutVars_16;
  MR_Word ModuleInfo_17;
  MR_Word Globals_18;
  MR_Word OptTuple_19;
  MR_Word CaseSolnMap_20;
  MR_Word STATE_VARIABLE_Info_31_31;
  MR_Word TypeCtorInfo_160_160;
  MR_Word TypeInfo_161_161;
  MR_Word Var_29;
  MR_Word Var_30;

  NonLocals_14 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_10);
  parse_tree__set_of_var__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SwitchVar_8, NonLocals_14, &OtherNonLocals_15);
  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OtherNonLocals_15, &OutVars_16);
  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_27, &ModuleInfo_17);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_17, &Globals_18);
  libs__globals__get_opt_tuple_2_p_0(Globals_18, &OptTuple_19);
  Var_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_19, (MR_Integer) 1))) >> 13)) & (MR_Integer) 1);
  succeeded = (Var_29 == (MR_Integer) 0);
  if (succeeded)
  {
    TypeCtorInfo_160_160 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0);
    TypeInfo_161_161 = (MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_1[0]);
    Var_30 = mercury__map__init_0_f_0(TypeCtorInfo_160_160, TypeInfo_161_161);
    succeeded = ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_8_p_0(OutVars_16, OtherNonLocals_15, TaggedCases_9, Var_30, &CaseSolnMap_20, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_31_31);
  }
  if (succeeded)
  {
    MR_Word CaseConsts_22;
    MR_Word VarTable_23;
    MR_Word OutVarEntries_24;
    MR_Word FieldTypes_25;
    MR_Word LookupSwitchInfo_26;
    MR_Word Var_33;
    MR_Word CaseValuePairMap_21;

    *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_31_31;
    succeeded = backend_libs__switch_util__project_all_to_one_solution_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), CaseSolnMap_20, &CaseValuePairMap_21);
    if (succeeded)
      {
        CaseConsts_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CaseConsts_22, 0) = ((MR_Box) (CaseValuePairMap_21));
      }
    else
      {
        CaseConsts_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), CaseConsts_22, 0) = ((MR_Box) (CaseSolnMap_20));
        MR_hl_field(MR_mktag(1), CaseConsts_22, 1) = NULL;
      }
    ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_31_31, &VarTable_23);
    hlds__var_table__lookup_var_entries_3_p_0(VarTable_23, OutVars_16, &OutVarEntries_24);
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_105_115_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (ModuleInfo_17));
    }
    FieldTypes_25 = mercury__list__map_2_f_0((MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), Var_33, OutVarEntries_24);
    {
      LookupSwitchInfo_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LookupSwitchInfo_26, 0) = ((MR_Box) (CaseConsts_22));
      MR_hl_field(MR_mktag(0), LookupSwitchInfo_26, 1) = ((MR_Box) (OutVars_16));
      MR_hl_field(MR_mktag(0), LookupSwitchInfo_26, 2) = ((MR_Box) (FieldTypes_25));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeLookupSwitchInfo_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LookupSwitchInfo_26));
    }
  }
  else
  {
    *MaybeLookupSwitchInfo_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_0_27;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_8_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
      *HeadVar__6_6 = HeadVar__5_5;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TaggedCase_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word TaggedCases_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word CaseId_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_21, (MR_Integer) 2))));
      MR_Word Goal_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedCase_21, (MR_Integer) 3))));
      MR_Word GoalExpr_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_28, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Info_43_43;
      MR_Word STATE_VARIABLE_CaseIdMap_44_44;
      MR_Word Disjuncts_31;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_7;

      succeeded = ((((MR_tag((MR_Word) GoalExpr_29)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_29, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        Disjuncts_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_29, (MR_Integer) 1))));
        if ((Disjuncts_31 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          STATE_VARIABLE_CaseIdMap_44_44 = HeadVar__5_5;
          STATE_VARIABLE_Info_43_43 = STATE_VARIABLE_Info_0_7;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word TypeCtorInfo_50_50;
          MR_Word TypeInfo_51_51;
          MR_Word FirstDisjunct_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Disjuncts_31, (MR_Integer) 0))));
          MR_Word LaterDisjuncts_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Disjuncts_31, (MR_Integer) 1))));
          MR_Word FirstSoln_34;
          MR_Word LaterSolns_35;
          MR_Word SolnConsts_36;
          MR_Word STATE_VARIABLE_Info_42_42;

          succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(HeadVar__3_3, FirstDisjunct_32);
          if (succeeded)
          {
            succeeded = hlds__goal_form__all_disjuncts_are_conj_of_unify_2_p_0(HeadVar__3_3, LaterDisjuncts_33);
            if (succeeded)
            {
              succeeded = ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0(HeadVar__2_2, FirstDisjunct_32, &FirstSoln_34, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_42_42);
              if (succeeded)
              {
                succeeded = ml_backend__ml_code_util__ml_generate_constants_for_arms_5_p_0(HeadVar__2_2, LaterDisjuncts_33, &LaterSolns_35, STATE_VARIABLE_Info_42_42, &STATE_VARIABLE_Info_43_43);
                if (succeeded)
                {
                  TypeCtorInfo_50_50 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0);
                  TypeInfo_51_51 = (MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_1[0]);
                  {
                    SolnConsts_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), SolnConsts_36, 0) = ((MR_Box) (FirstSoln_34));
                    MR_hl_field(MR_mktag(1), SolnConsts_36, 1) = ((MR_Box) (LaterSolns_35));
                  }
                  mercury__map__det_insert_4_p_0(TypeCtorInfo_50_50, TypeInfo_51_51, ((MR_Box) (CaseId_27)), ((MR_Box) (SolnConsts_36)), HeadVar__5_5, &STATE_VARIABLE_CaseIdMap_44_44);
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
      }
      else
      {
        MR_Word TypeCtorInfo_52_52;
        MR_Word TypeInfo_53_53;
        MR_Word Soln_37;
        MR_Word SolnConsts_49;

        succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(HeadVar__3_3, Goal_28);
        if (succeeded)
        {
          succeeded = ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0(HeadVar__2_2, Goal_28, &Soln_37, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_43_43);
          if (succeeded)
          {
            TypeCtorInfo_52_52 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0);
            TypeInfo_53_53 = (MR_Word) (&ml_backend__ml_lookup_switch_scalar_common_1[0]);
            {
              SolnConsts_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SolnConsts_49, 0) = ((MR_Box) (Soln_37));
            }
            mercury__map__det_insert_4_p_0(TypeCtorInfo_52_52, TypeInfo_53_53, ((MR_Box) (CaseId_27)), ((MR_Box) (SolnConsts_49)), HeadVar__5_5, &STATE_VARIABLE_CaseIdMap_44_44);
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = TaggedCases_22;
        next_value_of_HeadVar__5_5 = STATE_VARIABLE_CaseIdMap_44_44;
        next_value_of_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_43_43;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        STATE_VARIABLE_Info_0_7 = next_value_of_STATE_VARIABLE_Info_0_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_lookup_switch_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_lookup_switch____Unify____ml_lookup_switch_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_lookup_switch_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_lookup_switch____Compare____ml_lookup_switch_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_several_soln_lookup_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_lookup_switch____Unify____ml_several_soln_lookup_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_several_soln_lookup_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_lookup_switch____Compare____ml_several_soln_lookup_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ml_backend__ml_lookup_switch__init(void)
{
}

void mercury__ml_backend__ml_lookup_switch__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__type_ctor_info_ml_lookup_switch_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__type_ctor_info_ml_several_soln_lookup_vars_0);
}

void mercury__ml_backend__ml_lookup_switch__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_lookup_switch__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_lookup_switch.
