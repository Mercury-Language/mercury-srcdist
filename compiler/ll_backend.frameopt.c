/*
** Automatically generated from `frameopt.m'
** by the Mercury compiler,
** version rotd-2018-11-10
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


// :- module ll_backend.frameopt.
// :- implementation.

/*
INIT mercury__ll_backend__frameopt__init
ENDINIT
*/

#include "ll_backend.frameopt.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
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
#include "ll_backend.layout.mih"
#include "ll_backend.livemap.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_debug.mih"
#include "ll_backend.opt_util.mih"
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



struct ll_backend__frameopt__can_clobber_succip_3_f_0_env_0_s {
  MR_bool ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__succeeded;
  MR_Word ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__Instrs_10;
  jmp_buf ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__commit_0;
  MR_Word ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__Instr_11;
  MR_Word ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__Uinstr_12;
  MR_Box ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__conv1_Instr_11;
};

struct ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_0_s {
  MR_Word ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Instrs_5;
  MR_bool ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__succeeded;
  jmp_buf ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__commit_0;
  MR_Word ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Instr_8;
  MR_Word ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Uinstr_9;
  MR_Box ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__conv0_Instr_8;
};


static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__frameopt__ll_backend__frameopt__pti_frame_block_info_2__pseudo_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__frameopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__pseudo_ll_backend__frameopt__pti_frame_block_info_2__pseudo_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__frameopt__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__frameopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__frameopt__type_ctor_info_block_needs_frame_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__frameopt__pair__ti_pair_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__frameopt__list__pti_list_1__plain_pair__ti_pair_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__frameopt__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__frameopt__ll_backend__frameopt__pti_block_type_2__pseudo_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__frameopt__pair__pti_pair_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__frameopt__type_ctor_info_block_needs_frame_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__frameopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_label_0;

static const MR_EnumFunctorDesc ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_block_needs_frame_0_0;

static const MR_EnumFunctorDesc ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_block_needs_frame_0_1;

static const MR_EnumFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__enum_value_ordered_block_needs_frame_0[2];

static const MR_EnumFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__enum_name_ordered_block_needs_frame_0[2];

static const MR_Integer ll_backend__frameopt__ll_backend__frameopt__functor_number_map_block_needs_frame_0[2];

static const MR_PseudoTypeInfo ll_backend__frameopt__ll_backend__frameopt__field_types_block_type_2_0[1];

static const MR_DuFunctorDesc ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_block_type_2_0;

static const MR_PseudoTypeInfo ll_backend__frameopt__ll_backend__frameopt__field_types_block_type_2_1[2];

static const MR_DuArgLocn ll_backend__frameopt__ll_backend__frameopt__field_locns_block_type_2_1[2];

static const MR_DuFunctorDesc ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_block_type_2_1;

static const MR_PseudoTypeInfo ll_backend__frameopt__ll_backend__frameopt__field_types_block_type_2_2[1];

static const MR_DuFunctorDesc ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_block_type_2_2;

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_block_type_2_0[1];

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_block_type_2_1[1];

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_block_type_2_2[1];

static const MR_DuPtagLayout ll_backend__frameopt__ll_backend__frameopt__du_ptag_ordered_block_type_2[3];

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_name_ordered_block_type_2[3];

static const MR_Integer ll_backend__frameopt__ll_backend__frameopt__functor_number_map_block_type_2[3];

static const MR_EnumFunctorDesc ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_can_transform_0_0;

static const MR_EnumFunctorDesc ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_can_transform_0_1;

static const MR_EnumFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__enum_value_ordered_can_transform_0[2];

static const MR_EnumFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__enum_name_ordered_can_transform_0[2];

static const MR_Integer ll_backend__frameopt__ll_backend__frameopt__functor_number_map_can_transform_0[2];

static const MR_PseudoTypeInfo ll_backend__frameopt__ll_backend__frameopt__field_types_det_entry_info_0_0[3];

static const MR_DuArgLocn ll_backend__frameopt__ll_backend__frameopt__field_locns_det_entry_info_0_0[3];

static const MR_DuFunctorDesc ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_det_entry_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_det_entry_info_0_0[1];

static const MR_DuPtagLayout ll_backend__frameopt__ll_backend__frameopt__du_ptag_ordered_det_entry_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_name_ordered_det_entry_info_0[1];

static const MR_Integer ll_backend__frameopt__ll_backend__frameopt__functor_number_map_det_entry_info_0[1];

static const MR_FA_TypeInfo_Struct1 ll_backend__frameopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_PseudoTypeInfo ll_backend__frameopt__ll_backend__frameopt__field_types_det_exit_info_0_0[3];

static const MR_DuFunctorDesc ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_det_exit_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_det_exit_info_0_0[1];

static const MR_DuPtagLayout ll_backend__frameopt__ll_backend__frameopt__du_ptag_ordered_det_exit_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_name_ordered_det_exit_info_0[1];

static const MR_Integer ll_backend__frameopt__ll_backend__frameopt__functor_number_map_det_exit_info_0[1];

static const MR_FA_TypeInfo_Struct2 ll_backend__frameopt__ll_backend__frameopt__ti_frame_block_info_2ll_backend__frameopt__type_ctor_info_det_entry_info_0ll_backend__frameopt__type_ctor_info_det_exit_info_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__frameopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__frameopt__ti_frame_block_info_2ll_backend__frameopt__type_ctor_info_det_entry_info_0ll_backend__frameopt__type_ctor_info_det_exit_info_0;

static const MR_Integer ll_backend__frameopt__ll_backend__frameopt__functor_number_map_exit_par_map_0[1];

static const MR_FA_TypeInfo_Struct2 ll_backend__frameopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_label_0;

static const MR_NotagFunctorDesc ll_backend__frameopt__ll_backend__frameopt__notag_functor_desc_exit_par_map_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__frameopt__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__frameopt__list__ti_list_1ll_backend__llds__type_ctor_info_label_0;

static const MR_PseudoTypeInfo ll_backend__frameopt__ll_backend__frameopt__field_types_frame_block_info_2_0[6];

static const MR_ConstString ll_backend__frameopt__ll_backend__frameopt__field_names_frame_block_info_2_0[6];

static const MR_DuFunctorDesc ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_frame_block_info_2_0;

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_frame_block_info_2_0[1];

static const MR_DuPtagLayout ll_backend__frameopt__ll_backend__frameopt__du_ptag_ordered_frame_block_info_2[1];

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_name_ordered_frame_block_info_2[1];

static const MR_Integer ll_backend__frameopt__ll_backend__frameopt__functor_number_map_frame_block_info_2[1];

static const MR_EnumFunctorDesc ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_maybe_dummy_0_0;

static const MR_EnumFunctorDesc ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_maybe_dummy_0_1;

static const MR_EnumFunctorDesc ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_maybe_dummy_0_2;

static const MR_EnumFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__enum_value_ordered_maybe_dummy_0[3];

static const MR_EnumFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__enum_name_ordered_maybe_dummy_0[3];

static const MR_Integer ll_backend__frameopt__ll_backend__frameopt__functor_number_map_maybe_dummy_0[3];

static const MR_PseudoTypeInfo ll_backend__frameopt__ll_backend__frameopt__field_types_nondet_entry_info_0_0[3];

static const MR_DuFunctorDesc ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_nondet_entry_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_nondet_entry_info_0_0[1];

static const MR_DuPtagLayout ll_backend__frameopt__ll_backend__frameopt__du_ptag_ordered_nondet_entry_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_name_ordered_nondet_entry_info_0[1];

static const MR_Integer ll_backend__frameopt__ll_backend__frameopt__functor_number_map_nondet_entry_info_0[1];

static const MR_PseudoTypeInfo ll_backend__frameopt__ll_backend__frameopt__field_types_nondet_exit_info_0_0[2];

static const MR_DuFunctorDesc ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_nondet_exit_info_0_0;

static const MR_PseudoTypeInfo ll_backend__frameopt__ll_backend__frameopt__field_types_nondet_exit_info_0_1[5];

static const MR_DuFunctorDesc ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_nondet_exit_info_0_1;

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_nondet_exit_info_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_nondet_exit_info_0_1[1];

static const MR_DuPtagLayout ll_backend__frameopt__ll_backend__frameopt__du_ptag_ordered_nondet_exit_info_0[2];

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_name_ordered_nondet_exit_info_0[2];

static const MR_Integer ll_backend__frameopt__ll_backend__frameopt__functor_number_map_nondet_exit_info_0[2];

static const MR_FA_TypeInfo_Struct2 ll_backend__frameopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__frameopt__type_ctor_info_block_needs_frame_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__frameopt__queue__ti_queue_1ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__frameopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_label_0;

static const MR_Integer ll_backend__frameopt__ll_backend__frameopt__functor_number_map_setup_par_map_0[1];

static const MR_NotagFunctorDesc ll_backend__frameopt__ll_backend__frameopt__notag_functor_desc_setup_par_map_0;

static const MR_ConstString ll_backend__frameopt__ll_backend__frameopt__type_class_id_var_names_block_entry_exit_2[2];

static const MR_TypeClassMethod ll_backend__frameopt__ll_backend__frameopt__type_class_id_method_ids_block_entry_exit_2[6];

static const MR_TypeClassId ll_backend__frameopt__ll_backend__frameopt__type_class_id_block_entry_exit_2;

static MR_bool MR_CALL 
ll_backend__frameopt__IntroducedFrom__pred__describe_block__2305__1_2_p_0(
  MR_Word UsesFrame_35,
  MR_Word HeadVar__2_77);

static MR_bool MR_CALL 
ll_backend__frameopt__IntroducedFrom__pred__describe_block__2319__1_2_p_0(
  MR_Word MaybeFallThrough_18,
  MR_Word HeadVar__2_68);

static MR_bool MR_CALL 
ll_backend__frameopt__IntroducedFrom__pred__describe_block__2245__1_2_p_0(
  MR_Word Label_11,
  MR_Word BlockLabel_14);

static MR_bool MR_CALL 
ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2103__1_2_p_0(
  MR_Word TypeClassInfo_for_block_entry_exit_153,
  MR_Word Type_43);

static MR_bool MR_CALL 
ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_111_114_100_105_110_97_114_121_95_98_108_111_99_107_95_95_91_49_44_32_50_93_95_48_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2062__1_2_p_0(
  MR_Word MaybeFallThrough_42,
  MR_Word HeadVar__2_78);

static MR_bool MR_CALL 
ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2059__1_2_p_0(
  MR_Word Label0_25,
  MR_Word Label0Copy_38);

static MR_bool MR_CALL 
ll_backend__frameopt__IntroducedFrom__pred__process_frame_delay__1858__1_2_p_0(
  MR_Word Label0_26,
  MR_Word Label0Copy_35);

static MR_bool MR_CALL 
ll_backend__frameopt__IntroducedFrom__pred__propagate_frame_requirement_to_successors__1724__1_2_p_0(
  MR_Word STATE_VARIABLE_AlreadyProcessed_38_38,
  MR_Word HeadVar__2_58);

static void MR_CALL 
ll_backend__frameopt__IntroducedFrom__pred__analyze_block__1255__1_4_p_0(
  MR_Word TypeClassInfo_for_block_entry_exit_103,
  MR_Word HeadVar__2_117,
  MR_Word HeadVar__3_118,
  MR_Word * HeadVar__4_119);

static MR_bool MR_CALL 
ll_backend__frameopt__IntroducedFrom__pred__build_frame_block_map__687__1_2_p_0(
  MR_Word NeedsFrame_69,
  MR_Word HeadVar__2_141);

static MR_String MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__late_setup_code_1_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static MR_bool MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_String MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__late_setup_code_1_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static MR_bool MR_CALL 
ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static MR_bool MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ll_backend__frameopt____Compare____setup_par_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____setup_par_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__frameopt____Compare____rev_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____rev_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__frameopt____Compare____prop_queue_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____prop_queue_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__frameopt____Compare____pred_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____pred_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__frameopt____Compare____pre_exit_dummy_label_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____pre_exit_dummy_label_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__frameopt____Compare____ord_needs_frame_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____ord_needs_frame_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__frameopt____Compare____nondet_exit_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____nondet_exit_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__frameopt____Compare____nondet_entry_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____nondet_entry_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__frameopt____Compare____maybe_dummy_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____maybe_dummy_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__frameopt____Compare____frame_block_map_2_0(
  MR_Word TypeInfo_for_En_6,
  MR_Word TypeInfo_for_Ex_7,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____frame_block_map_2_0(
  MR_Word TypeInfo_for_En_5,
  MR_Word TypeInfo_for_Ex_6,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__frameopt____Compare____frame_block_info_2_0(
  MR_Word TypeInfo_for_En_23,
  MR_Word TypeInfo_for_Ex_24,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____frame_block_info_2_0(
  MR_Word TypeInfo_for_En_17,
  MR_Word TypeInfo_for_Ex_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__frameopt____Compare____exit_par_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____exit_par_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__frameopt____Compare____det_frame_block_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____det_frame_block_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__frameopt____Compare____det_exit_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____det_exit_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__frameopt____Compare____det_entry_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____det_entry_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__frameopt____Compare____can_transform_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____can_transform_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__frameopt____Compare____block_type_2_0(
  MR_Word TypeInfo_for_EntryInfo_31,
  MR_Word TypeInfo_for_ExitInfo_32,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____block_type_2_0(
  MR_Word TypeInfo_for_EntryInfo_13,
  MR_Word TypeInfo_for_ExitInfo_14,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__frameopt____Compare____block_needs_frame_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____block_needs_frame_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__frameopt__describe_block_6_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__frameopt__describe_block_6_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__frameopt__describe_block_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__frameopt__describe_block_6_p_0(
  MR_Word TypeClassInfo_for_block_entry_exit_93,
  MR_Word BlockMap_7,
  MR_Word OrdNeedsFrame_8,
  MR_Word PredMap_9,
  MR_Word ProcLabel_10,
  MR_Word Label_11,
  MR_Word * Instr_12);

static MR_String MR_CALL 
ll_backend__frameopt__describe_exit_2_f_0(
  MR_Word TypeClassInfo_for_block_entry_exit_4,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2);

static MR_String MR_CALL 
ll_backend__frameopt__describe_entry_1_f_0(
  MR_Word TypeClassInfo_for_block_entry_exit_3,
  MR_Box HeadVar__1_1);

static MR_bool MR_CALL 
ll_backend__frameopt__no_disagreement_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Key_2,
  MR_Word Value_3);

static MR_bool MR_CALL 
ll_backend__frameopt__label_needs_frame_2_p_0(
  MR_Word OrdNeedsFrame_3,
  MR_Word Label_4);

static MR_bool MR_CALL 
ll_backend__frameopt__all_successors_need_frame_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__frameopt__all_successors_need_frame_3_p_0(
  MR_Word TypeInfo_for_En_12,
  MR_Word TypeInfo_for_Ex_13,
  MR_Word BlockMap_4,
  MR_Word OrdNeedsFrame_5,
  MR_Word Label_6);

static void MR_CALL 
ll_backend__frameopt__record_frame_need_6_p_0(
  MR_Word TypeInfo_for_En_30,
  MR_Word TypeInfo_for_Ex_31,
  MR_Word BlockMap_7,
  MR_Word Label_8,
  MR_Word STATE_VARIABLE_OrdNeedsFrame_0_17,
  MR_Word * STATE_VARIABLE_OrdNeedsFrame_18,
  MR_Word STATE_VARIABLE_CanTransform_0_19,
  MR_Word * STATE_VARIABLE_CanTransform_20);

static MR_bool MR_CALL 
ll_backend__frameopt__key_block_needs_frame_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Label_3);

static void MR_CALL 
ll_backend__frameopt__mark_redoip_label_3_p_0(
  MR_Word TypeInfo_for_En_33,
  MR_Word TypeInfo_for_Ex_34,
  MR_Word Label_4,
  MR_Word STATE_VARIABLE_BlockMap_0_14,
  MR_Word * STATE_VARIABLE_BlockMap_15);

static MR_bool MR_CALL 
ll_backend__frameopt__local_label_2_p_0(
  MR_Word ProcLabel_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__frameopt__nondetstack_teardown_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Extra_12,
  MR_Word * SuccipRestore_13,
  MR_Word * Maxfr_14,
  MR_Word * Curfr_15,
  MR_Word * Livevals_16,
  MR_Word * Goto_17,
  MR_Word * GotoTarget_18,
  MR_Word * Remain_19);

static MR_bool MR_CALL 
ll_backend__frameopt__nondetstack_teardown_2_14_p_0(
  MR_Word Instrs0_15,
  MR_Word STATE_VARIABLE_Extra_0_32,
  MR_Word * STATE_VARIABLE_Extra_33,
  MR_Word STATE_VARIABLE_SuccipRestore_0_34,
  MR_Word * STATE_VARIABLE_SuccipRestore_35,
  MR_Word STATE_VARIABLE_Maxfr_0_36,
  MR_Word * STATE_VARIABLE_Maxfr_37,
  MR_Word STATE_VARIABLE_Curfr_0_38,
  MR_Word * STATE_VARIABLE_Curfr_39,
  MR_Word STATE_VARIABLE_Livevals_0_40,
  MR_Word * STATE_VARIABLE_Livevals_41,
  MR_Word * Goto_21,
  MR_Word * GotoTarget_22,
  MR_Word * Remain_23);

static MR_bool MR_CALL 
ll_backend__frameopt__detstack_teardown_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer FrameSize_11,
  MR_Word * Extra_12,
  MR_Word * SuccipRestore_13,
  MR_Word * Decrsp_14,
  MR_Word * Livevals_15,
  MR_Word * Goto_16,
  MR_Word * Remain_17);

static MR_bool MR_CALL 
ll_backend__frameopt__detstack_teardown_2_12_p_0(
  MR_Word Instrs0_13,
  MR_Integer FrameSize_14,
  MR_Word STATE_VARIABLE_Extra_0_31,
  MR_Word * STATE_VARIABLE_Extra_32,
  MR_Word STATE_VARIABLE_SuccipRestore_0_33,
  MR_Word * STATE_VARIABLE_SuccipRestore_34,
  MR_Word STATE_VARIABLE_Decrsp_0_35,
  MR_Word * STATE_VARIABLE_Decrsp_36,
  MR_Word STATE_VARIABLE_Livevals_0_37,
  MR_Word * STATE_VARIABLE_Livevals_38,
  MR_Word * Goto_19,
  MR_Word * Remain_20);

static void MR_CALL 
ll_backend__frameopt__keep_nondet_frame_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word ProcLabel_3,
  MR_Word KeepFrameLabel_4,
  MR_Word PrevInstr_5,
  MR_Word SuccMap_6,
  MR_Word LayoutLabels_7,
  MR_Word STATE_VARIABLE_Changed_0_8,
  MR_Word * STATE_VARIABLE_Changed_9);

static void MR_CALL 
ll_backend__frameopt__find_succeed_labels_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SuccMap_0_2,
  MR_Word * STATE_VARIABLE_SuccMap_3);

static void MR_CALL 
ll_backend__frameopt__delay_frame_transform_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
ll_backend__frameopt__delay_frame_transform_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__frameopt__delay_frame_transform_13_p_0(
  MR_Word TypeClassInfo_for_block_entry_exit_68,
  MR_Word STATE_VARIABLE_LabelSeq_0_34,
  MR_Word * STATE_VARIABLE_LabelSeq_35,
  MR_Box EntryInfo_15,
  MR_Word ProcLabel_16,
  MR_Word PredMap_17,
  MR_Word STATE_VARIABLE_C_0_36,
  MR_Word * STATE_VARIABLE_C_37,
  MR_Word STATE_VARIABLE_BlockMap_0_38,
  MR_Word * STATE_VARIABLE_BlockMap_39,
  MR_Word AddComments_20,
  MR_Word * TransformComments_21,
  MR_Word * DescComments_22,
  MR_Word * CanTransform_23);

static MR_bool MR_CALL 
ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_p_0(
  MR_Word TypeClassInfo_for_block_entry_exit_153,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Box EntryInfo_3,
  MR_Word ProcLabel_4,
  MR_Word STATE_VARIABLE_C_0_5,
  MR_Word * STATE_VARIABLE_C_6,
  MR_Word OrdNeedsFrame_7,
  MR_Word SetupParMap_8,
  MR_Word ExitParMap_9,
  MR_Word STATE_VARIABLE_BlockMap_0_11,
  MR_Word * STATE_VARIABLE_BlockMap_12);

static MR_Word MR_CALL 
ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_118_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_44_32_50_93_95_48_2_f_0(
  MR_Word OrdNeedsFrame_4,
  MR_Word BlockInfo_5);

static MR_Word MR_CALL 
ll_backend__frameopt__non_teardown_exit_code_1_f_0(
  MR_Word TypeClassInfo_for_block_entry_exit_3,
  MR_Box HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__frameopt__late_setup_code_1_f_0(
  MR_Word TypeClassInfo_for_block_entry_exit_3,
  MR_Box HeadVar__1_1);

static MR_bool MR_CALL 
ll_backend__frameopt__search_exit_par_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Label_5,
  MR_Word * ParallelLabel_6);

static MR_bool MR_CALL 
ll_backend__frameopt__search_setup_par_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Label_5,
  MR_Word * ParallelLabel_6);

static MR_bool MR_CALL 
ll_backend__frameopt__process_frame_delay_11_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__frameopt__transform_nostack_ordinary_block_13_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__frameopt__process_frame_delay_11_p_0(
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88,
  MR_Word tscc_proc_1_input_2_HeadVar__1_1,
  MR_Word tscc_proc_1_input_3_OrdNeedsFrame_2,
  MR_Word tscc_proc_1_input_4_ProcLabel_3,
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_C_0_4,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_C_5,
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_BlockMap_7,
  MR_Word tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8,
  MR_Word * tscc_output_ptr_3_STATE_VARIABLE_SetupParMap_9,
  MR_Word tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10,
  MR_Word * tscc_output_ptr_4_STATE_VARIABLE_ExitParMap_11);

static void MR_CALL 
ll_backend__frameopt__transform_nostack_ordinary_block_13_p_0(
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_block_entry_exit_72,
  MR_Word tscc_proc_2_input_2_Label0_14,
  MR_Word tscc_proc_2_input_3_Labels0_15,
  MR_Word tscc_proc_2_input_4_BlockInfo0_16,
  MR_Word tscc_proc_2_input_5_OrdNeedsFrame_17,
  MR_Word tscc_proc_2_input_6_ProcLabel_18,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_C_0_42,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_C_5,
  MR_Word tscc_proc_2_input_8_STATE_VARIABLE_BlockMap_0_44,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_BlockMap_7,
  MR_Word tscc_proc_2_input_9_STATE_VARIABLE_SetupParMap_0_46,
  MR_Word * tscc_output_ptr_3_STATE_VARIABLE_SetupParMap_9,
  MR_Word tscc_proc_2_input_10_STATE_VARIABLE_ExitParMap_0_48,
  MR_Word * tscc_output_ptr_4_STATE_VARIABLE_ExitParMap_11);

static void MR_CALL 
ll_backend__frameopt__mark_parallels_for_nostack_successors_12_p_0(
  MR_Word TypeInfo_for_En_49,
  MR_Word TypeInfo_for_Ex_50,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word OrdNeedsFrame_4,
  MR_Word BlockMap_5,
  MR_Word ProcLabel_6,
  MR_Word STATE_VARIABLE_C_0_7,
  MR_Word * STATE_VARIABLE_C_8,
  MR_Word STATE_VARIABLE_SetupParMap_0_9,
  MR_Word * STATE_VARIABLE_SetupParMap_10,
  MR_Word STATE_VARIABLE_ExitParMap_0_11,
  MR_Word * STATE_VARIABLE_ExitParMap_12);

static void MR_CALL 
ll_backend__frameopt__mark_parallel_for_nostack_successor_11_p_0(
  MR_Word TypeInfo_for_En_44,
  MR_Word TypeInfo_for_Ex_45,
  MR_Word Label0_12,
  MR_Word * Label_13,
  MR_Word OrdNeedsFrame_14,
  MR_Word BlockMap_15,
  MR_Word ProcLabel_16,
  MR_Word STATE_VARIABLE_C_0_27,
  MR_Word * STATE_VARIABLE_C_28,
  MR_Word STATE_VARIABLE_SetupParMap_0_29,
  MR_Word * STATE_VARIABLE_SetupParMap_30,
  MR_Word STATE_VARIABLE_ExitParMap_0_31,
  MR_Word * STATE_VARIABLE_ExitParMap_32);

static void MR_CALL 
ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_p_0(
  MR_Word TypeInfo_for_En_41,
  MR_Word TypeInfo_for_Ex_42,
  MR_Word STATE_VARIABLE_Queue_0_20,
  MR_Word BlockMap_11,
  MR_Word RevMap_12,
  MR_Word STATE_VARIABLE_OrdNeedsFrame_0_21,
  MR_Word * STATE_VARIABLE_OrdNeedsFrame_22,
  MR_Integer STATE_VARIABLE_PropagationStepsLeft_0_23,
  MR_Integer * STATE_VARIABLE_PropagationStepsLeft_24,
  MR_Word STATE_VARIABLE_CanTransform_0_25,
  MR_Word * STATE_VARIABLE_CanTransform_26);

static MR_bool MR_CALL 
ll_backend__frameopt__propagate_frame_requirement_to_successors_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__frameopt__propagate_frame_requirement_to_successors_9_p_0(
  MR_Word TypeInfo_for_En_52,
  MR_Word TypeInfo_for_Ex_53,
  MR_Word STATE_VARIABLE_Queue_0_25,
  MR_Word BlockMap_11,
  MR_Word STATE_VARIABLE_OrdNeedsFrame_0_26,
  MR_Word * STATE_VARIABLE_OrdNeedsFrame_27,
  MR_Word STATE_VARIABLE_AlreadyProcessed_0_28,
  MR_Integer STATE_VARIABLE_PropagationStepsLeft_0_29,
  MR_Integer * STATE_VARIABLE_PropagationStepsLeft_30,
  MR_Word STATE_VARIABLE_CanTransform_0_31,
  MR_Word * STATE_VARIABLE_CanTransform_32);

static void MR_CALL 
ll_backend__frameopt__delay_frame_init_8_p_0(
  MR_Word TypeInfo_for_En_52,
  MR_Word TypeInfo_for_Ex_53,
  MR_Word HeadVar__1_1,
  MR_Word BlockMap_2,
  MR_Word STATE_VARIABLE_RevMap_0_3,
  MR_Word * STATE_VARIABLE_RevMap_4,
  MR_Word STATE_VARIABLE_Queue_0_5,
  MR_Word * STATE_VARIABLE_Queue_6,
  MR_Word STATE_VARIABLE_OrdNeedsFrame_0_7,
  MR_Word * STATE_VARIABLE_OrdNeedsFrame_8);

static void MR_CALL 
ll_backend__frameopt__rev_map_side_labels_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevMap_0_3,
  MR_Word * STATE_VARIABLE_RevMap_4);

static MR_bool MR_CALL 
ll_backend__frameopt__can_delay_frame_2_p_0(
  MR_Word TypeInfo_for_En_15,
  MR_Word TypeInfo_for_Ex_16,
  MR_Word HeadVar__1_1,
  MR_Word BlockMap_2);

static void MR_CALL 
ll_backend__frameopt__keep_frame_transform_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word FirstLabel_2,
  MR_Word SecondLabel_3,
  MR_Word CanClobberSuccip_4,
  MR_Word STATE_VARIABLE_BlockMap_0_5,
  MR_Word * STATE_VARIABLE_BlockMap_6);

static void MR_CALL 
ll_backend__frameopt__can_clobber_succip_2_f_0_1(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__frameopt__can_clobber_succip_2_f_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__frameopt__can_clobber_succip_2_f_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__frameopt__can_clobber_succip_2_f_0_4(
  void * env_ptr_arg);

static MR_Word MR_CALL 
ll_backend__frameopt__can_clobber_succip_2_f_0(
  MR_Word TypeInfo_35_35,
  MR_Word TypeInfo_36_36,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__frameopt__analyze_block_map_5_p_0(
  MR_Word TypeClassInfo_for_block_entry_exit_32,
  MR_Word LabelSeq_6,
  MR_Word PreExitDummyLabelMap_7,
  MR_Word STATE_VARIABLE_BlockMap_0_23,
  MR_Word * STATE_VARIABLE_BlockMap_24,
  MR_Word * KeepFrameData_9);

static void MR_CALL 
ll_backend__frameopt__analyze_block_map_2_10_p_0(
  MR_Word TypeClassInfo_for_block_entry_exit_43,
  MR_Word HeadVar__1_1,
  MR_Word FirstLabel_2,
  MR_Word ProcLabel_3,
  MR_Word PreExitDummyLabelMap_4,
  MR_Word STATE_VARIABLE_BlockMap_0_5,
  MR_Word * STATE_VARIABLE_BlockMap_6,
  MR_Word STATE_VARIABLE_AnyBlockNeedsFrame_0_7,
  MR_Word * STATE_VARIABLE_AnyBlockNeedsFrame_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10);

static void MR_CALL 
ll_backend__frameopt__analyze_block_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__frameopt__analyze_block_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__frameopt__analyze_block_11_p_0(
  MR_Word TypeClassInfo_for_block_entry_exit_103,
  MR_Word Label_12,
  MR_Word FollowingLabels_13,
  MR_Word FirstLabel_14,
  MR_Word ProcLabel_15,
  MR_Word PreExitDummyLabelMap_16,
  MR_Word STATE_VARIABLE_BlockMap_0_66,
  MR_Word * STATE_VARIABLE_BlockMap_67,
  MR_Word STATE_VARIABLE_AnyBlockNeedsFrame_0_68,
  MR_Word * STATE_VARIABLE_AnyBlockNeedsFrame_69,
  MR_Word STATE_VARIABLE_JumpToStart_0_70,
  MR_Word * STATE_VARIABLE_JumpToStart_71);

static void MR_CALL 
ll_backend__frameopt__find_redoip_labels_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ProcLabel_2,
  MR_Word STATE_VARIABLE_RedoipLabels_0_3,
  MR_Word * STATE_VARIABLE_RedoipLabels_4);

static MR_bool MR_CALL 
ll_backend__frameopt__matching_label_ref_2_p_0(
  MR_Word FirstLabel_3,
  MR_Word GotoLabel_4);

static MR_bool MR_CALL 
ll_backend__frameopt__detect_det_entry_4_p_0(
  MR_Word Instrs0_5,
  MR_Word * Setup_6,
  MR_Word * HeadVar__3_3,
  MR_Word * EntryInfo_9);

static MR_bool MR_CALL 
ll_backend__frameopt__detstack_setup_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer FrameSize_9,
  MR_Word * Setup_10,
  MR_Word STATE_VARIABLE_Others_0_18,
  MR_Word * STATE_VARIABLE_Others_19,
  MR_Word * Remain_12);

static MR_bool MR_CALL 
ll_backend__frameopt__build_frame_block_map_14_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__frameopt__build_frame_block_map_14_p_0(
  MR_Word TypeClassInfo_for_block_entry_exit_187,
  MR_Word HeadVar__1_1,
  MR_Box EntryInfo_2,
  MR_Word * HeadVar__3_3,
  MR_Word MaybePrevLabel_4,
  MR_Word FallInto_5,
  MR_Word ProcLabel_6,
  MR_Word STATE_VARIABLE_BlockMap_0_7,
  MR_Word * STATE_VARIABLE_BlockMap_8,
  MR_Word STATE_VARIABLE_PredMap_0_9,
  MR_Word * STATE_VARIABLE_PredMap_10,
  MR_Word STATE_VARIABLE_C_0_11,
  MR_Word * STATE_VARIABLE_C_12,
  MR_Word STATE_VARIABLE_PreExitDummyLabelMap_0_13,
  MR_Word * STATE_VARIABLE_PreExitDummyLabelMap_14);

static void MR_CALL 
ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_p_0(
  MR_Word Instrs_5,
  MR_Word * NeedsFrame_6);

static MR_bool MR_CALL 
ll_backend__frameopt__detect_exit_6_p_0(
  MR_Word TypeClassInfo_for_block_entry_exit_7,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Box * HeadVar__6_6);

static MR_bool MR_CALL 
ll_backend__frameopt__detect_entry_4_p_0(
  MR_Word TypeClassInfo_for_block_entry_exit_5,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
ll_backend__frameopt__flatten_block_seq_3_p_0(
  MR_Word TypeInfo_for_En_24,
  MR_Word TypeInfo_for_Ex_25,
  MR_Word HeadVar__1_1,
  MR_Word BlockMap_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__frameopt__divide_into_basic_blocks_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ProcLabel_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_C_0_4,
  MR_Word * STATE_VARIABLE_C_5);

static void MR_CALL 
ll_backend__frameopt__maybe_add_comments_5_p_0(
  MR_Word Comments_6,
  MR_Word DescComments_7,
  MR_Word Instrs0_8,
  MR_Word * Instrs_9,
  MR_Word * Mod_10);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____block_needs_frame_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__frameopt____Compare____block_needs_frame_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____block_type_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
ll_backend__frameopt____Compare____block_type_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____can_transform_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__frameopt____Compare____can_transform_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____det_entry_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__frameopt____Compare____det_entry_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____det_exit_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__frameopt____Compare____det_exit_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____det_frame_block_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__frameopt____Compare____det_frame_block_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____exit_par_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__frameopt____Compare____exit_par_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____frame_block_info_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
ll_backend__frameopt____Compare____frame_block_info_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____frame_block_map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
ll_backend__frameopt____Compare____frame_block_map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____maybe_dummy_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__frameopt____Compare____maybe_dummy_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____nondet_entry_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__frameopt____Compare____nondet_entry_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____nondet_exit_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__frameopt____Compare____nondet_exit_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____ord_needs_frame_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__frameopt____Compare____ord_needs_frame_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____pre_exit_dummy_label_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__frameopt____Compare____pre_exit_dummy_label_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____pred_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__frameopt____Compare____pred_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____prop_queue_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__frameopt____Compare____prop_queue_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____rev_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__frameopt____Compare____rev_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____setup_par_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__frameopt____Compare____setup_par_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_Box MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__late_setup_code_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_Box MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__late_setup_code_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);


static /* final */ const MR_Box ll_backend__frameopt_scalar_common_1[10][3];

static /* final */ const MR_Box ll_backend__frameopt_scalar_common_2[14][2];

static /* final */ const MR_Box ll_backend__frameopt_scalar_common_3[8][1];

static /* final */ const MR_Box ll_backend__frameopt_scalar_common_4[8][5];

static /* final */ const MR_Integer ll_backend__frameopt_scalar_common_5[2][3];

static /* final */ const MR_Box ll_backend__frameopt_scalar_common_6[1][7];

static /* final */ const MR_Box ll_backend__frameopt_scalar_common_7[1][8];

static /* final */ const MR_Box ll_backend__frameopt_scalar_common_8[1][11];

static /* final */ const MR_Box ll_backend__frameopt_scalar_common_9[1][6];

static /* final */ const MR_Box ll_backend__frameopt_scalar_common_10[1][10];




static /* final */ const MR_Box ll_backend__frameopt_scalar_common_1[10][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2)),
    ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_det_entry_info_0)),
    ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_det_exit_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_ll_backend__frameopt__block_entry_exit__arity2__ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0__)),
    ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_det_entry_info_0)),
    ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_det_exit_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2)),
    ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_nondet_entry_info_0)),
    ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_nondet_exit_info_0))
  },
  /* row 3 */
  {
    ((MR_Box) (base_typeclass_info_ll_backend__frameopt__block_entry_exit__arity2__ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0__)),
    ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_nondet_entry_info_0)),
    ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_nondet_exit_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__frameopt_scalar_common_1[0]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__frameopt_scalar_common_2[1]))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__frameopt_scalar_common_4[6])),
    ((MR_Box) (ll_backend__frameopt__delay_frame_transform_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__frameopt_scalar_common_2[14][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__queue__queue__type_ctor_info_queue_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__frameopt_scalar_common_3[0]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__frameopt_scalar_common_2[4])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__frameopt_scalar_common_3[1]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__frameopt_scalar_common_2[6])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__frameopt_scalar_common_2[8]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 10 */
  {
    ((MR_Box) (&ll_backend__frameopt_scalar_common_2[9])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__frameopt_scalar_common_3[5]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 12 */
  {
    ((MR_Box) (&ll_backend__frameopt_scalar_common_2[11])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Unsigned) 6U)),
    ((MR_Box) (&ll_backend__frameopt_scalar_common_3[6]))
  },
};

static /* final */ const MR_Box ll_backend__frameopt_scalar_common_3[8][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "could not delay frame creation"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "delaying stack frame"))
  },
  /* row 2 */
  {
    (MR_Box) (((((MR_Unsigned) 1U << 2)) | (MR_Unsigned) 1U))
  },
  /* row 3 */
  {
    (MR_Box) (((MR_Unsigned) 0U << 2))
  },
  /* row 4 */
  {
    (MR_Box) (((MR_Unsigned) 1U << 2))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "keeping stack frame"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ll_backend__frameopt_scalar_common_4[8][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0)),
    ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__frameopt__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__frameopt__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__frameopt__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (&ll_backend__frameopt_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__pti_block_type_2__pseudo_1__pseudo_2))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__frameopt__pair__pti_pair_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__frameopt__type_ctor_info_block_needs_frame_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__frameopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__frameopt__type_ctor_info_block_needs_frame_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
};

static /* final */ const MR_Integer ll_backend__frameopt_scalar_common_5[2][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67631,
    (MR_Integer) 67663
  },
  /* row 1 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};

static /* final */ const MR_Box ll_backend__frameopt_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&ll_backend__frameopt_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__frameopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__pseudo_ll_backend__frameopt__pti_frame_block_info_2__pseudo_1__pseudo_2)),
    ((MR_Box) (&ll_backend__frameopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__pseudo_ll_backend__frameopt__pti_frame_block_info_2__pseudo_1__pseudo_2))
  },
};

static /* final */ const MR_Box ll_backend__frameopt_scalar_common_7[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&ll_backend__frameopt_scalar_common_5[1])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&ll_backend__frameopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__pseudo_ll_backend__frameopt__pti_frame_block_info_2__pseudo_1__pseudo_2)),
    ((MR_Box) (&ll_backend__frameopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__frameopt__type_ctor_info_block_needs_frame_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
};

static /* final */ const MR_Box ll_backend__frameopt_scalar_common_8[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&ll_backend__frameopt_scalar_common_5[1])),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&ll_backend__frameopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__pseudo_ll_backend__frameopt__pti_frame_block_info_2__pseudo_1__pseudo_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__frameopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__frameopt__type_ctor_info_block_needs_frame_0)),
    ((MR_Box) (&ll_backend__frameopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__frameopt__type_ctor_info_block_needs_frame_0)),
    ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_can_transform_0)),
    ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_can_transform_0))
  },
};

static /* final */ const MR_Box ll_backend__frameopt_scalar_common_9[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__frameopt__list__pti_list_1__plain_pair__ti_pair_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
};

static /* final */ const MR_Box ll_backend__frameopt_scalar_common_10[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&ll_backend__frameopt_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&ll_backend__frameopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__pseudo_ll_backend__frameopt__pti_frame_block_info_2__pseudo_1__pseudo_2)),
    ((MR_Box) (&ll_backend__frameopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__frameopt__type_ctor_info_block_needs_frame_0)),
    ((MR_Box) (&ll_backend__frameopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__frameopt__ll_backend__frameopt__pti_frame_block_info_2__pseudo_1__pseudo_2 = {
  &ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__frameopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__pseudo_ll_backend__frameopt__pti_frame_block_info_2__pseudo_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_PseudoTypeInfo) (&ll_backend__frameopt__ll_backend__frameopt__pti_frame_block_info_2__pseudo_1__pseudo_2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__frameopt__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__frameopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__frameopt__type_ctor_info_block_needs_frame_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_PseudoTypeInfo) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__frameopt__pair__ti_pair_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__frameopt__list__pti_list_1__plain_pair__ti_pair_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__frameopt__pair__ti_pair_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__frameopt__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__frameopt__ll_backend__frameopt__pti_block_type_2__pseudo_1__pseudo_2 = {
  &ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_type_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__frameopt__pair__pti_pair_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__frameopt__type_ctor_info_block_needs_frame_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_PseudoTypeInfo) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__frameopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_EnumFunctorDesc ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_block_needs_frame_0_0 = {
  (MR_String) "block_needs_frame",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_block_needs_frame_0_1 = {
  (MR_String) "block_doesnt_need_frame",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__enum_value_ordered_block_needs_frame_0[2] = {
  &ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_block_needs_frame_0_0,
  &ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_block_needs_frame_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__enum_name_ordered_block_needs_frame_0[2] = {
  &ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_block_needs_frame_0_1,
  &ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_block_needs_frame_0_0
};

static const MR_Integer ll_backend__frameopt__ll_backend__frameopt__functor_number_map_block_needs_frame_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__frameopt____Unify____block_needs_frame_0_0_10001)),
  ((MR_Box) (ll_backend__frameopt____Compare____block_needs_frame_0_0_10001)),
  (MR_String) "ll_backend.frameopt",
  (MR_String) "block_needs_frame",
  {     ll_backend__frameopt__ll_backend__frameopt__enum_name_ordered_block_needs_frame_0 },
  {     ll_backend__frameopt__ll_backend__frameopt__enum_value_ordered_block_needs_frame_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__frameopt__ll_backend__frameopt__functor_number_map_block_needs_frame_0
};

static const MR_PseudoTypeInfo ll_backend__frameopt__ll_backend__frameopt__field_types_block_type_2_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_block_type_2_0 = {
  (MR_String) "entry_block",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__frameopt__ll_backend__frameopt__field_types_block_type_2_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__frameopt__ll_backend__frameopt__field_types_block_type_2_1[2] = {
  (MR_PseudoTypeInfo) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0),
  (MR_PseudoTypeInfo) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_maybe_dummy_0)
};

static const MR_DuArgLocn ll_backend__frameopt__ll_backend__frameopt__field_locns_block_type_2_1[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_block_type_2_1 = {
  (MR_String) "ordinary_block",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__frameopt__ll_backend__frameopt__field_types_block_type_2_1,
  NULL,
  ll_backend__frameopt__ll_backend__frameopt__field_locns_block_type_2_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__frameopt__ll_backend__frameopt__field_types_block_type_2_2[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 2)
};

static const MR_DuFunctorDesc ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_block_type_2_2 = {
  (MR_String) "exit_block",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  ll_backend__frameopt__ll_backend__frameopt__field_types_block_type_2_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_block_type_2_0[1] = {
  &ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_block_type_2_0
};

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_block_type_2_1[1] = {
  &ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_block_type_2_1
};

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_block_type_2_2[1] = {
  &ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_block_type_2_2
};

static const MR_DuPtagLayout ll_backend__frameopt__ll_backend__frameopt__du_ptag_ordered_block_type_2[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_block_type_2_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_block_type_2_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_block_type_2_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_name_ordered_block_type_2[3] = {
  &ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_block_type_2_0,
  &ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_block_type_2_2,
  &ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_block_type_2_1
};

static const MR_Integer ll_backend__frameopt__ll_backend__frameopt__functor_number_map_block_type_2[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_type_2 = {
  (MR_Integer) 2,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__frameopt____Unify____block_type_2_0_10001)),
  ((MR_Box) (ll_backend__frameopt____Compare____block_type_2_0_10001)),
  (MR_String) "ll_backend.frameopt",
  (MR_String) "block_type",
  {     ll_backend__frameopt__ll_backend__frameopt__du_name_ordered_block_type_2 },
  {     ll_backend__frameopt__ll_backend__frameopt__du_ptag_ordered_block_type_2 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  ll_backend__frameopt__ll_backend__frameopt__functor_number_map_block_type_2
};

static const MR_EnumFunctorDesc ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_can_transform_0_0 = {
  (MR_String) "can_transform",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_can_transform_0_1 = {
  (MR_String) "cannot_transform",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__enum_value_ordered_can_transform_0[2] = {
  &ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_can_transform_0_0,
  &ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_can_transform_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__enum_name_ordered_can_transform_0[2] = {
  &ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_can_transform_0_0,
  &ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_can_transform_0_1
};

static const MR_Integer ll_backend__frameopt__ll_backend__frameopt__functor_number_map_can_transform_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_can_transform_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__frameopt____Unify____can_transform_0_0_10001)),
  ((MR_Box) (ll_backend__frameopt____Compare____can_transform_0_0_10001)),
  (MR_String) "ll_backend.frameopt",
  (MR_String) "can_transform",
  {     ll_backend__frameopt__ll_backend__frameopt__enum_name_ordered_can_transform_0 },
  {     ll_backend__frameopt__ll_backend__frameopt__enum_value_ordered_can_transform_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__frameopt__ll_backend__frameopt__functor_number_map_can_transform_0
};

static const MR_PseudoTypeInfo ll_backend__frameopt__ll_backend__frameopt__field_types_det_entry_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_stack_incr_kind_0)
};

static const MR_DuArgLocn ll_backend__frameopt__ll_backend__frameopt__field_locns_det_entry_info_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_det_entry_info_0_0 = {
  (MR_String) "det_entry",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__frameopt__ll_backend__frameopt__field_types_det_entry_info_0_0,
  NULL,
  ll_backend__frameopt__ll_backend__frameopt__field_locns_det_entry_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_det_entry_info_0_0[1] = {
  &ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_det_entry_info_0_0
};

static const MR_DuPtagLayout ll_backend__frameopt__ll_backend__frameopt__du_ptag_ordered_det_entry_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_det_entry_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_name_ordered_det_entry_info_0[1] = {
  &ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_det_entry_info_0_0
};

static const MR_Integer ll_backend__frameopt__ll_backend__frameopt__functor_number_map_det_entry_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_det_entry_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__frameopt____Unify____det_entry_info_0_0_10001)),
  ((MR_Box) (ll_backend__frameopt____Compare____det_entry_info_0_0_10001)),
  (MR_String) "ll_backend.frameopt",
  (MR_String) "det_entry_info",
  {     ll_backend__frameopt__ll_backend__frameopt__du_name_ordered_det_entry_info_0 },
  {     ll_backend__frameopt__ll_backend__frameopt__du_ptag_ordered_det_entry_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__frameopt__ll_backend__frameopt__functor_number_map_det_entry_info_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__frameopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__frameopt__ll_backend__frameopt__field_types_det_exit_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&ll_backend__frameopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0),
  (MR_PseudoTypeInfo) (&ll_backend__frameopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)
};

static const MR_DuFunctorDesc ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_det_exit_info_0_0 = {
  (MR_String) "det_exit",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__frameopt__ll_backend__frameopt__field_types_det_exit_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_det_exit_info_0_0[1] = {
  &ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_det_exit_info_0_0
};

static const MR_DuPtagLayout ll_backend__frameopt__ll_backend__frameopt__du_ptag_ordered_det_exit_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_det_exit_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_name_ordered_det_exit_info_0[1] = {
  &ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_det_exit_info_0_0
};

static const MR_Integer ll_backend__frameopt__ll_backend__frameopt__functor_number_map_det_exit_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_det_exit_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__frameopt____Unify____det_exit_info_0_0_10001)),
  ((MR_Box) (ll_backend__frameopt____Compare____det_exit_info_0_0_10001)),
  (MR_String) "ll_backend.frameopt",
  (MR_String) "det_exit_info",
  {     ll_backend__frameopt__ll_backend__frameopt__du_name_ordered_det_exit_info_0 },
  {     ll_backend__frameopt__ll_backend__frameopt__du_ptag_ordered_det_exit_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__frameopt__ll_backend__frameopt__functor_number_map_det_exit_info_0
};

static const MR_FA_TypeInfo_Struct2 ll_backend__frameopt__ll_backend__frameopt__ti_frame_block_info_2ll_backend__frameopt__type_ctor_info_det_entry_info_0ll_backend__frameopt__type_ctor_info_det_exit_info_0 = {
  &ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2,
  {
    (MR_TypeInfo) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_det_entry_info_0),
    (MR_TypeInfo) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_det_exit_info_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__frameopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__frameopt__ti_frame_block_info_2ll_backend__frameopt__type_ctor_info_det_entry_info_0ll_backend__frameopt__type_ctor_info_det_exit_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_TypeInfo) (&ll_backend__frameopt__ll_backend__frameopt__ti_frame_block_info_2ll_backend__frameopt__type_ctor_info_det_entry_info_0ll_backend__frameopt__type_ctor_info_det_exit_info_0)
  }
};

const MR_TypeCtorInfo_Struct ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_det_frame_block_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__frameopt____Unify____det_frame_block_map_0_0_10001)),
  ((MR_Box) (ll_backend__frameopt____Compare____det_frame_block_map_0_0_10001)),
  (MR_String) "ll_backend.frameopt",
  (MR_String) "det_frame_block_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ll_backend__frameopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__frameopt__ti_frame_block_info_2ll_backend__frameopt__type_ctor_info_det_entry_info_0ll_backend__frameopt__type_ctor_info_det_exit_info_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_Integer ll_backend__frameopt__ll_backend__frameopt__functor_number_map_exit_par_map_0[1] = {
  (MR_Integer) 0
};

static const MR_FA_TypeInfo_Struct2 ll_backend__frameopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_NotagFunctorDesc ll_backend__frameopt__ll_backend__frameopt__notag_functor_desc_exit_par_map_0 = {
  (MR_String) "exit_par_map",
  (MR_PseudoTypeInfo) (&ll_backend__frameopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_label_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_exit_par_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ll_backend__frameopt____Unify____exit_par_map_0_0_10001)),
  ((MR_Box) (ll_backend__frameopt____Compare____exit_par_map_0_0_10001)),
  (MR_String) "ll_backend.frameopt",
  (MR_String) "exit_par_map",
  {     &ll_backend__frameopt__ll_backend__frameopt__notag_functor_desc_exit_par_map_0 },
  {     &ll_backend__frameopt__ll_backend__frameopt__notag_functor_desc_exit_par_map_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__frameopt__ll_backend__frameopt__functor_number_map_exit_par_map_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__frameopt__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__frameopt__list__ti_list_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__frameopt__ll_backend__frameopt__field_types_frame_block_info_2_0[6] = {
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&ll_backend__frameopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0),
  (MR_PseudoTypeInfo) (&ll_backend__frameopt__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&ll_backend__frameopt__list__ti_list_1ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&ll_backend__frameopt__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&ll_backend__frameopt__ll_backend__frameopt__pti_block_type_2__pseudo_1__pseudo_2)
};

static const MR_ConstString ll_backend__frameopt__ll_backend__frameopt__field_names_frame_block_info_2_0[6] = {
  (MR_String) "fb_label",
  (MR_String) "fb_instrs",
  (MR_String) "fb_fallen_into",
  (MR_String) "fb_jump_dests",
  (MR_String) "fb_fall_dest",
  (MR_String) "fb_type"
};

static const MR_DuFunctorDesc ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_frame_block_info_2_0 = {
  (MR_String) "frame_block_info",
  (MR_Integer) 6,
  (MR_Integer) 32,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__frameopt__ll_backend__frameopt__field_types_frame_block_info_2_0,
  ll_backend__frameopt__ll_backend__frameopt__field_names_frame_block_info_2_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_frame_block_info_2_0[1] = {
  &ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_frame_block_info_2_0
};

static const MR_DuPtagLayout ll_backend__frameopt__ll_backend__frameopt__du_ptag_ordered_frame_block_info_2[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_frame_block_info_2_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_name_ordered_frame_block_info_2[1] = {
  &ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_frame_block_info_2_0
};

static const MR_Integer ll_backend__frameopt__ll_backend__frameopt__functor_number_map_frame_block_info_2[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2 = {
  (MR_Integer) 2,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__frameopt____Unify____frame_block_info_2_0_10001)),
  ((MR_Box) (ll_backend__frameopt____Compare____frame_block_info_2_0_10001)),
  (MR_String) "ll_backend.frameopt",
  (MR_String) "frame_block_info",
  {     ll_backend__frameopt__ll_backend__frameopt__du_name_ordered_frame_block_info_2 },
  {     ll_backend__frameopt__ll_backend__frameopt__du_ptag_ordered_frame_block_info_2 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__frameopt__ll_backend__frameopt__functor_number_map_frame_block_info_2
};

const MR_TypeCtorInfo_Struct ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_map_2 = {
  (MR_Integer) 2,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (ll_backend__frameopt____Unify____frame_block_map_2_0_10001)),
  ((MR_Box) (ll_backend__frameopt____Compare____frame_block_map_2_0_10001)),
  (MR_String) "ll_backend.frameopt",
  (MR_String) "frame_block_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ll_backend__frameopt__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__pseudo_ll_backend__frameopt__pti_frame_block_info_2__pseudo_1__pseudo_2) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_maybe_dummy_0_0 = {
  (MR_String) "is_not_dummy",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_maybe_dummy_0_1 = {
  (MR_String) "is_post_entry_dummy",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_maybe_dummy_0_2 = {
  (MR_String) "is_pre_exit_dummy",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__enum_value_ordered_maybe_dummy_0[3] = {
  &ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_maybe_dummy_0_0,
  &ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_maybe_dummy_0_1,
  &ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_maybe_dummy_0_2
};

static const MR_EnumFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__enum_name_ordered_maybe_dummy_0[3] = {
  &ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_maybe_dummy_0_0,
  &ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_maybe_dummy_0_1,
  &ll_backend__frameopt__ll_backend__frameopt__enum_functor_desc_maybe_dummy_0_2
};

static const MR_Integer ll_backend__frameopt__ll_backend__frameopt__functor_number_map_maybe_dummy_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_maybe_dummy_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__frameopt____Unify____maybe_dummy_0_0_10001)),
  ((MR_Box) (ll_backend__frameopt____Compare____maybe_dummy_0_0_10001)),
  (MR_String) "ll_backend.frameopt",
  (MR_String) "maybe_dummy",
  {     ll_backend__frameopt__ll_backend__frameopt__enum_name_ordered_maybe_dummy_0 },
  {     ll_backend__frameopt__ll_backend__frameopt__enum_value_ordered_maybe_dummy_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  ll_backend__frameopt__ll_backend__frameopt__functor_number_map_maybe_dummy_0
};

static const MR_PseudoTypeInfo ll_backend__frameopt__ll_backend__frameopt__field_types_nondet_entry_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0)
};

static const MR_DuFunctorDesc ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_nondet_entry_info_0_0 = {
  (MR_String) "nondet_entry",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__frameopt__ll_backend__frameopt__field_types_nondet_entry_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_nondet_entry_info_0_0[1] = {
  &ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_nondet_entry_info_0_0
};

static const MR_DuPtagLayout ll_backend__frameopt__ll_backend__frameopt__du_ptag_ordered_nondet_entry_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_nondet_entry_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_name_ordered_nondet_entry_info_0[1] = {
  &ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_nondet_entry_info_0_0
};

static const MR_Integer ll_backend__frameopt__ll_backend__frameopt__functor_number_map_nondet_entry_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_nondet_entry_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__frameopt____Unify____nondet_entry_info_0_0_10001)),
  ((MR_Box) (ll_backend__frameopt____Compare____nondet_entry_info_0_0_10001)),
  (MR_String) "ll_backend.frameopt",
  (MR_String) "nondet_entry_info",
  {     ll_backend__frameopt__ll_backend__frameopt__du_name_ordered_nondet_entry_info_0 },
  {     ll_backend__frameopt__ll_backend__frameopt__du_ptag_ordered_nondet_entry_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__frameopt__ll_backend__frameopt__functor_number_map_nondet_entry_info_0
};

static const MR_PseudoTypeInfo ll_backend__frameopt__ll_backend__frameopt__field_types_nondet_exit_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&ll_backend__frameopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)
};

static const MR_DuFunctorDesc ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_nondet_exit_info_0_0 = {
  (MR_String) "nondet_plain_exit",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__frameopt__ll_backend__frameopt__field_types_nondet_exit_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__frameopt__ll_backend__frameopt__field_types_nondet_exit_info_0_1[5] = {
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0),
  (MR_PseudoTypeInfo) (&ll_backend__frameopt__list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)
};

static const MR_DuFunctorDesc ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_nondet_exit_info_0_1 = {
  (MR_String) "nondet_teardown_exit",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__frameopt__ll_backend__frameopt__field_types_nondet_exit_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_nondet_exit_info_0_0[1] = {
  &ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_nondet_exit_info_0_0
};

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_nondet_exit_info_0_1[1] = {
  &ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_nondet_exit_info_0_1
};

static const MR_DuPtagLayout ll_backend__frameopt__ll_backend__frameopt__du_ptag_ordered_nondet_exit_info_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_nondet_exit_info_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__frameopt__ll_backend__frameopt__du_stag_ordered_nondet_exit_info_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__frameopt__ll_backend__frameopt__du_name_ordered_nondet_exit_info_0[2] = {
  &ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_nondet_exit_info_0_0,
  &ll_backend__frameopt__ll_backend__frameopt__du_functor_desc_nondet_exit_info_0_1
};

static const MR_Integer ll_backend__frameopt__ll_backend__frameopt__functor_number_map_nondet_exit_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_nondet_exit_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__frameopt____Unify____nondet_exit_info_0_0_10001)),
  ((MR_Box) (ll_backend__frameopt____Compare____nondet_exit_info_0_0_10001)),
  (MR_String) "ll_backend.frameopt",
  (MR_String) "nondet_exit_info",
  {     ll_backend__frameopt__ll_backend__frameopt__du_name_ordered_nondet_exit_info_0 },
  {     ll_backend__frameopt__ll_backend__frameopt__du_ptag_ordered_nondet_exit_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__frameopt__ll_backend__frameopt__functor_number_map_nondet_exit_info_0
};

static const MR_FA_TypeInfo_Struct2 ll_backend__frameopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__frameopt__type_ctor_info_block_needs_frame_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_TypeInfo) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0)
  }
};

const MR_TypeCtorInfo_Struct ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_ord_needs_frame_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__frameopt____Unify____ord_needs_frame_0_0_10001)),
  ((MR_Box) (ll_backend__frameopt____Compare____ord_needs_frame_0_0_10001)),
  (MR_String) "ll_backend.frameopt",
  (MR_String) "ord_needs_frame",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ll_backend__frameopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__frameopt__type_ctor_info_block_needs_frame_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_pre_exit_dummy_label_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__frameopt____Unify____pre_exit_dummy_label_map_0_0_10001)),
  ((MR_Box) (ll_backend__frameopt____Compare____pre_exit_dummy_label_map_0_0_10001)),
  (MR_String) "ll_backend.frameopt",
  (MR_String) "pre_exit_dummy_label_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ll_backend__frameopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_label_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_pred_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__frameopt____Unify____pred_map_0_0_10001)),
  ((MR_Box) (ll_backend__frameopt____Compare____pred_map_0_0_10001)),
  (MR_String) "ll_backend.frameopt",
  (MR_String) "pred_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ll_backend__frameopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_label_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 ll_backend__frameopt__queue__ti_queue_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

const MR_TypeCtorInfo_Struct ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_prop_queue_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__frameopt____Unify____prop_queue_0_0_10001)),
  ((MR_Box) (ll_backend__frameopt____Compare____prop_queue_0_0_10001)),
  (MR_String) "ll_backend.frameopt",
  (MR_String) "prop_queue",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ll_backend__frameopt__queue__ti_queue_1ll_backend__llds__type_ctor_info_label_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 ll_backend__frameopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
    (MR_TypeInfo) (&ll_backend__frameopt__list__ti_list_1ll_backend__llds__type_ctor_info_label_0)
  }
};

const MR_TypeCtorInfo_Struct ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_rev_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__frameopt____Unify____rev_map_0_0_10001)),
  ((MR_Box) (ll_backend__frameopt____Compare____rev_map_0_0_10001)),
  (MR_String) "ll_backend.frameopt",
  (MR_String) "rev_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ll_backend__frameopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_label_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_Integer ll_backend__frameopt__ll_backend__frameopt__functor_number_map_setup_par_map_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc ll_backend__frameopt__ll_backend__frameopt__notag_functor_desc_setup_par_map_0 = {
  (MR_String) "setup_par_map",
  (MR_PseudoTypeInfo) (&ll_backend__frameopt__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_label_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_setup_par_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ll_backend__frameopt____Unify____setup_par_map_0_0_10001)),
  ((MR_Box) (ll_backend__frameopt____Compare____setup_par_map_0_0_10001)),
  (MR_String) "ll_backend.frameopt",
  (MR_String) "setup_par_map",
  {     &ll_backend__frameopt__ll_backend__frameopt__notag_functor_desc_setup_par_map_0 },
  {     &ll_backend__frameopt__ll_backend__frameopt__notag_functor_desc_setup_par_map_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__frameopt__ll_backend__frameopt__functor_number_map_setup_par_map_0
};

const MR_BaseTypeclassInfo base_typeclass_info_ll_backend__frameopt__block_entry_exit__arity2__ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0__[11] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 6)),
  ((MR_Box) (ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_p_0_10001)),
  ((MR_Box) (ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_p_0_10001)),
  ((MR_Box) (ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__late_setup_code_1_1_f_0_10001)),
  ((MR_Box) (ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_f_0_10001)),
  ((MR_Box) (ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_f_0_10001)),
  ((MR_Box) (ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_ll_backend__frameopt__block_entry_exit__arity2__ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0__[11] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 6)),
  ((MR_Box) (ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_p_0_10001)),
  ((MR_Box) (ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_p_0_10001)),
  ((MR_Box) (ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__late_setup_code_1_1_f_0_10001)),
  ((MR_Box) (ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_f_0_10001)),
  ((MR_Box) (ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_f_0_10001)),
  ((MR_Box) (ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_f_0_10001))
};

static const MR_ConstString ll_backend__frameopt__ll_backend__frameopt__type_class_id_var_names_block_entry_exit_2[2] = {
  (MR_String) "En",
  (MR_String) "Ex"
};

static const MR_TypeClassMethod ll_backend__frameopt__ll_backend__frameopt__type_class_id_method_ids_block_entry_exit_2[6] = {
  {
    (MR_String) "detect_entry",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "detect_exit",
    (MR_Integer) 6,
    MR_PREDICATE
  },
  {
    (MR_String) "late_setup_code",
    (MR_Integer) 2,
    MR_FUNCTION
  },
  {
    (MR_String) "non_teardown_exit_code",
    (MR_Integer) 2,
    MR_FUNCTION
  },
  {
    (MR_String) "describe_entry",
    (MR_Integer) 2,
    MR_FUNCTION
  },
  {
    (MR_String) "describe_exit",
    (MR_Integer) 3,
    MR_FUNCTION
  }
};

static const MR_TypeClassId ll_backend__frameopt__ll_backend__frameopt__type_class_id_block_entry_exit_2 = {
  (MR_String) "ll_backend.frameopt",
  (MR_String) "block_entry_exit",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 6,
  ll_backend__frameopt__ll_backend__frameopt__type_class_id_var_names_block_entry_exit_2,
  ll_backend__frameopt__ll_backend__frameopt__type_class_id_method_ids_block_entry_exit_2
};

const MR_TypeClassDeclStruct ll_backend__frameopt__ll_backend__frameopt__type_class_decl_block_entry_exit_2 = {
  &ll_backend__frameopt__ll_backend__frameopt__type_class_id_block_entry_exit_2,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
ll_backend__frameopt__IntroducedFrom__pred__describe_block__2305__1_2_p_0(
  MR_Word UsesFrame_35,
  MR_Word HeadVar__2_77)
{
  {
    MR_bool succeeded = (UsesFrame_35 == HeadVar__2_77);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__IntroducedFrom__pred__describe_block__2319__1_2_p_0(
  MR_Word MaybeFallThrough_18,
  MR_Word HeadVar__2_68)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_2[2]), ((MR_Box) (MaybeFallThrough_18)), ((MR_Box) (HeadVar__2_68)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__IntroducedFrom__pred__describe_block__2245__1_2_p_0(
  MR_Word Label_11,
  MR_Word BlockLabel_14)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__llds____Unify____label_0_0(Label_11, BlockLabel_14);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2103__1_2_p_0(
  MR_Word TypeClassInfo_for_block_entry_exit_153,
  MR_Word Type_43)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_167_167;
    MR_Word TypeInfo_169_169;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_153, (MR_Integer) 1, &TypeInfo_167_167);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_153, (MR_Integer) 2, &TypeInfo_169_169);
    succeeded = ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_111_114_100_105_110_97_114_121_95_98_108_111_99_107_95_95_91_49_44_32_50_93_95_48_1_p_0(Type_43);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_111_114_100_105_110_97_114_121_95_98_108_111_99_107_95_95_91_49_44_32_50_93_95_48_1_p_0(
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

static MR_bool MR_CALL 
ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2062__1_2_p_0(
  MR_Word MaybeFallThrough_42,
  MR_Word HeadVar__2_78)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_2[2]), ((MR_Box) (MaybeFallThrough_42)), ((MR_Box) (HeadVar__2_78)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2059__1_2_p_0(
  MR_Word Label0_25,
  MR_Word Label0Copy_38)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__llds____Unify____label_0_0(Label0_25, Label0Copy_38);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__IntroducedFrom__pred__process_frame_delay__1858__1_2_p_0(
  MR_Word Label0_26,
  MR_Word Label0Copy_35)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__llds____Unify____label_0_0(Label0_26, Label0Copy_35);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__IntroducedFrom__pred__propagate_frame_requirement_to_successors__1724__1_2_p_0(
  MR_Word STATE_VARIABLE_AlreadyProcessed_38_38,
  MR_Word HeadVar__2_58)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__contains_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), STATE_VARIABLE_AlreadyProcessed_38_38, ((MR_Box) (HeadVar__2_58)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt__IntroducedFrom__pred__analyze_block__1255__1_4_p_0(
  MR_Word TypeClassInfo_for_block_entry_exit_103,
  MR_Word HeadVar__2_117,
  MR_Word HeadVar__3_118,
  MR_Word * HeadVar__4_119)
{
  {
    MR_Word TypeInfo_121_121;
    MR_Word TypeInfo_123_123;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_103, (MR_Integer) 1, &TypeInfo_121_121);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_103, (MR_Integer) 2, &TypeInfo_123_123);
    ll_backend__frameopt__mark_redoip_label_3_p_0(TypeInfo_121_121, TypeInfo_123_123, HeadVar__2_117, HeadVar__3_118, HeadVar__4_119);
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__IntroducedFrom__pred__build_frame_block_map__687__1_2_p_0(
  MR_Word NeedsFrame_69,
  MR_Word HeadVar__2_141)
{
  {
    MR_bool succeeded = (NeedsFrame_69 == HeadVar__2_141);

    return succeeded;
  }
}

static MR_String MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_String HeadVar__3_3;
    MR_Word RestoreSuccip_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Livevals_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goto_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_String Var_9;
    MR_String Var_10;
    MR_String Var_12;
    MR_String Var_14;
    MR_String Var_15;
    MR_String Var_17;
    MR_String Var_19;

    Var_10 = ll_backend__opt_debug__dump_fullinstrs_3_f_0(HeadVar__1_1, (MR_Integer) 1, RestoreSuccip_5);
    Var_15 = ll_backend__opt_debug__dump_fullinstrs_3_f_0(HeadVar__1_1, (MR_Integer) 1, Livevals_6);
    Var_19 = ll_backend__opt_debug__dump_fullinstr_3_f_0(HeadVar__1_1, (MR_Integer) 1, Goto_7);
    Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "goto:     ", Var_19);
    Var_14 = mercury__string__f_43_43_2_f_0(Var_15, Var_17);
    Var_12 = mercury__string__f_43_43_2_f_0((MR_String) "livevals: ", Var_14);
    Var_9 = mercury__string__f_43_43_2_f_0(Var_10, Var_12);
    HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "restore:  ", Var_9);
    return HeadVar__3_3;
  }
}

static MR_String MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;
    MR_Integer Size_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_String Msg_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Kind_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_String Var_7;
    MR_String Var_8;
    MR_String Var_9;
    MR_String Var_11;
    MR_String Var_12;
    MR_String Var_14;
    MR_String Var_15;

    Var_8 = mercury__string__int_to_string_1_f_0(Size_3);
    Var_15 = ll_backend__opt_debug__dump_stack_incr_kind_1_f_0(Kind_5);
    Var_14 = mercury__string__f_43_43_2_f_0(Var_15, (MR_String) "\n");
    Var_12 = mercury__string__f_43_43_2_f_0((MR_String) ", kind: ", Var_14);
    Var_11 = mercury__string__f_43_43_2_f_0(Msg_4, Var_12);
    Var_9 = mercury__string__f_43_43_2_f_0((MR_String) ", msg: ", Var_11);
    Var_7 = mercury__string__f_43_43_2_f_0(Var_8, Var_9);
    HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "size: ", Var_7);
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Livevals_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goto_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (Goto_5));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Livevals_4, Var_6);
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__late_setup_code_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Integer FrameSize_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_String Msg_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Kind_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;

    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_7, 0) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(3), Var_7, 1) = ((MR_Box) (FrameSize_3));
      MR_hl_field(MR_mktag(3), Var_7, 2) = ((MR_Box) (Msg_4));
      MR_hl_field(MR_mktag(3), Var_7, 3) = (MR_Box) ((MR_Unsigned) (Kind_5));
    }
    {
      Var_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), Var_6, 1) = ((MR_Box) ((MR_String) "late setup"));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_12, 1) = ((MR_Box) (FrameSize_3));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_11, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_11, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(3), Var_11, 2) = ((MR_Box) (&ll_backend__frameopt_scalar_common_3[7]));
    }
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) ((MR_String) "late save"));
    }
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Var_9));
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_24_24;
    MR_Integer FrameSize_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word SuccipRestore_16;
    MR_Word Decrsp_17;
    MR_Word Livevals_18;
    MR_Word Goto_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;

    succeeded = ll_backend__frameopt__detstack_teardown_8_p_0(HeadVar__1_1, FrameSize_13, HeadVar__3_3, &SuccipRestore_16, &Decrsp_17, &Livevals_18, &Goto_19, HeadVar__5_5);
    if (succeeded)
    {
      TypeCtorInfo_24_24 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
      Var_23 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Goto_19));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_23));
      }
      Var_21 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_24_24, Livevals_18, Var_22);
      Var_20 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_24_24, Decrsp_17, Var_21);
      *HeadVar__4_4 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_24_24, SuccipRestore_16, Var_20);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__6_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SuccipRestore_16));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Livevals_18));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goto_19));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;
    MR_Word Others_8;
    MR_Word Remain_9;
    MR_Word Others0_10;
    MR_Word Instrs1_11;
    MR_Word SetupInstr1_12;
    MR_Word Instrs2_13;
    MR_Integer FrameSize_14;
    MR_String Msg_15;
    MR_Word Kind_16;
    MR_Word SetupInstr2_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;

    ll_backend__opt_util__gather_comments_3_p_0(HeadVar__1_1, &Others0_10, &Instrs1_11);
    succeeded = (Instrs1_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SetupInstr1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_11, (MR_Integer) 0))));
      Instrs2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_11, (MR_Integer) 1))));
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SetupInstr1_12, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 0)))) == (MR_Integer) 24)));
      if (succeeded)
      {
        FrameSize_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 1))));
        Msg_15 = ((MR_String) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 2))));
        Kind_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 3))) & (MR_Integer) 1);
        succeeded = ll_backend__frameopt__detstack_setup_6_p_0(Instrs2_13, FrameSize_14, &SetupInstr2_18, Others0_10, &Others_8, &Remain_9);
        if (succeeded)
        {
          *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Others_8, Remain_9);
          Var_21 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (SetupInstr2_18));
            MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_21));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SetupInstr1_12));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_20));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FrameSize_14));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Msg_15));
            MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Kind_16));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_String MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_String HeadVar__3_3;

    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Livevals_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goto_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String Var_8;
      MR_String Var_9;
      MR_String Var_11;
      MR_String Var_13;

      Var_9 = ll_backend__opt_debug__dump_fullinstrs_3_f_0(HeadVar__1_1, (MR_Integer) 1, Livevals_5);
      Var_13 = ll_backend__opt_debug__dump_fullinstr_3_f_0(HeadVar__1_1, (MR_Integer) 1, Goto_6);
      Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "goto:     ", Var_13);
      Var_8 = mercury__string__f_43_43_2_f_0(Var_9, Var_11);
      HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "livevals: ", Var_8);
    }
    else
    {
      MR_Word Succip_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Maxfr_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Curfr_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word Livevals_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word Goto_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4))));
      MR_String Var_22;
      MR_String Var_23;
      MR_String Var_25;
      MR_String Var_27;
      MR_String Var_28;
      MR_String Var_30;
      MR_String Var_32;
      MR_String Var_33;
      MR_String Var_35;
      MR_String Var_37;
      MR_String Var_38;
      MR_String Var_40;
      MR_String Var_42;

      Var_23 = ll_backend__opt_debug__dump_fullinstr_3_f_0(HeadVar__1_1, (MR_Integer) 1, Succip_16);
      Var_28 = ll_backend__opt_debug__dump_fullinstr_3_f_0(HeadVar__1_1, (MR_Integer) 1, Maxfr_17);
      Var_33 = ll_backend__opt_debug__dump_fullinstr_3_f_0(HeadVar__1_1, (MR_Integer) 1, Curfr_18);
      Var_38 = ll_backend__opt_debug__dump_fullinstrs_3_f_0(HeadVar__1_1, (MR_Integer) 1, Livevals_19);
      Var_42 = ll_backend__opt_debug__dump_fullinstr_3_f_0(HeadVar__1_1, (MR_Integer) 1, Goto_20);
      Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "goto:     ", Var_42);
      Var_37 = mercury__string__f_43_43_2_f_0(Var_38, Var_40);
      Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "livevals: ", Var_37);
      Var_32 = mercury__string__f_43_43_2_f_0(Var_33, Var_35);
      Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "curfr: ", Var_32);
      Var_27 = mercury__string__f_43_43_2_f_0(Var_28, Var_30);
      Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "maxfr: ", Var_27);
      Var_22 = mercury__string__f_43_43_2_f_0(Var_23, Var_25);
      HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "succip: ", Var_22);
    }
    return HeadVar__3_3;
  }
}

static MR_String MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;
    MR_String Msg_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Size_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Redoip_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_String Var_7;
    MR_String Var_8;
    MR_String Var_10;
    MR_String Var_11;
    MR_String Var_12;
    MR_String Var_14;
    MR_String Var_15;

    Var_11 = mercury__string__int_to_string_1_f_0(Size_4);
    Var_15 = ll_backend__opt_debug__dump_code_addr_2_f_0((MR_Word) ((MR_Unsigned) 0U), Redoip_5);
    Var_14 = mercury__string__f_43_43_2_f_0(Var_15, (MR_String) "\n");
    Var_12 = mercury__string__f_43_43_2_f_0((MR_String) ", redoip: ", Var_14);
    Var_10 = mercury__string__f_43_43_2_f_0(Var_11, Var_12);
    Var_8 = mercury__string__f_43_43_2_f_0((MR_String) ", size: ", Var_10);
    Var_7 = mercury__string__f_43_43_2_f_0(Msg_3, Var_8);
    HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "msg: ", Var_7);
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word Livevals_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

      HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Livevals_3, (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__frameopt_scalar_common_2[10])));
    }
    else
    {
      MR_Word Livevals_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word Goto_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word Var_16;

      {
        Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Goto_15));
        MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Livevals_14, Var_16);
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__late_setup_code_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_String Msg_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer FrameSize_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Redoip_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;

    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (Msg_3));
      MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (FrameSize_4));
    }
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (Redoip_5));
    }
    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_7, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Var_7, 1) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(3), Var_7, 2) = ((MR_Box) (Var_9));
    }
    {
      Var_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), Var_6, 1) = ((MR_Box) ((MR_String) "late setup"));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_p_0(HeadVar__1_1, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_98_108_111_99_107_95_101_110_116_114_121_95_101_120_105_116_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_110_116_114_121_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_110_111_110_100_101_116_95_101_120_105_116_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_95_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_102_114_97_109_101_111_112_116_95_95_100_101_116_101_99_116_95_101_120_105_116_95_54_95_95_91_50_93_95_48_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_35_35;
    MR_Word SuccipRestore_13;
    MR_Word Maxfr_14;
    MR_Word Curfr_15;
    MR_Word Livevals_16;
    MR_Word Goto_17;
    MR_Word GotoTarget_18;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;

    succeeded = ll_backend__frameopt__nondetstack_teardown_9_p_0(HeadVar__1_1, HeadVar__3_3, &SuccipRestore_13, &Maxfr_14, &Curfr_15, &Livevals_16, &Goto_17, &GotoTarget_18, HeadVar__5_5);
    if (succeeded)
    {
      TypeCtorInfo_35_35 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
      Var_30 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Goto_17));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_30));
      }
      Var_28 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_35_35, Livevals_16, Var_29);
      Var_27 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_35_35, Curfr_15, Var_28);
      Var_26 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_35_35, Maxfr_14, Var_27);
      *HeadVar__4_4 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_35_35, SuccipRestore_13, Var_26);
      if ((SuccipRestore_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        succeeded = (Curfr_15 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (Maxfr_14 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) GotoTarget_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GotoTarget_18, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HeadVar__6_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Livevals_16));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Goto_17));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
      else
      {
        MR_Word CurfrInstr_20;
        MR_Word MaxfrInstr_21;
        MR_Word SuccipRestoreInstr_22;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_33;

        if (((MR_tag((MR_Word) GotoTarget_18)) == (MR_Integer) 2))
          succeeded = MR_TRUE;
        else
        if (((MR_tag((MR_Word) GotoTarget_18)) == (MR_Integer) 1))
        {
          MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GotoTarget_18, (MR_Integer) 0))));

          succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_Integer) 1);
          if (succeeded)
          {
          }
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          succeeded = (Curfr_15 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            CurfrInstr_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Curfr_15, (MR_Integer) 0))));
            Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Curfr_15, (MR_Integer) 1))));
            succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = (Maxfr_14 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                MaxfrInstr_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Maxfr_14, (MR_Integer) 0))));
                Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Maxfr_14, (MR_Integer) 1))));
                succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SuccipRestoreInstr_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SuccipRestore_13, (MR_Integer) 0))));
                  Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SuccipRestore_13, (MR_Integer) 1))));
                  succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__6_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SuccipRestoreInstr_22));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MaxfrInstr_21));
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (CurfrInstr_20));
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Livevals_16));
                      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Goto_17));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word MkframeInstr_8;
    MR_Word FrameInfo_9;
    MR_Word MaybeRedoip_10;
    MR_Word Redoip_12;
    MR_String Msg_13;
    MR_Integer Size_14;
    MR_Word Var_16;

    if (succeeded)
    {
      MkframeInstr_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      *HeadVar__3_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MkframeInstr_8, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_16, (MR_Integer) 0)))) == (MR_Integer) 4)));
      if (succeeded)
      {
        FrameInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_16, (MR_Integer) 1))));
        MaybeRedoip_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_16, (MR_Integer) 2))));
        succeeded = (MaybeRedoip_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Redoip_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRedoip_10, (MR_Integer) 0))));
          succeeded = (Redoip_12 == (MR_Word) ((MR_Unsigned) 8U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) FrameInfo_9)) == (MR_Integer) 1);
            if (succeeded)
            {
              Msg_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), FrameInfo_9, (MR_Integer) 0))));
              Size_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), FrameInfo_9, (MR_Integer) 1))));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MkframeInstr_8));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                *HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Msg_13));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Size_14));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Redoip_12));
              }
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
ll_backend__frameopt____Compare____setup_par_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____setup_par_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_1[7]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____rev_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____rev_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_1[8]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____prop_queue_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____prop_queue_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____pred_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____pred_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_1[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____pre_exit_dummy_label_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____pre_exit_dummy_label_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_1[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____ord_needs_frame_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____ord_needs_frame_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_1[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____nondet_exit_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_37 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_38 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_37 == CastY_38);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_6;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (Var_47)), ((MR_Box) (ArgY1_5)));
        succeeded = (SubResult1_6 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_6;
        else
          ll_backend__llds____Compare____instruction_0_0(HeadVar__1_1, Var_46, ArgY2_8);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgY3_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word ArgY4_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));
        MR_Word ArgY5_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 4))));
        MR_Word SubResult1_25;

        ll_backend__llds____Compare____instruction_0_0(&SubResult1_25, Var_52, ArgY1_24);
        succeeded = (SubResult1_25 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_25;
        else
        {
          MR_Word SubResult2_28;

          ll_backend__llds____Compare____instruction_0_0(&SubResult2_28, Var_51, ArgY2_27);
          succeeded = (SubResult2_28 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_28;
          else
          {
            MR_Word SubResult3_31;

            ll_backend__llds____Compare____instruction_0_0(&SubResult3_31, Var_50, ArgY3_30);
            succeeded = (SubResult3_31 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult3_31;
            else
            {
              MR_Word SubResult4_34;

              mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_2[0]), &SubResult4_34, ((MR_Box) (Var_49)), ((MR_Box) (ArgY4_33)));
              succeeded = (SubResult4_34 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult4_34;
              else
                ll_backend__llds____Compare____instruction_0_0(HeadVar__1_1, Var_48, ArgY5_36);
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____nondet_exit_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word TypeInfo_19_19;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        TypeInfo_19_19 = (MR_Word) (&ll_backend__frameopt_scalar_common_2[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
        if (succeeded)
          succeeded = ll_backend__llds____Unify____instruction_0_0(ArgX2_5, ArgY2_6);
      }
    }
    else
    {
      MR_Word TypeInfo_24_24;
      MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_8;
      MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_10;
      MR_Word ArgX3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_12;
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_14;
      MR_Word ArgX5_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_16;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
        ArgY5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4))));
        succeeded = ll_backend__llds____Unify____instruction_0_0(ArgX1_7, ArgY1_8);
        if (succeeded)
        {
          succeeded = ll_backend__llds____Unify____instruction_0_0(ArgX2_9, ArgY2_10);
          if (succeeded)
          {
            succeeded = ll_backend__llds____Unify____instruction_0_0(ArgX3_11, ArgY3_12);
            if (succeeded)
            {
              TypeInfo_24_24 = (MR_Word) (&ll_backend__frameopt_scalar_common_2[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
              if (succeeded)
                succeeded = ll_backend__llds____Unify____instruction_0_0(ArgX5_15, ArgY5_16);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____nondet_entry_info_0_0(
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
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX2_7 > ArgY2_8);
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
          ll_backend__llds____Compare____code_addr_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____nondet_entry_info_0_0(
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
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
          succeeded = ll_backend__llds____Unify____code_addr_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____maybe_dummy_0_0(
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
ll_backend__frameopt____Unify____maybe_dummy_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____frame_block_map_2_0(
  MR_Word TypeInfo_for_En_6,
  MR_Word TypeInfo_for_Ex_7,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_10_10;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_En_6));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 2) = ((MR_Box) (TypeInfo_for_Ex_7));
    }
    mercury__tree234____Compare____tree234_2_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_10_10, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____frame_block_map_2_0(
  MR_Word TypeInfo_for_En_5,
  MR_Word TypeInfo_for_Ex_6,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_9_9;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_En_5));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 2) = ((MR_Box) (TypeInfo_for_Ex_6));
    }
    succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_9_9, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____frame_block_info_2_0(
  MR_Word TypeInfo_for_En_23,
  MR_Word TypeInfo_for_Ex_24,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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

      ll_backend__llds____Compare____label_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_2[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_2[2]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_2[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_2[2]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
                ll_backend__frameopt____Compare____block_type_2_0(TypeInfo_for_En_23, TypeInfo_for_Ex_24, HeadVar__1_1, ArgX6_19, ArgY6_20);
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____frame_block_info_2_0(
  MR_Word TypeInfo_for_En_17,
  MR_Word TypeInfo_for_Ex_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_Word TypeInfo_23_23;
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

      succeeded = ll_backend__llds____Unify____label_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_20_20 = (MR_Word) (&ll_backend__frameopt_scalar_common_2[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_21_21 = (MR_Word) (&ll_backend__frameopt_scalar_common_2[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_22_22 = (MR_Word) (&ll_backend__frameopt_scalar_common_2[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_23_23 = (MR_Word) (&ll_backend__frameopt_scalar_common_2[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
                succeeded = ll_backend__frameopt____Unify____block_type_2_0(TypeInfo_for_En_17, TypeInfo_for_Ex_18, ArgX6_13, ArgY6_14);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____exit_par_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____exit_par_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_1[7]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____det_frame_block_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____det_frame_block_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_1[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____det_exit_info_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_2[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          ll_backend__llds____Compare____instruction_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____det_exit_info_0_0(
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
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&ll_backend__frameopt_scalar_common_2[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
          succeeded = ll_backend__llds____Unify____instruction_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____det_entry_info_0_0(
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
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX1_4 > ArgY1_5);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Integer Var_17 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_18 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_17 < Var_18);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_17 > Var_18);
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
ll_backend__frameopt____Unify____det_entry_info_0_0(
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
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____can_transform_0_0(
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
ll_backend__frameopt____Unify____can_transform_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____block_type_2_0(
  MR_Word TypeInfo_for_EntryInfo_31,
  MR_Word TypeInfo_for_ExitInfo_32,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_29 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_30 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_29 == CastY_30);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box Var_35 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));

                  mercury__builtin__compare_3_p_0(TypeInfo_for_EntryInfo_31, HeadVar__1_1, Var_35, ArgY1_5);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word Var_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
                  MR_Word ArgY2_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word SubResult1_16;
                  MR_Integer Var_39 = (MR_Integer) (Var_38);
                  MR_Integer Var_40 = (MR_Integer) (ArgY1_15);

                  succeeded = (Var_39 < Var_40);
                  if (succeeded)
                  {
                    SubResult1_16 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_39 > Var_40);
                    if (succeeded)
                    {
                      SubResult1_16 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult1_16 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_16;
                  else
                  {
                    MR_Integer Var_41 = (MR_Integer) (Var_37);
                    MR_Integer Var_42 = (MR_Integer) (ArgY2_18);

                    succeeded = (Var_41 < Var_42);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_41 > Var_42);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 2;
                      else
                        *HeadVar__1_1 = (MR_Integer) 0;
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box Var_36 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Box ArgY1_28 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0));

                  mercury__builtin__compare_3_p_0(TypeInfo_for_ExitInfo_32, HeadVar__1_1, Var_36, ArgY1_28);
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____block_type_2_0(
  MR_Word TypeInfo_for_EntryInfo_13,
  MR_Word TypeInfo_for_ExitInfo_14,
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
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_EntryInfo_13, ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
            MR_Word ArgY1_6;
            MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word ArgY2_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
              ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
              succeeded = (ArgX1_5 == ArgY1_6);
              if (succeeded)
                succeeded = (ArgX2_7 == ArgY2_8);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box ArgX1_9 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_ExitInfo_14, ArgX1_9, ArgY1_10);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____block_needs_frame_0_0(
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
ll_backend__frameopt____Unify____block_needs_frame_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__describe_block_6_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__frameopt__IntroducedFrom__pred__describe_block__2305__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__describe_block_6_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__frameopt__IntroducedFrom__pred__describe_block__2319__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__describe_block_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__frameopt__IntroducedFrom__pred__describe_block__2245__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt__describe_block_6_p_0(
  MR_Word TypeClassInfo_for_block_entry_exit_93,
  MR_Word BlockMap_7,
  MR_Word OrdNeedsFrame_8,
  MR_Word PredMap_9,
  MR_Word ProcLabel_10,
  MR_Word Label_11,
  MR_Word * Instr_12)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_96_96;
    MR_Word TypeInfo_98_98;
    MR_Word TypeInfo_100_100;
    MR_Word BlockInfo_13;
    MR_Word BlockLabel_14;
    MR_Word BlockInstrs_15;
    MR_Word FallInto_16;
    MR_Word SideLabels_17;
    MR_Word MaybeFallThrough_18;
    MR_Word Type_19;
    MR_Word YesProcLabel_20;
    MR_String LabelStr_21;
    MR_String BlockInstrsStr_22;
    MR_String Heading_23;
    MR_String PredStr_25;
    MR_String FallIntoStr_27;
    MR_String SideStr_28;
    MR_String FallThroughStr_32;
    MR_String TypeStr_34;
    MR_String Comment_41;
    MR_Word Var_42;
    MR_String Var_47;
    MR_String Var_84;
    MR_String Var_85;
    MR_String Var_86;
    MR_String Var_87;
    MR_String Var_88;
    MR_String Var_89;
    MR_Word Var_91;
    MR_Box conv0_BlockInfo_13;
    MR_Word PredLabel_24;
    MR_Box conv1_PredLabel_24;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_93, (MR_Integer) 1, &TypeInfo_96_96);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_93, (MR_Integer) 2, &TypeInfo_98_98);
    {
      TypeInfo_100_100 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_100_100, 0) = ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2));
      MR_hl_field(MR_mktag(0), TypeInfo_100_100, 1) = ((MR_Box) (TypeInfo_96_96));
      MR_hl_field(MR_mktag(0), TypeInfo_100_100, 2) = ((MR_Box) (TypeInfo_98_98));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_100_100, (MR_Word) (BlockMap_7), ((MR_Box) (Label_11)), &conv0_BlockInfo_13);
    BlockInfo_13 = ((MR_Word) (conv0_BlockInfo_13));
    BlockLabel_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_13, (MR_Integer) 0))));
    BlockInstrs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_13, (MR_Integer) 1))));
    FallInto_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_13, (MR_Integer) 2))));
    SideLabels_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_13, (MR_Integer) 3))));
    MaybeFallThrough_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_13, (MR_Integer) 4))));
    Type_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_13, (MR_Integer) 5))));
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&ll_backend__frameopt_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (ll_backend__frameopt__describe_block_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Label_11));
      MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (BlockLabel_14));
    }
    mercury__require__expect_3_p_0(Var_42, (MR_String) "predicate \140ll_backend.frameopt.describe_block\'/6", (MR_String) "label mismatch");
    {
      YesProcLabel_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), YesProcLabel_20, 0) = ((MR_Box) (ProcLabel_10));
    }
    LabelStr_21 = ll_backend__opt_debug__dump_label_2_f_0(YesProcLabel_20, Label_11);
    BlockInstrsStr_22 = ll_backend__opt_debug__dump_fullinstrs_3_f_0(YesProcLabel_20, (MR_Integer) 1, BlockInstrs_15);
    Var_47 = mercury__string__f_43_43_2_f_0(LabelStr_21, (MR_String) "\n\n");
    Heading_23 = mercury__string__f_43_43_2_f_0((MR_String) "\nBLOCK ", Var_47);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), PredMap_9, ((MR_Box) (Label_11)), &conv1_PredLabel_24);
    if (succeeded)
    {
      PredLabel_24 = ((MR_Word) (conv1_PredLabel_24));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_String Var_50;
      MR_String Var_51;

      Var_51 = ll_backend__opt_debug__dump_label_2_f_0(YesProcLabel_20, PredLabel_24);
      Var_50 = mercury__string__f_43_43_2_f_0(Var_51, (MR_String) "\n");
      PredStr_25 = mercury__string__f_43_43_2_f_0((MR_String) "previous label ", Var_50);
    }
    else
      PredStr_25 = (MR_String) "no previous label\n";
    if ((FallInto_16 == (MR_Word) ((MR_Unsigned) 0U)))
      FallIntoStr_27 = (MR_String) "not fallen into\n";
    else
    {
      MR_Word FallIntoFromLabel_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FallInto_16, (MR_Integer) 0))));
      MR_String Var_54;
      MR_String Var_55;

      Var_55 = ll_backend__opt_debug__dump_label_2_f_0(YesProcLabel_20, FallIntoFromLabel_26);
      Var_54 = mercury__string__f_43_43_2_f_0(Var_55, (MR_String) "\n");
      FallIntoStr_27 = mercury__string__f_43_43_2_f_0((MR_String) "fallen into from ", Var_54);
    }
    if ((SideLabels_17 == (MR_Word) ((MR_Unsigned) 0U)))
      SideStr_28 = (MR_String) "no side labels\n";
    else
    {
      MR_String Var_58;
      MR_String Var_59;

      Var_59 = ll_backend__opt_debug__dump_labels_2_f_0(YesProcLabel_20, SideLabels_17);
      Var_58 = mercury__string__f_43_43_2_f_0(Var_59, (MR_String) "\n");
      SideStr_28 = mercury__string__f_43_43_2_f_0((MR_String) "side labels ", Var_58);
    }
    if ((MaybeFallThrough_18 == (MR_Word) ((MR_Unsigned) 0U)))
      FallThroughStr_32 = (MR_String) "does not fall through\n";
    else
    {
      MR_Word FallThroughLabel_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFallThrough_18, (MR_Integer) 0))));
      MR_String Var_62;
      MR_String Var_63;

      Var_63 = ll_backend__opt_debug__dump_label_2_f_0(YesProcLabel_20, FallThroughLabel_31);
      Var_62 = mercury__string__f_43_43_2_f_0(Var_63, (MR_String) "\n");
      FallThroughStr_32 = mercury__string__f_43_43_2_f_0((MR_String) "falls through to ", Var_62);
    }
    switch (MR_tag((MR_Word) Type_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box Entry_33 = (MR_hl_field(MR_mktag(0), Type_19, (MR_Integer) 0));
          MR_String Var_83;

          Var_83 = ll_backend__frameopt__describe_entry_1_f_0(TypeClassInfo_for_block_entry_exit_93, Entry_33);
          TypeStr_34 = mercury__string__f_43_43_2_f_0((MR_String) "entry_block\n", Var_83);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word UsesFrame_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Type_19, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
          MR_Word MaybeDummy_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Type_19, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_String TypeStr0_37;
          MR_String TypeStr1_38;
          MR_Word NeedsFrame_39;
          MR_Box conv2_NeedsFrame_39;

          switch (MaybeDummy_36) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              TypeStr0_37 = (MR_String) "ordinary_block; ";
              break;
            case (MR_Integer) 1:
              TypeStr0_37 = (MR_String) "ordinary_block (post_entry_dummy); ";
              break;
            case (MR_Integer) 2:
              TypeStr0_37 = (MR_String) "ordinary_block (pre_exit_dummy); ";
              break;
          }
          switch (UsesFrame_35) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                TypeStr1_38 = mercury__string__f_43_43_2_f_0(TypeStr0_37, (MR_String) "does not use frame\n");
              }
              break;
            case (MR_Integer) 0:
              {
                TypeStr1_38 = mercury__string__f_43_43_2_f_0(TypeStr0_37, (MR_String) "uses frame\n");
              }
              break;
          }
          succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0), OrdNeedsFrame_8, ((MR_Box) (Label_11)), &conv2_NeedsFrame_39);
          if (succeeded)
          {
            NeedsFrame_39 = ((MR_Word) (conv2_NeedsFrame_39));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            switch (NeedsFrame_39) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word Var_74;

                  {
                    Var_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&ll_backend__frameopt_scalar_common_4[0]));
                    MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (ll_backend__frameopt__describe_block_6_p_0_3));
                    MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (UsesFrame_35));
                    MR_hl_field(MR_mktag(0), Var_74, 4) = ((MR_Box) ((MR_Integer) 1));
                  }
                  mercury__require__expect_3_p_0(Var_74, (MR_String) "predicate \140ll_backend.frameopt.describe_block\'/6", (MR_String) "NeedsFrame=block_doesnt_need_frame, UsesFrame=block_needs_frame");
                  TypeStr_34 = mercury__string__f_43_43_2_f_0(TypeStr1_38, (MR_String) "does not need frame\n");
                }
                break;
              case (MR_Integer) 0:
                {
                  TypeStr_34 = mercury__string__f_43_43_2_f_0(TypeStr1_38, (MR_String) "does need frame\n");
                }
                break;
            }
          else
          {
            TypeStr_34 = mercury__string__f_43_43_2_f_0(TypeStr1_38, (MR_String) "(unknown whether it does need frame)\n");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Exit_40 = (MR_hl_field(MR_mktag(2), Type_19, (MR_Integer) 0));
          MR_Word Var_65;
          MR_String Var_70;

          {
            Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&ll_backend__frameopt_scalar_common_4[4]));
            MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (ll_backend__frameopt__describe_block_6_p_0_2));
            MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (MaybeFallThrough_18));
            MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_65, (MR_String) "predicate \140ll_backend.frameopt.describe_block\'/6", (MR_String) "exit_block, MaybeFallThrough=yes(_)");
          Var_70 = ll_backend__frameopt__describe_exit_2_f_0(TypeClassInfo_for_block_entry_exit_93, YesProcLabel_20, Exit_40);
          TypeStr_34 = mercury__string__f_43_43_2_f_0((MR_String) "exit_block\n", Var_70);
        }
        break;
    }
    Var_89 = mercury__string__f_43_43_2_f_0((MR_String) "CODE:\n", BlockInstrsStr_22);
    Var_88 = mercury__string__f_43_43_2_f_0(TypeStr_34, Var_89);
    Var_87 = mercury__string__f_43_43_2_f_0(FallThroughStr_32, Var_88);
    Var_86 = mercury__string__f_43_43_2_f_0(SideStr_28, Var_87);
    Var_85 = mercury__string__f_43_43_2_f_0(FallIntoStr_27, Var_86);
    Var_84 = mercury__string__f_43_43_2_f_0(PredStr_25, Var_85);
    Comment_41 = mercury__string__f_43_43_2_f_0(Heading_23, Var_84);
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Comment_41));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Instr_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_String) ""));
    }
  }
}

static MR_String MR_CALL 
ll_backend__frameopt__describe_exit_2_f_0(
  MR_Word TypeClassInfo_for_block_entry_exit_4,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_String HeadVar__3_3;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_block_entry_exit_4, (MR_Integer) 0)), (MR_Integer) 10))));
    MR_Box conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = func_0(((MR_Box) (TypeClassInfo_for_block_entry_exit_4)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2);
    HeadVar__3_3 = ((MR_String) (conv1_HeadVar__3_3));
    return HeadVar__3_3;
  }
}

static MR_String MR_CALL 
ll_backend__frameopt__describe_entry_1_f_0(
  MR_Word TypeClassInfo_for_block_entry_exit_3,
  MR_Box HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_block_entry_exit_3, (MR_Integer) 0)), (MR_Integer) 9))));
    MR_Box conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_block_entry_exit_3)), HeadVar__1_1);
    HeadVar__2_2 = ((MR_String) (conv1_HeadVar__2_2));
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__no_disagreement_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Key_2,
  MR_Word Value_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word K_6;
      MR_Word V_7;
      MR_Word KVs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__1_1;

      K_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0))));
      V_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1))));
      succeeded = ll_backend__llds____Unify____label_0_0(K_6, Key_2);
      if (succeeded)
      {
        succeeded = ll_backend__llds____Unify____label_0_0(V_7, Value_3);
        succeeded = !(succeeded);
      }
      succeeded = !(succeeded);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = KVs_8;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__label_needs_frame_2_p_0(
  MR_Word OrdNeedsFrame_3,
  MR_Word Label_4)
{
  {
    MR_bool succeeded;
    MR_Word NeedsFrame_5;
    MR_Box conv0_NeedsFrame_5;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0), OrdNeedsFrame_3, ((MR_Box) (Label_4)), &conv0_NeedsFrame_5);
    if (succeeded)
    {
      NeedsFrame_5 = ((MR_Word) (conv0_NeedsFrame_5));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      succeeded = (NeedsFrame_5 == (MR_Integer) 0);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__all_successors_need_frame_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__frameopt__label_needs_frame_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__all_successors_need_frame_3_p_0(
  MR_Word TypeInfo_for_En_12,
  MR_Word TypeInfo_for_Ex_13,
  MR_Word BlockMap_4,
  MR_Word OrdNeedsFrame_5,
  MR_Word Label_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_16_16;
    MR_Word BlockInfo_7;
    MR_Word Successors_8;
    MR_Word NoNeedFrameSuccessors_10;
    MR_Word Var_11;
    MR_Word SideLabels_20;
    MR_Word MaybeFallThrough_21;
    MR_Box conv0_BlockInfo_7;
    MR_Word _NeedFrameSuccessors_9;

    {
      TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_16_16, 0) = ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2));
      MR_hl_field(MR_mktag(0), TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_En_12));
      MR_hl_field(MR_mktag(0), TypeInfo_16_16, 2) = ((MR_Box) (TypeInfo_for_Ex_13));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_16_16, (MR_Word) (BlockMap_4), ((MR_Box) (Label_6)), &conv0_BlockInfo_7);
    BlockInfo_7 = ((MR_Word) (conv0_BlockInfo_7));
    SideLabels_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_7, (MR_Integer) 3))));
    MaybeFallThrough_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_7, (MR_Integer) 4))));
    if ((MaybeFallThrough_21 == (MR_Word) ((MR_Unsigned) 0U)))
      Successors_8 = SideLabels_20;
    else
    {
      MR_Word FallThrough_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFallThrough_21, (MR_Integer) 0))));

      {
        Successors_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Successors_8, 0) = ((MR_Box) (FallThrough_22));
        MR_hl_field(MR_mktag(1), Successors_8, 1) = ((MR_Box) (SideLabels_20));
      }
    }
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&ll_backend__frameopt_scalar_common_4[7]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (ll_backend__frameopt__all_successors_need_frame_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (OrdNeedsFrame_5));
    }
    mercury__list__filter_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), Var_11, Successors_8, &_NeedFrameSuccessors_9, &NoNeedFrameSuccessors_10);
    succeeded = (NoNeedFrameSuccessors_10 == (MR_Word) ((MR_Unsigned) 0U));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt__record_frame_need_6_p_0(
  MR_Word TypeInfo_for_En_30,
  MR_Word TypeInfo_for_Ex_31,
  MR_Word BlockMap_7,
  MR_Word Label_8,
  MR_Word STATE_VARIABLE_OrdNeedsFrame_0_17,
  MR_Word * STATE_VARIABLE_OrdNeedsFrame_18,
  MR_Word STATE_VARIABLE_CanTransform_0_19,
  MR_Word * STATE_VARIABLE_CanTransform_20)
{
  {
    MR_Word TypeInfo_34_34;
    MR_Word BlockInfo_11;
    MR_Word BlockType_12;
    MR_Box conv0_BlockInfo_11;

    {
      TypeInfo_34_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_34_34, 0) = ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2));
      MR_hl_field(MR_mktag(0), TypeInfo_34_34, 1) = ((MR_Box) (TypeInfo_for_En_30));
      MR_hl_field(MR_mktag(0), TypeInfo_34_34, 2) = ((MR_Box) (TypeInfo_for_Ex_31));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_34_34, (MR_Word) (BlockMap_7), ((MR_Box) (Label_8)), &conv0_BlockInfo_11);
    BlockInfo_11 = ((MR_Word) (conv0_BlockInfo_11));
    BlockType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_11, (MR_Integer) 5))));
    switch (MR_tag((MR_Word) BlockType_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_CanTransform_20 = (MR_Integer) 1;
          *STATE_VARIABLE_OrdNeedsFrame_18 = STATE_VARIABLE_OrdNeedsFrame_0_17;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word NeedsFrame0_39;
          MR_Box conv1_NeedsFrame0_39;

          mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0), STATE_VARIABLE_OrdNeedsFrame_0_17, ((MR_Box) (Label_8)), &conv1_NeedsFrame0_39);
          NeedsFrame0_39 = ((MR_Word) (conv1_NeedsFrame0_39));
          switch (NeedsFrame0_39) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0), ((MR_Box) (Label_8)), ((MR_Box) ((MR_Integer) 0)), STATE_VARIABLE_OrdNeedsFrame_0_17, STATE_VARIABLE_OrdNeedsFrame_18);
              }
              break;
            case (MR_Integer) 0:
              *STATE_VARIABLE_OrdNeedsFrame_18 = STATE_VARIABLE_OrdNeedsFrame_0_17;
              break;
          }
          *STATE_VARIABLE_CanTransform_20 = STATE_VARIABLE_CanTransform_0_19;
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.frameopt.record_frame_need\'/6", (MR_String) "exit_block");
            return;
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__key_block_needs_frame_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Label_3)
{
  {
    MR_bool succeeded;
    MR_Word Var_4;

    *Label_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    succeeded = (Var_4 == (MR_Integer) 0);
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt__mark_redoip_label_3_p_0(
  MR_Word TypeInfo_for_En_33,
  MR_Word TypeInfo_for_Ex_34,
  MR_Word Label_4,
  MR_Word STATE_VARIABLE_BlockMap_0_14,
  MR_Word * STATE_VARIABLE_BlockMap_15)
{
  {
    MR_Word TypeInfo_37_37;
    MR_Word BlockInfo0_6;
    MR_Word BlockType0_7;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Box conv0_BlockInfo0_6;

    {
      TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_37_37, 0) = ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2));
      MR_hl_field(MR_mktag(0), TypeInfo_37_37, 1) = ((MR_Box) (TypeInfo_for_En_33));
      MR_hl_field(MR_mktag(0), TypeInfo_37_37, 2) = ((MR_Box) (TypeInfo_for_Ex_34));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_37_37, (MR_Word) (STATE_VARIABLE_BlockMap_0_14), ((MR_Box) (Label_4)), &conv0_BlockInfo0_6);
    BlockInfo0_6 = ((MR_Word) (conv0_BlockInfo0_6));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_6, (MR_Integer) 0))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_6, (MR_Integer) 1))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_6, (MR_Integer) 2))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_6, (MR_Integer) 3))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_6, (MR_Integer) 4))));
    BlockType0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_6, (MR_Integer) 5))));
    switch (MR_tag((MR_Word) BlockType0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.frameopt.mark_redoip_label\'/3", (MR_String) "entry_block");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaybeDummy_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), BlockType0_7, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word BlockType_11;
          MR_Word BlockInfo_12;
          MR_Word conv1_STATE_VARIABLE_BlockMap_15;

          {
            BlockType_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), BlockType_11, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (MR_Unsigned) (MaybeDummy_10)));
          }
          {
            BlockInfo_12 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), BlockInfo_12, 0) = ((MR_Box) (Var_22));
            MR_hl_field(MR_mktag(0), BlockInfo_12, 1) = ((MR_Box) (Var_23));
            MR_hl_field(MR_mktag(0), BlockInfo_12, 2) = ((MR_Box) (Var_24));
            MR_hl_field(MR_mktag(0), BlockInfo_12, 3) = ((MR_Box) (Var_25));
            MR_hl_field(MR_mktag(0), BlockInfo_12, 4) = ((MR_Box) (Var_26));
            MR_hl_field(MR_mktag(0), BlockInfo_12, 5) = ((MR_Box) (BlockType_11));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_37_37, ((MR_Box) (Label_4)), ((MR_Box) (BlockInfo_12)), (MR_Word) (STATE_VARIABLE_BlockMap_0_14), &conv1_STATE_VARIABLE_BlockMap_15);
          *STATE_VARIABLE_BlockMap_15 = (MR_Word) (conv1_STATE_VARIABLE_BlockMap_15);
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.frameopt.mark_redoip_label\'/3", (MR_String) "exit_block");
            return;
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__local_label_2_p_0(
  MR_Word ProcLabel_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ProcLabel_1, Var_7);
    }
    else
    {
      MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ProcLabel_1, Var_8);
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__nondetstack_teardown_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Extra_12,
  MR_Word * SuccipRestore_13,
  MR_Word * Maxfr_14,
  MR_Word * Curfr_15,
  MR_Word * Livevals_16,
  MR_Word * Goto_17,
  MR_Word * GotoTarget_18,
  MR_Word * Remain_19)
{
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Instr0_10;
    MR_Word Instrs0_11;
    MR_Word Var_31;

    if (succeeded)
    {
      Instr0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Instrs0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_10, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_31, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        succeeded = MR_FALSE;
      }
      else
      {
        MR_Word ExtraPrime_22;
        MR_Word SuccipRestorePrime_23;
        MR_Word MaxfrPrime_24;
        MR_Word CurfrPrime_25;
        MR_Word LivevalsPrime_26;
        MR_Word GotoPrime_27;
        MR_Word GotoTargetPrime_28;
        MR_Word RemainPrime_29;

        succeeded = ll_backend__frameopt__nondetstack_teardown_2_14_p_0(HeadVar__1_1, (MR_Word) ((MR_Unsigned) 0U), &ExtraPrime_22, (MR_Word) ((MR_Unsigned) 0U), &SuccipRestorePrime_23, (MR_Word) ((MR_Unsigned) 0U), &MaxfrPrime_24, (MR_Word) ((MR_Unsigned) 0U), &CurfrPrime_25, (MR_Word) ((MR_Unsigned) 0U), &LivevalsPrime_26, &GotoPrime_27, &GotoTargetPrime_28, &RemainPrime_29);
        if (succeeded)
        {
          *Extra_12 = ExtraPrime_22;
          *SuccipRestore_13 = SuccipRestorePrime_23;
          *Maxfr_14 = MaxfrPrime_24;
          *Curfr_15 = CurfrPrime_25;
          *Livevals_16 = LivevalsPrime_26;
          *Goto_17 = GotoPrime_27;
          *GotoTarget_18 = GotoTargetPrime_28;
          *Remain_19 = RemainPrime_29;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Extra1_30;

          succeeded = ll_backend__frameopt__nondetstack_teardown_9_p_0(Instrs0_11, &Extra1_30, SuccipRestore_13, Maxfr_14, Curfr_15, Livevals_16, Goto_17, GotoTarget_18, Remain_19);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Extra_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_10));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Extra1_30));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__nondetstack_teardown_2_14_p_0(
  MR_Word Instrs0_15,
  MR_Word STATE_VARIABLE_Extra_0_32,
  MR_Word * STATE_VARIABLE_Extra_33,
  MR_Word STATE_VARIABLE_SuccipRestore_0_34,
  MR_Word * STATE_VARIABLE_SuccipRestore_35,
  MR_Word STATE_VARIABLE_Maxfr_0_36,
  MR_Word * STATE_VARIABLE_Maxfr_37,
  MR_Word STATE_VARIABLE_Curfr_0_38,
  MR_Word * STATE_VARIABLE_Curfr_39,
  MR_Word STATE_VARIABLE_Livevals_0_40,
  MR_Word * STATE_VARIABLE_Livevals_41,
  MR_Word * Goto_21,
  MR_Word * GotoTarget_22,
  MR_Word * Remain_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Instrs1_24;
    MR_Word Instr1_25;
    MR_Word Instrs2_26;
    MR_Word Uinstr1_27;

    // setup for model_semi tailcalls optimized into a loop
    ;
    ll_backend__opt_util__skip_comments_2_p_0(Instrs0_15, &Instrs1_24);
    succeeded = (Instrs1_24 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Instr1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_24, (MR_Integer) 0))));
      Instrs2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_24, (MR_Integer) 1))));
      Uinstr1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr1_25, (MR_Integer) 0))));
      switch (MR_tag((MR_Word) Uinstr1_27)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          {
            MR_Word STATE_VARIABLE_Livevals_42_42;
            MR_Word Var_43;
            MR_Word next_value_of_Instrs0_15;
            MR_Word next_value_of_STATE_VARIABLE_Livevals_0_40;

            succeeded = (STATE_VARIABLE_Livevals_0_40 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_43 = (MR_Word) ((MR_Unsigned) 0U);
              {
                STATE_VARIABLE_Livevals_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Livevals_42_42, 0) = ((MR_Box) (Instr1_25));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Livevals_42_42, 1) = ((MR_Box) (Var_43));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Instrs0_15 = Instrs2_26;
              next_value_of_STATE_VARIABLE_Livevals_0_40 = STATE_VARIABLE_Livevals_42_42;
              Instrs0_15 = next_value_of_Instrs0_15;
              STATE_VARIABLE_Livevals_0_40 = next_value_of_STATE_VARIABLE_Livevals_0_40;
              continue;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr1_27, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Lval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr1_27, (MR_Integer) 1))));
                MR_Word Rval_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr1_27, (MR_Integer) 2))));
                MR_Word STATE_VARIABLE_SuccipRestore_52_52;
                MR_Word STATE_VARIABLE_Maxfr_57_57;
                MR_Word STATE_VARIABLE_Curfr_62_62;
                MR_Word STATE_VARIABLE_Extra_66_66;
                MR_Word Var_49;
                MR_Word Var_50;
                MR_Word Var_51;
                MR_Word next_value_of_Instrs0_15;
                MR_Word next_value_of_STATE_VARIABLE_Extra_0_32;
                MR_Word next_value_of_STATE_VARIABLE_SuccipRestore_0_34;
                MR_Word next_value_of_STATE_VARIABLE_Maxfr_0_36;
                MR_Word next_value_of_STATE_VARIABLE_Curfr_0_38;

                succeeded = (Lval_29 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = (STATE_VARIABLE_SuccipRestore_0_34 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = (STATE_VARIABLE_Curfr_0_38 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Rval_30)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rval_30, (MR_Integer) 0))));
                        succeeded = ((((MR_tag((MR_Word) Var_49)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_49, (MR_Integer) 0)))) == (MR_Integer) 4)));
                        if (succeeded)
                        {
                          Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_49, (MR_Integer) 1))));
                          succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_Integer) 0);
                          if (succeeded)
                          {
                            Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 0))));
                            succeeded = (Var_51 == (MR_Word) ((MR_Unsigned) 8U));
                          }
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  {
                    STATE_VARIABLE_SuccipRestore_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_SuccipRestore_52_52, 0) = ((MR_Box) (Instr1_25));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_SuccipRestore_52_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  STATE_VARIABLE_Curfr_62_62 = STATE_VARIABLE_Curfr_0_38;
                  STATE_VARIABLE_Maxfr_57_57 = STATE_VARIABLE_Maxfr_0_36;
                  STATE_VARIABLE_Extra_66_66 = STATE_VARIABLE_Extra_0_32;
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_Word Var_54;
                  MR_Word Var_55;
                  MR_Word Var_56;

                  succeeded = (Lval_29 == (MR_Word) ((MR_Unsigned) 4U));
                  if (succeeded)
                  {
                    succeeded = (STATE_VARIABLE_Maxfr_0_36 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (STATE_VARIABLE_Curfr_0_38 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) Rval_30)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rval_30, (MR_Integer) 0))));
                          succeeded = ((((MR_tag((MR_Word) Var_54)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_54, (MR_Integer) 0)))) == (MR_Integer) 8)));
                          if (succeeded)
                          {
                            Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_54, (MR_Integer) 1))));
                            succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 0))));
                              succeeded = (Var_56 == (MR_Word) ((MR_Unsigned) 8U));
                            }
                          }
                        }
                      }
                    }
                  }
                  if (succeeded)
                  {
                    {
                      STATE_VARIABLE_Maxfr_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Maxfr_57_57, 0) = ((MR_Box) (Instr1_25));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Maxfr_57_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    STATE_VARIABLE_Curfr_62_62 = STATE_VARIABLE_Curfr_0_38;
                    STATE_VARIABLE_Extra_66_66 = STATE_VARIABLE_Extra_0_32;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word Var_59;
                    MR_Word Var_60;
                    MR_Word Var_61;

                    succeeded = (Lval_29 == (MR_Word) ((MR_Unsigned) 8U));
                    if (succeeded)
                    {
                      succeeded = (STATE_VARIABLE_Curfr_0_38 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) Rval_30)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rval_30, (MR_Integer) 0))));
                          succeeded = ((((MR_tag((MR_Word) Var_59)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_59, (MR_Integer) 0)))) == (MR_Integer) 5)));
                          if (succeeded)
                          {
                            Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_59, (MR_Integer) 1))));
                            succeeded = ((MR_tag((MR_Word) Var_60)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_60, (MR_Integer) 0))));
                              succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 8U));
                            }
                          }
                        }
                      }
                    }
                    if (succeeded)
                    {
                      {
                        STATE_VARIABLE_Curfr_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Curfr_62_62, 0) = ((MR_Box) (Instr1_25));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Curfr_62_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      STATE_VARIABLE_Extra_66_66 = STATE_VARIABLE_Extra_0_32;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      MR_Word TypeCtorInfo_74_74;
                      MR_Word Var_64;
                      MR_Word Var_65;
                      MR_Word Var_67;
                      MR_Word Var_68;

                      Var_64 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_29);
                      succeeded = (Var_64 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_65 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_30);
                        succeeded = (Var_65 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          TypeCtorInfo_74_74 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                          Var_68 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Instr1_25));
                            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_68));
                          }
                          STATE_VARIABLE_Extra_66_66 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_74_74, STATE_VARIABLE_Extra_0_32, Var_67);
                          STATE_VARIABLE_Curfr_62_62 = STATE_VARIABLE_Curfr_0_38;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                    {
                      STATE_VARIABLE_Maxfr_57_57 = STATE_VARIABLE_Maxfr_0_36;
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                  {
                    STATE_VARIABLE_SuccipRestore_52_52 = STATE_VARIABLE_SuccipRestore_0_34;
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                {
                  // direct tailcall eliminated
                  ;
                  next_value_of_Instrs0_15 = Instrs2_26;
                  next_value_of_STATE_VARIABLE_Extra_0_32 = STATE_VARIABLE_Extra_66_66;
                  next_value_of_STATE_VARIABLE_SuccipRestore_0_34 = STATE_VARIABLE_SuccipRestore_52_52;
                  next_value_of_STATE_VARIABLE_Maxfr_0_36 = STATE_VARIABLE_Maxfr_57_57;
                  next_value_of_STATE_VARIABLE_Curfr_0_38 = STATE_VARIABLE_Curfr_62_62;
                  Instrs0_15 = next_value_of_Instrs0_15;
                  STATE_VARIABLE_Extra_0_32 = next_value_of_STATE_VARIABLE_Extra_0_32;
                  STATE_VARIABLE_SuccipRestore_0_34 = next_value_of_STATE_VARIABLE_SuccipRestore_0_34;
                  STATE_VARIABLE_Maxfr_0_36 = next_value_of_STATE_VARIABLE_Maxfr_0_36;
                  STATE_VARIABLE_Curfr_0_38 = next_value_of_STATE_VARIABLE_Curfr_0_38;
                  continue;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                *GotoTarget_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr1_27, (MR_Integer) 1))));
                *Goto_21 = Instr1_25;
                *Remain_23 = Instrs2_26;
                *STATE_VARIABLE_Extra_33 = STATE_VARIABLE_Extra_0_32;
                *STATE_VARIABLE_SuccipRestore_35 = STATE_VARIABLE_SuccipRestore_0_34;
                *STATE_VARIABLE_Maxfr_37 = STATE_VARIABLE_Maxfr_0_36;
                *STATE_VARIABLE_Curfr_39 = STATE_VARIABLE_Curfr_0_38;
                *STATE_VARIABLE_Livevals_41 = STATE_VARIABLE_Livevals_0_40;
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__detstack_teardown_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer FrameSize_11,
  MR_Word * Extra_12,
  MR_Word * SuccipRestore_13,
  MR_Word * Decrsp_14,
  MR_Word * Livevals_15,
  MR_Word * Goto_16,
  MR_Word * Remain_17)
{
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Instr0_9;
    MR_Word Instrs0_10;
    MR_Word Var_27;

    if (succeeded)
    {
      Instr0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Instrs0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_9, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_27, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        succeeded = MR_FALSE;
      }
      else
      {
        MR_Word ExtraPrime_20;
        MR_Word SuccipRestorePrime_21;
        MR_Word DecrspPrime_22;
        MR_Word LivevalsPrime_23;
        MR_Word GotoPrime_24;
        MR_Word RemainPrime_25;

        succeeded = ll_backend__frameopt__detstack_teardown_2_12_p_0(HeadVar__1_1, FrameSize_11, (MR_Word) ((MR_Unsigned) 0U), &ExtraPrime_20, (MR_Word) ((MR_Unsigned) 0U), &SuccipRestorePrime_21, (MR_Word) ((MR_Unsigned) 0U), &DecrspPrime_22, (MR_Word) ((MR_Unsigned) 0U), &LivevalsPrime_23, &GotoPrime_24, &RemainPrime_25);
        if (succeeded)
        {
          *Extra_12 = ExtraPrime_20;
          *SuccipRestore_13 = SuccipRestorePrime_21;
          *Decrsp_14 = DecrspPrime_22;
          *Livevals_15 = LivevalsPrime_23;
          *Goto_16 = GotoPrime_24;
          *Remain_17 = RemainPrime_25;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Extra1_26;

          succeeded = ll_backend__frameopt__detstack_teardown_8_p_0(Instrs0_10, FrameSize_11, &Extra1_26, SuccipRestore_13, Decrsp_14, Livevals_15, Goto_16, Remain_17);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Extra_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_9));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Extra1_26));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__detstack_teardown_2_12_p_0(
  MR_Word Instrs0_13,
  MR_Integer FrameSize_14,
  MR_Word STATE_VARIABLE_Extra_0_31,
  MR_Word * STATE_VARIABLE_Extra_32,
  MR_Word STATE_VARIABLE_SuccipRestore_0_33,
  MR_Word * STATE_VARIABLE_SuccipRestore_34,
  MR_Word STATE_VARIABLE_Decrsp_0_35,
  MR_Word * STATE_VARIABLE_Decrsp_36,
  MR_Word STATE_VARIABLE_Livevals_0_37,
  MR_Word * STATE_VARIABLE_Livevals_38,
  MR_Word * Goto_19,
  MR_Word * Remain_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Instrs1_21;
    MR_Word Instr1_22;
    MR_Word Instrs2_23;
    MR_Word Uinstr1_24;

    // setup for model_semi tailcalls optimized into a loop
    ;
    ll_backend__opt_util__skip_comments_2_p_0(Instrs0_13, &Instrs1_21);
    succeeded = (Instrs1_21 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Instr1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_21, (MR_Integer) 0))));
      Instrs2_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_21, (MR_Integer) 1))));
      Uinstr1_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr1_22, (MR_Integer) 0))));
      switch (MR_tag((MR_Word) Uinstr1_24)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          {
            MR_Word STATE_VARIABLE_Livevals_40_40;
            MR_Word Var_41;
            MR_Word next_value_of_Instrs0_13;
            MR_Word next_value_of_STATE_VARIABLE_Livevals_0_37;

            succeeded = (STATE_VARIABLE_Livevals_0_37 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_41 = (MR_Word) ((MR_Unsigned) 0U);
              {
                STATE_VARIABLE_Livevals_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Livevals_40_40, 0) = ((MR_Box) (Instr1_22));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Livevals_40_40, 1) = ((MR_Box) (Var_41));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Instrs0_13 = Instrs2_23;
              next_value_of_STATE_VARIABLE_Livevals_0_37 = STATE_VARIABLE_Livevals_40_40;
              Instrs0_13 = next_value_of_Instrs0_13;
              STATE_VARIABLE_Livevals_0_37 = next_value_of_STATE_VARIABLE_Livevals_0_37;
              continue;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr1_24, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Lval_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr1_24, (MR_Integer) 1))));
                MR_Word Rval_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr1_24, (MR_Integer) 2))));
                MR_Word Var_52;
                MR_Integer Var_69;

                succeeded = (Lval_26 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Rval_27)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rval_27, (MR_Integer) 0))));
                    succeeded = ((((MR_tag((MR_Word) Var_52)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_52, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_69 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_52, (MR_Integer) 1))));
                      succeeded = (FrameSize_14 == Var_69);
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word STATE_VARIABLE_SuccipRestore_53_53;
                  MR_Word Var_54;
                  MR_Word next_value_of_Instrs0_13;
                  MR_Word next_value_of_STATE_VARIABLE_SuccipRestore_0_33;

                  succeeded = (STATE_VARIABLE_SuccipRestore_0_33 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = (STATE_VARIABLE_Decrsp_0_35 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_54 = (MR_Word) ((MR_Unsigned) 0U);
                      {
                        STATE_VARIABLE_SuccipRestore_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_SuccipRestore_53_53, 0) = ((MR_Box) (Instr1_22));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_SuccipRestore_53_53, 1) = ((MR_Box) (Var_54));
                      }
                      // direct tailcall eliminated
                      ;
                      next_value_of_Instrs0_13 = Instrs2_23;
                      next_value_of_STATE_VARIABLE_SuccipRestore_0_33 = STATE_VARIABLE_SuccipRestore_53_53;
                      Instrs0_13 = next_value_of_Instrs0_13;
                      STATE_VARIABLE_SuccipRestore_0_33 = next_value_of_STATE_VARIABLE_SuccipRestore_0_33;
                      continue;
                    }
                  }
                }
                else
                {
                  MR_Word TypeCtorInfo_68_68;
                  MR_Word Var_59;
                  MR_Word Var_60;
                  MR_Word STATE_VARIABLE_Extra_61_61;
                  MR_Word Var_62;
                  MR_Word Var_63;
                  MR_Word next_value_of_Instrs0_13;
                  MR_Word next_value_of_STATE_VARIABLE_Extra_0_31;

                  Var_59 = ll_backend__opt_util__lval_refers_stackvars_1_f_0(Lval_26);
                  succeeded = (Var_59 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_60 = ll_backend__opt_util__rval_refers_stackvars_1_f_0(Rval_27);
                    succeeded = (Var_60 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      TypeCtorInfo_68_68 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                      Var_63 = (MR_Word) ((MR_Unsigned) 0U);
                      {
                        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Instr1_22));
                        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_63));
                      }
                      STATE_VARIABLE_Extra_61_61 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_68_68, STATE_VARIABLE_Extra_0_31, Var_62);
                      // direct tailcall eliminated
                      ;
                      next_value_of_Instrs0_13 = Instrs2_23;
                      next_value_of_STATE_VARIABLE_Extra_0_31 = STATE_VARIABLE_Extra_61_61;
                      Instrs0_13 = next_value_of_Instrs0_13;
                      STATE_VARIABLE_Extra_0_31 = next_value_of_STATE_VARIABLE_Extra_0_31;
                      continue;
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Var_39;

                succeeded = (STATE_VARIABLE_Decrsp_0_35 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Decrsp_0_35, (MR_Integer) 1))));
                  succeeded = (Var_39 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    *Goto_19 = Instr1_22;
                    *Remain_20 = Instrs2_23;
                    *STATE_VARIABLE_Extra_32 = STATE_VARIABLE_Extra_0_31;
                    *STATE_VARIABLE_SuccipRestore_34 = STATE_VARIABLE_SuccipRestore_0_33;
                    *STATE_VARIABLE_Decrsp_36 = STATE_VARIABLE_Decrsp_0_35;
                    *STATE_VARIABLE_Livevals_38 = STATE_VARIABLE_Livevals_0_37;
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 25:
              {
                MR_Word STATE_VARIABLE_Decrsp_46_46;
                MR_Word Var_47;
                MR_Integer Var_70;
                MR_Word next_value_of_Instrs0_13;
                MR_Word next_value_of_STATE_VARIABLE_Decrsp_0_35;

                succeeded = (STATE_VARIABLE_Decrsp_0_35 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_70 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr1_24, (MR_Integer) 1))));
                  succeeded = (FrameSize_14 == Var_70);
                  if (succeeded)
                  {
                    Var_47 = (MR_Word) ((MR_Unsigned) 0U);
                    {
                      STATE_VARIABLE_Decrsp_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Decrsp_46_46, 0) = ((MR_Box) (Instr1_22));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Decrsp_46_46, 1) = ((MR_Box) (Var_47));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_Instrs0_13 = Instrs2_23;
                    next_value_of_STATE_VARIABLE_Decrsp_0_35 = STATE_VARIABLE_Decrsp_46_46;
                    Instrs0_13 = next_value_of_Instrs0_13;
                    STATE_VARIABLE_Decrsp_0_35 = next_value_of_STATE_VARIABLE_Decrsp_0_35;
                    continue;
                  }
                }
              }
              break;
          }
          break;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
ll_backend__frameopt__frameopt_keep_nondet_frame_7_p_0(
  MR_Word ProcLabel_8,
  MR_Word LayoutLabels_9,
  MR_Word STATE_VARIABLE_C_0_27,
  MR_Word * STATE_VARIABLE_C_28,
  MR_Word Instrs0_11,
  MR_Word * Instrs_12,
  MR_Word * Mod_13)
{
  {
    MR_bool succeeded;
    MR_Word LabelInstr_14;
    MR_Word Comments0_15;
    MR_Word Instrs1_16;
    MR_Word FrameInfo_17;
    MR_Word Redoip_18;
    MR_String MkframeComment_22;
    MR_Word KeepFrameLabel_25;
    MR_Word Instrs2_26;
    MR_Word STATE_VARIABLE_C_30_30;
    MR_Word TypeCtorInfo_59_59;
    MR_Word TypeInfo_60_60;
    MR_Word MkframeInstr_19;
    MR_Word Remain_20;
    MR_Word MkframeUinstr_21;
    MR_Word SuccMap_23;
    MR_Integer KeepFrameLabelNum_24;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_62;
    MR_Word Var_72;
    MR_Word Instr_76;
    MR_Word Instrs_77;
    MR_Word Uinstr_79;
    MR_Word STATE_VARIABLE_SuccMap_17_86;
    MR_Word Label_81;
    MR_Word Between_83;
    MR_Word TailInstrs_82;

    ll_backend__opt_util__get_prologue_4_p_0(Instrs0_11, &LabelInstr_14, &Comments0_15, &Instrs1_16);
    succeeded = (Instrs1_16 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MkframeInstr_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_16, (MR_Integer) 0))));
      Remain_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_16, (MR_Integer) 1))));
      MkframeUinstr_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MkframeInstr_19, (MR_Integer) 0))));
      MkframeComment_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), MkframeInstr_19, (MR_Integer) 1))));
      succeeded = ((((MR_tag((MR_Word) MkframeUinstr_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), MkframeUinstr_21, (MR_Integer) 0)))) == (MR_Integer) 4)));
      if (succeeded)
      {
        FrameInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MkframeUinstr_21, (MR_Integer) 1))));
        Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MkframeUinstr_21, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) FrameInfo_17)) == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (Var_72 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Redoip_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_72, (MR_Integer) 0))));
            TypeCtorInfo_59_59 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0);
            TypeInfo_60_60 = (MR_Word) (&ll_backend__frameopt_scalar_common_2[0]);
            Var_29 = mercury__map__init_0_f_0(TypeCtorInfo_59_59, TypeInfo_60_60);
            Instr_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_16, (MR_Integer) 0))));
            Instrs_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_16, (MR_Integer) 1))));
            Uinstr_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr_76, (MR_Integer) 0))));
            succeeded = ((((MR_tag((MR_Word) Uinstr_79)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_79, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (succeeded)
            {
              Label_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_79, (MR_Integer) 1))));
              ll_backend__opt_util__skip_comments_2_p_0(Instrs_77, &TailInstrs_82);
              succeeded = ll_backend__opt_util__is_succeed_next_2_p_0(TailInstrs_82, &Between_83);
            }
            if (succeeded)
            {
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt_scalar_common_2[0]), ((MR_Box) (Label_81)), ((MR_Box) (Between_83)), Var_29, &STATE_VARIABLE_SuccMap_17_86);
            }
            else
              STATE_VARIABLE_SuccMap_17_86 = Var_29;
            ll_backend__frameopt__find_succeed_labels_3_p_0(Instrs_77, STATE_VARIABLE_SuccMap_17_86, &SuccMap_23);
            mercury__counter__allocate_3_p_0(&KeepFrameLabelNum_24, STATE_VARIABLE_C_0_27, &STATE_VARIABLE_C_30_30);
            Var_31 = (MR_Integer) 0;
            Var_32 = (MR_Integer) 1;
            {
              KeepFrameLabel_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), KeepFrameLabel_25, 0) = ((MR_Box) (KeepFrameLabelNum_24));
              MR_hl_field(MR_mktag(0), KeepFrameLabel_25, 1) = ((MR_Box) (ProcLabel_8));
            }
            ll_backend__frameopt__keep_nondet_frame_9_p_0(Remain_20, &Instrs2_26, ProcLabel_8, KeepFrameLabel_25, MkframeUinstr_21, SuccMap_23, LayoutLabels_9, Var_31, &Var_62);
            succeeded = (Var_32 == Var_62);
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_56;

      *STATE_VARIABLE_C_28 = STATE_VARIABLE_C_30_30;
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (LabelInstr_14));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (FrameInfo_17));
        MR_hl_field(MR_mktag(3), Var_40, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (MkframeComment_22));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (KeepFrameLabel_25));
      }
      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) ((MR_String) "tail recursion target, nofulljump"));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (Redoip_18));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (Var_53));
      }
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__frameopt_scalar_common_2[13])));
        MR_hl_field(MR_mktag(3), Var_48, 2) = ((MR_Box) (Var_52));
      }
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) ((MR_String) ""));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Instrs2_26));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_56));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Comments0_15));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
      }
      mercury__list__condense_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_33, Instrs_12);
      *Mod_13 = (MR_Integer) 1;
    }
    else
    {
      *Instrs_12 = Instrs0_11;
      *Mod_13 = (MR_Integer) 0;
      *STATE_VARIABLE_C_28 = STATE_VARIABLE_C_0_27;
    }
  }
}

static void MR_CALL 
ll_backend__frameopt__keep_nondet_frame_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word ProcLabel_3,
  MR_Word KeepFrameLabel_4,
  MR_Word PrevInstr_5,
  MR_Word SuccMap_6,
  MR_Word LayoutLabels_7,
  MR_Word STATE_VARIABLE_Changed_0_8,
  MR_Word * STATE_VARIABLE_Changed_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Changed_9 = STATE_VARIABLE_Changed_0_8;
    }
    else
    {
      MR_Word Instr0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Uinstr0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_18, (MR_Integer) 0))));
      MR_String Comment_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), Instr0_18, (MR_Integer) 1))));
      MR_Word TypeCtorInfo_67_67;
      MR_Word TypeInfo_68_68;
      MR_Word RetLabel_30;
      MR_Word CallModel_34;
      MR_Word BetweenIncl_35;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_69;
      MR_Box conv0_BetweenIncl_35;

      succeeded = ((((MR_tag((MR_Word) Uinstr0_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_27, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_27, (MR_Integer) 1))));
        Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_27, (MR_Integer) 2))));
        CallModel_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_27, (MR_Integer) 6))));
        succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 1))));
            succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ProcLabel_3, Var_69);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_48)) == (MR_Integer) 1);
              if (succeeded)
              {
                RetLabel_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_48, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) CallModel_34)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), CallModel_34, (MR_Integer) 0))) & (MR_Integer) 3);
                  succeeded = (Var_49 == (MR_Integer) 2);
                  if (succeeded)
                  {
                    TypeCtorInfo_67_67 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0);
                    TypeInfo_68_68 = (MR_Word) (&ll_backend__frameopt_scalar_common_2[0]);
                    succeeded = mercury__map__search_3_p_0(TypeCtorInfo_67_67, TypeInfo_68_68, SuccMap_6, ((MR_Box) (RetLabel_30)), &conv0_BetweenIncl_35);
                    if (succeeded)
                    {
                      BetweenIncl_35 = ((MR_Word) (conv0_BetweenIncl_35));
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) PrevInstr_5)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                        succeeded = (BetweenIncl_35 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BetweenIncl_35, (MR_Integer) 0))));
                          Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BetweenIncl_35, (MR_Integer) 1))));
                          Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 0))));
                          succeeded = ((MR_tag((MR_Word) Var_51)) == (MR_Integer) 2);
                          if (succeeded)
                          {
                            succeeded = (Var_52 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_52, (MR_Integer) 0))));
                              Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_52, (MR_Integer) 1))));
                              succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_53, (MR_Integer) 0))));
                                succeeded = ((((MR_tag((MR_Word) Var_54)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_54, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                if (succeeded)
                                {
                                  succeeded = mercury__set_tree234__member_2_p_0(TypeCtorInfo_67_67, ((MR_Box) (RetLabel_30)), LayoutLabels_7);
                                  succeeded = !(succeeded);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Instrs1_41;
        MR_String NewComment_43;
        MR_Word Var_58;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_42;

        ll_backend__frameopt__keep_nondet_frame_9_p_0(Instrs0_19, &Instrs1_41, ProcLabel_3, KeepFrameLabel_4, Uinstr0_27, SuccMap_6, LayoutLabels_7, STATE_VARIABLE_Changed_0_8, &Var_42);
        *STATE_VARIABLE_Changed_9 = (MR_Integer) 1;
        NewComment_43 = mercury__string__f_43_43_2_f_0(Comment_28, (MR_String) " (nondet tailcall)");
        {
          Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (PrevInstr_5));
          MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) ((MR_String) ""));
        }
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (KeepFrameLabel_4));
        }
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (Var_64));
        }
        {
          Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (Var_63));
          MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (NewComment_43));
        }
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Instrs1_41));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_61));
        }
      }
      else
      {
        MR_Word Instrs1_66;

        ll_backend__frameopt__keep_nondet_frame_9_p_0(Instrs0_19, &Instrs1_66, ProcLabel_3, KeepFrameLabel_4, Uinstr0_27, SuccMap_6, LayoutLabels_7, STATE_VARIABLE_Changed_0_8, STATE_VARIABLE_Changed_9);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Instrs1_66));
        }
      }
    }
  }
}

static void MR_CALL 
ll_backend__frameopt__find_succeed_labels_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SuccMap_0_2,
  MR_Word * STATE_VARIABLE_SuccMap_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_SuccMap_3 = STATE_VARIABLE_SuccMap_0_2;
    else
    {
      MR_Word Instr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Uinstr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr_7, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_SuccMap_17_17;
      MR_Word Label_12;
      MR_Word Between_14;
      MR_Word TailInstrs_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_SuccMap_0_2;

      succeeded = ((((MR_tag((MR_Word) Uinstr_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        Label_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_10, (MR_Integer) 1))));
        ll_backend__opt_util__skip_comments_2_p_0(Instrs_8, &TailInstrs_13);
        succeeded = ll_backend__opt_util__is_succeed_next_2_p_0(TailInstrs_13, &Between_14);
      }
      if (succeeded)
      {
        mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt_scalar_common_2[0]), ((MR_Box) (Label_12)), ((MR_Box) (Between_14)), STATE_VARIABLE_SuccMap_0_2, &STATE_VARIABLE_SuccMap_17_17);
      }
      else
        STATE_VARIABLE_SuccMap_17_17 = STATE_VARIABLE_SuccMap_0_2;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Instrs_8;
      next_value_of_STATE_VARIABLE_SuccMap_0_2 = STATE_VARIABLE_SuccMap_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_SuccMap_0_2 = next_value_of_STATE_VARIABLE_SuccMap_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__frameopt__frameopt_main_nondet_stack_7_p_0(
  MR_Word ProcLabel_8,
  MR_Word STATE_VARIABLE_C_0_32,
  MR_Word * STATE_VARIABLE_C_33,
  MR_Word Instrs0_10,
  MR_Word * Instrs_11,
  MR_Word AddComments_12,
  MR_Word * Mod_13)
{
  {
    MR_bool succeeded;
    MR_Word LabelInstr_14;
    MR_Word Comments0_15;
    MR_Word Instrs1_16;
    MR_Word EntryInfo_19;
    MR_Word MkframeInstr_59;
    MR_Word FrameInfo_60;
    MR_Word MaybeRedoip_61;
    MR_Word Redoip_63;
    MR_String Msg_64;
    MR_Integer Size_65;
    MR_Word Var_67;

    ll_backend__opt_util__get_prologue_4_p_0(Instrs0_10, &LabelInstr_14, &Comments0_15, &Instrs1_16);
    succeeded = (Instrs1_16 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MkframeInstr_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_16, (MR_Integer) 0))));
      Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MkframeInstr_59, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_67)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_67, (MR_Integer) 0)))) == (MR_Integer) 4)));
      if (succeeded)
      {
        FrameInfo_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_67, (MR_Integer) 1))));
        MaybeRedoip_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_67, (MR_Integer) 2))));
        succeeded = (MaybeRedoip_61 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Redoip_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRedoip_61, (MR_Integer) 0))));
          succeeded = (Redoip_63 == (MR_Word) ((MR_Unsigned) 8U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) FrameInfo_60)) == (MR_Integer) 1);
            if (succeeded)
            {
              Msg_64 = ((MR_String) ((MR_hl_field(MR_mktag(1), FrameInfo_60, (MR_Integer) 0))));
              Size_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), FrameInfo_60, (MR_Integer) 1))));
              {
                EntryInfo_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), EntryInfo_19, 0) = ((MR_Box) (Msg_64));
                MR_hl_field(MR_mktag(0), EntryInfo_19, 1) = ((MR_Box) (Size_65));
                MR_hl_field(MR_mktag(0), EntryInfo_19, 2) = ((MR_Box) (Redoip_63));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word BasicInstrs_21;
      MR_Word LabelSeq0_22;
      MR_Word PredMap_23;
      MR_Word PreExitDummyLabelMap_24;
      MR_Word STATE_VARIABLE_BlockMap_34_34;
      MR_Word Var_35;
      MR_Word STATE_VARIABLE_C_36_36;
      MR_Word STATE_VARIABLE_BlockMap_39_39;
      MR_Word Var_40;
      MR_Word STATE_VARIABLE_C_41_41;
      MR_Word Var_42;
      MR_Word STATE_VARIABLE_BlockMap_43_43;
      MR_Word _KeepFrame_25;

      mercury__map__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt_scalar_common_1[2]), &STATE_VARIABLE_BlockMap_34_34);
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (LabelInstr_14));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Instrs1_16));
      }
      ll_backend__frameopt__divide_into_basic_blocks_5_p_0(Var_35, ProcLabel_8, &BasicInstrs_21, STATE_VARIABLE_C_0_32, &STATE_VARIABLE_C_36_36);
      Var_40 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
      Var_42 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
      ll_backend__frameopt__build_frame_block_map_14_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_1[3]), BasicInstrs_21, ((MR_Box) (EntryInfo_19)), &LabelSeq0_22, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), ProcLabel_8, STATE_VARIABLE_BlockMap_34_34, &STATE_VARIABLE_BlockMap_39_39, Var_40, &PredMap_23, STATE_VARIABLE_C_36_36, &STATE_VARIABLE_C_41_41, Var_42, &PreExitDummyLabelMap_24);
      ll_backend__frameopt__analyze_block_map_5_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_1[3]), LabelSeq0_22, PreExitDummyLabelMap_24, STATE_VARIABLE_BlockMap_39_39, &STATE_VARIABLE_BlockMap_43_43, &_KeepFrame_25);
      if ((LabelSeq0_22 == (MR_Word) ((MR_Unsigned) 0U)))
        succeeded = MR_TRUE;
      else
      {
        MR_Word Label_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LabelSeq0_22, (MR_Integer) 0))));
        MR_Word BlockInfo_72;
        MR_Word Var_74;
        MR_Box conv0_BlockInfo_72;

        mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt_scalar_common_1[2]), STATE_VARIABLE_BlockMap_43_43, ((MR_Box) (Label_69)), &conv0_BlockInfo_72);
        BlockInfo_72 = ((MR_Word) (conv0_BlockInfo_72));
        Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_72, (MR_Integer) 5))));
        succeeded = ((MR_tag((MR_Word) Var_74)) == (MR_Integer) 0);
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        MR_Word LabelSeq_26;
        MR_Word TransformComments_27;
        MR_Word DescComments_28;
        MR_Word CanTransform_29;
        MR_Word STATE_VARIABLE_BlockMap_45_45;

        ll_backend__frameopt__delay_frame_transform_13_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_1[3]), LabelSeq0_22, &LabelSeq_26, ((MR_Box) (EntryInfo_19)), ProcLabel_8, PredMap_23, STATE_VARIABLE_C_41_41, STATE_VARIABLE_C_33, STATE_VARIABLE_BlockMap_43_43, &STATE_VARIABLE_BlockMap_45_45, AddComments_12, &TransformComments_27, &DescComments_28, &CanTransform_29);
        switch (CanTransform_29) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Comments_30;
              MR_Word BodyInstrs_31;
              MR_Word Var_46;

              Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TransformComments_27, DescComments_28);
              Comments_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Comments0_15, Var_46);
              ll_backend__frameopt__flatten_block_seq_3_p_0((MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_nondet_entry_info_0), (MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_nondet_exit_info_0), LabelSeq_26, STATE_VARIABLE_BlockMap_45_45, &BodyInstrs_31);
              *Instrs_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Comments_30, BodyInstrs_31);
              *Mod_13 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 1:
            switch (AddComments_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *Instrs_11 = Instrs0_10;
                  *Mod_13 = (MR_Integer) 0;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_94;

                  Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), DescComments_28, Instrs0_10);
                  *Instrs_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__frameopt_scalar_common_2[5])), Var_94);
                  *Mod_13 = (MR_Integer) 1;
                }
                break;
            }
            break;
        }
      }
      else
      {
        *Instrs_11 = Instrs0_10;
        *Mod_13 = (MR_Integer) 0;
        *STATE_VARIABLE_C_33 = STATE_VARIABLE_C_41_41;
      }
    }
    else
    {
      *Instrs_11 = Instrs0_10;
      *Mod_13 = (MR_Integer) 0;
      *STATE_VARIABLE_C_33 = STATE_VARIABLE_C_0_32;
    }
  }
}

void MR_CALL 
ll_backend__frameopt__frameopt_main_det_stack_7_p_0(
  MR_Word ProcLabel_8,
  MR_Word STATE_VARIABLE_C_0_36,
  MR_Word * STATE_VARIABLE_C_37,
  MR_Word Instrs0_10,
  MR_Word * Instrs_11,
  MR_Word AddComments_12,
  MR_Word * Mod_13)
{
  {
    MR_bool succeeded;
    MR_Word LabelInstr_14;
    MR_Word Comments0_15;
    MR_Word Instrs1_16;
    MR_Word EntryInfo_19;
    MR_Word Var_17;
    MR_Word Var_18;

    ll_backend__opt_util__get_prologue_4_p_0(Instrs0_10, &LabelInstr_14, &Comments0_15, &Instrs1_16);
    succeeded = ll_backend__frameopt__detect_det_entry_4_p_0(Instrs1_16, &Var_17, &Var_18, &EntryInfo_19);
    if (succeeded)
    {
      MR_Word BasicInstrs_21;
      MR_Word LabelSeq0_22;
      MR_Word PredMap_23;
      MR_Word PreExitDummyLabelMap_24;
      MR_Word KeepFrame_25;
      MR_Word STATE_VARIABLE_BlockMap_38_38;
      MR_Word Var_39;
      MR_Word STATE_VARIABLE_C_40_40;
      MR_Word STATE_VARIABLE_BlockMap_43_43;
      MR_Word Var_44;
      MR_Word STATE_VARIABLE_C_45_45;
      MR_Word Var_46;
      MR_Word STATE_VARIABLE_BlockMap_47_47;

      mercury__map__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt_scalar_common_1[0]), &STATE_VARIABLE_BlockMap_38_38);
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (LabelInstr_14));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Instrs1_16));
      }
      ll_backend__frameopt__divide_into_basic_blocks_5_p_0(Var_39, ProcLabel_8, &BasicInstrs_21, STATE_VARIABLE_C_0_36, &STATE_VARIABLE_C_40_40);
      Var_44 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
      Var_46 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
      ll_backend__frameopt__build_frame_block_map_14_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_1[1]), BasicInstrs_21, ((MR_Box) (EntryInfo_19)), &LabelSeq0_22, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), ProcLabel_8, STATE_VARIABLE_BlockMap_38_38, &STATE_VARIABLE_BlockMap_43_43, Var_44, &PredMap_23, STATE_VARIABLE_C_40_40, &STATE_VARIABLE_C_45_45, Var_46, &PreExitDummyLabelMap_24);
      ll_backend__frameopt__analyze_block_map_5_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_1[1]), LabelSeq0_22, PreExitDummyLabelMap_24, STATE_VARIABLE_BlockMap_43_43, &STATE_VARIABLE_BlockMap_47_47, &KeepFrame_25);
      if ((KeepFrame_25 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        succeeded = ll_backend__frameopt__can_delay_frame_2_p_0((MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_det_entry_info_0), (MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_det_exit_info_0), LabelSeq0_22, STATE_VARIABLE_BlockMap_47_47);
        if (succeeded)
        {
          MR_Word TransformComments_33;
          MR_Word DescComments_34;
          MR_Word CanTransform_35;
          MR_Word LabelSeq_62;
          MR_Word STATE_VARIABLE_BlockMap_52_65;

          ll_backend__frameopt__delay_frame_transform_13_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_1[1]), LabelSeq0_22, &LabelSeq_62, ((MR_Box) (EntryInfo_19)), ProcLabel_8, PredMap_23, STATE_VARIABLE_C_45_45, STATE_VARIABLE_C_37, STATE_VARIABLE_BlockMap_47_47, &STATE_VARIABLE_BlockMap_52_65, AddComments_12, &TransformComments_33, &DescComments_34, &CanTransform_35);
          switch (CanTransform_35) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_50;
                MR_Word Comments_58;
                MR_Word BodyInstrs_59;

                Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TransformComments_33, DescComments_34);
                Comments_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Comments0_15, Var_50);
                ll_backend__frameopt__flatten_block_seq_3_p_0((MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_det_entry_info_0), (MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_det_exit_info_0), LabelSeq_62, STATE_VARIABLE_BlockMap_52_65, &BodyInstrs_59);
                *Instrs_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Comments_58, BodyInstrs_59);
                *Mod_13 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 1:
              ll_backend__frameopt__maybe_add_comments_5_p_0(AddComments_12, DescComments_34, Instrs0_10, Instrs_11, Mod_13);
              break;
          }
        }
        else
        {
          *Instrs_11 = Instrs0_10;
          *Mod_13 = (MR_Integer) 0;
          *STATE_VARIABLE_C_37 = STATE_VARIABLE_C_45_45;
        }
      }
      else
      {
        MR_Word FirstLabel_26;
        MR_Word SecondLabel_27;
        MR_Word CanClobberSuccip_28;
        MR_Word Comments_31;
        MR_Word BodyInstrs_32;
        MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), KeepFrame_25, (MR_Integer) 0))));
        MR_Word STATE_VARIABLE_BlockMap_52_52;

        FirstLabel_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 0))));
        SecondLabel_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 1))));
        CanClobberSuccip_28 = ll_backend__frameopt__can_clobber_succip_2_f_0((MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_det_entry_info_0), (MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_det_exit_info_0), LabelSeq0_22, STATE_VARIABLE_BlockMap_47_47);
        ll_backend__frameopt__keep_frame_transform_6_p_0(LabelSeq0_22, FirstLabel_26, SecondLabel_27, CanClobberSuccip_28, STATE_VARIABLE_BlockMap_47_47, &STATE_VARIABLE_BlockMap_52_52);
        Comments_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Comments0_15, (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__frameopt_scalar_common_2[12])));
        ll_backend__frameopt__flatten_block_seq_3_p_0((MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_det_entry_info_0), (MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_det_exit_info_0), LabelSeq0_22, STATE_VARIABLE_BlockMap_52_52, &BodyInstrs_32);
        *Instrs_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Comments_31, BodyInstrs_32);
        *Mod_13 = (MR_Integer) 1;
        *STATE_VARIABLE_C_37 = STATE_VARIABLE_C_45_45;
      }
    }
    else
    {
      *Instrs_11 = Instrs0_10;
      *Mod_13 = (MR_Integer) 0;
      *STATE_VARIABLE_C_37 = STATE_VARIABLE_C_0_36;
    }
  }
}

static void MR_CALL 
ll_backend__frameopt__delay_frame_transform_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Instr_12;

    ll_backend__frameopt__describe_block_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), &conv1_Instr_12);
    *wrapper_arg_2 = ((MR_Box) (conv1_Instr_12));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__delay_frame_transform_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_Label_3;

    succeeded = ll_backend__frameopt__key_block_needs_frame_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Label_3);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_Label_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt__delay_frame_transform_13_p_0(
  MR_Word TypeClassInfo_for_block_entry_exit_68,
  MR_Word STATE_VARIABLE_LabelSeq_0_34,
  MR_Word * STATE_VARIABLE_LabelSeq_35,
  MR_Box EntryInfo_15,
  MR_Word ProcLabel_16,
  MR_Word PredMap_17,
  MR_Word STATE_VARIABLE_C_0_36,
  MR_Word * STATE_VARIABLE_C_37,
  MR_Word STATE_VARIABLE_BlockMap_0_38,
  MR_Word * STATE_VARIABLE_BlockMap_39,
  MR_Word AddComments_20,
  MR_Word * TransformComments_21,
  MR_Word * DescComments_22,
  MR_Word * CanTransform_23)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_73_73;
    MR_Word TypeInfo_75_75;
    MR_Word TypeInfo_76_76;
    MR_Word TypeInfo_77_77;
    MR_Word TypeInfo_81_81;
    MR_Word TypeInfo_82_82;
    MR_Word RevMap_26;
    MR_Word SuccQueue_27;
    MR_Word OrdNeedsFrameList_28;
    MR_Word Frontier_29;
    MR_Word PredQueue_30;
    MR_Word STATE_VARIABLE_OrdNeedsFrame_40_40;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word STATE_VARIABLE_OrdNeedsFrame_45_45;
    MR_Word STATE_VARIABLE_OrdNeedsFrame_46_46;
    MR_Word Var_47;
    MR_Integer STATE_VARIABLE_PropagationStepsLeft_48_48;
    MR_Word STATE_VARIABLE_CanTransform_49_49;
    MR_Word STATE_VARIABLE_OrdNeedsFrame_51_51;
    MR_Integer Var_31;

    STATE_VARIABLE_OrdNeedsFrame_40_40 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0));
    Var_43 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt_scalar_common_2[1]));
    Var_44 = mercury__queue__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_68, (MR_Integer) 1, &TypeInfo_73_73);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_68, (MR_Integer) 2, &TypeInfo_75_75);
    ll_backend__frameopt__delay_frame_init_8_p_0(TypeInfo_73_73, TypeInfo_75_75, STATE_VARIABLE_LabelSeq_0_34, STATE_VARIABLE_BlockMap_0_38, Var_43, &RevMap_26, Var_44, &SuccQueue_27, STATE_VARIABLE_OrdNeedsFrame_40_40, &STATE_VARIABLE_OrdNeedsFrame_45_45);
    Var_47 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_68, (MR_Integer) 1, &TypeInfo_76_76);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_68, (MR_Integer) 2, &TypeInfo_77_77);
    ll_backend__frameopt__propagate_frame_requirement_to_successors_9_p_0(TypeInfo_76_76, TypeInfo_77_77, SuccQueue_27, STATE_VARIABLE_BlockMap_0_38, STATE_VARIABLE_OrdNeedsFrame_45_45, &STATE_VARIABLE_OrdNeedsFrame_46_46, Var_47, (MR_Integer) 10000, &STATE_VARIABLE_PropagationStepsLeft_48_48, (MR_Integer) 0, &STATE_VARIABLE_CanTransform_49_49);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0), STATE_VARIABLE_OrdNeedsFrame_46_46, &OrdNeedsFrameList_28);
    mercury__list__filter_map_3_p_0((MR_Word) (&ll_backend__frameopt_scalar_common_1[4]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt_scalar_common_1[9]), OrdNeedsFrameList_28, &Frontier_29);
    mercury__queue__list_to_queue_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), Frontier_29, &PredQueue_30);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_68, (MR_Integer) 1, &TypeInfo_81_81);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_68, (MR_Integer) 2, &TypeInfo_82_82);
    ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_p_0(TypeInfo_81_81, TypeInfo_82_82, PredQueue_30, STATE_VARIABLE_BlockMap_0_38, RevMap_26, STATE_VARIABLE_OrdNeedsFrame_46_46, &STATE_VARIABLE_OrdNeedsFrame_51_51, STATE_VARIABLE_PropagationStepsLeft_48_48, &Var_31, STATE_VARIABLE_CanTransform_49_49, CanTransform_23);
    switch (*CanTransform_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SetupParMap_32;
          MR_Word ExitParMap_33;
          MR_Word STATE_VARIABLE_C_53_53;
          MR_Word STATE_VARIABLE_BlockMap_54_54;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_58;

          Var_57 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
          Var_55 = (MR_Word) (Var_57);
          Var_58 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
          Var_56 = (MR_Word) (Var_58);
          ll_backend__frameopt__process_frame_delay_11_p_0(TypeClassInfo_for_block_entry_exit_68, STATE_VARIABLE_LabelSeq_0_34, STATE_VARIABLE_OrdNeedsFrame_51_51, ProcLabel_16, STATE_VARIABLE_C_0_36, &STATE_VARIABLE_C_53_53, STATE_VARIABLE_BlockMap_0_38, &STATE_VARIABLE_BlockMap_54_54, Var_55, &SetupParMap_32, Var_56, &ExitParMap_33);
          ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_p_0(TypeClassInfo_for_block_entry_exit_68, STATE_VARIABLE_LabelSeq_0_34, STATE_VARIABLE_LabelSeq_35, EntryInfo_15, ProcLabel_16, STATE_VARIABLE_C_53_53, STATE_VARIABLE_C_37, STATE_VARIABLE_OrdNeedsFrame_51_51, SetupParMap_32, ExitParMap_33, STATE_VARIABLE_BlockMap_54_54, STATE_VARIABLE_BlockMap_39);
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_LabelSeq_35 = STATE_VARIABLE_LabelSeq_0_34;
          *STATE_VARIABLE_C_37 = STATE_VARIABLE_C_0_36;
          *STATE_VARIABLE_BlockMap_39 = STATE_VARIABLE_BlockMap_0_38;
        }
        break;
    }
    switch (AddComments_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *TransformComments_21 = (MR_Word) ((MR_Unsigned) 0U);
          *DescComments_22 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_67;

          *TransformComments_21 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__frameopt_scalar_common_2[7]));
          {
            Var_67 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&ll_backend__frameopt_scalar_common_10[0]));
            MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (ll_backend__frameopt__delay_frame_transform_13_p_0_2));
            MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (TypeClassInfo_for_block_entry_exit_68));
            MR_hl_field(MR_mktag(0), Var_67, 4) = ((MR_Box) (*STATE_VARIABLE_BlockMap_39));
            MR_hl_field(MR_mktag(0), Var_67, 5) = ((MR_Box) (STATE_VARIABLE_OrdNeedsFrame_51_51));
            MR_hl_field(MR_mktag(0), Var_67, 6) = ((MR_Box) (PredMap_17));
            MR_hl_field(MR_mktag(0), Var_67, 7) = ((MR_Box) (ProcLabel_16));
          }
          mercury__list__map_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_67, *STATE_VARIABLE_LabelSeq_35, DescComments_22);
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2103__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2062__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__frameopt__IntroducedFrom__pred__create_parallels__2059__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_p_0(
  MR_Word TypeClassInfo_for_block_entry_exit_153,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Box EntryInfo_3,
  MR_Word ProcLabel_4,
  MR_Word STATE_VARIABLE_C_0_5,
  MR_Word * STATE_VARIABLE_C_6,
  MR_Word OrdNeedsFrame_7,
  MR_Word SetupParMap_8,
  MR_Word ExitParMap_9,
  MR_Word STATE_VARIABLE_BlockMap_0_11,
  MR_Word * STATE_VARIABLE_BlockMap_12)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_BlockMap_12 = STATE_VARIABLE_BlockMap_0_11;
      *STATE_VARIABLE_C_6 = STATE_VARIABLE_C_0_5;
    }
    else
    {
      MR_Word TypeInfo_156_156;
      MR_Word TypeInfo_158_158;
      MR_Word TypeInfo_160_160;
      MR_Word Label0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Labels0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Labels1_36;
      MR_Word BlockInfo0_37;
      MR_Word Label0Copy_38;
      MR_Word FallInto_40;
      MR_Word SideLabels_41;
      MR_Word MaybeFallThrough_42;
      MR_Word Type_43;
      MR_Word STATE_VARIABLE_C_70_70;
      MR_Word STATE_VARIABLE_BlockMap_71_71;
      MR_Word Var_72;
      MR_Box conv0_BlockInfo0_37;
      MR_Word ParallelLabel_44;

      ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_p_0(TypeClassInfo_for_block_entry_exit_153, Labels0_26, &Labels1_36, EntryInfo_3, ProcLabel_4, STATE_VARIABLE_C_0_5, &STATE_VARIABLE_C_70_70, OrdNeedsFrame_7, SetupParMap_8, ExitParMap_9, STATE_VARIABLE_BlockMap_0_11, &STATE_VARIABLE_BlockMap_71_71);
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_153, (MR_Integer) 1, &TypeInfo_156_156);
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_153, (MR_Integer) 2, &TypeInfo_158_158);
      {
        TypeInfo_160_160 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_160_160, 0) = ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2));
        MR_hl_field(MR_mktag(0), TypeInfo_160_160, 1) = ((MR_Box) (TypeInfo_156_156));
        MR_hl_field(MR_mktag(0), TypeInfo_160_160, 2) = ((MR_Box) (TypeInfo_158_158));
      }
      mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_160_160, (MR_Word) (STATE_VARIABLE_BlockMap_71_71), ((MR_Box) (Label0_25)), &conv0_BlockInfo0_37);
      BlockInfo0_37 = ((MR_Word) (conv0_BlockInfo0_37));
      Label0Copy_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_37, (MR_Integer) 0))));
      FallInto_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_37, (MR_Integer) 2))));
      SideLabels_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_37, (MR_Integer) 3))));
      MaybeFallThrough_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_37, (MR_Integer) 4))));
      Type_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_37, (MR_Integer) 5))));
      {
        Var_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&ll_backend__frameopt_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_p_0_1));
        MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (Label0_25));
        MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) (Label0Copy_38));
      }
      mercury__require__expect_3_p_0(Var_72, (MR_String) "predicate \140ll_backend.frameopt.create_parallels\'/12", (MR_String) "label in frame_block_info is not copy");
      succeeded = ll_backend__frameopt__search_exit_par_map_3_p_0(ExitParMap_9, Label0_25, &ParallelLabel_44);
      if (succeeded)
      {
        MR_Word Comments_45;
        MR_Word PrevNeedsFrame_48;
        MR_Word Var_75;
        MR_Word TypeInfo_163_163;
        MR_Word TypeInfo_164_164;

        {
          Var_75 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&ll_backend__frameopt_scalar_common_4[4]));
          MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_p_0_2));
          MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (MaybeFallThrough_42));
          MR_hl_field(MR_mktag(0), Var_75, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_75, (MR_String) "predicate \140ll_backend.frameopt.create_parallels\'/12", (MR_String) "exit block with parallel has fall through");
        if ((SideLabels_41 == (MR_Word) ((MR_Unsigned) 0U)))
          Comments_45 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word Var_79;
          MR_Word Var_80;
          MR_String Var_81;
          MR_String Var_83;
          MR_Word Var_84;

          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (ProcLabel_4));
          }
          Var_83 = ll_backend__opt_debug__dump_labels_2_f_0(Var_84, SideLabels_41);
          Var_81 = mercury__string__f_43_43_2_f_0((MR_String) "exit side labels ", Var_83);
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
          }
          {
            Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (Var_80));
            MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            Comments_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Comments_45, 0) = ((MR_Box) (Var_79));
            MR_hl_field(MR_mktag(1), Comments_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_153, (MR_Integer) 1, &TypeInfo_163_163);
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_153, (MR_Integer) 2, &TypeInfo_164_164);
        PrevNeedsFrame_48 = ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_118_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_44_32_50_93_95_48_2_f_0(OrdNeedsFrame_7, BlockInfo0_37);
        switch (MR_tag((MR_Word) Type_43)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.frameopt.create_parallels\'/12", (MR_String) "block in exit_par_map is not exit");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box ExitInfo_49 = (MR_hl_field(MR_mktag(2), Type_43, (MR_Integer) 0));
              MR_Word LabelInstr_50;
              MR_Word ReplacementCode_51;
              MR_Word ParallelBlockFallInto_53;
              MR_Word ParallelBlockInfo_54;
              MR_Word Var_89;
              MR_Word Var_91;
              MR_Word Var_93;
              MR_Word Var_94;
              MR_Word STATE_VARIABLE_BlockMap_98_98;
              MR_Word conv2_STATE_VARIABLE_BlockMap_12;

              {
                Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_89, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Var_89, 1) = ((MR_Box) (ParallelLabel_44));
              }
              {
                LabelInstr_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), LabelInstr_50, 0) = ((MR_Box) (Var_89));
                MR_hl_field(MR_mktag(0), LabelInstr_50, 1) = ((MR_Box) ((MR_String) "non-teardown parallel"));
              }
              {
                Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (LabelInstr_50));
                MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_94 = ll_backend__frameopt__non_teardown_exit_code_1_f_0(TypeClassInfo_for_block_entry_exit_153, ExitInfo_49);
              Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Comments_45, Var_94);
              ReplacementCode_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_91, Var_93);
              switch (PrevNeedsFrame_48) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word BlockInfo_52;
                    MR_Word Var_96;
                    MR_Word Var_141;
                    MR_Word Var_142;
                    MR_Word Var_144;
                    MR_Word Var_145;
                    MR_Word Var_146;
                    MR_Word conv1_STATE_VARIABLE_BlockMap_98_98;

                    {
                      Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (Label0_25));
                      MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Labels1_36));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__2_2 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ParallelLabel_44));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_96));
                    }
                    Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_37, (MR_Integer) 0))));
                    Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_37, (MR_Integer) 1))));
                    Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_37, (MR_Integer) 3))));
                    Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_37, (MR_Integer) 4))));
                    Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_37, (MR_Integer) 5))));
                    {
                      BlockInfo_52 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), BlockInfo_52, 0) = ((MR_Box) (Var_141));
                      MR_hl_field(MR_mktag(0), BlockInfo_52, 1) = ((MR_Box) (Var_142));
                      MR_hl_field(MR_mktag(0), BlockInfo_52, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), BlockInfo_52, 3) = ((MR_Box) (Var_144));
                      MR_hl_field(MR_mktag(0), BlockInfo_52, 4) = ((MR_Box) (Var_145));
                      MR_hl_field(MR_mktag(0), BlockInfo_52, 5) = ((MR_Box) (Var_146));
                    }
                    mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_160_160, ((MR_Box) (Label0_25)), ((MR_Box) (BlockInfo_52)), (MR_Word) (STATE_VARIABLE_BlockMap_71_71), &conv1_STATE_VARIABLE_BlockMap_98_98);
                    STATE_VARIABLE_BlockMap_98_98 = (MR_Word) (conv1_STATE_VARIABLE_BlockMap_98_98);
                    ParallelBlockFallInto_53 = FallInto_40;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Var_95;

                    {
                      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (ParallelLabel_44));
                      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Labels1_36));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__2_2 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Label0_25));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_95));
                    }
                    ParallelBlockFallInto_53 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_BlockMap_98_98 = STATE_VARIABLE_BlockMap_71_71;
                  }
                  break;
              }
              {
                ParallelBlockInfo_54 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ParallelBlockInfo_54, 0) = ((MR_Box) (ParallelLabel_44));
                MR_hl_field(MR_mktag(0), ParallelBlockInfo_54, 1) = ((MR_Box) (ReplacementCode_51));
                MR_hl_field(MR_mktag(0), ParallelBlockInfo_54, 2) = ((MR_Box) (ParallelBlockFallInto_53));
                MR_hl_field(MR_mktag(0), ParallelBlockInfo_54, 3) = ((MR_Box) (SideLabels_41));
                MR_hl_field(MR_mktag(0), ParallelBlockInfo_54, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), ParallelBlockInfo_54, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__frameopt_scalar_common_3[4])));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_160_160, ((MR_Box) (ParallelLabel_44)), ((MR_Box) (ParallelBlockInfo_54)), (MR_Word) (STATE_VARIABLE_BlockMap_98_98), &conv2_STATE_VARIABLE_BlockMap_12);
              *STATE_VARIABLE_BlockMap_12 = (MR_Word) (conv2_STATE_VARIABLE_BlockMap_12);
            }
            break;
        }
        *STATE_VARIABLE_C_6 = STATE_VARIABLE_C_70_70;
      }
      else
      {
        MR_Word SetupLabel_58;

        succeeded = ll_backend__frameopt__search_setup_par_map_3_p_0(SetupParMap_8, Label0_25, &SetupLabel_58);
        if (succeeded)
        {
          MR_Word SetupFallInto_63;
          MR_Word SetupCode_64;
          MR_Word SetupBlockInfo_65;
          MR_Word Var_104;
          MR_Word STATE_VARIABLE_BlockMap_124_124;
          MR_Word Var_125;
          MR_Word Var_126;
          MR_Word Var_127;
          MR_Word Var_130;
          MR_Word Var_132;
          MR_Word Var_133;
          MR_Word PrevNeedsFrame_137;
          MR_Word TypeInfo_170_170;
          MR_Word TypeInfo_171_171;
          MR_Word conv5_STATE_VARIABLE_BlockMap_12;

          {
            Var_104 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (&ll_backend__frameopt_scalar_common_4[5]));
            MR_hl_field(MR_mktag(0), Var_104, 1) = ((MR_Box) (ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_112_97_114_97_108_108_101_108_115_95_95_91_49_49_93_95_48_12_p_0_3));
            MR_hl_field(MR_mktag(0), Var_104, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_104, 3) = ((MR_Box) (TypeClassInfo_for_block_entry_exit_153));
            MR_hl_field(MR_mktag(0), Var_104, 4) = ((MR_Box) (Type_43));
          }
          mercury__require__expect_3_p_0(Var_104, (MR_String) "predicate \140ll_backend.frameopt.create_parallels\'/12", (MR_String) "block in setup map is not ordinary");
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_153, (MR_Integer) 1, &TypeInfo_170_170);
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_153, (MR_Integer) 2, &TypeInfo_171_171);
          PrevNeedsFrame_137 = ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_118_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_44_32_50_93_95_48_2_f_0(OrdNeedsFrame_7, BlockInfo0_37);
          switch (PrevNeedsFrame_137) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_107;

                {
                  Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Label0_25));
                  MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Labels1_36));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SetupLabel_58));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_107));
                }
                SetupFallInto_63 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_C_6 = STATE_VARIABLE_C_70_70;
                STATE_VARIABLE_BlockMap_124_124 = STATE_VARIABLE_BlockMap_71_71;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Integer N_59;
                MR_Word JumpAroundLabel_60;
                MR_Word JumpAroundCode_61;
                MR_Word JumpAroundBlockInfo_62;
                MR_Word Var_109;
                MR_Word Var_110;
                MR_Word Var_111;
                MR_Word Var_114;
                MR_Word Var_115;
                MR_Word Var_117;
                MR_Word STATE_VARIABLE_BlockMap_122_122;
                MR_Word Var_123;
                MR_Word BlockInfo_135;
                MR_Word conv3_STATE_VARIABLE_BlockMap_122_122;
                MR_Word Var_147;
                MR_Word Var_148;
                MR_Word Var_150;
                MR_Word Var_151;
                MR_Word Var_152;
                MR_Word conv4_STATE_VARIABLE_BlockMap_124_124;

                mercury__counter__allocate_3_p_0(&N_59, STATE_VARIABLE_C_70_70, STATE_VARIABLE_C_6);
                {
                  JumpAroundLabel_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), JumpAroundLabel_60, 0) = ((MR_Box) (N_59));
                  MR_hl_field(MR_mktag(0), JumpAroundLabel_60, 1) = ((MR_Box) (ProcLabel_4));
                }
                {
                  Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Label0_25));
                }
                {
                  Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_110, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), Var_110, 1) = ((MR_Box) (Var_111));
                }
                {
                  Var_109 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_109, 0) = ((MR_Box) (Var_110));
                  MR_hl_field(MR_mktag(0), Var_109, 1) = ((MR_Box) ((MR_String) "jump around setup"));
                }
                {
                  JumpAroundCode_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), JumpAroundCode_61, 0) = ((MR_Box) (Var_109));
                  MR_hl_field(MR_mktag(1), JumpAroundCode_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Label0_25));
                  MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Labels1_36));
                }
                {
                  Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (SetupLabel_58));
                  MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_115));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (JumpAroundLabel_60));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_114));
                }
                {
                  Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (Label0_25));
                  MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  JumpAroundBlockInfo_62 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), JumpAroundBlockInfo_62, 0) = ((MR_Box) (JumpAroundLabel_60));
                  MR_hl_field(MR_mktag(0), JumpAroundBlockInfo_62, 1) = ((MR_Box) (JumpAroundCode_61));
                  MR_hl_field(MR_mktag(0), JumpAroundBlockInfo_62, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), JumpAroundBlockInfo_62, 3) = ((MR_Box) (Var_117));
                  MR_hl_field(MR_mktag(0), JumpAroundBlockInfo_62, 4) = ((MR_Box) (FallInto_40));
                  MR_hl_field(MR_mktag(0), JumpAroundBlockInfo_62, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__frameopt_scalar_common_3[3])));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_160_160, ((MR_Box) (JumpAroundLabel_60)), ((MR_Box) (JumpAroundBlockInfo_62)), (MR_Word) (STATE_VARIABLE_BlockMap_71_71), &conv3_STATE_VARIABLE_BlockMap_122_122);
                STATE_VARIABLE_BlockMap_122_122 = (MR_Word) (conv3_STATE_VARIABLE_BlockMap_122_122);
                {
                  SetupFallInto_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), SetupFallInto_63, 0) = ((MR_Box) (JumpAroundLabel_60));
                }
                {
                  Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (SetupLabel_58));
                }
                Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_37, (MR_Integer) 0))));
                Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_37, (MR_Integer) 1))));
                Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_37, (MR_Integer) 3))));
                Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_37, (MR_Integer) 4))));
                Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_37, (MR_Integer) 5))));
                {
                  BlockInfo_135 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), BlockInfo_135, 0) = ((MR_Box) (Var_147));
                  MR_hl_field(MR_mktag(0), BlockInfo_135, 1) = ((MR_Box) (Var_148));
                  MR_hl_field(MR_mktag(0), BlockInfo_135, 2) = ((MR_Box) (Var_123));
                  MR_hl_field(MR_mktag(0), BlockInfo_135, 3) = ((MR_Box) (Var_150));
                  MR_hl_field(MR_mktag(0), BlockInfo_135, 4) = ((MR_Box) (Var_151));
                  MR_hl_field(MR_mktag(0), BlockInfo_135, 5) = ((MR_Box) (Var_152));
                }
                mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_160_160, ((MR_Box) (Label0_25)), ((MR_Box) (BlockInfo_135)), (MR_Word) (STATE_VARIABLE_BlockMap_122_122), &conv4_STATE_VARIABLE_BlockMap_124_124);
                STATE_VARIABLE_BlockMap_124_124 = (MR_Word) (conv4_STATE_VARIABLE_BlockMap_124_124);
              }
              break;
          }
          {
            Var_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_127, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_127, 1) = ((MR_Box) (SetupLabel_58));
          }
          {
            Var_126 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_126, 0) = ((MR_Box) (Var_127));
            MR_hl_field(MR_mktag(0), Var_126, 1) = ((MR_Box) ((MR_String) "late setup label"));
          }
          {
            Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (Var_126));
            MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_130 = ll_backend__frameopt__late_setup_code_1_f_0(TypeClassInfo_for_block_entry_exit_153, EntryInfo_3);
          SetupCode_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_125, Var_130);
          {
            Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (Label0_25));
          }
          {
            Var_133 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_133, 0) = EntryInfo_3;
          }
          {
            SetupBlockInfo_65 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SetupBlockInfo_65, 0) = ((MR_Box) (SetupLabel_58));
            MR_hl_field(MR_mktag(0), SetupBlockInfo_65, 1) = ((MR_Box) (SetupCode_64));
            MR_hl_field(MR_mktag(0), SetupBlockInfo_65, 2) = ((MR_Box) (SetupFallInto_63));
            MR_hl_field(MR_mktag(0), SetupBlockInfo_65, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), SetupBlockInfo_65, 4) = ((MR_Box) (Var_132));
            MR_hl_field(MR_mktag(0), SetupBlockInfo_65, 5) = ((MR_Box) (Var_133));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_160_160, ((MR_Box) (SetupLabel_58)), ((MR_Box) (SetupBlockInfo_65)), (MR_Word) (STATE_VARIABLE_BlockMap_124_124), &conv5_STATE_VARIABLE_BlockMap_12);
          *STATE_VARIABLE_BlockMap_12 = (MR_Word) (conv5_STATE_VARIABLE_BlockMap_12);
        }
        else
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Label0_25));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Labels1_36));
          }
          *STATE_VARIABLE_BlockMap_12 = STATE_VARIABLE_BlockMap_71_71;
          *STATE_VARIABLE_C_6 = STATE_VARIABLE_C_70_70;
        }
      }
    }
  }
}

static MR_Word MR_CALL 
ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_118_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_44_32_50_93_95_48_2_f_0(
  MR_Word OrdNeedsFrame_4,
  MR_Word BlockInfo_5)
{
  {
    MR_bool succeeded;
    MR_Word PrevNeedsFrame_6;
    MR_Word MaybeFallIntoFrom_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_5, (MR_Integer) 2))));

    if ((MaybeFallIntoFrom_7 == (MR_Word) ((MR_Unsigned) 0U)))
      PrevNeedsFrame_6 = (MR_Integer) 1;
    else
    {
      MR_Word FallIntoFrom_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFallIntoFrom_7, (MR_Integer) 0))));
      MR_Word NeedsFrame_9;
      MR_Box conv0_NeedsFrame_9;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0), OrdNeedsFrame_4, ((MR_Box) (FallIntoFrom_8)), &conv0_NeedsFrame_9);
      if (succeeded)
      {
        NeedsFrame_9 = ((MR_Word) (conv0_NeedsFrame_9));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        PrevNeedsFrame_6 = NeedsFrame_9;
      else
        PrevNeedsFrame_6 = (MR_Integer) 1;
    }
    return PrevNeedsFrame_6;
  }
}

static MR_Word MR_CALL 
ll_backend__frameopt__non_teardown_exit_code_1_f_0(
  MR_Word TypeClassInfo_for_block_entry_exit_3,
  MR_Box HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_block_entry_exit_3, (MR_Integer) 0)), (MR_Integer) 8))));
    MR_Box conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_block_entry_exit_3)), HeadVar__1_1);
    HeadVar__2_2 = ((MR_Word) (conv1_HeadVar__2_2));
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
ll_backend__frameopt__late_setup_code_1_f_0(
  MR_Word TypeClassInfo_for_block_entry_exit_3,
  MR_Box HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_block_entry_exit_3, (MR_Integer) 0)), (MR_Integer) 7))));
    MR_Box conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_block_entry_exit_3)), HeadVar__1_1);
    HeadVar__2_2 = ((MR_Word) (conv1_HeadVar__2_2));
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__search_exit_par_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Label_5,
  MR_Word * ParallelLabel_6)
{
  {
    MR_bool succeeded;
    MR_Word ParMap_4 = (MR_Word) (HeadVar__1_1);
    MR_Box conv0_ParallelLabel_6;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ParMap_4, ((MR_Box) (Label_5)), &conv0_ParallelLabel_6);
    if (succeeded)
    {
      *ParallelLabel_6 = ((MR_Word) (conv0_ParallelLabel_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__search_setup_par_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Label_5,
  MR_Word * ParallelLabel_6)
{
  {
    MR_bool succeeded;
    MR_Word ParMap_4 = (MR_Word) (HeadVar__1_1);
    MR_Box conv0_ParallelLabel_6;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ParMap_4, ((MR_Box) (Label_5)), &conv0_ParallelLabel_6);
    if (succeeded)
    {
      *ParallelLabel_6 = ((MR_Word) (conv0_ParallelLabel_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__process_frame_delay_11_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__frameopt__IntroducedFrom__pred__process_frame_delay__1858__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__transform_nostack_ordinary_block_13_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__frameopt__no_disagreement_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt__process_frame_delay_11_p_0(
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88,
  MR_Word tscc_proc_1_input_2_HeadVar__1_1,
  MR_Word tscc_proc_1_input_3_OrdNeedsFrame_2,
  MR_Word tscc_proc_1_input_4_ProcLabel_3,
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_C_0_4,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_C_5,
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_BlockMap_7,
  MR_Word tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8,
  MR_Word * tscc_output_ptr_3_STATE_VARIABLE_SetupParMap_9,
  MR_Word tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10,
  MR_Word * tscc_output_ptr_4_STATE_VARIABLE_ExitParMap_11)
{
  {
    MR_Word tscc_proc_2_input_1_TypeClassInfo_for_block_entry_exit_72;
    MR_Word tscc_proc_2_input_2_Label0_14;
    MR_Word tscc_proc_2_input_3_Labels0_15;
    MR_Word tscc_proc_2_input_4_BlockInfo0_16;
    MR_Word tscc_proc_2_input_5_OrdNeedsFrame_17;
    MR_Word tscc_proc_2_input_6_ProcLabel_18;
    MR_Word tscc_proc_2_input_7_STATE_VARIABLE_C_0_42;
    MR_Word tscc_proc_2_input_8_STATE_VARIABLE_BlockMap_0_44;
    MR_Word tscc_proc_2_input_9_STATE_VARIABLE_SetupParMap_0_46;
    MR_Word tscc_proc_2_input_10_STATE_VARIABLE_ExitParMap_0_48;
    MR_Word tscc_output_1_STATE_VARIABLE_C_5;
    MR_Word tscc_output_2_STATE_VARIABLE_BlockMap_7;
    MR_Word tscc_output_3_STATE_VARIABLE_SetupParMap_9;
    MR_Word tscc_output_4_STATE_VARIABLE_ExitParMap_11;

    // The code for TSCC PROC 1: pred ll_backend.frameopt.process_frame_delay/11-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ll_backend.frameopt.process_frame_delay/11-0
    ;
    // proc 2 in TSCC: pred ll_backend.frameopt.transform_nostack_ordinary_block/13-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word TypeClassInfo_for_block_entry_exit_88 = tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88;
      MR_Word HeadVar__1_1 = tscc_proc_1_input_2_HeadVar__1_1;
      MR_Word OrdNeedsFrame_2 = tscc_proc_1_input_3_OrdNeedsFrame_2;
      MR_Word ProcLabel_3 = tscc_proc_1_input_4_ProcLabel_3;
      MR_Word STATE_VARIABLE_C_0_4 = tscc_proc_1_input_5_STATE_VARIABLE_C_0_4;
      MR_Word STATE_VARIABLE_C_5;
      MR_Word STATE_VARIABLE_BlockMap_0_6 = tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6;
      MR_Word STATE_VARIABLE_BlockMap_7;
      MR_Word STATE_VARIABLE_SetupParMap_0_8 = tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8;
      MR_Word STATE_VARIABLE_SetupParMap_9;
      MR_Word STATE_VARIABLE_ExitParMap_0_10 = tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10;
      MR_Word STATE_VARIABLE_ExitParMap_11;
      MR_bool succeeded;

      if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        STATE_VARIABLE_ExitParMap_11 = STATE_VARIABLE_ExitParMap_0_10;
        STATE_VARIABLE_SetupParMap_9 = STATE_VARIABLE_SetupParMap_0_8;
        STATE_VARIABLE_BlockMap_7 = STATE_VARIABLE_BlockMap_0_6;
        STATE_VARIABLE_C_5 = STATE_VARIABLE_C_0_4;
      }
      else
      {
        MR_Word TypeInfo_91_91;
        MR_Word TypeInfo_93_93;
        MR_Word TypeInfo_95_95;
        MR_Word Label0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Labels0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
        MR_Word BlockInfo0_34;
        MR_Word Label0Copy_35;
        MR_Word Instrs0_36;
        MR_Word FallInto_37;
        MR_Word SideLabels0_38;
        MR_Word MaybeFallThrough0_39;
        MR_Word Type_40;
        MR_Word Var_60;
        MR_Box conv0_BlockInfo0_34;

        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_88, (MR_Integer) 1, &TypeInfo_91_91);
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_88, (MR_Integer) 2, &TypeInfo_93_93);
        {
          TypeInfo_95_95 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_95_95, 0) = ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2));
          MR_hl_field(MR_mktag(0), TypeInfo_95_95, 1) = ((MR_Box) (TypeInfo_91_91));
          MR_hl_field(MR_mktag(0), TypeInfo_95_95, 2) = ((MR_Box) (TypeInfo_93_93));
        }
        mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_95_95, (MR_Word) (STATE_VARIABLE_BlockMap_0_6), ((MR_Box) (Label0_26)), &conv0_BlockInfo0_34);
        BlockInfo0_34 = ((MR_Word) (conv0_BlockInfo0_34));
        Label0Copy_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_34, (MR_Integer) 0))));
        Instrs0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_34, (MR_Integer) 1))));
        FallInto_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_34, (MR_Integer) 2))));
        SideLabels0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_34, (MR_Integer) 3))));
        MaybeFallThrough0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_34, (MR_Integer) 4))));
        Type_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_34, (MR_Integer) 5))));
        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&ll_backend__frameopt_scalar_common_4[3]));
          MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (ll_backend__frameopt__process_frame_delay_11_p_0_1));
          MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (Label0_26));
          MR_hl_field(MR_mktag(0), Var_60, 4) = ((MR_Box) (Label0Copy_35));
        }
        mercury__require__expect_3_p_0(Var_60, (MR_String) "predicate \140ll_backend.frameopt.process_frame_delay\'/11", (MR_String) "label in frame_block_info is not copy");
        switch (MR_tag((MR_Word) Type_40)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word LabelInstr_46;
              MR_Word BlockInfo_47;
              MR_Word Var_78;
              MR_Word STATE_VARIABLE_BlockMap_83_83;
              MR_Word LabelInstrPrime_42;
              MR_Word Var_75;
              MR_Word conv1_STATE_VARIABLE_BlockMap_83_83;
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88;
              MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
              MR_Word next_value_of_tscc_proc_1_input_3_OrdNeedsFrame_2;
              MR_Word next_value_of_tscc_proc_1_input_4_ProcLabel_3;
              MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_C_0_4;
              MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6;
              MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8;
              MR_Word next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10;

              succeeded = (Instrs0_36 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                LabelInstrPrime_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs0_36, (MR_Integer) 0))));
                Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabelInstrPrime_42, (MR_Integer) 0))));
                succeeded = ((((MR_tag((MR_Word) Var_75)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_75, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (succeeded)
                {
                }
              }
              if (succeeded)
                LabelInstr_46 = LabelInstrPrime_42;
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.frameopt.process_frame_delay\'/11", (MR_String) "setup block does not begin with label");
                  return;
                }
              }
              {
                Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (LabelInstr_46));
                MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                BlockInfo_47 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), BlockInfo_47, 0) = ((MR_Box) (Label0_26));
                MR_hl_field(MR_mktag(0), BlockInfo_47, 1) = ((MR_Box) (Var_78));
                MR_hl_field(MR_mktag(0), BlockInfo_47, 2) = ((MR_Box) (FallInto_37));
                MR_hl_field(MR_mktag(0), BlockInfo_47, 3) = ((MR_Box) (SideLabels0_38));
                MR_hl_field(MR_mktag(0), BlockInfo_47, 4) = ((MR_Box) (MaybeFallThrough0_39));
                MR_hl_field(MR_mktag(0), BlockInfo_47, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__frameopt_scalar_common_3[4])));
              }
              mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_95_95, ((MR_Box) (Label0_26)), ((MR_Box) (BlockInfo_47)), (MR_Word) (STATE_VARIABLE_BlockMap_0_6), &conv1_STATE_VARIABLE_BlockMap_83_83);
              STATE_VARIABLE_BlockMap_83_83 = (MR_Word) (conv1_STATE_VARIABLE_BlockMap_83_83);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88 = TypeClassInfo_for_block_entry_exit_88;
              next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Labels0_27;
              next_value_of_tscc_proc_1_input_3_OrdNeedsFrame_2 = OrdNeedsFrame_2;
              next_value_of_tscc_proc_1_input_4_ProcLabel_3 = ProcLabel_3;
              next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_C_0_4 = STATE_VARIABLE_C_0_4;
              next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6 = STATE_VARIABLE_BlockMap_83_83;
              next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8 = STATE_VARIABLE_SetupParMap_0_8;
              next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10 = STATE_VARIABLE_ExitParMap_0_10;
              tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88;
              tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
              tscc_proc_1_input_3_OrdNeedsFrame_2 = next_value_of_tscc_proc_1_input_3_OrdNeedsFrame_2;
              tscc_proc_1_input_4_ProcLabel_3 = next_value_of_tscc_proc_1_input_4_ProcLabel_3;
              tscc_proc_1_input_5_STATE_VARIABLE_C_0_4 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_C_0_4;
              tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6;
              tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8;
              tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word NeedsFrame_50;
              MR_Box conv2_NeedsFrame_50;

              mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0), OrdNeedsFrame_2, ((MR_Box) (Label0_26)), &conv2_NeedsFrame_50);
              NeedsFrame_50 = ((MR_Word) (conv2_NeedsFrame_50));
              switch (NeedsFrame_50) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_block_entry_exit_72 = TypeClassInfo_for_block_entry_exit_88;
                    MR_Word next_value_of_tscc_proc_2_input_2_Label0_14 = Label0_26;
                    MR_Word next_value_of_tscc_proc_2_input_3_Labels0_15 = Labels0_27;
                    MR_Word next_value_of_tscc_proc_2_input_4_BlockInfo0_16 = BlockInfo0_34;
                    MR_Word next_value_of_tscc_proc_2_input_5_OrdNeedsFrame_17 = OrdNeedsFrame_2;
                    MR_Word next_value_of_tscc_proc_2_input_6_ProcLabel_18 = ProcLabel_3;
                    MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_C_0_42 = STATE_VARIABLE_C_0_4;
                    MR_Word next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_BlockMap_0_44 = STATE_VARIABLE_BlockMap_0_6;
                    MR_Word next_value_of_tscc_proc_2_input_9_STATE_VARIABLE_SetupParMap_0_46 = STATE_VARIABLE_SetupParMap_0_8;
                    MR_Word next_value_of_tscc_proc_2_input_10_STATE_VARIABLE_ExitParMap_0_48 = STATE_VARIABLE_ExitParMap_0_10;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_2_input_1_TypeClassInfo_for_block_entry_exit_72 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_block_entry_exit_72;
                    tscc_proc_2_input_2_Label0_14 = next_value_of_tscc_proc_2_input_2_Label0_14;
                    tscc_proc_2_input_3_Labels0_15 = next_value_of_tscc_proc_2_input_3_Labels0_15;
                    tscc_proc_2_input_4_BlockInfo0_16 = next_value_of_tscc_proc_2_input_4_BlockInfo0_16;
                    tscc_proc_2_input_5_OrdNeedsFrame_17 = next_value_of_tscc_proc_2_input_5_OrdNeedsFrame_17;
                    tscc_proc_2_input_6_ProcLabel_18 = next_value_of_tscc_proc_2_input_6_ProcLabel_18;
                    tscc_proc_2_input_7_STATE_VARIABLE_C_0_42 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_C_0_42;
                    tscc_proc_2_input_8_STATE_VARIABLE_BlockMap_0_44 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_BlockMap_0_44;
                    tscc_proc_2_input_9_STATE_VARIABLE_SetupParMap_0_46 = next_value_of_tscc_proc_2_input_9_STATE_VARIABLE_SetupParMap_0_46;
                    tscc_proc_2_input_10_STATE_VARIABLE_ExitParMap_0_48 = next_value_of_tscc_proc_2_input_10_STATE_VARIABLE_ExitParMap_0_48;
                    goto top_of_proc_2;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88 = TypeClassInfo_for_block_entry_exit_88;
                    MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Labels0_27;
                    MR_Word next_value_of_tscc_proc_1_input_3_OrdNeedsFrame_2 = OrdNeedsFrame_2;
                    MR_Word next_value_of_tscc_proc_1_input_4_ProcLabel_3 = ProcLabel_3;
                    MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_C_0_4 = STATE_VARIABLE_C_0_4;
                    MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6 = STATE_VARIABLE_BlockMap_0_6;
                    MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8 = STATE_VARIABLE_SetupParMap_0_8;
                    MR_Word next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10 = STATE_VARIABLE_ExitParMap_0_10;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88;
                    tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
                    tscc_proc_1_input_3_OrdNeedsFrame_2 = next_value_of_tscc_proc_1_input_3_OrdNeedsFrame_2;
                    tscc_proc_1_input_4_ProcLabel_3 = next_value_of_tscc_proc_1_input_4_ProcLabel_3;
                    tscc_proc_1_input_5_STATE_VARIABLE_C_0_4 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_C_0_4;
                    tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6;
                    tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8;
                    tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10;
                    goto top_of_proc_1;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88 = TypeClassInfo_for_block_entry_exit_88;
              MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Labels0_27;
              MR_Word next_value_of_tscc_proc_1_input_3_OrdNeedsFrame_2 = OrdNeedsFrame_2;
              MR_Word next_value_of_tscc_proc_1_input_4_ProcLabel_3 = ProcLabel_3;
              MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_C_0_4 = STATE_VARIABLE_C_0_4;
              MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6 = STATE_VARIABLE_BlockMap_0_6;
              MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8 = STATE_VARIABLE_SetupParMap_0_8;
              MR_Word next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10 = STATE_VARIABLE_ExitParMap_0_10;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88;
              tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
              tscc_proc_1_input_3_OrdNeedsFrame_2 = next_value_of_tscc_proc_1_input_3_OrdNeedsFrame_2;
              tscc_proc_1_input_4_ProcLabel_3 = next_value_of_tscc_proc_1_input_4_ProcLabel_3;
              tscc_proc_1_input_5_STATE_VARIABLE_C_0_4 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_C_0_4;
              tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6;
              tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8;
              tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10;
              goto top_of_proc_1;
            }
            break;
        }
      }
      tscc_output_1_STATE_VARIABLE_C_5 = STATE_VARIABLE_C_5;
      tscc_output_2_STATE_VARIABLE_BlockMap_7 = STATE_VARIABLE_BlockMap_7;
      tscc_output_3_STATE_VARIABLE_SetupParMap_9 = STATE_VARIABLE_SetupParMap_9;
      tscc_output_4_STATE_VARIABLE_ExitParMap_11 = STATE_VARIABLE_ExitParMap_11;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word TypeClassInfo_for_block_entry_exit_72 = tscc_proc_2_input_1_TypeClassInfo_for_block_entry_exit_72;
      MR_Word Label0_14 = tscc_proc_2_input_2_Label0_14;
      MR_Word Labels0_15 = tscc_proc_2_input_3_Labels0_15;
      MR_Word BlockInfo0_16 = tscc_proc_2_input_4_BlockInfo0_16;
      MR_Word OrdNeedsFrame_17 = tscc_proc_2_input_5_OrdNeedsFrame_17;
      MR_Word ProcLabel_18 = tscc_proc_2_input_6_ProcLabel_18;
      MR_Word STATE_VARIABLE_C_0_42 = tscc_proc_2_input_7_STATE_VARIABLE_C_0_42;
      MR_Word STATE_VARIABLE_C_43;
      MR_Word STATE_VARIABLE_BlockMap_0_44 = tscc_proc_2_input_8_STATE_VARIABLE_BlockMap_0_44;
      MR_Word STATE_VARIABLE_BlockMap_45;
      MR_Word STATE_VARIABLE_SetupParMap_0_46 = tscc_proc_2_input_9_STATE_VARIABLE_SetupParMap_0_46;
      MR_Word STATE_VARIABLE_SetupParMap_47;
      MR_Word STATE_VARIABLE_ExitParMap_0_48 = tscc_proc_2_input_10_STATE_VARIABLE_ExitParMap_0_48;
      MR_Word STATE_VARIABLE_ExitParMap_49;
      MR_bool succeeded;
      MR_Word TypeInfo_74_74;
      MR_Word TypeInfo_76_76;
      MR_Word TypeInfo_81_81;
      MR_Word TypeInfo_82_82;
      MR_Word TypeInfo_84_84;
      MR_Word Instrs0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_16, (MR_Integer) 1))));
      MR_Word FallInto_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_16, (MR_Integer) 2))));
      MR_Word SideLabels0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_16, (MR_Integer) 3))));
      MR_Word MaybeFallThrough0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_16, (MR_Integer) 4))));
      MR_Word Type_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_16, (MR_Integer) 5))));
      MR_Word SideLabels_29;
      MR_Word SideAssocLabelMap_30;
      MR_Word MaybeFallThrough_33;
      MR_Word AssocLabelMap_34;
      MR_Word RedirectFallThrough_35;
      MR_Word PrevInstrs_36;
      MR_Word LastInstr0_37;
      MR_Word LabelMap_38;
      MR_Word LastInstr_39;
      MR_Word Instrs_40;
      MR_Word BlockInfo_41;
      MR_Word STATE_VARIABLE_C_50_50;
      MR_Word STATE_VARIABLE_SetupParMap_51_51;
      MR_Word STATE_VARIABLE_ExitParMap_52_52;
      MR_Word STATE_VARIABLE_C_53_53;
      MR_Word STATE_VARIABLE_SetupParMap_54_54;
      MR_Word STATE_VARIABLE_ExitParMap_55_55;
      MR_Word Var_66;
      MR_Word STATE_VARIABLE_BlockMap_67_67;
      MR_Box conv3_LastInstr0_37;
      MR_Word conv4_STATE_VARIABLE_BlockMap_67_67;
      MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88;
      MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
      MR_Word next_value_of_tscc_proc_1_input_3_OrdNeedsFrame_2;
      MR_Word next_value_of_tscc_proc_1_input_4_ProcLabel_3;
      MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_C_0_4;
      MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6;
      MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8;
      MR_Word next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10;

      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_72, (MR_Integer) 1, &TypeInfo_74_74);
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_72, (MR_Integer) 2, &TypeInfo_76_76);
      ll_backend__frameopt__mark_parallels_for_nostack_successors_12_p_0(TypeInfo_74_74, TypeInfo_76_76, SideLabels0_26, &SideLabels_29, &SideAssocLabelMap_30, OrdNeedsFrame_17, STATE_VARIABLE_BlockMap_0_44, ProcLabel_18, STATE_VARIABLE_C_0_42, &STATE_VARIABLE_C_50_50, STATE_VARIABLE_SetupParMap_0_46, &STATE_VARIABLE_SetupParMap_51_51, STATE_VARIABLE_ExitParMap_0_48, &STATE_VARIABLE_ExitParMap_52_52);
      if ((MaybeFallThrough0_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeFallThrough_33 = (MR_Word) ((MR_Unsigned) 0U);
        AssocLabelMap_34 = SideAssocLabelMap_30;
        RedirectFallThrough_35 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_C_53_53 = STATE_VARIABLE_C_50_50;
        STATE_VARIABLE_SetupParMap_54_54 = STATE_VARIABLE_SetupParMap_51_51;
        STATE_VARIABLE_ExitParMap_55_55 = STATE_VARIABLE_ExitParMap_52_52;
      }
      else
      {
        MR_Word TypeInfo_77_77;
        MR_Word TypeInfo_78_78;
        MR_Word FallThroughLabel0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFallThrough0_27, (MR_Integer) 0))));
        MR_Word FallThroughLabel_32;
        MR_Word Var_56;
        MR_Word Var_59;

        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_72, (MR_Integer) 1, &TypeInfo_77_77);
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_72, (MR_Integer) 2, &TypeInfo_78_78);
        ll_backend__frameopt__mark_parallel_for_nostack_successor_11_p_0(TypeInfo_77_77, TypeInfo_78_78, FallThroughLabel0_31, &FallThroughLabel_32, OrdNeedsFrame_17, STATE_VARIABLE_BlockMap_0_44, ProcLabel_18, STATE_VARIABLE_C_50_50, &STATE_VARIABLE_C_53_53, STATE_VARIABLE_SetupParMap_51_51, &STATE_VARIABLE_SetupParMap_54_54, STATE_VARIABLE_ExitParMap_52_52, &STATE_VARIABLE_ExitParMap_55_55);
        {
          MaybeFallThrough_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeFallThrough_33, 0) = ((MR_Box) (FallThroughLabel_32));
        }
        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&ll_backend__frameopt_scalar_common_9[0]));
          MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (ll_backend__frameopt__transform_nostack_ordinary_block_13_p_0_2));
          MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (SideAssocLabelMap_30));
          MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) (FallThroughLabel0_31));
          MR_hl_field(MR_mktag(0), Var_56, 5) = ((MR_Box) (FallThroughLabel_32));
        }
        mercury__require__expect_3_p_0(Var_56, (MR_String) "predicate \140ll_backend.frameopt.transform_nostack_ordinary_block\'/13", (MR_String) "disagreement");
        {
          Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (FallThroughLabel0_31));
          MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (FallThroughLabel_32));
        }
        {
          AssocLabelMap_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AssocLabelMap_34, 0) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(1), AssocLabelMap_34, 1) = ((MR_Box) (SideAssocLabelMap_30));
        }
        succeeded = ll_backend__llds____Unify____label_0_0(FallThroughLabel_32, FallThroughLabel0_31);
        if (succeeded)
          RedirectFallThrough_35 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_62;

          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (FallThroughLabel_32));
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (Var_62));
          }
          {
            Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (Var_61));
            MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) ((MR_String) "redirect fallthrough"));
          }
          {
            RedirectFallThrough_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), RedirectFallThrough_35, 0) = ((MR_Box) (Var_60));
            MR_hl_field(MR_mktag(1), RedirectFallThrough_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
      }
      mercury__list__det_split_last_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Instrs0_24, &PrevInstrs_36, &conv3_LastInstr0_37);
      LastInstr0_37 = ((MR_Word) (conv3_LastInstr0_37));
      mercury__map__from_assoc_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), AssocLabelMap_34, &LabelMap_38);
      ll_backend__opt_util__replace_labels_instruction_4_p_0(LastInstr0_37, &LastInstr_39, LabelMap_38, (MR_Integer) 0);
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (LastInstr_39));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (RedirectFallThrough_35));
      }
      Instrs_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PrevInstrs_36, Var_66);
      {
        BlockInfo_41 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), BlockInfo_41, 0) = ((MR_Box) (Label0_14));
        MR_hl_field(MR_mktag(0), BlockInfo_41, 1) = ((MR_Box) (Instrs_40));
        MR_hl_field(MR_mktag(0), BlockInfo_41, 2) = ((MR_Box) (FallInto_25));
        MR_hl_field(MR_mktag(0), BlockInfo_41, 3) = ((MR_Box) (SideLabels_29));
        MR_hl_field(MR_mktag(0), BlockInfo_41, 4) = ((MR_Box) (MaybeFallThrough_33));
        MR_hl_field(MR_mktag(0), BlockInfo_41, 5) = ((MR_Box) (Type_28));
      }
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_72, (MR_Integer) 1, &TypeInfo_81_81);
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_72, (MR_Integer) 2, &TypeInfo_82_82);
      {
        TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_84_84, 0) = ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2));
        MR_hl_field(MR_mktag(0), TypeInfo_84_84, 1) = ((MR_Box) (TypeInfo_81_81));
        MR_hl_field(MR_mktag(0), TypeInfo_84_84, 2) = ((MR_Box) (TypeInfo_82_82));
      }
      mercury__map__set_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_84_84, ((MR_Box) (Label0_14)), ((MR_Box) (BlockInfo_41)), (MR_Word) (STATE_VARIABLE_BlockMap_0_44), &conv4_STATE_VARIABLE_BlockMap_67_67);
      STATE_VARIABLE_BlockMap_67_67 = (MR_Word) (conv4_STATE_VARIABLE_BlockMap_67_67);
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88 = TypeClassInfo_for_block_entry_exit_72;
      next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Labels0_15;
      next_value_of_tscc_proc_1_input_3_OrdNeedsFrame_2 = OrdNeedsFrame_17;
      next_value_of_tscc_proc_1_input_4_ProcLabel_3 = ProcLabel_18;
      next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_C_0_4 = STATE_VARIABLE_C_53_53;
      next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6 = STATE_VARIABLE_BlockMap_67_67;
      next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8 = STATE_VARIABLE_SetupParMap_54_54;
      next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10 = STATE_VARIABLE_ExitParMap_55_55;
      tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88;
      tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
      tscc_proc_1_input_3_OrdNeedsFrame_2 = next_value_of_tscc_proc_1_input_3_OrdNeedsFrame_2;
      tscc_proc_1_input_4_ProcLabel_3 = next_value_of_tscc_proc_1_input_4_ProcLabel_3;
      tscc_proc_1_input_5_STATE_VARIABLE_C_0_4 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_C_0_4;
      tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6;
      tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8;
      tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10;
      goto top_of_proc_1;
      tscc_output_1_STATE_VARIABLE_C_5 = STATE_VARIABLE_C_43;
      tscc_output_2_STATE_VARIABLE_BlockMap_7 = STATE_VARIABLE_BlockMap_45;
      tscc_output_3_STATE_VARIABLE_SetupParMap_9 = STATE_VARIABLE_SetupParMap_47;
      tscc_output_4_STATE_VARIABLE_ExitParMap_11 = STATE_VARIABLE_ExitParMap_49;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_C_5 = tscc_output_1_STATE_VARIABLE_C_5;
    *tscc_output_ptr_2_STATE_VARIABLE_BlockMap_7 = tscc_output_2_STATE_VARIABLE_BlockMap_7;
    *tscc_output_ptr_3_STATE_VARIABLE_SetupParMap_9 = tscc_output_3_STATE_VARIABLE_SetupParMap_9;
    *tscc_output_ptr_4_STATE_VARIABLE_ExitParMap_11 = tscc_output_4_STATE_VARIABLE_ExitParMap_11;
    return;
  }
}

static void MR_CALL 
ll_backend__frameopt__transform_nostack_ordinary_block_13_p_0(
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_block_entry_exit_72,
  MR_Word tscc_proc_2_input_2_Label0_14,
  MR_Word tscc_proc_2_input_3_Labels0_15,
  MR_Word tscc_proc_2_input_4_BlockInfo0_16,
  MR_Word tscc_proc_2_input_5_OrdNeedsFrame_17,
  MR_Word tscc_proc_2_input_6_ProcLabel_18,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_C_0_42,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_C_5,
  MR_Word tscc_proc_2_input_8_STATE_VARIABLE_BlockMap_0_44,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_BlockMap_7,
  MR_Word tscc_proc_2_input_9_STATE_VARIABLE_SetupParMap_0_46,
  MR_Word * tscc_output_ptr_3_STATE_VARIABLE_SetupParMap_9,
  MR_Word tscc_proc_2_input_10_STATE_VARIABLE_ExitParMap_0_48,
  MR_Word * tscc_output_ptr_4_STATE_VARIABLE_ExitParMap_11)
{
  {
    MR_Word tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88;
    MR_Word tscc_proc_1_input_2_HeadVar__1_1;
    MR_Word tscc_proc_1_input_3_OrdNeedsFrame_2;
    MR_Word tscc_proc_1_input_4_ProcLabel_3;
    MR_Word tscc_proc_1_input_5_STATE_VARIABLE_C_0_4;
    MR_Word tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6;
    MR_Word tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8;
    MR_Word tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10;
    MR_Word tscc_output_1_STATE_VARIABLE_C_5;
    MR_Word tscc_output_2_STATE_VARIABLE_BlockMap_7;
    MR_Word tscc_output_3_STATE_VARIABLE_SetupParMap_9;
    MR_Word tscc_output_4_STATE_VARIABLE_ExitParMap_11;

    // The code for TSCC PROC 2: pred ll_backend.frameopt.transform_nostack_ordinary_block/13-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ll_backend.frameopt.process_frame_delay/11-0
    ;
    // proc 2 in TSCC: pred ll_backend.frameopt.transform_nostack_ordinary_block/13-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word TypeClassInfo_for_block_entry_exit_88 = tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88;
      MR_Word HeadVar__1_1 = tscc_proc_1_input_2_HeadVar__1_1;
      MR_Word OrdNeedsFrame_2 = tscc_proc_1_input_3_OrdNeedsFrame_2;
      MR_Word ProcLabel_3 = tscc_proc_1_input_4_ProcLabel_3;
      MR_Word STATE_VARIABLE_C_0_4 = tscc_proc_1_input_5_STATE_VARIABLE_C_0_4;
      MR_Word STATE_VARIABLE_C_5;
      MR_Word STATE_VARIABLE_BlockMap_0_6 = tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6;
      MR_Word STATE_VARIABLE_BlockMap_7;
      MR_Word STATE_VARIABLE_SetupParMap_0_8 = tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8;
      MR_Word STATE_VARIABLE_SetupParMap_9;
      MR_Word STATE_VARIABLE_ExitParMap_0_10 = tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10;
      MR_Word STATE_VARIABLE_ExitParMap_11;
      MR_bool succeeded;

      if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        STATE_VARIABLE_ExitParMap_11 = STATE_VARIABLE_ExitParMap_0_10;
        STATE_VARIABLE_SetupParMap_9 = STATE_VARIABLE_SetupParMap_0_8;
        STATE_VARIABLE_BlockMap_7 = STATE_VARIABLE_BlockMap_0_6;
        STATE_VARIABLE_C_5 = STATE_VARIABLE_C_0_4;
      }
      else
      {
        MR_Word TypeInfo_91_91;
        MR_Word TypeInfo_93_93;
        MR_Word TypeInfo_95_95;
        MR_Word Label0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Labels0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
        MR_Word BlockInfo0_34;
        MR_Word Label0Copy_35;
        MR_Word Instrs0_36;
        MR_Word FallInto_37;
        MR_Word SideLabels0_38;
        MR_Word MaybeFallThrough0_39;
        MR_Word Type_40;
        MR_Word Var_60;
        MR_Box conv0_BlockInfo0_34;

        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_88, (MR_Integer) 1, &TypeInfo_91_91);
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_88, (MR_Integer) 2, &TypeInfo_93_93);
        {
          TypeInfo_95_95 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_95_95, 0) = ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2));
          MR_hl_field(MR_mktag(0), TypeInfo_95_95, 1) = ((MR_Box) (TypeInfo_91_91));
          MR_hl_field(MR_mktag(0), TypeInfo_95_95, 2) = ((MR_Box) (TypeInfo_93_93));
        }
        mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_95_95, (MR_Word) (STATE_VARIABLE_BlockMap_0_6), ((MR_Box) (Label0_26)), &conv0_BlockInfo0_34);
        BlockInfo0_34 = ((MR_Word) (conv0_BlockInfo0_34));
        Label0Copy_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_34, (MR_Integer) 0))));
        Instrs0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_34, (MR_Integer) 1))));
        FallInto_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_34, (MR_Integer) 2))));
        SideLabels0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_34, (MR_Integer) 3))));
        MaybeFallThrough0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_34, (MR_Integer) 4))));
        Type_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_34, (MR_Integer) 5))));
        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&ll_backend__frameopt_scalar_common_4[3]));
          MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (ll_backend__frameopt__process_frame_delay_11_p_0_1));
          MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (Label0_26));
          MR_hl_field(MR_mktag(0), Var_60, 4) = ((MR_Box) (Label0Copy_35));
        }
        mercury__require__expect_3_p_0(Var_60, (MR_String) "predicate \140ll_backend.frameopt.process_frame_delay\'/11", (MR_String) "label in frame_block_info is not copy");
        switch (MR_tag((MR_Word) Type_40)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word LabelInstr_46;
              MR_Word BlockInfo_47;
              MR_Word Var_78;
              MR_Word STATE_VARIABLE_BlockMap_83_83;
              MR_Word LabelInstrPrime_42;
              MR_Word Var_75;
              MR_Word conv1_STATE_VARIABLE_BlockMap_83_83;
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88;
              MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
              MR_Word next_value_of_tscc_proc_1_input_3_OrdNeedsFrame_2;
              MR_Word next_value_of_tscc_proc_1_input_4_ProcLabel_3;
              MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_C_0_4;
              MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6;
              MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8;
              MR_Word next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10;

              succeeded = (Instrs0_36 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                LabelInstrPrime_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs0_36, (MR_Integer) 0))));
                Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabelInstrPrime_42, (MR_Integer) 0))));
                succeeded = ((((MR_tag((MR_Word) Var_75)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_75, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (succeeded)
                {
                }
              }
              if (succeeded)
                LabelInstr_46 = LabelInstrPrime_42;
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.frameopt.process_frame_delay\'/11", (MR_String) "setup block does not begin with label");
                  return;
                }
              }
              {
                Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (LabelInstr_46));
                MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                BlockInfo_47 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), BlockInfo_47, 0) = ((MR_Box) (Label0_26));
                MR_hl_field(MR_mktag(0), BlockInfo_47, 1) = ((MR_Box) (Var_78));
                MR_hl_field(MR_mktag(0), BlockInfo_47, 2) = ((MR_Box) (FallInto_37));
                MR_hl_field(MR_mktag(0), BlockInfo_47, 3) = ((MR_Box) (SideLabels0_38));
                MR_hl_field(MR_mktag(0), BlockInfo_47, 4) = ((MR_Box) (MaybeFallThrough0_39));
                MR_hl_field(MR_mktag(0), BlockInfo_47, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__frameopt_scalar_common_3[4])));
              }
              mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_95_95, ((MR_Box) (Label0_26)), ((MR_Box) (BlockInfo_47)), (MR_Word) (STATE_VARIABLE_BlockMap_0_6), &conv1_STATE_VARIABLE_BlockMap_83_83);
              STATE_VARIABLE_BlockMap_83_83 = (MR_Word) (conv1_STATE_VARIABLE_BlockMap_83_83);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88 = TypeClassInfo_for_block_entry_exit_88;
              next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Labels0_27;
              next_value_of_tscc_proc_1_input_3_OrdNeedsFrame_2 = OrdNeedsFrame_2;
              next_value_of_tscc_proc_1_input_4_ProcLabel_3 = ProcLabel_3;
              next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_C_0_4 = STATE_VARIABLE_C_0_4;
              next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6 = STATE_VARIABLE_BlockMap_83_83;
              next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8 = STATE_VARIABLE_SetupParMap_0_8;
              next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10 = STATE_VARIABLE_ExitParMap_0_10;
              tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88;
              tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
              tscc_proc_1_input_3_OrdNeedsFrame_2 = next_value_of_tscc_proc_1_input_3_OrdNeedsFrame_2;
              tscc_proc_1_input_4_ProcLabel_3 = next_value_of_tscc_proc_1_input_4_ProcLabel_3;
              tscc_proc_1_input_5_STATE_VARIABLE_C_0_4 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_C_0_4;
              tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6;
              tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8;
              tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word NeedsFrame_50;
              MR_Box conv2_NeedsFrame_50;

              mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0), OrdNeedsFrame_2, ((MR_Box) (Label0_26)), &conv2_NeedsFrame_50);
              NeedsFrame_50 = ((MR_Word) (conv2_NeedsFrame_50));
              switch (NeedsFrame_50) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_block_entry_exit_72 = TypeClassInfo_for_block_entry_exit_88;
                    MR_Word next_value_of_tscc_proc_2_input_2_Label0_14 = Label0_26;
                    MR_Word next_value_of_tscc_proc_2_input_3_Labels0_15 = Labels0_27;
                    MR_Word next_value_of_tscc_proc_2_input_4_BlockInfo0_16 = BlockInfo0_34;
                    MR_Word next_value_of_tscc_proc_2_input_5_OrdNeedsFrame_17 = OrdNeedsFrame_2;
                    MR_Word next_value_of_tscc_proc_2_input_6_ProcLabel_18 = ProcLabel_3;
                    MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_C_0_42 = STATE_VARIABLE_C_0_4;
                    MR_Word next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_BlockMap_0_44 = STATE_VARIABLE_BlockMap_0_6;
                    MR_Word next_value_of_tscc_proc_2_input_9_STATE_VARIABLE_SetupParMap_0_46 = STATE_VARIABLE_SetupParMap_0_8;
                    MR_Word next_value_of_tscc_proc_2_input_10_STATE_VARIABLE_ExitParMap_0_48 = STATE_VARIABLE_ExitParMap_0_10;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_2_input_1_TypeClassInfo_for_block_entry_exit_72 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_block_entry_exit_72;
                    tscc_proc_2_input_2_Label0_14 = next_value_of_tscc_proc_2_input_2_Label0_14;
                    tscc_proc_2_input_3_Labels0_15 = next_value_of_tscc_proc_2_input_3_Labels0_15;
                    tscc_proc_2_input_4_BlockInfo0_16 = next_value_of_tscc_proc_2_input_4_BlockInfo0_16;
                    tscc_proc_2_input_5_OrdNeedsFrame_17 = next_value_of_tscc_proc_2_input_5_OrdNeedsFrame_17;
                    tscc_proc_2_input_6_ProcLabel_18 = next_value_of_tscc_proc_2_input_6_ProcLabel_18;
                    tscc_proc_2_input_7_STATE_VARIABLE_C_0_42 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_C_0_42;
                    tscc_proc_2_input_8_STATE_VARIABLE_BlockMap_0_44 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_BlockMap_0_44;
                    tscc_proc_2_input_9_STATE_VARIABLE_SetupParMap_0_46 = next_value_of_tscc_proc_2_input_9_STATE_VARIABLE_SetupParMap_0_46;
                    tscc_proc_2_input_10_STATE_VARIABLE_ExitParMap_0_48 = next_value_of_tscc_proc_2_input_10_STATE_VARIABLE_ExitParMap_0_48;
                    goto top_of_proc_2;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88 = TypeClassInfo_for_block_entry_exit_88;
                    MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Labels0_27;
                    MR_Word next_value_of_tscc_proc_1_input_3_OrdNeedsFrame_2 = OrdNeedsFrame_2;
                    MR_Word next_value_of_tscc_proc_1_input_4_ProcLabel_3 = ProcLabel_3;
                    MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_C_0_4 = STATE_VARIABLE_C_0_4;
                    MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6 = STATE_VARIABLE_BlockMap_0_6;
                    MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8 = STATE_VARIABLE_SetupParMap_0_8;
                    MR_Word next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10 = STATE_VARIABLE_ExitParMap_0_10;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88;
                    tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
                    tscc_proc_1_input_3_OrdNeedsFrame_2 = next_value_of_tscc_proc_1_input_3_OrdNeedsFrame_2;
                    tscc_proc_1_input_4_ProcLabel_3 = next_value_of_tscc_proc_1_input_4_ProcLabel_3;
                    tscc_proc_1_input_5_STATE_VARIABLE_C_0_4 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_C_0_4;
                    tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6;
                    tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8;
                    tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10;
                    goto top_of_proc_1;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88 = TypeClassInfo_for_block_entry_exit_88;
              MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Labels0_27;
              MR_Word next_value_of_tscc_proc_1_input_3_OrdNeedsFrame_2 = OrdNeedsFrame_2;
              MR_Word next_value_of_tscc_proc_1_input_4_ProcLabel_3 = ProcLabel_3;
              MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_C_0_4 = STATE_VARIABLE_C_0_4;
              MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6 = STATE_VARIABLE_BlockMap_0_6;
              MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8 = STATE_VARIABLE_SetupParMap_0_8;
              MR_Word next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10 = STATE_VARIABLE_ExitParMap_0_10;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88;
              tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
              tscc_proc_1_input_3_OrdNeedsFrame_2 = next_value_of_tscc_proc_1_input_3_OrdNeedsFrame_2;
              tscc_proc_1_input_4_ProcLabel_3 = next_value_of_tscc_proc_1_input_4_ProcLabel_3;
              tscc_proc_1_input_5_STATE_VARIABLE_C_0_4 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_C_0_4;
              tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6;
              tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8;
              tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10;
              goto top_of_proc_1;
            }
            break;
        }
      }
      tscc_output_1_STATE_VARIABLE_C_5 = STATE_VARIABLE_C_5;
      tscc_output_2_STATE_VARIABLE_BlockMap_7 = STATE_VARIABLE_BlockMap_7;
      tscc_output_3_STATE_VARIABLE_SetupParMap_9 = STATE_VARIABLE_SetupParMap_9;
      tscc_output_4_STATE_VARIABLE_ExitParMap_11 = STATE_VARIABLE_ExitParMap_11;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word TypeClassInfo_for_block_entry_exit_72 = tscc_proc_2_input_1_TypeClassInfo_for_block_entry_exit_72;
      MR_Word Label0_14 = tscc_proc_2_input_2_Label0_14;
      MR_Word Labels0_15 = tscc_proc_2_input_3_Labels0_15;
      MR_Word BlockInfo0_16 = tscc_proc_2_input_4_BlockInfo0_16;
      MR_Word OrdNeedsFrame_17 = tscc_proc_2_input_5_OrdNeedsFrame_17;
      MR_Word ProcLabel_18 = tscc_proc_2_input_6_ProcLabel_18;
      MR_Word STATE_VARIABLE_C_0_42 = tscc_proc_2_input_7_STATE_VARIABLE_C_0_42;
      MR_Word STATE_VARIABLE_C_43;
      MR_Word STATE_VARIABLE_BlockMap_0_44 = tscc_proc_2_input_8_STATE_VARIABLE_BlockMap_0_44;
      MR_Word STATE_VARIABLE_BlockMap_45;
      MR_Word STATE_VARIABLE_SetupParMap_0_46 = tscc_proc_2_input_9_STATE_VARIABLE_SetupParMap_0_46;
      MR_Word STATE_VARIABLE_SetupParMap_47;
      MR_Word STATE_VARIABLE_ExitParMap_0_48 = tscc_proc_2_input_10_STATE_VARIABLE_ExitParMap_0_48;
      MR_Word STATE_VARIABLE_ExitParMap_49;
      MR_bool succeeded;
      MR_Word TypeInfo_74_74;
      MR_Word TypeInfo_76_76;
      MR_Word TypeInfo_81_81;
      MR_Word TypeInfo_82_82;
      MR_Word TypeInfo_84_84;
      MR_Word Instrs0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_16, (MR_Integer) 1))));
      MR_Word FallInto_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_16, (MR_Integer) 2))));
      MR_Word SideLabels0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_16, (MR_Integer) 3))));
      MR_Word MaybeFallThrough0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_16, (MR_Integer) 4))));
      MR_Word Type_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_16, (MR_Integer) 5))));
      MR_Word SideLabels_29;
      MR_Word SideAssocLabelMap_30;
      MR_Word MaybeFallThrough_33;
      MR_Word AssocLabelMap_34;
      MR_Word RedirectFallThrough_35;
      MR_Word PrevInstrs_36;
      MR_Word LastInstr0_37;
      MR_Word LabelMap_38;
      MR_Word LastInstr_39;
      MR_Word Instrs_40;
      MR_Word BlockInfo_41;
      MR_Word STATE_VARIABLE_C_50_50;
      MR_Word STATE_VARIABLE_SetupParMap_51_51;
      MR_Word STATE_VARIABLE_ExitParMap_52_52;
      MR_Word STATE_VARIABLE_C_53_53;
      MR_Word STATE_VARIABLE_SetupParMap_54_54;
      MR_Word STATE_VARIABLE_ExitParMap_55_55;
      MR_Word Var_66;
      MR_Word STATE_VARIABLE_BlockMap_67_67;
      MR_Box conv3_LastInstr0_37;
      MR_Word conv4_STATE_VARIABLE_BlockMap_67_67;
      MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88;
      MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
      MR_Word next_value_of_tscc_proc_1_input_3_OrdNeedsFrame_2;
      MR_Word next_value_of_tscc_proc_1_input_4_ProcLabel_3;
      MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_C_0_4;
      MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6;
      MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8;
      MR_Word next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10;

      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_72, (MR_Integer) 1, &TypeInfo_74_74);
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_72, (MR_Integer) 2, &TypeInfo_76_76);
      ll_backend__frameopt__mark_parallels_for_nostack_successors_12_p_0(TypeInfo_74_74, TypeInfo_76_76, SideLabels0_26, &SideLabels_29, &SideAssocLabelMap_30, OrdNeedsFrame_17, STATE_VARIABLE_BlockMap_0_44, ProcLabel_18, STATE_VARIABLE_C_0_42, &STATE_VARIABLE_C_50_50, STATE_VARIABLE_SetupParMap_0_46, &STATE_VARIABLE_SetupParMap_51_51, STATE_VARIABLE_ExitParMap_0_48, &STATE_VARIABLE_ExitParMap_52_52);
      if ((MaybeFallThrough0_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeFallThrough_33 = (MR_Word) ((MR_Unsigned) 0U);
        AssocLabelMap_34 = SideAssocLabelMap_30;
        RedirectFallThrough_35 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_C_53_53 = STATE_VARIABLE_C_50_50;
        STATE_VARIABLE_SetupParMap_54_54 = STATE_VARIABLE_SetupParMap_51_51;
        STATE_VARIABLE_ExitParMap_55_55 = STATE_VARIABLE_ExitParMap_52_52;
      }
      else
      {
        MR_Word TypeInfo_77_77;
        MR_Word TypeInfo_78_78;
        MR_Word FallThroughLabel0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFallThrough0_27, (MR_Integer) 0))));
        MR_Word FallThroughLabel_32;
        MR_Word Var_56;
        MR_Word Var_59;

        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_72, (MR_Integer) 1, &TypeInfo_77_77);
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_72, (MR_Integer) 2, &TypeInfo_78_78);
        ll_backend__frameopt__mark_parallel_for_nostack_successor_11_p_0(TypeInfo_77_77, TypeInfo_78_78, FallThroughLabel0_31, &FallThroughLabel_32, OrdNeedsFrame_17, STATE_VARIABLE_BlockMap_0_44, ProcLabel_18, STATE_VARIABLE_C_50_50, &STATE_VARIABLE_C_53_53, STATE_VARIABLE_SetupParMap_51_51, &STATE_VARIABLE_SetupParMap_54_54, STATE_VARIABLE_ExitParMap_52_52, &STATE_VARIABLE_ExitParMap_55_55);
        {
          MaybeFallThrough_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeFallThrough_33, 0) = ((MR_Box) (FallThroughLabel_32));
        }
        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&ll_backend__frameopt_scalar_common_9[0]));
          MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (ll_backend__frameopt__transform_nostack_ordinary_block_13_p_0_2));
          MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (SideAssocLabelMap_30));
          MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) (FallThroughLabel0_31));
          MR_hl_field(MR_mktag(0), Var_56, 5) = ((MR_Box) (FallThroughLabel_32));
        }
        mercury__require__expect_3_p_0(Var_56, (MR_String) "predicate \140ll_backend.frameopt.transform_nostack_ordinary_block\'/13", (MR_String) "disagreement");
        {
          Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (FallThroughLabel0_31));
          MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (FallThroughLabel_32));
        }
        {
          AssocLabelMap_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AssocLabelMap_34, 0) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(1), AssocLabelMap_34, 1) = ((MR_Box) (SideAssocLabelMap_30));
        }
        succeeded = ll_backend__llds____Unify____label_0_0(FallThroughLabel_32, FallThroughLabel0_31);
        if (succeeded)
          RedirectFallThrough_35 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_62;

          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (FallThroughLabel_32));
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (Var_62));
          }
          {
            Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (Var_61));
            MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) ((MR_String) "redirect fallthrough"));
          }
          {
            RedirectFallThrough_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), RedirectFallThrough_35, 0) = ((MR_Box) (Var_60));
            MR_hl_field(MR_mktag(1), RedirectFallThrough_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
      }
      mercury__list__det_split_last_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Instrs0_24, &PrevInstrs_36, &conv3_LastInstr0_37);
      LastInstr0_37 = ((MR_Word) (conv3_LastInstr0_37));
      mercury__map__from_assoc_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), AssocLabelMap_34, &LabelMap_38);
      ll_backend__opt_util__replace_labels_instruction_4_p_0(LastInstr0_37, &LastInstr_39, LabelMap_38, (MR_Integer) 0);
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (LastInstr_39));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (RedirectFallThrough_35));
      }
      Instrs_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PrevInstrs_36, Var_66);
      {
        BlockInfo_41 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), BlockInfo_41, 0) = ((MR_Box) (Label0_14));
        MR_hl_field(MR_mktag(0), BlockInfo_41, 1) = ((MR_Box) (Instrs_40));
        MR_hl_field(MR_mktag(0), BlockInfo_41, 2) = ((MR_Box) (FallInto_25));
        MR_hl_field(MR_mktag(0), BlockInfo_41, 3) = ((MR_Box) (SideLabels_29));
        MR_hl_field(MR_mktag(0), BlockInfo_41, 4) = ((MR_Box) (MaybeFallThrough_33));
        MR_hl_field(MR_mktag(0), BlockInfo_41, 5) = ((MR_Box) (Type_28));
      }
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_72, (MR_Integer) 1, &TypeInfo_81_81);
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_72, (MR_Integer) 2, &TypeInfo_82_82);
      {
        TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_84_84, 0) = ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2));
        MR_hl_field(MR_mktag(0), TypeInfo_84_84, 1) = ((MR_Box) (TypeInfo_81_81));
        MR_hl_field(MR_mktag(0), TypeInfo_84_84, 2) = ((MR_Box) (TypeInfo_82_82));
      }
      mercury__map__set_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_84_84, ((MR_Box) (Label0_14)), ((MR_Box) (BlockInfo_41)), (MR_Word) (STATE_VARIABLE_BlockMap_0_44), &conv4_STATE_VARIABLE_BlockMap_67_67);
      STATE_VARIABLE_BlockMap_67_67 = (MR_Word) (conv4_STATE_VARIABLE_BlockMap_67_67);
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88 = TypeClassInfo_for_block_entry_exit_72;
      next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Labels0_15;
      next_value_of_tscc_proc_1_input_3_OrdNeedsFrame_2 = OrdNeedsFrame_17;
      next_value_of_tscc_proc_1_input_4_ProcLabel_3 = ProcLabel_18;
      next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_C_0_4 = STATE_VARIABLE_C_53_53;
      next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6 = STATE_VARIABLE_BlockMap_67_67;
      next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8 = STATE_VARIABLE_SetupParMap_54_54;
      next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10 = STATE_VARIABLE_ExitParMap_55_55;
      tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_block_entry_exit_88;
      tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
      tscc_proc_1_input_3_OrdNeedsFrame_2 = next_value_of_tscc_proc_1_input_3_OrdNeedsFrame_2;
      tscc_proc_1_input_4_ProcLabel_3 = next_value_of_tscc_proc_1_input_4_ProcLabel_3;
      tscc_proc_1_input_5_STATE_VARIABLE_C_0_4 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_C_0_4;
      tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_BlockMap_0_6;
      tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_SetupParMap_0_8;
      tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_ExitParMap_0_10;
      goto top_of_proc_1;
      tscc_output_1_STATE_VARIABLE_C_5 = STATE_VARIABLE_C_43;
      tscc_output_2_STATE_VARIABLE_BlockMap_7 = STATE_VARIABLE_BlockMap_45;
      tscc_output_3_STATE_VARIABLE_SetupParMap_9 = STATE_VARIABLE_SetupParMap_47;
      tscc_output_4_STATE_VARIABLE_ExitParMap_11 = STATE_VARIABLE_ExitParMap_49;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_C_5 = tscc_output_1_STATE_VARIABLE_C_5;
    *tscc_output_ptr_2_STATE_VARIABLE_BlockMap_7 = tscc_output_2_STATE_VARIABLE_BlockMap_7;
    *tscc_output_ptr_3_STATE_VARIABLE_SetupParMap_9 = tscc_output_3_STATE_VARIABLE_SetupParMap_9;
    *tscc_output_ptr_4_STATE_VARIABLE_ExitParMap_11 = tscc_output_4_STATE_VARIABLE_ExitParMap_11;
    return;
  }
}

static void MR_CALL 
ll_backend__frameopt__mark_parallels_for_nostack_successors_12_p_0(
  MR_Word TypeInfo_for_En_49,
  MR_Word TypeInfo_for_Ex_50,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word OrdNeedsFrame_4,
  MR_Word BlockMap_5,
  MR_Word ProcLabel_6,
  MR_Word STATE_VARIABLE_C_0_7,
  MR_Word * STATE_VARIABLE_C_8,
  MR_Word STATE_VARIABLE_SetupParMap_0_9,
  MR_Word * STATE_VARIABLE_SetupParMap_10,
  MR_Word STATE_VARIABLE_ExitParMap_0_11,
  MR_Word * STATE_VARIABLE_ExitParMap_12)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ExitParMap_12 = STATE_VARIABLE_ExitParMap_0_11;
    *STATE_VARIABLE_SetupParMap_10 = STATE_VARIABLE_SetupParMap_0_9;
    *STATE_VARIABLE_C_8 = STATE_VARIABLE_C_0_7;
  }
  else
  {
    MR_Word Label0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Labels0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Label_27;
    MR_Word Labels_28;
    MR_Word LabelMap_29;
    MR_Word Var_42;
    MR_Word STATE_VARIABLE_C_43_43;
    MR_Word STATE_VARIABLE_SetupParMap_44_44;
    MR_Word STATE_VARIABLE_ExitParMap_45_45;

    ll_backend__frameopt__mark_parallel_for_nostack_successor_11_p_0(TypeInfo_for_En_49, TypeInfo_for_Ex_50, Label0_25, &Label_27, OrdNeedsFrame_4, BlockMap_5, ProcLabel_6, STATE_VARIABLE_C_0_7, &STATE_VARIABLE_C_43_43, STATE_VARIABLE_SetupParMap_0_9, &STATE_VARIABLE_SetupParMap_44_44, STATE_VARIABLE_ExitParMap_0_11, &STATE_VARIABLE_ExitParMap_45_45);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (Label0_25));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (Label_27));
    }
    ll_backend__frameopt__mark_parallels_for_nostack_successors_12_p_0(TypeInfo_for_En_49, TypeInfo_for_Ex_50, Labels0_26, &Labels_28, &LabelMap_29, OrdNeedsFrame_4, BlockMap_5, ProcLabel_6, STATE_VARIABLE_C_43_43, STATE_VARIABLE_C_8, STATE_VARIABLE_SetupParMap_44_44, STATE_VARIABLE_SetupParMap_10, STATE_VARIABLE_ExitParMap_45_45, STATE_VARIABLE_ExitParMap_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Label_27));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Labels_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LabelMap_29));
    }
  }
}

static void MR_CALL 
ll_backend__frameopt__mark_parallel_for_nostack_successor_11_p_0(
  MR_Word TypeInfo_for_En_44,
  MR_Word TypeInfo_for_Ex_45,
  MR_Word Label0_12,
  MR_Word * Label_13,
  MR_Word OrdNeedsFrame_14,
  MR_Word BlockMap_15,
  MR_Word ProcLabel_16,
  MR_Word STATE_VARIABLE_C_0_27,
  MR_Word * STATE_VARIABLE_C_28,
  MR_Word STATE_VARIABLE_SetupParMap_0_29,
  MR_Word * STATE_VARIABLE_SetupParMap_30,
  MR_Word STATE_VARIABLE_ExitParMap_0_31,
  MR_Word * STATE_VARIABLE_ExitParMap_32)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_48_48;
    MR_Word BlockInfo_20;
    MR_Word Type_21;
    MR_Box conv0_BlockInfo_20;

    {
      TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_48_48, 0) = ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2));
      MR_hl_field(MR_mktag(0), TypeInfo_48_48, 1) = ((MR_Box) (TypeInfo_for_En_44));
      MR_hl_field(MR_mktag(0), TypeInfo_48_48, 2) = ((MR_Box) (TypeInfo_for_Ex_45));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_48_48, (MR_Word) (BlockMap_15), ((MR_Box) (Label0_12)), &conv0_BlockInfo_20);
    BlockInfo_20 = ((MR_Word) (conv0_BlockInfo_20));
    Type_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_20, (MR_Integer) 5))));
    switch (MR_tag((MR_Word) Type_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.frameopt.mark_parallel_for_nostack_successor\'/11", (MR_String) "reached setup via jump from ordinary block");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word NeedsFrame_25;
          MR_Box conv2_NeedsFrame_25;

          mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0), OrdNeedsFrame_14, ((MR_Box) (Label0_12)), &conv2_NeedsFrame_25);
          NeedsFrame_25 = ((MR_Word) (conv2_NeedsFrame_25));
          switch (NeedsFrame_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                *Label_13 = Label0_12;
                *STATE_VARIABLE_C_28 = STATE_VARIABLE_C_0_27;
                *STATE_VARIABLE_SetupParMap_30 = STATE_VARIABLE_SetupParMap_0_29;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word ParMap0_77 = (MR_Word) (STATE_VARIABLE_SetupParMap_0_29);
                MR_Word OldParallel_78;
                MR_Box conv3_OldParallel_78;

                succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ParMap0_77, ((MR_Box) (Label0_12)), &conv3_OldParallel_78);
                if (succeeded)
                {
                  OldParallel_78 = ((MR_Word) (conv3_OldParallel_78));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  *Label_13 = OldParallel_78;
                  *STATE_VARIABLE_SetupParMap_30 = STATE_VARIABLE_SetupParMap_0_29;
                  *STATE_VARIABLE_C_28 = STATE_VARIABLE_C_0_27;
                }
                else
                {
                  MR_Integer N_79;
                  MR_Word ParMap_81;

                  mercury__counter__allocate_3_p_0(&N_79, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *Label_13 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (N_79));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcLabel_16));
                  }
                  mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (Label0_12)), ((MR_Box) (*Label_13)), ParMap0_77, &ParMap_81);
                  *STATE_VARIABLE_SetupParMap_30 = (MR_Word) (ParMap_81);
                }
              }
              break;
          }
          *STATE_VARIABLE_ExitParMap_32 = STATE_VARIABLE_ExitParMap_0_31;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ParMap0_59 = (MR_Word) (STATE_VARIABLE_ExitParMap_0_31);
          MR_Word OldParallel_60;
          MR_Box conv1_OldParallel_60;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ParMap0_59, ((MR_Box) (Label0_12)), &conv1_OldParallel_60);
          if (succeeded)
          {
            OldParallel_60 = ((MR_Word) (conv1_OldParallel_60));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            *Label_13 = OldParallel_60;
            *STATE_VARIABLE_ExitParMap_32 = STATE_VARIABLE_ExitParMap_0_31;
            *STATE_VARIABLE_C_28 = STATE_VARIABLE_C_0_27;
          }
          else
          {
            MR_Integer N_61;
            MR_Word ParMap_63;

            mercury__counter__allocate_3_p_0(&N_61, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Label_13 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (N_61));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcLabel_16));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (Label0_12)), ((MR_Box) (*Label_13)), ParMap0_59, &ParMap_63);
            *STATE_VARIABLE_ExitParMap_32 = (MR_Word) (ParMap_63);
          }
          *STATE_VARIABLE_SetupParMap_30 = STATE_VARIABLE_SetupParMap_0_29;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_OrdNeedsFrame_18;
    MR_Word conv3_STATE_VARIABLE_CanTransform_20;

    ll_backend__frameopt__record_frame_need_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_OrdNeedsFrame_18, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_CanTransform_20);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_OrdNeedsFrame_18));
    *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_CanTransform_20));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__frameopt__all_successors_need_frame_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_p_0(
  MR_Word TypeInfo_for_En_41,
  MR_Word TypeInfo_for_Ex_42,
  MR_Word STATE_VARIABLE_Queue_0_20,
  MR_Word BlockMap_11,
  MR_Word RevMap_12,
  MR_Word STATE_VARIABLE_OrdNeedsFrame_0_21,
  MR_Word * STATE_VARIABLE_OrdNeedsFrame_22,
  MR_Integer STATE_VARIABLE_PropagationStepsLeft_0_23,
  MR_Integer * STATE_VARIABLE_PropagationStepsLeft_24,
  MR_Word STATE_VARIABLE_CanTransform_0_25,
  MR_Word * STATE_VARIABLE_CanTransform_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (STATE_VARIABLE_CanTransform_0_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = (STATE_VARIABLE_PropagationStepsLeft_0_23 < (MR_Integer) 0);
          if (succeeded)
          {
            *STATE_VARIABLE_CanTransform_26 = (MR_Integer) 1;
            *STATE_VARIABLE_PropagationStepsLeft_24 = STATE_VARIABLE_PropagationStepsLeft_0_23;
            *STATE_VARIABLE_OrdNeedsFrame_22 = STATE_VARIABLE_OrdNeedsFrame_0_21;
          }
          else
          {
            MR_Word Label_16;
            MR_Word STATE_VARIABLE_Queue_29_29;
            MR_Box conv0_Label_16;

            succeeded = mercury__queue__get_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), &conv0_Label_16, STATE_VARIABLE_Queue_0_20, &STATE_VARIABLE_Queue_29_29);
            if (succeeded)
            {
              Label_16 = ((MR_Word) (conv0_Label_16));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word Predecessors_18;
              MR_Word NowNeedFrameLabels_19;
              MR_Integer STATE_VARIABLE_PropagationStepsLeft_30_30 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_PropagationStepsLeft_0_23 - (MR_Unsigned) (MR_Integer) 1);
              MR_Word STATE_VARIABLE_OrdNeedsFrame_32_32;
              MR_Word Var_33;
              MR_Word Var_34;
              MR_Word STATE_VARIABLE_OrdNeedsFrame_35_35;
              MR_Word STATE_VARIABLE_CanTransform_36_36;
              MR_Word STATE_VARIABLE_Queue_37_37;
              MR_Word PredecessorsPrime_17;
              MR_Box conv1_PredecessorsPrime_17;
              MR_Box conv6_STATE_VARIABLE_OrdNeedsFrame_35_35;
              MR_Box conv5_STATE_VARIABLE_CanTransform_36_36;
              MR_Word next_value_of_STATE_VARIABLE_Queue_0_20;
              MR_Word next_value_of_STATE_VARIABLE_OrdNeedsFrame_0_21;
              MR_Integer next_value_of_STATE_VARIABLE_PropagationStepsLeft_0_23;
              MR_Word next_value_of_STATE_VARIABLE_CanTransform_0_25;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt_scalar_common_2[1]), RevMap_12, ((MR_Box) (Label_16)), &conv1_PredecessorsPrime_17);
              if (succeeded)
              {
                PredecessorsPrime_17 = ((MR_Word) (conv1_PredecessorsPrime_17));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                Predecessors_18 = PredecessorsPrime_17;
                STATE_VARIABLE_OrdNeedsFrame_32_32 = STATE_VARIABLE_OrdNeedsFrame_0_21;
              }
              else
              {
                MR_Word NeedsFrame0_59;
                MR_Box conv2_NeedsFrame0_59;

                Predecessors_18 = (MR_Word) ((MR_Unsigned) 0U);
                mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0), STATE_VARIABLE_OrdNeedsFrame_0_21, ((MR_Box) (Label_16)), &conv2_NeedsFrame0_59);
                NeedsFrame0_59 = ((MR_Word) (conv2_NeedsFrame0_59));
                switch (NeedsFrame0_59) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0), ((MR_Box) (Label_16)), ((MR_Box) ((MR_Integer) 0)), STATE_VARIABLE_OrdNeedsFrame_0_21, &STATE_VARIABLE_OrdNeedsFrame_32_32);
                    }
                    break;
                  case (MR_Integer) 0:
                    STATE_VARIABLE_OrdNeedsFrame_32_32 = STATE_VARIABLE_OrdNeedsFrame_0_21;
                    break;
                }
              }
              {
                Var_33 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&ll_backend__frameopt_scalar_common_7[0]));
                MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_p_0_1));
                MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (TypeInfo_for_En_41));
                MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) (TypeInfo_for_Ex_42));
                MR_hl_field(MR_mktag(0), Var_33, 5) = ((MR_Box) (BlockMap_11));
                MR_hl_field(MR_mktag(0), Var_33, 6) = ((MR_Box) (STATE_VARIABLE_OrdNeedsFrame_32_32));
              }
              mercury__list__filter_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), Var_33, Predecessors_18, &NowNeedFrameLabels_19);
              {
                Var_34 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&ll_backend__frameopt_scalar_common_8[0]));
                MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (ll_backend__frameopt__propagate_frame_requirement_to_predecessors_9_p_0_2));
                MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (TypeInfo_for_En_41));
                MR_hl_field(MR_mktag(0), Var_34, 4) = ((MR_Box) (TypeInfo_for_Ex_42));
                MR_hl_field(MR_mktag(0), Var_34, 5) = ((MR_Box) (BlockMap_11));
              }
              mercury__list__foldl2_6_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt_scalar_common_1[5]), (MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_can_transform_0), Var_34, NowNeedFrameLabels_19, ((MR_Box) (STATE_VARIABLE_OrdNeedsFrame_32_32)), &conv6_STATE_VARIABLE_OrdNeedsFrame_35_35, ((MR_Box) (STATE_VARIABLE_CanTransform_0_25)), &conv5_STATE_VARIABLE_CanTransform_36_36);
              STATE_VARIABLE_OrdNeedsFrame_35_35 = ((MR_Word) (conv6_STATE_VARIABLE_OrdNeedsFrame_35_35));
              STATE_VARIABLE_CanTransform_36_36 = ((MR_Word) (conv5_STATE_VARIABLE_CanTransform_36_36));
              mercury__queue__put_list_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), NowNeedFrameLabels_19, STATE_VARIABLE_Queue_29_29, &STATE_VARIABLE_Queue_37_37);
              // direct tailcall eliminated
              ;
              next_value_of_STATE_VARIABLE_Queue_0_20 = STATE_VARIABLE_Queue_37_37;
              next_value_of_STATE_VARIABLE_OrdNeedsFrame_0_21 = STATE_VARIABLE_OrdNeedsFrame_35_35;
              next_value_of_STATE_VARIABLE_PropagationStepsLeft_0_23 = STATE_VARIABLE_PropagationStepsLeft_30_30;
              next_value_of_STATE_VARIABLE_CanTransform_0_25 = STATE_VARIABLE_CanTransform_36_36;
              STATE_VARIABLE_Queue_0_20 = next_value_of_STATE_VARIABLE_Queue_0_20;
              STATE_VARIABLE_OrdNeedsFrame_0_21 = next_value_of_STATE_VARIABLE_OrdNeedsFrame_0_21;
              STATE_VARIABLE_PropagationStepsLeft_0_23 = next_value_of_STATE_VARIABLE_PropagationStepsLeft_0_23;
              STATE_VARIABLE_CanTransform_0_25 = next_value_of_STATE_VARIABLE_CanTransform_0_25;
              continue;
            }
            else
            {
              *STATE_VARIABLE_CanTransform_26 = STATE_VARIABLE_CanTransform_0_25;
              *STATE_VARIABLE_PropagationStepsLeft_24 = STATE_VARIABLE_PropagationStepsLeft_0_23;
              *STATE_VARIABLE_OrdNeedsFrame_22 = STATE_VARIABLE_OrdNeedsFrame_0_21;
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_OrdNeedsFrame_22 = STATE_VARIABLE_OrdNeedsFrame_0_21;
          *STATE_VARIABLE_PropagationStepsLeft_24 = STATE_VARIABLE_PropagationStepsLeft_0_23;
          *STATE_VARIABLE_CanTransform_26 = STATE_VARIABLE_CanTransform_0_25;
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__propagate_frame_requirement_to_successors_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__frameopt__IntroducedFrom__pred__propagate_frame_requirement_to_successors__1724__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt__propagate_frame_requirement_to_successors_9_p_0(
  MR_Word TypeInfo_for_En_52,
  MR_Word TypeInfo_for_Ex_53,
  MR_Word STATE_VARIABLE_Queue_0_25,
  MR_Word BlockMap_11,
  MR_Word STATE_VARIABLE_OrdNeedsFrame_0_26,
  MR_Word * STATE_VARIABLE_OrdNeedsFrame_27,
  MR_Word STATE_VARIABLE_AlreadyProcessed_0_28,
  MR_Integer STATE_VARIABLE_PropagationStepsLeft_0_29,
  MR_Integer * STATE_VARIABLE_PropagationStepsLeft_30,
  MR_Word STATE_VARIABLE_CanTransform_0_31,
  MR_Word * STATE_VARIABLE_CanTransform_32)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (STATE_VARIABLE_CanTransform_0_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = (STATE_VARIABLE_PropagationStepsLeft_0_29 < (MR_Integer) 0);
          if (succeeded)
          {
            *STATE_VARIABLE_CanTransform_32 = (MR_Integer) 1;
            *STATE_VARIABLE_PropagationStepsLeft_30 = STATE_VARIABLE_PropagationStepsLeft_0_29;
            *STATE_VARIABLE_OrdNeedsFrame_27 = STATE_VARIABLE_OrdNeedsFrame_0_26;
          }
          else
          {
            MR_Word Label_16;
            MR_Word STATE_VARIABLE_Queue_35_35;
            MR_Box conv0_Label_16;

            succeeded = mercury__queue__get_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), &conv0_Label_16, STATE_VARIABLE_Queue_0_25, &STATE_VARIABLE_Queue_35_35);
            if (succeeded)
            {
              Label_16 = ((MR_Word) (conv0_Label_16));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word TypeInfo_57_57;
              MR_Word BlockInfo_17;
              MR_Word BlockType_18;
              MR_Integer STATE_VARIABLE_PropagationStepsLeft_36_36 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_PropagationStepsLeft_0_29 - (MR_Unsigned) (MR_Integer) 1);
              MR_Word STATE_VARIABLE_AlreadyProcessed_38_38;
              MR_Word STATE_VARIABLE_CanTransform_39_39;
              MR_Word STATE_VARIABLE_OrdNeedsFrame_40_40;
              MR_Word STATE_VARIABLE_Queue_43_43;
              MR_Box conv1_BlockInfo_17;
              MR_Word next_value_of_STATE_VARIABLE_Queue_0_25;
              MR_Word next_value_of_STATE_VARIABLE_OrdNeedsFrame_0_26;
              MR_Word next_value_of_STATE_VARIABLE_AlreadyProcessed_0_28;
              MR_Integer next_value_of_STATE_VARIABLE_PropagationStepsLeft_0_29;
              MR_Word next_value_of_STATE_VARIABLE_CanTransform_0_31;

              mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (Label_16)), STATE_VARIABLE_AlreadyProcessed_0_28, &STATE_VARIABLE_AlreadyProcessed_38_38);
              {
                TypeInfo_57_57 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_57_57, 0) = ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2));
                MR_hl_field(MR_mktag(0), TypeInfo_57_57, 1) = ((MR_Box) (TypeInfo_for_En_52));
                MR_hl_field(MR_mktag(0), TypeInfo_57_57, 2) = ((MR_Box) (TypeInfo_for_Ex_53));
              }
              mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_57_57, (MR_Word) (BlockMap_11), ((MR_Box) (Label_16)), &conv1_BlockInfo_17);
              BlockInfo_17 = ((MR_Word) (conv1_BlockInfo_17));
              BlockType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_17, (MR_Integer) 5))));
              switch (MR_tag((MR_Word) BlockType_18)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    STATE_VARIABLE_CanTransform_39_39 = (MR_Integer) 1;
                    STATE_VARIABLE_Queue_43_43 = STATE_VARIABLE_Queue_35_35;
                    STATE_VARIABLE_OrdNeedsFrame_40_40 = STATE_VARIABLE_OrdNeedsFrame_0_26;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word UnprocessedSuccessors_22;
                    MR_Word Var_41;
                    MR_Word Var_42;
                    MR_Word NeedsFrame0_64;
                    MR_Word SideLabels_71;
                    MR_Word MaybeFallThrough_72;
                    MR_Box conv2_NeedsFrame0_64;
                    MR_Word Var_21;

                    mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0), STATE_VARIABLE_OrdNeedsFrame_0_26, ((MR_Box) (Label_16)), &conv2_NeedsFrame0_64);
                    NeedsFrame0_64 = ((MR_Word) (conv2_NeedsFrame0_64));
                    switch (NeedsFrame0_64) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0), ((MR_Box) (Label_16)), ((MR_Box) ((MR_Integer) 0)), STATE_VARIABLE_OrdNeedsFrame_0_26, &STATE_VARIABLE_OrdNeedsFrame_40_40);
                        }
                        break;
                      case (MR_Integer) 0:
                        STATE_VARIABLE_OrdNeedsFrame_40_40 = STATE_VARIABLE_OrdNeedsFrame_0_26;
                        break;
                    }
                    {
                      Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&ll_backend__frameopt_scalar_common_4[2]));
                      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (ll_backend__frameopt__propagate_frame_requirement_to_successors_9_p_0_1));
                      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (STATE_VARIABLE_AlreadyProcessed_38_38));
                    }
                    SideLabels_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_17, (MR_Integer) 3))));
                    MaybeFallThrough_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_17, (MR_Integer) 4))));
                    if ((MaybeFallThrough_72 == (MR_Word) ((MR_Unsigned) 0U)))
                      Var_42 = SideLabels_71;
                    else
                    {
                      MR_Word FallThrough_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFallThrough_72, (MR_Integer) 0))));

                      {
                        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (FallThrough_73));
                        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (SideLabels_71));
                      }
                    }
                    mercury__list__filter_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), Var_41, Var_42, &Var_21, &UnprocessedSuccessors_22);
                    mercury__queue__put_list_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), UnprocessedSuccessors_22, STATE_VARIABLE_Queue_35_35, &STATE_VARIABLE_Queue_43_43);
                    STATE_VARIABLE_CanTransform_39_39 = STATE_VARIABLE_CanTransform_0_31;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    STATE_VARIABLE_Queue_43_43 = STATE_VARIABLE_Queue_35_35;
                    STATE_VARIABLE_OrdNeedsFrame_40_40 = STATE_VARIABLE_OrdNeedsFrame_0_26;
                    STATE_VARIABLE_CanTransform_39_39 = STATE_VARIABLE_CanTransform_0_31;
                  }
                  break;
              }
              // direct tailcall eliminated
              ;
              next_value_of_STATE_VARIABLE_Queue_0_25 = STATE_VARIABLE_Queue_43_43;
              next_value_of_STATE_VARIABLE_OrdNeedsFrame_0_26 = STATE_VARIABLE_OrdNeedsFrame_40_40;
              next_value_of_STATE_VARIABLE_AlreadyProcessed_0_28 = STATE_VARIABLE_AlreadyProcessed_38_38;
              next_value_of_STATE_VARIABLE_PropagationStepsLeft_0_29 = STATE_VARIABLE_PropagationStepsLeft_36_36;
              next_value_of_STATE_VARIABLE_CanTransform_0_31 = STATE_VARIABLE_CanTransform_39_39;
              STATE_VARIABLE_Queue_0_25 = next_value_of_STATE_VARIABLE_Queue_0_25;
              STATE_VARIABLE_OrdNeedsFrame_0_26 = next_value_of_STATE_VARIABLE_OrdNeedsFrame_0_26;
              STATE_VARIABLE_AlreadyProcessed_0_28 = next_value_of_STATE_VARIABLE_AlreadyProcessed_0_28;
              STATE_VARIABLE_PropagationStepsLeft_0_29 = next_value_of_STATE_VARIABLE_PropagationStepsLeft_0_29;
              STATE_VARIABLE_CanTransform_0_31 = next_value_of_STATE_VARIABLE_CanTransform_0_31;
              continue;
            }
            else
            {
              *STATE_VARIABLE_CanTransform_32 = STATE_VARIABLE_CanTransform_0_31;
              *STATE_VARIABLE_PropagationStepsLeft_30 = STATE_VARIABLE_PropagationStepsLeft_0_29;
              *STATE_VARIABLE_OrdNeedsFrame_27 = STATE_VARIABLE_OrdNeedsFrame_0_26;
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_OrdNeedsFrame_27 = STATE_VARIABLE_OrdNeedsFrame_0_26;
          *STATE_VARIABLE_PropagationStepsLeft_30 = STATE_VARIABLE_PropagationStepsLeft_0_29;
          *STATE_VARIABLE_CanTransform_32 = STATE_VARIABLE_CanTransform_0_31;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__frameopt__delay_frame_init_8_p_0(
  MR_Word TypeInfo_for_En_52,
  MR_Word TypeInfo_for_Ex_53,
  MR_Word HeadVar__1_1,
  MR_Word BlockMap_2,
  MR_Word STATE_VARIABLE_RevMap_0_3,
  MR_Word * STATE_VARIABLE_RevMap_4,
  MR_Word STATE_VARIABLE_Queue_0_5,
  MR_Word * STATE_VARIABLE_Queue_6,
  MR_Word STATE_VARIABLE_OrdNeedsFrame_0_7,
  MR_Word * STATE_VARIABLE_OrdNeedsFrame_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_OrdNeedsFrame_8 = STATE_VARIABLE_OrdNeedsFrame_0_7;
      *STATE_VARIABLE_Queue_6 = STATE_VARIABLE_Queue_0_5;
      *STATE_VARIABLE_RevMap_4 = STATE_VARIABLE_RevMap_0_3;
    }
    else
    {
      MR_Word TypeInfo_56_56;
      MR_Word Label_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Labels_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word BlockInfo_25;
      MR_Word BlockType_26;
      MR_Word STATE_VARIABLE_Queue_39_39;
      MR_Word STATE_VARIABLE_OrdNeedsFrame_41_41;
      MR_Word Var_42;
      MR_Word STATE_VARIABLE_RevMap_43_43;
      MR_Word SideLabels_61;
      MR_Word MaybeFallThrough_62;
      MR_Box conv0_BlockInfo_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Queue_0_5;
      MR_Word next_value_of_STATE_VARIABLE_OrdNeedsFrame_0_7;

      {
        TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_56_56, 0) = ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2));
        MR_hl_field(MR_mktag(0), TypeInfo_56_56, 1) = ((MR_Box) (TypeInfo_for_En_52));
        MR_hl_field(MR_mktag(0), TypeInfo_56_56, 2) = ((MR_Box) (TypeInfo_for_Ex_53));
      }
      mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_56_56, (MR_Word) (BlockMap_2), ((MR_Box) (Label_19)), &conv0_BlockInfo_25);
      BlockInfo_25 = ((MR_Word) (conv0_BlockInfo_25));
      SideLabels_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_25, (MR_Integer) 3))));
      MaybeFallThrough_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_25, (MR_Integer) 4))));
      BlockType_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_25, (MR_Integer) 5))));
      switch (MR_tag((MR_Word) BlockType_26)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_Queue_39_39 = STATE_VARIABLE_Queue_0_5;
            STATE_VARIABLE_OrdNeedsFrame_41_41 = STATE_VARIABLE_OrdNeedsFrame_0_7;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word NeedsFrame_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), BlockType_26, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

            switch (NeedsFrame_28) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0), ((MR_Box) (Label_19)), ((MR_Box) ((MR_Integer) 1)), STATE_VARIABLE_OrdNeedsFrame_0_7, &STATE_VARIABLE_OrdNeedsFrame_41_41);
                  STATE_VARIABLE_Queue_39_39 = STATE_VARIABLE_Queue_0_5;
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0), ((MR_Box) (Label_19)), ((MR_Box) ((MR_Integer) 0)), STATE_VARIABLE_OrdNeedsFrame_0_7, &STATE_VARIABLE_OrdNeedsFrame_41_41);
                  mercury__queue__put_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (Label_19)), STATE_VARIABLE_Queue_0_5, &STATE_VARIABLE_Queue_39_39);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_Queue_39_39 = STATE_VARIABLE_Queue_0_5;
            STATE_VARIABLE_OrdNeedsFrame_41_41 = STATE_VARIABLE_OrdNeedsFrame_0_7;
          }
          break;
      }
      if ((MaybeFallThrough_62 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_42 = SideLabels_61;
      else
      {
        MR_Word FallThrough_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFallThrough_62, (MR_Integer) 0))));

        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (FallThrough_63));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (SideLabels_61));
        }
      }
      ll_backend__frameopt__rev_map_side_labels_4_p_0(Var_42, Label_19, STATE_VARIABLE_RevMap_0_3, &STATE_VARIABLE_RevMap_43_43);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Labels_20;
      next_value_of_STATE_VARIABLE_RevMap_0_3 = STATE_VARIABLE_RevMap_43_43;
      next_value_of_STATE_VARIABLE_Queue_0_5 = STATE_VARIABLE_Queue_39_39;
      next_value_of_STATE_VARIABLE_OrdNeedsFrame_0_7 = STATE_VARIABLE_OrdNeedsFrame_41_41;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevMap_0_3 = next_value_of_STATE_VARIABLE_RevMap_0_3;
      STATE_VARIABLE_Queue_0_5 = next_value_of_STATE_VARIABLE_Queue_0_5;
      STATE_VARIABLE_OrdNeedsFrame_0_7 = next_value_of_STATE_VARIABLE_OrdNeedsFrame_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__frameopt__rev_map_side_labels_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevMap_0_3,
  MR_Word * STATE_VARIABLE_RevMap_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevMap_4 = STATE_VARIABLE_RevMap_0_3;
    else
    {
      MR_Word Label_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Labels_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevMap_17_17;
      MR_Word OtherSources0_13;
      MR_Box conv0_OtherSources0_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevMap_0_3;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt_scalar_common_2[1]), STATE_VARIABLE_RevMap_0_3, ((MR_Box) (Label_9)), &conv0_OtherSources0_13);
      if (succeeded)
      {
        OtherSources0_13 = ((MR_Word) (conv0_OtherSources0_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word OtherSources_14;

        {
          OtherSources_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), OtherSources_14, 0) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(MR_mktag(1), OtherSources_14, 1) = ((MR_Box) (OtherSources0_13));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt_scalar_common_2[1]), ((MR_Box) (Label_9)), ((MR_Box) (OtherSources_14)), STATE_VARIABLE_RevMap_0_3, &STATE_VARIABLE_RevMap_17_17);
      }
      else
      {
        MR_Word OtherSources_21;

        {
          OtherSources_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), OtherSources_21, 0) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(MR_mktag(1), OtherSources_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt_scalar_common_2[1]), ((MR_Box) (Label_9)), ((MR_Box) (OtherSources_21)), STATE_VARIABLE_RevMap_0_3, &STATE_VARIABLE_RevMap_17_17);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Labels_10;
      next_value_of_STATE_VARIABLE_RevMap_0_3 = STATE_VARIABLE_RevMap_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevMap_0_3 = next_value_of_STATE_VARIABLE_RevMap_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__can_delay_frame_2_p_0(
  MR_Word TypeInfo_for_En_15,
  MR_Word TypeInfo_for_Ex_16,
  MR_Word HeadVar__1_1,
  MR_Word BlockMap_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_19_19;
      MR_Word Label_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word BlockInfo_7;
      MR_Word Var_9;
      MR_Box conv0_BlockInfo_7;

      {
        TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_19_19, 0) = ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2));
        MR_hl_field(MR_mktag(0), TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_En_15));
        MR_hl_field(MR_mktag(0), TypeInfo_19_19, 2) = ((MR_Box) (TypeInfo_for_Ex_16));
      }
      mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_19_19, (MR_Word) (BlockMap_2), ((MR_Box) (Label_4)), &conv0_BlockInfo_7);
      BlockInfo_7 = ((MR_Word) (conv0_BlockInfo_7));
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_7, (MR_Integer) 5))));
      succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 0);
      if (succeeded)
      {
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt__keep_frame_transform_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word FirstLabel_2,
  MR_Word SecondLabel_3,
  MR_Word CanClobberSuccip_4,
  MR_Word STATE_VARIABLE_BlockMap_0_5,
  MR_Word * STATE_VARIABLE_BlockMap_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_BlockMap_6 = STATE_VARIABLE_BlockMap_0_5;
    else
    {
      MR_Word Label_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Labels_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word BlockInfo0_19;
      MR_Word STATE_VARIABLE_BlockMap_62_62;
      MR_Box conv0_BlockInfo0_19;
      MR_Word OrigInstrs_20;
      MR_Word FallInto_21;
      MR_Word Succip_23;
      MR_Word Livevals_24;
      MR_String Comment_27;
      MR_Word Goto_25;
      MR_Word GotoLabel_26;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_67;
      MR_Word FirstLabelType_71;
      MR_Word ProcLabel_72;
      MR_Word GotoLabelType_73;
      MR_Word Var_74;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_BlockMap_0_5;

      mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt_scalar_common_1[0]), STATE_VARIABLE_BlockMap_0_5, ((MR_Box) (Label_13)), &conv0_BlockInfo0_19);
      BlockInfo0_19 = ((MR_Word) (conv0_BlockInfo0_19));
      Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_19, (MR_Integer) 0))));
      OrigInstrs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_19, (MR_Integer) 1))));
      FallInto_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_19, (MR_Integer) 2))));
      Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_19, (MR_Integer) 3))));
      Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_19, (MR_Integer) 4))));
      Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_19, (MR_Integer) 5))));
      succeeded = ll_backend__llds____Unify____label_0_0(Label_13, Var_67);
      if (succeeded)
      {
        succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 1))));
            succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_45, (MR_Integer) 0))));
                Succip_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 0))));
                Livevals_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 1))));
                Goto_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 2))));
                Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goto_25, (MR_Integer) 0))));
                Comment_27 = ((MR_String) ((MR_hl_field(MR_mktag(0), Goto_25, (MR_Integer) 1))));
                succeeded = ((((MR_tag((MR_Word) Var_47)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_47, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_47, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_48)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    GotoLabel_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_48, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) FirstLabel_2)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      FirstLabelType_71 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), FirstLabel_2, (MR_Integer) 0))) & (MR_Integer) 3);
                      ProcLabel_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FirstLabel_2, (MR_Integer) 1))));
                      succeeded = ((MR_tag((MR_Word) GotoLabel_26)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        GotoLabelType_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), GotoLabel_26, (MR_Integer) 0))) & (MR_Integer) 3);
                        Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GotoLabel_26, (MR_Integer) 1))));
                        succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ProcLabel_72, Var_74);
                        if (succeeded)
                          switch (FirstLabelType_71) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              succeeded = (GotoLabelType_73 == (MR_Integer) 0);
                              break;
                            case (MR_Integer) 2:
                              succeeded = MR_TRUE;
                              break;
                            case (MR_Integer) 1:
                              switch (GotoLabelType_73) {
                                default:
                                  succeeded = MR_FALSE;
                                  break;
                                case (MR_Integer) 0:
                                case (MR_Integer) 1:
                                  succeeded = MR_TRUE;
                                  break;
                              }
                              break;
                          }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word OrigLabelInstr_32;
        MR_String NewComment_33;
        MR_Word NewGoto_34;
        MR_Word LivevalsGoto_35;
        MR_Word BackInstrs_36;
        MR_Word Instrs_37;
        MR_Word BlockInfo_39;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_59;
        MR_Word OrigInstr0_28;
        MR_Word Var_49;

        succeeded = (OrigInstrs_20 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          OrigInstr0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OrigInstrs_20, (MR_Integer) 0))));
          Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigInstr0_28, (MR_Integer) 0))));
          succeeded = ((((MR_tag((MR_Word) Var_49)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_49, (MR_Integer) 0)))) == (MR_Integer) 5)));
          if (succeeded)
          {
          }
        }
        if (succeeded)
          OrigLabelInstr_32 = OrigInstr0_28;
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.frameopt.keep_frame_transform\'/6", (MR_String) "block does not begin with label");
            return;
          }
        }
        mercury__string__append_3_p_2(Comment_27, (MR_String) " (keeping frame)", &NewComment_33);
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (SecondLabel_3));
        }
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (Var_54));
        }
        {
          NewGoto_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NewGoto_34, 0) = ((MR_Box) (Var_53));
          MR_hl_field(MR_mktag(0), NewGoto_34, 1) = ((MR_Box) (NewComment_33));
        }
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (NewGoto_34));
          MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        LivevalsGoto_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Livevals_24, Var_55);
        switch (CanClobberSuccip_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            BackInstrs_36 = LivevalsGoto_35;
            break;
          case (MR_Integer) 1:
            BackInstrs_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Succip_23, LivevalsGoto_35);
            break;
        }
        {
          Instrs_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Instrs_37, 0) = ((MR_Box) (OrigLabelInstr_32));
          MR_hl_field(MR_mktag(1), Instrs_37, 1) = ((MR_Box) (BackInstrs_36));
        }
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (SecondLabel_3));
          MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          BlockInfo_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), BlockInfo_39, 0) = ((MR_Box) (Label_13));
          MR_hl_field(MR_mktag(0), BlockInfo_39, 1) = ((MR_Box) (Instrs_37));
          MR_hl_field(MR_mktag(0), BlockInfo_39, 2) = ((MR_Box) (FallInto_21));
          MR_hl_field(MR_mktag(0), BlockInfo_39, 3) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(0), BlockInfo_39, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), BlockInfo_39, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__frameopt_scalar_common_3[3])));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__frameopt_scalar_common_1[0]), ((MR_Box) (Label_13)), ((MR_Box) (BlockInfo_39)), STATE_VARIABLE_BlockMap_0_5, &STATE_VARIABLE_BlockMap_62_62);
      }
      else
        STATE_VARIABLE_BlockMap_62_62 = STATE_VARIABLE_BlockMap_0_5;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Labels_14;
      next_value_of_STATE_VARIABLE_BlockMap_0_5 = STATE_VARIABLE_BlockMap_62_62;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_BlockMap_0_5 = next_value_of_STATE_VARIABLE_BlockMap_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__frameopt__can_clobber_succip_2_f_0_1(
  void * env_ptr_arg)
{
  {
    struct ll_backend__frameopt__can_clobber_succip_3_f_0_env_0_s * env_ptr = (struct ll_backend__frameopt__can_clobber_succip_3_f_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ll_backend__frameopt__can_clobber_succip_2_f_0_3(
  void * env_ptr_arg)
{
  {
    struct ll_backend__frameopt__can_clobber_succip_3_f_0_env_0_s * env_ptr = (struct ll_backend__frameopt__can_clobber_succip_3_f_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__Instr_11 = ((MR_Word) ((env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__conv1_Instr_11));
    ll_backend__frameopt__can_clobber_succip_2_f_0_2(env_ptr);
  }
}

static void MR_CALL 
ll_backend__frameopt__can_clobber_succip_2_f_0_2(
  void * env_ptr_arg)
{
  {
    struct ll_backend__frameopt__can_clobber_succip_3_f_0_env_0_s * env_ptr = (struct ll_backend__frameopt__can_clobber_succip_3_f_0_env_0_s *) (env_ptr_arg);

    {
      MR_String Var_13;

      (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__Uinstr_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__Instr_11, (MR_Integer) 0))));
      Var_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__Instr_11, (MR_Integer) 1))));
      if (((((MR_tag((MR_Word) (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__Uinstr_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__Uinstr_12, (MR_Integer) 0)))) == (MR_Integer) 27))))
      {
        MR_Word Var_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__Uinstr_12, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__Uinstr_12, (MR_Integer) 1))));
        MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__Uinstr_12, (MR_Integer) 2))));
        MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__Uinstr_12, (MR_Integer) 4))));
        MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__Uinstr_12, (MR_Integer) 5))));
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__Uinstr_12, (MR_Integer) 6))));
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__Uinstr_12, (MR_Integer) 7))));
        MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__Uinstr_12, (MR_Integer) 8))));
        MR_Word Var_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__Uinstr_12, (MR_Integer) 9))) >> 1)) & (MR_Integer) 1);
        MR_Word Var_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__Uinstr_12, (MR_Integer) 9))) & (MR_Integer) 1);
        MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__Uinstr_12, (MR_Integer) 3)));
        MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__Uinstr_12, (MR_Integer) 9)));

        (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__succeeded = (Var_29 == (MR_Integer) 0);
      }
      else
      if (((((MR_tag((MR_Word) (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__Uinstr_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__Uinstr_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
        (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__succeeded = MR_TRUE;
      else
        (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__succeeded = MR_FALSE;
      if ((env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__succeeded)
        ll_backend__frameopt__can_clobber_succip_2_f_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
ll_backend__frameopt__can_clobber_succip_2_f_0_4(
  void * env_ptr_arg)
{
  {
    struct ll_backend__frameopt__can_clobber_succip_3_f_0_env_0_s * env_ptr = (struct ll_backend__frameopt__can_clobber_succip_3_f_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), &(env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__conv1_Instr_11, (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__Instrs_10, ll_backend__frameopt__can_clobber_succip_2_f_0_3, env_ptr);
        }
        (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_Word MR_CALL 
ll_backend__frameopt__can_clobber_succip_2_f_0(
  MR_Word TypeInfo_35_35,
  MR_Word TypeInfo_36_36,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    struct ll_backend__frameopt__can_clobber_succip_3_f_0_env_0_s env;

    while (MR_TRUE)
    {
      MR_Word HeadVar__3_3;

      // setup for model_det tailcalls optimized into a loop
      ;
      if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__3_3 = (MR_Integer) 0;
      else
      {
        MR_Word TypeInfo_39_39;
        MR_Word Label_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Labels_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
        MR_Word BlockInfo_9;
        MR_Box conv0_BlockInfo_9;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_34;

        {
          TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_39_39, 0) = ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2));
          MR_hl_field(MR_mktag(0), TypeInfo_39_39, 1) = ((MR_Box) (TypeInfo_35_35));
          MR_hl_field(MR_mktag(0), TypeInfo_39_39, 2) = ((MR_Box) (TypeInfo_36_36));
        }
        mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_39_39, (MR_Word) (HeadVar__2_2), ((MR_Box) (Label_5)), &conv0_BlockInfo_9);
        BlockInfo_9 = ((MR_Word) (conv0_BlockInfo_9));
        Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_9, (MR_Integer) 0))));
        (env).ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__Instrs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_9, (MR_Integer) 1))));
        Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_9, (MR_Integer) 2))));
        Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_9, (MR_Integer) 3))));
        Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_9, (MR_Integer) 4))));
        Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_9, (MR_Integer) 5))));
        ll_backend__frameopt__can_clobber_succip_2_f_0_4(&env);
        if ((env).ll_backend__frameopt__can_clobber_succip_3_f_0_env_0__succeeded)
          HeadVar__3_3 = (MR_Integer) 1;
        else
        {
          MR_Word next_value_of_HeadVar__1_1 = Labels_6;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
      }
      return HeadVar__3_3;
      break;
    }
  }
}

static void MR_CALL 
ll_backend__frameopt__analyze_block_map_5_p_0(
  MR_Word TypeClassInfo_for_block_entry_exit_32,
  MR_Word LabelSeq_6,
  MR_Word PreExitDummyLabelMap_7,
  MR_Word STATE_VARIABLE_BlockMap_0_23,
  MR_Word * STATE_VARIABLE_BlockMap_24,
  MR_Word * KeepFrameData_9)
{
  {
    MR_bool succeeded = (LabelSeq_6 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word FirstLabel_10;
    MR_Word SecondLabel_11;
    MR_Word TypeCtorInfo_33_33;
    MR_Word TypeInfo_35_35;
    MR_Word TypeInfo_37_37;
    MR_Word TypeCtorInfo_38_38;
    MR_Word TypeInfo_39_39;
    MR_Word FirstBlockInfo_13;
    MR_Word BlockType_18;
    MR_Word Var_25;
    MR_Integer PolyConst1_34;
    MR_Integer PolyConst2_36;
    MR_Word Var_40;
    MR_Box conv0_FirstBlockInfo_13;

    if (succeeded)
    {
      FirstLabel_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LabelSeq_6, (MR_Integer) 0))));
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LabelSeq_6, (MR_Integer) 1))));
      succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SecondLabel_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0))));
        TypeCtorInfo_33_33 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0);
        TypeCtorInfo_38_38 = (MR_Word) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2);
        PolyConst1_34 = (MR_Integer) 1;
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_32, PolyConst1_34, &TypeInfo_35_35);
        PolyConst2_36 = (MR_Integer) 2;
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_32, PolyConst2_36, &TypeInfo_37_37);
        {
          TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_39_39, 0) = ((MR_Box) (TypeCtorInfo_38_38));
          MR_hl_field(MR_mktag(0), TypeInfo_39_39, 1) = ((MR_Box) (TypeInfo_35_35));
          MR_hl_field(MR_mktag(0), TypeInfo_39_39, 2) = ((MR_Box) (TypeInfo_37_37));
        }
        succeeded = mercury__map__search_3_p_0(TypeCtorInfo_33_33, TypeInfo_39_39, (MR_Word) (STATE_VARIABLE_BlockMap_0_23), ((MR_Box) (FirstLabel_10)), &conv0_FirstBlockInfo_13);
        if (succeeded)
        {
          FirstBlockInfo_13 = ((MR_Word) (conv0_FirstBlockInfo_13));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstBlockInfo_13, (MR_Integer) 0))));
          BlockType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstBlockInfo_13, (MR_Integer) 5))));
          succeeded = ll_backend__llds____Unify____label_0_0(FirstLabel_10, Var_40);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) BlockType_18)) == (MR_Integer) 0);
            if (succeeded)
            {
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word ProcLabel_20;
      MR_Word AnyBlockNeedsFrame_21;
      MR_Word JumpToStart_22;
      MR_Word Label_54;
      MR_Word Labels_55;
      MR_Word STATE_VARIABLE_BlockMap_37_68;
      MR_Word STATE_VARIABLE_AnyBlockNeedsFrame_38_69;
      MR_Word STATE_VARIABLE_JumpToStart_39_70;

      ProcLabel_20 = ll_backend__llds__get_proc_label_1_f_0(FirstLabel_10);
      Label_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LabelSeq_6, (MR_Integer) 0))));
      Labels_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LabelSeq_6, (MR_Integer) 1))));
      ll_backend__frameopt__analyze_block_11_p_0(TypeClassInfo_for_block_entry_exit_32, Label_54, Labels_55, FirstLabel_10, ProcLabel_20, PreExitDummyLabelMap_7, STATE_VARIABLE_BlockMap_0_23, &STATE_VARIABLE_BlockMap_37_68, (MR_Integer) 0, &STATE_VARIABLE_AnyBlockNeedsFrame_38_69, (MR_Integer) 0, &STATE_VARIABLE_JumpToStart_39_70);
      ll_backend__frameopt__analyze_block_map_2_10_p_0(TypeClassInfo_for_block_entry_exit_32, Labels_55, FirstLabel_10, ProcLabel_20, PreExitDummyLabelMap_7, STATE_VARIABLE_BlockMap_37_68, STATE_VARIABLE_BlockMap_24, STATE_VARIABLE_AnyBlockNeedsFrame_38_69, &AnyBlockNeedsFrame_21, STATE_VARIABLE_JumpToStart_39_70, &JumpToStart_22);
      succeeded = (AnyBlockNeedsFrame_21 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (JumpToStart_22 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word Var_29;

        {
          Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (FirstLabel_10));
          MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (SecondLabel_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *KeepFrameData_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_29));
        }
      }
      else
        *KeepFrameData_9 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.frameopt.analyze_block_map\'/5", (MR_String) "bad data");
        return;
      }
    }
  }
}

static void MR_CALL 
ll_backend__frameopt__analyze_block_map_2_10_p_0(
  MR_Word TypeClassInfo_for_block_entry_exit_43,
  MR_Word HeadVar__1_1,
  MR_Word FirstLabel_2,
  MR_Word ProcLabel_3,
  MR_Word PreExitDummyLabelMap_4,
  MR_Word STATE_VARIABLE_BlockMap_0_5,
  MR_Word * STATE_VARIABLE_BlockMap_6,
  MR_Word STATE_VARIABLE_AnyBlockNeedsFrame_0_7,
  MR_Word * STATE_VARIABLE_AnyBlockNeedsFrame_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__10_10 = HeadVar__9_9;
      *STATE_VARIABLE_AnyBlockNeedsFrame_8 = STATE_VARIABLE_AnyBlockNeedsFrame_0_7;
      *STATE_VARIABLE_BlockMap_6 = STATE_VARIABLE_BlockMap_0_5;
    }
    else
    {
      MR_Word Label_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Labels_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_BlockMap_37_37;
      MR_Word STATE_VARIABLE_AnyBlockNeedsFrame_38_38;
      MR_Word STATE_VARIABLE_JumpToStart_39_39;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_BlockMap_0_5;
      MR_Word next_value_of_STATE_VARIABLE_AnyBlockNeedsFrame_0_7;
      MR_Word next_value_of_HeadVar__9_9;

      ll_backend__frameopt__analyze_block_11_p_0(TypeClassInfo_for_block_entry_exit_43, Label_23, Labels_24, FirstLabel_2, ProcLabel_3, PreExitDummyLabelMap_4, STATE_VARIABLE_BlockMap_0_5, &STATE_VARIABLE_BlockMap_37_37, STATE_VARIABLE_AnyBlockNeedsFrame_0_7, &STATE_VARIABLE_AnyBlockNeedsFrame_38_38, HeadVar__9_9, &STATE_VARIABLE_JumpToStart_39_39);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Labels_24;
      next_value_of_STATE_VARIABLE_BlockMap_0_5 = STATE_VARIABLE_BlockMap_37_37;
      next_value_of_STATE_VARIABLE_AnyBlockNeedsFrame_0_7 = STATE_VARIABLE_AnyBlockNeedsFrame_38_38;
      next_value_of_HeadVar__9_9 = STATE_VARIABLE_JumpToStart_39_39;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_BlockMap_0_5 = next_value_of_STATE_VARIABLE_BlockMap_0_5;
      STATE_VARIABLE_AnyBlockNeedsFrame_0_7 = next_value_of_STATE_VARIABLE_AnyBlockNeedsFrame_0_7;
      HeadVar__9_9 = next_value_of_HeadVar__9_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__frameopt__analyze_block_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__4_119;

    ll_backend__frameopt__IntroducedFrom__pred__analyze_block__1255__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__4_119);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__4_119));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__analyze_block_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__frameopt__local_label_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt__analyze_block_11_p_0(
  MR_Word TypeClassInfo_for_block_entry_exit_103,
  MR_Word Label_12,
  MR_Word FollowingLabels_13,
  MR_Word FirstLabel_14,
  MR_Word ProcLabel_15,
  MR_Word PreExitDummyLabelMap_16,
  MR_Word STATE_VARIABLE_BlockMap_0_66,
  MR_Word * STATE_VARIABLE_BlockMap_67,
  MR_Word STATE_VARIABLE_AnyBlockNeedsFrame_0_68,
  MR_Word * STATE_VARIABLE_AnyBlockNeedsFrame_69,
  MR_Word STATE_VARIABLE_JumpToStart_0_70,
  MR_Word * STATE_VARIABLE_JumpToStart_71)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_106_106;
    MR_Word TypeInfo_108_108;
    MR_Word TypeInfo_110_110;
    MR_Word TypeInfo_125_125;
    MR_Word BlockInfo0_20;
    MR_Word BlockLabel_21;
    MR_Word BlockInstrs0_22;
    MR_Word FallInto_23;
    MR_Word Type_26;
    MR_Word BlockInstrs_39;
    MR_Word SideLabels_59;
    MR_Word MaybeFallThrough_62;
    MR_Word BlockInfo_64;
    MR_Word RedoipLabels_65;
    MR_Word STATE_VARIABLE_BlockMap_89_89;
    MR_Word Var_91;
    MR_Box conv0_BlockInfo0_20;
    MR_Word AllButLastInstrs_31;
    MR_Word LastInstr0_32;
    MR_Word TypeCtorInfo_111_111;
    MR_Box conv1_LastInstr0_32;
    MR_Word conv2_STATE_VARIABLE_BlockMap_89_89;
    MR_Box conv4_STATE_VARIABLE_BlockMap_67;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_103, (MR_Integer) 1, &TypeInfo_106_106);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_103, (MR_Integer) 2, &TypeInfo_108_108);
    {
      TypeInfo_110_110 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_110_110, 0) = ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2));
      MR_hl_field(MR_mktag(0), TypeInfo_110_110, 1) = ((MR_Box) (TypeInfo_106_106));
      MR_hl_field(MR_mktag(0), TypeInfo_110_110, 2) = ((MR_Box) (TypeInfo_108_108));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_110_110, (MR_Word) (STATE_VARIABLE_BlockMap_0_66), ((MR_Box) (Label_12)), &conv0_BlockInfo0_20);
    BlockInfo0_20 = ((MR_Word) (conv0_BlockInfo0_20));
    BlockLabel_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_20, (MR_Integer) 0))));
    BlockInstrs0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_20, (MR_Integer) 1))));
    FallInto_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_20, (MR_Integer) 2))));
    Type_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo0_20, (MR_Integer) 5))));
    switch (MR_tag((MR_Word) Type_26)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_AnyBlockNeedsFrame_69 = STATE_VARIABLE_AnyBlockNeedsFrame_0_68;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_127 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Type_26, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

          switch (Var_127) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *STATE_VARIABLE_AnyBlockNeedsFrame_69 = STATE_VARIABLE_AnyBlockNeedsFrame_0_68;
              break;
            case (MR_Integer) 0:
              *STATE_VARIABLE_AnyBlockNeedsFrame_69 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_AnyBlockNeedsFrame_69 = STATE_VARIABLE_AnyBlockNeedsFrame_0_68;
        break;
    }
    succeeded = ll_backend__llds____Unify____label_0_0(Label_12, BlockLabel_21);
    if (succeeded)
    {
      TypeCtorInfo_111_111 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
      mercury__list__det_split_last_3_p_0(TypeCtorInfo_111_111, BlockInstrs0_22, &AllButLastInstrs_31, &conv1_LastInstr0_32);
      LastInstr0_32 = ((MR_Word) (conv1_LastInstr0_32));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word LastUinstr0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LastInstr0_32, (MR_Integer) 0))));
      MR_String Comment_34 = ((MR_String) ((MR_hl_field(MR_mktag(0), LastInstr0_32, (MR_Integer) 1))));
      MR_Word LastUinstr_37;
      MR_Word SideLabels0_57;
      MR_Word Var_83;
      MR_Word GotoTarget0_35;
      MR_Word _SideCodeAddrs_58;
      MR_Word NextLabel_60;
      MR_Word Var_84;
      MR_Word GotoLabel_63;
      MR_Word Var_85;

      succeeded = ((((MR_tag((MR_Word) LastUinstr0_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), LastUinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 6)));
      if (succeeded)
      {
        GotoTarget0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LastUinstr0_33, (MR_Integer) 1))));
        {
          MR_Word GotoTarget_36;
          MR_Word LastInstr_38;
          MR_Word Var_75;

          ll_backend__opt_util__replace_labels_code_addr_3_p_0(GotoTarget0_35, &GotoTarget_36, PreExitDummyLabelMap_16);
          {
            LastUinstr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), LastUinstr_37, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), LastUinstr_37, 1) = ((MR_Box) (GotoTarget_36));
          }
          {
            LastInstr_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), LastInstr_38, 0) = ((MR_Box) (LastUinstr_37));
            MR_hl_field(MR_mktag(0), LastInstr_38, 1) = ((MR_Box) (Comment_34));
          }
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (LastInstr_38));
            MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          BlockInstrs_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AllButLastInstrs_31, Var_75);
        }
      }
      else
      {
        MR_Word Rval_40;
        MR_Word GotoTarget0_100;

        succeeded = ((((MR_tag((MR_Word) LastUinstr0_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), LastUinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 9)));
        if (succeeded)
        {
          Rval_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LastUinstr0_33, (MR_Integer) 1))));
          GotoTarget0_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LastUinstr0_33, (MR_Integer) 2))));
          {
            MR_Word Var_77;
            MR_Word GotoTarget_93;
            MR_Word LastInstr_94;

            ll_backend__opt_util__replace_labels_code_addr_3_p_0(GotoTarget0_100, &GotoTarget_93, PreExitDummyLabelMap_16);
            {
              LastUinstr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), LastUinstr_37, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(MR_mktag(3), LastUinstr_37, 1) = ((MR_Box) (Rval_40));
              MR_hl_field(MR_mktag(3), LastUinstr_37, 2) = ((MR_Box) (GotoTarget_93));
            }
            {
              LastInstr_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), LastInstr_94, 0) = ((MR_Box) (LastUinstr_37));
              MR_hl_field(MR_mktag(0), LastInstr_94, 1) = ((MR_Box) (Comment_34));
            }
            {
              Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (LastInstr_94));
              MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            BlockInstrs_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AllButLastInstrs_31, Var_77);
          }
        }
        else
        {
          MR_Word GotoTargets0_41;
          MR_Word Rval_99;

          succeeded = ((((MR_tag((MR_Word) LastUinstr0_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), LastUinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 7)));
          if (succeeded)
          {
            Rval_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LastUinstr0_33, (MR_Integer) 1))));
            GotoTargets0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LastUinstr0_33, (MR_Integer) 2))));
            {
              MR_Word GotoTargets_42;
              MR_Word Var_79;
              MR_Word LastInstr_95;

              ll_backend__opt_util__replace_labels_maybe_label_list_3_p_0(GotoTargets0_41, &GotoTargets_42, PreExitDummyLabelMap_16);
              {
                LastUinstr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), LastUinstr_37, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), LastUinstr_37, 1) = ((MR_Box) (Rval_99));
                MR_hl_field(MR_mktag(3), LastUinstr_37, 2) = ((MR_Box) (GotoTargets_42));
              }
              {
                LastInstr_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), LastInstr_95, 0) = ((MR_Box) (LastUinstr_37));
                MR_hl_field(MR_mktag(0), LastInstr_95, 1) = ((MR_Box) (Comment_34));
              }
              {
                Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (LastInstr_95));
                MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              BlockInstrs_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AllButLastInstrs_31, Var_79);
            }
          }
          else
          {
            MR_Word D_43;
            MR_Word Comps0_44;
            MR_Word MC_45;
            MR_Word FNL_46;
            MR_Word FL_47;
            MR_Word FOL_48;
            MR_Word NF0_49;
            MR_Word MDL_50;
            MR_Unsigned packed_word_2;

            succeeded = ((((MR_tag((MR_Word) LastUinstr0_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), LastUinstr0_33, (MR_Integer) 0)))) == (MR_Integer) 27)));
            if (succeeded)
            {
              D_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LastUinstr0_33, (MR_Integer) 1))));
              Comps0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LastUinstr0_33, (MR_Integer) 2))));
              MC_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), LastUinstr0_33, (MR_Integer) 3))) & (MR_Integer) 1);
              FNL_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LastUinstr0_33, (MR_Integer) 4))));
              FL_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LastUinstr0_33, (MR_Integer) 5))));
              FOL_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LastUinstr0_33, (MR_Integer) 6))));
              NF0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LastUinstr0_33, (MR_Integer) 7))));
              MDL_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LastUinstr0_33, (MR_Integer) 8))));
              packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), LastUinstr0_33, (MR_Integer) 9)));
              {
                MR_Word NF_53;
                MR_Word Comps_54;
                MR_Word Var_81;
                MR_Word LastInstr_96;

                if ((NF0_49 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  NF_53 = (MR_Word) ((MR_Unsigned) 0U);
                  Comps_54 = Comps0_44;
                }
                else
                {
                  MR_Word NFLabel0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NF0_49, (MR_Integer) 0))));
                  MR_Word NFLabel_56;

                  ll_backend__opt_util__replace_labels_label_3_p_0(NFLabel0_55, &NFLabel_56, PreExitDummyLabelMap_16);
                  {
                    NF_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), NF_53, 0) = ((MR_Box) (NFLabel_56));
                  }
                  ll_backend__opt_util__replace_labels_comps_3_p_0(Comps0_44, &Comps_54, PreExitDummyLabelMap_16);
                }
                {
                  LastUinstr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), LastUinstr_37, 0) = ((MR_Box) ((MR_Unsigned) 27U));
                  MR_hl_field(MR_mktag(3), LastUinstr_37, 1) = ((MR_Box) (D_43));
                  MR_hl_field(MR_mktag(3), LastUinstr_37, 2) = ((MR_Box) (Comps_54));
                  MR_hl_field(MR_mktag(3), LastUinstr_37, 3) = (MR_Box) ((MR_Unsigned) (MC_45));
                  MR_hl_field(MR_mktag(3), LastUinstr_37, 4) = ((MR_Box) (FNL_46));
                  MR_hl_field(MR_mktag(3), LastUinstr_37, 5) = ((MR_Box) (FL_47));
                  MR_hl_field(MR_mktag(3), LastUinstr_37, 6) = ((MR_Box) (FOL_48));
                  MR_hl_field(MR_mktag(3), LastUinstr_37, 7) = ((MR_Box) (NF_53));
                  MR_hl_field(MR_mktag(3), LastUinstr_37, 8) = ((MR_Box) (MDL_50));
                  MR_hl_field(MR_mktag(3), LastUinstr_37, 9) = (MR_Box) (packed_word_2);
                }
                {
                  LastInstr_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), LastInstr_96, 0) = ((MR_Box) (LastUinstr_37));
                  MR_hl_field(MR_mktag(0), LastInstr_96, 1) = ((MR_Box) (Comment_34));
                }
                {
                  Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (LastInstr_96));
                  MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                BlockInstrs_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AllButLastInstrs_31, Var_81);
              }
            }
            else
            {
              LastUinstr_37 = LastUinstr0_33;
              BlockInstrs_39 = BlockInstrs0_22;
            }
          }
        }
      }
      ll_backend__opt_util__possible_targets_3_p_0(LastUinstr_37, &SideLabels0_57, &_SideCodeAddrs_58);
      {
        Var_83 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&ll_backend__frameopt_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (ll_backend__frameopt__analyze_block_11_p_0_1));
        MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_83, 3) = ((MR_Box) (ProcLabel_15));
      }
      mercury__list__filter_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), Var_83, SideLabels0_57, &SideLabels_59);
      Var_84 = ll_backend__opt_util__can_instr_fall_through_1_f_0(LastUinstr_37);
      succeeded = (Var_84 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (FollowingLabels_13 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          NextLabel_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FollowingLabels_13, (MR_Integer) 0))));
      }
      if (succeeded)
        {
          MaybeFallThrough_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeFallThrough_62, 0) = ((MR_Box) (NextLabel_60));
        }
      else
        MaybeFallThrough_62 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = ((((MR_tag((MR_Word) LastUinstr_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), LastUinstr_37, (MR_Integer) 0)))) == (MR_Integer) 6)));
      if (succeeded)
      {
        Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LastUinstr_37, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_85)) == (MR_Integer) 1);
        if (succeeded)
        {
          GotoLabel_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_85, (MR_Integer) 0))));
          succeeded = ll_backend__frameopt__matching_label_ref_2_p_0(FirstLabel_14, GotoLabel_63);
        }
      }
      if (succeeded)
        *STATE_VARIABLE_JumpToStart_71 = (MR_Integer) 1;
      else
        *STATE_VARIABLE_JumpToStart_71 = STATE_VARIABLE_JumpToStart_0_70;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.frameopt.analyze_block\'/11", (MR_String) "mismatch or no last instr");
        return;
      }
    }
    {
      BlockInfo_64 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), BlockInfo_64, 0) = ((MR_Box) (BlockLabel_21));
      MR_hl_field(MR_mktag(0), BlockInfo_64, 1) = ((MR_Box) (BlockInstrs_39));
      MR_hl_field(MR_mktag(0), BlockInfo_64, 2) = ((MR_Box) (FallInto_23));
      MR_hl_field(MR_mktag(0), BlockInfo_64, 3) = ((MR_Box) (SideLabels_59));
      MR_hl_field(MR_mktag(0), BlockInfo_64, 4) = ((MR_Box) (MaybeFallThrough_62));
      MR_hl_field(MR_mktag(0), BlockInfo_64, 5) = ((MR_Box) (Type_26));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_110_110, ((MR_Box) (Label_12)), ((MR_Box) (BlockInfo_64)), (MR_Word) (STATE_VARIABLE_BlockMap_0_66), &conv2_STATE_VARIABLE_BlockMap_89_89);
    STATE_VARIABLE_BlockMap_89_89 = (MR_Word) (conv2_STATE_VARIABLE_BlockMap_89_89);
    ll_backend__frameopt__find_redoip_labels_4_p_0(BlockInstrs_39, ProcLabel_15, (MR_Word) ((MR_Unsigned) 0U), &RedoipLabels_65);
    {
      Var_91 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (&ll_backend__frameopt_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_91, 1) = ((MR_Box) (ll_backend__frameopt__analyze_block_11_p_0_2));
      MR_hl_field(MR_mktag(0), Var_91, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_91, 3) = ((MR_Box) (TypeClassInfo_for_block_entry_exit_103));
    }
    {
      TypeInfo_125_125 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_125_125, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), TypeInfo_125_125, 1) = ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0));
      MR_hl_field(MR_mktag(0), TypeInfo_125_125, 2) = ((MR_Box) (TypeInfo_110_110));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_125_125, (MR_Word) (Var_91), RedoipLabels_65, ((MR_Box) (STATE_VARIABLE_BlockMap_89_89)), &conv4_STATE_VARIABLE_BlockMap_67);
    *STATE_VARIABLE_BlockMap_67 = ((MR_Word) (conv4_STATE_VARIABLE_BlockMap_67));
  }
}

static void MR_CALL 
ll_backend__frameopt__find_redoip_labels_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ProcLabel_2,
  MR_Word STATE_VARIABLE_RedoipLabels_0_3,
  MR_Word * STATE_VARIABLE_RedoipLabels_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RedoipLabels_4 = STATE_VARIABLE_RedoipLabels_0_3;
    else
    {
      MR_Word Instr_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Uinstr_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr_9, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_RedoipLabels_23_23;
      MR_Word Label_16;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RedoipLabels_0_3;

      succeeded = ((((MR_tag((MR_Word) Uinstr_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_13, (MR_Integer) 1))));
        Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_13, (MR_Integer) 2))));
        succeeded = ((((MR_tag((MR_Word) Var_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          succeeded = ((((MR_tag((MR_Word) Var_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 1))));
            succeeded = ((((MR_tag((MR_Word) Var_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_21, (MR_Integer) 0)))) == (MR_Integer) 12)));
            if (succeeded)
            {
              Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_21, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_Integer) 1);
              if (succeeded)
              {
                Label_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 0))));
                Var_25 = ll_backend__llds__get_proc_label_1_f_0(Label_16);
                succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ProcLabel_2, Var_25);
              }
            }
          }
        }
      }
      if (succeeded)
        {
          STATE_VARIABLE_RedoipLabels_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RedoipLabels_23_23, 0) = ((MR_Box) (Label_16));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RedoipLabels_23_23, 1) = ((MR_Box) (STATE_VARIABLE_RedoipLabels_0_3));
        }
      else
        STATE_VARIABLE_RedoipLabels_23_23 = STATE_VARIABLE_RedoipLabels_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Instrs_10;
      next_value_of_STATE_VARIABLE_RedoipLabels_0_3 = STATE_VARIABLE_RedoipLabels_23_23;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RedoipLabels_0_3 = next_value_of_STATE_VARIABLE_RedoipLabels_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__matching_label_ref_2_p_0(
  MR_Word FirstLabel_3,
  MR_Word GotoLabel_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) FirstLabel_3)) == (MR_Integer) 1);
    MR_Word FirstLabelType_5;
    MR_Word ProcLabel_6;
    MR_Word GotoLabelType_7;
    MR_Word Var_8;

    if (succeeded)
    {
      FirstLabelType_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), FirstLabel_3, (MR_Integer) 0))) & (MR_Integer) 3);
      ProcLabel_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FirstLabel_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) GotoLabel_4)) == (MR_Integer) 1);
      if (succeeded)
      {
        GotoLabelType_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), GotoLabel_4, (MR_Integer) 0))) & (MR_Integer) 3);
        Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GotoLabel_4, (MR_Integer) 1))));
        succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ProcLabel_6, Var_8);
        if (succeeded)
          switch (FirstLabelType_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              succeeded = (GotoLabelType_7 == (MR_Integer) 0);
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 1:
              switch (GotoLabelType_7) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
              }
              break;
          }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__detect_det_entry_4_p_0(
  MR_Word Instrs0_5,
  MR_Word * Setup_6,
  MR_Word * HeadVar__3_3,
  MR_Word * EntryInfo_9)
{
  {
    MR_bool succeeded;
    MR_Word Others_7;
    MR_Word Remain_8;
    MR_Word Others0_10;
    MR_Word Instrs1_11;
    MR_Word SetupInstr1_12;
    MR_Word Instrs2_13;
    MR_Integer FrameSize_14;
    MR_String Msg_15;
    MR_Word Kind_16;
    MR_Word SetupInstr2_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;

    ll_backend__opt_util__gather_comments_3_p_0(Instrs0_5, &Others0_10, &Instrs1_11);
    succeeded = (Instrs1_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SetupInstr1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_11, (MR_Integer) 0))));
      Instrs2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_11, (MR_Integer) 1))));
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SetupInstr1_12, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 0)))) == (MR_Integer) 24)));
      if (succeeded)
      {
        FrameSize_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 1))));
        Msg_15 = ((MR_String) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 2))));
        Kind_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 3))) & (MR_Integer) 1);
        succeeded = ll_backend__frameopt__detstack_setup_6_p_0(Instrs2_13, FrameSize_14, &SetupInstr2_18, Others0_10, &Others_7, &Remain_8);
        if (succeeded)
        {
          *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Others_7, Remain_8);
          Var_21 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (SetupInstr2_18));
            MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_21));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Setup_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SetupInstr1_12));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_20));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *EntryInfo_9 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FrameSize_14));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Msg_15));
            MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Kind_16));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__detstack_setup_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer FrameSize_9,
  MR_Word * Setup_10,
  MR_Word STATE_VARIABLE_Others_0_18,
  MR_Word * STATE_VARIABLE_Others_19,
  MR_Word * Remain_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Instr0_7;
    MR_Word Instrs0_8;
    MR_Word Uinstr0_13;
    MR_Word Lval_15;
    MR_Word Rval_16;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Instr0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Instrs0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Uinstr0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_7, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Uinstr0_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr0_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Lval_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_13, (MR_Integer) 1))));
        Rval_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr0_13, (MR_Integer) 2))));
        {
          MR_Word Var_20;
          MR_Integer Var_31;

          succeeded = ((((MR_tag((MR_Word) Lval_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_15, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Var_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_15, (MR_Integer) 1))));
            succeeded = (FrameSize_9 == Var_31);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Rval_16)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rval_16, (MR_Integer) 0))));
                succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
          if (succeeded)
          {
            *Setup_10 = Instr0_7;
            *Remain_12 = Instrs0_8;
            *STATE_VARIABLE_Others_19 = STATE_VARIABLE_Others_0_18;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word TypeCtorInfo_29_29;
            MR_Word STATE_VARIABLE_Others_21_21;
            MR_Word Var_22;
            MR_Word Var_23;
            MR_Integer Var_32;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_STATE_VARIABLE_Others_0_18;

            succeeded = (Lval_15 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) Lval_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_15, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Var_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_15, (MR_Integer) 1))));
                succeeded = (FrameSize_9 == Var_32);
              }
              succeeded = !(succeeded);
              if (succeeded)
              {
                TypeCtorInfo_29_29 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                Var_23 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Instr0_7));
                  MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_23));
                }
                STATE_VARIABLE_Others_21_21 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_29_29, STATE_VARIABLE_Others_0_18, Var_22);
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = Instrs0_8;
                next_value_of_STATE_VARIABLE_Others_0_18 = STATE_VARIABLE_Others_21_21;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                STATE_VARIABLE_Others_0_18 = next_value_of_STATE_VARIABLE_Others_0_18;
                continue;
              }
            }
          }
        }
      }
      else
      {
        MR_Word TypeCtorInfo_30_30;
        MR_Word STATE_VARIABLE_Others_25_25;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_STATE_VARIABLE_Others_0_18;

        succeeded = ((MR_tag((MR_Word) Uinstr0_13)) == (MR_Integer) 1);
        if (succeeded)
        {
          TypeCtorInfo_30_30 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          Var_27 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Instr0_7));
            MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_27));
          }
          STATE_VARIABLE_Others_25_25 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_30_30, STATE_VARIABLE_Others_0_18, Var_26);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Instrs0_8;
          next_value_of_STATE_VARIABLE_Others_0_18 = STATE_VARIABLE_Others_25_25;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_Others_0_18 = next_value_of_STATE_VARIABLE_Others_0_18;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__build_frame_block_map_14_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__frameopt__IntroducedFrom__pred__build_frame_block_map__687__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt__build_frame_block_map_14_p_0(
  MR_Word TypeClassInfo_for_block_entry_exit_187,
  MR_Word HeadVar__1_1,
  MR_Box EntryInfo_2,
  MR_Word * HeadVar__3_3,
  MR_Word MaybePrevLabel_4,
  MR_Word FallInto_5,
  MR_Word ProcLabel_6,
  MR_Word STATE_VARIABLE_BlockMap_0_7,
  MR_Word * STATE_VARIABLE_BlockMap_8,
  MR_Word STATE_VARIABLE_PredMap_0_9,
  MR_Word * STATE_VARIABLE_PredMap_10,
  MR_Word STATE_VARIABLE_C_0_11,
  MR_Word * STATE_VARIABLE_C_12,
  MR_Word STATE_VARIABLE_PreExitDummyLabelMap_0_13,
  MR_Word * STATE_VARIABLE_PreExitDummyLabelMap_14)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_PreExitDummyLabelMap_14 = STATE_VARIABLE_PreExitDummyLabelMap_0_13;
      *STATE_VARIABLE_C_12 = STATE_VARIABLE_C_0_11;
      *STATE_VARIABLE_PredMap_10 = STATE_VARIABLE_PredMap_0_9;
      *STATE_VARIABLE_BlockMap_8 = STATE_VARIABLE_BlockMap_0_7;
    }
    else
    {
      MR_Word Instr0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Label_42;
      MR_Word Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_31, (MR_Integer) 0))));

      succeeded = ((((MR_tag((MR_Word) Var_94)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_94, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        Label_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_94, (MR_Integer) 1))));
        {
          MR_Word STATE_VARIABLE_PredMap_95_95;
          MR_Word EntryInstrs_45;
          MR_Word Instrs1_46;
          MR_Word TypeInfo_217_217;
          MR_Box Var_215;
          MR_Integer TypeInfoIndex_216;

          if ((MaybePrevLabel_4 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_PredMap_95_95 = STATE_VARIABLE_PredMap_0_9;
          else
          {
            MR_Word PrevLabel_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrevLabel_4, (MR_Integer) 0))));

            mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (Label_42)), ((MR_Box) (PrevLabel_44)), STATE_VARIABLE_PredMap_0_9, &STATE_VARIABLE_PredMap_95_95);
          }
          succeeded = ll_backend__frameopt__detect_entry_4_p_0(TypeClassInfo_for_block_entry_exit_187, Instrs0_32, &EntryInstrs_45, &Instrs1_46, &Var_215);
          if (succeeded)
          {
            TypeInfoIndex_216 = (MR_Integer) 1;
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_187, TypeInfoIndex_216, &TypeInfo_217_217);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_217_217, EntryInfo_2, Var_215);
          }
          if (succeeded)
          {
            MR_Word TypeInfo_192_192;
            MR_Word TypeInfo_194_194;
            MR_Word TypeInfo_196_196;
            MR_Integer EmptyN_47;
            MR_Word EmptyLabel_48;
            MR_Word FallThroughToEmptyInstr_49;
            MR_Word BlockInfo_50;
            MR_Word NextLabel_55;
            MR_Word Instrs2_56;
            MR_Word EmptyLabelInstr_59;
            MR_Word FallThroughFromEmptyInstr_60;
            MR_Word EmptyBlockInfo_62;
            MR_Word LabelSeq0_63;
            MR_Word STATE_VARIABLE_C_96_96;
            MR_Word Var_97;
            MR_Word Var_98;
            MR_Word Var_100;
            MR_Word Var_101;
            MR_Word Var_102;
            MR_Word Var_106;
            MR_Word STATE_VARIABLE_C_108_108;
            MR_Word Var_111;
            MR_Word Var_113;
            MR_Word Var_114;
            MR_Word Var_118;
            MR_Word Var_119;
            MR_Word Var_121;
            MR_Word Var_124;
            MR_Word STATE_VARIABLE_BlockMap_126_126;
            MR_Word STATE_VARIABLE_BlockMap_130_130;
            MR_Word Var_132;
            MR_Word NextLabelPrime_53;
            MR_Word Instr1_51;
            MR_Word Var_107;
            MR_Word conv0_STATE_VARIABLE_BlockMap_130_130;
            MR_Word conv1_STATE_VARIABLE_BlockMap_8;

            mercury__counter__allocate_3_p_0(&EmptyN_47, STATE_VARIABLE_C_0_11, &STATE_VARIABLE_C_96_96);
            {
              EmptyLabel_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), EmptyLabel_48, 0) = ((MR_Box) (EmptyN_47));
              MR_hl_field(MR_mktag(0), EmptyLabel_48, 1) = ((MR_Box) (ProcLabel_6));
            }
            {
              Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (EmptyLabel_48));
            }
            {
              Var_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_97, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), Var_97, 1) = ((MR_Box) (Var_98));
            }
            {
              FallThroughToEmptyInstr_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FallThroughToEmptyInstr_49, 0) = ((MR_Box) (Var_97));
              MR_hl_field(MR_mktag(0), FallThroughToEmptyInstr_49, 1) = ((MR_Box) ((MR_String) "fall through"));
            }
            {
              Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Instr0_31));
              MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (EntryInstrs_45));
            }
            {
              Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (FallThroughToEmptyInstr_49));
              MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_101, Var_102);
            {
              Var_106 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_106, 0) = EntryInfo_2;
            }
            {
              BlockInfo_50 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), BlockInfo_50, 0) = ((MR_Box) (Label_42));
              MR_hl_field(MR_mktag(0), BlockInfo_50, 1) = ((MR_Box) (Var_100));
              MR_hl_field(MR_mktag(0), BlockInfo_50, 2) = ((MR_Box) (FallInto_5));
              MR_hl_field(MR_mktag(0), BlockInfo_50, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), BlockInfo_50, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), BlockInfo_50, 5) = ((MR_Box) (Var_106));
            }
            succeeded = (Instrs1_46 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Instr1_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs1_46, (MR_Integer) 0))));
              Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr1_51, (MR_Integer) 0))));
              succeeded = ((((MR_tag((MR_Word) Var_107)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_107, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
                NextLabelPrime_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_107, (MR_Integer) 1))));
            }
            if (succeeded)
            {
              NextLabel_55 = NextLabelPrime_53;
              Instrs2_56 = Instrs1_46;
              STATE_VARIABLE_C_108_108 = STATE_VARIABLE_C_96_96;
            }
            else
            {
              MR_Integer N_57;
              MR_Word NextLabelInstr_58;
              MR_Word Var_109;

              mercury__counter__allocate_3_p_0(&N_57, STATE_VARIABLE_C_96_96, &STATE_VARIABLE_C_108_108);
              {
                NextLabel_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), NextLabel_55, 0) = ((MR_Box) (N_57));
                MR_hl_field(MR_mktag(0), NextLabel_55, 1) = ((MR_Box) (ProcLabel_6));
              }
              {
                Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_109, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Var_109, 1) = ((MR_Box) (NextLabel_55));
              }
              {
                NextLabelInstr_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), NextLabelInstr_58, 0) = ((MR_Box) (Var_109));
                MR_hl_field(MR_mktag(0), NextLabelInstr_58, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                Instrs2_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Instrs2_56, 0) = ((MR_Box) (NextLabelInstr_58));
                MR_hl_field(MR_mktag(1), Instrs2_56, 1) = ((MR_Box) (Instrs1_46));
              }
            }
            {
              Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_111, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_111, 1) = ((MR_Box) (EmptyLabel_48));
            }
            {
              EmptyLabelInstr_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), EmptyLabelInstr_59, 0) = ((MR_Box) (Var_111));
              MR_hl_field(MR_mktag(0), EmptyLabelInstr_59, 1) = ((MR_Box) ((MR_String) ""));
            }
            {
              Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (NextLabel_55));
            }
            {
              Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (Var_114));
            }
            {
              FallThroughFromEmptyInstr_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FallThroughFromEmptyInstr_60, 0) = ((MR_Box) (Var_113));
              MR_hl_field(MR_mktag(0), FallThroughFromEmptyInstr_60, 1) = ((MR_Box) ((MR_String) "fall through"));
            }
            {
              Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (FallThroughFromEmptyInstr_60));
              MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (EmptyLabelInstr_59));
              MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (Var_119));
            }
            {
              Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Label_42));
            }
            {
              EmptyBlockInfo_62 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), EmptyBlockInfo_62, 0) = ((MR_Box) (EmptyLabel_48));
              MR_hl_field(MR_mktag(0), EmptyBlockInfo_62, 1) = ((MR_Box) (Var_118));
              MR_hl_field(MR_mktag(0), EmptyBlockInfo_62, 2) = ((MR_Box) (Var_121));
              MR_hl_field(MR_mktag(0), EmptyBlockInfo_62, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), EmptyBlockInfo_62, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), EmptyBlockInfo_62, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__frameopt_scalar_common_3[2])));
            }
            {
              Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (EmptyLabel_48));
            }
            ll_backend__frameopt__build_frame_block_map_14_p_0(TypeClassInfo_for_block_entry_exit_187, Instrs2_56, EntryInfo_2, &LabelSeq0_63, Var_124, Var_124, ProcLabel_6, STATE_VARIABLE_BlockMap_0_7, &STATE_VARIABLE_BlockMap_126_126, STATE_VARIABLE_PredMap_95_95, STATE_VARIABLE_PredMap_10, STATE_VARIABLE_C_108_108, STATE_VARIABLE_C_12, STATE_VARIABLE_PreExitDummyLabelMap_0_13, STATE_VARIABLE_PreExitDummyLabelMap_14);
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_187, (MR_Integer) 1, &TypeInfo_192_192);
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_187, (MR_Integer) 2, &TypeInfo_194_194);
            {
              TypeInfo_196_196 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_196_196, 0) = ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2));
              MR_hl_field(MR_mktag(0), TypeInfo_196_196, 1) = ((MR_Box) (TypeInfo_192_192));
              MR_hl_field(MR_mktag(0), TypeInfo_196_196, 2) = ((MR_Box) (TypeInfo_194_194));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_196_196, ((MR_Box) (Label_42)), ((MR_Box) (BlockInfo_50)), (MR_Word) (STATE_VARIABLE_BlockMap_126_126), &conv0_STATE_VARIABLE_BlockMap_130_130);
            STATE_VARIABLE_BlockMap_130_130 = (MR_Word) (conv0_STATE_VARIABLE_BlockMap_130_130);
            mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_196_196, ((MR_Box) (EmptyLabel_48)), ((MR_Box) (EmptyBlockInfo_62)), (MR_Word) (STATE_VARIABLE_BlockMap_130_130), &conv1_STATE_VARIABLE_BlockMap_8);
            *STATE_VARIABLE_BlockMap_8 = (MR_Word) (conv1_STATE_VARIABLE_BlockMap_8);
            {
              Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (EmptyLabel_48));
              MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (LabelSeq0_63));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Label_42));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_132));
            }
          }
          else
          {
            MR_Word Extra_64;
            MR_Word ExitInstrs_65;
            MR_Word Remain_66;
            MR_Box ExitInfo_67;

            succeeded = ll_backend__frameopt__detect_exit_6_p_0(TypeClassInfo_for_block_entry_exit_187, Instrs0_32, EntryInfo_2, &Extra_64, &ExitInstrs_65, &Remain_66, &ExitInfo_67);
            if (succeeded)
            {
              MR_Word TypeInfo_202_202;
              MR_Word TypeInfo_204_204;
              MR_Word TypeInfo_206_206;
              MR_Word ExitLabel_68;
              MR_Word NeedsFrame_69;
              MR_Word FallThroughInstr_70;
              MR_Word ExtraBlockType_71;
              MR_Word ExtraInstrs_74;
              MR_Word ExtraInfo_75;
              MR_Word ExitLabelInstr_76;
              MR_Word LabelledBlock_77;
              MR_Word ExitBlockInfo_78;
              MR_Word STATE_VARIABLE_C_133_133;
              MR_Word Var_134;
              MR_Word Var_135;
              MR_Word STATE_VARIABLE_PreExitDummyLabelMap_142_142;
              MR_Word Var_144;
              MR_Word Var_145;
              MR_Word Var_149;
              MR_Word Var_151;
              MR_Word Var_154;
              MR_Word STATE_VARIABLE_PredMap_155_155;
              MR_Word Var_156;
              MR_Word STATE_VARIABLE_BlockMap_158_158;
              MR_Word STATE_VARIABLE_BlockMap_162_162;
              MR_Word Var_164;
              MR_Integer N_177;
              MR_Word LabelSeq0_178;
              MR_Word conv2_STATE_VARIABLE_BlockMap_162_162;
              MR_Word conv3_STATE_VARIABLE_BlockMap_8;

              mercury__counter__allocate_3_p_0(&N_177, STATE_VARIABLE_C_0_11, &STATE_VARIABLE_C_133_133);
              {
                ExitLabel_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ExitLabel_68, 0) = ((MR_Box) (N_177));
                MR_hl_field(MR_mktag(0), ExitLabel_68, 1) = ((MR_Box) (ProcLabel_6));
              }
              ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_p_0(Extra_64, &NeedsFrame_69);
              {
                Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (ExitLabel_68));
              }
              {
                Var_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_134, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), Var_134, 1) = ((MR_Box) (Var_135));
              }
              {
                FallThroughInstr_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), FallThroughInstr_70, 0) = ((MR_Box) (Var_134));
                MR_hl_field(MR_mktag(0), FallThroughInstr_70, 1) = ((MR_Box) ((MR_String) "fall through"));
              }
              if ((Extra_64 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_138;

                {
                  Var_138 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_138, 0) = ((MR_Box) (&ll_backend__frameopt_scalar_common_4[0]));
                  MR_hl_field(MR_mktag(0), Var_138, 1) = ((MR_Box) (ll_backend__frameopt__build_frame_block_map_14_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_138, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_138, 3) = ((MR_Box) (NeedsFrame_69));
                  MR_hl_field(MR_mktag(0), Var_138, 4) = ((MR_Box) ((MR_Integer) 1));
                }
                mercury__require__expect_3_p_0(Var_138, (MR_String) "predicate \140ll_backend.frameopt.build_frame_block_map\'/14", (MR_String) "[] needs frame");
                mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (Label_42)), ((MR_Box) (ExitLabel_68)), STATE_VARIABLE_PreExitDummyLabelMap_0_13, &STATE_VARIABLE_PreExitDummyLabelMap_142_142);
                {
                  ExtraBlockType_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ExtraBlockType_71, 0) = (MR_Box) (((((MR_Unsigned) (NeedsFrame_69) << 2)) | (MR_Unsigned) ((MR_Integer) 2)));
                }
              }
              else
              {
                {
                  ExtraBlockType_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ExtraBlockType_71, 0) = (MR_Box) (((((MR_Unsigned) (NeedsFrame_69) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
                }
                STATE_VARIABLE_PreExitDummyLabelMap_142_142 = STATE_VARIABLE_PreExitDummyLabelMap_0_13;
              }
              {
                Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (Instr0_31));
                MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) (Extra_64));
              }
              {
                Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (FallThroughInstr_70));
                MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              ExtraInstrs_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_144, Var_145);
              {
                ExtraInfo_75 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ExtraInfo_75, 0) = ((MR_Box) (Label_42));
                MR_hl_field(MR_mktag(0), ExtraInfo_75, 1) = ((MR_Box) (ExtraInstrs_74));
                MR_hl_field(MR_mktag(0), ExtraInfo_75, 2) = ((MR_Box) (FallInto_5));
                MR_hl_field(MR_mktag(0), ExtraInfo_75, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), ExtraInfo_75, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), ExtraInfo_75, 5) = ((MR_Box) (ExtraBlockType_71));
              }
              {
                Var_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_149, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Var_149, 1) = ((MR_Box) (ExitLabel_68));
              }
              {
                ExitLabelInstr_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ExitLabelInstr_76, 0) = ((MR_Box) (Var_149));
                MR_hl_field(MR_mktag(0), ExitLabelInstr_76, 1) = ((MR_Box) ((MR_String) ""));
              }
              {
                LabelledBlock_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), LabelledBlock_77, 0) = ((MR_Box) (ExitLabelInstr_76));
                MR_hl_field(MR_mktag(1), LabelledBlock_77, 1) = ((MR_Box) (ExitInstrs_65));
              }
              {
                Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (Label_42));
              }
              {
                Var_154 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_154, 0) = ExitInfo_67;
              }
              {
                ExitBlockInfo_78 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ExitBlockInfo_78, 0) = ((MR_Box) (ExitLabel_68));
                MR_hl_field(MR_mktag(0), ExitBlockInfo_78, 1) = ((MR_Box) (LabelledBlock_77));
                MR_hl_field(MR_mktag(0), ExitBlockInfo_78, 2) = ((MR_Box) (Var_151));
                MR_hl_field(MR_mktag(0), ExitBlockInfo_78, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), ExitBlockInfo_78, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), ExitBlockInfo_78, 5) = ((MR_Box) (Var_154));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), ((MR_Box) (ExitLabel_68)), ((MR_Box) (Label_42)), STATE_VARIABLE_PredMap_95_95, &STATE_VARIABLE_PredMap_155_155);
              {
                Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (ExitLabel_68));
              }
              ll_backend__frameopt__build_frame_block_map_14_p_0(TypeClassInfo_for_block_entry_exit_187, Remain_66, EntryInfo_2, &LabelSeq0_178, Var_156, (MR_Word) ((MR_Unsigned) 0U), ProcLabel_6, STATE_VARIABLE_BlockMap_0_7, &STATE_VARIABLE_BlockMap_158_158, STATE_VARIABLE_PredMap_155_155, STATE_VARIABLE_PredMap_10, STATE_VARIABLE_C_133_133, STATE_VARIABLE_C_12, STATE_VARIABLE_PreExitDummyLabelMap_142_142, STATE_VARIABLE_PreExitDummyLabelMap_14);
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_187, (MR_Integer) 1, &TypeInfo_202_202);
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_187, (MR_Integer) 2, &TypeInfo_204_204);
              {
                TypeInfo_206_206 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_206_206, 0) = ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2));
                MR_hl_field(MR_mktag(0), TypeInfo_206_206, 1) = ((MR_Box) (TypeInfo_202_202));
                MR_hl_field(MR_mktag(0), TypeInfo_206_206, 2) = ((MR_Box) (TypeInfo_204_204));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_206_206, ((MR_Box) (ExitLabel_68)), ((MR_Box) (ExitBlockInfo_78)), (MR_Word) (STATE_VARIABLE_BlockMap_158_158), &conv2_STATE_VARIABLE_BlockMap_162_162);
              STATE_VARIABLE_BlockMap_162_162 = (MR_Word) (conv2_STATE_VARIABLE_BlockMap_162_162);
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_206_206, ((MR_Box) (Label_42)), ((MR_Box) (ExtraInfo_75)), (MR_Word) (STATE_VARIABLE_BlockMap_162_162), &conv3_STATE_VARIABLE_BlockMap_8);
              *STATE_VARIABLE_BlockMap_8 = (MR_Word) (conv3_STATE_VARIABLE_BlockMap_8);
              {
                Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (ExitLabel_68));
                MR_hl_field(MR_mktag(1), Var_164, 1) = ((MR_Box) (LabelSeq0_178));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Label_42));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_164));
              }
            }
            else
            {
              MR_Word TypeInfo_210_210;
              MR_Word TypeInfo_212_212;
              MR_Word TypeInfo_214_214;
              MR_Word Block_79;
              MR_Word BlockInstrs_80;
              MR_Word NextFallInto_85;
              MR_Word Var_167;
              MR_Word Var_169;
              MR_Word STATE_VARIABLE_BlockMap_170_170;
              MR_Word Instrs1_179;
              MR_Word BlockInfo_180;
              MR_Word LabelSeq0_181;
              MR_Word NeedsFrame_182;
              MR_Word LastBlockInstr_81;
              MR_Box conv4_LastBlockInstr_81;
              MR_Word conv5_STATE_VARIABLE_BlockMap_8;

              ll_backend__opt_util__skip_to_next_label_3_p_0(Instrs0_32, &Block_79, &Instrs1_179);
              ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_p_0(Block_79, &NeedsFrame_182);
              {
                BlockInstrs_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), BlockInstrs_80, 0) = ((MR_Box) (Instr0_31));
                MR_hl_field(MR_mktag(1), BlockInstrs_80, 1) = ((MR_Box) (Block_79));
              }
              {
                Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_167, 0) = (MR_Box) (((((MR_Unsigned) (NeedsFrame_182) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
              }
              {
                BlockInfo_180 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), BlockInfo_180, 0) = ((MR_Box) (Label_42));
                MR_hl_field(MR_mktag(0), BlockInfo_180, 1) = ((MR_Box) (BlockInstrs_80));
                MR_hl_field(MR_mktag(0), BlockInfo_180, 2) = ((MR_Box) (FallInto_5));
                MR_hl_field(MR_mktag(0), BlockInfo_180, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), BlockInfo_180, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), BlockInfo_180, 5) = ((MR_Box) (Var_167));
              }
              succeeded = mercury__list__last_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BlockInstrs_80, &conv4_LastBlockInstr_81);
              if (succeeded)
              {
                LastBlockInstr_81 = ((MR_Word) (conv4_LastBlockInstr_81));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word LastBlockUinstr_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LastBlockInstr_81, (MR_Integer) 0))));
                MR_Word NextFallIntoBool_84;

                NextFallIntoBool_84 = ll_backend__opt_util__can_instr_fall_through_1_f_0(LastBlockUinstr_82);
                switch (NextFallIntoBool_84) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    NextFallInto_85 = (MR_Word) ((MR_Unsigned) 0U);
                    break;
                  case (MR_Integer) 1:
                    {
                      NextFallInto_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), NextFallInto_85, 0) = ((MR_Box) (Label_42));
                    }
                    break;
                }
              }
              else
                {
                  NextFallInto_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), NextFallInto_85, 0) = ((MR_Box) (Label_42));
                }
              {
                Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_169, 0) = ((MR_Box) (Label_42));
              }
              ll_backend__frameopt__build_frame_block_map_14_p_0(TypeClassInfo_for_block_entry_exit_187, Instrs1_179, EntryInfo_2, &LabelSeq0_181, Var_169, NextFallInto_85, ProcLabel_6, STATE_VARIABLE_BlockMap_0_7, &STATE_VARIABLE_BlockMap_170_170, STATE_VARIABLE_PredMap_95_95, STATE_VARIABLE_PredMap_10, STATE_VARIABLE_C_0_11, STATE_VARIABLE_C_12, STATE_VARIABLE_PreExitDummyLabelMap_0_13, STATE_VARIABLE_PreExitDummyLabelMap_14);
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_187, (MR_Integer) 1, &TypeInfo_210_210);
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_block_entry_exit_187, (MR_Integer) 2, &TypeInfo_212_212);
              {
                TypeInfo_214_214 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_214_214, 0) = ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2));
                MR_hl_field(MR_mktag(0), TypeInfo_214_214, 1) = ((MR_Box) (TypeInfo_210_210));
                MR_hl_field(MR_mktag(0), TypeInfo_214_214, 2) = ((MR_Box) (TypeInfo_212_212));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_214_214, ((MR_Box) (Label_42)), ((MR_Box) (BlockInfo_180)), (MR_Word) (STATE_VARIABLE_BlockMap_170_170), &conv5_STATE_VARIABLE_BlockMap_8);
              *STATE_VARIABLE_BlockMap_8 = (MR_Word) (conv5_STATE_VARIABLE_BlockMap_8);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Label_42));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LabelSeq0_181));
              }
            }
          }
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.frameopt.build_frame_block_map\'/14", (MR_String) "block does not start with label");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
  }
}

static void MR_CALL 
ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_p_0_3(
  void * env_ptr_arg)
{
  {
    struct ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Instr_8 = ((MR_Word) ((env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__conv0_Instr_8));
    ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_p_0_2(env_ptr);
  }
}

static void MR_CALL 
ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    {
      MR_String Var_10;

      (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Uinstr_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Instr_8, (MR_Integer) 0))));
      Var_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Instr_8, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Uinstr_9)) {
        default:
          (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Uinstr_9, (MR_Integer) 0))))) {
            default:
              (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Uinstr_9, (MR_Integer) 1))));
                MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Uinstr_9, (MR_Integer) 2))));

                (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
              }
              break;
            case (MR_Integer) 3:
              (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
              break;
            case (MR_Integer) 4:
              (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
              break;
            case (MR_Integer) 8:
              (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
              break;
            case (MR_Integer) 27:
              {
                MR_Word MayCallMercury_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Uinstr_9, (MR_Integer) 3))) & (MR_Integer) 1);
                MR_Word MaybeLayout_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Uinstr_9, (MR_Integer) 5))));
                MR_Word MaybeOnlyLayout_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Uinstr_9, (MR_Integer) 6))));
                MR_Word MaybeDefLabel_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Uinstr_9, (MR_Integer) 8))));
                MR_Word NeedStack_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Uinstr_9, (MR_Integer) 9))) >> 1)) & (MR_Integer) 1);
                MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Uinstr_9, (MR_Integer) 1))));
                MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Uinstr_9, (MR_Integer) 2))));
                MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Uinstr_9, (MR_Integer) 4))));
                MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Uinstr_9, (MR_Integer) 7))));
                MR_Word Var_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Uinstr_9, (MR_Integer) 9))) & (MR_Integer) 1);
                MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Uinstr_9, (MR_Integer) 3)));
                MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Uinstr_9, (MR_Integer) 9)));

                (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__succeeded = (MayCallMercury_24 == (MR_Integer) 0);
                if (!((env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__succeeded))
                {
                  {
                    MR_Word Var_32;

                    (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__succeeded = (MaybeLayout_26 != (MR_Word) ((MR_Unsigned) 0U));
                    if ((env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__succeeded)
                      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLayout_26, (MR_Integer) 0))));
                  }
                  if (!((env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__succeeded))
                  {
                    {
                      MR_Word Var_33;

                      (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__succeeded = (MaybeOnlyLayout_27 != (MR_Word) ((MR_Unsigned) 0U));
                      if ((env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__succeeded)
                        Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOnlyLayout_27, (MR_Integer) 0))));
                    }
                    if (!((env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__succeeded))
                    {
                      {
                        MR_Word Var_34;

                        (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__succeeded = (MaybeDefLabel_29 != (MR_Word) ((MR_Unsigned) 0U));
                        if ((env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__succeeded)
                          Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefLabel_29, (MR_Integer) 0))));
                      }
                      if (!((env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__succeeded))
                        (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__succeeded = (NeedStack_30 == (MR_Integer) 1);
                    }
                  }
                }
              }
              break;
          }
          break;
      }
      if ((env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__succeeded)
        ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_p_0_4(
  void * env_ptr_arg)
{
  {
    struct ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), &(env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__conv0_Instr_8, (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Instrs_5, ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_p_0_3, env_ptr);
        }
        (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_p_0(
  MR_Word Instrs_5,
  MR_Word * NeedsFrame_6)
{
  {
    struct ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_0_s env;

    (env).ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Instrs_5 = Instrs_5;
    {
      MR_Word ReferStackVars_7;

      ReferStackVars_7 = ll_backend__opt_util__block_refers_to_stack_1_f_0((env).ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__Instrs_5);
      switch (ReferStackVars_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_3_p_0_4(&env);
            if ((env).ll_backend__frameopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_98_108_111_99_107_95_110_101_101_100_115_95_102_114_97_109_101_95_95_91_49_93_95_48_95_51_95_112_95_48_95_101_110_118_95_48__succeeded)
              *NeedsFrame_6 = (MR_Integer) 0;
            else
              *NeedsFrame_6 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 1:
          *NeedsFrame_6 = (MR_Integer) 0;
          break;
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__detect_exit_6_p_0(
  MR_Word TypeClassInfo_for_block_entry_exit_7,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Box * HeadVar__6_6)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_block_entry_exit_7, (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv3_HeadVar__3_3;
    MR_Box conv2_HeadVar__4_4;
    MR_Box conv1_HeadVar__5_5;

    succeeded = func_0(((MR_Box) (TypeClassInfo_for_block_entry_exit_7)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, &conv3_HeadVar__3_3, &conv2_HeadVar__4_4, &conv1_HeadVar__5_5, HeadVar__6_6);
    if (succeeded)
    {
      *HeadVar__3_3 = ((MR_Word) (conv3_HeadVar__3_3));
      *HeadVar__4_4 = ((MR_Word) (conv2_HeadVar__4_4));
      *HeadVar__5_5 = ((MR_Word) (conv1_HeadVar__5_5));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__detect_entry_4_p_0(
  MR_Word TypeClassInfo_for_block_entry_exit_5,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_block_entry_exit_5, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv2_HeadVar__2_2;
    MR_Box conv1_HeadVar__3_3;

    succeeded = func_0(((MR_Box) (TypeClassInfo_for_block_entry_exit_5)), ((MR_Box) (HeadVar__1_1)), &conv2_HeadVar__2_2, &conv1_HeadVar__3_3, HeadVar__4_4);
    if (succeeded)
    {
      *HeadVar__2_2 = ((MR_Word) (conv2_HeadVar__2_2));
      *HeadVar__3_3 = ((MR_Word) (conv1_HeadVar__3_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt__flatten_block_seq_3_p_0(
  MR_Word TypeInfo_for_En_24,
  MR_Word TypeInfo_for_Ex_25,
  MR_Word HeadVar__1_1,
  MR_Word BlockMap_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TypeInfo_28_28;
      MR_Word Label_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Labels_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word RestInstrs_9;
      MR_Word BlockInfo_10;
      MR_Word BlockInstrs_11;
      MR_Box conv0_BlockInfo_10;
      MR_Word MostInstrs_12;
      MR_Word LastInstr_13;
      MR_Word NextLabel_14;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word Var_32;
      MR_Box conv1_LastInstr_13;

      ll_backend__frameopt__flatten_block_seq_3_p_0(TypeInfo_for_En_24, TypeInfo_for_Ex_25, Labels_6, BlockMap_2, &RestInstrs_9);
      {
        TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_28_28, 0) = ((MR_Box) (&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2));
        MR_hl_field(MR_mktag(0), TypeInfo_28_28, 1) = ((MR_Box) (TypeInfo_for_En_24));
        MR_hl_field(MR_mktag(0), TypeInfo_28_28, 2) = ((MR_Box) (TypeInfo_for_Ex_25));
      }
      mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), TypeInfo_28_28, (MR_Word) (BlockMap_2), ((MR_Box) (Label_5)), &conv0_BlockInfo_10);
      BlockInfo_10 = ((MR_Word) (conv0_BlockInfo_10));
      BlockInstrs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BlockInfo_10, (MR_Integer) 1))));
      succeeded = mercury__list__split_last_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BlockInstrs_11, &MostInstrs_12, &conv1_LastInstr_13);
      if (succeeded)
      {
        LastInstr_13 = ((MR_Word) (conv1_LastInstr_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = (Labels_6 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          NextLabel_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Labels_6, (MR_Integer) 0))));
          Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LastInstr_13, (MR_Integer) 0))));
          succeeded = ((((MR_tag((MR_Word) Var_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_17, (MR_Integer) 0)))) == (MR_Integer) 6)));
          if (succeeded)
          {
            Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_17, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));
              succeeded = ll_backend__llds____Unify____label_0_0(NextLabel_14, Var_32);
            }
          }
        }
      }
      if (succeeded)
      {
        *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MostInstrs_12, RestInstrs_9);
      }
      else
      {
        *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BlockInstrs_11, RestInstrs_9);
      }
    }
  }
}

static void MR_CALL 
ll_backend__frameopt__divide_into_basic_blocks_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ProcLabel_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_C_0_4,
  MR_Word * STATE_VARIABLE_C_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_C_5 = STATE_VARIABLE_C_0_4;
    }
    else
    {
      MR_Word Instr0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Uinstr0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_10, (MR_Integer) 0))));
      MR_Word CanBranchAway_17;

      CanBranchAway_17 = ll_backend__opt_util__can_instr_branch_away_1_f_0(Uinstr0_15);
      switch (CanBranchAway_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Instrs1_38;

            ll_backend__frameopt__divide_into_basic_blocks_5_p_0(Instrs0_11, ProcLabel_2, &Instrs1_38, STATE_VARIABLE_C_0_4, STATE_VARIABLE_C_5);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_10));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Instrs1_38));
            }
          }
          break;
        case (MR_Integer) 1:
          if ((Instrs0_11 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_10));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *STATE_VARIABLE_C_5 = STATE_VARIABLE_C_0_4;
          }
          else
          {
            MR_Word Instr1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs0_11, (MR_Integer) 0))));
            MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr1_18, (MR_Integer) 0))));

            succeeded = ((((MR_tag((MR_Word) Var_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_30, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (succeeded)
            {
              {
                MR_Word Instrs1_22;

                ll_backend__frameopt__divide_into_basic_blocks_5_p_0(Instrs0_11, ProcLabel_2, &Instrs1_22, STATE_VARIABLE_C_0_4, STATE_VARIABLE_C_5);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_10));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Instrs1_22));
                }
              }
            }
            else
            {
              MR_Integer N_23;
              MR_Word NewLabel_24;
              MR_Word NewInstr_25;
              MR_Word STATE_VARIABLE_C_32_32;
              MR_Word Var_33;
              MR_Word Var_36;
              MR_Word Instrs1_37;

              mercury__counter__allocate_3_p_0(&N_23, STATE_VARIABLE_C_0_4, &STATE_VARIABLE_C_32_32);
              {
                NewLabel_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), NewLabel_24, 0) = ((MR_Box) (N_23));
                MR_hl_field(MR_mktag(0), NewLabel_24, 1) = ((MR_Box) (ProcLabel_2));
              }
              {
                Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (NewLabel_24));
              }
              {
                NewInstr_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), NewInstr_25, 0) = ((MR_Box) (Var_33));
                MR_hl_field(MR_mktag(0), NewInstr_25, 1) = ((MR_Box) ((MR_String) ""));
              }
              ll_backend__frameopt__divide_into_basic_blocks_5_p_0(Instrs0_11, ProcLabel_2, &Instrs1_37, STATE_VARIABLE_C_32_32, STATE_VARIABLE_C_5);
              {
                Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (NewInstr_25));
                MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Instrs1_37));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_10));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_36));
              }
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
ll_backend__frameopt__maybe_add_comments_5_p_0(
  MR_Word Comments_6,
  MR_Word DescComments_7,
  MR_Word Instrs0_8,
  MR_Word * Instrs_9,
  MR_Word * Mod_10)
{
  switch (Comments_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Instrs_9 = Instrs0_8;
        *Mod_10 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_17;

        Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), DescComments_7, Instrs0_8);
        *Instrs_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__frameopt_scalar_common_2[5])), Var_17);
        *Mod_10 = (MR_Integer) 1;
      }
      break;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____block_needs_frame_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__frameopt____Unify____block_needs_frame_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____block_needs_frame_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__frameopt____Compare____block_needs_frame_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____block_type_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__frameopt____Unify____block_type_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____block_type_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__frameopt____Compare____block_type_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____can_transform_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__frameopt____Unify____can_transform_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____can_transform_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__frameopt____Compare____can_transform_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____det_entry_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__frameopt____Unify____det_entry_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____det_entry_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__frameopt____Compare____det_entry_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____det_exit_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__frameopt____Unify____det_exit_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____det_exit_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__frameopt____Compare____det_exit_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____det_frame_block_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__frameopt____Unify____det_frame_block_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____det_frame_block_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__frameopt____Compare____det_frame_block_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____exit_par_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__frameopt____Unify____exit_par_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____exit_par_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__frameopt____Compare____exit_par_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____frame_block_info_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__frameopt____Unify____frame_block_info_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____frame_block_info_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__frameopt____Compare____frame_block_info_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____frame_block_map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__frameopt____Unify____frame_block_map_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____frame_block_map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__frameopt____Compare____frame_block_map_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____maybe_dummy_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__frameopt____Unify____maybe_dummy_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____maybe_dummy_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__frameopt____Compare____maybe_dummy_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____nondet_entry_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__frameopt____Unify____nondet_entry_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____nondet_entry_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__frameopt____Compare____nondet_entry_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____nondet_exit_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__frameopt____Unify____nondet_exit_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____nondet_exit_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__frameopt____Compare____nondet_exit_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____ord_needs_frame_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__frameopt____Unify____ord_needs_frame_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____ord_needs_frame_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__frameopt____Compare____ord_needs_frame_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____pre_exit_dummy_label_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__frameopt____Unify____pre_exit_dummy_label_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____pre_exit_dummy_label_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__frameopt____Compare____pre_exit_dummy_label_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____pred_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__frameopt____Unify____pred_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____pred_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__frameopt____Compare____pred_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____prop_queue_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__frameopt____Unify____prop_queue_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____prop_queue_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__frameopt____Compare____prop_queue_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____rev_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__frameopt____Unify____rev_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____rev_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__frameopt____Compare____rev_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt____Unify____setup_par_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__frameopt____Unify____setup_par_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__frameopt____Compare____setup_par_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__frameopt____Compare____setup_par_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;
    MR_Word conv1_HeadVar__3_3;
    MR_Word conv0_HeadVar__4_4;

    succeeded = ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2, &conv1_HeadVar__3_3, &conv0_HeadVar__4_4);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
      *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
      *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_3;
    MR_Word conv2_HeadVar__4_4;
    MR_Word conv1_HeadVar__5_5;
    MR_Word conv0_HeadVar__6_6;

    succeeded = ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__3_3, &conv2_HeadVar__4_4, &conv1_HeadVar__5_5, &conv0_HeadVar__6_6);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_3));
      *wrapper_arg_4 = ((MR_Box) (conv2_HeadVar__4_4));
      *wrapper_arg_5 = ((MR_Box) (conv1_HeadVar__5_5));
      *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__6_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__late_setup_code_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__late_setup_code_1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__nondet_entry_info__arity0__ll_backend__frameopt__nondet_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;
    MR_Word conv1_HeadVar__3_3;
    MR_Word conv0_HeadVar__4_4;

    succeeded = ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_entry_4_4_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2, &conv1_HeadVar__3_3, &conv0_HeadVar__4_4);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
      *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
      *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_3;
    MR_Word conv2_HeadVar__4_4;
    MR_Word conv1_HeadVar__5_5;
    MR_Word conv0_HeadVar__6_6;

    succeeded = ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__detect_exit_6_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__3_3, &conv2_HeadVar__4_4, &conv1_HeadVar__5_5, &conv0_HeadVar__6_6);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_3));
      *wrapper_arg_4 = ((MR_Box) (conv2_HeadVar__4_4));
      *wrapper_arg_5 = ((MR_Box) (conv1_HeadVar__5_5));
      *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__6_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__late_setup_code_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__late_setup_code_1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__non_teardown_exit_code_1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_entry_1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = ll_backend__frameopt__ClassMethod_for_ll_backend__frameopt__block_entry_exit____ll_backend__frameopt__det_entry_info__arity0__ll_backend__frameopt__det_exit_info__arity0______ll_backend__frameopt__describe_exit_2_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

void mercury__ll_backend__frameopt__init(void)
{
}

void mercury__ll_backend__frameopt__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_needs_frame_0);
	MR_register_type_ctor_info(&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_block_type_2);
	MR_register_type_ctor_info(&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_can_transform_0);
	MR_register_type_ctor_info(&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_det_entry_info_0);
	MR_register_type_ctor_info(&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_det_exit_info_0);
	MR_register_type_ctor_info(&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_det_frame_block_map_0);
	MR_register_type_ctor_info(&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_exit_par_map_0);
	MR_register_type_ctor_info(&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_info_2);
	MR_register_type_ctor_info(&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_frame_block_map_2);
	MR_register_type_ctor_info(&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_maybe_dummy_0);
	MR_register_type_ctor_info(&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_nondet_entry_info_0);
	MR_register_type_ctor_info(&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_nondet_exit_info_0);
	MR_register_type_ctor_info(&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_ord_needs_frame_0);
	MR_register_type_ctor_info(&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_pre_exit_dummy_label_map_0);
	MR_register_type_ctor_info(&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_pred_map_0);
	MR_register_type_ctor_info(&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_prop_queue_0);
	MR_register_type_ctor_info(&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_rev_map_0);
	MR_register_type_ctor_info(&ll_backend__frameopt__ll_backend__frameopt__type_ctor_info_setup_par_map_0);
}

void mercury__ll_backend__frameopt__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__frameopt__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.frameopt.
