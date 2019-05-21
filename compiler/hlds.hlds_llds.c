/*
** Automatically generated from `hlds_llds.m'
** by the Mercury compiler,
** version rotd-2017-08-05
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


/* :- module hlds.hlds_llds. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_llds__init
ENDINIT
*/

#include "hlds.hlds_llds.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0;

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_follow_vars_0_0[3];

static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_abs_follow_vars_0_0[3];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_follow_vars_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_follow_vars_0_0[1];

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_follow_vars_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_follow_vars_0[1];

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_follow_vars_0[1];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_0;

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_1[2];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_1;

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_2[2];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_2;

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_3[2];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_3;

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_4[1];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_4;

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_1[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_2[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_3[2];

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_locn_0[4];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_locn_0[5];

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_locn_0[5];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__maybe__ti_maybe_1hlds__hlds_llds__type_ctor_info_abs_follow_vars_0;

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_llds_code_gen_details_0_0[8];

static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_llds_code_gen_details_0_0[8];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_llds_code_gen_details_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_llds_code_gen_details_0_0[1];

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_llds_code_gen_details_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_llds_code_gen_details_0[1];

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_llds_code_gen_details_0[1];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_0;

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_1[1];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_1;

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_2[1];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_2;

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_3[1];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_3;

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_1[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_2[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_3[1];

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_maybe_need_0[4];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_maybe_need_0[4];

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_maybe_need_0[4];

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_need_across_call_0_0[3];

static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_need_across_call_0_0[3];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_across_call_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_across_call_0_0[1];

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_across_call_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_across_call_0[1];

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_across_call_0[1];

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_for_loop_control_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_NotagFunctorDesc hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_for_loop_control_0;

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_par_conj_0[1];

static const MR_NotagFunctorDesc hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_in_par_conj_0;

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_need_in_resume_0_0[3];

static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_need_in_resume_0_0[3];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_in_resume_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_in_resume_0_0[1];

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_in_resume_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_in_resume_0[1];

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_resume_0[1];

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_0;

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_reg_type_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_reg_type_0[2];

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_reg_type_0[2];

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_0;

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_1;

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_2;

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_3;

static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_resume_locs_0[4];

static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_resume_locs_0[4];

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_locs_0[4];

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_resume_point_0_0[2];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_0;

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_1;

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_1[1];

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_resume_point_0[2];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_resume_point_0[2];

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_point_0[2];

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_0[2];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_0;

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_1[2];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_1;

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_2[1];

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_2;

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_1[1];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_2[1];

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_stack_slot_0[3];

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_stack_slot_0[3];

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_0[3];

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_0;

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_stack_slot_width_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_stack_slot_width_0[2];

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_width_0[2];

static const MR_FA_TypeInfo_Struct2 hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0;

static void MR_CALL 
hlds__hlds_llds____Compare____maybe_need_0_0(
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2,
  MR_Word hlds__hlds_llds__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____maybe_need_0_0(
  MR_Word hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2);

static void MR_CALL 
hlds__hlds_llds__rename_vars_in_var_locn_list_4_p_0(
  MR_Word hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2,
  MR_Word hlds__hlds_llds__HeadVar__3_3,
  MR_Word * hlds__hlds_llds__HeadVar__4_4);

static MR_Word MR_CALL 
hlds__hlds_llds__get_details_1_f_0(
  MR_Word hlds__hlds_llds__HeadVar__1_1);

static void MR_CALL 
hlds__hlds_llds__explain_stack_slots_2_4_p_0(
  MR_Word hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__VarSet_2,
  MR_String hlds__hlds_llds__STATE_VARIABLE_Explanation_0_3,
  MR_String * hlds__hlds_llds__STATE_VARIABLE_Explanation_4);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_map_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_map_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_locn_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____abs_locn_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_store_map_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____abs_store_map_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____llds_code_gen_details_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____llds_code_gen_details_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____maybe_need_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____maybe_need_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_across_call_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____need_across_call_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_for_loop_control_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____need_for_loop_control_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_par_conj_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____need_in_par_conj_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_resume_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____need_in_resume_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____reg_type_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____reg_type_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_locs_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____resume_locs_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_point_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____resume_point_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_width_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_width_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slots_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2);

static void MR_CALL 
hlds__hlds_llds____Compare____stack_slots_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_llds_scalar_common_1[4][2];

static /* final */ const MR_Box hlds__hlds_llds_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__hlds_llds_scalar_common_3[1][1];




static /* final */ const MR_Box hlds__hlds_llds_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&hlds__hlds_llds_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_follow_vars_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_llds_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box hlds__hlds_llds_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_llds_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_llds_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0))
  },
};

static /* final */ const MR_Box hlds__hlds_llds_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "(double width)"))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_llds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0
  }
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_follow_vars_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_abs_follow_vars_0_0[3] = {
  (MR_String) "afv_map",
  (MR_String) "afv_next_non_res_reg_r",
  (MR_String) "afv_next_non_res_reg_f"
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_follow_vars_0_0 = {
  (MR_String) "abs_follow_vars",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_llds__hlds__hlds_llds__field_types_abs_follow_vars_0_0,
  hlds__hlds_llds__hlds__hlds_llds__field_names_abs_follow_vars_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_follow_vars_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_follow_vars_0_0
};

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_follow_vars_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_follow_vars_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_follow_vars_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_follow_vars_0_0
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_follow_vars_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_follow_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____abs_follow_vars_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____abs_follow_vars_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "abs_follow_vars",
  {     hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_follow_vars_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_follow_vars_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_follow_vars_0
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_follow_vars_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_llds____Unify____abs_follow_vars_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____abs_follow_vars_map_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "abs_follow_vars_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_0 = {
  (MR_String) "any_reg",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_1 = {
  (MR_String) "abs_reg",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_2 = {
  (MR_String) "abs_stackvar",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_3[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_3 = {
  (MR_String) "abs_parent_stackvar",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_4 = {
  (MR_String) "abs_framevar",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_0
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_1[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_1
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_2[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_2
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_3[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_3,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_4
};

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_locn_0[4] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_2
  },
  {
    (MR_Integer) 2,
    MR_SECTAG_REMOTE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_3
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_locn_0[5] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_4,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_3,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_2,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_0
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_locn_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____abs_locn_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____abs_locn_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "abs_locn",
  {     hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_locn_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_locn_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_locn_0
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_store_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_llds____Unify____abs_store_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____abs_store_map_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "abs_store_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &hlds__hlds_llds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__maybe__ti_maybe_1hlds__hlds_llds__type_ctor_info_abs_follow_vars_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_follow_vars_0
  }
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_llds_code_gen_details_0_0[8] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__maybe__ti_maybe_1hlds__hlds_llds__type_ctor_info_abs_follow_vars_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_resume_point_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_maybe_need_0
};

static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_llds_code_gen_details_0_0[8] = {
  (MR_String) "pre_births",
  (MR_String) "post_births",
  (MR_String) "pre_deaths",
  (MR_String) "post_deaths",
  (MR_String) "follow_vars",
  (MR_String) "store_map",
  (MR_String) "resume_point",
  (MR_String) "maybe_need"
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_llds_code_gen_details_0_0 = {
  (MR_String) "llds_code_gen_details",
  (MR_Integer) 8,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_llds__hlds__hlds_llds__field_types_llds_code_gen_details_0_0,
  hlds__hlds_llds__hlds__hlds_llds__field_names_llds_code_gen_details_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_llds_code_gen_details_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_llds_code_gen_details_0_0
};

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_llds_code_gen_details_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_llds_code_gen_details_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_llds_code_gen_details_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_llds_code_gen_details_0_0
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_llds_code_gen_details_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_llds_code_gen_details_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____llds_code_gen_details_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____llds_code_gen_details_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "llds_code_gen_details",
  {     hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_llds_code_gen_details_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_llds_code_gen_details_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_llds_code_gen_details_0
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_0 = {
  (MR_String) "no_need",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_across_call_0
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_1 = {
  (MR_String) "need_call",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_2[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_in_resume_0
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_2 = {
  (MR_String) "need_resume",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_3[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_in_par_conj_0
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_3 = {
  (MR_String) "need_par_conj",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_0
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_1[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_1
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_2[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_2
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_3[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_3
};

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_maybe_need_0[4] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_2
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_3
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_maybe_need_0[4] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_3,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_2,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_0
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_maybe_need_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_maybe_need_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____maybe_need_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____maybe_need_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "maybe_need",
  {     hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_maybe_need_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_maybe_need_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_maybe_need_0
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_need_across_call_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_need_across_call_0_0[3] = {
  (MR_String) "call_forward_vars",
  (MR_String) "call_resume_vars",
  (MR_String) "call_nondet_vars"
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_across_call_0_0 = {
  (MR_String) "need_across_call",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_llds__hlds__hlds_llds__field_types_need_across_call_0_0,
  hlds__hlds_llds__hlds__hlds_llds__field_names_need_across_call_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_across_call_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_across_call_0_0
};

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_across_call_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_across_call_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_across_call_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_across_call_0_0
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_across_call_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_across_call_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____need_across_call_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____need_across_call_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "need_across_call",
  {     hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_across_call_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_across_call_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_across_call_0
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_for_loop_control_0[1] = {
  (MR_Integer) 0
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_NotagFunctorDesc hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_for_loop_control_0 = {
  (MR_String) "need_for_loop_control",
  (MR_PseudoTypeInfo) &hlds__hlds_llds__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_String) "loop_control_distinct_stackvars",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_for_loop_control_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__hlds_llds____Unify____need_for_loop_control_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____need_for_loop_control_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "need_for_loop_control",
  {     &hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_for_loop_control_0 },
  {     &hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_for_loop_control_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_for_loop_control_0
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_par_conj_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_in_par_conj_0 = {
  (MR_String) "need_in_par_conj",
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_String) "par_conj_engine_vars",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_in_par_conj_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__hlds_llds____Unify____need_in_par_conj_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____need_in_par_conj_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "need_in_par_conj",
  {     &hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_in_par_conj_0 },
  {     &hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_in_par_conj_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_par_conj_0
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_need_in_resume_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_need_in_resume_0_0[3] = {
  (MR_String) "resume_vars_on_stack",
  (MR_String) "resume_resume_vars",
  (MR_String) "resume_nondet_vars"
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_in_resume_0_0 = {
  (MR_String) "need_in_resume",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_llds__hlds__hlds_llds__field_types_need_in_resume_0_0,
  hlds__hlds_llds__hlds__hlds_llds__field_names_need_in_resume_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_in_resume_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_in_resume_0_0
};

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_in_resume_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_in_resume_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_in_resume_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_in_resume_0_0
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_resume_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_in_resume_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____need_in_resume_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____need_in_resume_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "need_in_resume",
  {     hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_in_resume_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_in_resume_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_resume_0
};

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_0 = {
  (MR_String) "reg_r",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_1 = {
  (MR_String) "reg_f",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_reg_type_0[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_0,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_reg_type_0[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_0
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_reg_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_llds____Unify____reg_type_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____reg_type_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "reg_type",
  {     hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_reg_type_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_reg_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_reg_type_0
};

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_0 = {
  (MR_String) "resume_locs_orig_only",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_1 = {
  (MR_String) "resume_locs_stack_only",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_2 = {
  (MR_String) "resume_locs_orig_and_stack",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_3 = {
  (MR_String) "resume_locs_stack_and_orig",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_resume_locs_0[4] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_0,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_2,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_3
};

static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_resume_locs_0[4] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_2,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_0,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_3,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_1
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_locs_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_resume_locs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_llds____Unify____resume_locs_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____resume_locs_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "resume_locs",
  {     hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_resume_locs_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_resume_locs_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_locs_0
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_resume_point_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_resume_locs_0
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_0 = {
  (MR_String) "resume_point",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_llds__hlds__hlds_llds__field_types_resume_point_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_1 = {
  (MR_String) "no_resume_point",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_1
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_1[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_0
};

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_resume_point_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_1
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_resume_point_0[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_0
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_point_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_resume_point_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____resume_point_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____resume_point_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "resume_point",
  {     hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_resume_point_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_resume_point_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_point_0
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_0 = {
  (MR_String) "det_slot",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_1 = {
  (MR_String) "parent_det_slot",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_2 = {
  (MR_String) "nondet_slot",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_0
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_1[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_1
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_2[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_2
};

static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_stack_slot_0[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_2
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_stack_slot_0[3] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_0,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_2,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_1
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____stack_slot_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____stack_slot_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "stack_slot",
  {     hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_stack_slot_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_stack_slot_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_0
};

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_0 = {
  (MR_String) "single_width",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_1 = {
  (MR_String) "double_width",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_stack_slot_width_0[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_0,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_stack_slot_width_0[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_0
};

static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_width_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_llds____Unify____stack_slot_width_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____stack_slot_width_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "stack_slot_width",
  {     hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_stack_slot_width_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_stack_slot_width_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_width_0
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_llds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slots_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_llds____Unify____stack_slots_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____stack_slots_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "stack_slots",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

void MR_CALL 
hlds__hlds_llds____Compare____stack_slots_0_0(
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2,
  MR_Word hlds__hlds_llds__HeadVar__3_3)
{
  {
    MR_Word hlds__hlds_llds__Cast_HeadVar1_4 = hlds__hlds_llds__HeadVar__2_2;
    MR_Word hlds__hlds_llds__Cast_HeadVar2_5 = hlds__hlds_llds__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[1], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_llds__Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slots_0_0(
  MR_Word hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Word hlds__hlds_llds__Cast_HeadVar1_3 = hlds__hlds_llds__HeadVar__1_1;
    MR_Word hlds__hlds_llds__Cast_HeadVar2_4 = hlds__hlds_llds__HeadVar__2_2;

    hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[1], ((MR_Box) (hlds__hlds_llds__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_llds__Cast_HeadVar2_4)));
    return hlds__hlds_llds__succeeded;
  }
}

void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_width_0_0(
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2,
  MR_Word hlds__hlds_llds__HeadVar__3_3)
{
  {
    MR_Integer hlds__hlds_llds__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
    MR_Integer hlds__hlds_llds__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Cast_HeadVar1_4, hlds__hlds_llds__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_width_0_0(
  MR_Word hlds__hlds_llds__HeadVar__2_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded = (hlds__hlds_llds__HeadVar__2_1 == hlds__hlds_llds__HeadVar__2_2);

    return hlds__hlds_llds__succeeded;
  }
}

void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_0_0(
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2,
  MR_Word hlds__hlds_llds__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Integer hlds__hlds_llds__CastX_36 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
    MR_Integer hlds__hlds_llds__CastY_37 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_36 == hlds__hlds_llds__CastY_37);
    if (hlds__hlds_llds__succeeded)
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word hlds__hlds_llds__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer hlds__hlds_llds__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer hlds__hlds_llds__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word hlds__hlds_llds__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word hlds__hlds_llds__Var_8;

                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__Var_8, hlds__hlds_llds__Var_44, hlds__hlds_llds__ArgY1_5);
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__Var_8 == (MR_Integer) 0);
                  hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
                  if (hlds__hlds_llds__succeeded)
                    *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__Var_8;
                  else
                  {
                    MR_Integer hlds__hlds_llds__Var_48 = (MR_Integer) hlds__hlds_llds__Var_43;
                    MR_Integer hlds__hlds_llds__Var_49 = (MR_Integer) hlds__hlds_llds__ArgY2_7;

                    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Var_48, hlds__hlds_llds__Var_49);
                  }
                }
                break;
              case (MR_Integer) 1:
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__hlds_llds__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer hlds__hlds_llds__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer hlds__hlds_llds__ArgY1_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word hlds__hlds_llds__ArgY2_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word hlds__hlds_llds__Var_24;

                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__Var_24, hlds__hlds_llds__Var_47, hlds__hlds_llds__ArgY1_21);
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__Var_24 == (MR_Integer) 0);
                  hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
                  if (hlds__hlds_llds__succeeded)
                    *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__Var_24;
                  else
                  {
                    MR_Integer hlds__hlds_llds__Var_50 = (MR_Integer) hlds__hlds_llds__Var_46;
                    MR_Integer hlds__hlds_llds__Var_51 = (MR_Integer) hlds__hlds_llds__ArgY2_23;

                    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Var_50, hlds__hlds_llds__Var_51);
                  }
                }
                break;
              case (MR_Integer) 2:
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer hlds__hlds_llds__Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer hlds__hlds_llds__ArgY1_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));

                  mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Var_45, hlds__hlds_llds__ArgY1_35);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_0_0(
  MR_Word hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Integer hlds__hlds_llds__CastX_13 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
    MR_Integer hlds__hlds_llds__CastY_14 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_13 == hlds__hlds_llds__CastY_14);
    if (hlds__hlds_llds__succeeded)
      hlds__hlds_llds__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer hlds__hlds_llds__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer hlds__hlds_llds__ArgY1_4;
            MR_Word hlds__hlds_llds__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__hlds_llds__ArgY2_6;

            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (hlds__hlds_llds__succeeded)
            {
              hlds__hlds_llds__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
              hlds__hlds_llds__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
              hlds__hlds_llds__succeeded = (hlds__hlds_llds__ArgX1_3 == hlds__hlds_llds__ArgY1_4);
              if (hlds__hlds_llds__succeeded)
                hlds__hlds_llds__succeeded = (hlds__hlds_llds__ArgX2_5 == hlds__hlds_llds__ArgY2_6);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer hlds__hlds_llds__ArgX1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer hlds__hlds_llds__ArgY1_8;
            MR_Word hlds__hlds_llds__ArgX2_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__hlds_llds__ArgY2_10;

            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__hlds_llds__succeeded)
            {
              hlds__hlds_llds__ArgY1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
              hlds__hlds_llds__ArgY2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
              hlds__hlds_llds__succeeded = (hlds__hlds_llds__ArgX1_7 == hlds__hlds_llds__ArgY1_8);
              if (hlds__hlds_llds__succeeded)
                hlds__hlds_llds__succeeded = (hlds__hlds_llds__ArgX2_9 == hlds__hlds_llds__ArgY2_10);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer hlds__hlds_llds__ArgX1_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer hlds__hlds_llds__ArgY1_12;

            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (hlds__hlds_llds__succeeded)
            {
              hlds__hlds_llds__ArgY1_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
              hlds__hlds_llds__succeeded = (hlds__hlds_llds__ArgX1_11 == hlds__hlds_llds__ArgY1_12);
            }
          }
          break;
      }
    return hlds__hlds_llds__succeeded;
  }
}

void MR_CALL 
hlds__hlds_llds____Compare____resume_locs_0_0(
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2,
  MR_Word hlds__hlds_llds__HeadVar__3_3)
{
  {
    MR_Integer hlds__hlds_llds__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
    MR_Integer hlds__hlds_llds__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Cast_HeadVar1_4, hlds__hlds_llds__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_locs_0_0(
  MR_Word hlds__hlds_llds__HeadVar__2_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded = (hlds__hlds_llds__HeadVar__2_1 == hlds__hlds_llds__HeadVar__2_2);

    return hlds__hlds_llds__succeeded;
  }
}

void MR_CALL 
hlds__hlds_llds____Compare____reg_type_0_0(
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2,
  MR_Word hlds__hlds_llds__HeadVar__3_3)
{
  {
    MR_Integer hlds__hlds_llds__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
    MR_Integer hlds__hlds_llds__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Cast_HeadVar1_4, hlds__hlds_llds__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____reg_type_0_0(
  MR_Word hlds__hlds_llds__HeadVar__2_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded = (hlds__hlds_llds__HeadVar__2_1 == hlds__hlds_llds__HeadVar__2_2);

    return hlds__hlds_llds__succeeded;
  }
}

void MR_CALL 
hlds__hlds_llds____Compare____need_for_loop_control_0_0(
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2,
  MR_Word hlds__hlds_llds__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Integer hlds__hlds_llds__CastX_6 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
    MR_Integer hlds__hlds_llds__CastY_7 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_6 == hlds__hlds_llds__CastY_7);
    if (hlds__hlds_llds__succeeded)
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__hlds_llds__ArgX1_4 = (MR_Word) hlds__hlds_llds__HeadVar__2_2;
      MR_Word hlds__hlds_llds__ArgY1_5 = (MR_Word) hlds__hlds_llds__HeadVar__3_3;

      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[3], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__ArgX1_4)), ((MR_Box) (hlds__hlds_llds__ArgY1_5)));
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_for_loop_control_0_0(
  MR_Word hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Integer hlds__hlds_llds__CastX_5 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
    MR_Integer hlds__hlds_llds__CastY_6 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_5 == hlds__hlds_llds__CastY_6);
    if (hlds__hlds_llds__succeeded)
      hlds__hlds_llds__succeeded = MR_TRUE;
    else
    {
      MR_Word hlds__hlds_llds__ArgX1_3 = (MR_Word) hlds__hlds_llds__HeadVar__1_1;
      MR_Word hlds__hlds_llds__ArgY1_4 = (MR_Word) hlds__hlds_llds__HeadVar__2_2;

      hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[3], ((MR_Box) (hlds__hlds_llds__ArgX1_3)), ((MR_Box) (hlds__hlds_llds__ArgY1_4)));
    }
    return hlds__hlds_llds__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____maybe_need_0_0(
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2,
  MR_Word hlds__hlds_llds__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Integer hlds__hlds_llds__CastX_28 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
    MR_Integer hlds__hlds_llds__CastY_29 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_28 == hlds__hlds_llds__CastY_29);
    if (hlds__hlds_llds__succeeded)
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__hlds_llds__Var_33 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__2_2), (MR_Integer) 1);

            switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__hlds_llds__ArgY1_9 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__3_3), (MR_Integer) 1);

                  hlds__hlds_llds____Compare____need_across_call_0_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Var_33, hlds__hlds_llds__ArgY1_9);
                }
                break;
              case (MR_Integer) 2:
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word hlds__hlds_llds__Var_35 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__2_2), (MR_Integer) 2);

            switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__hlds_llds__ArgY1_18 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__3_3), (MR_Integer) 2);

                  hlds__hlds_llds____Compare____need_in_resume_0_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Var_35, hlds__hlds_llds__ArgY1_18);
                }
                break;
              case (MR_Integer) 3:
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word hlds__hlds_llds__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word hlds__hlds_llds__ArgY1_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));

                  hlds__hlds_llds____Compare____need_in_par_conj_0_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Var_34, hlds__hlds_llds__ArgY1_27);
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____maybe_need_0_0(
  MR_Word hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Integer hlds__hlds_llds__CastX_11 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
    MR_Integer hlds__hlds_llds__CastY_12 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_11 == hlds__hlds_llds__CastY_12);
    if (hlds__hlds_llds__succeeded)
      hlds__hlds_llds__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer hlds__hlds_llds__CastX_3 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
            MR_Integer hlds__hlds_llds__CastY_4 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

            hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastY_4 == hlds__hlds_llds__CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__hlds_llds__ArgX1_5 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__1_1), (MR_Integer) 1);
            MR_Word hlds__hlds_llds__ArgY1_6;

            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__hlds_llds__succeeded)
            {
              hlds__hlds_llds__ArgY1_6 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__2_2), (MR_Integer) 1);
              hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_across_call_0_0(hlds__hlds_llds__ArgX1_5, hlds__hlds_llds__ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word hlds__hlds_llds__ArgX1_7 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__1_1), (MR_Integer) 2);
            MR_Word hlds__hlds_llds__ArgY1_8;

            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (hlds__hlds_llds__succeeded)
            {
              hlds__hlds_llds__ArgY1_8 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__2_2), (MR_Integer) 2);
              hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_in_resume_0_0(hlds__hlds_llds__ArgX1_7, hlds__hlds_llds__ArgY1_8);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word hlds__hlds_llds__ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__hlds_llds__ArgY1_10;

            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (hlds__hlds_llds__succeeded)
            {
              hlds__hlds_llds__ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
              hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_in_par_conj_0_0(hlds__hlds_llds__ArgX1_9, hlds__hlds_llds__ArgY1_10);
            }
          }
          break;
      }
    return hlds__hlds_llds__succeeded;
  }
}

void MR_CALL 
hlds__hlds_llds____Compare____llds_code_gen_details_0_0(
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2,
  MR_Word hlds__hlds_llds__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Integer hlds__hlds_llds__CastX_27 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
    MR_Integer hlds__hlds_llds__CastY_28 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_27 == hlds__hlds_llds__CastY_28);
    if (hlds__hlds_llds__succeeded)
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__hlds_llds__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word hlds__hlds_llds__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word hlds__hlds_llds__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word hlds__hlds_llds__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word hlds__hlds_llds__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word hlds__hlds_llds__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word hlds__hlds_llds__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word hlds__hlds_llds__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word hlds__hlds_llds__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word hlds__hlds_llds__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 4)));
      MR_Word hlds__hlds_llds__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word hlds__hlds_llds__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 5)));
      MR_Word hlds__hlds_llds__ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 6)));
      MR_Word hlds__hlds_llds__ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 6)));
      MR_Word hlds__hlds_llds__ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 7)));
      MR_Word hlds__hlds_llds__ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 7)));
      MR_Word hlds__hlds_llds__Var_20;

      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__Var_20, ((MR_Box) (hlds__hlds_llds__ArgX1_4)), ((MR_Box) (hlds__hlds_llds__ArgY1_5)));
      hlds__hlds_llds__succeeded = (hlds__hlds_llds__Var_20 == (MR_Integer) 0);
      hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
      if (hlds__hlds_llds__succeeded)
        *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__Var_20;
      else
      {
        MR_Word hlds__hlds_llds__Var_21;

        mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__Var_21, ((MR_Box) (hlds__hlds_llds__ArgX2_6)), ((MR_Box) (hlds__hlds_llds__ArgY2_7)));
        hlds__hlds_llds__succeeded = (hlds__hlds_llds__Var_21 == (MR_Integer) 0);
        hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
        if (hlds__hlds_llds__succeeded)
          *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__Var_21;
        else
        {
          MR_Word hlds__hlds_llds__Var_22;

          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__Var_22, ((MR_Box) (hlds__hlds_llds__ArgX3_8)), ((MR_Box) (hlds__hlds_llds__ArgY3_9)));
          hlds__hlds_llds__succeeded = (hlds__hlds_llds__Var_22 == (MR_Integer) 0);
          hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
          if (hlds__hlds_llds__succeeded)
            *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__Var_22;
          else
          {
            MR_Word hlds__hlds_llds__Var_23;

            mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__Var_23, ((MR_Box) (hlds__hlds_llds__ArgX4_10)), ((MR_Box) (hlds__hlds_llds__ArgY4_11)));
            hlds__hlds_llds__succeeded = (hlds__hlds_llds__Var_23 == (MR_Integer) 0);
            hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
            if (hlds__hlds_llds__succeeded)
              *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__Var_23;
            else
            {
              MR_Word hlds__hlds_llds__Var_24;

              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[2], &hlds__hlds_llds__Var_24, ((MR_Box) (hlds__hlds_llds__ArgX5_12)), ((MR_Box) (hlds__hlds_llds__ArgY5_13)));
              hlds__hlds_llds__succeeded = (hlds__hlds_llds__Var_24 == (MR_Integer) 0);
              hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
              if (hlds__hlds_llds__succeeded)
                *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__Var_24;
              else
              {
                MR_Word hlds__hlds_llds__Var_25;

                mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], &hlds__hlds_llds__Var_25, ((MR_Box) (hlds__hlds_llds__ArgX6_14)), ((MR_Box) (hlds__hlds_llds__ArgY6_15)));
                hlds__hlds_llds__succeeded = (hlds__hlds_llds__Var_25 == (MR_Integer) 0);
                hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
                if (hlds__hlds_llds__succeeded)
                  *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__Var_25;
                else
                {
                  MR_Word hlds__hlds_llds__Var_26;

                  hlds__hlds_llds____Compare____resume_point_0_0(&hlds__hlds_llds__Var_26, hlds__hlds_llds__ArgX7_16, hlds__hlds_llds__ArgY7_17);
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__Var_26 == (MR_Integer) 0);
                  hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
                  if (hlds__hlds_llds__succeeded)
                    *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__Var_26;
                  else
                  {
                    MR_Integer hlds__hlds_llds__CastX_61 = (MR_Integer) hlds__hlds_llds__ArgX8_18;
                    MR_Integer hlds__hlds_llds__CastY_62 = (MR_Integer) hlds__hlds_llds__ArgY8_19;

                    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_61 == hlds__hlds_llds__CastY_62);
                    if (hlds__hlds_llds__succeeded)
                      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
                    else
                      switch (MR_tag((MR_Word) hlds__hlds_llds__ArgX8_18)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          switch (MR_tag((MR_Word) hlds__hlds_llds__ArgY8_19)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
                              break;
                            case (MR_Integer) 1:
                              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
                              break;
                            case (MR_Integer) 2:
                              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
                              break;
                            case (MR_Integer) 3:
                              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
                              break;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word hlds__hlds_llds__Var_66 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__ArgX8_18), (MR_Integer) 1);

                            switch (MR_tag((MR_Word) hlds__hlds_llds__ArgY8_19)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
                                break;
                              case (MR_Integer) 1:
                                {
                                  MR_Word hlds__hlds_llds__ArgY1_42 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__ArgY8_19), (MR_Integer) 1);

                                  hlds__hlds_llds____Compare____need_across_call_0_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Var_66, hlds__hlds_llds__ArgY1_42);
                                }
                                break;
                              case (MR_Integer) 2:
                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
                                break;
                              case (MR_Integer) 3:
                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
                                break;
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word hlds__hlds_llds__Var_68 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__ArgX8_18), (MR_Integer) 2);

                            switch (MR_tag((MR_Word) hlds__hlds_llds__ArgY8_19)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
                                break;
                              case (MR_Integer) 1:
                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
                                break;
                              case (MR_Integer) 2:
                                {
                                  MR_Word hlds__hlds_llds__ArgY1_51 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__ArgY8_19), (MR_Integer) 2);

                                  hlds__hlds_llds____Compare____need_in_resume_0_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Var_68, hlds__hlds_llds__ArgY1_51);
                                }
                                break;
                              case (MR_Integer) 3:
                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
                                break;
                            }
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            MR_Word hlds__hlds_llds__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__ArgX8_18, (MR_Integer) 0)));

                            switch (MR_tag((MR_Word) hlds__hlds_llds__ArgY8_19)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
                                break;
                              case (MR_Integer) 1:
                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
                                break;
                              case (MR_Integer) 2:
                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
                                break;
                              case (MR_Integer) 3:
                                {
                                  MR_Word hlds__hlds_llds__ArgY1_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__ArgY8_19, (MR_Integer) 0)));

                                  hlds__hlds_llds____Compare____need_in_par_conj_0_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Var_67, hlds__hlds_llds__ArgY1_60);
                                }
                                break;
                            }
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
}

void MR_CALL 
hlds__hlds_llds____Compare____resume_point_0_0(
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2,
  MR_Word hlds__hlds_llds__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Integer hlds__hlds_llds__CastX_13 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
    MR_Integer hlds__hlds_llds__CastY_14 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_13 == hlds__hlds_llds__CastY_14);
    if (hlds__hlds_llds__succeeded)
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((hlds__hlds_llds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((hlds__hlds_llds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
      else
        *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word hlds__hlds_llds__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word hlds__hlds_llds__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

      if ((hlds__hlds_llds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word hlds__hlds_llds__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__hlds_llds__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__hlds_llds__Var_8;

        mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__Var_8, ((MR_Box) (hlds__hlds_llds__Var_18)), ((MR_Box) (hlds__hlds_llds__ArgY1_5)));
        hlds__hlds_llds__succeeded = (hlds__hlds_llds__Var_8 == (MR_Integer) 0);
        hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
        if (hlds__hlds_llds__succeeded)
          *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__Var_8;
        else
        {
          MR_Integer hlds__hlds_llds__Var_19 = (MR_Integer) hlds__hlds_llds__Var_17;
          MR_Integer hlds__hlds_llds__Var_20 = (MR_Integer) hlds__hlds_llds__ArgY2_7;

          mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Var_19, hlds__hlds_llds__Var_20);
        }
      }
    }
  }
}

void MR_CALL 
hlds__hlds_llds____Compare____need_in_resume_0_0(
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2,
  MR_Word hlds__hlds_llds__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Integer hlds__hlds_llds__CastX_12 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
    MR_Integer hlds__hlds_llds__CastY_13 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_12 == hlds__hlds_llds__CastY_13);
    if (hlds__hlds_llds__succeeded)
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__hlds_llds__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word hlds__hlds_llds__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word hlds__hlds_llds__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word hlds__hlds_llds__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word hlds__hlds_llds__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word hlds__hlds_llds__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word hlds__hlds_llds__Var_10;
      MR_Integer hlds__hlds_llds__Var_17 = (MR_Integer) hlds__hlds_llds__ArgX1_4;
      MR_Integer hlds__hlds_llds__Var_18 = (MR_Integer) hlds__hlds_llds__ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__Var_10, hlds__hlds_llds__Var_17, hlds__hlds_llds__Var_18);
      hlds__hlds_llds__succeeded = (hlds__hlds_llds__Var_10 == (MR_Integer) 0);
      hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
      if (hlds__hlds_llds__succeeded)
        *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__Var_10;
      else
      {
        MR_Word hlds__hlds_llds__Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__Var_11, ((MR_Box) (hlds__hlds_llds__ArgX2_6)), ((MR_Box) (hlds__hlds_llds__ArgY2_7)));
        hlds__hlds_llds__succeeded = (hlds__hlds_llds__Var_11 == (MR_Integer) 0);
        hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
        if (hlds__hlds_llds__succeeded)
          *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__ArgX3_8)), ((MR_Box) (hlds__hlds_llds__ArgY3_9)));
        }
      }
    }
  }
}

void MR_CALL 
hlds__hlds_llds____Compare____need_in_par_conj_0_0(
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2,
  MR_Word hlds__hlds_llds__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Integer hlds__hlds_llds__CastX_6 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
    MR_Integer hlds__hlds_llds__CastY_7 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_6 == hlds__hlds_llds__CastY_7);
    if (hlds__hlds_llds__succeeded)
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__hlds_llds__ArgX1_4 = (MR_Word) hlds__hlds_llds__HeadVar__2_2;
      MR_Word hlds__hlds_llds__ArgY1_5 = (MR_Word) hlds__hlds_llds__HeadVar__3_3;

      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__ArgX1_4)), ((MR_Box) (hlds__hlds_llds__ArgY1_5)));
    }
  }
}

void MR_CALL 
hlds__hlds_llds____Compare____need_across_call_0_0(
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2,
  MR_Word hlds__hlds_llds__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Integer hlds__hlds_llds__CastX_12 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
    MR_Integer hlds__hlds_llds__CastY_13 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_12 == hlds__hlds_llds__CastY_13);
    if (hlds__hlds_llds__succeeded)
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__hlds_llds__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word hlds__hlds_llds__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word hlds__hlds_llds__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word hlds__hlds_llds__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word hlds__hlds_llds__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word hlds__hlds_llds__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word hlds__hlds_llds__Var_10;

      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__Var_10, ((MR_Box) (hlds__hlds_llds__ArgX1_4)), ((MR_Box) (hlds__hlds_llds__ArgY1_5)));
      hlds__hlds_llds__succeeded = (hlds__hlds_llds__Var_10 == (MR_Integer) 0);
      hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
      if (hlds__hlds_llds__succeeded)
        *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__Var_10;
      else
      {
        MR_Word hlds__hlds_llds__Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__Var_11, ((MR_Box) (hlds__hlds_llds__ArgX2_6)), ((MR_Box) (hlds__hlds_llds__ArgY2_7)));
        hlds__hlds_llds__succeeded = (hlds__hlds_llds__Var_11 == (MR_Integer) 0);
        hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
        if (hlds__hlds_llds__succeeded)
          *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__ArgX3_8)), ((MR_Box) (hlds__hlds_llds__ArgY3_9)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____llds_code_gen_details_0_0(
  MR_Word hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Integer hlds__hlds_llds__CastX_19 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
    MR_Integer hlds__hlds_llds__CastY_20 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_19 == hlds__hlds_llds__CastY_20);
    if (hlds__hlds_llds__succeeded)
      hlds__hlds_llds__succeeded = MR_TRUE;
    else
    {
      MR_Word hlds__hlds_llds__TypeInfo_22_22;
      MR_Word hlds__hlds_llds__TypeInfo_23_23;
      MR_Word hlds__hlds_llds__TypeInfo_24_24;
      MR_Word hlds__hlds_llds__TypeInfo_25_25;
      MR_Word hlds__hlds_llds__TypeInfo_26_26;
      MR_Word hlds__hlds_llds__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__hlds_llds__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word hlds__hlds_llds__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__hlds_llds__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word hlds__hlds_llds__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word hlds__hlds_llds__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word hlds__hlds_llds__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word hlds__hlds_llds__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word hlds__hlds_llds__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 4)));
      MR_Word hlds__hlds_llds__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word hlds__hlds_llds__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 5)));
      MR_Word hlds__hlds_llds__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word hlds__hlds_llds__ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 6)));
      MR_Word hlds__hlds_llds__ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 6)));
      MR_Word hlds__hlds_llds__ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 7)));
      MR_Word hlds__hlds_llds__ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 7)));
      MR_Integer hlds__hlds_llds__CastX_35;
      MR_Integer hlds__hlds_llds__CastY_36;

      hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], ((MR_Box) (hlds__hlds_llds__ArgX1_3)), ((MR_Box) (hlds__hlds_llds__ArgY1_4)));
      if (hlds__hlds_llds__succeeded)
      {
        hlds__hlds_llds__TypeInfo_22_22 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
        hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_22_22, ((MR_Box) (hlds__hlds_llds__ArgX2_5)), ((MR_Box) (hlds__hlds_llds__ArgY2_6)));
        if (hlds__hlds_llds__succeeded)
        {
          hlds__hlds_llds__TypeInfo_23_23 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
          hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_23_23, ((MR_Box) (hlds__hlds_llds__ArgX3_7)), ((MR_Box) (hlds__hlds_llds__ArgY3_8)));
          if (hlds__hlds_llds__succeeded)
          {
            hlds__hlds_llds__TypeInfo_24_24 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
            hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_24_24, ((MR_Box) (hlds__hlds_llds__ArgX4_9)), ((MR_Box) (hlds__hlds_llds__ArgY4_10)));
            if (hlds__hlds_llds__succeeded)
            {
              hlds__hlds_llds__TypeInfo_25_25 = (MR_Word) &hlds__hlds_llds_scalar_common_1[2];
              hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_25_25, ((MR_Box) (hlds__hlds_llds__ArgX5_11)), ((MR_Box) (hlds__hlds_llds__ArgY5_12)));
              if (hlds__hlds_llds__succeeded)
              {
                hlds__hlds_llds__TypeInfo_26_26 = (MR_Word) &hlds__hlds_llds_scalar_common_2[0];
                hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_26_26, ((MR_Box) (hlds__hlds_llds__ArgX6_13)), ((MR_Box) (hlds__hlds_llds__ArgY6_14)));
                if (hlds__hlds_llds__succeeded)
                {
                  hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____resume_point_0_0(hlds__hlds_llds__ArgX7_15, hlds__hlds_llds__ArgY7_16);
                  if (hlds__hlds_llds__succeeded)
                  {
                    hlds__hlds_llds__CastX_35 = (MR_Integer) hlds__hlds_llds__ArgX8_17;
                    hlds__hlds_llds__CastY_36 = (MR_Integer) hlds__hlds_llds__ArgY8_18;
                    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_35 == hlds__hlds_llds__CastY_36);
                    if (hlds__hlds_llds__succeeded)
                      hlds__hlds_llds__succeeded = MR_TRUE;
                    else
                      switch (MR_tag((MR_Word) hlds__hlds_llds__ArgX8_17)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Integer hlds__hlds_llds__CastX_27 = (MR_Integer) hlds__hlds_llds__ArgX8_17;
                            MR_Integer hlds__hlds_llds__CastY_28 = (MR_Integer) hlds__hlds_llds__ArgY8_18;

                            hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastY_28 == hlds__hlds_llds__CastX_27);
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word hlds__hlds_llds__ArgX1_29 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__ArgX8_17), (MR_Integer) 1);
                            MR_Word hlds__hlds_llds__ArgY1_30;

                            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__ArgY8_18)) == (MR_mktag((MR_Integer) 1)));
                            if (hlds__hlds_llds__succeeded)
                            {
                              hlds__hlds_llds__ArgY1_30 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__ArgY8_18), (MR_Integer) 1);
                              hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_across_call_0_0(hlds__hlds_llds__ArgX1_29, hlds__hlds_llds__ArgY1_30);
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word hlds__hlds_llds__ArgX1_31 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__ArgX8_17), (MR_Integer) 2);
                            MR_Word hlds__hlds_llds__ArgY1_32;

                            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__ArgY8_18)) == (MR_mktag((MR_Integer) 2)));
                            if (hlds__hlds_llds__succeeded)
                            {
                              hlds__hlds_llds__ArgY1_32 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__ArgY8_18), (MR_Integer) 2);
                              hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_in_resume_0_0(hlds__hlds_llds__ArgX1_31, hlds__hlds_llds__ArgY1_32);
                            }
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            MR_Word hlds__hlds_llds__ArgX1_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__ArgX8_17, (MR_Integer) 0)));
                            MR_Word hlds__hlds_llds__ArgY1_34;

                            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__ArgY8_18)) == (MR_mktag((MR_Integer) 3)));
                            if (hlds__hlds_llds__succeeded)
                            {
                              hlds__hlds_llds__ArgY1_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__ArgY8_18, (MR_Integer) 0)));
                              hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_in_par_conj_0_0(hlds__hlds_llds__ArgX1_33, hlds__hlds_llds__ArgY1_34);
                            }
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
    return hlds__hlds_llds__succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_point_0_0(
  MR_Word hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Integer hlds__hlds_llds__CastX_9 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
    MR_Integer hlds__hlds_llds__CastY_10 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_9 == hlds__hlds_llds__CastY_10);
    if (hlds__hlds_llds__succeeded)
      hlds__hlds_llds__succeeded = MR_TRUE;
    else
    if ((hlds__hlds_llds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer hlds__hlds_llds__CastX_7 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
      MR_Integer hlds__hlds_llds__CastY_8 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

      hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastY_8 == hlds__hlds_llds__CastX_7);
    }
    else
    {
      MR_Word hlds__hlds_llds__TypeInfo_11_11;
      MR_Word hlds__hlds_llds__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__hlds_llds__ArgY1_4;
      MR_Word hlds__hlds_llds__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__hlds_llds__ArgY2_6;

      hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (hlds__hlds_llds__succeeded)
      {
        hlds__hlds_llds__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
        hlds__hlds_llds__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
        hlds__hlds_llds__TypeInfo_11_11 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
        hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_11_11, ((MR_Box) (hlds__hlds_llds__ArgX1_3)), ((MR_Box) (hlds__hlds_llds__ArgY1_4)));
        if (hlds__hlds_llds__succeeded)
          hlds__hlds_llds__succeeded = (hlds__hlds_llds__ArgX2_5 == hlds__hlds_llds__ArgY2_6);
      }
    }
    return hlds__hlds_llds__succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_resume_0_0(
  MR_Word hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Integer hlds__hlds_llds__CastX_9 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
    MR_Integer hlds__hlds_llds__CastY_10 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_9 == hlds__hlds_llds__CastY_10);
    if (hlds__hlds_llds__succeeded)
      hlds__hlds_llds__succeeded = MR_TRUE;
    else
    {
      MR_Word hlds__hlds_llds__TypeInfo_11_11;
      MR_Word hlds__hlds_llds__TypeInfo_12_12;
      MR_Word hlds__hlds_llds__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__hlds_llds__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word hlds__hlds_llds__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__hlds_llds__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word hlds__hlds_llds__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word hlds__hlds_llds__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));

      hlds__hlds_llds__succeeded = (hlds__hlds_llds__ArgX1_3 == hlds__hlds_llds__ArgY1_4);
      if (hlds__hlds_llds__succeeded)
      {
        hlds__hlds_llds__TypeInfo_11_11 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
        hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_11_11, ((MR_Box) (hlds__hlds_llds__ArgX2_5)), ((MR_Box) (hlds__hlds_llds__ArgY2_6)));
        if (hlds__hlds_llds__succeeded)
        {
          hlds__hlds_llds__TypeInfo_12_12 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
          hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_12_12, ((MR_Box) (hlds__hlds_llds__ArgX3_7)), ((MR_Box) (hlds__hlds_llds__ArgY3_8)));
        }
      }
    }
    return hlds__hlds_llds__succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_par_conj_0_0(
  MR_Word hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Integer hlds__hlds_llds__CastX_5 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
    MR_Integer hlds__hlds_llds__CastY_6 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_5 == hlds__hlds_llds__CastY_6);
    if (hlds__hlds_llds__succeeded)
      hlds__hlds_llds__succeeded = MR_TRUE;
    else
    {
      MR_Word hlds__hlds_llds__ArgX1_3 = (MR_Word) hlds__hlds_llds__HeadVar__1_1;
      MR_Word hlds__hlds_llds__ArgY1_4 = (MR_Word) hlds__hlds_llds__HeadVar__2_2;

      hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], ((MR_Box) (hlds__hlds_llds__ArgX1_3)), ((MR_Box) (hlds__hlds_llds__ArgY1_4)));
    }
    return hlds__hlds_llds__succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_across_call_0_0(
  MR_Word hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Integer hlds__hlds_llds__CastX_9 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
    MR_Integer hlds__hlds_llds__CastY_10 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_9 == hlds__hlds_llds__CastY_10);
    if (hlds__hlds_llds__succeeded)
      hlds__hlds_llds__succeeded = MR_TRUE;
    else
    {
      MR_Word hlds__hlds_llds__TypeInfo_12_12;
      MR_Word hlds__hlds_llds__TypeInfo_13_13;
      MR_Word hlds__hlds_llds__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__hlds_llds__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word hlds__hlds_llds__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word hlds__hlds_llds__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word hlds__hlds_llds__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word hlds__hlds_llds__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));

      hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], ((MR_Box) (hlds__hlds_llds__ArgX1_3)), ((MR_Box) (hlds__hlds_llds__ArgY1_4)));
      if (hlds__hlds_llds__succeeded)
      {
        hlds__hlds_llds__TypeInfo_12_12 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
        hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_12_12, ((MR_Box) (hlds__hlds_llds__ArgX2_5)), ((MR_Box) (hlds__hlds_llds__ArgY2_6)));
        if (hlds__hlds_llds__succeeded)
        {
          hlds__hlds_llds__TypeInfo_13_13 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
          hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_13_13, ((MR_Box) (hlds__hlds_llds__ArgX3_7)), ((MR_Box) (hlds__hlds_llds__ArgY3_8)));
        }
      }
    }
    return hlds__hlds_llds__succeeded;
  }
}

void MR_CALL 
hlds__hlds_llds____Compare____abs_store_map_0_0(
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2,
  MR_Word hlds__hlds_llds__HeadVar__3_3)
{
  {
    MR_Word hlds__hlds_llds__Cast_HeadVar1_4 = hlds__hlds_llds__HeadVar__2_2;
    MR_Word hlds__hlds_llds__Cast_HeadVar2_5 = hlds__hlds_llds__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_llds__Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_store_map_0_0(
  MR_Word hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Word hlds__hlds_llds__Cast_HeadVar1_3 = hlds__hlds_llds__HeadVar__1_1;
    MR_Word hlds__hlds_llds__Cast_HeadVar2_4 = hlds__hlds_llds__HeadVar__2_2;

    hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], ((MR_Box) (hlds__hlds_llds__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_llds__Cast_HeadVar2_4)));
    return hlds__hlds_llds__succeeded;
  }
}

void MR_CALL 
hlds__hlds_llds____Compare____abs_locn_0_0(
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2,
  MR_Word hlds__hlds_llds__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Integer hlds__hlds_llds__CastX_77 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
    MR_Integer hlds__hlds_llds__CastY_78 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_77 == hlds__hlds_llds__CastY_78);
    if (hlds__hlds_llds__succeeded)
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer hlds__hlds_llds__Var_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__hlds_llds__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__hlds_llds__ArgY1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer hlds__hlds_llds__ArgY2_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word hlds__hlds_llds__Var_17;
                  MR_Integer hlds__hlds_llds__Var_95 = (MR_Integer) hlds__hlds_llds__Var_90;
                  MR_Integer hlds__hlds_llds__Var_96 = (MR_Integer) hlds__hlds_llds__ArgY1_14;

                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__Var_17, hlds__hlds_llds__Var_95, hlds__hlds_llds__Var_96);
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__Var_17 == (MR_Integer) 0);
                  hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
                  if (hlds__hlds_llds__succeeded)
                    *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__Var_17;
                  else
                    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Var_89, hlds__hlds_llds__ArgY2_16);
                }
                break;
              case (MR_Integer) 2:
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word hlds__hlds_llds__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer hlds__hlds_llds__Var_92 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer hlds__hlds_llds__ArgY1_36 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word hlds__hlds_llds__ArgY2_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word hlds__hlds_llds__Var_39;

                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__Var_39, hlds__hlds_llds__Var_92, hlds__hlds_llds__ArgY1_36);
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__Var_39 == (MR_Integer) 0);
                  hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
                  if (hlds__hlds_llds__succeeded)
                    *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__Var_39;
                  else
                  {
                    MR_Integer hlds__hlds_llds__Var_97 = (MR_Integer) hlds__hlds_llds__Var_91;
                    MR_Integer hlds__hlds_llds__Var_98 = (MR_Integer) hlds__hlds_llds__ArgY2_38;

                    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Var_97, hlds__hlds_llds__Var_98);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word hlds__hlds_llds__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
                MR_Integer hlds__hlds_llds__Var_88 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Integer hlds__hlds_llds__ArgY1_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word hlds__hlds_llds__ArgY2_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word hlds__hlds_llds__Var_61;

                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__Var_61, hlds__hlds_llds__Var_88, hlds__hlds_llds__ArgY1_58);
                          hlds__hlds_llds__succeeded = (hlds__hlds_llds__Var_61 == (MR_Integer) 0);
                          hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
                          if (hlds__hlds_llds__succeeded)
                            *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__Var_61;
                          else
                          {
                            MR_Integer hlds__hlds_llds__Var_93 = (MR_Integer) hlds__hlds_llds__Var_87;
                            MR_Integer hlds__hlds_llds__Var_94 = (MR_Integer) hlds__hlds_llds__ArgY2_60;

                            mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Var_93, hlds__hlds_llds__Var_94);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer hlds__hlds_llds__Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Integer hlds__hlds_llds__ArgY1_76 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));

                          mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Var_86, hlds__hlds_llds__ArgY1_76);
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
  }
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_locn_0_0(
  MR_Word hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Integer hlds__hlds_llds__CastX_19 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
    MR_Integer hlds__hlds_llds__CastY_20 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_19 == hlds__hlds_llds__CastY_20);
    if (hlds__hlds_llds__succeeded)
      hlds__hlds_llds__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer hlds__hlds_llds__CastX_3 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
            MR_Integer hlds__hlds_llds__CastY_4 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

            hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastY_4 == hlds__hlds_llds__CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__hlds_llds__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__hlds_llds__ArgY1_6;
            MR_Integer hlds__hlds_llds__ArgX2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer hlds__hlds_llds__ArgY2_8;

            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__hlds_llds__succeeded)
            {
              hlds__hlds_llds__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
              hlds__hlds_llds__ArgY2_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
              hlds__hlds_llds__succeeded = (hlds__hlds_llds__ArgX1_5 == hlds__hlds_llds__ArgY1_6);
              if (hlds__hlds_llds__succeeded)
                hlds__hlds_llds__succeeded = (hlds__hlds_llds__ArgX2_7 == hlds__hlds_llds__ArgY2_8);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer hlds__hlds_llds__ArgX1_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer hlds__hlds_llds__ArgY1_10;
            MR_Word hlds__hlds_llds__ArgX2_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__hlds_llds__ArgY2_12;

            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (hlds__hlds_llds__succeeded)
            {
              hlds__hlds_llds__ArgY1_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
              hlds__hlds_llds__ArgY2_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
              hlds__hlds_llds__succeeded = (hlds__hlds_llds__ArgX1_9 == hlds__hlds_llds__ArgY1_10);
              if (hlds__hlds_llds__succeeded)
                hlds__hlds_llds__succeeded = (hlds__hlds_llds__ArgX2_11 == hlds__hlds_llds__ArgY2_12);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer hlds__hlds_llds__ArgX1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer hlds__hlds_llds__ArgY1_14;
                MR_Word hlds__hlds_llds__ArgX2_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word hlds__hlds_llds__ArgY2_16;

                hlds__hlds_llds__succeeded = ((((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (hlds__hlds_llds__succeeded)
                {
                  hlds__hlds_llds__ArgY1_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
                  hlds__hlds_llds__ArgY2_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__ArgX1_13 == hlds__hlds_llds__ArgY1_14);
                  if (hlds__hlds_llds__succeeded)
                    hlds__hlds_llds__succeeded = (hlds__hlds_llds__ArgX2_15 == hlds__hlds_llds__ArgY2_16);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer hlds__hlds_llds__ArgX1_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer hlds__hlds_llds__ArgY1_18;

                hlds__hlds_llds__succeeded = ((((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (hlds__hlds_llds__succeeded)
                {
                  hlds__hlds_llds__ArgY1_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__ArgX1_17 == hlds__hlds_llds__ArgY1_18);
                }
              }
              break;
          }
          break;
      }
    return hlds__hlds_llds__succeeded;
  }
}

void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_map_0_0(
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2,
  MR_Word hlds__hlds_llds__HeadVar__3_3)
{
  {
    MR_Word hlds__hlds_llds__Cast_HeadVar1_4 = hlds__hlds_llds__HeadVar__2_2;
    MR_Word hlds__hlds_llds__Cast_HeadVar2_5 = hlds__hlds_llds__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_llds__Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_map_0_0(
  MR_Word hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Word hlds__hlds_llds__Cast_HeadVar1_3 = hlds__hlds_llds__HeadVar__1_1;
    MR_Word hlds__hlds_llds__Cast_HeadVar2_4 = hlds__hlds_llds__HeadVar__2_2;

    hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], ((MR_Box) (hlds__hlds_llds__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_llds__Cast_HeadVar2_4)));
    return hlds__hlds_llds__succeeded;
  }
}

void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_0_0(
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2,
  MR_Word hlds__hlds_llds__HeadVar__3_3)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Integer hlds__hlds_llds__CastX_12 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
    MR_Integer hlds__hlds_llds__CastY_13 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_12 == hlds__hlds_llds__CastY_13);
    if (hlds__hlds_llds__succeeded)
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__hlds_llds__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word hlds__hlds_llds__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer hlds__hlds_llds__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer hlds__hlds_llds__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer hlds__hlds_llds__ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer hlds__hlds_llds__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word hlds__hlds_llds__Var_10;

      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], &hlds__hlds_llds__Var_10, ((MR_Box) (hlds__hlds_llds__ArgX1_4)), ((MR_Box) (hlds__hlds_llds__ArgY1_5)));
      hlds__hlds_llds__succeeded = (hlds__hlds_llds__Var_10 == (MR_Integer) 0);
      hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
      if (hlds__hlds_llds__succeeded)
        *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__Var_10;
      else
      {
        MR_Word hlds__hlds_llds__Var_11;

        mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__Var_11, hlds__hlds_llds__ArgX2_6, hlds__hlds_llds__ArgY2_7);
        hlds__hlds_llds__succeeded = (hlds__hlds_llds__Var_11 == (MR_Integer) 0);
        hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
        if (hlds__hlds_llds__succeeded)
          *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__Var_11;
        else
          mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__ArgX3_8, hlds__hlds_llds__ArgY3_9);
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_0_0(
  MR_Word hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Integer hlds__hlds_llds__CastX_9 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
    MR_Integer hlds__hlds_llds__CastY_10 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_9 == hlds__hlds_llds__CastY_10);
    if (hlds__hlds_llds__succeeded)
      hlds__hlds_llds__succeeded = MR_TRUE;
    else
    {
      MR_Word hlds__hlds_llds__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__hlds_llds__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer hlds__hlds_llds__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer hlds__hlds_llds__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer hlds__hlds_llds__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer hlds__hlds_llds__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));

      hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], ((MR_Box) (hlds__hlds_llds__ArgX1_3)), ((MR_Box) (hlds__hlds_llds__ArgY1_4)));
      if (hlds__hlds_llds__succeeded)
      {
        hlds__hlds_llds__succeeded = (hlds__hlds_llds__ArgX2_5 == hlds__hlds_llds__ArgY2_6);
        if (hlds__hlds_llds__succeeded)
          hlds__hlds_llds__succeeded = (hlds__hlds_llds__ArgX3_7 == hlds__hlds_llds__ArgY3_8);
      }
    }
    return hlds__hlds_llds__succeeded;
  }
}

void MR_CALL 
hlds__hlds_llds__abs_locn_to_string_3_p_0(
  MR_Word hlds__hlds_llds__Locn_4,
  MR_String * hlds__hlds_llds__Str_5,
  MR_Word * hlds__hlds_llds__MaybeWidth_6)
{
  switch (MR_tag((MR_Word) hlds__hlds_llds__Locn_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *hlds__hlds_llds__Str_5 = (MR_String) "any_reg";
        *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer hlds__hlds_llds__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Locn_4, (MR_Integer) 1)));
        MR_Word hlds__hlds_llds__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Locn_4, (MR_Integer) 0)));

        switch (hlds__hlds_llds__Var_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_String hlds__hlds_llds__Var_17;

              hlds__hlds_llds__Var_17 = mercury__string__int_to_string_1_f_0(hlds__hlds_llds__Var_26);
              *hlds__hlds_llds__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "f", hlds__hlds_llds__Var_17);
              *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 0:
            {
              MR_String hlds__hlds_llds__Var_20;

              hlds__hlds_llds__Var_20 = mercury__string__int_to_string_1_f_0(hlds__hlds_llds__Var_26);
              *hlds__hlds_llds__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "r", hlds__hlds_llds__Var_20);
              *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word hlds__hlds_llds__Width_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__Locn_4, (MR_Integer) 1)));
        MR_String hlds__hlds_llds__Var_14;
        MR_Integer hlds__hlds_llds__N_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__Locn_4, (MR_Integer) 0)));

        hlds__hlds_llds__Var_14 = mercury__string__int_to_string_1_f_0(hlds__hlds_llds__N_22);
        *hlds__hlds_llds__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "stackvar", hlds__hlds_llds__Var_14);
        switch (hlds__hlds_llds__Width_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_llds_scalar_common_3[0]);
            }
            break;
          case (MR_Integer) 0:
            *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__Locn_4, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String hlds__hlds_llds__Var_12;
            MR_Integer hlds__hlds_llds__N_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__Locn_4, (MR_Integer) 1)));
            MR_Word hlds__hlds_llds__Width_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__Locn_4, (MR_Integer) 2)));

            hlds__hlds_llds__Var_12 = mercury__string__int_to_string_1_f_0(hlds__hlds_llds__N_23);
            *hlds__hlds_llds__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "parent_stackvar", hlds__hlds_llds__Var_12);
            switch (hlds__hlds_llds__Width_24) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_llds_scalar_common_3[0]);
                }
                break;
              case (MR_Integer) 0:
                *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String hlds__hlds_llds__Var_10;
            MR_Integer hlds__hlds_llds__N_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__Locn_4, (MR_Integer) 1)));

            hlds__hlds_llds__Var_10 = mercury__string__int_to_string_1_f_0(hlds__hlds_llds__N_25);
            *hlds__hlds_llds__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "framevar", hlds__hlds_llds__Var_10);
            *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          break;
      }
      break;
  }
}

MR_Word MR_CALL 
hlds__hlds_llds__key_stack_slot_to_abs_locn_2_f_0(
  MR_Word hlds__hlds_llds__TypeInfo_6_6,
  MR_Box hlds__hlds_llds__HeadVar__1_4,
  MR_Word hlds__hlds_llds__Slot_5)
{
  {
    MR_Word hlds__hlds_llds__HeadVar__3_3;

    hlds__hlds_llds__HeadVar__3_3 = hlds__hlds_llds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_97_98_115_95_108_111_99_110_95_95_91_49_44_32_50_93_95_48_2_f_0(hlds__hlds_llds__Slot_5);
    return hlds__hlds_llds__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
hlds__hlds_llds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_97_98_115_95_108_111_99_110_95_95_91_49_44_32_50_93_95_48_2_f_0(
  MR_Word hlds__hlds_llds__Slot_5)
{
  {
    MR_Word hlds__hlds_llds__HeadVar__3_3;

    switch (MR_tag((MR_Word) hlds__hlds_llds__Slot_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer hlds__hlds_llds__N_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Slot_5, (MR_Integer) 0)));
          MR_Word hlds__hlds_llds__Width_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Slot_5, (MR_Integer) 1)));

          {
            hlds__hlds_llds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__3_3, 0) = ((MR_Box) (hlds__hlds_llds__N_9));
            MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__3_3, 1) = ((MR_Box) (hlds__hlds_llds__Width_10));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer hlds__hlds_llds__N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Slot_5, (MR_Integer) 0)));
          MR_Word hlds__hlds_llds__Width_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Slot_5, (MR_Integer) 1)));

          {
            hlds__hlds_llds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, 1) = ((MR_Box) (hlds__hlds_llds__N_11));
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, 2) = ((MR_Box) (hlds__hlds_llds__Width_12));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer hlds__hlds_llds__N_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__Slot_5, (MR_Integer) 0)));

          {
            hlds__hlds_llds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, 1) = ((MR_Box) (hlds__hlds_llds__N_13));
          }
        }
        break;
    }
    return hlds__hlds_llds__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
hlds__hlds_llds__stack_slot_to_abs_locn_1_f_0(
  MR_Word hlds__hlds_llds__StackSlot_3)
{
  {
    MR_Word hlds__hlds_llds__AbsLocn_4;

    switch (MR_tag((MR_Word) hlds__hlds_llds__StackSlot_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer hlds__hlds_llds__N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__StackSlot_3, (MR_Integer) 0)));
          MR_Word hlds__hlds_llds__Width_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__StackSlot_3, (MR_Integer) 1)));

          {
            hlds__hlds_llds__AbsLocn_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), hlds__hlds_llds__AbsLocn_4, 0) = ((MR_Box) (hlds__hlds_llds__N_5));
            MR_hl_field(MR_mktag(2), hlds__hlds_llds__AbsLocn_4, 1) = ((MR_Box) (hlds__hlds_llds__Width_6));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer hlds__hlds_llds__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__StackSlot_3, (MR_Integer) 0)));
          MR_Word hlds__hlds_llds__Width_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__StackSlot_3, (MR_Integer) 1)));

          {
            hlds__hlds_llds__AbsLocn_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__AbsLocn_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__AbsLocn_4, 1) = ((MR_Box) (hlds__hlds_llds__N_7));
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__AbsLocn_4, 2) = ((MR_Box) (hlds__hlds_llds__Width_8));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer hlds__hlds_llds__N_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__StackSlot_3, (MR_Integer) 0)));

          {
            hlds__hlds_llds__AbsLocn_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__AbsLocn_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__AbsLocn_4, 1) = ((MR_Box) (hlds__hlds_llds__N_9));
          }
        }
        break;
    }
    return hlds__hlds_llds__AbsLocn_4;
  }
}

MR_Integer MR_CALL 
hlds__hlds_llds__stack_slot_num_1_f_0(
  MR_Word hlds__hlds_llds__StackSlot_3)
{
  {
    MR_Integer hlds__hlds_llds__N_4;

    switch (MR_tag((MR_Word) hlds__hlds_llds__StackSlot_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__hlds_llds__Width_5;

          hlds__hlds_llds__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__StackSlot_3, (MR_Integer) 0)));
          hlds__hlds_llds__Width_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__StackSlot_3, (MR_Integer) 1)));
          switch (hlds__hlds_llds__Width_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "function \140hlds.hlds_llds.stack_slot_num\'/1", (MR_String) "double_width");
              }
              break;
            case (MR_Integer) 0:
              {
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_llds__Width_17;

          hlds__hlds_llds__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__StackSlot_3, (MR_Integer) 0)));
          hlds__hlds_llds__Width_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__StackSlot_3, (MR_Integer) 1)));
          switch (hlds__hlds_llds__Width_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "function \140hlds.hlds_llds.stack_slot_num\'/1", (MR_String) "double_width");
              }
              break;
            case (MR_Integer) 0:
              {
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        hlds__hlds_llds__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__StackSlot_3, (MR_Integer) 0)));
        break;
    }
    return hlds__hlds_llds__N_4;
  }
}

void MR_CALL 
hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_p_0(
  MR_Word hlds__hlds_llds__Must_5,
  MR_Word hlds__hlds_llds__Subn_6,
  MR_Word hlds__hlds_llds__Details0_7,
  MR_Word * hlds__hlds_llds__Details_8)
{
  {
    MR_Word hlds__hlds_llds__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word hlds__hlds_llds__TypeInfo_11_68;
    MR_Word hlds__hlds_llds__TypeCtorInfo_12_69;
    MR_Word hlds__hlds_llds__PreBirths0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Details0_7, (MR_Integer) 0)));
    MR_Word hlds__hlds_llds__PostBirths0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Details0_7, (MR_Integer) 1)));
    MR_Word hlds__hlds_llds__PreDeaths0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Details0_7, (MR_Integer) 2)));
    MR_Word hlds__hlds_llds__PostDeaths0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Details0_7, (MR_Integer) 3)));
    MR_Word hlds__hlds_llds__MaybeFollowVars0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Details0_7, (MR_Integer) 4)));
    MR_Word hlds__hlds_llds__StoreMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Details0_7, (MR_Integer) 5)));
    MR_Word hlds__hlds_llds__ResumePoint0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Details0_7, (MR_Integer) 6)));
    MR_Word hlds__hlds_llds__MaybeNeed0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Details0_7, (MR_Integer) 7)));
    MR_Word hlds__hlds_llds__PreBirths_17;
    MR_Word hlds__hlds_llds__PostBirths_18;
    MR_Word hlds__hlds_llds__PreDeaths_19;
    MR_Word hlds__hlds_llds__PostDeaths_20;
    MR_Word hlds__hlds_llds__MaybeFollowVars_21;
    MR_Word hlds__hlds_llds__StoreMap_28;
    MR_Word hlds__hlds_llds__ResumePoint_29;
    MR_Word hlds__hlds_llds__MaybeNeed_33;
    MR_Word hlds__hlds_llds__VarLocnList0_66;
    MR_Word hlds__hlds_llds__VarLocnList_67;

    parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__PreBirths0_9, &hlds__hlds_llds__PreBirths_17);
    parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__PostBirths0_10, &hlds__hlds_llds__PostBirths_18);
    parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__PreDeaths0_11, &hlds__hlds_llds__PreDeaths_19);
    parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__PostDeaths0_12, &hlds__hlds_llds__PostDeaths_20);
    if ((hlds__hlds_llds__MaybeFollowVars0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__hlds_llds__MaybeFollowVars_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word hlds__hlds_llds__TypeInfo_11_60 = (MR_Word) &hlds__hlds_llds_scalar_common_1[0];
      MR_Word hlds__hlds_llds__TypeCtorInfo_12_61 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
      MR_Word hlds__hlds_llds__FollowVars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__MaybeFollowVars0_13, (MR_Integer) 0)));
      MR_Word hlds__hlds_llds__FollowVarsMap0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__FollowVars0_22, (MR_Integer) 0)));
      MR_Integer hlds__hlds_llds__FirstFreeRegR_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__FollowVars0_22, (MR_Integer) 1)));
      MR_Integer hlds__hlds_llds__FirstFreeRegF_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__FollowVars0_22, (MR_Integer) 2)));
      MR_Word hlds__hlds_llds__FollowVarsMap_26;
      MR_Word hlds__hlds_llds__FollowVars_27;
      MR_Word hlds__hlds_llds__VarLocnList0_58;
      MR_Word hlds__hlds_llds__VarLocnList_59;

      mercury__map__to_assoc_list_2_p_0(hlds__hlds_llds__TypeInfo_11_60, hlds__hlds_llds__TypeCtorInfo_12_61, hlds__hlds_llds__FollowVarsMap0_23, &hlds__hlds_llds__VarLocnList0_58);
      hlds__hlds_llds__rename_vars_in_var_locn_list_4_p_0(hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__VarLocnList0_58, &hlds__hlds_llds__VarLocnList_59);
      mercury__map__from_assoc_list_2_p_0(hlds__hlds_llds__TypeInfo_11_60, hlds__hlds_llds__TypeCtorInfo_12_61, hlds__hlds_llds__VarLocnList_59, &hlds__hlds_llds__FollowVarsMap_26);
      {
        hlds__hlds_llds__FollowVars_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__hlds_llds__FollowVars_27, 0) = ((MR_Box) (hlds__hlds_llds__FollowVarsMap_26));
        MR_hl_field(MR_mktag(0), hlds__hlds_llds__FollowVars_27, 1) = ((MR_Box) (hlds__hlds_llds__FirstFreeRegR_24));
        MR_hl_field(MR_mktag(0), hlds__hlds_llds__FollowVars_27, 2) = ((MR_Box) (hlds__hlds_llds__FirstFreeRegF_25));
      }
      {
        hlds__hlds_llds__MaybeFollowVars_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__hlds_llds__MaybeFollowVars_21, 0) = ((MR_Box) (hlds__hlds_llds__FollowVars_27));
      }
    }
    hlds__hlds_llds__TypeInfo_11_68 = (MR_Word) &hlds__hlds_llds_scalar_common_1[0];
    hlds__hlds_llds__TypeCtorInfo_12_69 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
    mercury__map__to_assoc_list_2_p_0(hlds__hlds_llds__TypeInfo_11_68, hlds__hlds_llds__TypeCtorInfo_12_69, hlds__hlds_llds__StoreMap0_14, &hlds__hlds_llds__VarLocnList0_66);
    hlds__hlds_llds__rename_vars_in_var_locn_list_4_p_0(hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__VarLocnList0_66, &hlds__hlds_llds__VarLocnList_67);
    mercury__map__from_assoc_list_2_p_0(hlds__hlds_llds__TypeInfo_11_68, hlds__hlds_llds__TypeCtorInfo_12_69, hlds__hlds_llds__VarLocnList_67, &hlds__hlds_llds__StoreMap_28);
    if ((hlds__hlds_llds__ResumePoint0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__hlds_llds__ResumePoint_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word hlds__hlds_llds__ResumePointVars0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__ResumePoint0_15, (MR_Integer) 0)));
      MR_Word hlds__hlds_llds__ResumeLocs_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__ResumePoint0_15, (MR_Integer) 1)));
      MR_Word hlds__hlds_llds__ResumePointVars_32;

      parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__ResumePointVars0_30, &hlds__hlds_llds__ResumePointVars_32);
      {
        hlds__hlds_llds__ResumePoint_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__hlds_llds__ResumePoint_29, 0) = ((MR_Box) (hlds__hlds_llds__ResumePointVars_32));
        MR_hl_field(MR_mktag(1), hlds__hlds_llds__ResumePoint_29, 1) = ((MR_Box) (hlds__hlds_llds__ResumeLocs_31));
      }
    }
    switch (MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed0_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__hlds_llds__MaybeNeed_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_llds__NeedAcrossCall0_34 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__MaybeNeed0_16), (MR_Integer) 1);
          MR_Word hlds__hlds_llds__ForwardVars0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedAcrossCall0_34, (MR_Integer) 0)));
          MR_Word hlds__hlds_llds__CallResumeVars0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedAcrossCall0_34, (MR_Integer) 1)));
          MR_Word hlds__hlds_llds__CallNondetLiveVars0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedAcrossCall0_34, (MR_Integer) 2)));
          MR_Word hlds__hlds_llds__ForwardVars_38;
          MR_Word hlds__hlds_llds__CallResumeVars_39;
          MR_Word hlds__hlds_llds__CallNondetLiveVars_40;
          MR_Word hlds__hlds_llds__NeedAcrossCall_41;

          parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__ForwardVars0_35, &hlds__hlds_llds__ForwardVars_38);
          parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__CallResumeVars0_36, &hlds__hlds_llds__CallResumeVars_39);
          parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__CallNondetLiveVars0_37, &hlds__hlds_llds__CallNondetLiveVars_40);
          {
            hlds__hlds_llds__NeedAcrossCall_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedAcrossCall_41, 0) = ((MR_Box) (hlds__hlds_llds__ForwardVars_38));
            MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedAcrossCall_41, 1) = ((MR_Box) (hlds__hlds_llds__CallResumeVars_39));
            MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedAcrossCall_41, 2) = ((MR_Box) (hlds__hlds_llds__CallNondetLiveVars_40));
          }
          hlds__hlds_llds__MaybeNeed_33 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) hlds__hlds_llds__NeedAcrossCall_41);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__hlds_llds__NeedInResume0_42 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__MaybeNeed0_16), (MR_Integer) 2);
          MR_Word hlds__hlds_llds__OnStack_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedInResume0_42, (MR_Integer) 0)));
          MR_Word hlds__hlds_llds__ResumeVars0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedInResume0_42, (MR_Integer) 1)));
          MR_Word hlds__hlds_llds__NondetLiveVars0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedInResume0_42, (MR_Integer) 2)));
          MR_Word hlds__hlds_llds__ResumeVars_46;
          MR_Word hlds__hlds_llds__NondetLiveVars_47;
          MR_Word hlds__hlds_llds__NeedInResume_48;

          parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__ResumeVars0_44, &hlds__hlds_llds__ResumeVars_46);
          parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__NondetLiveVars0_45, &hlds__hlds_llds__NondetLiveVars_47);
          {
            hlds__hlds_llds__NeedInResume_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedInResume_48, 0) = ((MR_Box) (hlds__hlds_llds__OnStack_43));
            MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedInResume_48, 1) = ((MR_Box) (hlds__hlds_llds__ResumeVars_46));
            MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedInResume_48, 2) = ((MR_Box) (hlds__hlds_llds__NondetLiveVars_47));
          }
          hlds__hlds_llds__MaybeNeed_33 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) hlds__hlds_llds__NeedInResume_48);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word hlds__hlds_llds__NeedInParConj0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__MaybeNeed0_16, (MR_Integer) 0)));
          MR_Word hlds__hlds_llds__ParConjVars0_50 = (MR_Word) hlds__hlds_llds__NeedInParConj0_49;
          MR_Word hlds__hlds_llds__ParConjVars_51;
          MR_Word hlds__hlds_llds__NeedInParConj_52;

          parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__ParConjVars0_50, &hlds__hlds_llds__ParConjVars_51);
          hlds__hlds_llds__NeedInParConj_52 = (MR_Word) hlds__hlds_llds__ParConjVars_51;
          {
            hlds__hlds_llds__MaybeNeed_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__MaybeNeed_33, 0) = ((MR_Box) (hlds__hlds_llds__NeedInParConj_52));
          }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_llds__Details_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_llds__PreBirths_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_llds__PostBirths_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_llds__PreDeaths_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_llds__PostDeaths_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_llds__MaybeFollowVars_21));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_llds__StoreMap_28));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_llds__ResumePoint_29));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_llds__MaybeNeed_33));
    }
  }
}

static void MR_CALL 
hlds__hlds_llds__rename_vars_in_var_locn_list_4_p_0(
  MR_Word hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__HeadVar__2_2,
  MR_Word hlds__hlds_llds__HeadVar__3_3,
  MR_Word * hlds__hlds_llds__HeadVar__4_4)
{
  if ((hlds__hlds_llds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *hlds__hlds_llds__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word hlds__hlds_llds__Var0_9;
    MR_Word hlds__hlds_llds__Locn_10;
    MR_Word hlds__hlds_llds__VarLocns0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word hlds__hlds_llds__Var_12;
    MR_Word hlds__hlds_llds__VarLocns_13;
    MR_Word hlds__hlds_llds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word hlds__hlds_llds__Var_15;

    hlds__hlds_llds__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_14, (MR_Integer) 0)));
    hlds__hlds_llds__Locn_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_14, (MR_Integer) 1)));
    parse_tree__prog_rename__rename_var_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__HeadVar__2_2, hlds__hlds_llds__Var0_9, &hlds__hlds_llds__Var_12);
    {
      hlds__hlds_llds__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_15, 0) = ((MR_Box) (hlds__hlds_llds__Var_12));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_15, 1) = ((MR_Box) (hlds__hlds_llds__Locn_10));
    }
    hlds__hlds_llds__rename_vars_in_var_locn_list_4_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__HeadVar__2_2, hlds__hlds_llds__VarLocns0_11, &hlds__hlds_llds__VarLocns_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__hlds_llds__HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_llds__Var_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_llds__VarLocns_13));
    }
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_resume_vars_and_loc_3_p_0(
  MR_Word hlds__hlds_llds__Resume_4,
  MR_Word * hlds__hlds_llds__Vars_5,
  MR_Word * hlds__hlds_llds__Locs_6)
{
  if ((hlds__hlds_llds__Resume_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    {
      mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_resume_vars_and_loc\'/3", (MR_String) "no resume point");
      return;
    }
  }
  else
  {
    *hlds__hlds_llds__Vars_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Resume_4, (MR_Integer) 0)));
    *hlds__hlds_llds__Locs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Resume_4, (MR_Integer) 1)));
  }
}

void MR_CALL 
hlds__hlds_llds__goal_set_resume_point_3_p_0(
  MR_Word hlds__hlds_llds__ResumePoint_4,
  MR_Word hlds__hlds_llds__HeadVar__2_2,
  MR_Word * hlds__hlds_llds__HeadVar__3_3)
{
  {
    MR_Word hlds__hlds_llds__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word hlds__hlds_llds__GoalInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word hlds__hlds_llds__GoalInfo_7;
    MR_Word hlds__hlds_llds__CodeGenInfo0_12;
    MR_Word hlds__hlds_llds__LLDSInfo0_13;
    MR_Word hlds__hlds_llds__LLDSInfo_14;
    MR_Word hlds__hlds_llds__CodeGenInfo_15;
    MR_Word hlds__hlds_llds__Var_17;
    MR_Word hlds__hlds_llds__Var_18;
    MR_Word hlds__hlds_llds__Var_19;
    MR_Word hlds__hlds_llds__Var_20;
    MR_Word hlds__hlds_llds__Var_21;
    MR_Word hlds__hlds_llds__Var_22;
    MR_Word hlds__hlds_llds__Var_24;
    MR_Word hlds__hlds_llds__Var_23;

    hlds__hlds_llds__CodeGenInfo0_12 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo0_6);
    hlds__hlds_llds__LLDSInfo0_13 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_12);
    hlds__hlds_llds__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 0)));
    hlds__hlds_llds__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 1)));
    hlds__hlds_llds__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 2)));
    hlds__hlds_llds__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 3)));
    hlds__hlds_llds__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 4)));
    hlds__hlds_llds__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 5)));
    hlds__hlds_llds__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 6)));
    hlds__hlds_llds__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 7)));
    {
      hlds__hlds_llds__LLDSInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 0) = ((MR_Box) (hlds__hlds_llds__Var_17));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 1) = ((MR_Box) (hlds__hlds_llds__Var_18));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 2) = ((MR_Box) (hlds__hlds_llds__Var_19));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 3) = ((MR_Box) (hlds__hlds_llds__Var_20));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 4) = ((MR_Box) (hlds__hlds_llds__Var_21));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 5) = ((MR_Box) (hlds__hlds_llds__Var_22));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 6) = ((MR_Box) (hlds__hlds_llds__ResumePoint_4));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 7) = ((MR_Box) (hlds__hlds_llds__Var_24));
    }
    {
      hlds__hlds_llds__CodeGenInfo_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_15, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_14));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_15, hlds__hlds_llds__GoalInfo0_6, &hlds__hlds_llds__GoalInfo_7);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_llds__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_llds__GoalExpr_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_llds__GoalInfo_7));
    }
  }
}

void MR_CALL 
hlds__hlds_llds__goal_set_follow_vars_3_p_0(
  MR_Word hlds__hlds_llds__FollowVars_4,
  MR_Word hlds__hlds_llds__HeadVar__2_2,
  MR_Word * hlds__hlds_llds__HeadVar__3_3)
{
  {
    MR_Word hlds__hlds_llds__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word hlds__hlds_llds__GoalInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word hlds__hlds_llds__GoalInfo_7;
    MR_Word hlds__hlds_llds__CodeGenInfo0_12;
    MR_Word hlds__hlds_llds__LLDSInfo0_13;
    MR_Word hlds__hlds_llds__LLDSInfo_14;
    MR_Word hlds__hlds_llds__CodeGenInfo_15;
    MR_Word hlds__hlds_llds__Var_17;
    MR_Word hlds__hlds_llds__Var_18;
    MR_Word hlds__hlds_llds__Var_19;
    MR_Word hlds__hlds_llds__Var_20;
    MR_Word hlds__hlds_llds__Var_22;
    MR_Word hlds__hlds_llds__Var_23;
    MR_Word hlds__hlds_llds__Var_24;
    MR_Word hlds__hlds_llds__Var_21;

    hlds__hlds_llds__CodeGenInfo0_12 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo0_6);
    hlds__hlds_llds__LLDSInfo0_13 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_12);
    hlds__hlds_llds__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 0)));
    hlds__hlds_llds__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 1)));
    hlds__hlds_llds__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 2)));
    hlds__hlds_llds__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 3)));
    hlds__hlds_llds__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 4)));
    hlds__hlds_llds__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 5)));
    hlds__hlds_llds__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 6)));
    hlds__hlds_llds__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 7)));
    {
      hlds__hlds_llds__LLDSInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 0) = ((MR_Box) (hlds__hlds_llds__Var_17));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 1) = ((MR_Box) (hlds__hlds_llds__Var_18));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 2) = ((MR_Box) (hlds__hlds_llds__Var_19));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 3) = ((MR_Box) (hlds__hlds_llds__Var_20));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 4) = ((MR_Box) (hlds__hlds_llds__FollowVars_4));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 5) = ((MR_Box) (hlds__hlds_llds__Var_22));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 6) = ((MR_Box) (hlds__hlds_llds__Var_23));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 7) = ((MR_Box) (hlds__hlds_llds__Var_24));
    }
    {
      hlds__hlds_llds__CodeGenInfo_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_15, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_14));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_15, hlds__hlds_llds__GoalInfo0_6, &hlds__hlds_llds__GoalInfo_7);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__hlds_llds__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_llds__GoalExpr_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_llds__GoalInfo_7));
    }
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_set_need_in_par_conj_3_p_0(
  MR_Word hlds__hlds_llds__NeedInParConj_4,
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
{
  {
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
    MR_Word hlds__hlds_llds__LLDSInfo_8;
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
    MR_Word hlds__hlds_llds__Var_12;
    MR_Word hlds__hlds_llds__Var_14;
    MR_Word hlds__hlds_llds__Var_15;
    MR_Word hlds__hlds_llds__Var_16;
    MR_Word hlds__hlds_llds__Var_17;
    MR_Word hlds__hlds_llds__Var_18;
    MR_Word hlds__hlds_llds__Var_19;
    MR_Word hlds__hlds_llds__Var_20;
    MR_Word hlds__hlds_llds__Var_21;

    hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    {
      hlds__hlds_llds__Var_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__hlds_llds__Var_12, 0) = ((MR_Box) (hlds__hlds_llds__NeedInParConj_4));
    }
    hlds__hlds_llds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
    hlds__hlds_llds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
    hlds__hlds_llds__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
    hlds__hlds_llds__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
    hlds__hlds_llds__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
    hlds__hlds_llds__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
    hlds__hlds_llds__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
    hlds__hlds_llds__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
    {
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__Var_14));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__Var_15));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__Var_16));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__Var_17));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__Var_18));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__Var_19));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__Var_20));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__Var_12));
    }
    {
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_set_need_in_resume_3_p_0(
  MR_Word hlds__hlds_llds__NeedInResume_4,
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
{
  {
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
    MR_Word hlds__hlds_llds__LLDSInfo_8;
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
    MR_Word hlds__hlds_llds__Var_12;
    MR_Word hlds__hlds_llds__Var_14;
    MR_Word hlds__hlds_llds__Var_15;
    MR_Word hlds__hlds_llds__Var_16;
    MR_Word hlds__hlds_llds__Var_17;
    MR_Word hlds__hlds_llds__Var_18;
    MR_Word hlds__hlds_llds__Var_19;
    MR_Word hlds__hlds_llds__Var_20;
    MR_Word hlds__hlds_llds__Var_21;

    hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    hlds__hlds_llds__Var_12 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) hlds__hlds_llds__NeedInResume_4);
    hlds__hlds_llds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
    hlds__hlds_llds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
    hlds__hlds_llds__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
    hlds__hlds_llds__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
    hlds__hlds_llds__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
    hlds__hlds_llds__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
    hlds__hlds_llds__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
    hlds__hlds_llds__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
    {
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__Var_14));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__Var_15));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__Var_16));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__Var_17));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__Var_18));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__Var_19));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__Var_20));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__Var_12));
    }
    {
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_set_need_across_call_3_p_0(
  MR_Word hlds__hlds_llds__NeedAcrossCall_4,
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
{
  {
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
    MR_Word hlds__hlds_llds__LLDSInfo_8;
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
    MR_Word hlds__hlds_llds__Var_12;
    MR_Word hlds__hlds_llds__Var_14;
    MR_Word hlds__hlds_llds__Var_15;
    MR_Word hlds__hlds_llds__Var_16;
    MR_Word hlds__hlds_llds__Var_17;
    MR_Word hlds__hlds_llds__Var_18;
    MR_Word hlds__hlds_llds__Var_19;
    MR_Word hlds__hlds_llds__Var_20;
    MR_Word hlds__hlds_llds__Var_21;

    hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    hlds__hlds_llds__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) hlds__hlds_llds__NeedAcrossCall_4);
    hlds__hlds_llds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
    hlds__hlds_llds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
    hlds__hlds_llds__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
    hlds__hlds_llds__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
    hlds__hlds_llds__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
    hlds__hlds_llds__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
    hlds__hlds_llds__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
    hlds__hlds_llds__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
    {
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__Var_14));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__Var_15));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__Var_16));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__Var_17));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__Var_18));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__Var_19));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__Var_20));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__Var_12));
    }
    {
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_set_resume_point_3_p_0(
  MR_Word hlds__hlds_llds__ResumePoint_4,
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
{
  {
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
    MR_Word hlds__hlds_llds__LLDSInfo_8;
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
    MR_Word hlds__hlds_llds__Var_13;
    MR_Word hlds__hlds_llds__Var_14;
    MR_Word hlds__hlds_llds__Var_15;
    MR_Word hlds__hlds_llds__Var_16;
    MR_Word hlds__hlds_llds__Var_17;
    MR_Word hlds__hlds_llds__Var_18;
    MR_Word hlds__hlds_llds__Var_20;
    MR_Word hlds__hlds_llds__Var_19;

    hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    hlds__hlds_llds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
    hlds__hlds_llds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
    hlds__hlds_llds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
    hlds__hlds_llds__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
    hlds__hlds_llds__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
    hlds__hlds_llds__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
    hlds__hlds_llds__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
    hlds__hlds_llds__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
    {
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__Var_13));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__Var_14));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__Var_15));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__Var_16));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__Var_17));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__Var_18));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__ResumePoint_4));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__Var_20));
    }
    {
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_set_store_map_3_p_0(
  MR_Word hlds__hlds_llds__StoreMap_4,
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
{
  {
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
    MR_Word hlds__hlds_llds__LLDSInfo_8;
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
    MR_Word hlds__hlds_llds__Var_13;
    MR_Word hlds__hlds_llds__Var_14;
    MR_Word hlds__hlds_llds__Var_15;
    MR_Word hlds__hlds_llds__Var_16;
    MR_Word hlds__hlds_llds__Var_17;
    MR_Word hlds__hlds_llds__Var_19;
    MR_Word hlds__hlds_llds__Var_20;
    MR_Word hlds__hlds_llds__Var_18;

    hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    hlds__hlds_llds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
    hlds__hlds_llds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
    hlds__hlds_llds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
    hlds__hlds_llds__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
    hlds__hlds_llds__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
    hlds__hlds_llds__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
    hlds__hlds_llds__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
    hlds__hlds_llds__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
    {
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__Var_13));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__Var_14));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__Var_15));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__Var_16));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__Var_17));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__StoreMap_4));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__Var_19));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__Var_20));
    }
    {
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_set_follow_vars_3_p_0(
  MR_Word hlds__hlds_llds__FollowVars_4,
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
{
  {
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
    MR_Word hlds__hlds_llds__LLDSInfo_8;
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
    MR_Word hlds__hlds_llds__Var_13;
    MR_Word hlds__hlds_llds__Var_14;
    MR_Word hlds__hlds_llds__Var_15;
    MR_Word hlds__hlds_llds__Var_16;
    MR_Word hlds__hlds_llds__Var_18;
    MR_Word hlds__hlds_llds__Var_19;
    MR_Word hlds__hlds_llds__Var_20;
    MR_Word hlds__hlds_llds__Var_17;

    hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    hlds__hlds_llds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
    hlds__hlds_llds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
    hlds__hlds_llds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
    hlds__hlds_llds__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
    hlds__hlds_llds__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
    hlds__hlds_llds__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
    hlds__hlds_llds__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
    hlds__hlds_llds__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
    {
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__Var_13));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__Var_14));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__Var_15));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__Var_16));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__FollowVars_4));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__Var_18));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__Var_19));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__Var_20));
    }
    {
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(
  MR_Word hlds__hlds_llds__PostDeaths_4,
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
{
  {
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
    MR_Word hlds__hlds_llds__LLDSInfo_8;
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
    MR_Word hlds__hlds_llds__Var_13;
    MR_Word hlds__hlds_llds__Var_14;
    MR_Word hlds__hlds_llds__Var_15;
    MR_Word hlds__hlds_llds__Var_17;
    MR_Word hlds__hlds_llds__Var_18;
    MR_Word hlds__hlds_llds__Var_19;
    MR_Word hlds__hlds_llds__Var_20;
    MR_Word hlds__hlds_llds__Var_16;

    hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    hlds__hlds_llds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
    hlds__hlds_llds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
    hlds__hlds_llds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
    hlds__hlds_llds__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
    hlds__hlds_llds__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
    hlds__hlds_llds__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
    hlds__hlds_llds__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
    hlds__hlds_llds__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
    {
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__Var_13));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__Var_14));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__Var_15));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__PostDeaths_4));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__Var_17));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__Var_18));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__Var_19));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__Var_20));
    }
    {
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_set_pre_deaths_3_p_0(
  MR_Word hlds__hlds_llds__PreDeaths_4,
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
{
  {
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
    MR_Word hlds__hlds_llds__LLDSInfo_8;
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
    MR_Word hlds__hlds_llds__Var_13;
    MR_Word hlds__hlds_llds__Var_14;
    MR_Word hlds__hlds_llds__Var_16;
    MR_Word hlds__hlds_llds__Var_17;
    MR_Word hlds__hlds_llds__Var_18;
    MR_Word hlds__hlds_llds__Var_19;
    MR_Word hlds__hlds_llds__Var_20;
    MR_Word hlds__hlds_llds__Var_15;

    hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    hlds__hlds_llds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
    hlds__hlds_llds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
    hlds__hlds_llds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
    hlds__hlds_llds__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
    hlds__hlds_llds__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
    hlds__hlds_llds__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
    hlds__hlds_llds__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
    hlds__hlds_llds__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
    {
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__Var_13));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__Var_14));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__PreDeaths_4));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__Var_16));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__Var_17));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__Var_18));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__Var_19));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__Var_20));
    }
    {
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_set_post_births_3_p_0(
  MR_Word hlds__hlds_llds__PostBirths_4,
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
{
  {
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
    MR_Word hlds__hlds_llds__LLDSInfo_8;
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
    MR_Word hlds__hlds_llds__Var_13;
    MR_Word hlds__hlds_llds__Var_15;
    MR_Word hlds__hlds_llds__Var_16;
    MR_Word hlds__hlds_llds__Var_17;
    MR_Word hlds__hlds_llds__Var_18;
    MR_Word hlds__hlds_llds__Var_19;
    MR_Word hlds__hlds_llds__Var_20;
    MR_Word hlds__hlds_llds__Var_14;

    hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    hlds__hlds_llds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
    hlds__hlds_llds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
    hlds__hlds_llds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
    hlds__hlds_llds__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
    hlds__hlds_llds__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
    hlds__hlds_llds__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
    hlds__hlds_llds__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
    hlds__hlds_llds__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
    {
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__Var_13));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__PostBirths_4));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__Var_15));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__Var_16));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__Var_17));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__Var_18));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__Var_19));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__Var_20));
    }
    {
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_set_pre_births_3_p_0(
  MR_Word hlds__hlds_llds__PreBirths_4,
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
{
  {
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
    MR_Word hlds__hlds_llds__LLDSInfo_8;
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
    MR_Word hlds__hlds_llds__Var_14;
    MR_Word hlds__hlds_llds__Var_15;
    MR_Word hlds__hlds_llds__Var_16;
    MR_Word hlds__hlds_llds__Var_17;
    MR_Word hlds__hlds_llds__Var_18;
    MR_Word hlds__hlds_llds__Var_19;
    MR_Word hlds__hlds_llds__Var_20;
    MR_Word hlds__hlds_llds__Var_13;

    hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    hlds__hlds_llds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
    hlds__hlds_llds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
    hlds__hlds_llds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
    hlds__hlds_llds__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
    hlds__hlds_llds__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
    hlds__hlds_llds__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
    hlds__hlds_llds__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
    hlds__hlds_llds__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
    {
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__PreBirths_4));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__Var_14));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__Var_15));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__Var_16));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__Var_17));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__Var_18));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__Var_19));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__Var_20));
    }
    {
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_initialize_liveness_info_7_p_0(
  MR_Word hlds__hlds_llds__PreBirths_8,
  MR_Word hlds__hlds_llds__PostBirths_9,
  MR_Word hlds__hlds_llds__PreDeaths_10,
  MR_Word hlds__hlds_llds__PostDeaths_11,
  MR_Word hlds__hlds_llds__ResumePoint_12,
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_17,
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_18)
{
  {
    MR_Word hlds__hlds_llds__CodeGenInfo0_14;
    MR_Word hlds__hlds_llds__CodeGenInfo_16;
    MR_Word hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19;
    MR_Word hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24;
    MR_Word hlds__hlds_llds__Var_30;
    MR_Word hlds__hlds_llds__Var_31;
    MR_Word hlds__hlds_llds__Var_33;
    MR_Word hlds__hlds_llds__Var_34;
    MR_Word hlds__hlds_llds__Var_38;
    MR_Word hlds__hlds_llds__Var_39;
    MR_Word hlds__hlds_llds__Var_41;
    MR_Word hlds__hlds_llds__Var_42;
    MR_Word hlds__hlds_llds__Var_43;
    MR_Word hlds__hlds_llds__Var_46;
    MR_Word hlds__hlds_llds__Var_47;
    MR_Word hlds__hlds_llds__Var_49;
    MR_Word hlds__hlds_llds__Var_50;
    MR_Word hlds__hlds_llds__Var_51;
    MR_Word hlds__hlds_llds__Var_52;
    MR_Word hlds__hlds_llds__Var_54;
    MR_Word hlds__hlds_llds__Var_55;
    MR_Word hlds__hlds_llds__Var_57;
    MR_Word hlds__hlds_llds__Var_26;
    MR_Word hlds__hlds_llds__Var_27;
    MR_Word hlds__hlds_llds__Var_28;
    MR_Word hlds__hlds_llds__Var_29;
    MR_Word hlds__hlds_llds__Var_32;

    hlds__hlds_llds__CodeGenInfo0_14 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_17);
    hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_14);
    hlds__hlds_llds__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 0)));
    hlds__hlds_llds__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 1)));
    hlds__hlds_llds__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 2)));
    hlds__hlds_llds__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 3)));
    hlds__hlds_llds__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 4)));
    hlds__hlds_llds__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 5)));
    hlds__hlds_llds__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 6)));
    hlds__hlds_llds__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 7)));
    hlds__hlds_llds__Var_34 = hlds__hlds_llds__PreBirths_8;
    hlds__hlds_llds__Var_38 = hlds__hlds_llds__Var_30;
    hlds__hlds_llds__Var_39 = hlds__hlds_llds__Var_31;
    hlds__hlds_llds__Var_41 = hlds__hlds_llds__Var_33;
    hlds__hlds_llds__Var_42 = hlds__hlds_llds__Var_34;
    hlds__hlds_llds__Var_43 = hlds__hlds_llds__PostBirths_9;
    hlds__hlds_llds__Var_46 = hlds__hlds_llds__Var_38;
    hlds__hlds_llds__Var_47 = hlds__hlds_llds__Var_39;
    hlds__hlds_llds__Var_49 = hlds__hlds_llds__Var_41;
    hlds__hlds_llds__Var_50 = hlds__hlds_llds__Var_42;
    hlds__hlds_llds__Var_51 = hlds__hlds_llds__Var_43;
    hlds__hlds_llds__Var_52 = hlds__hlds_llds__PreDeaths_10;
    hlds__hlds_llds__Var_54 = hlds__hlds_llds__Var_46;
    hlds__hlds_llds__Var_55 = hlds__hlds_llds__Var_47;
    hlds__hlds_llds__Var_57 = hlds__hlds_llds__Var_49;
    {
      hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24, 0) = ((MR_Box) (hlds__hlds_llds__Var_50));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24, 1) = ((MR_Box) (hlds__hlds_llds__Var_51));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24, 2) = ((MR_Box) (hlds__hlds_llds__Var_52));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24, 3) = ((MR_Box) (hlds__hlds_llds__PostDeaths_11));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24, 4) = ((MR_Box) (hlds__hlds_llds__Var_54));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24, 5) = ((MR_Box) (hlds__hlds_llds__Var_55));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24, 6) = ((MR_Box) (hlds__hlds_llds__ResumePoint_12));
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24, 7) = ((MR_Box) (hlds__hlds_llds__Var_57));
    }
    {
      hlds__hlds_llds__CodeGenInfo_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_16, 0) = ((MR_Box) (hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24));
    }
    hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_16, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_17, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_18);
  }
}

static MR_Word MR_CALL 
hlds__hlds_llds__get_details_1_f_0(
  MR_Word hlds__hlds_llds__HeadVar__1_1)
{
  {
    MR_Word hlds__hlds_llds__HeadVar__2_2;

    if ((hlds__hlds_llds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word hlds__hlds_llds__TypeCtorInfo_10_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
      MR_Word hlds__hlds_llds__Var_4;
      MR_Word hlds__hlds_llds__Var_5;
      MR_Word hlds__hlds_llds__Var_6;
      MR_Word hlds__hlds_llds__Var_7;
      MR_Word hlds__hlds_llds__Var_9;

      hlds__hlds_llds__Var_4 = parse_tree__set_of_var__init_0_f_0(hlds__hlds_llds__TypeCtorInfo_10_12);
      hlds__hlds_llds__Var_5 = parse_tree__set_of_var__init_0_f_0(hlds__hlds_llds__TypeCtorInfo_10_12);
      hlds__hlds_llds__Var_6 = parse_tree__set_of_var__init_0_f_0(hlds__hlds_llds__TypeCtorInfo_10_12);
      hlds__hlds_llds__Var_7 = parse_tree__set_of_var__init_0_f_0(hlds__hlds_llds__TypeCtorInfo_10_12);
      hlds__hlds_llds__Var_9 = mercury__map__init_0_f_0((MR_Word) &hlds__hlds_llds_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0);
      {
        hlds__hlds_llds__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, 0) = ((MR_Box) (hlds__hlds_llds__Var_4));
        MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, 1) = ((MR_Box) (hlds__hlds_llds__Var_5));
        MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, 2) = ((MR_Box) (hlds__hlds_llds__Var_6));
        MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, 3) = ((MR_Box) (hlds__hlds_llds__Var_7));
        MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, 5) = ((MR_Box) (hlds__hlds_llds__Var_9));
        MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
      hlds__hlds_llds__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
    return hlds__hlds_llds__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_par_conj_2_p_0(
  MR_Word hlds__hlds_llds__GoalInfo_3,
  MR_Word * hlds__hlds_llds__MaybeNeedInParConj_4)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
    MR_Word hlds__hlds_llds__MaybeNeed_6;
    MR_Word hlds__hlds_llds__NeedInParConj_7;
    MR_Word hlds__hlds_llds__Var_8;
    MR_Word hlds__hlds_llds__Var_9;
    MR_Word hlds__hlds_llds__Var_10;
    MR_Word hlds__hlds_llds__Var_11;
    MR_Word hlds__hlds_llds__Var_12;
    MR_Word hlds__hlds_llds__Var_13;
    MR_Word hlds__hlds_llds__Var_14;
    MR_Word hlds__hlds_llds__Var_15;

    hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__hlds_llds__succeeded)
    {
      hlds__hlds_llds__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
      hlds__hlds_llds__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_8, (MR_Integer) 0)));
      hlds__hlds_llds__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_8, (MR_Integer) 1)));
      hlds__hlds_llds__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_8, (MR_Integer) 2)));
      hlds__hlds_llds__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_8, (MR_Integer) 3)));
      hlds__hlds_llds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_8, (MR_Integer) 4)));
      hlds__hlds_llds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_8, (MR_Integer) 5)));
      hlds__hlds_llds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_8, (MR_Integer) 6)));
      hlds__hlds_llds__MaybeNeed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_8, (MR_Integer) 7)));
      hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed_6)) == (MR_mktag((MR_Integer) 3)));
      if (hlds__hlds_llds__succeeded)
      {
        hlds__hlds_llds__NeedInParConj_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__MaybeNeed_6, (MR_Integer) 0)));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *hlds__hlds_llds__MaybeNeedInParConj_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_llds__NeedInParConj_7));
        }
        hlds__hlds_llds__succeeded = MR_TRUE;
      }
    }
    return hlds__hlds_llds__succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_resume_2_p_0(
  MR_Word hlds__hlds_llds__GoalInfo_3,
  MR_Word * hlds__hlds_llds__MaybeNeedInResume_4)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
    MR_Word hlds__hlds_llds__MaybeNeed_6;
    MR_Word hlds__hlds_llds__NeedInResume_7;
    MR_Word hlds__hlds_llds__Var_8;
    MR_Word hlds__hlds_llds__Var_9;
    MR_Word hlds__hlds_llds__Var_10;
    MR_Word hlds__hlds_llds__Var_11;
    MR_Word hlds__hlds_llds__Var_12;
    MR_Word hlds__hlds_llds__Var_13;
    MR_Word hlds__hlds_llds__Var_14;
    MR_Word hlds__hlds_llds__Var_15;

    hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__hlds_llds__succeeded)
    {
      hlds__hlds_llds__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
      hlds__hlds_llds__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_8, (MR_Integer) 0)));
      hlds__hlds_llds__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_8, (MR_Integer) 1)));
      hlds__hlds_llds__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_8, (MR_Integer) 2)));
      hlds__hlds_llds__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_8, (MR_Integer) 3)));
      hlds__hlds_llds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_8, (MR_Integer) 4)));
      hlds__hlds_llds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_8, (MR_Integer) 5)));
      hlds__hlds_llds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_8, (MR_Integer) 6)));
      hlds__hlds_llds__MaybeNeed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_8, (MR_Integer) 7)));
      hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed_6)) == (MR_mktag((MR_Integer) 2)));
      if (hlds__hlds_llds__succeeded)
      {
        hlds__hlds_llds__NeedInResume_7 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__MaybeNeed_6), (MR_Integer) 2);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *hlds__hlds_llds__MaybeNeedInResume_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_llds__NeedInResume_7));
        }
        hlds__hlds_llds__succeeded = MR_TRUE;
      }
    }
    return hlds__hlds_llds__succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_p_0(
  MR_Word hlds__hlds_llds__GoalInfo_3,
  MR_Word * hlds__hlds_llds__MaybeNeedAcrossCall_4)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
    MR_Word hlds__hlds_llds__MaybeNeed_6;
    MR_Word hlds__hlds_llds__NeedAcrossCall_7;
    MR_Word hlds__hlds_llds__Var_8;
    MR_Word hlds__hlds_llds__Var_9;
    MR_Word hlds__hlds_llds__Var_10;
    MR_Word hlds__hlds_llds__Var_11;
    MR_Word hlds__hlds_llds__Var_12;
    MR_Word hlds__hlds_llds__Var_13;
    MR_Word hlds__hlds_llds__Var_14;
    MR_Word hlds__hlds_llds__Var_15;

    hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__hlds_llds__succeeded)
    {
      hlds__hlds_llds__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
      hlds__hlds_llds__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_8, (MR_Integer) 0)));
      hlds__hlds_llds__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_8, (MR_Integer) 1)));
      hlds__hlds_llds__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_8, (MR_Integer) 2)));
      hlds__hlds_llds__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_8, (MR_Integer) 3)));
      hlds__hlds_llds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_8, (MR_Integer) 4)));
      hlds__hlds_llds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_8, (MR_Integer) 5)));
      hlds__hlds_llds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_8, (MR_Integer) 6)));
      hlds__hlds_llds__MaybeNeed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_8, (MR_Integer) 7)));
      hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed_6)) == (MR_mktag((MR_Integer) 1)));
      if (hlds__hlds_llds__succeeded)
      {
        hlds__hlds_llds__NeedAcrossCall_7 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__MaybeNeed_6), (MR_Integer) 1);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *hlds__hlds_llds__MaybeNeedAcrossCall_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_llds__NeedAcrossCall_7));
        }
        hlds__hlds_llds__succeeded = MR_TRUE;
      }
    }
    return hlds__hlds_llds__succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_resume_point_2_p_0(
  MR_Word hlds__hlds_llds__GoalInfo_3,
  MR_Word * hlds__hlds_llds__ResumePoint_4)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
    MR_Word hlds__hlds_llds__Var_6;
    MR_Word hlds__hlds_llds__Var_7;
    MR_Word hlds__hlds_llds__Var_8;
    MR_Word hlds__hlds_llds__Var_9;
    MR_Word hlds__hlds_llds__Var_10;
    MR_Word hlds__hlds_llds__Var_11;
    MR_Word hlds__hlds_llds__Var_12;
    MR_Word hlds__hlds_llds__Var_13;

    hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__hlds_llds__succeeded)
    {
      hlds__hlds_llds__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
      hlds__hlds_llds__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 0)));
      hlds__hlds_llds__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 1)));
      hlds__hlds_llds__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 2)));
      hlds__hlds_llds__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 3)));
      hlds__hlds_llds__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 4)));
      hlds__hlds_llds__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 5)));
      *hlds__hlds_llds__ResumePoint_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 6)));
      hlds__hlds_llds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 7)));
      hlds__hlds_llds__succeeded = MR_TRUE;
    }
    return hlds__hlds_llds__succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_store_map_2_p_0(
  MR_Word hlds__hlds_llds__GoalInfo_3,
  MR_Word * hlds__hlds_llds__StoreMap_4)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
    MR_Word hlds__hlds_llds__Var_6;
    MR_Word hlds__hlds_llds__Var_7;
    MR_Word hlds__hlds_llds__Var_8;
    MR_Word hlds__hlds_llds__Var_9;
    MR_Word hlds__hlds_llds__Var_10;
    MR_Word hlds__hlds_llds__Var_11;
    MR_Word hlds__hlds_llds__Var_12;
    MR_Word hlds__hlds_llds__Var_13;

    hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__hlds_llds__succeeded)
    {
      hlds__hlds_llds__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
      hlds__hlds_llds__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 0)));
      hlds__hlds_llds__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 1)));
      hlds__hlds_llds__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 2)));
      hlds__hlds_llds__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 3)));
      hlds__hlds_llds__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 4)));
      *hlds__hlds_llds__StoreMap_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 5)));
      hlds__hlds_llds__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 6)));
      hlds__hlds_llds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 7)));
      hlds__hlds_llds__succeeded = MR_TRUE;
    }
    return hlds__hlds_llds__succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_follow_vars_2_p_0(
  MR_Word hlds__hlds_llds__GoalInfo_3,
  MR_Word * hlds__hlds_llds__FollowVars_4)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
    MR_Word hlds__hlds_llds__Var_6;
    MR_Word hlds__hlds_llds__Var_7;
    MR_Word hlds__hlds_llds__Var_8;
    MR_Word hlds__hlds_llds__Var_9;
    MR_Word hlds__hlds_llds__Var_10;
    MR_Word hlds__hlds_llds__Var_11;
    MR_Word hlds__hlds_llds__Var_12;
    MR_Word hlds__hlds_llds__Var_13;

    hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__hlds_llds__succeeded)
    {
      hlds__hlds_llds__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
      hlds__hlds_llds__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 0)));
      hlds__hlds_llds__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 1)));
      hlds__hlds_llds__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 2)));
      hlds__hlds_llds__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 3)));
      *hlds__hlds_llds__FollowVars_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 4)));
      hlds__hlds_llds__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 5)));
      hlds__hlds_llds__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 6)));
      hlds__hlds_llds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 7)));
      hlds__hlds_llds__succeeded = MR_TRUE;
    }
    return hlds__hlds_llds__succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_p_0(
  MR_Word hlds__hlds_llds__GoalInfo_3,
  MR_Word * hlds__hlds_llds__PostDeaths_4)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
    MR_Word hlds__hlds_llds__Var_6;
    MR_Word hlds__hlds_llds__Var_7;
    MR_Word hlds__hlds_llds__Var_8;
    MR_Word hlds__hlds_llds__Var_9;
    MR_Word hlds__hlds_llds__Var_10;
    MR_Word hlds__hlds_llds__Var_11;
    MR_Word hlds__hlds_llds__Var_12;
    MR_Word hlds__hlds_llds__Var_13;

    hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__hlds_llds__succeeded)
    {
      hlds__hlds_llds__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
      hlds__hlds_llds__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 0)));
      hlds__hlds_llds__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 1)));
      hlds__hlds_llds__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 2)));
      *hlds__hlds_llds__PostDeaths_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 3)));
      hlds__hlds_llds__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 4)));
      hlds__hlds_llds__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 5)));
      hlds__hlds_llds__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 6)));
      hlds__hlds_llds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 7)));
      hlds__hlds_llds__succeeded = MR_TRUE;
    }
    return hlds__hlds_llds__succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_p_0(
  MR_Word hlds__hlds_llds__GoalInfo_3,
  MR_Word * hlds__hlds_llds__PreDeaths_4)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
    MR_Word hlds__hlds_llds__Var_6;
    MR_Word hlds__hlds_llds__Var_7;
    MR_Word hlds__hlds_llds__Var_8;
    MR_Word hlds__hlds_llds__Var_9;
    MR_Word hlds__hlds_llds__Var_10;
    MR_Word hlds__hlds_llds__Var_11;
    MR_Word hlds__hlds_llds__Var_12;
    MR_Word hlds__hlds_llds__Var_13;

    hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__hlds_llds__succeeded)
    {
      hlds__hlds_llds__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
      hlds__hlds_llds__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 0)));
      hlds__hlds_llds__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 1)));
      *hlds__hlds_llds__PreDeaths_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 2)));
      hlds__hlds_llds__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 3)));
      hlds__hlds_llds__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 4)));
      hlds__hlds_llds__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 5)));
      hlds__hlds_llds__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 6)));
      hlds__hlds_llds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 7)));
      hlds__hlds_llds__succeeded = MR_TRUE;
    }
    return hlds__hlds_llds__succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_post_births_2_p_0(
  MR_Word hlds__hlds_llds__GoalInfo_3,
  MR_Word * hlds__hlds_llds__PostBirths_4)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
    MR_Word hlds__hlds_llds__Var_6;
    MR_Word hlds__hlds_llds__Var_7;
    MR_Word hlds__hlds_llds__Var_8;
    MR_Word hlds__hlds_llds__Var_9;
    MR_Word hlds__hlds_llds__Var_10;
    MR_Word hlds__hlds_llds__Var_11;
    MR_Word hlds__hlds_llds__Var_12;
    MR_Word hlds__hlds_llds__Var_13;

    hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__hlds_llds__succeeded)
    {
      hlds__hlds_llds__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
      hlds__hlds_llds__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 0)));
      *hlds__hlds_llds__PostBirths_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 1)));
      hlds__hlds_llds__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 2)));
      hlds__hlds_llds__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 3)));
      hlds__hlds_llds__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 4)));
      hlds__hlds_llds__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 5)));
      hlds__hlds_llds__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 6)));
      hlds__hlds_llds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 7)));
      hlds__hlds_llds__succeeded = MR_TRUE;
    }
    return hlds__hlds_llds__succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_pre_births_2_p_0(
  MR_Word hlds__hlds_llds__GoalInfo_3,
  MR_Word * hlds__hlds_llds__PreBirths_4)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
    MR_Word hlds__hlds_llds__Var_6;
    MR_Word hlds__hlds_llds__Var_7;
    MR_Word hlds__hlds_llds__Var_8;
    MR_Word hlds__hlds_llds__Var_9;
    MR_Word hlds__hlds_llds__Var_10;
    MR_Word hlds__hlds_llds__Var_11;
    MR_Word hlds__hlds_llds__Var_12;
    MR_Word hlds__hlds_llds__Var_13;

    hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__hlds_llds__succeeded)
    {
      hlds__hlds_llds__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
      *hlds__hlds_llds__PreBirths_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 0)));
      hlds__hlds_llds__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 1)));
      hlds__hlds_llds__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 2)));
      hlds__hlds_llds__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 3)));
      hlds__hlds_llds__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 4)));
      hlds__hlds_llds__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 5)));
      hlds__hlds_llds__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 6)));
      hlds__hlds_llds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_6, (MR_Integer) 7)));
      hlds__hlds_llds__succeeded = MR_TRUE;
    }
    return hlds__hlds_llds__succeeded;
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_p_0(
  MR_Word hlds__hlds_llds__GoalInfo_3,
  MR_Word * hlds__hlds_llds__MaybeNeedInParConj_4)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
    MR_Word hlds__hlds_llds__MaybeNeed_6;
    MR_Word hlds__hlds_llds__Var_10;
    MR_Word hlds__hlds_llds__Var_14;
    MR_Word hlds__hlds_llds__Var_15;
    MR_Word hlds__hlds_llds__Var_16;
    MR_Word hlds__hlds_llds__Var_17;
    MR_Word hlds__hlds_llds__Var_18;
    MR_Word hlds__hlds_llds__Var_19;
    MR_Word hlds__hlds_llds__Var_20;

    hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__hlds_llds__succeeded)
    {
      hlds__hlds_llds__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
      hlds__hlds_llds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_10, (MR_Integer) 0)));
      hlds__hlds_llds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_10, (MR_Integer) 1)));
      hlds__hlds_llds__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_10, (MR_Integer) 2)));
      hlds__hlds_llds__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_10, (MR_Integer) 3)));
      hlds__hlds_llds__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_10, (MR_Integer) 4)));
      hlds__hlds_llds__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_10, (MR_Integer) 5)));
      hlds__hlds_llds__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_10, (MR_Integer) 6)));
      hlds__hlds_llds__MaybeNeed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_10, (MR_Integer) 7)));
      hlds__hlds_llds__succeeded = MR_TRUE;
    }
    if (hlds__hlds_llds__succeeded)
      switch (MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *hlds__hlds_llds__MaybeNeedInParConj_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *hlds__hlds_llds__MaybeNeedInParConj_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 3:
          {
            MR_Word hlds__hlds_llds__NeedInParConj_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__MaybeNeed_6, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *hlds__hlds_llds__MaybeNeedInParConj_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_llds__NeedInParConj_7));
            }
          }
          break;
      }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_maybe_need_in_par_conj\'/2", (MR_String) "no code_gen_info");
        return;
      }
    }
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_p_0(
  MR_Word hlds__hlds_llds__GoalInfo_3,
  MR_Word * hlds__hlds_llds__MaybeNeedInResume_4)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
    MR_Word hlds__hlds_llds__MaybeNeed_6;
    MR_Word hlds__hlds_llds__Var_10;
    MR_Word hlds__hlds_llds__Var_14;
    MR_Word hlds__hlds_llds__Var_15;
    MR_Word hlds__hlds_llds__Var_16;
    MR_Word hlds__hlds_llds__Var_17;
    MR_Word hlds__hlds_llds__Var_18;
    MR_Word hlds__hlds_llds__Var_19;
    MR_Word hlds__hlds_llds__Var_20;

    hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__hlds_llds__succeeded)
    {
      hlds__hlds_llds__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
      hlds__hlds_llds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_10, (MR_Integer) 0)));
      hlds__hlds_llds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_10, (MR_Integer) 1)));
      hlds__hlds_llds__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_10, (MR_Integer) 2)));
      hlds__hlds_llds__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_10, (MR_Integer) 3)));
      hlds__hlds_llds__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_10, (MR_Integer) 4)));
      hlds__hlds_llds__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_10, (MR_Integer) 5)));
      hlds__hlds_llds__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_10, (MR_Integer) 6)));
      hlds__hlds_llds__MaybeNeed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_10, (MR_Integer) 7)));
      hlds__hlds_llds__succeeded = MR_TRUE;
    }
    if (hlds__hlds_llds__succeeded)
      switch (MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *hlds__hlds_llds__MaybeNeedInResume_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 1:
          *hlds__hlds_llds__MaybeNeedInResume_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 2:
          {
            MR_Word hlds__hlds_llds__NeedInResume_7 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__MaybeNeed_6), (MR_Integer) 2);

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *hlds__hlds_llds__MaybeNeedInResume_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_llds__NeedInResume_7));
            }
          }
          break;
        case (MR_Integer) 3:
          *hlds__hlds_llds__MaybeNeedInResume_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
      }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_maybe_need_in_resume\'/2", (MR_String) "no code_gen_info");
        return;
      }
    }
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(
  MR_Word hlds__hlds_llds__GoalInfo_3,
  MR_Word * hlds__hlds_llds__MaybeNeedAtCall_4)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
    MR_Word hlds__hlds_llds__MaybeNeed_6;
    MR_Word hlds__hlds_llds__Var_10;
    MR_Word hlds__hlds_llds__Var_14;
    MR_Word hlds__hlds_llds__Var_15;
    MR_Word hlds__hlds_llds__Var_16;
    MR_Word hlds__hlds_llds__Var_17;
    MR_Word hlds__hlds_llds__Var_18;
    MR_Word hlds__hlds_llds__Var_19;
    MR_Word hlds__hlds_llds__Var_20;

    hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__hlds_llds__succeeded)
    {
      hlds__hlds_llds__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
      hlds__hlds_llds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_10, (MR_Integer) 0)));
      hlds__hlds_llds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_10, (MR_Integer) 1)));
      hlds__hlds_llds__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_10, (MR_Integer) 2)));
      hlds__hlds_llds__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_10, (MR_Integer) 3)));
      hlds__hlds_llds__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_10, (MR_Integer) 4)));
      hlds__hlds_llds__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_10, (MR_Integer) 5)));
      hlds__hlds_llds__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_10, (MR_Integer) 6)));
      hlds__hlds_llds__MaybeNeed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_10, (MR_Integer) 7)));
      hlds__hlds_llds__succeeded = MR_TRUE;
    }
    if (hlds__hlds_llds__succeeded)
      switch (MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *hlds__hlds_llds__MaybeNeedAtCall_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__hlds_llds__NeedAtCall_7 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__MaybeNeed_6), (MR_Integer) 1);

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *hlds__hlds_llds__MaybeNeedAtCall_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_llds__NeedAtCall_7));
            }
          }
          break;
        case (MR_Integer) 2:
          *hlds__hlds_llds__MaybeNeedAtCall_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 3:
          *hlds__hlds_llds__MaybeNeedAtCall_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
      }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_maybe_need_across_call\'/2", (MR_String) "no code_gen_info");
        return;
      }
    }
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_get_resume_point_2_p_0(
  MR_Word hlds__hlds_llds__GoalInfo_3,
  MR_Word * hlds__hlds_llds__ResumePoint_4)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
    MR_Word hlds__hlds_llds__ResumePointPrime_6;
    MR_Word hlds__hlds_llds__Var_7;
    MR_Word hlds__hlds_llds__Var_11;
    MR_Word hlds__hlds_llds__Var_12;
    MR_Word hlds__hlds_llds__Var_13;
    MR_Word hlds__hlds_llds__Var_14;
    MR_Word hlds__hlds_llds__Var_15;
    MR_Word hlds__hlds_llds__Var_16;
    MR_Word hlds__hlds_llds__Var_17;

    hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__hlds_llds__succeeded)
    {
      hlds__hlds_llds__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
      hlds__hlds_llds__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 0)));
      hlds__hlds_llds__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 1)));
      hlds__hlds_llds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 2)));
      hlds__hlds_llds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 3)));
      hlds__hlds_llds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 4)));
      hlds__hlds_llds__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 5)));
      hlds__hlds_llds__ResumePointPrime_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 6)));
      hlds__hlds_llds__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 7)));
      hlds__hlds_llds__succeeded = MR_TRUE;
    }
    if (hlds__hlds_llds__succeeded)
      *hlds__hlds_llds__ResumePoint_4 = hlds__hlds_llds__ResumePointPrime_6;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_resume_point\'/2", (MR_String) "no code_gen_info");
        return;
      }
    }
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_get_store_map_2_p_0(
  MR_Word hlds__hlds_llds__GoalInfo_3,
  MR_Word * hlds__hlds_llds__StoreMap_4)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
    MR_Word hlds__hlds_llds__StoreMapPrime_6;
    MR_Word hlds__hlds_llds__Var_7;
    MR_Word hlds__hlds_llds__Var_11;
    MR_Word hlds__hlds_llds__Var_12;
    MR_Word hlds__hlds_llds__Var_13;
    MR_Word hlds__hlds_llds__Var_14;
    MR_Word hlds__hlds_llds__Var_15;
    MR_Word hlds__hlds_llds__Var_16;
    MR_Word hlds__hlds_llds__Var_17;

    hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__hlds_llds__succeeded)
    {
      hlds__hlds_llds__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
      hlds__hlds_llds__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 0)));
      hlds__hlds_llds__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 1)));
      hlds__hlds_llds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 2)));
      hlds__hlds_llds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 3)));
      hlds__hlds_llds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 4)));
      hlds__hlds_llds__StoreMapPrime_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 5)));
      hlds__hlds_llds__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 6)));
      hlds__hlds_llds__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 7)));
      hlds__hlds_llds__succeeded = MR_TRUE;
    }
    if (hlds__hlds_llds__succeeded)
      *hlds__hlds_llds__StoreMap_4 = hlds__hlds_llds__StoreMapPrime_6;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_store_map\'/2", (MR_String) "no code_gen_info");
        return;
      }
    }
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_get_follow_vars_2_p_0(
  MR_Word hlds__hlds_llds__GoalInfo_3,
  MR_Word * hlds__hlds_llds__FollowVars_4)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
    MR_Word hlds__hlds_llds__FollowVarsPrime_6;
    MR_Word hlds__hlds_llds__Var_7;
    MR_Word hlds__hlds_llds__Var_11;
    MR_Word hlds__hlds_llds__Var_12;
    MR_Word hlds__hlds_llds__Var_13;
    MR_Word hlds__hlds_llds__Var_14;
    MR_Word hlds__hlds_llds__Var_15;
    MR_Word hlds__hlds_llds__Var_16;
    MR_Word hlds__hlds_llds__Var_17;

    hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__hlds_llds__succeeded)
    {
      hlds__hlds_llds__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
      hlds__hlds_llds__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 0)));
      hlds__hlds_llds__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 1)));
      hlds__hlds_llds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 2)));
      hlds__hlds_llds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 3)));
      hlds__hlds_llds__FollowVarsPrime_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 4)));
      hlds__hlds_llds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 5)));
      hlds__hlds_llds__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 6)));
      hlds__hlds_llds__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 7)));
      hlds__hlds_llds__succeeded = MR_TRUE;
    }
    if (hlds__hlds_llds__succeeded)
      *hlds__hlds_llds__FollowVars_4 = hlds__hlds_llds__FollowVarsPrime_6;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_follow_vars\'/2", (MR_String) "no code_gen_info");
        return;
      }
    }
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(
  MR_Word hlds__hlds_llds__GoalInfo_3,
  MR_Word * hlds__hlds_llds__PostDeaths_4)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
    MR_Word hlds__hlds_llds__PostDeathsPrime_6;
    MR_Word hlds__hlds_llds__Var_7;
    MR_Word hlds__hlds_llds__Var_11;
    MR_Word hlds__hlds_llds__Var_12;
    MR_Word hlds__hlds_llds__Var_13;
    MR_Word hlds__hlds_llds__Var_14;
    MR_Word hlds__hlds_llds__Var_15;
    MR_Word hlds__hlds_llds__Var_16;
    MR_Word hlds__hlds_llds__Var_17;

    hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__hlds_llds__succeeded)
    {
      hlds__hlds_llds__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
      hlds__hlds_llds__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 0)));
      hlds__hlds_llds__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 1)));
      hlds__hlds_llds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 2)));
      hlds__hlds_llds__PostDeathsPrime_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 3)));
      hlds__hlds_llds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 4)));
      hlds__hlds_llds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 5)));
      hlds__hlds_llds__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 6)));
      hlds__hlds_llds__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 7)));
      hlds__hlds_llds__succeeded = MR_TRUE;
    }
    if (hlds__hlds_llds__succeeded)
      *hlds__hlds_llds__PostDeaths_4 = hlds__hlds_llds__PostDeathsPrime_6;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_post_deaths\'/2", (MR_String) "no code_gen_info");
        return;
      }
    }
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(
  MR_Word hlds__hlds_llds__GoalInfo_3,
  MR_Word * hlds__hlds_llds__PreDeaths_4)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
    MR_Word hlds__hlds_llds__PreDeathsPrime_6;
    MR_Word hlds__hlds_llds__Var_7;
    MR_Word hlds__hlds_llds__Var_11;
    MR_Word hlds__hlds_llds__Var_12;
    MR_Word hlds__hlds_llds__Var_13;
    MR_Word hlds__hlds_llds__Var_14;
    MR_Word hlds__hlds_llds__Var_15;
    MR_Word hlds__hlds_llds__Var_16;
    MR_Word hlds__hlds_llds__Var_17;

    hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__hlds_llds__succeeded)
    {
      hlds__hlds_llds__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
      hlds__hlds_llds__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 0)));
      hlds__hlds_llds__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 1)));
      hlds__hlds_llds__PreDeathsPrime_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 2)));
      hlds__hlds_llds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 3)));
      hlds__hlds_llds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 4)));
      hlds__hlds_llds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 5)));
      hlds__hlds_llds__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 6)));
      hlds__hlds_llds__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 7)));
      hlds__hlds_llds__succeeded = MR_TRUE;
    }
    if (hlds__hlds_llds__succeeded)
      *hlds__hlds_llds__PreDeaths_4 = hlds__hlds_llds__PreDeathsPrime_6;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_pre_deaths\'/2", (MR_String) "no code_gen_info");
        return;
      }
    }
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_get_post_births_2_p_0(
  MR_Word hlds__hlds_llds__GoalInfo_3,
  MR_Word * hlds__hlds_llds__PostBirths_4)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
    MR_Word hlds__hlds_llds__PostBirthsPrime_6;
    MR_Word hlds__hlds_llds__Var_7;
    MR_Word hlds__hlds_llds__Var_11;
    MR_Word hlds__hlds_llds__Var_12;
    MR_Word hlds__hlds_llds__Var_13;
    MR_Word hlds__hlds_llds__Var_14;
    MR_Word hlds__hlds_llds__Var_15;
    MR_Word hlds__hlds_llds__Var_16;
    MR_Word hlds__hlds_llds__Var_17;

    hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__hlds_llds__succeeded)
    {
      hlds__hlds_llds__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
      hlds__hlds_llds__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 0)));
      hlds__hlds_llds__PostBirthsPrime_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 1)));
      hlds__hlds_llds__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 2)));
      hlds__hlds_llds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 3)));
      hlds__hlds_llds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 4)));
      hlds__hlds_llds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 5)));
      hlds__hlds_llds__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 6)));
      hlds__hlds_llds__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 7)));
      hlds__hlds_llds__succeeded = MR_TRUE;
    }
    if (hlds__hlds_llds__succeeded)
      *hlds__hlds_llds__PostBirths_4 = hlds__hlds_llds__PostBirthsPrime_6;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_post_births\'/2", (MR_String) "no code_gen_info");
        return;
      }
    }
  }
}

void MR_CALL 
hlds__hlds_llds__goal_info_get_pre_births_2_p_0(
  MR_Word hlds__hlds_llds__GoalInfo_3,
  MR_Word * hlds__hlds_llds__PreBirths_4)
{
  {
    MR_bool hlds__hlds_llds__succeeded;
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
    MR_Word hlds__hlds_llds__PreBirthsPrime_6;
    MR_Word hlds__hlds_llds__Var_7;
    MR_Word hlds__hlds_llds__Var_11;
    MR_Word hlds__hlds_llds__Var_12;
    MR_Word hlds__hlds_llds__Var_13;
    MR_Word hlds__hlds_llds__Var_14;
    MR_Word hlds__hlds_llds__Var_15;
    MR_Word hlds__hlds_llds__Var_16;
    MR_Word hlds__hlds_llds__Var_17;

    hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__hlds_llds__succeeded)
    {
      hlds__hlds_llds__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
      hlds__hlds_llds__PreBirthsPrime_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 0)));
      hlds__hlds_llds__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 1)));
      hlds__hlds_llds__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 2)));
      hlds__hlds_llds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 3)));
      hlds__hlds_llds__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 4)));
      hlds__hlds_llds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 5)));
      hlds__hlds_llds__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 6)));
      hlds__hlds_llds__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_7, (MR_Integer) 7)));
      hlds__hlds_llds__succeeded = MR_TRUE;
    }
    if (hlds__hlds_llds__succeeded)
      *hlds__hlds_llds__PreBirths_4 = hlds__hlds_llds__PreBirthsPrime_6;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_pre_births\'/2", (MR_String) "no code_gen_info");
        return;
      }
    }
  }
}

MR_String MR_CALL 
hlds__hlds_llds__explain_stack_slots_2_f_0(
  MR_Word hlds__hlds_llds__StackSlots_4,
  MR_Word hlds__hlds_llds__VarSet_5)
{
  {
    MR_String hlds__hlds_llds__Explanation_6;
    MR_Word hlds__hlds_llds__StackSlotsList_7;
    MR_String hlds__hlds_llds__Explanation1_8;

    mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, hlds__hlds_llds__StackSlots_4, &hlds__hlds_llds__StackSlotsList_7);
    hlds__hlds_llds__explain_stack_slots_2_4_p_0(hlds__hlds_llds__StackSlotsList_7, hlds__hlds_llds__VarSet_5, (MR_String) "", &hlds__hlds_llds__Explanation1_8);
    hlds__hlds_llds__Explanation_6 = mercury__string__f_43_43_2_f_0((MR_String) "\nStack slot assignments (if any):\n", hlds__hlds_llds__Explanation1_8);
    return hlds__hlds_llds__Explanation_6;
  }
}

static void MR_CALL 
hlds__hlds_llds__explain_stack_slots_2_4_p_0(
  MR_Word hlds__hlds_llds__HeadVar__1_1,
  MR_Word hlds__hlds_llds__VarSet_2,
  MR_String hlds__hlds_llds__STATE_VARIABLE_Explanation_0_3,
  MR_String * hlds__hlds_llds__STATE_VARIABLE_Explanation_4)
{
  if ((hlds__hlds_llds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *hlds__hlds_llds__STATE_VARIABLE_Explanation_4 = hlds__hlds_llds__STATE_VARIABLE_Explanation_0_3;
  else
  {
    MR_Word hlds__hlds_llds__Var_9;
    MR_Word hlds__hlds_llds__Slot_10;
    MR_Word hlds__hlds_llds__Rest_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer hlds__hlds_llds__SlotNum_14;
    MR_String hlds__hlds_llds__StackStr_16;
    MR_String hlds__hlds_llds__SlotStr_17;
    MR_String hlds__hlds_llds__WidthStr_18;
    MR_String hlds__hlds_llds__VarName_19;
    MR_Word hlds__hlds_llds__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
    MR_String hlds__hlds_llds__STATE_VARIABLE_Explanation_23_23;
    MR_Word hlds__hlds_llds__Var_24;
    MR_Word hlds__hlds_llds__Var_26;
    MR_Word hlds__hlds_llds__Var_28;
    MR_Word hlds__hlds_llds__Var_29;
    MR_Word hlds__hlds_llds__Var_30;
    MR_Word hlds__hlds_llds__Var_31;
    MR_Word hlds__hlds_llds__Var_33;

    hlds__hlds_llds__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_22, (MR_Integer) 0)));
    hlds__hlds_llds__Slot_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Var_22, (MR_Integer) 1)));
    hlds__hlds_llds__explain_stack_slots_2_4_p_0(hlds__hlds_llds__Rest_11, hlds__hlds_llds__VarSet_2, hlds__hlds_llds__STATE_VARIABLE_Explanation_0_3, &hlds__hlds_llds__STATE_VARIABLE_Explanation_23_23);
    switch (MR_tag((MR_Word) hlds__hlds_llds__Slot_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__hlds_llds__Width_15;

          hlds__hlds_llds__SlotNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Slot_10, (MR_Integer) 0)));
          hlds__hlds_llds__Width_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Slot_10, (MR_Integer) 1)));
          hlds__hlds_llds__StackStr_16 = (MR_String) "sv";
          switch (hlds__hlds_llds__Width_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              hlds__hlds_llds__WidthStr_18 = (MR_String) " (double width)";
              break;
            case (MR_Integer) 0:
              hlds__hlds_llds__WidthStr_18 = (MR_String) "";
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_llds__Width_38;

          hlds__hlds_llds__SlotNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Slot_10, (MR_Integer) 0)));
          hlds__hlds_llds__Width_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Slot_10, (MR_Integer) 1)));
          hlds__hlds_llds__StackStr_16 = (MR_String) "parent_sv";
          switch (hlds__hlds_llds__Width_38) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              hlds__hlds_llds__WidthStr_18 = (MR_String) " (double width)";
              break;
            case (MR_Integer) 0:
              hlds__hlds_llds__WidthStr_18 = (MR_String) "";
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          hlds__hlds_llds__SlotNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__Slot_10, (MR_Integer) 0)));
          hlds__hlds_llds__StackStr_16 = (MR_String) "fv";
          hlds__hlds_llds__WidthStr_18 = (MR_String) "";
        }
        break;
    }
    mercury__string__int_to_string_2_p_0(hlds__hlds_llds__SlotNum_14, &hlds__hlds_llds__SlotStr_17);
    mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_llds__VarSet_2, hlds__hlds_llds__Var_9, &hlds__hlds_llds__VarName_19);
    {
      hlds__hlds_llds__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__Var_33, 0) = ((MR_Box) (hlds__hlds_llds__STATE_VARIABLE_Explanation_23_23));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__hlds_llds__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__Var_31, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__Var_31, 1) = ((MR_Box) (hlds__hlds_llds__Var_33));
    }
    {
      hlds__hlds_llds__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__Var_30, 0) = ((MR_Box) (hlds__hlds_llds__WidthStr_18));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__Var_30, 1) = ((MR_Box) (hlds__hlds_llds__Var_31));
    }
    {
      hlds__hlds_llds__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__Var_29, 0) = ((MR_Box) (hlds__hlds_llds__SlotStr_17));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__Var_29, 1) = ((MR_Box) (hlds__hlds_llds__Var_30));
    }
    {
      hlds__hlds_llds__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__Var_28, 0) = ((MR_Box) (hlds__hlds_llds__StackStr_16));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__Var_28, 1) = ((MR_Box) (hlds__hlds_llds__Var_29));
    }
    {
      hlds__hlds_llds__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__Var_26, 0) = ((MR_Box) ((MR_String) "\t ->\t"));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__Var_26, 1) = ((MR_Box) (hlds__hlds_llds__Var_28));
    }
    {
      hlds__hlds_llds__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__Var_24, 0) = ((MR_Box) (hlds__hlds_llds__VarName_19));
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__Var_24, 1) = ((MR_Box) (hlds__hlds_llds__Var_26));
    }
    mercury__string__append_list_2_p_0(hlds__hlds_llds__Var_24, hlds__hlds_llds__STATE_VARIABLE_Explanation_4);
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;

    hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____abs_follow_vars_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    return hlds__hlds_llds__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____abs_follow_vars_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_map_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;

    hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____abs_follow_vars_map_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    return hlds__hlds_llds__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_map_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____abs_follow_vars_map_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_locn_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;

    hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____abs_locn_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    return hlds__hlds_llds__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____abs_locn_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____abs_locn_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_store_map_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;

    hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____abs_store_map_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    return hlds__hlds_llds__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____abs_store_map_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____abs_store_map_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____llds_code_gen_details_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;

    hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____llds_code_gen_details_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    return hlds__hlds_llds__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____llds_code_gen_details_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____llds_code_gen_details_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____maybe_need_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;

    hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____maybe_need_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    return hlds__hlds_llds__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____maybe_need_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____maybe_need_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_across_call_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;

    hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_across_call_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    return hlds__hlds_llds__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____need_across_call_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____need_across_call_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_for_loop_control_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;

    hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_for_loop_control_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    return hlds__hlds_llds__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____need_for_loop_control_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____need_for_loop_control_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_par_conj_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;

    hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_in_par_conj_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    return hlds__hlds_llds__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____need_in_par_conj_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____need_in_par_conj_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_resume_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;

    hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_in_resume_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    return hlds__hlds_llds__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____need_in_resume_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____need_in_resume_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____reg_type_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;

    hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____reg_type_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    return hlds__hlds_llds__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____reg_type_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____reg_type_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_locs_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;

    hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____resume_locs_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    return hlds__hlds_llds__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____resume_locs_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____resume_locs_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_point_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;

    hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____resume_point_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    return hlds__hlds_llds__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____resume_point_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____resume_point_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;

    hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____stack_slot_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    return hlds__hlds_llds__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____stack_slot_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_width_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;

    hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____stack_slot_width_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    return hlds__hlds_llds__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_width_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____stack_slot_width_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slots_0_0_10001(
  MR_Box hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2)
{
  {
    MR_bool hlds__hlds_llds__succeeded;

    hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____stack_slots_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    return hlds__hlds_llds__succeeded;
  }
}

static void MR_CALL 
hlds__hlds_llds____Compare____stack_slots_0_0_10001(
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
  MR_Box hlds__hlds_llds__wrapper_arg_2,
  MR_Box hlds__hlds_llds__wrapper_arg_3)
{
  {
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

    hlds__hlds_llds____Compare____stack_slots_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
  }
}

void mercury__hlds__hlds_llds__init(void)
{
}

void mercury__hlds__hlds_llds__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_follow_vars_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_follow_vars_map_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_store_map_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_llds_code_gen_details_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_maybe_need_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_across_call_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_for_loop_control_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_in_par_conj_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_in_resume_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_resume_locs_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_resume_point_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slots_0);
}

void mercury__hlds__hlds_llds__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_llds__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.hlds_llds. */
