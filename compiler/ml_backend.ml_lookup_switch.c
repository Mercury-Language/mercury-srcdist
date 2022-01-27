/*
** Automatically generated from `ml_lookup_switch.m'
** by the Mercury compiler,
** version rotd-2016-02-26
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


/* :- module ml_backend.ml_lookup_switch. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_lookup_switch__init
ENDINIT
*/

#include "ml_backend.ml_lookup_switch.mih"


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
#include "backend_libs.switch_util.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__pseudo_2;

static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch____vpti_pred_2__plain_hlds__hlds_data__type_ctor_info_cons_tag_0__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__pseudo_1__pseudo_2;

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

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0;

static const MR_PseudoTypeInfo ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_several_soln_lookup_vars_0_0[6];

static const MR_ConstString ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_names_ml_several_soln_lookup_vars_0_0[6];

static const MR_DuFunctorDesc ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_several_soln_lookup_vars_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_several_soln_lookup_vars_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_several_soln_lookup_vars_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_name_ordered_ml_several_soln_lookup_vars_0[1];

static const MR_Integer ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__functor_number_map_ml_several_soln_lookup_vars_0[1];

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_lookup_switch_info_0_0_10001(
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_lookup_switch_info_0_0_10001(
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_several_soln_lookup_vars_0_0_10001(
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_several_soln_lookup_vars_0_0_10001(
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_3);

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_3(
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_2(
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_1(
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0(
  MR_Integer ml_backend__ml_lookup_switch__CurIndex_2,
  MR_Integer ml_backend__ml_lookup_switch__EndVal_3,
  MR_Integer ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__5_5,
  MR_Word ml_backend__ml_lookup_switch__FirstSolnStructType_6,
  MR_Word ml_backend__ml_lookup_switch__LaterSolnStructType_7,
  MR_Word ml_backend__ml_lookup_switch__FieldTypes_8,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_10,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_12,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0_13,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_14);

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_2(
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0(
  MR_Word ml_backend__ml_lookup_switch__StructType_2,
  MR_Word ml_backend__ml_lookup_switch__FieldTypes_3,
  MR_Integer ml_backend__ml_lookup_switch__CurIndex_4,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__5_5,
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__6_6);

static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
  MR_Integer ml_backend__ml_lookup_switch__Start_2,
  MR_Integer ml_backend__ml_lookup_switch__WordBits_3,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0_4,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_5);

static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_55_93_95_48_9_p_0(
  MR_Word ml_backend__ml_lookup_switch__MLDS_ModuleName_10,
  MR_Word ml_backend__ml_lookup_switch__Context_11,
  MR_Word ml_backend__ml_lookup_switch__IndexRval_12,
  MR_Word ml_backend__ml_lookup_switch__CaseVals_13,
  MR_Integer ml_backend__ml_lookup_switch__Start_14,
  MR_Word * ml_backend__ml_lookup_switch__CheckRval_16,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_30,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_8_p_0(
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__3_3,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__4_4,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__5_5,
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__6_6,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_7,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_8);

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_105_115_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_7_p_0_1(
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id__ho6_5_p_0(
  MR_Word ml_backend__ml_lookup_switch__SolnConsts_7,
  MR_Word ml_backend__ml_lookup_switch__TaggedConsId_8,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14);

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id__ho5_5_p_0(
  MR_Word ml_backend__ml_lookup_switch__SolnConsts_7,
  MR_Word ml_backend__ml_lookup_switch__TaggedConsId_8,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14);

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho4_6_p_0_1(
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho4_6_p_0(
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6);

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho3_6_p_0_1(
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho3_6_p_0(
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__459__1_2_p_0(
  MR_Word ml_backend__ml_lookup_switch__HadDummyRows_46,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_77);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__455__1_2_p_0(
  MR_Word ml_backend__ml_lookup_switch__HadDummyRows_46,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_82);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_atomic_lookup_switch__339__1_2_p_0(
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_22,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_86);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_atomic_lookup_switch__337__1_2_p_0(
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_23,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_81);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_atomic_lookup_switch__281__1_2_p_0(
  MR_Word ml_backend__ml_lookup_switch__CodeModel_16,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_46);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_case_id_soln_consts_to_tag_soln_consts__224__1_2_p_0(
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_16,
  MR_Word ml_backend__ml_lookup_switch__DepletedCaseIdMap_9);

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_2(
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_1(
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0(
  MR_Word ml_backend__ml_lookup_switch__FirstSolnStructType_5,
  MR_Word ml_backend__ml_lookup_switch__FieldTypes_6,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_14,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_15);

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_generate_bit_vec_initializers_4_p_0(
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
  MR_Integer ml_backend__ml_lookup_switch__Count_2,
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__3_3,
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__4_4);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_2(
  MR_Box ml_backend__ml_lookup_switch__closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_1(
  MR_Box ml_backend__ml_lookup_switch__closure_arg);

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0(
  MR_Word ml_backend__ml_lookup_switch__IndexRval_13,
  MR_Word ml_backend__ml_lookup_switch__OutVars_14,
  MR_Word ml_backend__ml_lookup_switch__OutTypes_15,
  MR_Word ml_backend__ml_lookup_switch__CaseSolns_16,
  MR_Word ml_backend__ml_lookup_switch__Context_17,
  MR_Integer ml_backend__ml_lookup_switch__StartVal_18,
  MR_Integer ml_backend__ml_lookup_switch__EndVal_19,
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_20,
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_21,
  MR_Word * ml_backend__ml_lookup_switch__Statement_22,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_60,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_61);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0_2(
  MR_Box ml_backend__ml_lookup_switch__closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0_1(
  MR_Box ml_backend__ml_lookup_switch__closure_arg);

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0(
  MR_Word ml_backend__ml_lookup_switch__IndexRval_14,
  MR_Word ml_backend__ml_lookup_switch__OutVars_15,
  MR_Word ml_backend__ml_lookup_switch__OutTypes_16,
  MR_Word ml_backend__ml_lookup_switch__CaseValues_17,
  MR_Word ml_backend__ml_lookup_switch__CodeModel_18,
  MR_Word ml_backend__ml_lookup_switch__Context_19,
  MR_Integer ml_backend__ml_lookup_switch__StartVal_20,
  MR_Integer ml_backend__ml_lookup_switch__EndVal_21,
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_22,
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_23,
  MR_Word * ml_backend__ml_lookup_switch__Statement_24,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53);

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id_5_p_0(
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_T_16,
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_17,
  MR_Word ml_backend__ml_lookup_switch__GetTag_6,
  MR_Box ml_backend__ml_lookup_switch__SolnConsts_7,
  MR_Word ml_backend__ml_lookup_switch__TaggedConsId_8,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14);

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop_6_p_0_1(
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop_6_p_0(
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_Key_34,
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_35,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6);

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0_1(
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_3(
  MR_Box ml_backend__ml_lookup_switch__closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_2(
  MR_Box ml_backend__ml_lookup_switch__closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_1(
  MR_Box ml_backend__ml_lookup_switch__closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_4_p_0_1(
  MR_Box ml_backend__ml_lookup_switch__closure_arg);


static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_1[15][2];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_2[1][4];

static /* final */ const MR_Integer ml_backend__ml_lookup_switch_scalar_common_3[2][3];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_4[7][5];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_5[4][1];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_6[9][3];

static /* final */ const MR_Float ml_backend__ml_lookup_switch_scalar_common_7[1];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_8[1][10];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_9[2][7];

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_10[2][6];




static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_1[15][2] = {
  /* row 0 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_lookup_switch_scalar_common_5[0])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_lookup_switch_scalar_common_5[1])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    (MR_Box) &ml_backend__ml_lookup_switch_scalar_common_7[0]
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
};

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
};

static /* final */ const MR_Integer ml_backend__ml_lookup_switch_scalar_common_3[2][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 33
  },
  /* row 1 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_4[7][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__pseudo_2))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
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
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_need_range_check_0)),
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_need_range_check_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_need_bit_vec_check_0)),
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_need_bit_vec_check_0))
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
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_5[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_5[2]))
  },
};

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_6[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[6])),
    ((MR_Box) (ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_1[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_1[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[6])),
    ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Float ml_backend__ml_lookup_switch_scalar_common_7[1] = {
  /* row 0 */
  (MR_Float) 0.0000000000000000,
};

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_8[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_3[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch____vpti_pred_2__plain_hlds__hlds_data__type_ctor_info_cons_tag_0__pseudo_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__tree234__pti_tree234_2__pseudo_1__pseudo_2)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__tree234__pti_tree234_2__pseudo_1__pseudo_2))
  },
};

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_9[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__backend_libs__switch_util__pti_soln_consts_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_lookup_switch_scalar_common_10[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__ml_lookup_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch____vpti_pred_2__plain_hlds__hlds_data__type_ctor_info_cons_tag_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__pseudo_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_lookup_switch__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_lookup_switch__backend_libs__switch_util__pti_soln_consts_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_lookup_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ml_backend__ml_lookup_switch__backend_libs__switch_util__ti_soln_consts_1ml_backend__mlds__type_ctor_info_mlds_rval_0
  }
};

static const MR_FA_TypeInfo_Struct3 ml_backend__ml_lookup_switch__backend_libs__switch_util__ti_case_consts_3hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__mlds__type_ctor_info_mlds_rval_0unit__type_ctor_info_unit_0 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_3,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0,
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__ml_lookup_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_lookup_switch_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_lookup_switch__backend_libs__switch_util__ti_case_consts_3hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__mlds__type_ctor_info_mlds_rval_0unit__type_ctor_info_unit_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_lookup_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0
};

static const MR_ConstString ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_names_ml_lookup_switch_info_0_0[3] = {
  (MR_String) "mllsi_cases",
  (MR_String) "mllsi_out_variables",
  (MR_String) "mllsi_out_types"
};

static const MR_DuFunctorDesc ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_lookup_switch_info_0_0 = {
  (MR_String) "ml_lookup_switch_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_lookup_switch_info_0_0,
  ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_names_ml_lookup_switch_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_lookup_switch_info_0_0[1] = {
  &ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_lookup_switch_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_lookup_switch_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_lookup_switch_info_0_0
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_lookup_switch____Unify____ml_lookup_switch_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_lookup_switch____Compare____ml_lookup_switch_info_0_0_10001)),
  (MR_String) "ml_backend.ml_lookup_switch",
  (MR_String) "ml_lookup_switch_info",
  {     ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_name_ordered_ml_lookup_switch_info_0 },
  {     ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_lookup_switch_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__functor_number_map_ml_lookup_switch_info_0
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_several_soln_lookup_vars_0_0[6] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_lookup_switch__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0
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
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_types_ml_several_soln_lookup_vars_0_0,
  ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__field_names_ml_several_soln_lookup_vars_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_several_soln_lookup_vars_0_0[1] = {
  &ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_functor_desc_ml_several_soln_lookup_vars_0_0
};

static const MR_DuPtagLayout ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_several_soln_lookup_vars_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_stag_ordered_ml_several_soln_lookup_vars_0_0
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_lookup_switch____Unify____ml_several_soln_lookup_vars_0_0_10001)),
  ((MR_Box) (ml_backend__ml_lookup_switch____Compare____ml_several_soln_lookup_vars_0_0_10001)),
  (MR_String) "ml_backend.ml_lookup_switch",
  (MR_String) "ml_several_soln_lookup_vars",
  {     ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_name_ordered_ml_several_soln_lookup_vars_0 },
  {     ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__du_ptag_ordered_ml_several_soln_lookup_vars_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_lookup_switch__ml_backend__ml_lookup_switch__functor_number_map_ml_several_soln_lookup_vars_0
};

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_lookup_switch_info_0_0_10001(
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;

    {
      ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch____Unify____ml_lookup_switch_info_0_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2));
    }
    return ml_backend__ml_lookup_switch__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_lookup_switch_info_0_0_10001(
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_lookup_switch__conv0_HeadVar__1_1;

    {
      ml_backend__ml_lookup_switch____Compare____ml_lookup_switch_info_0_0(&ml_backend__ml_lookup_switch__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_3));
    }
    *ml_backend__ml_lookup_switch__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_several_soln_lookup_vars_0_0_10001(
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;

    {
      ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch____Unify____ml_several_soln_lookup_vars_0_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2));
    }
    return ml_backend__ml_lookup_switch__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_several_soln_lookup_vars_0_0_10001(
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_lookup_switch__conv0_HeadVar__1_1;

    {
      ml_backend__ml_lookup_switch____Compare____ml_several_soln_lookup_vars_0_0(&ml_backend__ml_lookup_switch__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_3));
    }
    *ml_backend__ml_lookup_switch__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_HeadVar__1_1));
  }
}

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_3(
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
    MR_Word ml_backend__ml_lookup_switch__conv2_RowInitializer_6;

    {
      ml_backend__ml_lookup_switch__conv2_RowInitializer_6 = ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv2_RowInitializer_6));
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_2(
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
    MR_Word ml_backend__ml_lookup_switch__conv1_HeadVar__2_2;

    {
      ml_backend__ml_lookup_switch__conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv1_HeadVar__2_2));
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_1(
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
    MR_Word ml_backend__ml_lookup_switch__conv0_HeadVar__2_2;

    {
      ml_backend__ml_lookup_switch__conv0_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_HeadVar__2_2));
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0(
  MR_Integer ml_backend__ml_lookup_switch__CurIndex_2,
  MR_Integer ml_backend__ml_lookup_switch__EndVal_3,
  MR_Integer ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__5_5,
  MR_Word ml_backend__ml_lookup_switch__FirstSolnStructType_6,
  MR_Word ml_backend__ml_lookup_switch__LaterSolnStructType_7,
  MR_Word ml_backend__ml_lookup_switch__FieldTypes_8,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_10,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_12,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0_13,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_lookup_switch__succeeded;

        if ((ml_backend__ml_lookup_switch__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CurIndex_2 > ml_backend__ml_lookup_switch__EndVal_3);
            if (ml_backend__ml_lookup_switch__succeeded)
              {
                *ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_14 = ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0_13;
                *ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_12 = ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11;
                *ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_10 = ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9;
              }
            else
              {
                MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_32_32;
                MR_Integer ml_backend__ml_lookup_switch__V_34_34;

                {
                  ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0(ml_backend__ml_lookup_switch__FirstSolnStructType_6, ml_backend__ml_lookup_switch__FieldTypes_8, ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9, &ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_32_32);
                }
                ml_backend__ml_lookup_switch__V_34_34 = (ml_backend__ml_lookup_switch__CurIndex_2 + (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Integer ml_backend__ml_lookup_switch__CurIndex__tmp_copy_2 = ml_backend__ml_lookup_switch__V_34_34;
                  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0__tmp_copy_9 = ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_32_32;

                  ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0_13 = (MR_Integer) 1;
                  ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9 = ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0__tmp_copy_9;
                  ml_backend__ml_lookup_switch__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  ml_backend__ml_lookup_switch__CurIndex_2 = ml_backend__ml_lookup_switch__CurIndex__tmp_copy_2;
                }
                continue;
              }
          }
        else
          {
            MR_Word ml_backend__ml_lookup_switch__Pair_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__5_5, (MR_Integer) 0)));
            MR_Word ml_backend__ml_lookup_switch__Pairs_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__5_5, (MR_Integer) 1)));
            MR_Integer ml_backend__ml_lookup_switch__Index_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Pair_44, (MR_Integer) 0)));
            MR_Word ml_backend__ml_lookup_switch__Soln_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Pair_44, (MR_Integer) 1)));
            MR_Word ml_backend__ml_lookup_switch__NextPairs_54;
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72;
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_73_73;
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_78_78;
            MR_Integer ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_80_80;
            MR_Integer ml_backend__ml_lookup_switch__V_86_86;

            ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CurIndex_2 < ml_backend__ml_lookup_switch__Index_52);
            if (ml_backend__ml_lookup_switch__succeeded)
              {
                {
                  ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0(ml_backend__ml_lookup_switch__FirstSolnStructType_6, ml_backend__ml_lookup_switch__FieldTypes_8, ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9, &ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72);
                }
                ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_73_73 = (MR_Integer) 1;
                ml_backend__ml_lookup_switch__NextPairs_54 = ml_backend__ml_lookup_switch__HeadVar__5_5;
                ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_78_78 = ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11;
                ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_80_80 = ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4;
              }
            else
              {
                if (((MR_tag((MR_Word) ml_backend__ml_lookup_switch__Soln_53)) == (MR_mktag((MR_Integer) 0))))
                  {
                    MR_Word ml_backend__ml_lookup_switch__FieldRvals_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Soln_53, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_lookup_switch__FieldInitializers_56;
                    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_57;
                    MR_Word ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_58;
                    MR_Word ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_59;
                    MR_Word ml_backend__ml_lookup_switch__FirstSolnRowInitializer_60;
                    MR_Word ml_backend__ml_lookup_switch__V_84_84;

                    {
                      ml_backend__ml_lookup_switch__FieldInitializers_56 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[7], ml_backend__ml_lookup_switch__FieldRvals_55);
                    }
                    {
                      ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_57 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
                    }
                    {
                      ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_58 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) -1);
                    }
                    {
                      ml_backend__ml_lookup_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_84_84, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_58));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_84_84, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FieldInitializers_56));
                    }
                    {
                      ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_59, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_57));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_59, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_84_84));
                    }
                    {
                      ml_backend__ml_lookup_switch__FirstSolnRowInitializer_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__FirstSolnRowInitializer_60, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnStructType_6));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__FirstSolnRowInitializer_60, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_59));
                    }
                    {
                      ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnRowInitializer_60));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9));
                    }
                    ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_80_80 = ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4;
                    ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_78_78 = ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11;
                  }
                else
                  {
                    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_101_101 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
                    MR_Word ml_backend__ml_lookup_switch__TypeInfo_104_104;
                    MR_Word ml_backend__ml_lookup_switch__FirstSolnRvals_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Soln_53, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_lookup_switch__LaterSolns_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Soln_53, (MR_Integer) 1)));
                    MR_Integer ml_backend__ml_lookup_switch__NumLaterSolns_63;
                    MR_Word ml_backend__ml_lookup_switch__LaterSolnRowInitializers_64;
                    MR_Word ml_backend__ml_lookup_switch__V_75_75;
                    MR_Word ml_backend__ml_lookup_switch__V_77_77;
                    MR_Word ml_backend__ml_lookup_switch__V_79_79;
                    MR_Word ml_backend__ml_lookup_switch__FieldInitializers_91;
                    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_92;
                    MR_Word ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_93;
                    MR_Word ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_94;
                    MR_Word ml_backend__ml_lookup_switch__FirstSolnRowInitializer_95;

                    {
                      ml_backend__ml_lookup_switch__FieldInitializers_91 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ml_backend__ml_lookup_switch__TypeCtorInfo_101_101, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[8], ml_backend__ml_lookup_switch__FirstSolnRvals_61);
                    }
                    ml_backend__ml_lookup_switch__TypeInfo_104_104 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[1];
                    {
                      mercury__list__length_2_p_0(ml_backend__ml_lookup_switch__TypeInfo_104_104, ml_backend__ml_lookup_switch__LaterSolns_62, &ml_backend__ml_lookup_switch__NumLaterSolns_63);
                    }
                    {
                      ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_92 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__ml_lookup_switch__NumLaterSolns_63);
                    }
                    {
                      ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_93 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4);
                    }
                    {
                      ml_backend__ml_lookup_switch__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_75_75, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_93));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_75_75, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FieldInitializers_91));
                    }
                    {
                      ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_94, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_92));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_94, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_75_75));
                    }
                    {
                      ml_backend__ml_lookup_switch__FirstSolnRowInitializer_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__FirstSolnRowInitializer_95, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnStructType_6));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__FirstSolnRowInitializer_95, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_94));
                    }
                    {
                      ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnRowInitializer_95));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9));
                    }
                    {
                      ml_backend__ml_lookup_switch__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_10[1]));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0_3));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSolnStructType_7));
                    }
                    {
                      ml_backend__ml_lookup_switch__LaterSolnRowInitializers_64 = mercury__list__map_2_f_0(ml_backend__ml_lookup_switch__TypeInfo_104_104, ml_backend__ml_lookup_switch__TypeCtorInfo_101_101, ml_backend__ml_lookup_switch__V_77_77, ml_backend__ml_lookup_switch__LaterSolns_62);
                    }
                    {
                      ml_backend__ml_lookup_switch__V_79_79 = mercury__cord__from_list_1_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_101_101, ml_backend__ml_lookup_switch__LaterSolnRowInitializers_64);
                    }
                    {
                      ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_78_78 = mercury__cord__f_43_43_2_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_101_101, ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11, ml_backend__ml_lookup_switch__V_79_79);
                    }
                    ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_80_80 = (ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4 + ml_backend__ml_lookup_switch__NumLaterSolns_63);
                  }
                ml_backend__ml_lookup_switch__NextPairs_54 = ml_backend__ml_lookup_switch__Pairs_45;
                ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_73_73 = ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0_13;
              }
            ml_backend__ml_lookup_switch__V_86_86 = (ml_backend__ml_lookup_switch__CurIndex_2 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer ml_backend__ml_lookup_switch__CurIndex__tmp_copy_2 = ml_backend__ml_lookup_switch__V_86_86;
              MR_Integer ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0__tmp_copy_4 = ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_80_80;
              MR_Word ml_backend__ml_lookup_switch__HeadVar__5__tmp_copy_5 = ml_backend__ml_lookup_switch__NextPairs_54;
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0__tmp_copy_9 = ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_72_72;
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0__tmp_copy_11 = ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_78_78;
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0__tmp_copy_13 = ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_73_73;

              ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0_13 = ml_backend__ml_lookup_switch__STATE_VARIABLE_HadDummyRows_0__tmp_copy_13;
              ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0_11 = ml_backend__ml_lookup_switch__STATE_VARIABLE_LaterSolnRowInitializersCord_0__tmp_copy_11;
              ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_9 = ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0__tmp_copy_9;
              ml_backend__ml_lookup_switch__HeadVar__5_5 = ml_backend__ml_lookup_switch__HeadVar__5__tmp_copy_5;
              ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0_4 = ml_backend__ml_lookup_switch__STATE_VARIABLE_NextLaterSolnRow_0__tmp_copy_4;
              ml_backend__ml_lookup_switch__CurIndex_2 = ml_backend__ml_lookup_switch__CurIndex__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_2(
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
    MR_Word ml_backend__ml_lookup_switch__conv1_HeadVar__2_2;

    {
      ml_backend__ml_lookup_switch__conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv1_HeadVar__2_2));
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
    MR_Word ml_backend__ml_lookup_switch__conv0_DefaultRval_4;

    {
      ml_backend__ml_lookup_switch__conv0_DefaultRval_4 = ml_backend__ml_lookup_switch__ml_default_value_for_type_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_DefaultRval_4));
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0(
  MR_Word ml_backend__ml_lookup_switch__StructType_2,
  MR_Word ml_backend__ml_lookup_switch__FieldTypes_3,
  MR_Integer ml_backend__ml_lookup_switch__CurIndex_4,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__5_5,
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__6_6)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;

    if ((ml_backend__ml_lookup_switch__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ml_backend__ml_lookup_switch__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ml_backend__ml_lookup_switch__Pair_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__5_5, (MR_Integer) 0)));
        MR_Word ml_backend__ml_lookup_switch__Pairs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__5_5, (MR_Integer) 1)));
        MR_Word ml_backend__ml_lookup_switch__RowInitializer_17;
        MR_Word ml_backend__ml_lookup_switch__RowInitializers_18;
        MR_Integer ml_backend__ml_lookup_switch__Index_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Pair_15, (MR_Integer) 0)));
        MR_Word ml_backend__ml_lookup_switch__Rvals_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Pair_15, (MR_Integer) 1)));
        MR_Word ml_backend__ml_lookup_switch__FieldRvals_21;
        MR_Word ml_backend__ml_lookup_switch__RemainingPairs_22;
        MR_Word ml_backend__ml_lookup_switch__FieldInitializers_23;
        MR_Integer ml_backend__ml_lookup_switch__V_26_26;

        ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CurIndex_4 < ml_backend__ml_lookup_switch__Index_19);
        if (ml_backend__ml_lookup_switch__succeeded)
          {
            {
              ml_backend__ml_lookup_switch__FieldRvals_21 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[5], ml_backend__ml_lookup_switch__FieldTypes_3);
            }
            ml_backend__ml_lookup_switch__RemainingPairs_22 = ml_backend__ml_lookup_switch__HeadVar__5_5;
          }
        else
          {
            ml_backend__ml_lookup_switch__FieldRvals_21 = ml_backend__ml_lookup_switch__Rvals_20;
            ml_backend__ml_lookup_switch__RemainingPairs_22 = ml_backend__ml_lookup_switch__Pairs_16;
          }
        {
          ml_backend__ml_lookup_switch__FieldInitializers_23 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[6], ml_backend__ml_lookup_switch__FieldRvals_21);
        }
        {
          ml_backend__ml_lookup_switch__RowInitializer_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RowInitializer_17, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__StructType_2));
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RowInitializer_17, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FieldInitializers_23));
        }
        ml_backend__ml_lookup_switch__V_26_26 = (ml_backend__ml_lookup_switch__CurIndex_4 + (MR_Integer) 1);
        {
          ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0(ml_backend__ml_lookup_switch__StructType_2, ml_backend__ml_lookup_switch__FieldTypes_3, ml_backend__ml_lookup_switch__V_26_26, ml_backend__ml_lookup_switch__RemainingPairs_22, &ml_backend__ml_lookup_switch__RowInitializers_18);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_lookup_switch__HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__RowInitializer_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__RowInitializers_18));
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
  MR_Integer ml_backend__ml_lookup_switch__Start_2,
  MR_Integer ml_backend__ml_lookup_switch__WordBits_3,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0_4,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_lookup_switch__succeeded;

        if ((ml_backend__ml_lookup_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_5 = ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0_4;
        else
          {
            MR_Integer ml_backend__ml_lookup_switch__Tag_11;
            MR_Word ml_backend__ml_lookup_switch__Rest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer ml_backend__ml_lookup_switch__Val_17;
            MR_Integer ml_backend__ml_lookup_switch__WordNum_18;
            MR_Integer ml_backend__ml_lookup_switch__Offset_19;
            MR_Integer ml_backend__ml_lookup_switch__X1_21;
            MR_Word ml_backend__ml_lookup_switch__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_28_28;
            MR_Box ml_backend__ml_lookup_switch__V_12_12;
            MR_Integer ml_backend__ml_lookup_switch__X0_20;
            MR_Box ml_backend__ml_lookup_switch__conv0_X0_20;

            ml_backend__ml_lookup_switch__Tag_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_24_24, (MR_Integer) 0)));
            ml_backend__ml_lookup_switch__V_12_12 = (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_24_24, (MR_Integer) 1));
            ml_backend__ml_lookup_switch__Val_17 = (ml_backend__ml_lookup_switch__Tag_11 - ml_backend__ml_lookup_switch__Start_2);
            {
              ml_backend__ml_lookup_switch__WordNum_18 = mercury__int__f_47_47_2_f_0(ml_backend__ml_lookup_switch__Val_17, ml_backend__ml_lookup_switch__WordBits_3);
            }
            {
              ml_backend__ml_lookup_switch__Offset_19 = mercury__int__mod_2_f_0(ml_backend__ml_lookup_switch__Val_17, ml_backend__ml_lookup_switch__WordBits_3);
            }
            {
              ml_backend__ml_lookup_switch__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0_4, ml_backend__ml_lookup_switch__WordNum_18, &ml_backend__ml_lookup_switch__conv0_X0_20);
            }
            if (ml_backend__ml_lookup_switch__succeeded)
              {
                ml_backend__ml_lookup_switch__X0_20 = ((MR_Integer) ml_backend__ml_lookup_switch__conv0_X0_20);
                ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
              }
            if (ml_backend__ml_lookup_switch__succeeded)
              {
                MR_Integer ml_backend__ml_lookup_switch__V_25_25;

                {
                  ml_backend__ml_lookup_switch__V_25_25 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, ml_backend__ml_lookup_switch__Offset_19);
                }
                ml_backend__ml_lookup_switch__X1_21 = (ml_backend__ml_lookup_switch__X0_20 | ml_backend__ml_lookup_switch__V_25_25);
              }
            else
              {
                {
                  ml_backend__ml_lookup_switch__X1_21 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, ml_backend__ml_lookup_switch__Offset_19);
                }
              }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_lookup_switch__WordNum_18, ((MR_Box) (ml_backend__ml_lookup_switch__X1_21)), ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0_4, &ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_28_28);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_lookup_switch__HeadVar__1__tmp_copy_1 = ml_backend__ml_lookup_switch__Rest_13;
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0__tmp_copy_4 = ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_28_28;

              ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0_4 = ml_backend__ml_lookup_switch__STATE_VARIABLE_BitMap_0__tmp_copy_4;
              ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_55_93_95_48_9_p_0(
  MR_Word ml_backend__ml_lookup_switch__MLDS_ModuleName_10,
  MR_Word ml_backend__ml_lookup_switch__Context_11,
  MR_Word ml_backend__ml_lookup_switch__IndexRval_12,
  MR_Word ml_backend__ml_lookup_switch__CaseVals_13,
  MR_Integer ml_backend__ml_lookup_switch__Start_14,
  MR_Word * ml_backend__ml_lookup_switch__CheckRval_16,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_30,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_31_71;
    MR_Word ml_backend__ml_lookup_switch__Globals_18;
    MR_Integer ml_backend__ml_lookup_switch__WordBits_19;
    MR_Integer ml_backend__ml_lookup_switch__Log2WordBits_20;
    MR_Word ml_backend__ml_lookup_switch__GlobalData0_21;
    MR_Word ml_backend__ml_lookup_switch__BitVecArgRvals_22;
    MR_Word ml_backend__ml_lookup_switch__BitVecRval_23;
    MR_Word ml_backend__ml_lookup_switch__GlobalData_24;
    MR_Word ml_backend__ml_lookup_switch__WordRval_26;
    MR_Word ml_backend__ml_lookup_switch__BitNumRval_27;
    MR_Word ml_backend__ml_lookup_switch__V_45_45;
    MR_Word ml_backend__ml_lookup_switch__BitMap0_61;
    MR_Word ml_backend__ml_lookup_switch__BitMap_62;
    MR_Word ml_backend__ml_lookup_switch__WordVals_63;
    MR_Word ml_backend__ml_lookup_switch__WordInitializers_64;
    MR_Word ml_backend__ml_lookup_switch__Initializer_65;
    MR_Word ml_backend__ml_lookup_switch__SingleWordRval_25;
    MR_Word ml_backend__ml_lookup_switch__V_32_32;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_30, &ml_backend__ml_lookup_switch__Globals_18);
    }
    {
      backend_libs__switch_util__get_word_bits_3_p_0(ml_backend__ml_lookup_switch__Globals_18, &ml_backend__ml_lookup_switch__WordBits_19, &ml_backend__ml_lookup_switch__Log2WordBits_20);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_30, &ml_backend__ml_lookup_switch__GlobalData0_21);
    }
    ml_backend__ml_lookup_switch__TypeCtorInfo_31_71 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mercury__map__init_1_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_31_71, ml_backend__ml_lookup_switch__TypeCtorInfo_31_71, &ml_backend__ml_lookup_switch__BitMap0_61);
    }
    {
      ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_95_118_101_99_95_50_95_95_91_49_93_95_48_5_p_0(ml_backend__ml_lookup_switch__CaseVals_13, ml_backend__ml_lookup_switch__Start_14, ml_backend__ml_lookup_switch__WordBits_19, ml_backend__ml_lookup_switch__BitMap0_61, &ml_backend__ml_lookup_switch__BitMap_62);
    }
    {
      mercury__map__to_assoc_list_2_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_31_71, ml_backend__ml_lookup_switch__TypeCtorInfo_31_71, ml_backend__ml_lookup_switch__BitMap_62, &ml_backend__ml_lookup_switch__WordVals_63);
    }
    {
      ml_backend__ml_lookup_switch__ml_generate_bit_vec_initializers_4_p_0(ml_backend__ml_lookup_switch__WordVals_63, (MR_Integer) 0, &ml_backend__ml_lookup_switch__BitVecArgRvals_22, &ml_backend__ml_lookup_switch__WordInitializers_64);
    }
    {
      ml_backend__ml_lookup_switch__Initializer_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__Initializer_65, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__WordInitializers_64));
    }
    {
      ml_backend__ml_global_data__ml_gen_static_scalar_const_value_8_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_10, (MR_String) "bit_vector", (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[14]), ml_backend__ml_lookup_switch__Initializer_65, ml_backend__ml_lookup_switch__Context_11, &ml_backend__ml_lookup_switch__BitVecRval_23, ml_backend__ml_lookup_switch__GlobalData0_21, &ml_backend__ml_lookup_switch__GlobalData_24);
    }
    ml_backend__ml_lookup_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_lookup_switch__BitVecArgRvals_22)) == (MR_mktag((MR_Integer) 1)));
    if (ml_backend__ml_lookup_switch__succeeded)
      {
        ml_backend__ml_lookup_switch__SingleWordRval_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__BitVecArgRvals_22, (MR_Integer) 0)));
        ml_backend__ml_lookup_switch__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__BitVecArgRvals_22, (MR_Integer) 1)));
        ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (ml_backend__ml_lookup_switch__succeeded)
      {
        ml_backend__ml_lookup_switch__WordRval_26 = ml_backend__ml_lookup_switch__SingleWordRval_25;
        ml_backend__ml_lookup_switch__BitNumRval_27 = ml_backend__ml_lookup_switch__IndexRval_12;
        *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_30;
      }
    else
      {
        MR_Word ml_backend__ml_lookup_switch__WordNumRval_28;
        MR_Word ml_backend__ml_lookup_switch__V_35_35;
        MR_Word ml_backend__ml_lookup_switch__V_36_36;
        MR_Word ml_backend__ml_lookup_switch__V_40_40;
        MR_Word ml_backend__ml_lookup_switch__V_41_41;
        MR_Integer ml_backend__ml_lookup_switch__V_42_42;

        {
          ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_lookup_switch__GlobalData_24, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_30, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31);
        }
        {
          ml_backend__ml_lookup_switch__V_36_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_36_36, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Log2WordBits_20));
        }
        {
          ml_backend__ml_lookup_switch__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_35_35, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_36_36));
        }
        {
          ml_backend__ml_lookup_switch__WordNumRval_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordNumRval_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordNumRval_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordNumRval_28, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__IndexRval_12));
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordNumRval_28, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__V_35_35));
        }
        {
          ml_backend__ml_lookup_switch__WordRval_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordRval_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordRval_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_lookup_switch_scalar_common_5[3])));
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordRval_26, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__BitVecRval_23));
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__WordRval_26, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__WordNumRval_28));
        }
        ml_backend__ml_lookup_switch__V_42_42 = (ml_backend__ml_lookup_switch__WordBits_19 - (MR_Integer) 1);
        {
          ml_backend__ml_lookup_switch__V_41_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_41_41, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__V_42_42));
        }
        {
          ml_backend__ml_lookup_switch__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_40_40, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_41_41));
        }
        {
          ml_backend__ml_lookup_switch__BitNumRval_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__BitNumRval_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__BitNumRval_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__BitNumRval_27, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__IndexRval_12));
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__BitNumRval_27, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__V_40_40));
        }
      }
    {
      ml_backend__ml_lookup_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_45_45, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[7])));
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_45_45, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__BitNumRval_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_lookup_switch__CheckRval_16 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__WordRval_26));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__V_45_45));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_8_p_0(
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__3_3,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__4_4,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__5_5,
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__6_6,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_7,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_lookup_switch__succeeded;

        if ((ml_backend__ml_lookup_switch__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_8 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_7;
            *ml_backend__ml_lookup_switch__HeadVar__6_6 = ml_backend__ml_lookup_switch__HeadVar__5_5;
            ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word ml_backend__ml_lookup_switch__TaggedCase_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word ml_backend__ml_lookup_switch__TaggedCases_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word ml_backend__ml_lookup_switch__CaseId_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_21, (MR_Integer) 2)));
            MR_Word ml_backend__ml_lookup_switch__Goal_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_21, (MR_Integer) 3)));
            MR_Word ml_backend__ml_lookup_switch__GoalExpr_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Goal_28, (MR_Integer) 0)));
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_43_43;
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_44_44;
            MR_Word ml_backend__ml_lookup_switch___TaggedMainConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_21, (MR_Integer) 0)));
            MR_Word ml_backend__ml_lookup_switch___TaggedOtherConsIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_21, (MR_Integer) 1)));
            MR_Word ml_backend__ml_lookup_switch___GoalInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Goal_28, (MR_Integer) 1)));
            MR_Word ml_backend__ml_lookup_switch__Disjuncts_31;

            ml_backend__ml_lookup_switch__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_lookup_switch__GoalExpr_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__GoalExpr_29, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (ml_backend__ml_lookup_switch__succeeded)
              {
                ml_backend__ml_lookup_switch__Disjuncts_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__GoalExpr_29, (MR_Integer) 1)));
                if ((ml_backend__ml_lookup_switch__Disjuncts_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_44_44 = ml_backend__ml_lookup_switch__HeadVar__5_5;
                    ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_43_43 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_7;
                    ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
                  }
                else
                  {
                    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_50_50;
                    MR_Word ml_backend__ml_lookup_switch__TypeInfo_51_51;
                    MR_Word ml_backend__ml_lookup_switch__FirstDisjunct_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Disjuncts_31, (MR_Integer) 0)));
                    MR_Word ml_backend__ml_lookup_switch__LaterDisjuncts_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Disjuncts_31, (MR_Integer) 1)));
                    MR_Word ml_backend__ml_lookup_switch__FirstSoln_34;
                    MR_Word ml_backend__ml_lookup_switch__LaterSolns_35;
                    MR_Word ml_backend__ml_lookup_switch__SolnConsts_36;
                    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_42_42;

                    {
                      ml_backend__ml_lookup_switch__succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(ml_backend__ml_lookup_switch__HeadVar__3_3, ml_backend__ml_lookup_switch__FirstDisjunct_32);
                    }
                    if (ml_backend__ml_lookup_switch__succeeded)
                      {
                        {
                          ml_backend__ml_lookup_switch__succeeded = hlds__goal_form__all_disjuncts_are_conj_of_unify_2_p_0(ml_backend__ml_lookup_switch__HeadVar__3_3, ml_backend__ml_lookup_switch__LaterDisjuncts_33);
                        }
                        if (ml_backend__ml_lookup_switch__succeeded)
                          {
                            {
                              ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0(ml_backend__ml_lookup_switch__HeadVar__2_2, ml_backend__ml_lookup_switch__FirstDisjunct_32, &ml_backend__ml_lookup_switch__FirstSoln_34, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_7, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_42_42);
                            }
                            {
                              ml_backend__ml_code_util__ml_generate_constants_for_arms_5_p_0(ml_backend__ml_lookup_switch__HeadVar__2_2, ml_backend__ml_lookup_switch__LaterDisjuncts_33, &ml_backend__ml_lookup_switch__LaterSolns_35, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_42_42, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_43_43);
                            }
                            ml_backend__ml_lookup_switch__TypeCtorInfo_50_50 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0;
                            ml_backend__ml_lookup_switch__TypeInfo_51_51 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0];
                            {
                              ml_backend__ml_lookup_switch__SolnConsts_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__SolnConsts_36, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSoln_34));
                              MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__SolnConsts_36, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSolns_35));
                            }
                            {
                              mercury__map__det_insert_4_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_50_50, ml_backend__ml_lookup_switch__TypeInfo_51_51, ((MR_Box) (ml_backend__ml_lookup_switch__CaseId_27)), ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_36)), ml_backend__ml_lookup_switch__HeadVar__5_5, &ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_44_44);
                            }
                            ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
                          }
                      }
                  }
              }
            else
              {
                MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_52_52;
                MR_Word ml_backend__ml_lookup_switch__TypeInfo_53_53;
                MR_Word ml_backend__ml_lookup_switch__Soln_37;
                MR_Word ml_backend__ml_lookup_switch__SolnConsts_49;

                {
                  ml_backend__ml_lookup_switch__succeeded = hlds__goal_form__goal_is_conj_of_unify_2_p_0(ml_backend__ml_lookup_switch__HeadVar__3_3, ml_backend__ml_lookup_switch__Goal_28);
                }
                if (ml_backend__ml_lookup_switch__succeeded)
                  {
                    {
                      ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0(ml_backend__ml_lookup_switch__HeadVar__2_2, ml_backend__ml_lookup_switch__Goal_28, &ml_backend__ml_lookup_switch__Soln_37, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_7, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_43_43);
                    }
                    ml_backend__ml_lookup_switch__TypeCtorInfo_52_52 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0;
                    ml_backend__ml_lookup_switch__TypeInfo_53_53 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0];
                    {
                      ml_backend__ml_lookup_switch__SolnConsts_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SolnConsts_49, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Soln_37));
                    }
                    {
                      mercury__map__det_insert_4_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_52_52, ml_backend__ml_lookup_switch__TypeInfo_53_53, ((MR_Box) (ml_backend__ml_lookup_switch__CaseId_27)), ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_49)), ml_backend__ml_lookup_switch__HeadVar__5_5, &ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_44_44);
                    }
                    ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
                  }
              }
            if (ml_backend__ml_lookup_switch__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ml_backend__ml_lookup_switch__HeadVar__4__tmp_copy_4 = ml_backend__ml_lookup_switch__TaggedCases_22;
                  MR_Word ml_backend__ml_lookup_switch__HeadVar__5__tmp_copy_5 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_44_44;
                  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0__tmp_copy_7 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_43_43;

                  ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_7 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0__tmp_copy_7;
                  ml_backend__ml_lookup_switch__HeadVar__5_5 = ml_backend__ml_lookup_switch__HeadVar__5__tmp_copy_5;
                  ml_backend__ml_lookup_switch__HeadVar__4_4 = ml_backend__ml_lookup_switch__HeadVar__4__tmp_copy_4;
                }
                continue;
              }
          }
        return ml_backend__ml_lookup_switch__succeeded;
      }
      break;
    }
}

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_105_115_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_7_p_0_1(
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
    MR_Word ml_backend__ml_lookup_switch__conv0_HeadVar__3_3;

    {
      ml_backend__ml_lookup_switch__conv0_HeadVar__3_3 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_HeadVar__3_3));
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
  }
}

void MR_CALL 
ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_105_115_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_7_p_0(
  MR_Word ml_backend__ml_lookup_switch__SwitchVar_8,
  MR_Word ml_backend__ml_lookup_switch__TaggedCases_9,
  MR_Word ml_backend__ml_lookup_switch__GoalInfo_10,
  MR_Word * ml_backend__ml_lookup_switch__MaybeLookupSwitchInfo_12,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_27,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_28)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_35_35;
    MR_Word ml_backend__ml_lookup_switch__NonLocals_14;
    MR_Word ml_backend__ml_lookup_switch__OtherNonLocals_15;
    MR_Word ml_backend__ml_lookup_switch__OutVars_16;
    MR_Word ml_backend__ml_lookup_switch__ModuleInfo_17;
    MR_Word ml_backend__ml_lookup_switch__Globals_18;
    MR_Word ml_backend__ml_lookup_switch__StaticGroundCells_19;
    MR_Word ml_backend__ml_lookup_switch__CaseSolnMap_20;
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31_31;
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_36_36;
    MR_Word ml_backend__ml_lookup_switch__TypeInfo_37_37;
    MR_Word ml_backend__ml_lookup_switch__V_30_30;

    {
      ml_backend__ml_lookup_switch__NonLocals_14 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ml_backend__ml_lookup_switch__GoalInfo_10);
    }
    ml_backend__ml_lookup_switch__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      parse_tree__set_of_var__delete_3_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_35_35, ml_backend__ml_lookup_switch__SwitchVar_8, ml_backend__ml_lookup_switch__NonLocals_14, &ml_backend__ml_lookup_switch__OtherNonLocals_15);
    }
    {
      parse_tree__set_of_var__to_sorted_list_2_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_35_35, ml_backend__ml_lookup_switch__OtherNonLocals_15, &ml_backend__ml_lookup_switch__OutVars_16);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_27, &ml_backend__ml_lookup_switch__ModuleInfo_17);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_lookup_switch__ModuleInfo_17, &ml_backend__ml_lookup_switch__Globals_18);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_lookup_switch__Globals_18, (MR_Integer) 444, &ml_backend__ml_lookup_switch__StaticGroundCells_19);
    }
    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__StaticGroundCells_19 == (MR_Integer) 1);
    if (ml_backend__ml_lookup_switch__succeeded)
      {
        ml_backend__ml_lookup_switch__TypeCtorInfo_36_36 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0;
        ml_backend__ml_lookup_switch__TypeInfo_37_37 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0];
        {
          ml_backend__ml_lookup_switch__V_30_30 = mercury__map__init_0_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_36_36, ml_backend__ml_lookup_switch__TypeInfo_37_37);
        }
        {
          ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_97_110_116_115_95_102_111_114_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_49_93_95_48_8_p_0(ml_backend__ml_lookup_switch__OutVars_16, ml_backend__ml_lookup_switch__OtherNonLocals_15, ml_backend__ml_lookup_switch__TaggedCases_9, ml_backend__ml_lookup_switch__V_30_30, &ml_backend__ml_lookup_switch__CaseSolnMap_20, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_27, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31_31);
        }
      }
    if (ml_backend__ml_lookup_switch__succeeded)
      {
        MR_Word ml_backend__ml_lookup_switch__CaseConsts_22;
        MR_Word ml_backend__ml_lookup_switch__VarTypes_23;
        MR_Word ml_backend__ml_lookup_switch__OutTypes_24;
        MR_Word ml_backend__ml_lookup_switch__FieldTypes_25;
        MR_Word ml_backend__ml_lookup_switch__LookupSwitchInfo_26;
        MR_Word ml_backend__ml_lookup_switch__V_33_33;
        MR_Word ml_backend__ml_lookup_switch__CaseValuePairMap_21;

        *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_28 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31_31;
        {
          ml_backend__ml_lookup_switch__succeeded = backend_libs__switch_util__project_all_to_one_solution_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, ml_backend__ml_lookup_switch__CaseSolnMap_20, &ml_backend__ml_lookup_switch__CaseValuePairMap_21);
        }
        if (ml_backend__ml_lookup_switch__succeeded)
          {
            ml_backend__ml_lookup_switch__CaseConsts_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__CaseConsts_22, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__CaseValuePairMap_21));
          }
        else
          {
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
            {
              ml_backend__ml_lookup_switch__CaseConsts_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__CaseConsts_22, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__CaseSolnMap_20));
              MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__CaseConsts_22, 1) = NULL;
            }
          }
        {
          ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_31_31, &ml_backend__ml_lookup_switch__VarTypes_23);
        }
        {
          hlds__vartypes__lookup_var_types_3_p_0(ml_backend__ml_lookup_switch__VarTypes_23, ml_backend__ml_lookup_switch__OutVars_16, &ml_backend__ml_lookup_switch__OutTypes_24);
        }
        {
          ml_backend__ml_lookup_switch__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_33_33, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_10[0]));
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_33_33, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_105_115_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_7_p_0_1));
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_33_33, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__ModuleInfo_17));
        }
        {
          ml_backend__ml_lookup_switch__FieldTypes_25 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, ml_backend__ml_lookup_switch__V_33_33, ml_backend__ml_lookup_switch__OutTypes_24);
        }
        {
          ml_backend__ml_lookup_switch__LookupSwitchInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSwitchInfo_26, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__CaseConsts_22));
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSwitchInfo_26, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__OutVars_16));
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSwitchInfo_26, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__FieldTypes_25));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_lookup_switch__MaybeLookupSwitchInfo_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LookupSwitchInfo_26));
        }
      }
    else
      {
        *ml_backend__ml_lookup_switch__MaybeLookupSwitchInfo_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_28 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_27;
      }
  }
}

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id__ho6_5_p_0(
  MR_Word ml_backend__ml_lookup_switch__SolnConsts_7,
  MR_Word ml_backend__ml_lookup_switch__TaggedConsId_8,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Word ml_backend__ml_lookup_switch__ConsTag_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedConsId_8, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_lookup_switch__Index_12;
    MR_Word ml_backend__ml_lookup_switch___ConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedConsId_8, (MR_Integer) 0)));

    {
      backend_libs__switch_util__get_int_tag_2_p_0(ml_backend__ml_lookup_switch__ConsTag_11, &ml_backend__ml_lookup_switch__Index_12);
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[1], ml_backend__ml_lookup_switch__Index_12, ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_7)), ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13, ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14);
    }
  }
}

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id__ho5_5_p_0(
  MR_Word ml_backend__ml_lookup_switch__SolnConsts_7,
  MR_Word ml_backend__ml_lookup_switch__TaggedConsId_8,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Word ml_backend__ml_lookup_switch__ConsTag_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedConsId_8, (MR_Integer) 1)));
    MR_Integer ml_backend__ml_lookup_switch__Index_12;
    MR_Word ml_backend__ml_lookup_switch___ConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedConsId_8, (MR_Integer) 0)));

    {
      backend_libs__switch_util__get_int_tag_2_p_0(ml_backend__ml_lookup_switch__ConsTag_11, &ml_backend__ml_lookup_switch__Index_12);
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0], ml_backend__ml_lookup_switch__Index_12, ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_7)), ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13, ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14);
    }
  }
}

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho4_6_p_0_1(
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
    MR_Word ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14;

    {
      ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id__ho5_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2), &ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14);
    }
    *ml_backend__ml_lookup_switch__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14));
  }
}

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho4_6_p_0(
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_lookup_switch__succeeded;

        if ((ml_backend__ml_lookup_switch__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5;
            *ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3;
          }
        else
          {
            MR_Word ml_backend__ml_lookup_switch__TaggedCase_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ml_backend__ml_lookup_switch__TaggedCases_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ml_backend__ml_lookup_switch__TaggedMainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 0)));
            MR_Word ml_backend__ml_lookup_switch__TaggedOtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 1)));
            MR_Word ml_backend__ml_lookup_switch__CaseId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 2)));
            MR_Word ml_backend__ml_lookup_switch__SolnConsts_23;
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28;
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29;
            MR_Word ml_backend__ml_lookup_switch__V_30_30;
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31;
            MR_Word ml_backend__ml_lookup_switch__ConsTag_54;
            MR_Integer ml_backend__ml_lookup_switch__Index_55;
            MR_Word ml_backend__ml_lookup_switch___Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 3)));
            MR_Box ml_backend__ml_lookup_switch__conv0_SolnConsts_23;
            MR_Word ml_backend__ml_lookup_switch___ConsId_53;
            MR_Box ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31;

            {
              mercury__map__det_remove_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0], ((MR_Box) (ml_backend__ml_lookup_switch__CaseId_21)), &ml_backend__ml_lookup_switch__conv0_SolnConsts_23, ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3, &ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28);
            }
            ml_backend__ml_lookup_switch__SolnConsts_23 = ((MR_Word) ml_backend__ml_lookup_switch__conv0_SolnConsts_23);
            ml_backend__ml_lookup_switch___ConsId_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedMainConsId_19, (MR_Integer) 0)));
            ml_backend__ml_lookup_switch__ConsTag_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedMainConsId_19, (MR_Integer) 1)));
            {
              backend_libs__switch_util__get_int_tag_2_p_0(ml_backend__ml_lookup_switch__ConsTag_54, &ml_backend__ml_lookup_switch__Index_55);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0], ml_backend__ml_lookup_switch__Index_55, ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_23)), ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5, &ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29);
            }
            {
              ml_backend__ml_lookup_switch__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_9[1]));
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho4_6_p_0_1));
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_23));
            }
            {
              mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[4], ml_backend__ml_lookup_switch__V_30_30, ml_backend__ml_lookup_switch__TaggedOtherConsIds_20, ((MR_Box) (ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29)), &ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31);
            }
            ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31 = ((MR_Word) ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31);
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_lookup_switch__HeadVar__2__tmp_copy_2 = ml_backend__ml_lookup_switch__TaggedCases_16;
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0__tmp_copy_3 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28;
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0__tmp_copy_5 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31;

              ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0__tmp_copy_5;
              ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0__tmp_copy_3;
              ml_backend__ml_lookup_switch__HeadVar__2_2 = ml_backend__ml_lookup_switch__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho3_6_p_0_1(
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
    MR_Word ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14;

    {
      ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id__ho6_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2), &ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14);
    }
    *ml_backend__ml_lookup_switch__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14));
  }
}

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho3_6_p_0(
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_lookup_switch__succeeded;

        if ((ml_backend__ml_lookup_switch__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5;
            *ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3;
          }
        else
          {
            MR_Word ml_backend__ml_lookup_switch__TaggedCase_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ml_backend__ml_lookup_switch__TaggedCases_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ml_backend__ml_lookup_switch__TaggedMainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 0)));
            MR_Word ml_backend__ml_lookup_switch__TaggedOtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 1)));
            MR_Word ml_backend__ml_lookup_switch__CaseId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 2)));
            MR_Word ml_backend__ml_lookup_switch__SolnConsts_23;
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28;
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29;
            MR_Word ml_backend__ml_lookup_switch__V_30_30;
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31;
            MR_Word ml_backend__ml_lookup_switch__ConsTag_54;
            MR_Integer ml_backend__ml_lookup_switch__Index_55;
            MR_Word ml_backend__ml_lookup_switch___Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 3)));
            MR_Box ml_backend__ml_lookup_switch__conv0_SolnConsts_23;
            MR_Word ml_backend__ml_lookup_switch___ConsId_53;
            MR_Box ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31;

            {
              mercury__map__det_remove_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[1], ((MR_Box) (ml_backend__ml_lookup_switch__CaseId_21)), &ml_backend__ml_lookup_switch__conv0_SolnConsts_23, ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3, &ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28);
            }
            ml_backend__ml_lookup_switch__SolnConsts_23 = ((MR_Word) ml_backend__ml_lookup_switch__conv0_SolnConsts_23);
            ml_backend__ml_lookup_switch___ConsId_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedMainConsId_19, (MR_Integer) 0)));
            ml_backend__ml_lookup_switch__ConsTag_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedMainConsId_19, (MR_Integer) 1)));
            {
              backend_libs__switch_util__get_int_tag_2_p_0(ml_backend__ml_lookup_switch__ConsTag_54, &ml_backend__ml_lookup_switch__Index_55);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[1], ml_backend__ml_lookup_switch__Index_55, ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_23)), ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5, &ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29);
            }
            {
              ml_backend__ml_lookup_switch__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_9[0]));
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho3_6_p_0_1));
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__SolnConsts_23));
            }
            {
              mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[3], ml_backend__ml_lookup_switch__V_30_30, ml_backend__ml_lookup_switch__TaggedOtherConsIds_20, ((MR_Box) (ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29)), &ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31);
            }
            ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31 = ((MR_Word) ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31);
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_lookup_switch__HeadVar__2__tmp_copy_2 = ml_backend__ml_lookup_switch__TaggedCases_16;
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0__tmp_copy_3 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28;
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0__tmp_copy_5 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31;

              ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0__tmp_copy_5;
              ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0__tmp_copy_3;
              ml_backend__ml_lookup_switch__HeadVar__2_2 = ml_backend__ml_lookup_switch__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__459__1_2_p_0(
  MR_Word ml_backend__ml_lookup_switch__HadDummyRows_46,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_77)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__HadDummyRows_46 == ml_backend__ml_lookup_switch__HeadVar__2_77);

    return ml_backend__ml_lookup_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__455__1_2_p_0(
  MR_Word ml_backend__ml_lookup_switch__HadDummyRows_46,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_82)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__HadDummyRows_46 == ml_backend__ml_lookup_switch__HeadVar__2_82);

    return ml_backend__ml_lookup_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_atomic_lookup_switch__339__1_2_p_0(
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_22,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_86)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__NeedBitVecCheck_22 == ml_backend__ml_lookup_switch__HeadVar__2_86);

    return ml_backend__ml_lookup_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_atomic_lookup_switch__337__1_2_p_0(
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_23,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_81)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__NeedRangeCheck_23 == ml_backend__ml_lookup_switch__HeadVar__2_81);

    return ml_backend__ml_lookup_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_atomic_lookup_switch__281__1_2_p_0(
  MR_Word ml_backend__ml_lookup_switch__CodeModel_16,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_46)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CodeModel_16 == ml_backend__ml_lookup_switch__HeadVar__2_46);

    return ml_backend__ml_lookup_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_case_id_soln_consts_to_tag_soln_consts__224__1_2_p_0(
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_16,
  MR_Word ml_backend__ml_lookup_switch__DepletedCaseIdMap_9)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;

    {
      ml_backend__ml_lookup_switch__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, ml_backend__ml_lookup_switch__TypeInfo_for_V_16, ml_backend__ml_lookup_switch__DepletedCaseIdMap_9);
    }
    return ml_backend__ml_lookup_switch__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_several_soln_lookup_vars_0_0(
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Integer ml_backend__ml_lookup_switch__CastX_21 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__2_2;
    MR_Integer ml_backend__ml_lookup_switch__CastY_22 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__3_3;

    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CastX_21 == ml_backend__ml_lookup_switch__CastY_22);
    if (ml_backend__ml_lookup_switch__succeeded)
      *ml_backend__ml_lookup_switch__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ml_backend__ml_lookup_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_lookup_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_lookup_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_lookup_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_lookup_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ml_backend__ml_lookup_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ml_backend__ml_lookup_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_lookup_switch__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_lookup_switch__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ml_backend__ml_lookup_switch__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ml_backend__ml_lookup_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ml_backend__ml_lookup_switch__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word ml_backend__ml_lookup_switch__V_16_16;

        {
          ml_backend__mlds____Compare____mlds_lval_0_0(&ml_backend__ml_lookup_switch__V_16_16, ml_backend__ml_lookup_switch__V_4_4, ml_backend__ml_lookup_switch__V_10_10);
        }
        ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_16_16 == (MR_Integer) 0);
        ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
        if (ml_backend__ml_lookup_switch__succeeded)
          *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_16_16;
        else
          {
            MR_Word ml_backend__ml_lookup_switch__V_17_17;

            {
              ml_backend__mlds____Compare____mlds_lval_0_0(&ml_backend__ml_lookup_switch__V_17_17, ml_backend__ml_lookup_switch__V_5_5, ml_backend__ml_lookup_switch__V_11_11);
            }
            ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_17_17 == (MR_Integer) 0);
            ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
            if (ml_backend__ml_lookup_switch__succeeded)
              *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_17_17;
            else
              {
                MR_Word ml_backend__ml_lookup_switch__V_18_18;

                {
                  ml_backend__mlds____Compare____mlds_lval_0_0(&ml_backend__ml_lookup_switch__V_18_18, ml_backend__ml_lookup_switch__V_6_6, ml_backend__ml_lookup_switch__V_12_12);
                }
                ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_18_18 == (MR_Integer) 0);
                ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
                if (ml_backend__ml_lookup_switch__succeeded)
                  *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_18_18;
                else
                  {
                    MR_Word ml_backend__ml_lookup_switch__V_19_19;

                    {
                      ml_backend__mlds____Compare____statement_0_0(&ml_backend__ml_lookup_switch__V_19_19, ml_backend__ml_lookup_switch__V_7_7, ml_backend__ml_lookup_switch__V_13_13);
                    }
                    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_19_19 == (MR_Integer) 0);
                    ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
                    if (ml_backend__ml_lookup_switch__succeeded)
                      *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_19_19;
                    else
                      {
                        MR_Word ml_backend__ml_lookup_switch__V_20_20;

                        {
                          ml_backend__mlds____Compare____statement_0_0(&ml_backend__ml_lookup_switch__V_20_20, ml_backend__ml_lookup_switch__V_8_8, ml_backend__ml_lookup_switch__V_14_14);
                        }
                        ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_20_20 == (MR_Integer) 0);
                        ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
                        if (ml_backend__ml_lookup_switch__succeeded)
                          *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_20_20;
                        else
                          {
                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[5], ml_backend__ml_lookup_switch__HeadVar__1_1, ((MR_Box) (ml_backend__ml_lookup_switch__V_9_9)), ((MR_Box) (ml_backend__ml_lookup_switch__V_15_15)));
                            }
                          }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_several_soln_lookup_vars_0_0(
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Integer ml_backend__ml_lookup_switch__CastX_15 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__1_1;
    MR_Integer ml_backend__ml_lookup_switch__CastY_16 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__2_2;

    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CastX_15 == ml_backend__ml_lookup_switch__CastY_16);
    if (ml_backend__ml_lookup_switch__succeeded)
      ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
    else
      {
        MR_Word ml_backend__ml_lookup_switch__TypeInfo_22_22;
        MR_Word ml_backend__ml_lookup_switch__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_lookup_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_lookup_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ml_backend__ml_lookup_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ml_backend__ml_lookup_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ml_backend__ml_lookup_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word ml_backend__ml_lookup_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_lookup_switch__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_lookup_switch__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_lookup_switch__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_lookup_switch__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ml_backend__ml_lookup_switch__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 5)));

        {
          ml_backend__ml_lookup_switch__succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ml_backend__ml_lookup_switch__V_3_3, ml_backend__ml_lookup_switch__V_9_9);
        }
        if (ml_backend__ml_lookup_switch__succeeded)
          {
            {
              ml_backend__ml_lookup_switch__succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ml_backend__ml_lookup_switch__V_4_4, ml_backend__ml_lookup_switch__V_10_10);
            }
            if (ml_backend__ml_lookup_switch__succeeded)
              {
                {
                  ml_backend__ml_lookup_switch__succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(ml_backend__ml_lookup_switch__V_5_5, ml_backend__ml_lookup_switch__V_11_11);
                }
                if (ml_backend__ml_lookup_switch__succeeded)
                  {
                    {
                      ml_backend__ml_lookup_switch__succeeded = ml_backend__mlds____Unify____statement_0_0(ml_backend__ml_lookup_switch__V_6_6, ml_backend__ml_lookup_switch__V_12_12);
                    }
                    if (ml_backend__ml_lookup_switch__succeeded)
                      {
                        {
                          ml_backend__ml_lookup_switch__succeeded = ml_backend__mlds____Unify____statement_0_0(ml_backend__ml_lookup_switch__V_7_7, ml_backend__ml_lookup_switch__V_13_13);
                        }
                        if (ml_backend__ml_lookup_switch__succeeded)
                          {
                            ml_backend__ml_lookup_switch__TypeInfo_22_22 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[5];
                            {
                              ml_backend__ml_lookup_switch__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_lookup_switch__TypeInfo_22_22, ((MR_Box) (ml_backend__ml_lookup_switch__V_8_8)), ((MR_Box) (ml_backend__ml_lookup_switch__V_14_14)));
                            }
                          }
                      }
                  }
              }
          }
      }
    return ml_backend__ml_lookup_switch__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_lookup_switch____Compare____ml_lookup_switch_info_0_0(
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Integer ml_backend__ml_lookup_switch__CastX_12 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__2_2;
    MR_Integer ml_backend__ml_lookup_switch__CastY_13 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__3_3;

    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CastX_12 == ml_backend__ml_lookup_switch__CastY_13);
    if (ml_backend__ml_lookup_switch__succeeded)
      *ml_backend__ml_lookup_switch__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ml_backend__ml_lookup_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_lookup_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_lookup_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_lookup_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_lookup_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_lookup_switch__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ml_backend__ml_lookup_switch__V_10_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_2[0], &ml_backend__ml_lookup_switch__V_10_10, ((MR_Box) (ml_backend__ml_lookup_switch__V_4_4)), ((MR_Box) (ml_backend__ml_lookup_switch__V_7_7)));
        }
        ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_10_10 == (MR_Integer) 0);
        ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
        if (ml_backend__ml_lookup_switch__succeeded)
          *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_10_10;
        else
          {
            MR_Word ml_backend__ml_lookup_switch__V_11_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[3], &ml_backend__ml_lookup_switch__V_11_11, ((MR_Box) (ml_backend__ml_lookup_switch__V_5_5)), ((MR_Box) (ml_backend__ml_lookup_switch__V_8_8)));
            }
            ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__V_11_11 == (MR_Integer) 0);
            ml_backend__ml_lookup_switch__succeeded = !(ml_backend__ml_lookup_switch__succeeded);
            if (ml_backend__ml_lookup_switch__succeeded)
              *ml_backend__ml_lookup_switch__HeadVar__1_1 = ml_backend__ml_lookup_switch__V_11_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[4], ml_backend__ml_lookup_switch__HeadVar__1_1, ((MR_Box) (ml_backend__ml_lookup_switch__V_6_6)), ((MR_Box) (ml_backend__ml_lookup_switch__V_9_9)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
ml_backend__ml_lookup_switch____Unify____ml_lookup_switch_info_0_0(
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Integer ml_backend__ml_lookup_switch__CastX_9 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__1_1;
    MR_Integer ml_backend__ml_lookup_switch__CastY_10 = (MR_Integer) ml_backend__ml_lookup_switch__HeadVar__2_2;

    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__CastX_9 == ml_backend__ml_lookup_switch__CastY_10);
    if (ml_backend__ml_lookup_switch__succeeded)
      ml_backend__ml_lookup_switch__succeeded = MR_TRUE;
    else
      {
        MR_Word ml_backend__ml_lookup_switch__TypeInfo_12_12;
        MR_Word ml_backend__ml_lookup_switch__TypeInfo_13_13;
        MR_Word ml_backend__ml_lookup_switch__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_lookup_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_lookup_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ml_backend__ml_lookup_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_lookup_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_lookup_switch__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 2)));

        {
          ml_backend__ml_lookup_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_lookup_switch_scalar_common_2[0], ((MR_Box) (ml_backend__ml_lookup_switch__V_3_3)), ((MR_Box) (ml_backend__ml_lookup_switch__V_6_6)));
        }
        if (ml_backend__ml_lookup_switch__succeeded)
          {
            ml_backend__ml_lookup_switch__TypeInfo_12_12 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[3];
            {
              ml_backend__ml_lookup_switch__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_lookup_switch__TypeInfo_12_12, ((MR_Box) (ml_backend__ml_lookup_switch__V_4_4)), ((MR_Box) (ml_backend__ml_lookup_switch__V_7_7)));
            }
            if (ml_backend__ml_lookup_switch__succeeded)
              {
                ml_backend__ml_lookup_switch__TypeInfo_13_13 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[4];
                {
                  ml_backend__ml_lookup_switch__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_lookup_switch__TypeInfo_13_13, ((MR_Box) (ml_backend__ml_lookup_switch__V_5_5)), ((MR_Box) (ml_backend__ml_lookup_switch__V_8_8)));
                }
              }
          }
      }
    return ml_backend__ml_lookup_switch__succeeded;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_2(
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
    MR_Word ml_backend__ml_lookup_switch__conv1_HeadVar__2_2;

    {
      ml_backend__ml_lookup_switch__conv1_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv1_HeadVar__2_2));
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0_1(
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
    MR_Word ml_backend__ml_lookup_switch__conv0_DefaultRval_4;

    {
      ml_backend__ml_lookup_switch__conv0_DefaultRval_4 = ml_backend__ml_lookup_switch__ml_default_value_for_type_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_DefaultRval_4));
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_lookup_switch__make_dummy_first_soln_row_4_p_0(
  MR_Word ml_backend__ml_lookup_switch__FirstSolnStructType_5,
  MR_Word ml_backend__ml_lookup_switch__FieldTypes_6,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_14,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_15)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_23_23 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
    MR_Word ml_backend__ml_lookup_switch__FieldRvals_8;
    MR_Word ml_backend__ml_lookup_switch__FieldInitializers_9;
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_10;
    MR_Word ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_11;
    MR_Word ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_12;
    MR_Word ml_backend__ml_lookup_switch__FirstSolnRowInitializer_13;
    MR_Word ml_backend__ml_lookup_switch__V_20_20;

    {
      ml_backend__ml_lookup_switch__FieldRvals_8 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0, ml_backend__ml_lookup_switch__TypeCtorInfo_23_23, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[1], ml_backend__ml_lookup_switch__FieldTypes_6);
    }
    {
      ml_backend__ml_lookup_switch__FieldInitializers_9 = mercury__list__map_2_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_23_23, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[2], ml_backend__ml_lookup_switch__FieldRvals_8);
    }
    {
      ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_10 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) -1);
    }
    {
      ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_11 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) -1);
    }
    {
      ml_backend__ml_lookup_switch__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_20_20, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstLaterSlotInitializer_11));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_20_20, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FieldInitializers_9));
    }
    {
      ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_12, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsInitializer_10));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_12, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_20_20));
    }
    {
      ml_backend__ml_lookup_switch__FirstSolnRowInitializer_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__FirstSolnRowInitializer_13, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnStructType_5));
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__FirstSolnRowInitializer_13, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnFieldInitializers_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstSolnRowInitializer_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__STATE_VARIABLE_RevFirstSolnRowInitializers_0_14));
    }
  }
}

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_generate_bit_vec_initializers_4_p_0(
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
  MR_Integer ml_backend__ml_lookup_switch__Count_2,
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__3_3,
  MR_Word * ml_backend__ml_lookup_switch__HeadVar__4_4)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;

    if ((ml_backend__ml_lookup_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_lookup_switch__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_lookup_switch__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Integer ml_backend__ml_lookup_switch__WordNum_7;
        MR_Integer ml_backend__ml_lookup_switch__Bits_8;
        MR_Word ml_backend__ml_lookup_switch__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_lookup_switch__Rval_11;
        MR_Word ml_backend__ml_lookup_switch__Rvals_12;
        MR_Word ml_backend__ml_lookup_switch__Initializer_13;
        MR_Word ml_backend__ml_lookup_switch__Initializers_14;
        MR_Integer ml_backend__ml_lookup_switch__WordVal_15;
        MR_Word ml_backend__ml_lookup_switch__Remainder_16;
        MR_Word ml_backend__ml_lookup_switch__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_lookup_switch__V_18_18;
        MR_Integer ml_backend__ml_lookup_switch__V_19_19;

        ml_backend__ml_lookup_switch__WordNum_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_17_17, (MR_Integer) 0)));
        ml_backend__ml_lookup_switch__Bits_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_17_17, (MR_Integer) 1)));
        ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__Count_2 < ml_backend__ml_lookup_switch__WordNum_7);
        if (ml_backend__ml_lookup_switch__succeeded)
          {
            ml_backend__ml_lookup_switch__WordVal_15 = (MR_Integer) 0;
            ml_backend__ml_lookup_switch__Remainder_16 = ml_backend__ml_lookup_switch__HeadVar__1_1;
          }
        else
          {
            ml_backend__ml_lookup_switch__WordVal_15 = ml_backend__ml_lookup_switch__Bits_8;
            ml_backend__ml_lookup_switch__Remainder_16 = ml_backend__ml_lookup_switch__Rest_9;
          }
        {
          ml_backend__ml_lookup_switch__V_18_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_18_18, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__WordVal_15));
        }
        {
          ml_backend__ml_lookup_switch__Rval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__Rval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__Rval_11, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_18_18));
        }
        {
          ml_backend__ml_lookup_switch__Initializer_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Initializer_13, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Rval_11));
        }
        ml_backend__ml_lookup_switch__V_19_19 = (ml_backend__ml_lookup_switch__Count_2 + (MR_Integer) 1);
        {
          ml_backend__ml_lookup_switch__ml_generate_bit_vec_initializers_4_p_0(ml_backend__ml_lookup_switch__Remainder_16, ml_backend__ml_lookup_switch__V_19_19, &ml_backend__ml_lookup_switch__Rvals_12, &ml_backend__ml_lookup_switch__Initializers_14);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_lookup_switch__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Rval_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__Rvals_12));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_lookup_switch__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Initializer_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__Initializers_14));
        }
      }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_2(
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

    {
      ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__459__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_lookup_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_1(
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

    {
      ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_several_soln_atomic_lookup_switch__455__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_lookup_switch__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0(
  MR_Word ml_backend__ml_lookup_switch__IndexRval_13,
  MR_Word ml_backend__ml_lookup_switch__OutVars_14,
  MR_Word ml_backend__ml_lookup_switch__OutTypes_15,
  MR_Word ml_backend__ml_lookup_switch__CaseSolns_16,
  MR_Word ml_backend__ml_lookup_switch__Context_17,
  MR_Integer ml_backend__ml_lookup_switch__StartVal_18,
  MR_Integer ml_backend__ml_lookup_switch__EndVal_19,
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_20,
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_21,
  MR_Word * ml_backend__ml_lookup_switch__Statement_22,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_60,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_61)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_88_88;
    MR_Word ml_backend__ml_lookup_switch__ModuleInfo_24;
    MR_Word ml_backend__ml_lookup_switch__ModuleName_25;
    MR_Word ml_backend__ml_lookup_switch__MLDS_ModuleName_26;
    MR_Word ml_backend__ml_lookup_switch__MLDS_Context_27;
    MR_Word ml_backend__ml_lookup_switch__Target_28;
    MR_Word ml_backend__ml_lookup_switch__MLDS_IntType_29;
    MR_Word ml_backend__ml_lookup_switch__FirstSolnFieldTypes_30;
    MR_Word ml_backend__ml_lookup_switch__GlobalData0_31;
    MR_Word ml_backend__ml_lookup_switch__FirstSolnStructTypeNum_32;
    MR_Word ml_backend__ml_lookup_switch__FirstSolnStructType_33;
    MR_Word ml_backend__ml_lookup_switch__FirstSolnTableFieldIds_34;
    MR_Word ml_backend__ml_lookup_switch__GlobalData1_35;
    MR_Word ml_backend__ml_lookup_switch__LaterSolnStructTypeNum_36;
    MR_Word ml_backend__ml_lookup_switch__LaterSolnStructType_37;
    MR_Word ml_backend__ml_lookup_switch__LaterSolnOutFieldIds_38;
    MR_Word ml_backend__ml_lookup_switch__GlobalData2_39;
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsFieldId_41;
    MR_Word ml_backend__ml_lookup_switch__FirstLaterSolnRowFieldId_42;
    MR_Word ml_backend__ml_lookup_switch__FirstSolnOutFieldIds_43;
    MR_Word ml_backend__ml_lookup_switch__RevFirstSolnRowInitializers_44;
    MR_Word ml_backend__ml_lookup_switch__LaterSolnRowInitializersCord_45;
    MR_Word ml_backend__ml_lookup_switch__HadDummyRows_46;
    MR_Word ml_backend__ml_lookup_switch__FirstSolnRowInitializers_47;
    MR_Word ml_backend__ml_lookup_switch__LaterSolnRowInitializers_48;
    MR_Word ml_backend__ml_lookup_switch__FirstSolnVectorCommon_49;
    MR_Word ml_backend__ml_lookup_switch__GlobalData3_50;
    MR_Word ml_backend__ml_lookup_switch__LaterSolnVectorCommon_51;
    MR_Word ml_backend__ml_lookup_switch__GlobalData_52;
    MR_Word ml_backend__ml_lookup_switch__MatchDefns_53;
    MR_Word ml_backend__ml_lookup_switch__InRangeStatements_54;
    MR_Word ml_backend__ml_lookup_switch__InRangeStmt_55;
    MR_Word ml_backend__ml_lookup_switch__InRangeStatement_56;
    MR_Word ml_backend__ml_lookup_switch__V_62_62;
    MR_Word ml_backend__ml_lookup_switch__V_70_70;
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_72_72;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_60, &ml_backend__ml_lookup_switch__ModuleInfo_24);
    }
    {
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_lookup_switch__ModuleInfo_24, &ml_backend__ml_lookup_switch__ModuleName_25);
    }
    {
      ml_backend__ml_lookup_switch__MLDS_ModuleName_26 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_lookup_switch__ModuleName_25);
    }
    {
      ml_backend__ml_lookup_switch__MLDS_Context_27 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_lookup_switch__Context_17);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_60, &ml_backend__ml_lookup_switch__Target_28);
    }
    ml_backend__ml_lookup_switch__MLDS_IntType_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
    {
      ml_backend__ml_lookup_switch__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_62_62, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_IntType_29));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_62_62, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__OutTypes_15));
    }
    {
      ml_backend__ml_lookup_switch__FirstSolnFieldTypes_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldTypes_30, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_IntType_29));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnFieldTypes_30, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_62_62));
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_60, &ml_backend__ml_lookup_switch__GlobalData0_31);
    }
    {
      ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_26, ml_backend__ml_lookup_switch__MLDS_Context_27, ml_backend__ml_lookup_switch__Target_28, ml_backend__ml_lookup_switch__FirstSolnFieldTypes_30, &ml_backend__ml_lookup_switch__FirstSolnStructTypeNum_32, &ml_backend__ml_lookup_switch__FirstSolnStructType_33, &ml_backend__ml_lookup_switch__FirstSolnTableFieldIds_34, ml_backend__ml_lookup_switch__GlobalData0_31, &ml_backend__ml_lookup_switch__GlobalData1_35);
    }
    {
      ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_26, ml_backend__ml_lookup_switch__MLDS_Context_27, ml_backend__ml_lookup_switch__Target_28, ml_backend__ml_lookup_switch__OutTypes_15, &ml_backend__ml_lookup_switch__LaterSolnStructTypeNum_36, &ml_backend__ml_lookup_switch__LaterSolnStructType_37, &ml_backend__ml_lookup_switch__LaterSolnOutFieldIds_38, ml_backend__ml_lookup_switch__GlobalData1_35, &ml_backend__ml_lookup_switch__GlobalData2_39);
    }
    if ((ml_backend__ml_lookup_switch__FirstSolnTableFieldIds_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_several_soln_atomic_lookup_switch\'/12", (MR_String) "not enough field_ids");
          return;
        }
      }
    else
      {
        MR_Word ml_backend__ml_lookup_switch__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnTableFieldIds_34, (MR_Integer) 1)));
        MR_Word ml_backend__ml_lookup_switch__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__FirstSolnTableFieldIds_34, (MR_Integer) 0)));

        if ((ml_backend__ml_lookup_switch__V_97_97 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_several_soln_atomic_lookup_switch\'/12", (MR_String) "not enough field_ids");
              return;
            }
          }
        else
          {
            ml_backend__ml_lookup_switch__NumLaterSolnsFieldId_41 = ml_backend__ml_lookup_switch__V_98_98;
            ml_backend__ml_lookup_switch__FirstLaterSolnRowFieldId_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_97_97, (MR_Integer) 0)));
            ml_backend__ml_lookup_switch__FirstSolnOutFieldIds_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_97_97, (MR_Integer) 1)));
          }
      }
    ml_backend__ml_lookup_switch__TypeCtorInfo_88_88 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
    {
      ml_backend__ml_lookup_switch__V_70_70 = mercury__cord__init_0_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_88_88);
    }
    {
      ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_109_111_100_101_108_95_110_111_110_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_14_p_0(ml_backend__ml_lookup_switch__StartVal_18, ml_backend__ml_lookup_switch__EndVal_19, (MR_Integer) 0, ml_backend__ml_lookup_switch__CaseSolns_16, ml_backend__ml_lookup_switch__FirstSolnStructType_33, ml_backend__ml_lookup_switch__LaterSolnStructType_37, ml_backend__ml_lookup_switch__OutTypes_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_lookup_switch__RevFirstSolnRowInitializers_44, ml_backend__ml_lookup_switch__V_70_70, &ml_backend__ml_lookup_switch__LaterSolnRowInitializersCord_45, (MR_Integer) 0, &ml_backend__ml_lookup_switch__HadDummyRows_46);
    }
    {
      mercury__list__reverse_2_p_0(ml_backend__ml_lookup_switch__TypeCtorInfo_88_88, ml_backend__ml_lookup_switch__RevFirstSolnRowInitializers_44, &ml_backend__ml_lookup_switch__FirstSolnRowInitializers_47);
    }
    {
      ml_backend__ml_lookup_switch__LaterSolnRowInitializers_48 = mercury__cord__list_1_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_88_88, ml_backend__ml_lookup_switch__LaterSolnRowInitializersCord_45);
    }
    {
      ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_26, ml_backend__ml_lookup_switch__FirstSolnStructTypeNum_32, ml_backend__ml_lookup_switch__FirstSolnRowInitializers_47, &ml_backend__ml_lookup_switch__FirstSolnVectorCommon_49, ml_backend__ml_lookup_switch__GlobalData2_39, &ml_backend__ml_lookup_switch__GlobalData3_50);
    }
    {
      ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_26, ml_backend__ml_lookup_switch__LaterSolnStructTypeNum_36, ml_backend__ml_lookup_switch__LaterSolnRowInitializers_48, &ml_backend__ml_lookup_switch__LaterSolnVectorCommon_51, ml_backend__ml_lookup_switch__GlobalData3_50, &ml_backend__ml_lookup_switch__GlobalData_52);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_lookup_switch__GlobalData_52, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_60, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_72_72);
    }
    switch (ml_backend__ml_lookup_switch__NeedBitVecCheck_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_lookup_switch__V_78_78;

          {
            ml_backend__ml_lookup_switch__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_78_78, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[5]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_78_78, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_78_78, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__HadDummyRows_46));
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_78_78, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_78_78, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_several_soln_atomic_lookup_switch\'/12", (MR_String) "bad dont_need_bit_vec_check");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_lookup_switch__V_73_73;

          {
            ml_backend__ml_lookup_switch__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_73_73, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[5]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_73_73, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0_2));
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_73_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_73_73, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__HadDummyRows_46));
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_73_73, 4) = ((MR_Box) ((MR_Integer) 1));
          }
          {
            mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_73_73, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_several_soln_atomic_lookup_switch\'/12", (MR_String) "bad need_bit_vec_check");
          }
        }
        break;
    }
    {
      ml_backend__ml_lookup_switch__ml_gen_several_soln_lookup_code_18_p_0(ml_backend__ml_lookup_switch__Context_17, ml_backend__ml_lookup_switch__MLDS_Context_27, ml_backend__ml_lookup_switch__IndexRval_13, ml_backend__ml_lookup_switch__OutVars_14, ml_backend__ml_lookup_switch__OutTypes_15, ml_backend__ml_lookup_switch__FirstSolnStructType_33, ml_backend__ml_lookup_switch__LaterSolnStructType_37, ml_backend__ml_lookup_switch__NumLaterSolnsFieldId_41, ml_backend__ml_lookup_switch__FirstLaterSolnRowFieldId_42, ml_backend__ml_lookup_switch__FirstSolnOutFieldIds_43, ml_backend__ml_lookup_switch__LaterSolnOutFieldIds_38, ml_backend__ml_lookup_switch__FirstSolnVectorCommon_49, ml_backend__ml_lookup_switch__LaterSolnVectorCommon_51, ml_backend__ml_lookup_switch__NeedBitVecCheck_20, &ml_backend__ml_lookup_switch__MatchDefns_53, &ml_backend__ml_lookup_switch__InRangeStatements_54, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_72_72, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_61);
    }
    {
      ml_backend__ml_lookup_switch__InRangeStmt_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__InRangeStmt_55, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MatchDefns_53));
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__InRangeStmt_55, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__InRangeStatements_54));
    }
    {
      ml_backend__ml_lookup_switch__InRangeStatement_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__InRangeStatement_56, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__InRangeStmt_55));
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__InRangeStatement_56, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_27));
    }
    switch (ml_backend__ml_lookup_switch__NeedRangeCheck_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *ml_backend__ml_lookup_switch__Statement_22 = ml_backend__ml_lookup_switch__InRangeStatement_56;
        break;
      case (MR_Integer) 0:
        {
          MR_Integer ml_backend__ml_lookup_switch__Difference_57 = (ml_backend__ml_lookup_switch__EndVal_19 - ml_backend__ml_lookup_switch__StartVal_18);
          MR_Word ml_backend__ml_lookup_switch__RangeCheckCond_58;
          MR_Word ml_backend__ml_lookup_switch__Stmt_59;
          MR_Word ml_backend__ml_lookup_switch__V_85_85;
          MR_Word ml_backend__ml_lookup_switch__V_86_86;

          {
            ml_backend__ml_lookup_switch__V_86_86 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_86_86, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Difference_57));
          }
          {
            ml_backend__ml_lookup_switch__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_85_85, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_86_86));
          }
          {
            ml_backend__ml_lookup_switch__RangeCheckCond_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27))));
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_58, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__IndexRval_13));
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_58, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__V_85_85));
          }
          {
            ml_backend__ml_lookup_switch__Stmt_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_59, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__RangeCheckCond_58));
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_59, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__InRangeStatement_56));
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_59, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_lookup_switch__Statement_22 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Stmt_59));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_27));
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0_2(
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

    {
      ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_atomic_lookup_switch__339__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_lookup_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0_1(
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

    {
      ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_simple_atomic_lookup_switch__337__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_lookup_switch__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0(
  MR_Word ml_backend__ml_lookup_switch__IndexRval_14,
  MR_Word ml_backend__ml_lookup_switch__OutVars_15,
  MR_Word ml_backend__ml_lookup_switch__OutTypes_16,
  MR_Word ml_backend__ml_lookup_switch__CaseValues_17,
  MR_Word ml_backend__ml_lookup_switch__CodeModel_18,
  MR_Word ml_backend__ml_lookup_switch__Context_19,
  MR_Integer ml_backend__ml_lookup_switch__StartVal_20,
  MR_Integer ml_backend__ml_lookup_switch__EndVal_21,
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_22,
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_23,
  MR_Word * ml_backend__ml_lookup_switch__Statement_24,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Word ml_backend__ml_lookup_switch__ModuleInfo_26;
    MR_Word ml_backend__ml_lookup_switch__ModuleName_27;
    MR_Word ml_backend__ml_lookup_switch__MLDS_ModuleName_28;
    MR_Word ml_backend__ml_lookup_switch__MLDS_Context_29;
    MR_Word ml_backend__ml_lookup_switch__Target_30;
    MR_Word ml_backend__ml_lookup_switch__LookupStatements_31;
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52, &ml_backend__ml_lookup_switch__ModuleInfo_26);
    }
    {
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_lookup_switch__ModuleInfo_26, &ml_backend__ml_lookup_switch__ModuleName_27);
    }
    {
      ml_backend__ml_lookup_switch__MLDS_ModuleName_28 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_lookup_switch__ModuleName_27);
    }
    {
      ml_backend__ml_lookup_switch__MLDS_Context_29 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_lookup_switch__Context_19);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52, &ml_backend__ml_lookup_switch__Target_30);
    }
    if ((ml_backend__ml_lookup_switch__OutTypes_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ml_backend__ml_lookup_switch__LookupStatements_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52;
      }
    else
      {
        MR_Word ml_backend__ml_lookup_switch__GlobalData0_34;
        MR_Word ml_backend__ml_lookup_switch__StructTypeNum_35;
        MR_Word ml_backend__ml_lookup_switch__StructType_36;
        MR_Word ml_backend__ml_lookup_switch__FieldIds_37;
        MR_Word ml_backend__ml_lookup_switch__GlobalData1_38;
        MR_Word ml_backend__ml_lookup_switch__RowInitializers_39;
        MR_Word ml_backend__ml_lookup_switch__VectorCommon_40;
        MR_Word ml_backend__ml_lookup_switch__GlobalData_41;
        MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_54_54;

        {
          ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52, &ml_backend__ml_lookup_switch__GlobalData0_34);
        }
        {
          ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_28, ml_backend__ml_lookup_switch__MLDS_Context_29, ml_backend__ml_lookup_switch__Target_30, ml_backend__ml_lookup_switch__OutTypes_16, &ml_backend__ml_lookup_switch__StructTypeNum_35, &ml_backend__ml_lookup_switch__StructType_36, &ml_backend__ml_lookup_switch__FieldIds_37, ml_backend__ml_lookup_switch__GlobalData0_34, &ml_backend__ml_lookup_switch__GlobalData1_38);
        }
        {
          ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_99_111_110_115_116_114_117_99_116_95_115_105_109_112_108_101_95_115_119_105_116_99_104_95_118_101_99_116_111_114_95_95_91_49_93_95_48_6_p_0(ml_backend__ml_lookup_switch__StructType_36, ml_backend__ml_lookup_switch__OutTypes_16, ml_backend__ml_lookup_switch__StartVal_20, ml_backend__ml_lookup_switch__CaseValues_17, &ml_backend__ml_lookup_switch__RowInitializers_39);
        }
        {
          ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_28, ml_backend__ml_lookup_switch__StructTypeNum_35, ml_backend__ml_lookup_switch__RowInitializers_39, &ml_backend__ml_lookup_switch__VectorCommon_40, ml_backend__ml_lookup_switch__GlobalData1_38, &ml_backend__ml_lookup_switch__GlobalData_41);
        }
        {
          ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_lookup_switch__GlobalData_41, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_52, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_54_54);
        }
        {
          ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(ml_backend__ml_lookup_switch__OutVars_15, ml_backend__ml_lookup_switch__OutTypes_16, ml_backend__ml_lookup_switch__FieldIds_37, ml_backend__ml_lookup_switch__VectorCommon_40, ml_backend__ml_lookup_switch__StructType_36, ml_backend__ml_lookup_switch__IndexRval_14, ml_backend__ml_lookup_switch__MLDS_Context_29, &ml_backend__ml_lookup_switch__LookupStatements_31, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_54_54, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55);
        }
      }
    switch (ml_backend__ml_lookup_switch__CodeModel_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_lookup_switch__Stmt_42;
          MR_Word ml_backend__ml_lookup_switch__V_77_77;
          MR_Word ml_backend__ml_lookup_switch__V_82_82;

          {
            ml_backend__ml_lookup_switch__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[3]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__NeedRangeCheck_23));
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_77_77, 4) = ((MR_Box) ((MR_Integer) 1));
          }
          {
            mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_77_77, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_simple_atomic_lookup_switch\'/13", (MR_String) "model_det need_range_check");
          }
          {
            ml_backend__ml_lookup_switch__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_82_82, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[4]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_82_82, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0_2));
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_82_82, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__NeedBitVecCheck_22));
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_82_82, 4) = ((MR_Box) ((MR_Integer) 1));
          }
          {
            mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_82_82, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_simple_atomic_lookup_switch\'/13", (MR_String) "model_det need_bit_vec_check");
          }
          {
            ml_backend__ml_lookup_switch__Stmt_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Stmt_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__Stmt_42, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__LookupStatements_31));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_lookup_switch__Statement_24 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Stmt_42));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_29));
          }
          *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55;
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_simple_atomic_lookup_switch\'/13", (MR_String) "model_non");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_lookup_switch__SetSuccessTrueStatement_43;
          MR_Word ml_backend__ml_lookup_switch__LookupSucceedStmt_44;
          MR_Word ml_backend__ml_lookup_switch__LookupSucceedStatement_45;
          MR_Word ml_backend__ml_lookup_switch__V_62_62;
          MR_Word ml_backend__ml_lookup_switch__V_63_63;

          {
            ml_backend__ml_code_util__ml_gen_set_success_4_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[13]), ml_backend__ml_lookup_switch__Context_19, &ml_backend__ml_lookup_switch__SetSuccessTrueStatement_43);
          }
          {
            ml_backend__ml_lookup_switch__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_63_63, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__SetSuccessTrueStatement_43));
            MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_lookup_switch__V_62_62 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_lookup_switch__LookupStatements_31, ml_backend__ml_lookup_switch__V_63_63);
          }
          {
            ml_backend__ml_lookup_switch__LookupSucceedStmt_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSucceedStmt_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSucceedStmt_44, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_62_62));
          }
          {
            ml_backend__ml_lookup_switch__LookupSucceedStatement_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSucceedStatement_45, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LookupSucceedStmt_44));
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSucceedStatement_45, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_29));
          }
          switch (ml_backend__ml_lookup_switch__NeedRangeCheck_23) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              switch (ml_backend__ml_lookup_switch__NeedBitVecCheck_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    *ml_backend__ml_lookup_switch__Statement_24 = ml_backend__ml_lookup_switch__LookupSucceedStatement_45;
                    *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word ml_backend__ml_lookup_switch__BitVecCheckCond_46;
                    MR_Word ml_backend__ml_lookup_switch__SetSuccessFalseStatement_47;
                    MR_Word ml_backend__ml_lookup_switch__V_76_76;
                    MR_Word ml_backend__ml_lookup_switch__Stmt_88;

                    {
                      ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_55_93_95_48_9_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_28, ml_backend__ml_lookup_switch__Context_19, ml_backend__ml_lookup_switch__IndexRval_14, ml_backend__ml_lookup_switch__CaseValues_17, ml_backend__ml_lookup_switch__StartVal_20, &ml_backend__ml_lookup_switch__BitVecCheckCond_46, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53);
                    }
                    {
                      ml_backend__ml_code_util__ml_gen_set_success_4_p_0(*ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[8]), ml_backend__ml_lookup_switch__Context_19, &ml_backend__ml_lookup_switch__SetSuccessFalseStatement_47);
                    }
                    {
                      ml_backend__ml_lookup_switch__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_76_76, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__SetSuccessFalseStatement_47));
                    }
                    {
                      ml_backend__ml_lookup_switch__Stmt_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_88, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__BitVecCheckCond_46));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_88, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__LookupSucceedStatement_45));
                      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_88, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__V_76_76));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      *ml_backend__ml_lookup_switch__Statement_24 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Stmt_88));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_29));
                    }
                  }
                  break;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Integer ml_backend__ml_lookup_switch__Difference_48 = (ml_backend__ml_lookup_switch__EndVal_21 - ml_backend__ml_lookup_switch__StartVal_20);
                MR_Word ml_backend__ml_lookup_switch__RangeCheckCond_49;
                MR_Word ml_backend__ml_lookup_switch__RangeCheckSuccessStatement_50;
                MR_Word ml_backend__ml_lookup_switch__V_66_66;
                MR_Word ml_backend__ml_lookup_switch__V_67_67;
                MR_Word ml_backend__ml_lookup_switch__V_72_72;
                MR_Word ml_backend__ml_lookup_switch__Stmt_93;
                MR_Word ml_backend__ml_lookup_switch__SetSuccessFalseStatement_95;

                {
                  ml_backend__ml_lookup_switch__V_67_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_67_67, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Difference_48));
                }
                {
                  ml_backend__ml_lookup_switch__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_66_66, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_67_67));
                }
                {
                  ml_backend__ml_lookup_switch__RangeCheckCond_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27))));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_49, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__IndexRval_14));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__RangeCheckCond_49, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__V_66_66));
                }
                {
                  ml_backend__ml_code_util__ml_gen_set_success_4_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55, (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[8]), ml_backend__ml_lookup_switch__Context_19, &ml_backend__ml_lookup_switch__SetSuccessFalseStatement_95);
                }
                switch (ml_backend__ml_lookup_switch__NeedBitVecCheck_22) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      ml_backend__ml_lookup_switch__RangeCheckSuccessStatement_50 = ml_backend__ml_lookup_switch__LookupSucceedStatement_45;
                      *ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53 = ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word ml_backend__ml_lookup_switch__RangeCheckSuccessStmt_51;
                      MR_Word ml_backend__ml_lookup_switch__V_71_71;
                      MR_Word ml_backend__ml_lookup_switch__BitVecCheckCond_91;

                      {
                        ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_101_114_97_116_101_95_98_105_116_118_101_99_95_116_101_115_116_95_95_91_49_44_32_55_93_95_48_9_p_0(ml_backend__ml_lookup_switch__MLDS_ModuleName_28, ml_backend__ml_lookup_switch__Context_19, ml_backend__ml_lookup_switch__IndexRval_14, ml_backend__ml_lookup_switch__CaseValues_17, ml_backend__ml_lookup_switch__StartVal_20, &ml_backend__ml_lookup_switch__BitVecCheckCond_91, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_55_55, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_53);
                      }
                      {
                        ml_backend__ml_lookup_switch__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_71_71, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__SetSuccessFalseStatement_95));
                      }
                      {
                        ml_backend__ml_lookup_switch__RangeCheckSuccessStmt_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RangeCheckSuccessStmt_51, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__BitVecCheckCond_91));
                        MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RangeCheckSuccessStmt_51, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__LookupSucceedStatement_45));
                        MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RangeCheckSuccessStmt_51, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__V_71_71));
                      }
                      {
                        ml_backend__ml_lookup_switch__RangeCheckSuccessStatement_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__RangeCheckSuccessStatement_50, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__RangeCheckSuccessStmt_51));
                        MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__RangeCheckSuccessStatement_50, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_29));
                      }
                    }
                    break;
                }
                {
                  ml_backend__ml_lookup_switch__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_72_72, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__SetSuccessFalseStatement_95));
                }
                {
                  ml_backend__ml_lookup_switch__Stmt_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_93, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__RangeCheckCond_49));
                  MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_93, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__RangeCheckSuccessStatement_50));
                  MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__Stmt_93, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__V_72_72));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *ml_backend__ml_lookup_switch__Statement_24 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__Stmt_93));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_29));
                }
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id_5_p_0(
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_T_16,
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_17,
  MR_Word ml_backend__ml_lookup_switch__GetTag_6,
  MR_Box ml_backend__ml_lookup_switch__SolnConsts_7,
  MR_Word ml_backend__ml_lookup_switch__TaggedConsId_8,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Word ml_backend__ml_lookup_switch__ConsTag_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedConsId_8, (MR_Integer) 1)));
    MR_Box ml_backend__ml_lookup_switch__Index_12;
    MR_Word ml_backend__ml_lookup_switch___ConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedConsId_8, (MR_Integer) 0)));
    void MR_CALL (* ml_backend__ml_lookup_switch__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__GetTag_6, (MR_Integer) 1)));

    {
      ml_backend__ml_lookup_switch__func_0(((MR_Box) ml_backend__ml_lookup_switch__GetTag_6), ((MR_Box) (ml_backend__ml_lookup_switch__ConsTag_11)), &ml_backend__ml_lookup_switch__Index_12);
    }
    {
      mercury__map__det_insert_4_p_0(ml_backend__ml_lookup_switch__TypeInfo_for_T_16, ml_backend__ml_lookup_switch__TypeInfo_for_V_17, ml_backend__ml_lookup_switch__Index_12, ml_backend__ml_lookup_switch__SolnConsts_7, ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_0_13, ml_backend__ml_lookup_switch__STATE_VARIABLE_IndexMap_14);
    }
  }
}

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop_6_p_0_1(
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2,
  MR_Box * ml_backend__ml_lookup_switch__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
    MR_Word ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14;

    {
      ml_backend__ml_lookup_switch__ml_record_lookup_for_tagged_cons_id_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 5))), (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 6)), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_2), &ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14);
    }
    *ml_backend__ml_lookup_switch__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_lookup_switch__conv1_STATE_VARIABLE_IndexMap_14));
  }
}

static void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop_6_p_0(
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_Key_34,
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_35,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_lookup_switch__HeadVar__2_2,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_lookup_switch__succeeded;

        if ((ml_backend__ml_lookup_switch__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_6 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5;
            *ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_4 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3;
          }
        else
          {
            MR_Word ml_backend__ml_lookup_switch__TypeInfo_42_42;
            MR_Word ml_backend__ml_lookup_switch__TaggedCase_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ml_backend__ml_lookup_switch__TaggedCases_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ml_backend__ml_lookup_switch__TaggedMainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 0)));
            MR_Word ml_backend__ml_lookup_switch__TaggedOtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 1)));
            MR_Word ml_backend__ml_lookup_switch__CaseId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 2)));
            MR_Box ml_backend__ml_lookup_switch__SolnConsts_23;
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28;
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29;
            MR_Word ml_backend__ml_lookup_switch__V_30_30;
            MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31;
            MR_Word ml_backend__ml_lookup_switch__ConsTag_50;
            MR_Box ml_backend__ml_lookup_switch__Index_51;
            MR_Word ml_backend__ml_lookup_switch___Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedCase_15, (MR_Integer) 3)));
            MR_Word ml_backend__ml_lookup_switch___ConsId_49;
            void MR_CALL (* ml_backend__ml_lookup_switch__func_0)(MR_Box, MR_Box, MR_Box *);
            MR_Box ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31;

            {
              mercury__map__det_remove_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, ml_backend__ml_lookup_switch__TypeInfo_for_V_35, ((MR_Box) (ml_backend__ml_lookup_switch__CaseId_21)), &ml_backend__ml_lookup_switch__SolnConsts_23, ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3, &ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28);
            }
            ml_backend__ml_lookup_switch___ConsId_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedMainConsId_19, (MR_Integer) 0)));
            ml_backend__ml_lookup_switch__ConsTag_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TaggedMainConsId_19, (MR_Integer) 1)));
            ml_backend__ml_lookup_switch__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__HeadVar__1_1, (MR_Integer) 1)));
            {
              ml_backend__ml_lookup_switch__func_0(((MR_Box) ml_backend__ml_lookup_switch__HeadVar__1_1), ((MR_Box) (ml_backend__ml_lookup_switch__ConsTag_50)), &ml_backend__ml_lookup_switch__Index_51);
            }
            {
              mercury__map__det_insert_4_p_0(ml_backend__ml_lookup_switch__TypeInfo_for_Key_34, ml_backend__ml_lookup_switch__TypeInfo_for_V_35, ml_backend__ml_lookup_switch__Index_51, ml_backend__ml_lookup_switch__SolnConsts_23, ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5, &ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29);
            }
            {
              ml_backend__ml_lookup_switch__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_8[0]));
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop_6_p_0_1));
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_for_Key_34));
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 4) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_for_V_35));
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 5) = ((MR_Box) (ml_backend__ml_lookup_switch__HeadVar__1_1));
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_30_30, 6) = ml_backend__ml_lookup_switch__SolnConsts_23;
            }
            {
              ml_backend__ml_lookup_switch__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TypeInfo_42_42, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TypeInfo_42_42, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_for_Key_34));
              MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__TypeInfo_42_42, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_for_V_35));
            }
            {
              mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, ml_backend__ml_lookup_switch__TypeInfo_42_42, (MR_Word) ml_backend__ml_lookup_switch__V_30_30, ml_backend__ml_lookup_switch__TaggedOtherConsIds_20, ((MR_Box) (ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_29_29)), &ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31);
            }
            ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31 = ((MR_Word) ml_backend__ml_lookup_switch__conv2_STATE_VARIABLE_TagMap_31_31);
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_lookup_switch__HeadVar__2__tmp_copy_2 = ml_backend__ml_lookup_switch__TaggedCases_16;
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0__tmp_copy_3 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_28_28;
              MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0__tmp_copy_5 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_31_31;

              ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0_5 = ml_backend__ml_lookup_switch__STATE_VARIABLE_TagMap_0__tmp_copy_5;
              ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0_3 = ml_backend__ml_lookup_switch__STATE_VARIABLE_CaseIdMap_0__tmp_copy_3;
              ml_backend__ml_lookup_switch__HeadVar__2_2 = ml_backend__ml_lookup_switch__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

MR_Word MR_CALL 
ml_backend__ml_lookup_switch__ml_default_value_for_type_1_f_0(
  MR_Word ml_backend__ml_lookup_switch__MLDS_Type_3)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Word ml_backend__ml_lookup_switch__DefaultRval_4;

    switch (MR_tag((MR_Word) ml_backend__ml_lookup_switch__MLDS_Type_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__ml_lookup_switch__MLDS_Type_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 6:
          case (MR_Integer) 9:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_lookup_switch", (MR_String) "function \140ml_backend.ml_lookup_switch.ml_default_value_for_type\'/1", (MR_String) "unexpected MLDS_Type");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[8]);
            }
            break;
          case (MR_Integer) 2:
            {
              ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[6]);
            }
            break;
          case (MR_Integer) 3:
            {
              ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[12]);
            }
            break;
          case (MR_Integer) 4:
            {
              ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[10]);
            }
            break;
          case (MR_Integer) 5:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            {
              MR_Word ml_backend__ml_lookup_switch__V_23_23;

              {
                ml_backend__ml_lookup_switch__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_23_23, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Type_3));
              }
              {
                ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_23_23));
                MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[6])));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_lookup_switch__V_23_23;

          {
            ml_backend__ml_lookup_switch__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_23_23, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Type_3));
          }
          {
            ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_23_23));
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[6])));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_lookup_switch__V_23_23;

          {
            ml_backend__ml_lookup_switch__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_23_23, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Type_3));
          }
          {
            ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_23_23));
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[6])));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__MLDS_Type_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            {
              MR_Word ml_backend__ml_lookup_switch__V_23_23;

              {
                ml_backend__ml_lookup_switch__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_23_23, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Type_3));
              }
              {
                ml_backend__ml_lookup_switch__DefaultRval_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_23_23));
                MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__DefaultRval_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[6])));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_lookup_switch", (MR_String) "function \140ml_backend.ml_lookup_switch.ml_default_value_for_type\'/1", (MR_String) "unexpected MLDS_Type");
              }
            }
            break;
        }
        break;
    }
    return ml_backend__ml_lookup_switch__DefaultRval_4;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0_1(
  MR_Box ml_backend__ml_lookup_switch__closure_arg,
  MR_Box ml_backend__ml_lookup_switch__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_lookup_switch__wrapper_arg_2;
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;
    MR_Word ml_backend__ml_lookup_switch__conv0_HeadVar__2_2;

    {
      ml_backend__ml_lookup_switch__conv0_HeadVar__2_2 = ml_backend__ml_util__wrap_init_obj_1_f_0(((MR_Word) ml_backend__ml_lookup_switch__wrapper_arg_1));
    }
    ml_backend__ml_lookup_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_lookup_switch__conv0_HeadVar__2_2));
    return ml_backend__ml_lookup_switch__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_lookup_switch__ml_construct_later_soln_row_2_f_0(
  MR_Word ml_backend__ml_lookup_switch__StructType_4,
  MR_Word ml_backend__ml_lookup_switch__Rvals_5)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Word ml_backend__ml_lookup_switch__RowInitializer_6;
    MR_Word ml_backend__ml_lookup_switch__FieldInitializers_7;

    {
      ml_backend__ml_lookup_switch__FieldInitializers_7 = mercury__list__map_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_6[0], ml_backend__ml_lookup_switch__Rvals_5);
    }
    {
      ml_backend__ml_lookup_switch__RowInitializer_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RowInitializer_6, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__StructType_4));
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__RowInitializer_6, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__FieldInitializers_7));
    }
    return ml_backend__ml_lookup_switch__RowInitializer_6;
  }
}

void MR_CALL 
ml_backend__ml_lookup_switch__make_several_soln_lookup_vars_4_p_0(
  MR_Word ml_backend__ml_lookup_switch__MLDS_Context_5,
  MR_Word * ml_backend__ml_lookup_switch__SeveralSolnLookupVars_6,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_24,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_25)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsVar_8;
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsVarDefn_9;
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_10;
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVar_11;
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVarDefn_12;
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVarLval_13;
    MR_Word ml_backend__ml_lookup_switch__LimitVar_14;
    MR_Word ml_backend__ml_lookup_switch__LimitVarDefn_15;
    MR_Word ml_backend__ml_lookup_switch__LimitVarLval_16;
    MR_Word ml_backend__ml_lookup_switch__Defns_17;
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVarRval_18;
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_19;
    MR_Word ml_backend__ml_lookup_switch__LimitAssignStmt_20;
    MR_Word ml_backend__ml_lookup_switch__LimitAssignStatement_21;
    MR_Word ml_backend__ml_lookup_switch__IncrLaterSlotVarStmt_22;
    MR_Word ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_23;
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_27_27;
    MR_Word ml_backend__ml_lookup_switch__V_28_28;
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_33_33;
    MR_Word ml_backend__ml_lookup_switch__V_34_34;
    MR_Word ml_backend__ml_lookup_switch__V_40_40;
    MR_Word ml_backend__ml_lookup_switch__V_44_44;
    MR_Word ml_backend__ml_lookup_switch__V_45_45;
    MR_Word ml_backend__ml_lookup_switch__V_47_47;
    MR_Word ml_backend__ml_lookup_switch__V_48_48;
    MR_Word ml_backend__ml_lookup_switch__V_50_50;
    MR_Word ml_backend__ml_lookup_switch__V_51_51;

    {
      ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_String) "num_later_solns", &ml_backend__ml_lookup_switch__NumLaterSolnsVar_8, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_24, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_27_27);
    }
    ml_backend__ml_lookup_switch__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_lookup_switch__NumLaterSolnsVar_8);
    {
      ml_backend__ml_lookup_switch__NumLaterSolnsVarDefn_9 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_lookup_switch__V_28_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_lookup_switch__MLDS_Context_5);
    }
    {
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_27_27, ml_backend__ml_lookup_switch__NumLaterSolnsVar_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), &ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_10);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_String) "later_slot", &ml_backend__ml_lookup_switch__LaterSlotVar_11, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_27_27, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_33_33);
    }
    ml_backend__ml_lookup_switch__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_lookup_switch__LaterSlotVar_11);
    {
      ml_backend__ml_lookup_switch__LaterSlotVarDefn_12 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_lookup_switch__V_34_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_lookup_switch__MLDS_Context_5);
    }
    {
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_33_33, ml_backend__ml_lookup_switch__LaterSlotVar_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), &ml_backend__ml_lookup_switch__LaterSlotVarLval_13);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_String) "limit", &ml_backend__ml_lookup_switch__LimitVar_14, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_33_33, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_25);
    }
    ml_backend__ml_lookup_switch__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_lookup_switch__LimitVar_14);
    {
      ml_backend__ml_lookup_switch__LimitVarDefn_15 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_lookup_switch__V_40_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_lookup_switch__MLDS_Context_5);
    }
    {
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(*ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_25, ml_backend__ml_lookup_switch__LimitVar_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), &ml_backend__ml_lookup_switch__LimitVarLval_16);
    }
    {
      ml_backend__ml_lookup_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_45_45, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitVarDefn_15));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_lookup_switch__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_44_44, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarDefn_12));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_44_44, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_45_45));
    }
    {
      ml_backend__ml_lookup_switch__Defns_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Defns_17, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsVarDefn_9));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__Defns_17, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_44_44));
    }
    {
      ml_backend__ml_lookup_switch__LaterSlotVarRval_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__LaterSlotVarRval_18, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarLval_13));
    }
    {
      ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_19, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_10));
    }
    {
      ml_backend__ml_lookup_switch__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_48_48, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarRval_18));
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_48_48, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_19));
    }
    {
      ml_backend__ml_lookup_switch__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_47_47, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitVarLval_16));
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_47_47, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_48_48));
    }
    {
      ml_backend__ml_lookup_switch__LimitAssignStmt_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__LimitAssignStmt_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__LimitAssignStmt_20, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_47_47));
    }
    {
      ml_backend__ml_lookup_switch__LimitAssignStatement_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LimitAssignStatement_21, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitAssignStmt_20));
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LimitAssignStatement_21, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_5));
    }
    {
      ml_backend__ml_lookup_switch__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_51_51, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarRval_18));
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__V_51_51, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[7])));
    }
    {
      ml_backend__ml_lookup_switch__V_50_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_50_50, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarLval_13));
      MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_50_50, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_51_51));
    }
    {
      ml_backend__ml_lookup_switch__IncrLaterSlotVarStmt_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__IncrLaterSlotVarStmt_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__IncrLaterSlotVarStmt_22, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_50_50));
    }
    {
      ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_23, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__IncrLaterSlotVarStmt_22));
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_23, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_5));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_lookup_switch__SeveralSolnLookupVars_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarLval_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitVarLval_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitAssignStatement_21));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_23));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_lookup_switch__Defns_17));
    }
  }
}

void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_several_soln_lookup_code_18_p_0(
  MR_Word ml_backend__ml_lookup_switch__Context_19,
  MR_Word ml_backend__ml_lookup_switch__MLDS_Context_20,
  MR_Word ml_backend__ml_lookup_switch__SlotVarRval_21,
  MR_Word ml_backend__ml_lookup_switch__OutVars_22,
  MR_Word ml_backend__ml_lookup_switch__OutTypes_23,
  MR_Word ml_backend__ml_lookup_switch__FirstSolnStructType_24,
  MR_Word ml_backend__ml_lookup_switch__LaterSolnStructType_25,
  MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsFieldId_26,
  MR_Word ml_backend__ml_lookup_switch__FirstLaterSolnRowFieldId_27,
  MR_Word ml_backend__ml_lookup_switch__FirstSolnOutFieldIds_28,
  MR_Word ml_backend__ml_lookup_switch__LaterSolnOutFieldIds_29,
  MR_Word ml_backend__ml_lookup_switch__FirstSolnVectorCommon_30,
  MR_Word ml_backend__ml_lookup_switch__LaterSolnVectorCommon_31,
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_32,
  MR_Word * ml_backend__ml_lookup_switch__MatchDefns_33,
  MR_Word * ml_backend__ml_lookup_switch__Statements_34,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_64,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_65)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Word ml_backend__ml_lookup_switch__TypeCtorInfo_95_95;
    MR_Word ml_backend__ml_lookup_switch__SeveralSolnLookupVars_36;
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_37;
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVarLval_38;
    MR_Word ml_backend__ml_lookup_switch__LimitVarLval_39;
    MR_Word ml_backend__ml_lookup_switch__LimitAssignStatement_40;
    MR_Word ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_41;
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_42;
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVarRval_43;
    MR_Word ml_backend__ml_lookup_switch__LimitVarRval_44;
    MR_Word ml_backend__ml_lookup_switch__MLDS_IntType_45;
    MR_Word ml_backend__ml_lookup_switch__NumLaterSolnsAssignStatement_46;
    MR_Word ml_backend__ml_lookup_switch__LaterSlotVarAssignStatement_47;
    MR_Word ml_backend__ml_lookup_switch__FirstSolnLookupStatements_48;
    MR_Word ml_backend__ml_lookup_switch__LaterSolnLookupStatements_49;
    MR_Word ml_backend__ml_lookup_switch__CallContStatement_50;
    MR_Word ml_backend__ml_lookup_switch__FirstLookupSucceedStmt_51;
    MR_Word ml_backend__ml_lookup_switch__FirstLookupSucceedStatement_52;
    MR_Word ml_backend__ml_lookup_switch__LaterLookupSucceedStmt_53;
    MR_Word ml_backend__ml_lookup_switch__LaterLookupSucceedStatement_54;
    MR_Word ml_backend__ml_lookup_switch__MoreSolnsLoopCond_55;
    MR_Word ml_backend__ml_lookup_switch__MoreSolnsLoopStmt_56;
    MR_Word ml_backend__ml_lookup_switch__MoreSolnsLoopStatement_57;
    MR_Word ml_backend__ml_lookup_switch__OneOrMoreSolnsStatements_58;
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_66_66;
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_67_67;
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_68_68;
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_69_69;
    MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_70_70;
    MR_Word ml_backend__ml_lookup_switch__V_73_73;
    MR_Word ml_backend__ml_lookup_switch__V_74_74;
    MR_Word ml_backend__ml_lookup_switch__V_77_77;
    MR_Word ml_backend__ml_lookup_switch__V_78_78;
    MR_Word ml_backend__ml_lookup_switch__V_79_79;
    MR_Word ml_backend__ml_lookup_switch__V_83_83;
    MR_Word ml_backend__ml_lookup_switch__V_84_84;
    MR_Word ml_backend__ml_lookup_switch__V_85_85;

    {
      ml_backend__ml_lookup_switch__make_several_soln_lookup_vars_4_p_0(ml_backend__ml_lookup_switch__MLDS_Context_20, &ml_backend__ml_lookup_switch__SeveralSolnLookupVars_36, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_64, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_66_66);
    }
    ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SeveralSolnLookupVars_36, (MR_Integer) 0)));
    ml_backend__ml_lookup_switch__LaterSlotVarLval_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SeveralSolnLookupVars_36, (MR_Integer) 1)));
    ml_backend__ml_lookup_switch__LimitVarLval_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SeveralSolnLookupVars_36, (MR_Integer) 2)));
    ml_backend__ml_lookup_switch__LimitAssignStatement_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SeveralSolnLookupVars_36, (MR_Integer) 3)));
    ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SeveralSolnLookupVars_36, (MR_Integer) 4)));
    *ml_backend__ml_lookup_switch__MatchDefns_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__SeveralSolnLookupVars_36, (MR_Integer) 5)));
    {
      ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_42, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_37));
    }
    {
      ml_backend__ml_lookup_switch__LaterSlotVarRval_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__LaterSlotVarRval_43, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarLval_38));
    }
    {
      ml_backend__ml_lookup_switch__LimitVarRval_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__LimitVarRval_44, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitVarLval_39));
    }
    ml_backend__ml_lookup_switch__MLDS_IntType_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
    {
      ml_backend__ml_code_util__ml_generate_field_assign_10_p_0(ml_backend__ml_lookup_switch__NumLaterSolnsVarLval_37, ml_backend__ml_lookup_switch__MLDS_IntType_45, ml_backend__ml_lookup_switch__NumLaterSolnsFieldId_26, ml_backend__ml_lookup_switch__FirstSolnVectorCommon_30, ml_backend__ml_lookup_switch__FirstSolnStructType_24, ml_backend__ml_lookup_switch__SlotVarRval_21, ml_backend__ml_lookup_switch__MLDS_Context_20, &ml_backend__ml_lookup_switch__NumLaterSolnsAssignStatement_46, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_66_66, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_67_67);
    }
    {
      ml_backend__ml_code_util__ml_generate_field_assign_10_p_0(ml_backend__ml_lookup_switch__LaterSlotVarLval_38, ml_backend__ml_lookup_switch__MLDS_IntType_45, ml_backend__ml_lookup_switch__FirstLaterSolnRowFieldId_27, ml_backend__ml_lookup_switch__FirstSolnVectorCommon_30, ml_backend__ml_lookup_switch__FirstSolnStructType_24, ml_backend__ml_lookup_switch__SlotVarRval_21, ml_backend__ml_lookup_switch__MLDS_Context_20, &ml_backend__ml_lookup_switch__LaterSlotVarAssignStatement_47, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_67_67, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_68_68);
    }
    {
      ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(ml_backend__ml_lookup_switch__OutVars_22, ml_backend__ml_lookup_switch__OutTypes_23, ml_backend__ml_lookup_switch__FirstSolnOutFieldIds_28, ml_backend__ml_lookup_switch__FirstSolnVectorCommon_30, ml_backend__ml_lookup_switch__FirstSolnStructType_24, ml_backend__ml_lookup_switch__SlotVarRval_21, ml_backend__ml_lookup_switch__MLDS_Context_20, &ml_backend__ml_lookup_switch__FirstSolnLookupStatements_48, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_68_68, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_69_69);
    }
    {
      ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(ml_backend__ml_lookup_switch__OutVars_22, ml_backend__ml_lookup_switch__OutTypes_23, ml_backend__ml_lookup_switch__LaterSolnOutFieldIds_29, ml_backend__ml_lookup_switch__LaterSolnVectorCommon_31, ml_backend__ml_lookup_switch__LaterSolnStructType_25, ml_backend__ml_lookup_switch__LaterSlotVarRval_43, ml_backend__ml_lookup_switch__MLDS_Context_20, &ml_backend__ml_lookup_switch__LaterSolnLookupStatements_49, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_69_69, &ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_70_70);
    }
    {
      ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(ml_backend__ml_lookup_switch__Context_19, &ml_backend__ml_lookup_switch__CallContStatement_50, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_70_70, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_65);
    }
    ml_backend__ml_lookup_switch__TypeCtorInfo_95_95 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
    {
      ml_backend__ml_lookup_switch__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_74_74, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__CallContStatement_50));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_lookup_switch__V_73_73 = mercury__list__f_43_43_2_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_95_95, ml_backend__ml_lookup_switch__FirstSolnLookupStatements_48, ml_backend__ml_lookup_switch__V_74_74);
    }
    {
      ml_backend__ml_lookup_switch__FirstLookupSucceedStmt_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__FirstLookupSucceedStmt_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__FirstLookupSucceedStmt_51, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_73_73));
    }
    {
      ml_backend__ml_lookup_switch__FirstLookupSucceedStatement_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__FirstLookupSucceedStatement_52, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstLookupSucceedStmt_51));
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__FirstLookupSucceedStatement_52, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_20));
    }
    {
      ml_backend__ml_lookup_switch__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_79_79, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__IncrLaterSlotVarStatement_41));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_lookup_switch__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_78_78, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__CallContStatement_50));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_78_78, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_79_79));
    }
    {
      ml_backend__ml_lookup_switch__V_77_77 = mercury__list__f_43_43_2_f_0(ml_backend__ml_lookup_switch__TypeCtorInfo_95_95, ml_backend__ml_lookup_switch__LaterSolnLookupStatements_49, ml_backend__ml_lookup_switch__V_78_78);
    }
    {
      ml_backend__ml_lookup_switch__LaterLookupSucceedStmt_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LaterLookupSucceedStmt_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LaterLookupSucceedStmt_53, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_77_77));
    }
    {
      ml_backend__ml_lookup_switch__LaterLookupSucceedStatement_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LaterLookupSucceedStatement_54, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterLookupSucceedStmt_53));
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LaterLookupSucceedStatement_54, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_20));
    }
    {
      ml_backend__ml_lookup_switch__MoreSolnsLoopCond_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__MoreSolnsLoopCond_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__MoreSolnsLoopCond_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23))));
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__MoreSolnsLoopCond_55, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarRval_43));
      MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__MoreSolnsLoopCond_55, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitVarRval_44));
    }
    {
      ml_backend__ml_lookup_switch__MoreSolnsLoopStmt_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__MoreSolnsLoopStmt_56, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__MoreSolnsLoopStmt_56, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MoreSolnsLoopCond_55));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__MoreSolnsLoopStmt_56, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterLookupSucceedStatement_54));
    }
    {
      ml_backend__ml_lookup_switch__MoreSolnsLoopStatement_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__MoreSolnsLoopStatement_57, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MoreSolnsLoopStmt_56));
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__MoreSolnsLoopStatement_57, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_20));
    }
    {
      ml_backend__ml_lookup_switch__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_85_85, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__MoreSolnsLoopStatement_57));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_lookup_switch__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_84_84, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LimitAssignStatement_40));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_84_84, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_85_85));
    }
    {
      ml_backend__ml_lookup_switch__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_83_83, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__LaterSlotVarAssignStatement_47));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_83_83, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_84_84));
    }
    {
      ml_backend__ml_lookup_switch__OneOrMoreSolnsStatements_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__OneOrMoreSolnsStatements_58, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__FirstLookupSucceedStatement_52));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__OneOrMoreSolnsStatements_58, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_83_83));
    }
    switch (ml_backend__ml_lookup_switch__NeedBitVecCheck_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_lookup_switch__Statements_34 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsAssignStatement_46));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__OneOrMoreSolnsStatements_58));
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStmt_59;
          MR_Word ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStatement_60;
          MR_Word ml_backend__ml_lookup_switch__AnySolnsCond_61;
          MR_Word ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStmt_62;
          MR_Word ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStatement_63;
          MR_Word ml_backend__ml_lookup_switch__V_93_93;

          {
            ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStmt_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStmt_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStmt_59, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__OneOrMoreSolnsStatements_58));
          }
          {
            ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStatement_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStatement_60, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStmt_59));
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStatement_60, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_20));
          }
          {
            ml_backend__ml_lookup_switch__AnySolnsCond_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__AnySolnsCond_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__AnySolnsCond_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26))));
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__AnySolnsCond_61, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsVarRval_42));
            MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__AnySolnsCond_61, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_lookup_switch_scalar_common_1[6])));
          }
          {
            ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStmt_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStmt_62, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__AnySolnsCond_61));
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStmt_62, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__OneOrMoreSolnsBlockStatement_60));
            MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStmt_62, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStatement_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStatement_63, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStmt_62));
            MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStatement_63, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__MLDS_Context_20));
          }
          {
            ml_backend__ml_lookup_switch__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_93_93, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__ZeroOrMoreSolnsStatement_63));
            MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_lookup_switch__Statements_34 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__NumLaterSolnsAssignStatement_46));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_93_93));
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_3(
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

    {
      ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_case_id_soln_consts_to_tag_soln_consts__224__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_lookup_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_2(
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

    {
      ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_gen_atomic_lookup_switch__281__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_lookup_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_1(
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

    {
      ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_case_id_soln_consts_to_tag_soln_consts__224__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_lookup_switch__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0(
  MR_Word ml_backend__ml_lookup_switch__SwitchVar_13,
  MR_Word ml_backend__ml_lookup_switch__TaggedCases_14,
  MR_Word ml_backend__ml_lookup_switch__LookupSwitchInfo_15,
  MR_Word ml_backend__ml_lookup_switch__CodeModel_16,
  MR_Word ml_backend__ml_lookup_switch__Context_17,
  MR_Integer ml_backend__ml_lookup_switch__StartVal_18,
  MR_Integer ml_backend__ml_lookup_switch__EndVal_19,
  MR_Word ml_backend__ml_lookup_switch__NeedBitVecCheck_20,
  MR_Word ml_backend__ml_lookup_switch__NeedRangeCheck_21,
  MR_Word * ml_backend__ml_lookup_switch__Statement_22,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_38,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_39)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Word ml_backend__ml_lookup_switch__CaseIdConstMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSwitchInfo_15, (MR_Integer) 0)));
    MR_Word ml_backend__ml_lookup_switch__OutVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSwitchInfo_15, (MR_Integer) 1)));
    MR_Word ml_backend__ml_lookup_switch__FieldTypes_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__LookupSwitchInfo_15, (MR_Integer) 2)));
    MR_Word ml_backend__ml_lookup_switch__SwitchVarLval_27;
    MR_Word ml_backend__ml_lookup_switch__SwitchVarRval_28;
    MR_Word ml_backend__ml_lookup_switch__IndexRval_29;

    {
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_38, ml_backend__ml_lookup_switch__SwitchVar_13, &ml_backend__ml_lookup_switch__SwitchVarLval_27);
    }
    {
      ml_backend__ml_lookup_switch__SwitchVarRval_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__SwitchVarRval_28, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__SwitchVarLval_27));
    }
    ml_backend__ml_lookup_switch__succeeded = (ml_backend__ml_lookup_switch__StartVal_18 == (MR_Integer) 0);
    if (ml_backend__ml_lookup_switch__succeeded)
      ml_backend__ml_lookup_switch__IndexRval_29 = ml_backend__ml_lookup_switch__SwitchVarRval_28;
    else
      {
        MR_Word ml_backend__ml_lookup_switch__StartRval_30;
        MR_Word ml_backend__ml_lookup_switch__V_40_40;

        {
          ml_backend__ml_lookup_switch__V_40_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_lookup_switch__V_40_40, 0) = ((MR_Box) (ml_backend__ml_lookup_switch__StartVal_18));
        }
        {
          ml_backend__ml_lookup_switch__StartRval_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__StartRval_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__StartRval_30, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__V_40_40));
        }
        {
          ml_backend__ml_lookup_switch__IndexRval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__IndexRval_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__IndexRval_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__IndexRval_29, 2) = ((MR_Box) (ml_backend__ml_lookup_switch__SwitchVarRval_28));
          MR_hl_field(MR_mktag(3), ml_backend__ml_lookup_switch__IndexRval_29, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__StartRval_30));
        }
      }
    if (((MR_tag((MR_Word) ml_backend__ml_lookup_switch__CaseIdConstMap_24)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_72 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[1];
        MR_Word ml_backend__ml_lookup_switch__CaseIdValueMap_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__CaseIdConstMap_24, (MR_Integer) 0)));
        MR_Word ml_backend__ml_lookup_switch__IntValueMap_32;
        MR_Word ml_backend__ml_lookup_switch__IntValues_33;
        MR_Word ml_backend__ml_lookup_switch__DepletedCaseIdMap_65;
        MR_Word ml_backend__ml_lookup_switch__V_66_66;
        MR_Word ml_backend__ml_lookup_switch__V_67_67;

        {
          ml_backend__ml_lookup_switch__V_66_66 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_lookup_switch__TypeInfo_for_V_72);
        }
        {
          ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho3_6_p_0(ml_backend__ml_lookup_switch__TaggedCases_14, ml_backend__ml_lookup_switch__CaseIdValueMap_31, &ml_backend__ml_lookup_switch__DepletedCaseIdMap_65, ml_backend__ml_lookup_switch__V_66_66, &ml_backend__ml_lookup_switch__IntValueMap_32);
        }
        {
          ml_backend__ml_lookup_switch__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_67_67, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_67_67, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_1));
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_67_67, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_for_V_72));
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_67_67, 4) = ((MR_Box) (ml_backend__ml_lookup_switch__DepletedCaseIdMap_65));
        }
        {
          mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_67_67, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_case_id_soln_consts_to_tag_soln_consts\'/4", (MR_String) "DepletedCaseIdMap not empty");
        }
        {
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[1], ml_backend__ml_lookup_switch__IntValueMap_32, &ml_backend__ml_lookup_switch__IntValues_33);
        }
        {
          ml_backend__ml_lookup_switch__ml_gen_simple_atomic_lookup_switch_13_p_0(ml_backend__ml_lookup_switch__IndexRval_29, ml_backend__ml_lookup_switch__OutVars_25, ml_backend__ml_lookup_switch__FieldTypes_26, ml_backend__ml_lookup_switch__IntValues_33, ml_backend__ml_lookup_switch__CodeModel_16, ml_backend__ml_lookup_switch__Context_17, ml_backend__ml_lookup_switch__StartVal_18, ml_backend__ml_lookup_switch__EndVal_19, ml_backend__ml_lookup_switch__NeedBitVecCheck_20, ml_backend__ml_lookup_switch__NeedRangeCheck_21, ml_backend__ml_lookup_switch__Statement_22, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_38, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_39);
        }
      }
    else
      {
        MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_86;
        MR_Word ml_backend__ml_lookup_switch__CaseIdSolnMap_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_lookup_switch__CaseIdConstMap_24, (MR_Integer) 0)));
        MR_Word ml_backend__ml_lookup_switch__IntSolnMap_36;
        MR_Word ml_backend__ml_lookup_switch__IntSolns_37;
        MR_Word ml_backend__ml_lookup_switch__V_42_42;
        MR_Word ml_backend__ml_lookup_switch__DepletedCaseIdMap_79;
        MR_Word ml_backend__ml_lookup_switch__V_80_80;
        MR_Word ml_backend__ml_lookup_switch__V_81_81;

        {
          ml_backend__ml_lookup_switch__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_42_42, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_42_42, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_2));
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_42_42, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__CodeModel_16));
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_42_42, 4) = ((MR_Box) ((MR_Integer) 2));
        }
        {
          mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_42_42, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_gen_atomic_lookup_switch\'/12", (MR_String) "CodeModel != model_non");
        }
        ml_backend__ml_lookup_switch__TypeInfo_for_V_86 = (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0];
        {
          ml_backend__ml_lookup_switch__V_80_80 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_lookup_switch__TypeInfo_for_V_86);
        }
        {
          ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop__ho4_6_p_0(ml_backend__ml_lookup_switch__TaggedCases_14, ml_backend__ml_lookup_switch__CaseIdSolnMap_34, &ml_backend__ml_lookup_switch__DepletedCaseIdMap_79, ml_backend__ml_lookup_switch__V_80_80, &ml_backend__ml_lookup_switch__IntSolnMap_36);
        }
        {
          ml_backend__ml_lookup_switch__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_81_81, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_81_81, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_gen_atomic_lookup_switch_12_p_0_3));
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_81_81, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_for_V_86));
          MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_81_81, 4) = ((MR_Box) (ml_backend__ml_lookup_switch__DepletedCaseIdMap_79));
        }
        {
          mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_81_81, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_case_id_soln_consts_to_tag_soln_consts\'/4", (MR_String) "DepletedCaseIdMap not empty");
        }
        {
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__ml_lookup_switch_scalar_common_1[0], ml_backend__ml_lookup_switch__IntSolnMap_36, &ml_backend__ml_lookup_switch__IntSolns_37);
        }
        {
          ml_backend__ml_lookup_switch__ml_gen_several_soln_atomic_lookup_switch_12_p_0(ml_backend__ml_lookup_switch__IndexRval_29, ml_backend__ml_lookup_switch__OutVars_25, ml_backend__ml_lookup_switch__FieldTypes_26, ml_backend__ml_lookup_switch__IntSolns_37, ml_backend__ml_lookup_switch__Context_17, ml_backend__ml_lookup_switch__StartVal_18, ml_backend__ml_lookup_switch__EndVal_19, ml_backend__ml_lookup_switch__NeedBitVecCheck_20, ml_backend__ml_lookup_switch__NeedRangeCheck_21, ml_backend__ml_lookup_switch__Statement_22, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_38, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_39);
        }
      }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_4_p_0_1(
  MR_Box ml_backend__ml_lookup_switch__closure_arg)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Box ml_backend__ml_lookup_switch__closure = ml_backend__ml_lookup_switch__closure_arg;

    {
      ml_backend__ml_lookup_switch__succeeded = ml_backend__ml_lookup_switch__IntroducedFrom__pred__ml_case_id_soln_consts_to_tag_soln_consts__224__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_lookup_switch__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_4_p_0(
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_T_15,
  MR_Word ml_backend__ml_lookup_switch__TypeInfo_for_V_16,
  MR_Word ml_backend__ml_lookup_switch__GetTag_5,
  MR_Word ml_backend__ml_lookup_switch__TaggedCases_6,
  MR_Word ml_backend__ml_lookup_switch__CaseIdMap_7,
  MR_Word * ml_backend__ml_lookup_switch__TagMap_8)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;
    MR_Word ml_backend__ml_lookup_switch__DepletedCaseIdMap_9;
    MR_Word ml_backend__ml_lookup_switch__V_10_10;
    MR_Word ml_backend__ml_lookup_switch__V_11_11;

    {
      ml_backend__ml_lookup_switch__V_10_10 = mercury__map__init_0_f_0(ml_backend__ml_lookup_switch__TypeInfo_for_T_15, ml_backend__ml_lookup_switch__TypeInfo_for_V_16);
    }
    {
      ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_loop_6_p_0(ml_backend__ml_lookup_switch__TypeInfo_for_T_15, ml_backend__ml_lookup_switch__TypeInfo_for_V_16, ml_backend__ml_lookup_switch__GetTag_5, ml_backend__ml_lookup_switch__TaggedCases_6, ml_backend__ml_lookup_switch__CaseIdMap_7, &ml_backend__ml_lookup_switch__DepletedCaseIdMap_9, ml_backend__ml_lookup_switch__V_10_10, ml_backend__ml_lookup_switch__TagMap_8);
    }
    {
      ml_backend__ml_lookup_switch__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_11_11, 0) = ((MR_Box) (&ml_backend__ml_lookup_switch_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_11_11, 1) = ((MR_Box) (ml_backend__ml_lookup_switch__ml_case_id_soln_consts_to_tag_soln_consts_4_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_11_11, 3) = ((MR_Box) (ml_backend__ml_lookup_switch__TypeInfo_for_V_16));
      MR_hl_field(MR_mktag(0), ml_backend__ml_lookup_switch__V_11_11, 4) = ((MR_Box) (ml_backend__ml_lookup_switch__DepletedCaseIdMap_9));
    }
    {
      mercury__require__expect_4_p_0(ml_backend__ml_lookup_switch__V_11_11, (MR_String) "ml_backend.ml_lookup_switch", (MR_String) "predicate \140ml_backend.ml_lookup_switch.ml_case_id_soln_consts_to_tag_soln_consts\'/4", (MR_String) "DepletedCaseIdMap not empty");
    }
  }
}

void MR_CALL 
ml_backend__ml_lookup_switch__ml_is_lookup_switch_7_p_0(
  MR_Word ml_backend__ml_lookup_switch__SwitchVar_8,
  MR_Word ml_backend__ml_lookup_switch__TaggedCases_9,
  MR_Word ml_backend__ml_lookup_switch__GoalInfo_10,
  MR_Word ml_backend__ml_lookup_switch__CodeModel_11,
  MR_Word * ml_backend__ml_lookup_switch__MaybeLookupSwitchInfo_12,
  MR_Word ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_27,
  MR_Word * ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_28)
{
  {
    MR_bool ml_backend__ml_lookup_switch__succeeded;

    {
      ml_backend__ml_lookup_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_105_115_95_108_111_111_107_117_112_95_115_119_105_116_99_104_95_95_91_52_93_95_48_7_p_0(ml_backend__ml_lookup_switch__SwitchVar_8, ml_backend__ml_lookup_switch__TaggedCases_9, ml_backend__ml_lookup_switch__GoalInfo_10, ml_backend__ml_lookup_switch__MaybeLookupSwitchInfo_12, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_0_27, ml_backend__ml_lookup_switch__STATE_VARIABLE_Info_28);
    }
  }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_lookup_switch. */
