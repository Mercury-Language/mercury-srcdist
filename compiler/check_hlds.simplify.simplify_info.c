/*
** Automatically generated from `simplify_info.m'
** by the Mercury compiler,
** version rotd-2022-02-12
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


// :- module check_hlds.simplify.simplify_info.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__simplify_info__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_info.mih"


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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
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
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_tasks.mih"




static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_0;

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_innermost_proc_0_1[1];

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_1;

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_1[1];

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_innermost_proc_0[2];

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_innermost_proc_0[2];

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_innermost_proc_0[2];

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_allow_messages_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_allow_messages_0_1;

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_ordinal_ordered_maybe_allow_messages_0[2];

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_name_ordered_maybe_allow_messages_0[2];

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_maybe_allow_messages_0[2];

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_fully_strict_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_fully_strict_0_1;

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_ordinal_ordered_maybe_fully_strict_0[2];

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_name_ordered_maybe_fully_strict_0[2];

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_maybe_fully_strict_0[2];

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_ignore_marked_static_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_ignore_marked_static_0_1;

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_ordinal_ordered_maybe_ignore_marked_static_0[2];

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_name_ordered_maybe_ignore_marked_static_0[2];

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_maybe_ignore_marked_static_0[2];

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_rerun_det_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_rerun_det_0_1;

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_ordinal_ordered_maybe_rerun_det_0[2];

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_name_ordered_maybe_rerun_det_0[2];

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_maybe_rerun_det_0[2];

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_rerun_quant_instmap_deltas_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_rerun_quant_instmap_deltas_0_1;

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_ordinal_ordered_maybe_rerun_quant_instmap_deltas_0[2];

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_name_ordered_maybe_rerun_quant_instmap_deltas_0[2];

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_maybe_rerun_quant_instmap_deltas_0[2];

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_trace_optimized_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_trace_optimized_0_1;

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_ordinal_ordered_maybe_trace_optimized_0[2];

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_name_ordered_maybe_trace_optimized_0[2];

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_maybe_trace_optimized_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_info_0_0[8];

static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_info_0_0[8];

static const MR_DuArgLocn check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_info_0_0[8];

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_info_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_info_0[1];

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_info_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_info_params_0_0[6];

static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_info_params_0_0[6];

static const MR_DuArgLocn check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_info_params_0_0[6];

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_params_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_info_params_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_info_params_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_info_params_0[1];

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_info_params_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__maybe__ti_maybe_1check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0;

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_nested_context_0_0[3];

static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_nested_context_0_0[3];

static const MR_DuArgLocn check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_nested_context_0_0[3];

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_nested_context_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_nested_context_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_nested_context_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_nested_context_0[1];

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_nested_context_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_sub_info_0_0[10];

static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_sub_info_0_0[10];

static const MR_DuArgLocn check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_sub_info_0_0[10];

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_sub_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_sub_info_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_sub_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_sub_info_0[1];

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_sub_info_0[1];

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____maybe_allow_messages_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____maybe_allow_messages_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____maybe_fully_strict_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____maybe_fully_strict_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____maybe_ignore_marked_static_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____maybe_ignore_marked_static_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____maybe_rerun_det_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____maybe_rerun_det_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____maybe_rerun_quant_instmap_deltas_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____maybe_rerun_quant_instmap_deltas_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____maybe_trace_optimized_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____maybe_trace_optimized_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__simplify__simplify_info_scalar_common_1[9][2];




static /* final */ const MR_Box check_hlds__simplify__simplify_info_scalar_common_1[9][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__simplify__simplify_info_scalar_common_1[0]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__simplify__simplify_info_scalar_common_1[6]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_0 = {
  (MR_String) "imp_whole_proc",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_innermost_proc_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_1 = {
  (MR_String) "imp_lambda",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_innermost_proc_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_0
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_1[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_1
};

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_innermost_proc_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_innermost_proc_0[2] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_1,
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_0
};

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_innermost_proc_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_info",
  (MR_String) "innermost_proc",
  { check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_innermost_proc_0 },
  { check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_innermost_proc_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_innermost_proc_0,

};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_allow_messages_0_0 = {
  (MR_String) "do_not_allow_messages",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_allow_messages_0_1 = {
  (MR_String) "allow_messages",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_ordinal_ordered_maybe_allow_messages_0[2] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_allow_messages_0_0,
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_allow_messages_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_name_ordered_maybe_allow_messages_0[2] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_allow_messages_0_1,
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_allow_messages_0_0
};

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_maybe_allow_messages_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_maybe_allow_messages_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__simplify_info____Unify____maybe_allow_messages_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_info____Compare____maybe_allow_messages_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_info",
  (MR_String) "maybe_allow_messages",
  { check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_name_ordered_maybe_allow_messages_0 },
  { check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_ordinal_ordered_maybe_allow_messages_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_maybe_allow_messages_0,

};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_fully_strict_0_0 = {
  (MR_String) "not_fully_strict",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_fully_strict_0_1 = {
  (MR_String) "fully_strict",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_ordinal_ordered_maybe_fully_strict_0[2] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_fully_strict_0_0,
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_fully_strict_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_name_ordered_maybe_fully_strict_0[2] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_fully_strict_0_1,
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_fully_strict_0_0
};

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_maybe_fully_strict_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_maybe_fully_strict_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__simplify_info____Unify____maybe_fully_strict_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_info____Compare____maybe_fully_strict_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_info",
  (MR_String) "maybe_fully_strict",
  { check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_name_ordered_maybe_fully_strict_0 },
  { check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_ordinal_ordered_maybe_fully_strict_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_maybe_fully_strict_0,

};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_ignore_marked_static_0_0 = {
  (MR_String) "do_not_ignore_marked_static",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_ignore_marked_static_0_1 = {
  (MR_String) "ignore_marked_static",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_ordinal_ordered_maybe_ignore_marked_static_0[2] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_ignore_marked_static_0_0,
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_ignore_marked_static_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_name_ordered_maybe_ignore_marked_static_0[2] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_ignore_marked_static_0_0,
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_ignore_marked_static_0_1
};

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_maybe_ignore_marked_static_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_maybe_ignore_marked_static_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__simplify_info____Unify____maybe_ignore_marked_static_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_info____Compare____maybe_ignore_marked_static_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_info",
  (MR_String) "maybe_ignore_marked_static",
  { check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_name_ordered_maybe_ignore_marked_static_0 },
  { check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_ordinal_ordered_maybe_ignore_marked_static_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_maybe_ignore_marked_static_0,

};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_rerun_det_0_0 = {
  (MR_String) "do_not_rerun_det",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_rerun_det_0_1 = {
  (MR_String) "rerun_det",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_ordinal_ordered_maybe_rerun_det_0[2] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_rerun_det_0_0,
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_rerun_det_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_name_ordered_maybe_rerun_det_0[2] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_rerun_det_0_0,
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_rerun_det_0_1
};

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_maybe_rerun_det_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_maybe_rerun_det_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__simplify_info____Unify____maybe_rerun_det_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_info____Compare____maybe_rerun_det_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_info",
  (MR_String) "maybe_rerun_det",
  { check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_name_ordered_maybe_rerun_det_0 },
  { check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_ordinal_ordered_maybe_rerun_det_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_maybe_rerun_det_0,

};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_rerun_quant_instmap_deltas_0_0 = {
  (MR_String) "do_not_rerun_quant_instmap_deltas",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_rerun_quant_instmap_deltas_0_1 = {
  (MR_String) "rerun_quant_instmap_deltas",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_ordinal_ordered_maybe_rerun_quant_instmap_deltas_0[2] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_rerun_quant_instmap_deltas_0_0,
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_rerun_quant_instmap_deltas_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_name_ordered_maybe_rerun_quant_instmap_deltas_0[2] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_rerun_quant_instmap_deltas_0_0,
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_rerun_quant_instmap_deltas_0_1
};

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_maybe_rerun_quant_instmap_deltas_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_maybe_rerun_quant_instmap_deltas_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__simplify_info____Unify____maybe_rerun_quant_instmap_deltas_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_info____Compare____maybe_rerun_quant_instmap_deltas_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_info",
  (MR_String) "maybe_rerun_quant_instmap_deltas",
  { check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_name_ordered_maybe_rerun_quant_instmap_deltas_0 },
  { check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_ordinal_ordered_maybe_rerun_quant_instmap_deltas_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_maybe_rerun_quant_instmap_deltas_0,

};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_trace_optimized_0_0 = {
  (MR_String) "not_trace_optimized",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_trace_optimized_0_1 = {
  (MR_String) "trace_optimized",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_ordinal_ordered_maybe_trace_optimized_0[2] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_trace_optimized_0_0,
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_trace_optimized_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_name_ordered_maybe_trace_optimized_0[2] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_trace_optimized_0_0,
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_trace_optimized_0_1
};

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_maybe_trace_optimized_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_maybe_trace_optimized_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__simplify_info____Unify____maybe_trace_optimized_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_info____Compare____maybe_trace_optimized_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_info",
  (MR_String) "maybe_trace_optimized",
  { check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_name_ordered_maybe_trace_optimized_0 },
  { check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_ordinal_ordered_maybe_trace_optimized_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_maybe_trace_optimized_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_info_0_0[8] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_tasks_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_maybe_rerun_quant_instmap_deltas_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_maybe_rerun_det_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_info_params_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_sub_info_0)
};

static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_info_0_0[8] = {
  (MR_String) "simp_simplify_tasks",
  (MR_String) "simp_module_info",
  (MR_String) "simp_varset",
  (MR_String) "simp_vartypes",
  (MR_String) "simp_rerun_quant_instmap_delta",
  (MR_String) "simp_rerun_det",
  (MR_String) "simp_params",
  (MR_String) "simp_sub_info"
};

static const MR_DuArgLocn check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_info_0_0[8] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_0_0 = {
  (MR_String) "simplify_info",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_info_0_0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_info_0_0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_info_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_info_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_0_0
};

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__simplify_info____Unify____simplify_info_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_info____Compare____simplify_info_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_info",
  (MR_String) "simplify_info",
  { check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_info_0 },
  { check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_info_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_info_params_0_0[6] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_maybe_fully_strict_0),
  (MR_PseudoTypeInfo) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_level_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_maybe_trace_optimized_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_maybe_ignore_marked_static_0)
};

static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_info_params_0_0[6] = {
  (MR_String) "sip_pred_proc_id",
  (MR_String) "sip_inst_varset",
  (MR_String) "sip_fully_strict",
  (MR_String) "sip_trace_level",
  (MR_String) "sip_trace_optimized",
  (MR_String) "sip_ignore_marked_static"
};

static const MR_DuArgLocn check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_info_params_0_0[6] = {
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
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 2,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_params_0_0 = {
  (MR_String) "simplify_info_params",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_info_params_0_0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_info_params_0_0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_info_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_info_params_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_params_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_info_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_info_params_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_info_params_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_params_0_0
};

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_info_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_info_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__simplify_info____Unify____simplify_info_params_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_info____Compare____simplify_info_params_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_info",
  (MR_String) "simplify_info_params",
  { check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_info_params_0 },
  { check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_info_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_info_params_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__maybe__ti_maybe_1check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_nested_context_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_info__maybe__ti_maybe_1check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
};

static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_nested_context_0_0[3] = {
  (MR_String) "snc_inside_dupl_for_switch",
  (MR_String) "snc_proc_is_model_non",
  (MR_String) "snc_num_enclosing_barriers"
};

static const MR_DuArgLocn check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_nested_context_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_nested_context_0_0 = {
  (MR_String) "simplify_nested_context",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_nested_context_0_0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_nested_context_0_0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_nested_context_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_nested_context_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_nested_context_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_nested_context_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_nested_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_nested_context_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_nested_context_0_0
};

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_nested_context_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_nested_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_info",
  (MR_String) "simplify_nested_context",
  { check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_nested_context_0 },
  { check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_nested_context_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_nested_context_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__simplify__simplify_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_sub_info_0_0[10] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_info__list__ti_list_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_maybe_allow_messages_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_has_parallel_conj_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_has_user_event_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_defined_where_0)
};

static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_sub_info_0_0[10] = {
  (MR_String) "ssimp_rtti_varmaps",
  (MR_String) "ssimp_elim_vars",
  (MR_String) "ssimp_error_specs",
  (MR_String) "ssimp_cost_delta",
  (MR_String) "ssimp_allow_messages",
  (MR_String) "ssimp_has_parallel_conj",
  (MR_String) "ssimp_found_contains_trace",
  (MR_String) "ssimp_has_user_event",
  (MR_String) "ssimp_deleted_call_callees",
  (MR_String) "ssimp_defined_where"
};

static const MR_DuArgLocn check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_sub_info_0_0[10] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_sub_info_0_0 = {
  (MR_String) "simplify_sub_info",
  INT16_C(10),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_sub_info_0_0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_sub_info_0_0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_sub_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_sub_info_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_sub_info_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_sub_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_sub_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_sub_info_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_sub_info_0_0
};

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_sub_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_sub_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_info",
  (MR_String) "simplify_sub_info",
  { check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_sub_info_0 },
  { check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_sub_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_sub_info_0,

};

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_23 == CastY_24);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_26_26;
    MR_Word TypeInfo_27_27;
    MR_Word TypeInfo_28_28;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX6_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX7_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY7_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX8_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgY8_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX10_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Word ArgY10_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) & (MR_Integer) 1);

    succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_26_26 = (MR_Word) (&check_hlds__simplify__simplify_info_scalar_common_1[7]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_27_27 = (MR_Word) (&check_hlds__simplify__simplify_info_scalar_common_1[8]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
              if (succeeded)
              {
                succeeded = (ArgX7_15 == ArgY7_16);
                if (succeeded)
                {
                  succeeded = (ArgX8_17 == ArgY8_18);
                  if (succeeded)
                  {
                    TypeInfo_28_28 = (MR_Word) (&check_hlds__simplify__simplify_info_scalar_common_1[3]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                      succeeded = (ArgX10_21 == ArgY10_22);
                  }
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

void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Unsigned ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Unsigned ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;
    MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_17 < Var_18);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_17 > Var_18);
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

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__simplify_info_scalar_common_1[5]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0(
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
    MR_Word TypeInfo_11_11;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Unsigned ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Unsigned ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_11_11 = (MR_Word) (&check_hlds__simplify__simplify_info_scalar_common_1[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_params_0_0(
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
    MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);
    MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);
    MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__simplify_info_scalar_common_1[4]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_29 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_30 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_29 < Var_30);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_29 > Var_30);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          libs__trace_params____Compare____trace_level_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;
            MR_Integer Var_31 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_32 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_31 < Var_32);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_31 > Var_32);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Integer Var_33 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_34 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_33 < Var_34);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_33 > Var_34);
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
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_params_0_0(
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
    MR_Word TypeInfo_18_18;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);
    MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);
    MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_18_18 = (MR_Word) (&check_hlds__simplify__simplify_info_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = libs__trace_params____Unify____trace_level_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
              succeeded = (ArgX6_13 == ArgY6_14);
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_27 == CastY_28);
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
    MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
    MR_Word SubResult1_6;

    check_hlds__simplify__simplify_tasks____Compare____simplify_tasks_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__simplify_info_scalar_common_1[2]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;
            MR_Integer Var_37 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_38 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_37 < Var_38);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_37 > Var_38);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;
              MR_Integer Var_39 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_40 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_39 < Var_40);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_39 > Var_40);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult6_21 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;
                MR_Integer CastX_58 = (MR_Integer) (ArgX7_22);
                MR_Integer CastY_59 = (MR_Integer) (ArgY7_23);

                succeeded = (CastX_58 == CastY_59);
                if (succeeded)
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
                else
                {
                  MR_Word ArgX1_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX7_22, (MR_Integer) 0))));
                  MR_Word ArgY1_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY7_23, (MR_Integer) 0))));
                  MR_Word ArgX2_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX7_22, (MR_Integer) 1))));
                  MR_Word ArgY2_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY7_23, (MR_Integer) 1))));
                  MR_Word ArgX3_47 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX7_22, (MR_Integer) 2))) >> 5)) & (MR_Integer) 1);
                  MR_Word ArgY3_48 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY7_23, (MR_Integer) 2))) >> 5)) & (MR_Integer) 1);
                  MR_Word ArgX4_50 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX7_22, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);
                  MR_Word ArgY4_51 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY7_23, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);
                  MR_Word ArgX5_53 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX7_22, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
                  MR_Word ArgY5_54 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY7_23, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
                  MR_Word ArgX6_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX7_22, (MR_Integer) 2))) & (MR_Integer) 1);
                  MR_Word ArgY6_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY7_23, (MR_Integer) 2))) & (MR_Integer) 1);
                  MR_Word SubResult1_43;

                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_43, ArgX1_41, ArgY1_42);
                  succeeded = (SubResult1_43 != (MR_Integer) 0);
                  if (succeeded)
                  {
                    SubResult7_24 = SubResult1_43;
                    succeeded = (SubResult7_24 != (MR_Integer) 0);
                  }
                  else
                  {
                    MR_Word SubResult2_46;

                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__simplify_info_scalar_common_1[4]), &SubResult2_46, ((MR_Box) (ArgX2_44)), ((MR_Box) (ArgY2_45)));
                    succeeded = (SubResult2_46 != (MR_Integer) 0);
                    if (succeeded)
                    {
                      SubResult7_24 = SubResult2_46;
                      succeeded = (SubResult7_24 != (MR_Integer) 0);
                    }
                    else
                    {
                      MR_Word SubResult3_49;
                      MR_Integer Var_66 = (MR_Integer) (ArgX3_47);
                      MR_Integer Var_67 = (MR_Integer) (ArgY3_48);

                      succeeded = (Var_66 < Var_67);
                      if (succeeded)
                      {
                        SubResult3_49 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_66 > Var_67);
                        if (succeeded)
                        {
                          SubResult3_49 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult3_49 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                      {
                        SubResult7_24 = SubResult3_49;
                        succeeded = (SubResult7_24 != (MR_Integer) 0);
                      }
                      else
                      {
                        MR_Word SubResult4_52;

                        libs__trace_params____Compare____trace_level_0_0(&SubResult4_52, ArgX4_50, ArgY4_51);
                        succeeded = (SubResult4_52 != (MR_Integer) 0);
                        if (succeeded)
                        {
                          SubResult7_24 = SubResult4_52;
                          succeeded = (SubResult7_24 != (MR_Integer) 0);
                        }
                        else
                        {
                          MR_Word SubResult5_55;
                          MR_Integer Var_68 = (MR_Integer) (ArgX5_53);
                          MR_Integer Var_69 = (MR_Integer) (ArgY5_54);

                          succeeded = (Var_68 < Var_69);
                          if (succeeded)
                          {
                            SubResult5_55 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_68 > Var_69);
                            if (succeeded)
                            {
                              SubResult5_55 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult5_55 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                          {
                            SubResult7_24 = SubResult5_55;
                            succeeded = (SubResult7_24 != (MR_Integer) 0);
                          }
                          else
                          {
                            MR_Integer Var_70 = (MR_Integer) (ArgX6_56);
                            MR_Integer Var_71 = (MR_Integer) (ArgY6_57);

                            succeeded = (Var_70 < Var_71);
                            if (succeeded)
                            {
                              SubResult7_24 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_70 > Var_71);
                              if (succeeded)
                              {
                                SubResult7_24 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult7_24 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
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
                  *HeadVar__1_1 = SubResult7_24;
                else
                  check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0(HeadVar__1_1, ArgX8_25, ArgY8_26);
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_33 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_34 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_33 == CastY_34);
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
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX6_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX7_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY7_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX8_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgY8_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX10_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Word ArgY10_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__simplify_info_scalar_common_1[7]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__simplify_info_scalar_common_1[8]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;
            MR_Integer Var_45 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_46 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_45 < Var_46);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_45 > Var_46);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;
              MR_Integer Var_47 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_48 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_47 < Var_48);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_47 > Var_48);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult6_21 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;
                MR_Integer Var_49 = (MR_Integer) (ArgX7_22);
                MR_Integer Var_50 = (MR_Integer) (ArgY7_23);

                succeeded = (Var_49 < Var_50);
                if (succeeded)
                {
                  SubResult7_24 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_49 > Var_50);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult7_24 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;
                  MR_Integer Var_51 = (MR_Integer) (ArgX8_25);
                  MR_Integer Var_52 = (MR_Integer) (ArgY8_26);

                  succeeded = (Var_51 < Var_52);
                  if (succeeded)
                  {
                    SubResult8_27 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_51 > Var_52);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult8_27 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__simplify_info_scalar_common_1[3]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Integer Var_53 = (MR_Integer) (ArgX10_31);
                      MR_Integer Var_54 = (MR_Integer) (ArgY10_32);

                      succeeded = (Var_53 < Var_54);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_53 > Var_54);
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
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_23_23;
    MR_Word TypeCtorInfo_24_24;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
    MR_Integer CastX_37;
    MR_Integer CastY_38;
    MR_Integer CastX_62;
    MR_Integer CastY_63;

    succeeded = check_hlds__simplify__simplify_tasks____Unify____simplify_tasks_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_23_23 = (MR_Word) (&check_hlds__simplify__simplify_info_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeCtorInfo_24_24 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
          succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_24_24, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
              if (succeeded)
              {
                CastX_37 = (MR_Integer) (ArgX7_15);
                CastY_38 = (MR_Integer) (ArgY7_16);
                succeeded = (CastX_37 == CastY_38);
                if (succeeded)
                  succeeded = MR_TRUE;
                else
                {
                  MR_Word TypeInfo_18_40;
                  MR_Word ArgX1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX7_15, (MR_Integer) 0))));
                  MR_Word ArgY1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY7_16, (MR_Integer) 0))));
                  MR_Word ArgX2_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX7_15, (MR_Integer) 1))));
                  MR_Word ArgY2_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY7_16, (MR_Integer) 1))));
                  MR_Word ArgX3_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX7_15, (MR_Integer) 2))) >> 5)) & (MR_Integer) 1);
                  MR_Word ArgY3_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY7_16, (MR_Integer) 2))) >> 5)) & (MR_Integer) 1);
                  MR_Word ArgX4_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX7_15, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);
                  MR_Word ArgY4_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY7_16, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);
                  MR_Word ArgX5_33 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX7_15, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
                  MR_Word ArgY5_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY7_16, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
                  MR_Word ArgX6_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX7_15, (MR_Integer) 2))) & (MR_Integer) 1);
                  MR_Word ArgY6_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY7_16, (MR_Integer) 2))) & (MR_Integer) 1);

                  succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_25, ArgY1_26);
                  if (succeeded)
                  {
                    TypeInfo_18_40 = (MR_Word) (&check_hlds__simplify__simplify_info_scalar_common_1[4]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_40, ((MR_Box) (ArgX2_27)), ((MR_Box) (ArgY2_28)));
                    if (succeeded)
                    {
                      succeeded = (ArgX3_29 == ArgY3_30);
                      if (succeeded)
                      {
                        succeeded = libs__trace_params____Unify____trace_level_0_0(ArgX4_31, ArgY4_32);
                        if (succeeded)
                        {
                          succeeded = (ArgX5_33 == ArgY5_34);
                          if (succeeded)
                            succeeded = (ArgX6_35 == ArgY6_36);
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  CastX_62 = (MR_Integer) (ArgX8_17);
                  CastY_63 = (MR_Integer) (ArgY8_18);
                  succeeded = (CastX_62 == CastY_63);
                  if (succeeded)
                    succeeded = MR_TRUE;
                  else
                  {
                    MR_Word TypeInfo_26_65;
                    MR_Word TypeInfo_27_66;
                    MR_Word TypeInfo_28_67;
                    MR_Word ArgX1_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 0))));
                    MR_Word ArgY1_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 0))));
                    MR_Word ArgX2_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 1))));
                    MR_Word ArgY2_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 1))));
                    MR_Word ArgX3_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 2))));
                    MR_Word ArgY3_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 2))));
                    MR_Integer ArgX4_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 3))));
                    MR_Integer ArgY4_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 3))));
                    MR_Word ArgX5_50 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 4))) >> 3)) & (MR_Integer) 1);
                    MR_Word ArgY5_51 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 4))) >> 3)) & (MR_Integer) 1);
                    MR_Word ArgX6_52 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
                    MR_Word ArgY6_53 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
                    MR_Word ArgX7_54 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
                    MR_Word ArgY7_55 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
                    MR_Word ArgX8_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 4))) & (MR_Integer) 1);
                    MR_Word ArgY8_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 4))) & (MR_Integer) 1);
                    MR_Word ArgX9_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 5))));
                    MR_Word ArgY9_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 5))));
                    MR_Word ArgX10_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 6))) & (MR_Integer) 1);
                    MR_Word ArgY10_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 6))) & (MR_Integer) 1);

                    succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX1_42, ArgY1_43);
                    if (succeeded)
                    {
                      TypeInfo_26_65 = (MR_Word) (&check_hlds__simplify__simplify_info_scalar_common_1[7]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_65, ((MR_Box) (ArgX2_44)), ((MR_Box) (ArgY2_45)));
                      if (succeeded)
                      {
                        TypeInfo_27_66 = (MR_Word) (&check_hlds__simplify__simplify_info_scalar_common_1[8]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_66, ((MR_Box) (ArgX3_46)), ((MR_Box) (ArgY3_47)));
                        if (succeeded)
                        {
                          succeeded = (ArgX4_48 == ArgY4_49);
                          if (succeeded)
                          {
                            succeeded = (ArgX5_50 == ArgY5_51);
                            if (succeeded)
                            {
                              succeeded = (ArgX6_52 == ArgY6_53);
                              if (succeeded)
                              {
                                succeeded = (ArgX7_54 == ArgY7_55);
                                if (succeeded)
                                {
                                  succeeded = (ArgX8_56 == ArgY8_57);
                                  if (succeeded)
                                  {
                                    TypeInfo_28_67 = (MR_Word) (&check_hlds__simplify__simplify_info_scalar_common_1[3]);
                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_67, ((MR_Box) (ArgX9_58)), ((MR_Box) (ArgY9_59)));
                                    if (succeeded)
                                      succeeded = (ArgX10_60 == ArgY10_61);
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
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__simplify__simplify_info____Compare____maybe_trace_optimized_0_0(
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
check_hlds__simplify__simplify_info____Unify____maybe_trace_optimized_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__simplify__simplify_info____Compare____maybe_rerun_quant_instmap_deltas_0_0(
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
check_hlds__simplify__simplify_info____Unify____maybe_rerun_quant_instmap_deltas_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__simplify__simplify_info____Compare____maybe_rerun_det_0_0(
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
check_hlds__simplify__simplify_info____Unify____maybe_rerun_det_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__simplify__simplify_info____Compare____maybe_ignore_marked_static_0_0(
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
check_hlds__simplify__simplify_info____Unify____maybe_ignore_marked_static_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__simplify__simplify_info____Compare____maybe_fully_strict_0_0(
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
check_hlds__simplify__simplify_info____Unify____maybe_fully_strict_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__simplify__simplify_info____Compare____maybe_allow_messages_0_0(
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
check_hlds__simplify__simplify_info____Unify____maybe_allow_messages_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      mercury__term____Compare____context_0_0(HeadVar__1_1, Var_11, ArgY1_7);
    }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      succeeded = mercury__term____Unify____context_0_0(ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(
  MR_Word Info_3,
  MR_Word * OptDuplicateCalls_4)
{
  MR_bool succeeded;
  MR_Word SimplifyTasks_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));
  MR_Word WarnDuplicateCalls_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_5, (MR_Integer) 0))) >> 17)) & (MR_Integer) 1);

  *OptDuplicateCalls_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_5, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
  succeeded = (WarnDuplicateCalls_6 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (*OptDuplicateCalls_4 == (MR_Integer) 0);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_no_solution_disjunct_1_p_0(
  MR_Word Info_2)
{
  MR_bool succeeded;
  MR_Word SimplifyTasks_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0))));
  MR_Word Var_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) & (MR_Integer) 1);

  succeeded = (Var_4 == (MR_Integer) 1);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_suspicious_recursion_1_p_0(
  MR_Word Info_2)
{
  MR_bool succeeded;
  MR_Word SimplifyTasks_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0))));
  MR_Word Var_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);

  succeeded = (Var_4 == (MR_Integer) 1);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_ignore_par_conjunctions_1_p_0(
  MR_Word Info_2)
{
  MR_bool succeeded;
  MR_Word SimplifyTasks_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0))));
  MR_Word Var_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

  succeeded = (Var_4 == (MR_Integer) 1);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_const_prop_1_p_0(
  MR_Word Info_2)
{
  MR_bool succeeded;
  MR_Word SimplifyTasks_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0))));
  MR_Word Var_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);

  succeeded = (Var_4 == (MR_Integer) 0);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_opt_duplicate_calls_1_p_0(
  MR_Word Info_2)
{
  MR_bool succeeded;
  MR_Word SimplifyTasks_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0))));
  MR_Word Var_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);

  succeeded = (Var_4 == (MR_Integer) 0);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_elim_removable_scopes_1_p_0(
  MR_Word Info_2)
{
  MR_bool succeeded;
  MR_Word SimplifyTasks_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0))));
  MR_Word Var_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 9)) & (MR_Integer) 1);

  succeeded = (Var_4 == (MR_Integer) 1);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_test_after_switch_1_p_0(
  MR_Word Info_2)
{
  MR_bool succeeded;
  MR_Word SimplifyTasks_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0))));
  MR_Word Var_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 10)) & (MR_Integer) 1);

  succeeded = (Var_4 == (MR_Integer) 0);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_excess_assign_1_p_0(
  MR_Word Info_2)
{
  MR_bool succeeded;
  MR_Word SimplifyTasks_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0))));
  MR_Word Var_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 11)) & (MR_Integer) 1);

  succeeded = (Var_4 == (MR_Integer) 0);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_after_front_end_1_p_0(
  MR_Word Info_2)
{
  MR_bool succeeded;
  MR_Word SimplifyTasks_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0))));
  MR_Word Var_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 12)) & (MR_Integer) 1);

  succeeded = (Var_4 == (MR_Integer) 1);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_mark_code_model_changes_1_p_0(
  MR_Word Info_2)
{
  MR_bool succeeded;
  MR_Word SimplifyTasks_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0))));
  MR_Word Var_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);

  succeeded = (Var_4 == (MR_Integer) 1);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_obsolete_1_p_0(
  MR_Word Info_2)
{
  MR_bool succeeded;
  MR_Word SimplifyTasks_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0))));
  MR_Word Var_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);

  succeeded = (Var_4 == (MR_Integer) 1);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_format_calls_1_p_0(
  MR_Word Info_2)
{
  MR_bool succeeded;
  MR_Word SimplifyTasks_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0))));
  MR_Word Var_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);

  succeeded = (Var_4 == (MR_Integer) 1);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_implicit_stream_calls_1_p_0(
  MR_Word Info_2)
{
  MR_bool succeeded;
  MR_Word SimplifyTasks_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0))));
  MR_Word Var_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 16)) & (MR_Integer) 1);

  succeeded = (Var_4 == (MR_Integer) 1);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_duplicate_calls_1_p_0(
  MR_Word Info_2)
{
  MR_bool succeeded;
  MR_Word SimplifyTasks_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0))));
  MR_Word Var_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 17)) & (MR_Integer) 1);

  succeeded = (Var_4 == (MR_Integer) 1);
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(
  MR_Word Info_2)
{
  MR_bool succeeded;
  MR_Word SimplifyTasks_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0))));
  MR_Word Var_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0))) >> 18)) & (MR_Integer) 1);

  succeeded = (Var_4 == (MR_Integer) 1);
  return succeeded;
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_deleted_call_callees_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_bool succeeded;
  MR_Word Var_8;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));

  Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
    MR_Word Var_12;
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
    MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 2))));
    MR_Integer Var_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 3))));
    MR_Word Var_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Unsigned packed_word_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 4)));

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_12, 4) = (MR_Box) (packed_word_4);
      MR_hl_field(MR_mktag(0), Var_12, 5) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_12, 6) = (MR_Box) ((MR_Unsigned) (Var_45));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (packed_word_3);
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_12));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_has_user_event_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4))) & (MR_Integer) 1);

  succeeded = (X_4 == Var_53);
  if (succeeded)
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
  else
  {
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
    MR_Word Var_11;
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
    MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 2))));
    MR_Integer Var_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 3))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 5))));
    MR_Word Var_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Unsigned packed_word_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 4)));

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_11, 4) = (MR_Box) ((((packed_word_4 & (~((MR_Unsigned) 1U)))) | (MR_Unsigned) (X_4)));
      MR_hl_field(MR_mktag(0), Var_11, 5) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_11, 6) = (MR_Box) ((MR_Unsigned) (Var_44));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (packed_word_3);
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_11));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_found_contains_trace_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_53 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);

  succeeded = (X_4 == Var_53);
  if (succeeded)
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
  else
  {
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
    MR_Word Var_11;
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
    MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 2))));
    MR_Integer Var_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 3))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 5))));
    MR_Word Var_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Unsigned packed_word_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 4)));

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_11, 4) = (MR_Box) ((((packed_word_4 & (~((MR_Unsigned) 2U)))) | (((MR_Unsigned) (X_4) << 1))));
      MR_hl_field(MR_mktag(0), Var_11, 5) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_11, 6) = (MR_Box) ((MR_Unsigned) (Var_44));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (packed_word_3);
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_11));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_has_parallel_conj_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_53 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);

  succeeded = (X_4 == Var_53);
  if (succeeded)
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
  else
  {
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
    MR_Word Var_11;
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
    MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 2))));
    MR_Integer Var_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 3))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 5))));
    MR_Word Var_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Unsigned packed_word_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 4)));

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_11, 4) = (MR_Box) ((((packed_word_4 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) (X_4) << 2))));
      MR_hl_field(MR_mktag(0), Var_11, 5) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_11, 6) = (MR_Box) ((MR_Unsigned) (Var_44));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (packed_word_3);
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_11));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_error_specs_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
  MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
  MR_Word Var_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))) & (MR_Integer) 1);
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (X_4));
    MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_21));
    MR_hl_field(MR_mktag(0), Var_10, 4) = (MR_Box) (packed_word_1);
    MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_26));
    MR_hl_field(MR_mktag(0), Var_10, 6) = (MR_Box) ((MR_Unsigned) (Var_27));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (packed_word_0);
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_17));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_allow_messages_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
  MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
  MR_Word Var_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))) & (MR_Integer) 1);
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_21));
    MR_hl_field(MR_mktag(0), Var_10, 4) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 8U)))) | (((MR_Unsigned) (X_4) << 3))));
    MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_26));
    MR_hl_field(MR_mktag(0), Var_10, 6) = (MR_Box) ((MR_Unsigned) (Var_27));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (packed_word_0);
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_17));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_elim_vars_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
  MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
  MR_Word Var_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))) & (MR_Integer) 1);
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (X_4));
    MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_21));
    MR_hl_field(MR_mktag(0), Var_10, 4) = (MR_Box) (packed_word_1);
    MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_26));
    MR_hl_field(MR_mktag(0), Var_10, 6) = (MR_Box) ((MR_Unsigned) (Var_27));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (packed_word_0);
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_17));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_rerun_det_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  MR_bool succeeded;
  MR_Word Var_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 4))) & (MR_Integer) 1);

  succeeded = ((MR_Integer) 1 == Var_23);
  if (succeeded)
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  else
  {
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 0))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 1))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 2))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 3))));
    MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 5))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 6))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (((((MR_Unsigned) (Var_19) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_22));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  MR_bool succeeded;
  MR_Word Var_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);

  succeeded = ((MR_Integer) 1 == Var_23);
  if (succeeded)
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  else
  {
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 0))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 1))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 2))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 3))));
    MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 5))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 6))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (Var_20)));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_22));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_24));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_24));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_simplify_tasks_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (X_4));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
    MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (packed_word_0);
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_defined_where_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6))));

  *X_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6))) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_deleted_call_callees_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6))));

  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5))));
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_has_user_event_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6))));

  *X_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4))) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_found_contains_trace_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_has_parallel_conj_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_cost_delta_2_p_0(
  MR_Word Info_3,
  MR_Integer * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6))));

  *X_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3))));
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_error_specs_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6))));

  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2))));
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_allow_messages_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4))) >> 3)) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_elim_vars_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6))));

  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1))));
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6))));

  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0))));
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_ignore_marked_static_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5))));

  *X_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2))) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_trace_level_optimized_3_p_0(
  MR_Word Info_4,
  MR_Word * X_5,
  MR_Word * Y_6)
{
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 5))));

  *X_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);
  *Y_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_fully_strict_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2))) >> 5)) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_inst_varset_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5))));

  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1))));
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5))));

  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0))));
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_rerun_det_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4))) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_rerun_quant_instmap_delta_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3))));
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2))));
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1))));
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_simplify_tasks_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_apply_substitutions_and_duplicate_5_p_0(
  MR_Word ToVar_6,
  MR_Word FromVar_7,
  MR_Word TSubst_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_Word VarTypes0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 3))));
  MR_Word RttiVarMaps0_11;
  MR_Word VarTypes_12;
  MR_Word Renaming_13;
  MR_Word RttiVarMaps1_14;
  MR_Word RttiVarMaps_15;
  MR_Word Var_18;
  MR_Word STATE_VARIABLE_Info_19_19;
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 6))));

  RttiVarMaps0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 0))));
  hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0(TSubst_8, VarTypes0_10, &VarTypes_12);
  Renaming_13 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__simplify__simplify_info_scalar_common_1[0]), (MR_Word) (&check_hlds__simplify__simplify_info_scalar_common_1[0]), ((MR_Box) (ToVar_6)), ((MR_Box) (FromVar_7)));
  Var_18 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__simplify_info_scalar_common_1[1]), (MR_Word) (&check_hlds__simplify__simplify_info_scalar_common_1[1]));
  hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(Var_18, TSubst_8, Renaming_13, RttiVarMaps0_11, &RttiVarMaps1_14);
  hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(FromVar_7, ToVar_6, RttiVarMaps1_14, &RttiVarMaps_15);
  check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(VarTypes_12, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_19_19);
  check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(RttiVarMaps_15, STATE_VARIABLE_Info_19_19, STATE_VARIABLE_Info_17);
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_bool succeeded;
  MR_Word Var_8;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));

  Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
    MR_Word Var_12;
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
    MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 2))));
    MR_Integer Var_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 3))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 5))));
    MR_Word Var_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Unsigned packed_word_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 4)));

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_12, 4) = (MR_Box) (packed_word_4);
      MR_hl_field(MR_mktag(0), Var_12, 5) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_12, 6) = (MR_Box) ((MR_Unsigned) (Var_45));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (packed_word_3);
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_12));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_24));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(
  MR_Integer Incr_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Integer CostDelta0_6;
  MR_Integer CostDelta_7;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));

  CostDelta0_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 3))));
  CostDelta_7 = (MR_Integer) ((MR_Unsigned) CostDelta0_6 + (MR_Unsigned) Incr_4);
  check_hlds__simplify__simplify_info__simplify_info_set_cost_delta_3_p_0(CostDelta_7, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_cost_delta_3_p_0(
  MR_Integer X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Integer Var_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3))));

  succeeded = (X_4 == Var_53);
  if (succeeded)
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
  else
  {
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
    MR_Word Var_11;
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
    MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 2))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 5))));
    MR_Word Var_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Unsigned packed_word_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 4)));

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_11, 4) = (MR_Box) (packed_word_4);
      MR_hl_field(MR_mktag(0), Var_11, 5) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_11, 6) = (MR_Box) ((MR_Unsigned) (Var_44));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (packed_word_3);
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_11));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(
  MR_Word Spec_4,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  MR_Word AllowMsgs_6;
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 0))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 1))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 2))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 3))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 5))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 2))));
  MR_Integer Var_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 3))));
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 4)));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 4)));

  AllowMsgs_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 4))) >> 3)) & (MR_Integer) 1);
  Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 5))));
  Var_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 6))) & (MR_Integer) 1);
  switch (AllowMsgs_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Specs_8;
        MR_Word Var_56;

        {
          Specs_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Specs_8, 0) = ((MR_Box) (Spec_4));
          MR_hl_field(MR_mktag(1), Specs_8, 1) = ((MR_Box) (Var_24));
        }
        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (Var_22));
          MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (Var_23));
          MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) (Specs_8));
          MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (Var_25));
          MR_hl_field(MR_mktag(0), Var_56, 4) = (MR_Box) (packed_word_1);
          MR_hl_field(MR_mktag(0), Var_56, 5) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(0), Var_56, 6) = (MR_Box) ((MR_Unsigned) (Var_30));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_15));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_16));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_17));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_18));
          MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (packed_word_0);
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_21));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_56));
        }
      }
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
      break;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_add_elim_vars_3_p_0(
  MR_Word ElimVars_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word ElimVarsLists0_6;
  MR_Word ElimVarsLists_7;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
  MR_Word Var_22;
  MR_Integer Var_23;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_36;
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
  MR_Unsigned packed_word_1;

  ElimVarsLists0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1))));
  Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 2))));
  Var_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 3))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 4)));
  Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 5))));
  Var_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 6))) & (MR_Integer) 1);
  {
    ElimVarsLists_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), ElimVarsLists_7, 0) = ((MR_Box) (ElimVars_4));
    MR_hl_field(MR_mktag(1), ElimVarsLists_7, 1) = ((MR_Box) (ElimVarsLists0_6));
  }
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (Var_21));
    MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (ElimVarsLists_7));
    MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) (Var_22));
    MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (Var_23));
    MR_hl_field(MR_mktag(0), Var_36, 4) = (MR_Box) (packed_word_1);
    MR_hl_field(MR_mktag(0), Var_36, 5) = ((MR_Box) (Var_28));
    MR_hl_field(MR_mktag(0), Var_36, 6) = (MR_Box) ((MR_Unsigned) (Var_29));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_9 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_14));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_16));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_17));
    MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (packed_word_0);
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_20));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_36));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_info_3_p_0(
  MR_Word Info_4,
  MR_Word * PredInfo_5,
  MR_Word * ProcInfo_6)
{
  MR_Word ModuleInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 1))));
  MR_Word PredProcId_8;
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 5))));

  PredProcId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_7, PredProcId_8, PredInfo_5, ProcInfo_6);
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_reinit_3_p_0(
  MR_Word SimplifyTasks_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_20;
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 0))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 1))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 2))));
  MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 3))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 5))));
  MR_Word Var_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 6))) & (MR_Integer) 1);
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 4)));

  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (Var_52));
    MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (Var_53));
    MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (Var_54));
    MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Var_55));
    MR_hl_field(MR_mktag(0), Var_20, 4) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 5U)))) | (((MR_Unsigned) ((MR_Integer) 1) | (((MR_Unsigned) ((MR_Integer) 1) << 2))))));
    MR_hl_field(MR_mktag(0), Var_20, 5) = ((MR_Box) (Var_60));
    MR_hl_field(MR_mktag(0), Var_20, 6) = (MR_Box) ((MR_Unsigned) (Var_61));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SimplifyTasks_4));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_22));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_23));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_24));
    MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_27));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_20));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_init_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word ProcInfo_10,
  MR_Word SimplifyTasks_11,
  MR_Word * Info_12)
{
  MR_Word PredProcId_13;
  MR_Word InstVarSet_14;
  MR_Word Globals_15;
  MR_Word FullyStrict0_16;
  MR_Word FullyStrict_17;
  MR_Word TraceLevel_18;
  MR_Word TraceOptimized0_19;
  MR_Word TraceOptimized_20;
  MR_Word Backend_21;
  MR_Word IgnoreMarkedStatic_22;
  MR_Word Params_23;
  MR_Word RttiVarMaps_24;
  MR_Word TraceGoalProcs_32;
  MR_Word PredInfo_33;
  MR_Word PredStatus_34;
  MR_Word InThisModule_35;
  MR_Word DefinedWhere_36;
  MR_Word SubInfo_37;
  MR_Word VarSet_38;
  MR_Word VarTypes_39;

  {
    PredProcId_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), PredProcId_13, 0) = ((MR_Box) (PredId_8));
    MR_hl_field(MR_mktag(0), PredProcId_13, 1) = ((MR_Box) (ProcId_9));
  }
  hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_10, &InstVarSet_14);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 211, &FullyStrict0_16);
  switch (FullyStrict0_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      FullyStrict_17 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      FullyStrict_17 = (MR_Integer) 1;
      break;
  }
  libs__globals__get_trace_level_2_p_0(Globals_15, &TraceLevel_18);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 152, &TraceOptimized0_19);
  switch (TraceOptimized0_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      TraceOptimized_20 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      TraceOptimized_20 = (MR_Integer) 1;
      break;
  }
  Backend_21 = libs__globals__lookup_current_backend_1_f_0(Globals_15);
  switch (Backend_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      IgnoreMarkedStatic_22 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      IgnoreMarkedStatic_22 = (MR_Integer) 1;
      break;
  }
  {
    Params_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Params_23, 0) = ((MR_Box) (PredProcId_13));
    MR_hl_field(MR_mktag(0), Params_23, 1) = ((MR_Box) (InstVarSet_14));
    MR_hl_field(MR_mktag(0), Params_23, 2) = (MR_Box) (((((MR_Unsigned) (FullyStrict_17) << 5)) | (((((MR_Unsigned) (TraceLevel_18) << 2)) | (((((MR_Unsigned) (TraceOptimized_20) << 1)) | (MR_Unsigned) (IgnoreMarkedStatic_22)))))));
  }
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_10, &RttiVarMaps_24);
  mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), &TraceGoalProcs_32);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_8, &PredInfo_33);
  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_33, &PredStatus_34);
  InThisModule_35 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_34);
  switch (InThisModule_35) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      DefinedWhere_36 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      DefinedWhere_36 = (MR_Integer) 0;
      break;
  }
  {
    SubInfo_37 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), SubInfo_37, 0) = ((MR_Box) (RttiVarMaps_24));
    MR_hl_field(MR_mktag(0), SubInfo_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), SubInfo_37, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), SubInfo_37, 3) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(0), SubInfo_37, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)))))));
    MR_hl_field(MR_mktag(0), SubInfo_37, 5) = ((MR_Box) (TraceGoalProcs_32));
    MR_hl_field(MR_mktag(0), SubInfo_37, 6) = (MR_Box) ((MR_Unsigned) (DefinedWhere_36));
  }
  hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_10, &VarSet_38);
  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_10, &VarTypes_39);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *Info_12 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SimplifyTasks_11));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleInfo_7));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarSet_38));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarTypes_39));
    MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Params_23));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (SubInfo_37));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____maybe_allow_messages_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__simplify_info____Unify____maybe_allow_messages_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____maybe_allow_messages_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__simplify_info____Compare____maybe_allow_messages_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____maybe_fully_strict_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__simplify_info____Unify____maybe_fully_strict_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____maybe_fully_strict_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__simplify_info____Compare____maybe_fully_strict_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____maybe_ignore_marked_static_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__simplify_info____Unify____maybe_ignore_marked_static_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____maybe_ignore_marked_static_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__simplify_info____Compare____maybe_ignore_marked_static_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____maybe_rerun_det_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__simplify_info____Unify____maybe_rerun_det_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____maybe_rerun_det_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__simplify_info____Compare____maybe_rerun_det_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____maybe_rerun_quant_instmap_deltas_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__simplify_info____Unify____maybe_rerun_quant_instmap_deltas_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____maybe_rerun_quant_instmap_deltas_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__simplify_info____Compare____maybe_rerun_quant_instmap_deltas_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____maybe_trace_optimized_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__simplify_info____Unify____maybe_trace_optimized_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____maybe_trace_optimized_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__simplify_info____Compare____maybe_trace_optimized_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__simplify_info____Unify____simplify_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__simplify_info____Compare____simplify_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__simplify_info____Unify____simplify_info_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__simplify_info____Compare____simplify_info_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__simplify__simplify_info__init(void)
{
}

void mercury__check_hlds__simplify__simplify_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0);
	MR_register_type_ctor_info(&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_maybe_allow_messages_0);
	MR_register_type_ctor_info(&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_maybe_fully_strict_0);
	MR_register_type_ctor_info(&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_maybe_ignore_marked_static_0);
	MR_register_type_ctor_info(&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_maybe_rerun_det_0);
	MR_register_type_ctor_info(&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_maybe_rerun_quant_instmap_deltas_0);
	MR_register_type_ctor_info(&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_maybe_trace_optimized_0);
	MR_register_type_ctor_info(&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_info_0);
	MR_register_type_ctor_info(&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_info_params_0);
	MR_register_type_ctor_info(&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_nested_context_0);
	MR_register_type_ctor_info(&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_sub_info_0);
}

void mercury__check_hlds__simplify__simplify_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__simplify_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.simplify_info.
