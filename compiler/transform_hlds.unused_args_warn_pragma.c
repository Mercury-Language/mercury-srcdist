/*
** Automatically generated from `unused_args_warn_pragma.m'
** by the Mercury compiler,
** version rotd-2026-03-13
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


// :- module transform_hlds.unused_args_warn_pragma.
// :- implementation.

/*
INIT mercury__transform_hlds__unused_args_warn_pragma__init
ENDINIT
*/

#include "transform_hlds.unused_args_warn_pragma.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
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
#include "hlds.mode_test.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args_warn_pragma__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args_warn_pragma__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_transform_hlds__unused_args_warn_pragma__type_ctor_info_warn_unused_pred_args_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args_warn_pragma__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args_warn_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args_warn_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args_warn_pragma__one_or_more__ti_one_or_more_1transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args_warn_pragma__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_one_or_more__ti_one_or_more_1transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args_warn_pragma__one_or_more__ti_one_or_more_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args_warn_pragma__tree234__pti_tree234_2__plain_one_or_more__ti_one_or_more_1transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0__plain_one_or_more__ti_one_or_more_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args_warn_pragma__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_gather_pragma_unused_args_0_0;

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_gather_pragma_unused_args_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_ordinal_ordered_maybe_gather_pragma_unused_args_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_name_ordered_maybe_gather_pragma_unused_args_0[2];

static const MR_Integer transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_maybe_gather_pragma_unused_args_0[2];

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_marked_unused_0_0;

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_marked_unused_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_ordinal_ordered_maybe_marked_unused_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_name_ordered_maybe_marked_unused_0[2];

static const MR_Integer transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_maybe_marked_unused_0[2];

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_record_analysis_unused_args_0_0;

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_record_analysis_unused_args_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_ordinal_ordered_maybe_record_analysis_unused_args_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_name_ordered_maybe_record_analysis_unused_args_0[2];

static const MR_Integer transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_maybe_record_analysis_unused_args_0[2];

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_warn_unused_args_0_0;

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_warn_unused_args_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_ordinal_ordered_maybe_warn_unused_args_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_name_ordered_maybe_warn_unused_args_0[2];

static const MR_Integer transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_maybe_warn_unused_args_0[2];

static const MR_PseudoTypeInfo transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__field_types_unused_proc_arg_0_0[2];

static const MR_DuArgLocn transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__field_locns_unused_proc_arg_0_0[2];

static const MR_DuFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_functor_desc_unused_proc_arg_0_0;

static const MR_DuFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_stag_ordered_unused_proc_arg_0_0[1];

static const MR_DuPtagLayout transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_ptag_ordered_unused_proc_arg_0[1];

static const MR_DuFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_name_ordered_unused_proc_arg_0[1];

static const MR_Integer transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_unused_proc_arg_0[1];

static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args_warn_pragma__pair__ti_pair_2builtin__type_ctor_info_int_0one_or_more__ti_one_or_more_1transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args_warn_pragma__one_or_more__ti_one_or_more_1pair__ti_pair_2builtin__type_ctor_info_int_0one_or_more__ti_one_or_more_1transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0;

static const MR_PseudoTypeInfo transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__field_types_warn_unused_pred_args_0_0[2];

static const MR_DuFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_functor_desc_warn_unused_pred_args_0_0;

static const MR_DuFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_stag_ordered_warn_unused_pred_args_0_0[1];

static const MR_DuPtagLayout transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_ptag_ordered_warn_unused_pred_args_0[1];

static const MR_DuFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_name_ordered_warn_unused_pred_args_0[1];

static const MR_Integer transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_warn_unused_pred_args_0[1];

static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args_warn_pragma__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0transform_hlds__unused_args_warn_pragma__type_ctor_info_warn_unused_pred_args_0;

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____warn_unused_pred_args_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____warn_unused_pred_args_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____warn_unused_pred_args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____warn_unused_pred_args_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____unused_proc_args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____unused_proc_args_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____unused_proc_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____unused_proc_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____maybe_marked_unused_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____maybe_marked_unused_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__classify_unused_proc_arg_5_p_0(
  MR_Word UnusedProcArg_6,
  MR_Word STATE_VARIABLE_UnmarkedArgNums_0_11,
  MR_Word * STATE_VARIABLE_UnmarkedArgNums_12,
  MR_Word STATE_VARIABLE_MarkedArgNums_0_13,
  MR_Word * STATE_VARIABLE_MarkedArgNums_14);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__report_proc_specific_unused_args_4_p_0(
  MR_Word PredInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__do_all_procs_have_same_unused_args_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UnusedArgsToProcmap_0_13,
  MR_Word * STATE_VARIABLE_UnusedArgsToProcmap_14,
  MR_Word STATE_VARIABLE_UnmentionedProcTable_0_15,
  MR_Word * STATE_VARIABLE_UnmentionedProcTable_16);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__warn_unused_args_in_pred_4_p_0(
  MR_Word _PredId_5,
  MR_Word WarnUnusedPredArgs_6,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_117_110_117_115_101_100_95_97_114_103_115_95_105_110_95_112_114_101_100_95_95_91_49_93_95_48_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_117_110_117_115_101_100_95_97_114_103_115_95_105_110_95_112_114_101_100_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_117_110_117_115_101_100_95_97_114_103_115_95_105_110_95_112_114_101_100_95_95_91_49_93_95_48_4_p_0(
  MR_Word WarnUnusedPredArgs_6,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__report_unused_args_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__report_unused_args_5_p_0(
  MR_Word NameColonNlPieces_6,
  MR_Word Context_7,
  MR_Word ProcUnusedArgs_8,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__gather_warnings_and_pragmas_ppid_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word DoWarn_11,
  MR_Word DoPragma_12,
  MR_Word PredProcId_13,
  MR_Word UnusedArgs_14,
  MR_Word STATE_VARIABLE_WarnUnusedPredArgsMap_0_20,
  MR_Word * STATE_VARIABLE_WarnUnusedPredArgsMap_21,
  MR_Word STATE_VARIABLE_PragmaUnusedArgInfos_0_22,
  MR_Word * STATE_VARIABLE_PragmaUnusedArgInfos_23);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__maybe_add_proc_to_unused_args_map_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredInfo_9,
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word UnusedArgs0_12,
  MR_Word STATE_VARIABLE_WarnUnusedPredArgsMap_0_30,
  MR_Word * STATE_VARIABLE_WarnUnusedPredArgsMap_31);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__record_which_unused_args_are_marked_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ArgModes_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__drop_poly_inserted_args_3_p_0(
  MR_Integer NumInserted_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__gather_warnings_and_pragmas_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__gather_warnings_and_pragmas_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____maybe_gather_pragma_unused_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____maybe_gather_pragma_unused_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____maybe_marked_unused_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____maybe_marked_unused_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____maybe_record_analysis_unused_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____maybe_record_analysis_unused_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____maybe_warn_unused_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____maybe_warn_unused_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____unused_proc_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____unused_proc_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____unused_proc_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____unused_proc_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____warn_unused_pred_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____warn_unused_pred_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____warn_unused_pred_args_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____warn_unused_pred_args_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__unused_args_warn_pragma_scalar_common_1[38][2];

static /* final */ const MR_Box transform_hlds__unused_args_warn_pragma_scalar_common_2[7][3];

static /* final */ const MR_Box transform_hlds__unused_args_warn_pragma_scalar_common_3[2][1];

static /* final */ const MR_Box transform_hlds__unused_args_warn_pragma_scalar_common_4[1][12];

static /* final */ const MR_Box transform_hlds__unused_args_warn_pragma_scalar_common_5[2][7];

static /* final */ const MR_Box transform_hlds__unused_args_warn_pragma_scalar_common_6[2][8];




static /* final */ const MR_Box transform_hlds__unused_args_warn_pragma_scalar_common_1[38][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma_scalar_common_2[1]))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_warn_pragma_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_warn_pragma_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_warn_pragma_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_warn_pragma_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_warn_pragma_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "unused."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_warn_pragma_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "arguments"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_warn_pragma_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_warn_pragma_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(Argument"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_warn_pragma_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is also unused, but its mode"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_warn_pragma_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "marks it"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_warn_pragma_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "as unused.)"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_warn_pragma_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[7])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(Arguments"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_warn_pragma_scalar_common_1[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are also unused, but their modes"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_warn_pragma_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "mark them"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__unused_args_warn_pragma_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_warn_pragma_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_warn_unused_pred_args_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma_scalar_common_1[3]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma_scalar_common_1[3])),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma_scalar_common_1[4]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__unused_args_warn_pragma__gather_warnings_and_pragmas_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__unused_args_warn_pragma__report_unused_args_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__unused_args_warn_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_117_110_117_115_101_100_95_97_114_103_115_95_105_110_95_112_114_101_100_95_95_91_49_93_95_48_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_warn_pragma_scalar_common_3[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 230U) },
};

static /* final */ const MR_Box transform_hlds__unused_args_warn_pragma_scalar_common_4[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_maybe_warn_unused_args_0)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_maybe_gather_pragma_unused_args_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_transform_hlds__unused_args_warn_pragma__type_ctor_info_warn_unused_pred_args_0)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_transform_hlds__unused_args_warn_pragma__type_ctor_info_warn_unused_pred_args_0)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_warn_pragma_scalar_common_5[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_warn_unused_pred_args_0)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_one_or_more__ti_one_or_more_1transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_warn_pragma_scalar_common_6[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_one_or_more__ti_one_or_more_1transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma__tree234__pti_tree234_2__plain_one_or_more__ti_one_or_more_1transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0__plain_one_or_more__ti_one_or_more_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma__tree234__pti_tree234_2__plain_one_or_more__ti_one_or_more_1transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0__plain_one_or_more__ti_one_or_more_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_warn_pragma__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args_warn_pragma__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args_warn_pragma__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_transform_hlds__unused_args_warn_pragma__type_ctor_info_warn_unused_pred_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_warn_unused_pred_args_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args_warn_pragma__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args_warn_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args_warn_pragma__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args_warn_pragma__one_or_more__ti_one_or_more_1transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args_warn_pragma__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_one_or_more__ti_one_or_more_1transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args_warn_pragma__one_or_more__ti_one_or_more_1transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args_warn_pragma__one_or_more__ti_one_or_more_1builtin__type_ctor_info_int_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args_warn_pragma__tree234__pti_tree234_2__plain_one_or_more__ti_one_or_more_1transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0__plain_one_or_more__ti_one_or_more_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args_warn_pragma__one_or_more__ti_one_or_more_1transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args_warn_pragma__one_or_more__ti_one_or_more_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args_warn_pragma__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_gather_pragma_unused_args_0_0 = {
  (MR_String) "do_not_gather_pragma_unused_args",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_gather_pragma_unused_args_0_1 = {
  (MR_String) "do_gather_pragma_unused_args",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_ordinal_ordered_maybe_gather_pragma_unused_args_0[2] = {
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_gather_pragma_unused_args_0_0,
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_gather_pragma_unused_args_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_name_ordered_maybe_gather_pragma_unused_args_0[2] = {
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_gather_pragma_unused_args_0_1,
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_gather_pragma_unused_args_0_0
};

static const MR_Integer transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_maybe_gather_pragma_unused_args_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_maybe_gather_pragma_unused_args_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__unused_args_warn_pragma____Unify____maybe_gather_pragma_unused_args_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_warn_pragma____Compare____maybe_gather_pragma_unused_args_0_0_10001)),
  (MR_String) "transform_hlds.unused_args_warn_pragma",
  (MR_String) "maybe_gather_pragma_unused_args",
  { transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_name_ordered_maybe_gather_pragma_unused_args_0 },
  { transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_ordinal_ordered_maybe_gather_pragma_unused_args_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_maybe_gather_pragma_unused_args_0,

};

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_marked_unused_0_0 = {
  (MR_String) "not_marked_unused",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_marked_unused_0_1 = {
  (MR_String) "marked_unused",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_ordinal_ordered_maybe_marked_unused_0[2] = {
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_marked_unused_0_0,
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_marked_unused_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_name_ordered_maybe_marked_unused_0[2] = {
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_marked_unused_0_1,
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_marked_unused_0_0
};

static const MR_Integer transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_maybe_marked_unused_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_maybe_marked_unused_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__unused_args_warn_pragma____Unify____maybe_marked_unused_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_warn_pragma____Compare____maybe_marked_unused_0_0_10001)),
  (MR_String) "transform_hlds.unused_args_warn_pragma",
  (MR_String) "maybe_marked_unused",
  { transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_name_ordered_maybe_marked_unused_0 },
  { transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_ordinal_ordered_maybe_marked_unused_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_maybe_marked_unused_0,

};

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_record_analysis_unused_args_0_0 = {
  (MR_String) "do_not_record_analysis_unused_args",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_record_analysis_unused_args_0_1 = {
  (MR_String) "do_record_analysis_unused_args",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_ordinal_ordered_maybe_record_analysis_unused_args_0[2] = {
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_record_analysis_unused_args_0_0,
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_record_analysis_unused_args_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_name_ordered_maybe_record_analysis_unused_args_0[2] = {
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_record_analysis_unused_args_0_0,
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_record_analysis_unused_args_0_1
};

static const MR_Integer transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_maybe_record_analysis_unused_args_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_maybe_record_analysis_unused_args_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__unused_args_warn_pragma____Unify____maybe_record_analysis_unused_args_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_warn_pragma____Compare____maybe_record_analysis_unused_args_0_0_10001)),
  (MR_String) "transform_hlds.unused_args_warn_pragma",
  (MR_String) "maybe_record_analysis_unused_args",
  { transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_name_ordered_maybe_record_analysis_unused_args_0 },
  { transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_ordinal_ordered_maybe_record_analysis_unused_args_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_maybe_record_analysis_unused_args_0,

};

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_warn_unused_args_0_0 = {
  (MR_String) "do_not_warn_unused_args",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_warn_unused_args_0_1 = {
  (MR_String) "do_warn_unused_args",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_ordinal_ordered_maybe_warn_unused_args_0[2] = {
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_warn_unused_args_0_0,
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_warn_unused_args_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_name_ordered_maybe_warn_unused_args_0[2] = {
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_warn_unused_args_0_0,
  &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_functor_desc_maybe_warn_unused_args_0_1
};

static const MR_Integer transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_maybe_warn_unused_args_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_maybe_warn_unused_args_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__unused_args_warn_pragma____Unify____maybe_warn_unused_args_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_warn_pragma____Compare____maybe_warn_unused_args_0_0_10001)),
  (MR_String) "transform_hlds.unused_args_warn_pragma",
  (MR_String) "maybe_warn_unused_args",
  { transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_name_ordered_maybe_warn_unused_args_0 },
  { transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__enum_ordinal_ordered_maybe_warn_unused_args_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_maybe_warn_unused_args_0,

};

static const MR_PseudoTypeInfo transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__field_types_unused_proc_arg_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_maybe_marked_unused_0)
};

static const MR_DuArgLocn transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__field_locns_unused_proc_arg_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_functor_desc_unused_proc_arg_0_0 = {
  (MR_String) "unused_proc_arg",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__field_types_unused_proc_arg_0_0,
  NULL,
  transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__field_locns_unused_proc_arg_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_stag_ordered_unused_proc_arg_0_0[1] = { &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_functor_desc_unused_proc_arg_0_0 };

static const MR_DuPtagLayout transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_ptag_ordered_unused_proc_arg_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_stag_ordered_unused_proc_arg_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_name_ordered_unused_proc_arg_0[1] = { &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_functor_desc_unused_proc_arg_0_0 };

static const MR_Integer transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_unused_proc_arg_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unused_args_warn_pragma____Unify____unused_proc_arg_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_warn_pragma____Compare____unused_proc_arg_0_0_10001)),
  (MR_String) "transform_hlds.unused_args_warn_pragma",
  (MR_String) "unused_proc_arg",
  { transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_name_ordered_unused_proc_arg_0 },
  { transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_ptag_ordered_unused_proc_arg_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_unused_proc_arg_0,

};

const MR_TypeCtorInfo_Struct transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_args_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__unused_args_warn_pragma____Unify____unused_proc_args_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_warn_pragma____Compare____unused_proc_args_0_0_10001)),
  (MR_String) "transform_hlds.unused_args_warn_pragma",
  (MR_String) "unused_proc_args",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__unused_args_warn_pragma__one_or_more__ti_one_or_more_1transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args_warn_pragma__pair__ti_pair_2builtin__type_ctor_info_int_0one_or_more__ti_one_or_more_1transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&transform_hlds__unused_args_warn_pragma__one_or_more__ti_one_or_more_1transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args_warn_pragma__one_or_more__ti_one_or_more_1pair__ti_pair_2builtin__type_ctor_info_int_0one_or_more__ti_one_or_more_1transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&transform_hlds__unused_args_warn_pragma__pair__ti_pair_2builtin__type_ctor_info_int_0one_or_more__ti_one_or_more_1transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0) }
};

static const MR_PseudoTypeInfo transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__field_types_warn_unused_pred_args_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__unused_args_warn_pragma__one_or_more__ti_one_or_more_1pair__ti_pair_2builtin__type_ctor_info_int_0one_or_more__ti_one_or_more_1transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0)
};

static const MR_DuFunctorDesc transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_functor_desc_warn_unused_pred_args_0_0 = {
  (MR_String) "warn_unused_pred_args",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__field_types_warn_unused_pred_args_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_stag_ordered_warn_unused_pred_args_0_0[1] = { &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_functor_desc_warn_unused_pred_args_0_0 };

static const MR_DuPtagLayout transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_ptag_ordered_warn_unused_pred_args_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_stag_ordered_warn_unused_pred_args_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_name_ordered_warn_unused_pred_args_0[1] = { &transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_functor_desc_warn_unused_pred_args_0_0 };

static const MR_Integer transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_warn_unused_pred_args_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_warn_unused_pred_args_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unused_args_warn_pragma____Unify____warn_unused_pred_args_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_warn_pragma____Compare____warn_unused_pred_args_0_0_10001)),
  (MR_String) "transform_hlds.unused_args_warn_pragma",
  (MR_String) "warn_unused_pred_args",
  { transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_name_ordered_warn_unused_pred_args_0 },
  { transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__du_ptag_ordered_warn_unused_pred_args_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__functor_number_map_warn_unused_pred_args_0,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args_warn_pragma__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0transform_hlds__unused_args_warn_pragma__type_ctor_info_warn_unused_pred_args_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_warn_unused_pred_args_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_warn_unused_pred_args_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__unused_args_warn_pragma____Unify____warn_unused_pred_args_map_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_warn_pragma____Compare____warn_unused_pred_args_map_0_0_10001)),
  (MR_String) "transform_hlds.unused_args_warn_pragma",
  (MR_String) "warn_unused_pred_args_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__unused_args_warn_pragma__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0transform_hlds__unused_args_warn_pragma__type_ctor_info_warn_unused_pred_args_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____warn_unused_pred_args_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____warn_unused_pred_args_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____warn_unused_pred_args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____warn_unused_pred_args_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_1[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____unused_proc_args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____unused_proc_args_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____unused_proc_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 1);
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
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Integer Var_13 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_14 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_13 < Var_14);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_13 > Var_14);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____unused_proc_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____maybe_warn_unused_args_0_0(
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

MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____maybe_warn_unused_args_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____maybe_record_analysis_unused_args_0_0(
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

MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____maybe_record_analysis_unused_args_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____maybe_marked_unused_0_0(
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
transform_hlds__unused_args_warn_pragma____Unify____maybe_marked_unused_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____maybe_gather_pragma_unused_args_0_0(
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

MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____maybe_gather_pragma_unused_args_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__classify_unused_proc_arg_5_p_0(
  MR_Word UnusedProcArg_6,
  MR_Word STATE_VARIABLE_UnmarkedArgNums_0_11,
  MR_Word * STATE_VARIABLE_UnmarkedArgNums_12,
  MR_Word STATE_VARIABLE_MarkedArgNums_0_13,
  MR_Word * STATE_VARIABLE_MarkedArgNums_14)
{
  MR_Integer ArgNum_9 = ((MR_Integer) ((MR_hl_field(0, UnusedProcArg_6, 0))));
  MR_Word MaybeMarked_10 = ((MR_Unsigned) ((MR_hl_field(0, UnusedProcArg_6, 1))) & (MR_Integer) 1);

  switch (MaybeMarked_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_18;

        {
          Var_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_18, 1) = ((MR_Box) (ArgNum_9));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_MarkedArgNums_14 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_18));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_MarkedArgNums_0_13));
        }
        *STATE_VARIABLE_UnmarkedArgNums_12 = STATE_VARIABLE_UnmarkedArgNums_0_11;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_16;

        {
          Var_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_16, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_16, 1) = ((MR_Box) (ArgNum_9));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_UnmarkedArgNums_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_UnmarkedArgNums_0_11));
        }
        *STATE_VARIABLE_MarkedArgNums_14 = STATE_VARIABLE_MarkedArgNums_0_13;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__report_proc_specific_unused_args_4_p_0(
  MR_Word PredInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  MR_Integer ProcId_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Word ProcUnusedArgs_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Word NameColonNlPieces_9;
  MR_Word ProcInfo_10;
  MR_Word Context_11;

  NameColonNlPieces_9 = hlds__hlds_error_util__describe_one_proc_name_pred_info_maybe_argmodes_6_f_0(PredInfo_5, (MR_Integer) 0, (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_3[0])), (MR_Integer) 1, (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[9])), ProcId_6);
  hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo_5, ProcId_6, &ProcInfo_10);
  hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_10, &Context_11);
  transform_hlds__unused_args_warn_pragma__report_unused_args_5_p_0(NameColonNlPieces_9, Context_11, ProcUnusedArgs_7, STATE_VARIABLE_Specs_0_12, STATE_VARIABLE_Specs_13);
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__do_all_procs_have_same_unused_args_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UnusedArgsToProcmap_0_13,
  MR_Word * STATE_VARIABLE_UnusedArgsToProcmap_14,
  MR_Word STATE_VARIABLE_UnmentionedProcTable_0_15,
  MR_Word * STATE_VARIABLE_UnmentionedProcTable_16)
{
  MR_bool succeeded;
  MR_Integer ProcId_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word ProcUnusedArgs_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word OoMProcIds0_10;
  MR_Box conv0_OoMProcIds0_10;
  MR_Box conv1_Var_12;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_1[3]), (MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_1[4]), STATE_VARIABLE_UnusedArgsToProcmap_0_13, ((MR_Box) (ProcUnusedArgs_7)), &conv0_OoMProcIds0_10);
  if (succeeded)
  {
    OoMProcIds0_10 = ((MR_Word) (conv0_OoMProcIds0_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word OoMProcIds_11;

    mercury__one_or_more__cons_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ((MR_Box) (ProcId_6)), OoMProcIds0_10, &OoMProcIds_11);
    mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_1[3]), (MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_1[4]), ((MR_Box) (ProcUnusedArgs_7)), ((MR_Box) (OoMProcIds_11)), STATE_VARIABLE_UnusedArgsToProcmap_0_13, STATE_VARIABLE_UnusedArgsToProcmap_14);
  }
  else
  {
    MR_Word OoMProcIds_21;

    {
      OoMProcIds_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OoMProcIds_21, 0) = ((MR_Box) (ProcId_6));
      MR_hl_field(0, OoMProcIds_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_1[3]), (MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_1[4]), ((MR_Box) (ProcUnusedArgs_7)), ((MR_Box) (OoMProcIds_21)), STATE_VARIABLE_UnusedArgsToProcmap_0_13, STATE_VARIABLE_UnusedArgsToProcmap_14);
  }
  mercury__map__det_remove_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_6)), &conv1_Var_12, STATE_VARIABLE_UnmentionedProcTable_0_15, STATE_VARIABLE_UnmentionedProcTable_16);
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__warn_unused_args_in_pred_4_p_0(
  MR_Word _PredId_5,
  MR_Word WarnUnusedPredArgs_6,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  transform_hlds__unused_args_warn_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_117_110_117_115_101_100_95_97_114_103_115_95_105_110_95_112_114_101_100_95_95_91_49_93_95_48_4_p_0(WarnUnusedPredArgs_6, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_117_110_117_115_101_100_95_97_114_103_115_95_105_110_95_112_114_101_100_95_95_91_49_93_95_48_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Specs_13;

  transform_hlds__unused_args_warn_pragma__report_proc_specific_unused_args_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Specs_13);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_13));
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_117_110_117_115_101_100_95_97_114_103_115_95_105_110_95_112_114_101_100_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_UnusedArgsToProcmap_14;
  MR_Word conv0_STATE_VARIABLE_UnmentionedProcTable_16;

  transform_hlds__unused_args_warn_pragma__do_all_procs_have_same_unused_args_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_UnusedArgsToProcmap_14, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_UnmentionedProcTable_16);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_UnusedArgsToProcmap_14));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_UnmentionedProcTable_16));
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_117_110_117_115_101_100_95_97_114_103_115_95_105_110_95_112_114_101_100_95_95_91_49_93_95_48_4_p_0(
  MR_Word WarnUnusedPredArgs_6,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  MR_bool succeeded;
  MR_Word PredInfo_8 = ((MR_Word) ((MR_hl_field(0, WarnUnusedPredArgs_6, 0))));
  MR_Word ProcUnusedArgsAL0_9 = ((MR_Word) ((MR_hl_field(0, WarnUnusedPredArgs_6, 1))));
  MR_Word ProcUnusedArgsAL_10;
  MR_Word ProcTable_11;
  MR_Word UnusedArgsToProcMap_12;
  MR_Word UnmentionedProcTable_13;
  MR_Word UnusedArgsToProcAL_14;
  MR_Word Var_20;
  MR_Box conv3_UnusedArgsToProcMap_12;
  MR_Box conv2_UnmentionedProcTable_13;
  MR_Word UnusedProcArgs_15;
  MR_Word Var_21;
  MR_Word Var_22;

  mercury__one_or_more__sort_2_p_0((MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_2[1]), ProcUnusedArgsAL0_9, &ProcUnusedArgsAL_10);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_8, &ProcTable_11);
  Var_20 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_1[3]), (MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_1[4]));
  mercury__one_or_more__foldl2_6_p_0((MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_2[1]), (MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_2[2]), (MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_2[3]), (MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_2[6]), ProcUnusedArgsAL_10, ((MR_Box) (Var_20)), &conv3_UnusedArgsToProcMap_12, ((MR_Box) (ProcTable_11)), &conv2_UnmentionedProcTable_13);
  UnusedArgsToProcMap_12 = ((MR_Word) (conv3_UnusedArgsToProcMap_12));
  UnmentionedProcTable_13 = ((MR_Word) (conv2_UnmentionedProcTable_13));
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_1[3]), (MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_1[4]), UnusedArgsToProcMap_12, &UnusedArgsToProcAL_14);
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), UnmentionedProcTable_13);
  if (succeeded)
  {
    succeeded = (UnusedArgsToProcAL_14 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_21 = ((MR_Word) ((MR_hl_field(1, UnusedArgsToProcAL_14, 0))));
      Var_22 = ((MR_Word) ((MR_hl_field(1, UnusedArgsToProcAL_14, 1))));
      succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        UnusedProcArgs_15 = ((MR_Word) ((MR_hl_field(0, Var_21, 0))));
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
  {
    MR_Word NameColonNlPieces_41;
    MR_Word Context_42;

    NameColonNlPieces_41 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_3[0])), (MR_Integer) 1, (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[9])), PredInfo_8);
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_8, &Context_42);
    transform_hlds__unused_args_warn_pragma__report_unused_args_5_p_0(NameColonNlPieces_41, Context_42, UnusedProcArgs_15, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
  }
  else
  {
    MR_Word Var_24;
    MR_Box conv5_STATE_VARIABLE_Specs_18;

    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (&transform_hlds__unused_args_warn_pragma_scalar_common_5[1]));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) (transform_hlds__unused_args_warn_pragma__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_97_114_110_95_117_110_117_115_101_100_95_97_114_103_115_95_105_110_95_112_114_101_100_95_95_91_49_93_95_48_4_p_0_2));
      MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_24, 3) = ((MR_Box) (PredInfo_8));
    }
    mercury__one_or_more__foldl_4_p_0((MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_2[1]), (MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_1[2]), Var_24, ProcUnusedArgsAL_10, ((MR_Box) (STATE_VARIABLE_Specs_0_17)), &conv5_STATE_VARIABLE_Specs_18);
    *STATE_VARIABLE_Specs_18 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_18));
  }
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__report_unused_args_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_UnmarkedArgNums_12;
  MR_Word conv0_STATE_VARIABLE_MarkedArgNums_14;

  transform_hlds__unused_args_warn_pragma__classify_unused_proc_arg_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_UnmarkedArgNums_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_MarkedArgNums_14);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_UnmarkedArgNums_12));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_MarkedArgNums_14));
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__report_unused_args_5_p_0(
  MR_Word NameColonNlPieces_6,
  MR_Word Context_7,
  MR_Word ProcUnusedArgs_8,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  MR_Word UnmarkedArgs0_10;
  MR_Word MarkedArgs0_11;
  MR_Word UnmarkedArgs_12;
  MR_Word MarkedArgs_13;
  MR_Box conv3_UnmarkedArgs0_10;
  MR_Box conv2_MarkedArgs0_11;

  mercury__one_or_more__foldl2_6_p_0((MR_Word) (&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0), (MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_1[5]), (MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_1[5]), (MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_2[5]), ProcUnusedArgs_8, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_UnmarkedArgs0_10, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_MarkedArgs0_11);
  UnmarkedArgs0_10 = ((MR_Word) (conv3_UnmarkedArgs0_10));
  MarkedArgs0_11 = ((MR_Word) (conv2_MarkedArgs0_11));
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), UnmarkedArgs0_10, &UnmarkedArgs_12);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MarkedArgs0_11, &MarkedArgs_13);
  if ((UnmarkedArgs_12 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
  else
  {
    MR_Word TailUnmarkedArgs_15 = ((MR_Word) ((MR_hl_field(1, UnmarkedArgs_12, 1))));
    MR_Word Pieces1_16;
    MR_Word UnmarkedArgPieces_17;
    MR_Word Pieces2_18;
    MR_Word Addendum_21;
    MR_Word Spec_22;
    MR_Word Var_32;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word MarkedArgPieces_92;

    Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NameColonNlPieces_6, (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[13])));
    Pieces1_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[11])), Var_32);
    UnmarkedArgPieces_17 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), UnmarkedArgs_12);
    if ((TailUnmarkedArgs_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_50;
      MR_Word Var_51;

      Var_51 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[19])));
      Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[7])));
      Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[17])), Var_50);
      Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), UnmarkedArgPieces_17, Var_45);
      Pieces2_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[15])), Var_44);
    }
    else
    {
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_69;
      MR_Word Var_70;

      Var_70 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[19])));
      Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_70, (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[7])));
      Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[23])), Var_69);
      Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), UnmarkedArgPieces_17, Var_64);
      Pieces2_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[21])), Var_63);
    }
    MarkedArgPieces_92 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), MarkedArgs_13);
    if ((MarkedArgs_13 == (MR_Word) ((MR_Unsigned) 0U)))
      Addendum_21 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_138 = ((MR_Word) ((MR_hl_field(1, MarkedArgs_13, 1))));

      if ((Var_138 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_111;
        MR_Word Var_112;

        Var_112 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[29])));
        Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_112, (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[31])));
        Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[27])), Var_111);
        Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MarkedArgPieces_92, Var_106);
        Addendum_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[25])), Var_105);
      }
      else
      {
        MR_Word Var_123;
        MR_Word Var_124;
        MR_Word Var_129;
        MR_Word Var_130;

        Var_130 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[37])));
        Var_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_130, (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[31])));
        Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[35])), Var_129);
        Var_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MarkedArgPieces_92, Var_124);
        Addendum_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__unused_args_warn_pragma_scalar_common_1[33])), Var_123);
      }
    }
    Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces2_18, Addendum_21);
    Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_16, Var_83);
    {
      Spec_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140transform_hlds.unused_args_warn_pragma.report_unused_args\'/5"));
      MR_hl_field(0, Spec_22, 1) = ((MR_Box) (MR_mkword(2, &transform_hlds__unused_args_warn_pragma_scalar_common_3[1])));
      MR_hl_field(0, Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 108U));
      MR_hl_field(0, Spec_22, 3) = ((MR_Box) (Context_7));
      MR_hl_field(0, Spec_22, 4) = ((MR_Box) (Var_82));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_24 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_22));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
    }
  }
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__gather_warnings_and_pragmas_ppid_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word DoWarn_11,
  MR_Word DoPragma_12,
  MR_Word PredProcId_13,
  MR_Word UnusedArgs_14,
  MR_Word STATE_VARIABLE_WarnUnusedPredArgsMap_0_20,
  MR_Word * STATE_VARIABLE_WarnUnusedPredArgsMap_21,
  MR_Word STATE_VARIABLE_PragmaUnusedArgInfos_0_22,
  MR_Word * STATE_VARIABLE_PragmaUnusedArgInfos_23)
{
  MR_bool succeeded;
  MR_Word PredId_17 = ((MR_Word) ((MR_hl_field(0, PredProcId_13, 0))));
  MR_Integer ProcId_18 = ((MR_Integer) ((MR_hl_field(0, PredProcId_13, 1))));
  MR_Word PredInfo_19;
  MR_Word PredStatus_24;
  MR_Word Origin_25;
  MR_Word Var_82;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_10, PredId_17, &PredInfo_19);
  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_19, &PredStatus_24);
  Var_82 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_24);
  succeeded = (Var_82 == (MR_Integer) 1);
  if (succeeded)
  {
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_19, &Origin_25);
    switch (MR_tag((MR_Word) Origin_25)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word UserMade_26 = ((MR_Word) ((MR_hl_field(0, Origin_25, 0))));
          MR_Word Markers_37;
          MR_Word Var_87;

          hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_19, &Markers_37);
          switch (MR_tag((MR_Word) UserMade_26)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo_19);
                succeeded = !(succeeded);
              }
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, UserMade_26, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_37, (MR_Integer) 13);
                    if (!(succeeded))
                      succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_37, (MR_Integer) 14);
                    if (succeeded)
                      succeeded = MR_FALSE;
                    else
                    {
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args_warn_pragma.may_gather_warning_pragma_for_pred\'/1", (MR_String) "user_made_instance_method with marker");
                        return;
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
              }
              break;
          }
          if (succeeded)
          {
            Var_87 = (MR_Integer) 0;
            succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_37, Var_87);
            succeeded = !(succeeded);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CompilerMade_41 = ((MR_Word) ((MR_hl_field(1, Origin_25, 0))));

          switch (MR_tag((MR_Word) CompilerMade_41)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, CompilerMade_41, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 2:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 3:
                  succeeded = MR_TRUE;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredTransform_57 = ((MR_Word) ((MR_hl_field(2, Origin_25, 0))));

          switch (MR_tag((MR_Word) PredTransform_57)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              switch (MR_unmkbody(PredTransform_57)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
              }
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              succeeded = MR_TRUE;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ProcTransform_63 = ((MR_Word) ((MR_hl_field(3, Origin_25, 0))));

          switch (MR_tag((MR_Word) ProcTransform_63)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              switch (MR_unmkbody(ProcTransform_63)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 2:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 3:
                  succeeded = MR_TRUE;
                  break;
              }
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, ProcTransform_63, 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.unused_args_warn_pragma.may_gather_warning_pragma_for_pred\'/1", (MR_String) "proc_transform_unused_args");
                      return;
                    }
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 3:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 4:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 5:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 6:
                  succeeded = MR_TRUE;
                  break;
              }
              break;
          }
        }
        break;
    }
  }
  if (succeeded)
  {
    switch (DoWarn_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_WarnUnusedPredArgsMap_21 = STATE_VARIABLE_WarnUnusedPredArgsMap_0_20;
        break;
      case (MR_Integer) 1:
        transform_hlds__unused_args_warn_pragma__maybe_add_proc_to_unused_args_map_7_p_0(ModuleInfo_10, PredInfo_19, PredId_17, ProcId_18, UnusedArgs_14, STATE_VARIABLE_WarnUnusedPredArgsMap_0_20, STATE_VARIABLE_WarnUnusedPredArgsMap_21);
        break;
    }
    switch (DoPragma_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo_19);
          if (!(succeeded))
          {
            succeeded = hlds__hlds_pred__pred_info_is_opt_exported_1_p_0(PredInfo_19);
            if (!(succeeded))
              succeeded = hlds__hlds_pred__pred_info_is_exported_to_submodules_1_p_0(PredInfo_19);
          }
          if (succeeded)
            succeeded = (UnusedArgs_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MR_Word ModuleName_92;
            MR_Word PredOrFunc_93;
            MR_String PredName_94;
            MR_Word PredSymName_95;
            MR_Word PredFormArity_96;
            MR_Word UserArity_97;
            MR_Integer ModeNum_98;
            MR_Word PredNameArityPFMn_99;
            MR_Word UnusedArgInfo_100;
            MR_Word Var_101;

            ModuleName_92 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_19);
            PredOrFunc_93 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_19);
            PredName_94 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_19);
            {
              PredSymName_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, PredSymName_95, 0) = ((MR_Box) (ModuleName_92));
              MR_hl_field(1, PredSymName_95, 1) = ((MR_Box) (PredName_94));
            }
            hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_19, &PredFormArity_96);
            parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_93, &UserArity_97, PredFormArity_96);
            hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_18, &ModeNum_98);
            {
              PredNameArityPFMn_99 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredNameArityPFMn_99, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_93));
              MR_hl_field(0, PredNameArityPFMn_99, 1) = ((MR_Box) (PredSymName_95));
              MR_hl_field(0, PredNameArityPFMn_99, 2) = ((MR_Box) (UserArity_97));
              MR_hl_field(0, PredNameArityPFMn_99, 3) = ((MR_Box) (ModeNum_98));
            }
            Var_101 = mercury__term_context__dummy_context_0_f_0();
            {
              UnusedArgInfo_100 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, UnusedArgInfo_100, 0) = ((MR_Box) (PredNameArityPFMn_99));
              MR_hl_field(0, UnusedArgInfo_100, 1) = ((MR_Box) (UnusedArgs_14));
              MR_hl_field(0, UnusedArgInfo_100, 2) = ((MR_Box) (Var_101));
              MR_hl_field(0, UnusedArgInfo_100, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0), ((MR_Box) (UnusedArgInfo_100)), STATE_VARIABLE_PragmaUnusedArgInfos_0_22, STATE_VARIABLE_PragmaUnusedArgInfos_23);
          }
          else
            *STATE_VARIABLE_PragmaUnusedArgInfos_23 = STATE_VARIABLE_PragmaUnusedArgInfos_0_22;
        }
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_PragmaUnusedArgInfos_23 = STATE_VARIABLE_PragmaUnusedArgInfos_0_22;
        break;
    }
  }
  else
  {
    *STATE_VARIABLE_PragmaUnusedArgInfos_23 = STATE_VARIABLE_PragmaUnusedArgInfos_0_22;
    *STATE_VARIABLE_WarnUnusedPredArgsMap_21 = STATE_VARIABLE_WarnUnusedPredArgsMap_0_20;
  }
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__maybe_add_proc_to_unused_args_map_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredInfo_9,
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word UnusedArgs0_12,
  MR_Word STATE_VARIABLE_WarnUnusedPredArgsMap_0_30,
  MR_Word * STATE_VARIABLE_WarnUnusedPredArgsMap_31)
{
  MR_bool succeeded;
  MR_Word PredFormArity_14;
  MR_Word ArgTypes_15;
  MR_Integer NumExtraArgs_16;
  MR_Word UnusedArgs_17;

  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_9, &PredFormArity_14);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_9, &ArgTypes_15);
  NumExtraArgs_16 = parse_tree__prog_data__num_extra_args_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), PredFormArity_14, ArgTypes_15);
  transform_hlds__unused_args_warn_pragma__drop_poly_inserted_args_3_p_0(NumExtraArgs_16, UnusedArgs0_12, &UnusedArgs_17);
  if ((UnusedArgs_17 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_WarnUnusedPredArgsMap_31 = STATE_VARIABLE_WarnUnusedPredArgsMap_0_30;
  else
  {
    MR_Word ProcInfo_20;
    MR_Word ArgModes0_21;
    MR_Word ArgModes_22;
    MR_Word UnusedProcArgs_23;
    MR_Word OoMUnusedProcArgs_24;
    MR_Integer ArgNum_53;
    MR_Word ArgNums_54;
    MR_Word ProcArg_55;
    MR_Word ProcArgs_56;
    MR_Word ArgMode_57;
    MR_Word MaybeMarked_58;
    MR_Box conv0_ArgMode_57;
    MR_Word WarnUnusedPredArgs0_25;
    MR_Box conv1_WarnUnusedPredArgs0_25;

    hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo_9, ProcId_11, &ProcInfo_20);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_20, &ArgModes0_21);
    mercury__list__det_drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumExtraArgs_16, ArgModes0_21, &ArgModes_22);
    ArgNum_53 = ((MR_Integer) ((MR_hl_field(1, UnusedArgs_17, 0))));
    ArgNums_54 = ((MR_Word) ((MR_hl_field(1, UnusedArgs_17, 1))));
    mercury__list__det_index1_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_22, ArgNum_53, &conv0_ArgMode_57);
    ArgMode_57 = ((MR_Word) (conv0_ArgMode_57));
    succeeded = hlds__mode_test__mode_is_unused_2_p_0(ModuleInfo_8, ArgMode_57);
    if (succeeded)
      MaybeMarked_58 = (MR_Integer) 1;
    else
      MaybeMarked_58 = (MR_Integer) 0;
    {
      ProcArg_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ProcArg_55, 0) = ((MR_Box) (ArgNum_53));
      MR_hl_field(0, ProcArg_55, 1) = (MR_Box) ((MR_Unsigned) (MaybeMarked_58));
    }
    transform_hlds__unused_args_warn_pragma__record_which_unused_args_are_marked_4_p_0(ModuleInfo_8, ArgModes_22, ArgNums_54, &ProcArgs_56);
    {
      UnusedProcArgs_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, UnusedProcArgs_23, 0) = ((MR_Box) (ProcArg_55));
      MR_hl_field(1, UnusedProcArgs_23, 1) = ((MR_Box) (ProcArgs_56));
    }
    mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0), UnusedProcArgs_23, &OoMUnusedProcArgs_24);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_warn_unused_pred_args_0), STATE_VARIABLE_WarnUnusedPredArgsMap_0_30, ((MR_Box) (PredId_10)), &conv1_WarnUnusedPredArgs0_25);
    if (succeeded)
    {
      WarnUnusedPredArgs0_25 = ((MR_Word) (conv1_WarnUnusedPredArgs0_25));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ProcAL0_27 = ((MR_Word) ((MR_hl_field(0, WarnUnusedPredArgs0_25, 1))));
      MR_Word ProcAL_28;
      MR_Word WarnUnusedPredArgs_29;
      MR_Word Var_32;

      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_32, 0) = ((MR_Box) (ProcId_11));
        MR_hl_field(0, Var_32, 1) = ((MR_Box) (OoMUnusedProcArgs_24));
      }
      mercury__one_or_more__cons_3_p_0((MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_2[1]), ((MR_Box) (Var_32)), ProcAL0_27, &ProcAL_28);
      {
        WarnUnusedPredArgs_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, WarnUnusedPredArgs_29, 0) = ((MR_Box) (PredInfo_9));
        MR_hl_field(0, WarnUnusedPredArgs_29, 1) = ((MR_Box) (ProcAL_28));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_warn_unused_pred_args_0), ((MR_Box) (PredId_10)), ((MR_Box) (WarnUnusedPredArgs_29)), STATE_VARIABLE_WarnUnusedPredArgsMap_0_30, STATE_VARIABLE_WarnUnusedPredArgsMap_31);
    }
    else
    {
      MR_Word Var_34;
      MR_Word ProcAL_37;
      MR_Word WarnUnusedPredArgs_38;

      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_34, 0) = ((MR_Box) (ProcId_11));
        MR_hl_field(0, Var_34, 1) = ((MR_Box) (OoMUnusedProcArgs_24));
      }
      {
        ProcAL_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ProcAL_37, 0) = ((MR_Box) (Var_34));
        MR_hl_field(0, ProcAL_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        WarnUnusedPredArgs_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, WarnUnusedPredArgs_38, 0) = ((MR_Box) (PredInfo_9));
        MR_hl_field(0, WarnUnusedPredArgs_38, 1) = ((MR_Box) (ProcAL_37));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_warn_unused_pred_args_0), ((MR_Box) (PredId_10)), ((MR_Box) (WarnUnusedPredArgs_38)), STATE_VARIABLE_WarnUnusedPredArgsMap_0_30, STATE_VARIABLE_WarnUnusedPredArgsMap_31);
    }
  }
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__record_which_unused_args_are_marked_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ArgModes_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer ArgNum_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ArgNums_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word ProcArg_11;
    MR_Word ProcArgs_12;
    MR_Word ArgMode_13;
    MR_Word MaybeMarked_14;
    MR_Box conv0_ArgMode_13;

    mercury__list__det_index1_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_2, ArgNum_9, &conv0_ArgMode_13);
    ArgMode_13 = ((MR_Word) (conv0_ArgMode_13));
    succeeded = hlds__mode_test__mode_is_unused_2_p_0(ModuleInfo_1, ArgMode_13);
    if (succeeded)
      MaybeMarked_14 = (MR_Integer) 1;
    else
      MaybeMarked_14 = (MR_Integer) 0;
    {
      ProcArg_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ProcArg_11, 0) = ((MR_Box) (ArgNum_9));
      MR_hl_field(0, ProcArg_11, 1) = (MR_Box) ((MR_Unsigned) (MaybeMarked_14));
    }
    transform_hlds__unused_args_warn_pragma__record_which_unused_args_are_marked_4_p_0(ModuleInfo_1, ArgModes_2, ArgNums_10, &ProcArgs_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ProcArg_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (ProcArgs_12));
    }
  }
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__drop_poly_inserted_args_3_p_0(
  MR_Integer NumInserted_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer HeadArgWith_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word TailArgsWith_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word TailArgsWithout_9;
    MR_Integer HeadArgWithout_10;

    transform_hlds__unused_args_warn_pragma__drop_poly_inserted_args_3_p_0(NumInserted_1, TailArgsWith_7, &TailArgsWithout_9);
    HeadArgWithout_10 = (MR_Integer) ((MR_Unsigned) HeadArgWith_6 - (MR_Unsigned) NumInserted_1);
    succeeded = (HeadArgWithout_10 < (MR_Integer) 1);
    if (succeeded)
      *HeadVar__3_3 = TailArgsWithout_9;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadArgWithout_10));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailArgsWithout_9));
      }
  }
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__gather_warnings_and_pragmas_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Specs_18;

  transform_hlds__unused_args_warn_pragma__warn_unused_args_in_pred_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_Specs_18);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_18));
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma__gather_warnings_and_pragmas_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_WarnUnusedPredArgsMap_21;
  MR_Word conv0_STATE_VARIABLE_PragmaUnusedArgInfos_23;

  transform_hlds__unused_args_warn_pragma__gather_warnings_and_pragmas_ppid_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_WarnUnusedPredArgsMap_21, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_PragmaUnusedArgInfos_23);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_WarnUnusedPredArgsMap_21));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_PragmaUnusedArgInfos_23));
}

void MR_CALL 
transform_hlds__unused_args_warn_pragma__gather_warnings_and_pragmas_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word ProcToUnusedArgsMap_8,
  MR_Word DoWarn_9,
  MR_Word DoPragma_10,
  MR_Word * Specs_11,
  MR_Word * PragmaUnusedArgInfos_12)
{
  MR_Word WarnUnusedPredArgsMap_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Box conv3_WarnUnusedPredArgsMap_13;
  MR_Box conv2_PragmaUnusedArgInfos_12;
  MR_Box conv5_Specs_11;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&transform_hlds__unused_args_warn_pragma_scalar_common_4[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (transform_hlds__unused_args_warn_pragma__gather_warnings_and_pragmas_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (ModuleInfo_7));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (DoWarn_9));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (DoPragma_10));
  }
  Var_15 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_warn_unused_pred_args_0));
  Var_16 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0));
  mercury__map__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_1[0]), (MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_2[0]), (MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_1[1]), Var_14, ProcToUnusedArgsMap_8, ((MR_Box) (Var_15)), &conv3_WarnUnusedPredArgsMap_13, ((MR_Box) (Var_16)), &conv2_PragmaUnusedArgInfos_12);
  WarnUnusedPredArgsMap_13 = ((MR_Word) (conv3_WarnUnusedPredArgsMap_13));
  *PragmaUnusedArgInfos_12 = ((MR_Word) (conv2_PragmaUnusedArgInfos_12));
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_warn_unused_pred_args_0), (MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_1[2]), (MR_Word) (&transform_hlds__unused_args_warn_pragma_scalar_common_2[4]), WarnUnusedPredArgsMap_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_Specs_11);
  *Specs_11 = ((MR_Word) (conv5_Specs_11));
}

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____maybe_gather_pragma_unused_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args_warn_pragma____Unify____maybe_gather_pragma_unused_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____maybe_gather_pragma_unused_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args_warn_pragma____Compare____maybe_gather_pragma_unused_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____maybe_marked_unused_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args_warn_pragma____Unify____maybe_marked_unused_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____maybe_marked_unused_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args_warn_pragma____Compare____maybe_marked_unused_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____maybe_record_analysis_unused_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args_warn_pragma____Unify____maybe_record_analysis_unused_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____maybe_record_analysis_unused_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args_warn_pragma____Compare____maybe_record_analysis_unused_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____maybe_warn_unused_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args_warn_pragma____Unify____maybe_warn_unused_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____maybe_warn_unused_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args_warn_pragma____Compare____maybe_warn_unused_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____unused_proc_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args_warn_pragma____Unify____unused_proc_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____unused_proc_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args_warn_pragma____Compare____unused_proc_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____unused_proc_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args_warn_pragma____Unify____unused_proc_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____unused_proc_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args_warn_pragma____Compare____unused_proc_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____warn_unused_pred_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args_warn_pragma____Unify____warn_unused_pred_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____warn_unused_pred_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args_warn_pragma____Compare____warn_unused_pred_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args_warn_pragma____Unify____warn_unused_pred_args_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args_warn_pragma____Unify____warn_unused_pred_args_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_warn_pragma____Compare____warn_unused_pred_args_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args_warn_pragma____Compare____warn_unused_pred_args_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__unused_args_warn_pragma__init(void)
{
}

void mercury__transform_hlds__unused_args_warn_pragma__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_maybe_gather_pragma_unused_args_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_maybe_marked_unused_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_maybe_record_analysis_unused_args_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_maybe_warn_unused_args_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_arg_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_unused_proc_args_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_warn_unused_pred_args_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args_warn_pragma__transform_hlds__unused_args_warn_pragma__type_ctor_info_warn_unused_pred_args_map_0);
}

void mercury__transform_hlds__unused_args_warn_pragma__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__unused_args_warn_pragma__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.unused_args_warn_pragma.
