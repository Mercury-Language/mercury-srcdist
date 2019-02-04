/*
** Automatically generated from `var_locn.m'
** by the Mercury compiler,
** version DEV
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


/* :- module ll_backend.var_locn. */
/* :- implementation. */

/*
INIT mercury__ll_backend__var_locn__init
ENDINIT
*/

#include "ll_backend.var_locn.mih"


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
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.exprn_aux.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__var_locn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__var_locn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__var_locn__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__var_locn__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__var_locn__type_ctor_info_var_state_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__var_locn__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__var_locn__type_ctor_info_var_state_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__var_locn__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__var_locn__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc ll_backend__var_locn__ll_backend__var_locn__enum_functor_desc_dead_or_alive_0_0;

static const MR_EnumFunctorDesc ll_backend__var_locn__ll_backend__var_locn__enum_functor_desc_dead_or_alive_0_1;

static const MR_EnumFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__enum_value_ordered_dead_or_alive_0[2];

static const MR_EnumFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__enum_name_ordered_dead_or_alive_0[2];

static const MR_Integer ll_backend__var_locn__ll_backend__var_locn__functor_number_map_dead_or_alive_0[2];

static const MR_DuFunctorDesc ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_dep_search_lval_0_0;

static const MR_PseudoTypeInfo ll_backend__var_locn__ll_backend__var_locn__field_types_dep_search_lval_0_1[1];

static const MR_DuFunctorDesc ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_dep_search_lval_0_1;

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_dep_search_lval_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_dep_search_lval_0_1[1];

static const MR_DuPtagLayout ll_backend__var_locn__ll_backend__var_locn__du_ptag_ordered_dep_search_lval_0[2];

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_name_ordered_dep_search_lval_0[2];

static const MR_Integer ll_backend__var_locn__ll_backend__var_locn__functor_number_map_dep_search_lval_0[2];

static const MR_FA_TypeInfo_Struct2 ll_backend__var_locn__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo ll_backend__var_locn__ll_backend__var_locn__field_types_var_avail_0_0[1];

static const MR_DuFunctorDesc ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_avail_0_0;

static const MR_DuFunctorDesc ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_avail_0_1;

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_var_avail_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_var_avail_0_1[1];

static const MR_DuPtagLayout ll_backend__var_locn__ll_backend__var_locn__du_ptag_ordered_var_avail_0[2];

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_name_ordered_var_avail_0[2];

static const MR_Integer ll_backend__var_locn__ll_backend__var_locn__functor_number_map_var_avail_0[2];

static const MR_FA_TypeInfo_Struct1 ll_backend__var_locn__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__var_locn__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__var_locn__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__var_locn__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__var_locn__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__var_locn__type_ctor_info_var_state_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__var_locn__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__var_locn__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_lval_0;

static const MR_PseudoTypeInfo ll_backend__var_locn__ll_backend__var_locn__field_types_var_locn_info_0_0[13];

static const MR_ConstString ll_backend__var_locn__ll_backend__var_locn__field_names_var_locn_info_0_0[13];

static const MR_DuFunctorDesc ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_locn_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_var_locn_info_0_0[1];

static const MR_DuPtagLayout ll_backend__var_locn__ll_backend__var_locn__du_ptag_ordered_var_locn_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_name_ordered_var_locn_info_0[1];

static const MR_Integer ll_backend__var_locn__ll_backend__var_locn__functor_number_map_var_locn_info_0[1];

static const MR_FA_TypeInfo_Struct1 ll_backend__var_locn__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_rval_0;

static const MR_PseudoTypeInfo ll_backend__var_locn__ll_backend__var_locn__field_types_var_state_0_0[5];

static const MR_ConstString ll_backend__var_locn__ll_backend__var_locn__field_names_var_state_0_0[5];

static const MR_DuFunctorDesc ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_state_0_0;

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_var_state_0_0[1];

static const MR_DuPtagLayout ll_backend__var_locn__ll_backend__var_locn__du_ptag_ordered_var_state_0[1];

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_name_ordered_var_state_0[1];

static const MR_Integer ll_backend__var_locn__ll_backend__var_locn__functor_number_map_var_state_0[1];

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____dead_or_alive_0_0_10001(
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2);

static void MR_CALL 
ll_backend__var_locn____Compare____dead_or_alive_0_0_10001(
  MR_Box * ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box ll_backend__var_locn__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____dep_search_lval_0_0_10001(
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2);

static void MR_CALL 
ll_backend__var_locn____Compare____dep_search_lval_0_0_10001(
  MR_Box * ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box ll_backend__var_locn__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____loc_var_map_0_0_10001(
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2);

static void MR_CALL 
ll_backend__var_locn____Compare____loc_var_map_0_0_10001(
  MR_Box * ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box ll_backend__var_locn__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_avail_0_0_10001(
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2);

static void MR_CALL 
ll_backend__var_locn____Compare____var_avail_0_0_10001(
  MR_Box * ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box ll_backend__var_locn__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_locn_info_0_0_10001(
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2);

static void MR_CALL 
ll_backend__var_locn____Compare____var_locn_info_0_0_10001(
  MR_Box * ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box ll_backend__var_locn__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_state_0_0_10001(
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2);

static void MR_CALL 
ll_backend__var_locn____Compare____var_state_0_0_10001(
  MR_Box * ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box ll_backend__var_locn__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_state_map_0_0_10001(
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2);

static void MR_CALL 
ll_backend__var_locn____Compare____var_state_map_0_0_10001(
  MR_Box * ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box ll_backend__var_locn__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn__IntroducedFrom__pred__expr_is_constant__2352__1_3_p_0(
  MR_Word ll_backend__var_locn__VarStateMap_5,
  MR_Word ll_backend__var_locn__ExprnOpts_6,
  MR_Word ll_backend__var_locn__Rval_8);

static void MR_CALL 
ll_backend__var_locn__IntroducedFrom__pred__record_copy__1866__1_3_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_38,
  MR_Word ll_backend__var_locn__HeadVar__2_39,
  MR_Word * ll_backend__var_locn__HeadVar__3_40);

static MR_bool MR_CALL 
ll_backend__var_locn__IntroducedFrom__pred__record_copy__1863__1_3_p_0(
  MR_Word ll_backend__var_locn__LocVarMap0_9,
  MR_Word ll_backend__var_locn__HeadVar__2_33,
  MR_Word * ll_backend__var_locn__HeadVar__3_34);

static MR_bool MR_CALL 
ll_backend__var_locn__IntroducedFrom__pred__var_locn_var_becomes_dead__1993__1_2_p_0(
  MR_Word ll_backend__var_locn__FirstTime_6,
  MR_Word ll_backend__var_locn__HeadVar__2_38);

static MR_bool MR_CALL 
ll_backend__var_locn__IntroducedFrom__pred__var_locn_var_becomes_dead__1971__1_2_p_0(
  MR_Word ll_backend__var_locn__FirstTime_6,
  MR_Word ll_backend__var_locn__HeadVar__2_27);

static void MR_CALL 
ll_backend__var_locn____Compare____var_state_map_0_0(
  MR_Word * ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2,
  MR_Word ll_backend__var_locn__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_state_map_0_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2);

static void MR_CALL 
ll_backend__var_locn____Compare____var_state_0_0(
  MR_Word * ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2,
  MR_Word ll_backend__var_locn__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_state_0_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2);

static void MR_CALL 
ll_backend__var_locn____Compare____var_avail_0_0(
  MR_Word * ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2,
  MR_Word ll_backend__var_locn__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_avail_0_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2);

static void MR_CALL 
ll_backend__var_locn____Compare____loc_var_map_0_0(
  MR_Word * ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2,
  MR_Word ll_backend__var_locn__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____loc_var_map_0_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2);

static void MR_CALL 
ll_backend__var_locn____Compare____dep_search_lval_0_0(
  MR_Word * ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2,
  MR_Word ll_backend__var_locn__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____dep_search_lval_0_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2);

static void MR_CALL 
ll_backend__var_locn____Compare____dead_or_alive_0_0(
  MR_Word * ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2,
  MR_Word ll_backend__var_locn__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____dead_or_alive_0_0(
  MR_Word ll_backend__var_locn__HeadVar__2_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2);

static void MR_CALL 
ll_backend__var_locn__var_locn_set_loc_var_map_3_p_0(
  MR_Word ll_backend__var_locn__LVM_4,
  MR_Word ll_backend__var_locn__VI_5,
  MR_Word * ll_backend__var_locn__HeadVar__3_3);

static void MR_CALL 
ll_backend__var_locn__var_locn_set_var_state_map_3_p_0(
  MR_Word ll_backend__var_locn__VSM_4,
  MR_Word ll_backend__var_locn__VI_5,
  MR_Word * ll_backend__var_locn__HeadVar__3_3);

static void MR_CALL 
ll_backend__var_locn__var_locn_get_loc_var_map_2_p_0(
  MR_Word ll_backend__var_locn__VI_3,
  MR_Word * ll_backend__var_locn__HeadVar__2_2);

static void MR_CALL 
ll_backend__var_locn__var_locn_get_var_state_map_2_p_0(
  MR_Word ll_backend__var_locn__VI_3,
  MR_Word * ll_backend__var_locn__HeadVar__2_2);

static void MR_CALL 
ll_backend__var_locn__var_locn_get_vartypes_2_p_0(
  MR_Word ll_backend__var_locn__VI_3,
  MR_Word * ll_backend__var_locn__HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__var_locn__nonempty_state_1_p_0(
  MR_Word ll_backend__var_locn__State_2);

static void MR_CALL 
ll_backend__var_locn__get_var_name_3_p_0(
  MR_Word ll_backend__var_locn__VLI_4,
  MR_Word ll_backend__var_locn__Var_5,
  MR_String * ll_backend__var_locn__Name_6);

static MR_bool MR_CALL 
ll_backend__var_locn__rval_depends_on_search_lval_2_p_0(
  MR_Word ll_backend__var_locn__Rval_3,
  MR_Word ll_backend__var_locn__SearchLval_4);

static MR_bool MR_CALL 
ll_backend__var_locn__lval_does_not_support_lval_2_p_0(
  MR_Word ll_backend__var_locn__Lval1_3,
  MR_Word ll_backend__var_locn__Lval2_4);

static MR_bool MR_CALL 
ll_backend__var_locn__is_root_lval_1_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1);

static MR_bool MR_CALL 
ll_backend__var_locn__make_var_not_depend_on_root_lval_4_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg);

static void MR_CALL 
ll_backend__var_locn__make_var_not_depend_on_root_lval_4_p_0(
  MR_Word ll_backend__var_locn__Var_5,
  MR_Word ll_backend__var_locn__Lval_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_11,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_LocVarMap_12);

static MR_bool MR_CALL 
ll_backend__var_locn__make_var_depend_on_root_lval_4_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg);

static void MR_CALL 
ll_backend__var_locn__make_var_depend_on_root_lval_4_p_0(
  MR_Word ll_backend__var_locn__Var_5,
  MR_Word ll_backend__var_locn__Lval_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_10,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_LocVarMap_11);

static void MR_CALL 
ll_backend__var_locn__make_var_depend_on_lval_roots_4_p_0_2(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn__make_var_depend_on_lval_roots_4_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1);

static void MR_CALL 
ll_backend__var_locn__make_var_depend_on_lval_roots_4_p_0(
  MR_Word ll_backend__var_locn__Var_5,
  MR_Word ll_backend__var_locn__Lval_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_9,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_LocVarMap_10);

static void MR_CALL 
ll_backend__var_locn__make_var_depend_on_lvals_roots_4_p_0_2(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn__make_var_depend_on_lvals_roots_4_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1);

static void MR_CALL 
ll_backend__var_locn__make_var_depend_on_lvals_roots_4_p_0(
  MR_Word ll_backend__var_locn__Var_5,
  MR_Word ll_backend__var_locn__Lvals_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_9,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_LocVarMap_10);

static void MR_CALL 
ll_backend__var_locn__materialize_var_9_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_10,
  MR_Word ll_backend__var_locn__Var_11,
  MR_Word ll_backend__var_locn__MaybePrefer_12,
  MR_Word ll_backend__var_locn__StoreIfReq_13,
  MR_Word ll_backend__var_locn__Avoid_14,
  MR_Word * ll_backend__var_locn__Rval_15,
  MR_Word * ll_backend__var_locn__Code_16,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_32,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_33);

static void MR_CALL 
ll_backend__var_locn__find_var_availability_4_p_0(
  MR_Word ll_backend__var_locn__VLI_5,
  MR_Word ll_backend__var_locn__Var_6,
  MR_Word ll_backend__var_locn__MaybePrefer_7,
  MR_Word * ll_backend__var_locn__Avail_8);

static void MR_CALL 
ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_9,
  MR_Word ll_backend__var_locn__Rval0_10,
  MR_Word ll_backend__var_locn__MaybePrefer_11,
  MR_Word ll_backend__var_locn__Avoid_12,
  MR_Word * ll_backend__var_locn__Rval_13,
  MR_Word * ll_backend__var_locn__Code_14,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_35,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_36);

static void MR_CALL 
ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_8,
  MR_Word ll_backend__var_locn__Lval0_9,
  MR_Word ll_backend__var_locn__Avoid_10,
  MR_Word * ll_backend__var_locn__Lval_11,
  MR_Word * ll_backend__var_locn__Code_12,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_34,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_35);

static MR_bool MR_CALL 
ll_backend__var_locn__expr_is_constant_4_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg);

static MR_bool MR_CALL 
ll_backend__var_locn__expr_is_constant_4_p_0(
  MR_Word ll_backend__var_locn__VarStateMap_5,
  MR_Word ll_backend__var_locn__ExprnOpts_6,
  MR_Word ll_backend__var_locn__Rval0_7,
  MR_Word * ll_backend__var_locn__Rval_8);

static MR_bool MR_CALL 
ll_backend__var_locn__cell_is_constant_4_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2,
  MR_Word ll_backend__var_locn__HeadVar__3_3,
  MR_Word * ll_backend__var_locn__HeadVar__4_4);

static MR_bool MR_CALL 
ll_backend__var_locn__reg_is_not_locked_for_var_4_p_0(
  MR_Word ll_backend__var_locn__VLI_5,
  MR_Word ll_backend__var_locn__RegType_6,
  MR_Integer ll_backend__var_locn__RegNum_7,
  MR_Word ll_backend__var_locn__Var_8);

static void MR_CALL 
ll_backend__var_locn__get_spare_reg_2_5_p_0(
  MR_Word ll_backend__var_locn__VLI_6,
  MR_Word ll_backend__var_locn__RegType_7,
  MR_Word ll_backend__var_locn__Avoid_8,
  MR_Integer ll_backend__var_locn__N0_9,
  MR_Word * ll_backend__var_locn__Lval_10);

static void MR_CALL 
ll_backend__var_locn__get_spare_reg_3_p_0(
  MR_Word ll_backend__var_locn__VLI_4,
  MR_Word ll_backend__var_locn__RegType_5,
  MR_Word * ll_backend__var_locn__Lval_6);

static void MR_CALL 
ll_backend__var_locn__get_spare_reg_avoid_4_p_0(
  MR_Word ll_backend__var_locn__VLI_5,
  MR_Word ll_backend__var_locn__RegType_6,
  MR_Word ll_backend__var_locn__Avoid_7,
  MR_Word * ll_backend__var_locn__Lval_8);

static void MR_CALL 
ll_backend__var_locn__select_preferred_reg_or_stack_4_p_0(
  MR_Word ll_backend__var_locn__VLI_5,
  MR_Word ll_backend__var_locn__Var_6,
  MR_Word ll_backend__var_locn__RegType_7,
  MR_Word * ll_backend__var_locn__Lval_8);

static void MR_CALL 
ll_backend__var_locn__select_preferred_reg_avoid_5_p_0(
  MR_Word ll_backend__var_locn__VLI_6,
  MR_Word ll_backend__var_locn__Var_7,
  MR_Word ll_backend__var_locn__RegType_8,
  MR_Word ll_backend__var_locn__Avoid_9,
  MR_Word * ll_backend__var_locn__Lval_10);

static void MR_CALL 
ll_backend__var_locn__select_preferred_reg_4_p_0(
  MR_Word ll_backend__var_locn__VLI_5,
  MR_Word ll_backend__var_locn__Var_6,
  MR_Word ll_backend__var_locn__RegType_7,
  MR_Word * ll_backend__var_locn__Lval_8);

static MR_bool MR_CALL 
ll_backend__var_locn__select_reg_or_stack_lval_2_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word * ll_backend__var_locn__Lval_5);

static MR_bool MR_CALL 
ll_backend__var_locn__select_stack_lval_2_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word * ll_backend__var_locn__Lval_5);

static MR_bool MR_CALL 
ll_backend__var_locn__select_reg_lval_2_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word * ll_backend__var_locn__Lval_5);

static MR_bool MR_CALL 
ll_backend__var_locn__get_var_set_roots_2_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1);

static void MR_CALL 
ll_backend__var_locn__get_var_set_roots_2_p_0(
  MR_Word ll_backend__var_locn__Lvals_3,
  MR_Word * ll_backend__var_locn__NoDupRootLvals_4);

static MR_Word MR_CALL 
ll_backend__var_locn__substitute_lval_in_lval_3_f_0(
  MR_Word ll_backend__var_locn__Old_5,
  MR_Word ll_backend__var_locn__New_6,
  MR_Word ll_backend__var_locn__Lval0_7);

static void MR_CALL 
ll_backend__var_locn__record_change_in_root_dependencies_5_p_0_4(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3);

static void MR_CALL 
ll_backend__var_locn__record_change_in_root_dependencies_5_p_0_3(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn__record_change_in_root_dependencies_5_p_0_2(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__var_locn__record_change_in_root_dependencies_5_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1);

static void MR_CALL 
ll_backend__var_locn__record_change_in_root_dependencies_5_p_0(
  MR_Word ll_backend__var_locn__OldLvalSet_6,
  MR_Word ll_backend__var_locn__NewLvalSet_7,
  MR_Word ll_backend__var_locn__Var_8,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_18,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_LocVarMap_19);

static void MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_8(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3);

static void MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_7(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_6(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_5(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_4(
  MR_Box ll_backend__var_locn__closure_arg);

static MR_Box MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_3(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_2(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1);

static void MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0(
  MR_Word ll_backend__var_locn__Old_8,
  MR_Word ll_backend__var_locn__New_9,
  MR_Word ll_backend__var_locn__Var_10,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_25,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VarStateMap_26,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_27,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_LocVarMap_28);

static void MR_CALL 
ll_backend__var_locn__record_copy_4_p_0_5(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3,
  MR_Box ll_backend__var_locn__wrapper_arg_4,
  MR_Box * ll_backend__var_locn__wrapper_arg_5);

static void MR_CALL 
ll_backend__var_locn__record_copy_4_p_0_4(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_4_p_0_3(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box * ll_backend__var_locn__wrapper_arg_2);

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_4_p_0_2(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_4_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg);

static void MR_CALL 
ll_backend__var_locn__record_copy_4_p_0(
  MR_Word ll_backend__var_locn__Old_5,
  MR_Word ll_backend__var_locn__New_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_17,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_18);

static void MR_CALL 
ll_backend__var_locn__ensure_copies_are_present_lval_5_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__OneSource_2,
  MR_Word ll_backend__var_locn__Lval_3,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_LvalSet_0_4,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_LvalSet_5);

static void MR_CALL 
ll_backend__var_locn__ensure_copies_are_present_5_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3);

static void MR_CALL 
ll_backend__var_locn__ensure_copies_are_present_5_p_0(
  MR_Word ll_backend__var_locn__OneSource_6,
  MR_Word ll_backend__var_locn__OtherSources_7,
  MR_Word ll_backend__var_locn__Var_8,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_23,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_24);

static MR_bool MR_CALL 
ll_backend__var_locn__find_one_occupying_var_5_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__Lval_8,
  MR_Word ll_backend__var_locn__VarStateMap_9,
  MR_Word * ll_backend__var_locn__OccupyingVar_10,
  MR_Word * ll_backend__var_locn__OtherSources_11);

static void MR_CALL 
ll_backend__var_locn__free_up_lval_with_copy_7_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3);

static void MR_CALL 
ll_backend__var_locn__free_up_lval_with_copy_7_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_8,
  MR_Word ll_backend__var_locn__Lval_9,
  MR_Word ll_backend__var_locn__ToBeAssignedVars_10,
  MR_Word ll_backend__var_locn__ForbiddenLvals_11,
  MR_Word * ll_backend__var_locn__Code_12,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_29,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_30);

static MR_bool MR_CALL 
ll_backend__var_locn__free_up_lval_7_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3);

static void MR_CALL 
ll_backend__var_locn__free_up_lval_7_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_8,
  MR_Word ll_backend__var_locn__Lval_9,
  MR_Word ll_backend__var_locn__ToBeAssignedVars_10,
  MR_Word ll_backend__var_locn__ForbiddenLvals_11,
  MR_Word * ll_backend__var_locn__Code_12,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_19,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_20);

static void MR_CALL 
ll_backend__var_locn__record_clobbering_4_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3);

static void MR_CALL 
ll_backend__var_locn__record_clobbering_4_p_0(
  MR_Word ll_backend__var_locn__Target_5,
  MR_Word ll_backend__var_locn__Assigns_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_14,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_15);

static void MR_CALL 
ll_backend__var_locn__actually_place_var_7_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_8,
  MR_Word ll_backend__var_locn__Var_9,
  MR_Word ll_backend__var_locn__Target_10,
  MR_Word ll_backend__var_locn__ForbiddenLvals_11,
  MR_Word * ll_backend__var_locn__Code_12,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_36,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_37);

static void MR_CALL 
ll_backend__var_locn__actually_place_vars_5_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2,
  MR_Word * ll_backend__var_locn__HeadVar__3_3,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_4,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_5);

static void MR_CALL 
ll_backend__var_locn__reg_type_for_var_3_p_0(
  MR_Word ll_backend__var_locn__VLI_4,
  MR_Word ll_backend__var_locn__Var_5,
  MR_Word * ll_backend__var_locn__RegType_6);

static void MR_CALL 
ll_backend__var_locn__check_var_is_unknown_2_p_0(
  MR_Word ll_backend__var_locn__VLI_3,
  MR_Word ll_backend__var_locn__Var_4);

static void MR_CALL 
ll_backend__var_locn__remove_use_refs_2_4_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__UsingVar_2,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_3,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_4);

static void MR_CALL 
ll_backend__var_locn__remove_use_refs_4_p_0(
  MR_Word ll_backend__var_locn__MaybeExprRval_5,
  MR_Word ll_backend__var_locn__UsingVar_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_11,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_12);

static void MR_CALL 
ll_backend__var_locn__add_additional_lval_for_var_4_p_0_2(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn__add_additional_lval_for_var_4_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1);

static void MR_CALL 
ll_backend__var_locn__add_additional_lval_for_var_4_p_0(
  MR_Word ll_backend__var_locn__Var_5,
  MR_Word ll_backend__var_locn__Lval_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_20,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_21);

static void MR_CALL 
ll_backend__var_locn__var_locn_save_cell_fields_2_8_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_9,
  MR_Word ll_backend__var_locn__ReuseLval_10,
  MR_Word ll_backend__var_locn__DepVar_11,
  MR_Word * ll_backend__var_locn__SaveDepVarCode_12,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_Regs_0_25,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_Regs_26,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_27,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_28);

static void MR_CALL 
ll_backend__var_locn__materialize_if_var_6_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_7,
  MR_Word ll_backend__var_locn__Rval0_8,
  MR_Word * ll_backend__var_locn__EvalCode_9,
  MR_Word * ll_backend__var_locn__Rval_10,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_25,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_26);

static void MR_CALL 
ll_backend__var_locn__assign_cell_arg_8_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_9,
  MR_Word ll_backend__var_locn__Rval0_10,
  MR_Word ll_backend__var_locn__Ptag_11,
  MR_Word ll_backend__var_locn__Base_12,
  MR_Integer ll_backend__var_locn__Offset_13,
  MR_Word * ll_backend__var_locn__Code_14,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_37,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_38);

static void MR_CALL 
ll_backend__var_locn__assign_some_cell_args_10_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2,
  MR_Word ll_backend__var_locn__HeadVar__3_3,
  MR_Word ll_backend__var_locn__Ptag_4,
  MR_Word ll_backend__var_locn__Base_5,
  MR_Integer ll_backend__var_locn__Offset_6,
  MR_Word * ll_backend__var_locn__HeadVar__7_7,
  MR_Word * ll_backend__var_locn__HeadVar__8_8,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_9,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_10);

static void MR_CALL 
ll_backend__var_locn__assign_all_cell_args_8_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2,
  MR_Word ll_backend__var_locn__Ptag_3,
  MR_Word ll_backend__var_locn__Base_4,
  MR_Integer ll_backend__var_locn__Offset_5,
  MR_Word * ll_backend__var_locn__HeadVar__6_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_7,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_8);

static void MR_CALL 
ll_backend__var_locn__assign_reused_cell_to_var_14_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3);

static void MR_CALL 
ll_backend__var_locn__assign_reused_cell_to_var_14_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_15,
  MR_Word ll_backend__var_locn__Lval_16,
  MR_Integer ll_backend__var_locn__Ptag_17,
  MR_Word ll_backend__var_locn__Vector_18,
  MR_Word ll_backend__var_locn__CellToReuse_19,
  MR_Word ll_backend__var_locn__ReuseLval_20,
  MR_Word ll_backend__var_locn__ReuseVarCode_21,
  MR_Integer ll_backend__var_locn__StartOffset_22,
  MR_Word ll_backend__var_locn__Label_23,
  MR_Word * ll_backend__var_locn__MaybeReuse_24,
  MR_Word * ll_backend__var_locn__SetupReuseCode_25,
  MR_Word * ll_backend__var_locn__ArgsCode_26,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_41,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_42);

static void MR_CALL 
ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_13_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_14,
  MR_Word ll_backend__var_locn__Var_15,
  MR_Word ll_backend__var_locn__ReserveWordAtStart_16,
  MR_Integer ll_backend__var_locn__Ptag_17,
  MR_Word ll_backend__var_locn__Vector_18,
  MR_Word ll_backend__var_locn__HowToConstruct_19,
  MR_Word ll_backend__var_locn__MaybeOffset_20,
  MR_Word ll_backend__var_locn__MaybeAllocId_21,
  MR_Word ll_backend__var_locn__MayUseAtomic_22,
  MR_Word ll_backend__var_locn__Label_23,
  MR_Word * ll_backend__var_locn__Code_24,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_50,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_51);

static void MR_CALL 
ll_backend__var_locn__clobber_old_lval_4_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3);

static void MR_CALL 
ll_backend__var_locn__clobber_old_lval_4_p_0(
  MR_Word ll_backend__var_locn__Var_5,
  MR_Word ll_backend__var_locn__Lval_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_8,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_9);

static void MR_CALL 
ll_backend__var_locn__add_use_ref_4_p_0(
  MR_Word ll_backend__var_locn__ContainedVar_5,
  MR_Word ll_backend__var_locn__UsingVar_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_16,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VarStateMap_17);

static void MR_CALL 
ll_backend__var_locn__add_use_refs_4_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__UsingVar_2,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_3,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VarStateMap_4);

static MR_Word MR_CALL 
ll_backend__var_locn__add_field_offset_3_f_0(
  MR_Word ll_backend__var_locn__Ptag_5,
  MR_Word ll_backend__var_locn__Offset_6,
  MR_Word ll_backend__var_locn__Base_7);

static MR_bool MR_CALL 
ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__VarStateMap_2,
  MR_Word ll_backend__var_locn__OkToDeleteVars_3);

static MR_bool MR_CALL 
ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_p_0(
  MR_Word ll_backend__var_locn__Lval_7,
  MR_Word ll_backend__var_locn__OkToDeleteVars_8,
  MR_Word ll_backend__var_locn__OkToDeleteAny_9,
  MR_Word ll_backend__var_locn__Var_10,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_21,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VarStateMap_22);

static void MR_CALL 
ll_backend__var_locn__clobber_lval_in_var_state_map_6_p_0(
  MR_Word ll_backend__var_locn__Lval_7,
  MR_Word ll_backend__var_locn__OkToDeleteVars_8,
  MR_Word ll_backend__var_locn__OkToDeleteAny_9,
  MR_Word ll_backend__var_locn__Var_10,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_12,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VarStateMap_13);

static void MR_CALL 
ll_backend__var_locn__clobber_reg_in_maps_6_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3);

static void MR_CALL 
ll_backend__var_locn__clobber_reg_in_maps_6_p_0(
  MR_Word ll_backend__var_locn__Lval_7,
  MR_Word ll_backend__var_locn__OkToDeleteAny_8,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_14,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_LocVarMap_15,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_16,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VarStateMap_17);

static void MR_CALL 
ll_backend__var_locn__clobber_regs_in_maps_6_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3);

static void MR_CALL 
ll_backend__var_locn__clobber_regs_in_maps_6_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__OkToDeleteAny_2,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_3,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_LocVarMap_4,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_5,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VarStateMap_6);

static MR_bool MR_CALL 
ll_backend__var_locn__convert_live_to_lval_set_2_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word * ll_backend__var_locn__HeadVar__2_2);

static void MR_CALL 
ll_backend__var_locn__init_var_locn_state_2_6_p_0_3(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn__init_var_locn_state_2_6_p_0_2(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__var_locn__init_var_locn_state_2_6_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg);

static void MR_CALL 
ll_backend__var_locn__init_var_locn_state_2_6_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__MaybeLiveness_2,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_3,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VarStateMap_4,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_5,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_LocVarMap_6);

static MR_bool MR_CALL 
ll_backend__var_locn__var_locn_get_var_locations_2_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box * ll_backend__var_locn__wrapper_arg_2);

static MR_bool MR_CALL 
ll_backend__var_locn__var_locn_clear_r1_4_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3);

static void MR_CALL 
ll_backend__var_locn__var_locn_save_cell_fields_7_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box * ll_backend__var_locn__wrapper_arg_2,
  MR_Box ll_backend__var_locn__wrapper_arg_3,
  MR_Box * ll_backend__var_locn__wrapper_arg_4,
  MR_Box ll_backend__var_locn__wrapper_arg_5,
  MR_Box * ll_backend__var_locn__wrapper_arg_6);

static void MR_CALL 
ll_backend__var_locn__var_locn_reassign_mkword_hole_var_6_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3);

static MR_Box MR_CALL 
ll_backend__var_locn__var_locn_assign_lval_to_var_7_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__var_locn__var_locn_var_becomes_dead_4_p_0_3(
  MR_Box ll_backend__var_locn__closure_arg);

static void MR_CALL 
ll_backend__var_locn__var_locn_var_becomes_dead_4_p_0_2(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn__var_locn_var_becomes_dead_4_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg);

static void MR_CALL 
ll_backend__var_locn__var_locn_set_magic_var_location_4_p_0_2(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn__var_locn_set_magic_var_location_4_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1);


static /* final */ const MR_Box ll_backend__var_locn_scalar_common_1[14][2];

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_2[22][3];

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_3[2][4];

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_4[4][7];

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_5[3][5];

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_6[2][1];

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_7[1][11];

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_8[1][9];

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_9[5][6];

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_10[2][8];

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_11[1][10];




static /* final */ const MR_Box ll_backend__var_locn_scalar_common_1[14][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&ll_backend__var_locn_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__var_locn_scalar_common_2[4]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__var_locn_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__var_locn_scalar_common_6[1])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__var_locn_scalar_common_6[0])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) ")")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) -42))
  },
};

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_2[22][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__var_locn_scalar_common_1[0])),
    ((MR_Box) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__var_locn_scalar_common_1[0])),
    ((MR_Box) (&ll_backend__var_locn_scalar_common_1[4]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__var_locn_scalar_common_1[0])),
    ((MR_Box) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__var_locn_scalar_common_1[0])),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__var_locn_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__var_locn_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__var_locn_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_3[0])),
    ((MR_Box) (ll_backend__var_locn__var_locn_set_magic_var_location_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_5[1])),
    ((MR_Box) (ll_backend__var_locn__var_locn_get_var_locations_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_3[0])),
    ((MR_Box) (ll_backend__var_locn__init_var_locn_state_2_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_9[1])),
    ((MR_Box) (ll_backend__var_locn__assign_reused_cell_to_var_14_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_3[0])),
    ((MR_Box) (ll_backend__var_locn__add_additional_lval_for_var_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_3[0])),
    ((MR_Box) (ll_backend__var_locn__record_copy_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_9[3])),
    ((MR_Box) (ll_backend__var_locn__record_copy_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_3[0])),
    ((MR_Box) (ll_backend__var_locn__record_copy_for_var_7_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_3[0])),
    ((MR_Box) (ll_backend__var_locn__record_copy_for_var_7_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_3[0])),
    ((MR_Box) (ll_backend__var_locn__record_change_in_root_dependencies_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_3[0])),
    ((MR_Box) (ll_backend__var_locn__record_change_in_root_dependencies_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_3[0])),
    ((MR_Box) (ll_backend__var_locn__get_var_set_roots_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_3[0])),
    ((MR_Box) (ll_backend__var_locn__make_var_depend_on_lvals_roots_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_3[0])),
    ((MR_Box) (ll_backend__var_locn__make_var_depend_on_lval_roots_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_3[2][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0))
  },
};

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_4[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__var_locn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__var_locn__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__var_locn__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__var_locn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0)),
    ((MR_Box) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_5[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__var_locn__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__var_locn__type_ctor_info_var_state_0)),
    ((MR_Box) (&ll_backend__var_locn__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_6[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_7[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__var_locn__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__var_locn__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0)),
    ((MR_Box) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0))
  },
};

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_8[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&ll_backend__var_locn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__var_locn__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__var_locn__type_ctor_info_var_state_0)),
    ((MR_Box) (&ll_backend__var_locn__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__var_locn__type_ctor_info_var_state_0))
  },
};

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_9[5][6] = {
  /* row 0 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_8[0])),
    ((MR_Box) (ll_backend__var_locn__var_locn_clear_r1_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__var_locn_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0)),
    ((MR_Box) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__var_locn__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__var_locn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__var_locn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__var_locn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__var_locn__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__var_locn__type_ctor_info_var_state_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_exprn_opts_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
};

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_10[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0)),
    ((MR_Box) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__var_locn__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_11[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__var_locn__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__var_locn__type_ctor_info_var_state_0)),
    ((MR_Box) (&ll_backend__var_locn__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__var_locn__type_ctor_info_var_state_0)),
    ((MR_Box) (&ll_backend__var_locn__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__var_locn__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__var_locn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__var_locn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__var_locn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__var_locn__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_PseudoTypeInfo) &ll_backend__var_locn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__var_locn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__var_locn__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__var_locn__type_ctor_info_var_state_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__var_locn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__var_locn__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__var_locn__type_ctor_info_var_state_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__var_locn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__var_locn__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__var_locn__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__var_locn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &ll_backend__var_locn__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__var_locn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_EnumFunctorDesc ll_backend__var_locn__ll_backend__var_locn__enum_functor_desc_dead_or_alive_0_0 = {
  (MR_String) "doa_dead",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__var_locn__ll_backend__var_locn__enum_functor_desc_dead_or_alive_0_1 = {
  (MR_String) "doa_alive",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__enum_value_ordered_dead_or_alive_0[2] = {
  &ll_backend__var_locn__ll_backend__var_locn__enum_functor_desc_dead_or_alive_0_0,
  &ll_backend__var_locn__ll_backend__var_locn__enum_functor_desc_dead_or_alive_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__enum_name_ordered_dead_or_alive_0[2] = {
  &ll_backend__var_locn__ll_backend__var_locn__enum_functor_desc_dead_or_alive_0_1,
  &ll_backend__var_locn__ll_backend__var_locn__enum_functor_desc_dead_or_alive_0_0
};

static const MR_Integer ll_backend__var_locn__ll_backend__var_locn__functor_number_map_dead_or_alive_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_dead_or_alive_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__var_locn____Unify____dead_or_alive_0_0_10001)),
  ((MR_Box) (ll_backend__var_locn____Compare____dead_or_alive_0_0_10001)),
  (MR_String) "ll_backend.var_locn",
  (MR_String) "dead_or_alive",
  {     ll_backend__var_locn__ll_backend__var_locn__enum_name_ordered_dead_or_alive_0 },
  {     ll_backend__var_locn__ll_backend__var_locn__enum_value_ordered_dead_or_alive_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__var_locn__ll_backend__var_locn__functor_number_map_dead_or_alive_0
};

static const MR_DuFunctorDesc ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_dep_search_lval_0_0 = {
  (MR_String) "all_regs",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ll_backend__var_locn__ll_backend__var_locn__field_types_dep_search_lval_0_1[1] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
};

static const MR_DuFunctorDesc ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_dep_search_lval_0_1 = {
  (MR_String) "specific_reg_or_stack",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__var_locn__ll_backend__var_locn__field_types_dep_search_lval_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_dep_search_lval_0_0[1] = {
  &ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_dep_search_lval_0_0
};

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_dep_search_lval_0_1[1] = {
  &ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_dep_search_lval_0_1
};

static const MR_DuPtagLayout ll_backend__var_locn__ll_backend__var_locn__du_ptag_ordered_dep_search_lval_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_dep_search_lval_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_dep_search_lval_0_1
  }
};

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_name_ordered_dep_search_lval_0[2] = {
  &ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_dep_search_lval_0_0,
  &ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_dep_search_lval_0_1
};

static const MR_Integer ll_backend__var_locn__ll_backend__var_locn__functor_number_map_dep_search_lval_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_dep_search_lval_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__var_locn____Unify____dep_search_lval_0_0_10001)),
  ((MR_Box) (ll_backend__var_locn____Compare____dep_search_lval_0_0_10001)),
  (MR_String) "ll_backend.var_locn",
  (MR_String) "dep_search_lval",
  {     ll_backend__var_locn__ll_backend__var_locn__du_name_ordered_dep_search_lval_0 },
  {     ll_backend__var_locn__ll_backend__var_locn__du_ptag_ordered_dep_search_lval_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__var_locn__ll_backend__var_locn__functor_number_map_dep_search_lval_0
};

static const MR_FA_TypeInfo_Struct2 ll_backend__var_locn__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_TypeInfo) &ll_backend__var_locn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

const MR_TypeCtorInfo_Struct ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_loc_var_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__var_locn____Unify____loc_var_map_0_0_10001)),
  ((MR_Box) (ll_backend__var_locn____Compare____loc_var_map_0_0_10001)),
  (MR_String) "ll_backend.var_locn",
  (MR_String) "loc_var_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__var_locn__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo ll_backend__var_locn__ll_backend__var_locn__field_types_var_avail_0_0[1] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_avail_0_0 = {
  (MR_String) "available",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__var_locn__ll_backend__var_locn__field_types_var_avail_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_avail_0_1 = {
  (MR_String) "needs_materialization",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_var_avail_0_0[1] = {
  &ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_avail_0_1
};

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_var_avail_0_1[1] = {
  &ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_avail_0_0
};

static const MR_DuPtagLayout ll_backend__var_locn__ll_backend__var_locn__du_ptag_ordered_var_avail_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_var_avail_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_var_avail_0_1
  }
};

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_name_ordered_var_avail_0[2] = {
  &ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_avail_0_0,
  &ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_avail_0_1
};

static const MR_Integer ll_backend__var_locn__ll_backend__var_locn__functor_number_map_var_avail_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_avail_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__var_locn____Unify____var_avail_0_0_10001)),
  ((MR_Box) (ll_backend__var_locn____Compare____var_avail_0_0_10001)),
  (MR_String) "ll_backend.var_locn",
  (MR_String) "var_avail",
  {     ll_backend__var_locn__ll_backend__var_locn__du_name_ordered_var_avail_0 },
  {     ll_backend__var_locn__ll_backend__var_locn__du_ptag_ordered_var_avail_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__var_locn__ll_backend__var_locn__functor_number_map_var_avail_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__var_locn__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__var_locn__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__var_locn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__var_locn__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__var_locn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__var_locn__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__var_locn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__var_locn__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__var_locn__type_ctor_info_var_state_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__var_locn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__var_locn__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__var_locn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__var_locn__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__var_locn__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_PseudoTypeInfo ll_backend__var_locn__ll_backend__var_locn__field_types_var_locn_info_0_0[13] = {
  (MR_PseudoTypeInfo) &ll_backend__var_locn__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__var_locn__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0,
  (MR_PseudoTypeInfo) &ll_backend__var_locn__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0,
  (MR_PseudoTypeInfo) &ll_backend__var_locn__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__var_locn__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__var_locn__type_ctor_info_var_state_0,
  (MR_PseudoTypeInfo) &ll_backend__var_locn__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__var_locn__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__var_locn__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_lval_0
};

static const MR_ConstString ll_backend__var_locn__ll_backend__var_locn__field_names_var_locn_info_0_0[13] = {
  (MR_String) "vli_varset",
  (MR_String) "vli_vartypes",
  (MR_String) "vli_float_reg_type",
  (MR_String) "vli_stack_slots",
  (MR_String) "vli_follow_vars_map",
  (MR_String) "vli_next_non_res_r",
  (MR_String) "vli_next_non_res_f",
  (MR_String) "vli_var_state_map",
  (MR_String) "vli_loc_var_map",
  (MR_String) "vli_acquired",
  (MR_String) "vli_locked_r",
  (MR_String) "vli_locked_f",
  (MR_String) "vli_exceptions"
};

static const MR_DuFunctorDesc ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_locn_info_0_0 = {
  (MR_String) "var_locn_info",
  (MR_Integer) 13,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__var_locn__ll_backend__var_locn__field_types_var_locn_info_0_0,
  ll_backend__var_locn__ll_backend__var_locn__field_names_var_locn_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_var_locn_info_0_0[1] = {
  &ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_locn_info_0_0
};

static const MR_DuPtagLayout ll_backend__var_locn__ll_backend__var_locn__du_ptag_ordered_var_locn_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_var_locn_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_name_ordered_var_locn_info_0[1] = {
  &ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_locn_info_0_0
};

static const MR_Integer ll_backend__var_locn__ll_backend__var_locn__functor_number_map_var_locn_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__var_locn____Unify____var_locn_info_0_0_10001)),
  ((MR_Box) (ll_backend__var_locn____Compare____var_locn_info_0_0_10001)),
  (MR_String) "ll_backend.var_locn",
  (MR_String) "var_locn_info",
  {     ll_backend__var_locn__ll_backend__var_locn__du_name_ordered_var_locn_info_0 },
  {     ll_backend__var_locn__ll_backend__var_locn__du_ptag_ordered_var_locn_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__var_locn__ll_backend__var_locn__functor_number_map_var_locn_info_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__var_locn__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
  }
};

static const MR_PseudoTypeInfo ll_backend__var_locn__ll_backend__var_locn__field_types_var_state_0_0[5] = {
  (MR_PseudoTypeInfo) &ll_backend__var_locn__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__var_locn__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &ll_backend__var_locn__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &ll_backend__var_locn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_dead_or_alive_0
};

static const MR_ConstString ll_backend__var_locn__ll_backend__var_locn__field_names_var_state_0_0[5] = {
  (MR_String) "locs",
  (MR_String) "const_rval",
  (MR_String) "expr_rval",
  (MR_String) "using_vars",
  (MR_String) "dead_or_alive"
};

static const MR_DuFunctorDesc ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_state_0_0 = {
  (MR_String) "var_state",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__var_locn__ll_backend__var_locn__field_types_var_state_0_0,
  ll_backend__var_locn__ll_backend__var_locn__field_names_var_state_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_var_state_0_0[1] = {
  &ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_state_0_0
};

static const MR_DuPtagLayout ll_backend__var_locn__ll_backend__var_locn__du_ptag_ordered_var_state_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_var_state_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_name_ordered_var_state_0[1] = {
  &ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_state_0_0
};

static const MR_Integer ll_backend__var_locn__ll_backend__var_locn__functor_number_map_var_state_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__var_locn____Unify____var_state_0_0_10001)),
  ((MR_Box) (ll_backend__var_locn____Compare____var_state_0_0_10001)),
  (MR_String) "ll_backend.var_locn",
  (MR_String) "var_state",
  {     ll_backend__var_locn__ll_backend__var_locn__du_name_ordered_var_state_0 },
  {     ll_backend__var_locn__ll_backend__var_locn__du_ptag_ordered_var_state_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__var_locn__ll_backend__var_locn__functor_number_map_var_state_0
};

const MR_TypeCtorInfo_Struct ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__var_locn____Unify____var_state_map_0_0_10001)),
  ((MR_Box) (ll_backend__var_locn____Compare____var_state_map_0_0_10001)),
  (MR_String) "ll_backend.var_locn",
  (MR_String) "var_state_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__var_locn__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__var_locn__type_ctor_info_var_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____dead_or_alive_0_0_10001(
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2)
{
  {
    MR_bool ll_backend__var_locn__succeeded;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn____Unify____dead_or_alive_0_0(((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn____Compare____dead_or_alive_0_0_10001(
  MR_Box * ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Word ll_backend__var_locn__conv0_HeadVar__1_1;

    {
      ll_backend__var_locn____Compare____dead_or_alive_0_0(&ll_backend__var_locn__conv0_HeadVar__1_1, ((MR_Word) ll_backend__var_locn__wrapper_arg_2), ((MR_Word) ll_backend__var_locn__wrapper_arg_3));
    }
    *ll_backend__var_locn__wrapper_arg_1 = ((MR_Box) (ll_backend__var_locn__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____dep_search_lval_0_0_10001(
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2)
{
  {
    MR_bool ll_backend__var_locn__succeeded;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn____Unify____dep_search_lval_0_0(((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn____Compare____dep_search_lval_0_0_10001(
  MR_Box * ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Word ll_backend__var_locn__conv0_HeadVar__1_1;

    {
      ll_backend__var_locn____Compare____dep_search_lval_0_0(&ll_backend__var_locn__conv0_HeadVar__1_1, ((MR_Word) ll_backend__var_locn__wrapper_arg_2), ((MR_Word) ll_backend__var_locn__wrapper_arg_3));
    }
    *ll_backend__var_locn__wrapper_arg_1 = ((MR_Box) (ll_backend__var_locn__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____loc_var_map_0_0_10001(
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2)
{
  {
    MR_bool ll_backend__var_locn__succeeded;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn____Unify____loc_var_map_0_0(((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn____Compare____loc_var_map_0_0_10001(
  MR_Box * ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Word ll_backend__var_locn__conv0_HeadVar__1_1;

    {
      ll_backend__var_locn____Compare____loc_var_map_0_0(&ll_backend__var_locn__conv0_HeadVar__1_1, ((MR_Word) ll_backend__var_locn__wrapper_arg_2), ((MR_Word) ll_backend__var_locn__wrapper_arg_3));
    }
    *ll_backend__var_locn__wrapper_arg_1 = ((MR_Box) (ll_backend__var_locn__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_avail_0_0_10001(
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2)
{
  {
    MR_bool ll_backend__var_locn__succeeded;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn____Unify____var_avail_0_0(((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn____Compare____var_avail_0_0_10001(
  MR_Box * ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Word ll_backend__var_locn__conv0_HeadVar__1_1;

    {
      ll_backend__var_locn____Compare____var_avail_0_0(&ll_backend__var_locn__conv0_HeadVar__1_1, ((MR_Word) ll_backend__var_locn__wrapper_arg_2), ((MR_Word) ll_backend__var_locn__wrapper_arg_3));
    }
    *ll_backend__var_locn__wrapper_arg_1 = ((MR_Box) (ll_backend__var_locn__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_locn_info_0_0_10001(
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2)
{
  {
    MR_bool ll_backend__var_locn__succeeded;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn____Unify____var_locn_info_0_0(((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn____Compare____var_locn_info_0_0_10001(
  MR_Box * ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Word ll_backend__var_locn__conv0_HeadVar__1_1;

    {
      ll_backend__var_locn____Compare____var_locn_info_0_0(&ll_backend__var_locn__conv0_HeadVar__1_1, ((MR_Word) ll_backend__var_locn__wrapper_arg_2), ((MR_Word) ll_backend__var_locn__wrapper_arg_3));
    }
    *ll_backend__var_locn__wrapper_arg_1 = ((MR_Box) (ll_backend__var_locn__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_state_0_0_10001(
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2)
{
  {
    MR_bool ll_backend__var_locn__succeeded;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn____Unify____var_state_0_0(((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn____Compare____var_state_0_0_10001(
  MR_Box * ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Word ll_backend__var_locn__conv0_HeadVar__1_1;

    {
      ll_backend__var_locn____Compare____var_state_0_0(&ll_backend__var_locn__conv0_HeadVar__1_1, ((MR_Word) ll_backend__var_locn__wrapper_arg_2), ((MR_Word) ll_backend__var_locn__wrapper_arg_3));
    }
    *ll_backend__var_locn__wrapper_arg_1 = ((MR_Box) (ll_backend__var_locn__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_state_map_0_0_10001(
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2)
{
  {
    MR_bool ll_backend__var_locn__succeeded;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn____Unify____var_state_map_0_0(((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn____Compare____var_state_map_0_0_10001(
  MR_Box * ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Word ll_backend__var_locn__conv0_HeadVar__1_1;

    {
      ll_backend__var_locn____Compare____var_state_map_0_0(&ll_backend__var_locn__conv0_HeadVar__1_1, ((MR_Word) ll_backend__var_locn__wrapper_arg_2), ((MR_Word) ll_backend__var_locn__wrapper_arg_3));
    }
    *ll_backend__var_locn__wrapper_arg_1 = ((MR_Box) (ll_backend__var_locn__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__IntroducedFrom__pred__expr_is_constant__2352__1_3_p_0(
  MR_Word ll_backend__var_locn__VarStateMap_5,
  MR_Word ll_backend__var_locn__ExprnOpts_6,
  MR_Word ll_backend__var_locn__Rval_8)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Var_26;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__expr_is_constant_4_p_0(ll_backend__var_locn__VarStateMap_5, ll_backend__var_locn__ExprnOpts_6, ll_backend__var_locn__Rval_8, &ll_backend__var_locn__Var_26);
    }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn__IntroducedFrom__pred__record_copy__1866__1_3_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_38,
  MR_Word ll_backend__var_locn__HeadVar__2_39,
  MR_Word * ll_backend__var_locn__HeadVar__3_40)
{
  {
    MR_bool ll_backend__var_locn__succeeded;

    {
      parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__var_locn__HeadVar__1_38, ll_backend__var_locn__HeadVar__2_39, ll_backend__var_locn__HeadVar__3_40);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__IntroducedFrom__pred__record_copy__1863__1_3_p_0(
  MR_Word ll_backend__var_locn__LocVarMap0_9,
  MR_Word ll_backend__var_locn__HeadVar__2_33,
  MR_Word * ll_backend__var_locn__HeadVar__3_34)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__conv0_HeadVar__3_34;

    {
      ll_backend__var_locn__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__var_locn_scalar_common_1[1], ll_backend__var_locn__LocVarMap0_9, ((MR_Box) (ll_backend__var_locn__HeadVar__2_33)), &ll_backend__var_locn__conv0_HeadVar__3_34);
    }
    if (ll_backend__var_locn__succeeded)
      {
        *ll_backend__var_locn__HeadVar__3_34 = ((MR_Word) ll_backend__var_locn__conv0_HeadVar__3_34);
        ll_backend__var_locn__succeeded = MR_TRUE;
      }
    return ll_backend__var_locn__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__IntroducedFrom__pred__var_locn_var_becomes_dead__1993__1_2_p_0(
  MR_Word ll_backend__var_locn__FirstTime_6,
  MR_Word ll_backend__var_locn__HeadVar__2_38)
{
  {
    MR_bool ll_backend__var_locn__succeeded = (ll_backend__var_locn__FirstTime_6 == ll_backend__var_locn__HeadVar__2_38);

    return ll_backend__var_locn__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__IntroducedFrom__pred__var_locn_var_becomes_dead__1971__1_2_p_0(
  MR_Word ll_backend__var_locn__FirstTime_6,
  MR_Word ll_backend__var_locn__HeadVar__2_27)
{
  {
    MR_bool ll_backend__var_locn__succeeded = (ll_backend__var_locn__FirstTime_6 == ll_backend__var_locn__HeadVar__2_27);

    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn____Compare____var_state_map_0_0(
  MR_Word * ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2,
  MR_Word ll_backend__var_locn__HeadVar__3_3)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Cast_HeadVar1_4 = ll_backend__var_locn__HeadVar__2_2;
    MR_Word ll_backend__var_locn__Cast_HeadVar2_5 = ll_backend__var_locn__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_2[3], ll_backend__var_locn__HeadVar__1_1, ((MR_Box) (ll_backend__var_locn__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__var_locn__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_state_map_0_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Cast_HeadVar1_3 = ll_backend__var_locn__HeadVar__1_1;
    MR_Word ll_backend__var_locn__Cast_HeadVar2_4 = ll_backend__var_locn__HeadVar__2_2;

    {
      ll_backend__var_locn__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__var_locn_scalar_common_2[3], ((MR_Box) (ll_backend__var_locn__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__var_locn__Cast_HeadVar2_4)));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn____Compare____var_state_0_0(
  MR_Word * ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2,
  MR_Word ll_backend__var_locn__HeadVar__3_3)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Integer ll_backend__var_locn__CastX_18 = (MR_Integer) ll_backend__var_locn__HeadVar__2_2;
    MR_Integer ll_backend__var_locn__CastY_19 = (MR_Integer) ll_backend__var_locn__HeadVar__3_3;

    ll_backend__var_locn__succeeded = (ll_backend__var_locn__CastX_18 == ll_backend__var_locn__CastY_19);
    if (ll_backend__var_locn__succeeded)
      *ll_backend__var_locn__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__var_locn__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__var_locn__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__var_locn__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__var_locn__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ll_backend__var_locn__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__var_locn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__var_locn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ll_backend__var_locn__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ll_backend__var_locn__Var_14;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[4], &ll_backend__var_locn__Var_14, ((MR_Box) (ll_backend__var_locn__Var_4)), ((MR_Box) (ll_backend__var_locn__Var_9)));
        }
        ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_14 == (MR_Integer) 0);
        ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
        if (ll_backend__var_locn__succeeded)
          *ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__Var_14;
        else
          {
            MR_Word ll_backend__var_locn__Var_15;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[7], &ll_backend__var_locn__Var_15, ((MR_Box) (ll_backend__var_locn__Var_5)), ((MR_Box) (ll_backend__var_locn__Var_10)));
            }
            ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_15 == (MR_Integer) 0);
            ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
            if (ll_backend__var_locn__succeeded)
              *ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__Var_15;
            else
              {
                MR_Word ll_backend__var_locn__Var_16;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[7], &ll_backend__var_locn__Var_16, ((MR_Box) (ll_backend__var_locn__Var_6)), ((MR_Box) (ll_backend__var_locn__Var_11)));
                }
                ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_16 == (MR_Integer) 0);
                ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
                if (ll_backend__var_locn__succeeded)
                  *ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__Var_16;
                else
                  {
                    MR_Word ll_backend__var_locn__Var_17;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[1], &ll_backend__var_locn__Var_17, ((MR_Box) (ll_backend__var_locn__Var_7)), ((MR_Box) (ll_backend__var_locn__Var_12)));
                    }
                    ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_17 == (MR_Integer) 0);
                    ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
                    if (ll_backend__var_locn__succeeded)
                      *ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__Var_17;
                    else
                      {
                        MR_Integer ll_backend__var_locn__Var_25 = (MR_Integer) ll_backend__var_locn__Var_8;
                        MR_Integer ll_backend__var_locn__Var_26 = (MR_Integer) ll_backend__var_locn__Var_13;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__var_locn__HeadVar__1_1, ll_backend__var_locn__Var_25, ll_backend__var_locn__Var_26);
                        }
                      }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_state_0_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Integer ll_backend__var_locn__CastX_13 = (MR_Integer) ll_backend__var_locn__HeadVar__1_1;
    MR_Integer ll_backend__var_locn__CastY_14 = (MR_Integer) ll_backend__var_locn__HeadVar__2_2;

    ll_backend__var_locn__succeeded = (ll_backend__var_locn__CastX_13 == ll_backend__var_locn__CastY_14);
    if (ll_backend__var_locn__succeeded)
      ll_backend__var_locn__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__var_locn__TypeInfo_16_16;
        MR_Word ll_backend__var_locn__TypeInfo_17_17;
        MR_Word ll_backend__var_locn__TypeInfo_18_18;
        MR_Word ll_backend__var_locn__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__var_locn__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ll_backend__var_locn__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ll_backend__var_locn__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ll_backend__var_locn__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__var_locn__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__var_locn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__var_locn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 4)));

        {
          ll_backend__var_locn__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[4], ((MR_Box) (ll_backend__var_locn__Var_3)), ((MR_Box) (ll_backend__var_locn__Var_8)));
        }
        if (ll_backend__var_locn__succeeded)
          {
            ll_backend__var_locn__TypeInfo_16_16 = (MR_Word) &ll_backend__var_locn_scalar_common_1[7];
            {
              ll_backend__var_locn__succeeded = mercury__builtin__unify_2_p_0(ll_backend__var_locn__TypeInfo_16_16, ((MR_Box) (ll_backend__var_locn__Var_4)), ((MR_Box) (ll_backend__var_locn__Var_9)));
            }
            if (ll_backend__var_locn__succeeded)
              {
                ll_backend__var_locn__TypeInfo_17_17 = (MR_Word) &ll_backend__var_locn_scalar_common_1[7];
                {
                  ll_backend__var_locn__succeeded = mercury__builtin__unify_2_p_0(ll_backend__var_locn__TypeInfo_17_17, ((MR_Box) (ll_backend__var_locn__Var_5)), ((MR_Box) (ll_backend__var_locn__Var_10)));
                }
                if (ll_backend__var_locn__succeeded)
                  {
                    ll_backend__var_locn__TypeInfo_18_18 = (MR_Word) &ll_backend__var_locn_scalar_common_1[1];
                    {
                      ll_backend__var_locn__succeeded = mercury__builtin__unify_2_p_0(ll_backend__var_locn__TypeInfo_18_18, ((MR_Box) (ll_backend__var_locn__Var_6)), ((MR_Box) (ll_backend__var_locn__Var_11)));
                    }
                    if (ll_backend__var_locn__succeeded)
                      ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_7 == ll_backend__var_locn__Var_12);
                  }
              }
          }
      }
    return ll_backend__var_locn__succeeded;
  }
}

void MR_CALL 
ll_backend__var_locn____Compare____var_locn_info_0_0(
  MR_Word * ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2,
  MR_Word ll_backend__var_locn__HeadVar__3_3)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Integer ll_backend__var_locn__CastX_42 = (MR_Integer) ll_backend__var_locn__HeadVar__2_2;
    MR_Integer ll_backend__var_locn__CastY_43 = (MR_Integer) ll_backend__var_locn__HeadVar__3_3;

    ll_backend__var_locn__succeeded = (ll_backend__var_locn__CastX_42 == ll_backend__var_locn__CastY_43);
    if (ll_backend__var_locn__succeeded)
      *ll_backend__var_locn__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__var_locn__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__var_locn__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__var_locn__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__var_locn__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer ll_backend__var_locn__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer ll_backend__var_locn__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ll_backend__var_locn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word ll_backend__var_locn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word ll_backend__var_locn__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 9)));
        MR_Integer ll_backend__var_locn__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 10)));
        MR_Integer ll_backend__var_locn__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 11)));
        MR_Word ll_backend__var_locn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 12)));
        MR_Word ll_backend__var_locn__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__var_locn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__var_locn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ll_backend__var_locn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__3_3, (MR_Integer) 4)));
        MR_Integer ll_backend__var_locn__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__3_3, (MR_Integer) 5)));
        MR_Integer ll_backend__var_locn__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word ll_backend__var_locn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word ll_backend__var_locn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word ll_backend__var_locn__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__3_3, (MR_Integer) 9)));
        MR_Integer ll_backend__var_locn__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__3_3, (MR_Integer) 10)));
        MR_Integer ll_backend__var_locn__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__3_3, (MR_Integer) 11)));
        MR_Word ll_backend__var_locn__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__3_3, (MR_Integer) 12)));
        MR_Word ll_backend__var_locn__Var_30;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[5], &ll_backend__var_locn__Var_30, ((MR_Box) (ll_backend__var_locn__Var_4)), ((MR_Box) (ll_backend__var_locn__Var_17)));
        }
        ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_30 == (MR_Integer) 0);
        ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
        if (ll_backend__var_locn__succeeded)
          *ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__Var_30;
        else
          {
            MR_Word ll_backend__var_locn__Var_31;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_2[5], &ll_backend__var_locn__Var_31, ((MR_Box) (ll_backend__var_locn__Var_5)), ((MR_Box) (ll_backend__var_locn__Var_18)));
            }
            ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_31 == (MR_Integer) 0);
            ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
            if (ll_backend__var_locn__succeeded)
              *ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__Var_31;
            else
              {
                MR_Word ll_backend__var_locn__Var_32;
                MR_Integer ll_backend__var_locn__Var_57 = (MR_Integer) ll_backend__var_locn__Var_6;
                MR_Integer ll_backend__var_locn__Var_58 = (MR_Integer) ll_backend__var_locn__Var_19;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__var_locn__Var_32, ll_backend__var_locn__Var_57, ll_backend__var_locn__Var_58);
                }
                ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_32 == (MR_Integer) 0);
                ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
                if (ll_backend__var_locn__succeeded)
                  *ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__Var_32;
                else
                  {
                    MR_Word ll_backend__var_locn__Var_33;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_2[6], &ll_backend__var_locn__Var_33, ((MR_Box) (ll_backend__var_locn__Var_7)), ((MR_Box) (ll_backend__var_locn__Var_20)));
                    }
                    ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_33 == (MR_Integer) 0);
                    ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
                    if (ll_backend__var_locn__succeeded)
                      *ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__Var_33;
                    else
                      {
                        MR_Word ll_backend__var_locn__Var_34;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_2[7], &ll_backend__var_locn__Var_34, ((MR_Box) (ll_backend__var_locn__Var_8)), ((MR_Box) (ll_backend__var_locn__Var_21)));
                        }
                        ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_34 == (MR_Integer) 0);
                        ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
                        if (ll_backend__var_locn__succeeded)
                          *ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__Var_34;
                        else
                          {
                            MR_Word ll_backend__var_locn__Var_35;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__var_locn__Var_35, ll_backend__var_locn__Var_9, ll_backend__var_locn__Var_22);
                            }
                            ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_35 == (MR_Integer) 0);
                            ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
                            if (ll_backend__var_locn__succeeded)
                              *ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__Var_35;
                            else
                              {
                                MR_Word ll_backend__var_locn__Var_36;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__var_locn__Var_36, ll_backend__var_locn__Var_10, ll_backend__var_locn__Var_23);
                                }
                                ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_36 == (MR_Integer) 0);
                                ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
                                if (ll_backend__var_locn__succeeded)
                                  *ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__Var_36;
                                else
                                  {
                                    MR_Word ll_backend__var_locn__Var_37;

                                    {
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_2[3], &ll_backend__var_locn__Var_37, ((MR_Box) (ll_backend__var_locn__Var_11)), ((MR_Box) (ll_backend__var_locn__Var_24)));
                                    }
                                    ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_37 == (MR_Integer) 0);
                                    ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
                                    if (ll_backend__var_locn__succeeded)
                                      *ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__Var_37;
                                    else
                                      {
                                        MR_Word ll_backend__var_locn__Var_38;

                                        {
                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_2[0], &ll_backend__var_locn__Var_38, ((MR_Box) (ll_backend__var_locn__Var_12)), ((MR_Box) (ll_backend__var_locn__Var_25)));
                                        }
                                        ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_38 == (MR_Integer) 0);
                                        ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
                                        if (ll_backend__var_locn__succeeded)
                                          *ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__Var_38;
                                        else
                                          {
                                            MR_Word ll_backend__var_locn__Var_39;

                                            {
                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[4], &ll_backend__var_locn__Var_39, ((MR_Box) (ll_backend__var_locn__Var_13)), ((MR_Box) (ll_backend__var_locn__Var_26)));
                                            }
                                            ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_39 == (MR_Integer) 0);
                                            ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
                                            if (ll_backend__var_locn__succeeded)
                                              *ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__Var_39;
                                            else
                                              {
                                                MR_Word ll_backend__var_locn__Var_40;

                                                {
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__var_locn__Var_40, ll_backend__var_locn__Var_14, ll_backend__var_locn__Var_27);
                                                }
                                                ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_40 == (MR_Integer) 0);
                                                ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
                                                if (ll_backend__var_locn__succeeded)
                                                  *ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__Var_40;
                                                else
                                                  {
                                                    MR_Word ll_backend__var_locn__Var_41;

                                                    {
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__var_locn__Var_41, ll_backend__var_locn__Var_15, ll_backend__var_locn__Var_28);
                                                    }
                                                    ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_41 == (MR_Integer) 0);
                                                    ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
                                                    if (ll_backend__var_locn__succeeded)
                                                      *ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__Var_41;
                                                    else
                                                      {
                                                        {
                                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[6], ll_backend__var_locn__HeadVar__1_1, ((MR_Box) (ll_backend__var_locn__Var_16)), ((MR_Box) (ll_backend__var_locn__Var_29)));
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

MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_locn_info_0_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Integer ll_backend__var_locn__CastX_29 = (MR_Integer) ll_backend__var_locn__HeadVar__1_1;
    MR_Integer ll_backend__var_locn__CastY_30 = (MR_Integer) ll_backend__var_locn__HeadVar__2_2;

    ll_backend__var_locn__succeeded = (ll_backend__var_locn__CastX_29 == ll_backend__var_locn__CastY_30);
    if (ll_backend__var_locn__succeeded)
      ll_backend__var_locn__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__var_locn__TypeInfo_32_32;
        MR_Word ll_backend__var_locn__TypeInfo_33_33;
        MR_Word ll_backend__var_locn__TypeInfo_34_34;
        MR_Word ll_backend__var_locn__TypeInfo_35_35;
        MR_Word ll_backend__var_locn__TypeInfo_36_36;
        MR_Word ll_backend__var_locn__TypeInfo_37_37;
        MR_Word ll_backend__var_locn__TypeInfo_38_38;
        MR_Word ll_backend__var_locn__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__var_locn__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ll_backend__var_locn__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ll_backend__var_locn__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 4)));
        MR_Integer ll_backend__var_locn__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 5)));
        MR_Integer ll_backend__var_locn__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word ll_backend__var_locn__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word ll_backend__var_locn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word ll_backend__var_locn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 9)));
        MR_Integer ll_backend__var_locn__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 10)));
        MR_Integer ll_backend__var_locn__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 11)));
        MR_Word ll_backend__var_locn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 12)));
        MR_Word ll_backend__var_locn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__var_locn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__var_locn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__var_locn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer ll_backend__var_locn__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer ll_backend__var_locn__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ll_backend__var_locn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word ll_backend__var_locn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word ll_backend__var_locn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 9)));
        MR_Integer ll_backend__var_locn__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 10)));
        MR_Integer ll_backend__var_locn__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 11)));
        MR_Word ll_backend__var_locn__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 12)));

        {
          ll_backend__var_locn__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[5], ((MR_Box) (ll_backend__var_locn__Var_3)), ((MR_Box) (ll_backend__var_locn__Var_16)));
        }
        if (ll_backend__var_locn__succeeded)
          {
            ll_backend__var_locn__TypeInfo_32_32 = (MR_Word) &ll_backend__var_locn_scalar_common_2[5];
            {
              ll_backend__var_locn__succeeded = mercury__builtin__unify_2_p_0(ll_backend__var_locn__TypeInfo_32_32, ((MR_Box) (ll_backend__var_locn__Var_4)), ((MR_Box) (ll_backend__var_locn__Var_17)));
            }
            if (ll_backend__var_locn__succeeded)
              {
                ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_5 == ll_backend__var_locn__Var_18);
                if (ll_backend__var_locn__succeeded)
                  {
                    ll_backend__var_locn__TypeInfo_33_33 = (MR_Word) &ll_backend__var_locn_scalar_common_2[6];
                    {
                      ll_backend__var_locn__succeeded = mercury__builtin__unify_2_p_0(ll_backend__var_locn__TypeInfo_33_33, ((MR_Box) (ll_backend__var_locn__Var_6)), ((MR_Box) (ll_backend__var_locn__Var_19)));
                    }
                    if (ll_backend__var_locn__succeeded)
                      {
                        ll_backend__var_locn__TypeInfo_34_34 = (MR_Word) &ll_backend__var_locn_scalar_common_2[7];
                        {
                          ll_backend__var_locn__succeeded = mercury__builtin__unify_2_p_0(ll_backend__var_locn__TypeInfo_34_34, ((MR_Box) (ll_backend__var_locn__Var_7)), ((MR_Box) (ll_backend__var_locn__Var_20)));
                        }
                        if (ll_backend__var_locn__succeeded)
                          {
                            ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_8 == ll_backend__var_locn__Var_21);
                            if (ll_backend__var_locn__succeeded)
                              {
                                ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_9 == ll_backend__var_locn__Var_22);
                                if (ll_backend__var_locn__succeeded)
                                  {
                                    ll_backend__var_locn__TypeInfo_35_35 = (MR_Word) &ll_backend__var_locn_scalar_common_2[3];
                                    {
                                      ll_backend__var_locn__succeeded = mercury__builtin__unify_2_p_0(ll_backend__var_locn__TypeInfo_35_35, ((MR_Box) (ll_backend__var_locn__Var_10)), ((MR_Box) (ll_backend__var_locn__Var_23)));
                                    }
                                    if (ll_backend__var_locn__succeeded)
                                      {
                                        ll_backend__var_locn__TypeInfo_36_36 = (MR_Word) &ll_backend__var_locn_scalar_common_2[0];
                                        {
                                          ll_backend__var_locn__succeeded = mercury__builtin__unify_2_p_0(ll_backend__var_locn__TypeInfo_36_36, ((MR_Box) (ll_backend__var_locn__Var_11)), ((MR_Box) (ll_backend__var_locn__Var_24)));
                                        }
                                        if (ll_backend__var_locn__succeeded)
                                          {
                                            ll_backend__var_locn__TypeInfo_37_37 = (MR_Word) &ll_backend__var_locn_scalar_common_1[4];
                                            {
                                              ll_backend__var_locn__succeeded = mercury__builtin__unify_2_p_0(ll_backend__var_locn__TypeInfo_37_37, ((MR_Box) (ll_backend__var_locn__Var_12)), ((MR_Box) (ll_backend__var_locn__Var_25)));
                                            }
                                            if (ll_backend__var_locn__succeeded)
                                              {
                                                ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_13 == ll_backend__var_locn__Var_26);
                                                if (ll_backend__var_locn__succeeded)
                                                  {
                                                    ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_14 == ll_backend__var_locn__Var_27);
                                                    if (ll_backend__var_locn__succeeded)
                                                      {
                                                        ll_backend__var_locn__TypeInfo_38_38 = (MR_Word) &ll_backend__var_locn_scalar_common_1[6];
                                                        {
                                                          ll_backend__var_locn__succeeded = mercury__builtin__unify_2_p_0(ll_backend__var_locn__TypeInfo_38_38, ((MR_Box) (ll_backend__var_locn__Var_15)), ((MR_Box) (ll_backend__var_locn__Var_28)));
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
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn____Compare____var_avail_0_0(
  MR_Word * ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2,
  MR_Word ll_backend__var_locn__HeadVar__3_3)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Integer ll_backend__var_locn__CastX_8 = (MR_Integer) ll_backend__var_locn__HeadVar__2_2;
    MR_Integer ll_backend__var_locn__CastY_9 = (MR_Integer) ll_backend__var_locn__HeadVar__3_3;

    ll_backend__var_locn__succeeded = (ll_backend__var_locn__CastX_8 == ll_backend__var_locn__CastY_9);
    if (ll_backend__var_locn__succeeded)
      *ll_backend__var_locn__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((ll_backend__var_locn__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ll_backend__var_locn__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *ll_backend__var_locn__HeadVar__1_1 = (MR_Integer) 0;
      else
        *ll_backend__var_locn__HeadVar__1_1 = (MR_Integer) 2;
    else
      {
        MR_Word ll_backend__var_locn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 0)));

        if ((ll_backend__var_locn__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__var_locn__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word ll_backend__var_locn__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__3_3, (MR_Integer) 0)));

            {
              ll_backend__llds____Compare____rval_0_0(ll_backend__var_locn__HeadVar__1_1, ll_backend__var_locn__Var_11, ll_backend__var_locn__Var_5);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_avail_0_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Integer ll_backend__var_locn__CastX_7 = (MR_Integer) ll_backend__var_locn__HeadVar__1_1;
    MR_Integer ll_backend__var_locn__CastY_8 = (MR_Integer) ll_backend__var_locn__HeadVar__2_2;

    ll_backend__var_locn__succeeded = (ll_backend__var_locn__CastX_7 == ll_backend__var_locn__CastY_8);
    if (ll_backend__var_locn__succeeded)
      ll_backend__var_locn__succeeded = MR_TRUE;
    else
    if ((ll_backend__var_locn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer ll_backend__var_locn__CastX_5 = (MR_Integer) ll_backend__var_locn__HeadVar__1_1;
        MR_Integer ll_backend__var_locn__CastY_6 = (MR_Integer) ll_backend__var_locn__HeadVar__2_2;

        ll_backend__var_locn__succeeded = (ll_backend__var_locn__CastY_6 == ll_backend__var_locn__CastX_5);
      }
    else
      {
        MR_Word ll_backend__var_locn__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__Var_4;

        ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__var_locn__succeeded)
          {
            ll_backend__var_locn__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 0)));
            {
              ll_backend__var_locn__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__var_locn__Var_3, ll_backend__var_locn__Var_4);
            }
          }
      }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn____Compare____loc_var_map_0_0(
  MR_Word * ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2,
  MR_Word ll_backend__var_locn__HeadVar__3_3)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Cast_HeadVar1_4 = ll_backend__var_locn__HeadVar__2_2;
    MR_Word ll_backend__var_locn__Cast_HeadVar2_5 = ll_backend__var_locn__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_2[0], ll_backend__var_locn__HeadVar__1_1, ((MR_Box) (ll_backend__var_locn__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__var_locn__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____loc_var_map_0_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Cast_HeadVar1_3 = ll_backend__var_locn__HeadVar__1_1;
    MR_Word ll_backend__var_locn__Cast_HeadVar2_4 = ll_backend__var_locn__HeadVar__2_2;

    {
      ll_backend__var_locn__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__var_locn_scalar_common_2[0], ((MR_Box) (ll_backend__var_locn__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__var_locn__Cast_HeadVar2_4)));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn____Compare____dep_search_lval_0_0(
  MR_Word * ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2,
  MR_Word ll_backend__var_locn__HeadVar__3_3)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Integer ll_backend__var_locn__CastX_8 = (MR_Integer) ll_backend__var_locn__HeadVar__2_2;
    MR_Integer ll_backend__var_locn__CastY_9 = (MR_Integer) ll_backend__var_locn__HeadVar__3_3;

    ll_backend__var_locn__succeeded = (ll_backend__var_locn__CastX_8 == ll_backend__var_locn__CastY_9);
    if (ll_backend__var_locn__succeeded)
      *ll_backend__var_locn__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((ll_backend__var_locn__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ll_backend__var_locn__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *ll_backend__var_locn__HeadVar__1_1 = (MR_Integer) 0;
      else
        *ll_backend__var_locn__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Word ll_backend__var_locn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 0)));

        if ((ll_backend__var_locn__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__var_locn__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word ll_backend__var_locn__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__3_3, (MR_Integer) 0)));

            {
              ll_backend__llds____Compare____lval_0_0(ll_backend__var_locn__HeadVar__1_1, ll_backend__var_locn__Var_11, ll_backend__var_locn__Var_7);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____dep_search_lval_0_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Integer ll_backend__var_locn__CastX_7 = (MR_Integer) ll_backend__var_locn__HeadVar__1_1;
    MR_Integer ll_backend__var_locn__CastY_8 = (MR_Integer) ll_backend__var_locn__HeadVar__2_2;

    ll_backend__var_locn__succeeded = (ll_backend__var_locn__CastX_7 == ll_backend__var_locn__CastY_8);
    if (ll_backend__var_locn__succeeded)
      ll_backend__var_locn__succeeded = MR_TRUE;
    else
    if ((ll_backend__var_locn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer ll_backend__var_locn__CastX_3 = (MR_Integer) ll_backend__var_locn__HeadVar__1_1;
        MR_Integer ll_backend__var_locn__CastY_4 = (MR_Integer) ll_backend__var_locn__HeadVar__2_2;

        ll_backend__var_locn__succeeded = (ll_backend__var_locn__CastY_4 == ll_backend__var_locn__CastX_3);
      }
    else
      {
        MR_Word ll_backend__var_locn__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__Var_6;

        ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__var_locn__succeeded)
          {
            ll_backend__var_locn__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 0)));
            {
              ll_backend__var_locn__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__var_locn__Var_5, ll_backend__var_locn__Var_6);
            }
          }
      }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn____Compare____dead_or_alive_0_0(
  MR_Word * ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2,
  MR_Word ll_backend__var_locn__HeadVar__3_3)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Integer ll_backend__var_locn__Cast_HeadVar1_4 = (MR_Integer) ll_backend__var_locn__HeadVar__2_2;
    MR_Integer ll_backend__var_locn__Cast_HeadVar2_5 = (MR_Integer) ll_backend__var_locn__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__var_locn__HeadVar__1_1, ll_backend__var_locn__Cast_HeadVar1_4, ll_backend__var_locn__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____dead_or_alive_0_0(
  MR_Word ll_backend__var_locn__HeadVar__2_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2)
{
  {
    MR_bool ll_backend__var_locn__succeeded = (ll_backend__var_locn__HeadVar__2_1 == ll_backend__var_locn__HeadVar__2_2);

    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn__var_locn_set_loc_var_map_3_p_0(
  MR_Word ll_backend__var_locn__LVM_4,
  MR_Word ll_backend__var_locn__VI_5,
  MR_Word * ll_backend__var_locn__HeadVar__3_3)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 12)));
    MR_Word ll_backend__var_locn__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 8)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__var_locn__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__var_locn__Var_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__var_locn__Var_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__var_locn__Var_8));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__var_locn__Var_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__var_locn__Var_10));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__var_locn__Var_11));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__var_locn__Var_12));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__var_locn__Var_13));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__var_locn__LVM_4));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ll_backend__var_locn__Var_15));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ll_backend__var_locn__Var_16));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ll_backend__var_locn__Var_17));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ll_backend__var_locn__Var_18));
    }
  }
}

static void MR_CALL 
ll_backend__var_locn__var_locn_set_var_state_map_3_p_0(
  MR_Word ll_backend__var_locn__VSM_4,
  MR_Word ll_backend__var_locn__VI_5,
  MR_Word * ll_backend__var_locn__HeadVar__3_3)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 12)));
    MR_Word ll_backend__var_locn__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_5, (MR_Integer) 7)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__var_locn__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__var_locn__Var_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__var_locn__Var_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__var_locn__Var_8));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__var_locn__Var_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__var_locn__Var_10));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__var_locn__Var_11));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__var_locn__Var_12));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__var_locn__VSM_4));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__var_locn__Var_14));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ll_backend__var_locn__Var_15));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ll_backend__var_locn__Var_16));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ll_backend__var_locn__Var_17));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ll_backend__var_locn__Var_18));
    }
  }
}

static void MR_CALL 
ll_backend__var_locn__var_locn_get_loc_var_map_2_p_0(
  MR_Word ll_backend__var_locn__VI_3,
  MR_Word * ll_backend__var_locn__HeadVar__2_2)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_12;
    MR_Integer ll_backend__var_locn__Var_13;
    MR_Integer ll_backend__var_locn__Var_14;
    MR_Word ll_backend__var_locn__Var_15;

    *ll_backend__var_locn__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 8)));
    ll_backend__var_locn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 9)));
    ll_backend__var_locn__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 10)));
    ll_backend__var_locn__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 11)));
    ll_backend__var_locn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 12)));
  }
}

static void MR_CALL 
ll_backend__var_locn__var_locn_get_var_state_map_2_p_0(
  MR_Word ll_backend__var_locn__VI_3,
  MR_Word * ll_backend__var_locn__HeadVar__2_2)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_11;
    MR_Word ll_backend__var_locn__Var_12;
    MR_Integer ll_backend__var_locn__Var_13;
    MR_Integer ll_backend__var_locn__Var_14;
    MR_Word ll_backend__var_locn__Var_15;

    *ll_backend__var_locn__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 7)));
    ll_backend__var_locn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 8)));
    ll_backend__var_locn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 9)));
    ll_backend__var_locn__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 10)));
    ll_backend__var_locn__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 11)));
    ll_backend__var_locn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 12)));
  }
}

static void MR_CALL 
ll_backend__var_locn__var_locn_get_vartypes_2_p_0(
  MR_Word ll_backend__var_locn__VI_3,
  MR_Word * ll_backend__var_locn__HeadVar__2_2)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_5;
    MR_Word ll_backend__var_locn__Var_6;
    MR_Word ll_backend__var_locn__Var_7;
    MR_Integer ll_backend__var_locn__Var_8;
    MR_Integer ll_backend__var_locn__Var_9;
    MR_Word ll_backend__var_locn__Var_10;
    MR_Word ll_backend__var_locn__Var_11;
    MR_Word ll_backend__var_locn__Var_12;
    MR_Integer ll_backend__var_locn__Var_13;
    MR_Integer ll_backend__var_locn__Var_14;
    MR_Word ll_backend__var_locn__Var_15;

    *ll_backend__var_locn__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 1)));
    ll_backend__var_locn__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 2)));
    ll_backend__var_locn__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 3)));
    ll_backend__var_locn__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 4)));
    ll_backend__var_locn__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 5)));
    ll_backend__var_locn__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 6)));
    ll_backend__var_locn__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 7)));
    ll_backend__var_locn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 8)));
    ll_backend__var_locn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 9)));
    ll_backend__var_locn__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 10)));
    ll_backend__var_locn__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 11)));
    ll_backend__var_locn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 12)));
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__nonempty_state_1_p_0(
  MR_Word ll_backend__var_locn__State_2)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__LvalSet_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_2, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__MaybeConstRval_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_2, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__MaybeExprRval_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_2, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_2, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_2, (MR_Integer) 4)));

    {
      ll_backend__var_locn__succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__var_locn__LvalSet_3);
    }
    if (!(ll_backend__var_locn__succeeded))
      {
        {
          MR_Word ll_backend__var_locn__Var_8;

          ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__MaybeConstRval_4)) == (MR_mktag((MR_Integer) 1)));
          if (ll_backend__var_locn__succeeded)
            ll_backend__var_locn__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__MaybeConstRval_4, (MR_Integer) 0)));
        }
        if (!(ll_backend__var_locn__succeeded))
          {
            MR_Word ll_backend__var_locn__Var_9;

            ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__MaybeExprRval_5)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__var_locn__succeeded)
              ll_backend__var_locn__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__MaybeExprRval_5, (MR_Integer) 0)));
          }
      }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn__get_var_name_3_p_0(
  MR_Word ll_backend__var_locn__VLI_4,
  MR_Word ll_backend__var_locn__Var_5,
  MR_String * ll_backend__var_locn__Name_6)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__VarSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 12)));

    {
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__var_locn__VarSet_7, ll_backend__var_locn__Var_5, ll_backend__var_locn__Name_6);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__rval_depends_on_search_lval_2_p_0(
  MR_Word ll_backend__var_locn__Rval_3,
  MR_Word ll_backend__var_locn__SearchLval_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__var_locn__succeeded;

        switch (MR_tag((MR_Word) ll_backend__var_locn__Rval_3)) {
          default:
            ll_backend__var_locn__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__var_locn__Lval_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__Rval_3, (MR_Integer) 0)));

              switch (MR_tag((MR_Word) ll_backend__var_locn__Lval_5)) {
                default:
                  ll_backend__var_locn__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                  if ((ll_backend__var_locn__SearchLval_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    ll_backend__var_locn__succeeded = MR_TRUE;
                  else
                    {
                      MR_Word ll_backend__var_locn__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__SearchLval_4, (MR_Integer) 0)));

                      {
                        ll_backend__var_locn__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__var_locn__Lval_5, ll_backend__var_locn__Var_59);
                      }
                    }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval_5, (MR_Integer) 0)))) {
                    default:
                      ll_backend__var_locn__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word ll_backend__var_locn__Var_60;

                        ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__SearchLval_4)) == (MR_mktag((MR_Integer) 1)));
                        if (ll_backend__var_locn__succeeded)
                          {
                            ll_backend__var_locn__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__SearchLval_4, (MR_Integer) 0)));
                            {
                              ll_backend__var_locn__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__var_locn__Lval_5, ll_backend__var_locn__Var_60);
                            }
                          }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word ll_backend__var_locn__Var_61;

                        ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__SearchLval_4)) == (MR_mktag((MR_Integer) 1)));
                        if (ll_backend__var_locn__succeeded)
                          {
                            ll_backend__var_locn__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__SearchLval_4, (MR_Integer) 0)));
                            {
                              ll_backend__var_locn__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__var_locn__Lval_5, ll_backend__var_locn__Var_61);
                            }
                          }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word ll_backend__var_locn__Var_62;

                        ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__SearchLval_4)) == (MR_mktag((MR_Integer) 1)));
                        if (ll_backend__var_locn__succeeded)
                          {
                            ll_backend__var_locn__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__SearchLval_4, (MR_Integer) 0)));
                            {
                              ll_backend__var_locn__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__var_locn__Lval_5, ll_backend__var_locn__Var_62);
                            }
                          }
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Word ll_backend__var_locn__Rval0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval_5, (MR_Integer) 2)));
                        MR_Word ll_backend__var_locn__Rval1_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval_5, (MR_Integer) 3)));
                        MR_Word ll_backend__var_locn___Tag_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval_5, (MR_Integer) 1)));

                        {
                          ll_backend__var_locn__succeeded = ll_backend__var_locn__rval_depends_on_search_lval_2_p_0(ll_backend__var_locn__Rval0_36, ll_backend__var_locn__SearchLval_4);
                        }
                        if (!(ll_backend__var_locn__succeeded))
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ll_backend__var_locn__next_value_of_Rval_3 = ll_backend__var_locn__Rval1_37;

                              ll_backend__var_locn__Rval_3 = ll_backend__var_locn__next_value_of_Rval_3;
                            }
                            continue;
                          }
                      }
                      break;
                    case (MR_Integer) 12:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.lval_depends_on_search_lval\'/2", (MR_String) "lvar");
                        }
                        ll_backend__var_locn__succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.rval_depends_on_search_lval\'/2", (MR_String) "var");
              }
              ll_backend__var_locn__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__var_locn__SubRval_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__var_locn__Rval_3, (MR_Integer) 1)));
              MR_Integer ll_backend__var_locn___Tag_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__var_locn__Rval_3, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ll_backend__var_locn__next_value_of_Rval_3 = ll_backend__var_locn__SubRval_7;

                ll_backend__var_locn__Rval_3 = ll_backend__var_locn__next_value_of_Rval_3;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Rval_3, (MR_Integer) 0)))) {
              default:
                ll_backend__var_locn__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__var_locn__SubRval_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Rval_3, (MR_Integer) 2)));
                  MR_Word ll_backend__var_locn___Op_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Rval_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__var_locn__next_value_of_Rval_3 = ll_backend__var_locn__SubRval_20;

                    ll_backend__var_locn__Rval_3 = ll_backend__var_locn__next_value_of_Rval_3;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ll_backend__var_locn__SubRvalA_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Rval_3, (MR_Integer) 2)));
                  MR_Word ll_backend__var_locn__SubRvalB_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Rval_3, (MR_Integer) 3)));
                  MR_Word ll_backend__var_locn___Op_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Rval_3, (MR_Integer) 1)));

                  {
                    ll_backend__var_locn__succeeded = ll_backend__var_locn__rval_depends_on_search_lval_2_p_0(ll_backend__var_locn__SubRvalA_9, ll_backend__var_locn__SearchLval_4);
                  }
                  if (!(ll_backend__var_locn__succeeded))
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word ll_backend__var_locn__next_value_of_Rval_3 = ll_backend__var_locn__SubRvalB_10;

                        ll_backend__var_locn__Rval_3 = ll_backend__var_locn__next_value_of_Rval_3;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ll_backend__var_locn__MemRef_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Rval_3, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) ll_backend__var_locn__MemRef_11)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ll_backend__var_locn__SubRval_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__MemRef_11, (MR_Integer) 0)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__var_locn__next_value_of_Rval_3 = ll_backend__var_locn__SubRval_30;

                          ll_backend__var_locn__Rval_3 = ll_backend__var_locn__next_value_of_Rval_3;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ll_backend__var_locn__SubRval_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__MemRef_11, (MR_Integer) 0)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__var_locn__next_value_of_Rval_3 = ll_backend__var_locn__SubRval_23;

                          ll_backend__var_locn__Rval_3 = ll_backend__var_locn__next_value_of_Rval_3;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word ll_backend__var_locn__CellRval_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__var_locn__MemRef_11, (MR_Integer) 0)));
                        MR_Word ll_backend__var_locn__FieldNumRval_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__var_locn__MemRef_11, (MR_Integer) 2)));
                        MR_Word ll_backend__var_locn___MaybeTag_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__var_locn__MemRef_11, (MR_Integer) 1)));

                        {
                          ll_backend__var_locn__succeeded = ll_backend__var_locn__rval_depends_on_search_lval_2_p_0(ll_backend__var_locn__CellRval_12, ll_backend__var_locn__SearchLval_4);
                        }
                        if (ll_backend__var_locn__succeeded)
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word ll_backend__var_locn__next_value_of_Rval_3 = ll_backend__var_locn__FieldNumRval_14;

                              ll_backend__var_locn__Rval_3 = ll_backend__var_locn__next_value_of_Rval_3;
                            }
                            continue;
                          }
                      }
                      break;
                  }
                }
                break;
            }
            break;
        }
        return ll_backend__var_locn__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
ll_backend__var_locn__lval_does_not_support_lval_2_p_0(
  MR_Word ll_backend__var_locn__Lval1_3,
  MR_Word ll_backend__var_locn__Lval2_4)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Var_5;

    {
      ll_backend__var_locn__Var_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_5, 0) = ((MR_Box) (ll_backend__var_locn__Lval1_3));
    }
    switch (MR_tag((MR_Word) ll_backend__var_locn__Lval2_4)) {
      default:
        ll_backend__var_locn__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          ll_backend__var_locn__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__var_locn__Lval2_4, ll_backend__var_locn__Lval1_3);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval2_4, (MR_Integer) 0)))) {
          default:
            ll_backend__var_locn__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              ll_backend__var_locn__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__var_locn__Lval2_4, ll_backend__var_locn__Lval1_3);
            }
            break;
          case (MR_Integer) 2:
            {
              ll_backend__var_locn__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__var_locn__Lval2_4, ll_backend__var_locn__Lval1_3);
            }
            break;
          case (MR_Integer) 3:
            {
              ll_backend__var_locn__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__var_locn__Lval2_4, ll_backend__var_locn__Lval1_3);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__var_locn__Rval0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval2_4, (MR_Integer) 2)));
              MR_Word ll_backend__var_locn__Rval1_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval2_4, (MR_Integer) 3)));
              MR_Word ll_backend__var_locn___Tag_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval2_4, (MR_Integer) 1)));

              {
                ll_backend__var_locn__succeeded = ll_backend__var_locn__rval_depends_on_search_lval_2_p_0(ll_backend__var_locn__Rval0_11, ll_backend__var_locn__Var_5);
              }
              if (!(ll_backend__var_locn__succeeded))
                {
                  ll_backend__var_locn__succeeded = ll_backend__var_locn__rval_depends_on_search_lval_2_p_0(ll_backend__var_locn__Rval1_12, ll_backend__var_locn__Var_5);
                }
            }
            break;
          case (MR_Integer) 12:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.lval_depends_on_search_lval\'/2", (MR_String) "lvar");
              }
              ll_backend__var_locn__succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
    return ll_backend__var_locn__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__is_root_lval_1_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1)
{
  {
    MR_bool ll_backend__var_locn__succeeded;

    switch (MR_tag((MR_Word) ll_backend__var_locn__HeadVar__1_1)) {
      default:
        ll_backend__var_locn__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        ll_backend__var_locn__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 0)))) {
          default:
            ll_backend__var_locn__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            ll_backend__var_locn__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            ll_backend__var_locn__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 2:
            ll_backend__var_locn__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            ll_backend__var_locn__succeeded = MR_TRUE;
            break;
        }
        break;
    }
    return ll_backend__var_locn__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__make_var_not_depend_on_root_lval_4_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn__make_var_not_depend_on_root_lval_4_p_0(
  MR_Word ll_backend__var_locn__Var_5,
  MR_Word ll_backend__var_locn__Lval_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_11,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_LocVarMap_12)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Var_13;
    MR_Word ll_backend__var_locn__Vars0_8;
    MR_Box ll_backend__var_locn__conv0_Vars0_8;

    {
      ll_backend__var_locn__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_13, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_13, 1) = ((MR_Box) (ll_backend__var_locn__make_var_not_depend_on_root_lval_4_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_13, 3) = ((MR_Box) (ll_backend__var_locn__Lval_6));
    }
    {
      mercury__require__expect_4_p_0(ll_backend__var_locn__Var_13, (MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.make_var_not_depend_on_root_lval\'/4", (MR_String) "non-root lval");
    }
    {
      ll_backend__var_locn__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__var_locn_scalar_common_1[1], ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_11, ((MR_Box) (ll_backend__var_locn__Lval_6)), &ll_backend__var_locn__conv0_Vars0_8);
    }
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__Vars0_8 = ((MR_Word) ll_backend__var_locn__conv0_Vars0_8);
        ll_backend__var_locn__succeeded = MR_TRUE;
      }
    if (ll_backend__var_locn__succeeded)
      {
        MR_Word ll_backend__var_locn__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        MR_Word ll_backend__var_locn__Vars_9;

        {
          parse_tree__set_of_var__delete_3_p_0(ll_backend__var_locn__TypeCtorInfo_24_24, ll_backend__var_locn__Var_5, ll_backend__var_locn__Vars0_8, &ll_backend__var_locn__Vars_9);
        }
        {
          ll_backend__var_locn__succeeded = parse_tree__set_of_var__is_empty_1_p_0(ll_backend__var_locn__TypeCtorInfo_24_24, ll_backend__var_locn__Vars_9);
        }
        if (ll_backend__var_locn__succeeded)
          {
            MR_Word ll_backend__var_locn__Var_10;
            MR_Box ll_backend__var_locn__conv1_Var_10;

            {
              mercury__map__det_remove_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__var_locn_scalar_common_1[1], ((MR_Box) (ll_backend__var_locn__Lval_6)), &ll_backend__var_locn__conv1_Var_10, ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_11, ll_backend__var_locn__STATE_VARIABLE_LocVarMap_12);
            }
            ll_backend__var_locn__Var_10 = ((MR_Word) ll_backend__var_locn__conv1_Var_10);
          }
        else
          {
            {
              mercury__map__det_update_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__var_locn_scalar_common_1[1], ((MR_Box) (ll_backend__var_locn__Lval_6)), ((MR_Box) (ll_backend__var_locn__Vars_9)), ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_11, ll_backend__var_locn__STATE_VARIABLE_LocVarMap_12);
            }
          }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.make_var_not_depend_on_root_lval\'/4", (MR_String) "no record");
          return;
        }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__make_var_depend_on_root_lval_4_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn__make_var_depend_on_root_lval_4_p_0(
  MR_Word ll_backend__var_locn__Var_5,
  MR_Word ll_backend__var_locn__Lval_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_10,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_LocVarMap_11)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Var_12;
    MR_Word ll_backend__var_locn__Vars0_8;
    MR_Box ll_backend__var_locn__conv0_Vars0_8;

    {
      ll_backend__var_locn__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_12, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_12, 1) = ((MR_Box) (ll_backend__var_locn__make_var_depend_on_root_lval_4_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_12, 3) = ((MR_Box) (ll_backend__var_locn__Lval_6));
    }
    {
      mercury__require__expect_4_p_0(ll_backend__var_locn__Var_12, (MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.make_var_depend_on_root_lval\'/4", (MR_String) "non-root lval");
    }
    {
      ll_backend__var_locn__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__var_locn_scalar_common_1[1], ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_10, ((MR_Box) (ll_backend__var_locn__Lval_6)), &ll_backend__var_locn__conv0_Vars0_8);
    }
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__Vars0_8 = ((MR_Word) ll_backend__var_locn__conv0_Vars0_8);
        ll_backend__var_locn__succeeded = MR_TRUE;
      }
    if (ll_backend__var_locn__succeeded)
      {
        MR_Word ll_backend__var_locn__Vars_9;

        {
          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__var_locn__Var_5, ll_backend__var_locn__Vars0_8, &ll_backend__var_locn__Vars_9);
        }
        {
          mercury__map__det_update_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__var_locn_scalar_common_1[1], ((MR_Box) (ll_backend__var_locn__Lval_6)), ((MR_Box) (ll_backend__var_locn__Vars_9)), ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_10, ll_backend__var_locn__STATE_VARIABLE_LocVarMap_11);
        }
      }
    else
      {
        MR_Word ll_backend__var_locn__Vars_18;

        {
          ll_backend__var_locn__Vars_18 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__var_locn__Var_5);
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__var_locn_scalar_common_1[1], ((MR_Box) (ll_backend__var_locn__Lval_6)), ((MR_Box) (ll_backend__var_locn__Vars_18)), ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_10, ll_backend__var_locn__STATE_VARIABLE_LocVarMap_11);
        }
      }
  }
}

static void MR_CALL 
ll_backend__var_locn__make_var_depend_on_lval_roots_4_p_0_2(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv0_STATE_VARIABLE_LocVarMap_11;

    {
      ll_backend__var_locn__make_var_depend_on_root_lval_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2), &ll_backend__var_locn__conv0_STATE_VARIABLE_LocVarMap_11);
    }
    *ll_backend__var_locn__wrapper_arg_3 = ((MR_Box) (ll_backend__var_locn__conv0_STATE_VARIABLE_LocVarMap_11));
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__make_var_depend_on_lval_roots_4_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) ll_backend__var_locn__wrapper_arg_1));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn__make_var_depend_on_lval_roots_4_p_0(
  MR_Word ll_backend__var_locn__Var_5,
  MR_Word ll_backend__var_locn__Lval_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_9,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_LocVarMap_10)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__TypeCtorInfo_10_33;
    MR_Word ll_backend__var_locn__Lvals_8;
    MR_Word ll_backend__var_locn__NoDupRootLvals_18;
    MR_Word ll_backend__var_locn__Var_19;
    MR_Word ll_backend__var_locn__LvalList_28;
    MR_Word ll_backend__var_locn__AllLvals_29;
    MR_Word ll_backend__var_locn__RootLvals_30;
    MR_Word ll_backend__var_locn__Var_31;
    MR_Box ll_backend__var_locn__conv1_STATE_VARIABLE_LocVarMap_10;

    {
      ll_backend__var_locn__Lvals_8 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__var_locn__Lval_6)));
    }
    ll_backend__var_locn__TypeCtorInfo_10_33 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    {
      mercury__set__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_10_33, ll_backend__var_locn__Lvals_8, &ll_backend__var_locn__LvalList_28);
    }
    {
      ll_backend__var_locn__Var_31 = ll_backend__code_util__lvals_in_lvals_1_f_0(ll_backend__var_locn__LvalList_28);
    }
    {
      ll_backend__var_locn__AllLvals_29 = mercury__list__f_43_43_2_f_0(ll_backend__var_locn__TypeCtorInfo_10_33, ll_backend__var_locn__LvalList_28, ll_backend__var_locn__Var_31);
    }
    {
      mercury__list__filter_3_p_0(ll_backend__var_locn__TypeCtorInfo_10_33, (MR_Word) &ll_backend__var_locn_scalar_common_2[21], ll_backend__var_locn__AllLvals_29, &ll_backend__var_locn__RootLvals_30);
    }
    {
      mercury__list__sort_and_remove_dups_2_p_0(ll_backend__var_locn__TypeCtorInfo_10_33, ll_backend__var_locn__RootLvals_30, &ll_backend__var_locn__NoDupRootLvals_18);
    }
    {
      ll_backend__var_locn__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_19, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_19, 1) = ((MR_Box) (ll_backend__var_locn__make_var_depend_on_lval_roots_4_p_0_2));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_19, 3) = ((MR_Box) (ll_backend__var_locn__Var_5));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__var_locn_scalar_common_2[0], ll_backend__var_locn__Var_19, ll_backend__var_locn__NoDupRootLvals_18, ((MR_Box) (ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_9)), &ll_backend__var_locn__conv1_STATE_VARIABLE_LocVarMap_10);
    }
    *ll_backend__var_locn__STATE_VARIABLE_LocVarMap_10 = ((MR_Word) ll_backend__var_locn__conv1_STATE_VARIABLE_LocVarMap_10);
  }
}

static void MR_CALL 
ll_backend__var_locn__make_var_depend_on_lvals_roots_4_p_0_2(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv0_STATE_VARIABLE_LocVarMap_11;

    {
      ll_backend__var_locn__make_var_depend_on_root_lval_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2), &ll_backend__var_locn__conv0_STATE_VARIABLE_LocVarMap_11);
    }
    *ll_backend__var_locn__wrapper_arg_3 = ((MR_Box) (ll_backend__var_locn__conv0_STATE_VARIABLE_LocVarMap_11));
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__make_var_depend_on_lvals_roots_4_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) ll_backend__var_locn__wrapper_arg_1));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn__make_var_depend_on_lvals_roots_4_p_0(
  MR_Word ll_backend__var_locn__Var_5,
  MR_Word ll_backend__var_locn__Lvals_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_9,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_LocVarMap_10)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__TypeCtorInfo_10_25 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    MR_Word ll_backend__var_locn__NoDupRootLvals_8;
    MR_Word ll_backend__var_locn__Var_11;
    MR_Word ll_backend__var_locn__LvalList_20;
    MR_Word ll_backend__var_locn__AllLvals_21;
    MR_Word ll_backend__var_locn__RootLvals_22;
    MR_Word ll_backend__var_locn__Var_23;
    MR_Box ll_backend__var_locn__conv1_STATE_VARIABLE_LocVarMap_10;

    {
      mercury__set__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_10_25, ll_backend__var_locn__Lvals_6, &ll_backend__var_locn__LvalList_20);
    }
    {
      ll_backend__var_locn__Var_23 = ll_backend__code_util__lvals_in_lvals_1_f_0(ll_backend__var_locn__LvalList_20);
    }
    {
      ll_backend__var_locn__AllLvals_21 = mercury__list__f_43_43_2_f_0(ll_backend__var_locn__TypeCtorInfo_10_25, ll_backend__var_locn__LvalList_20, ll_backend__var_locn__Var_23);
    }
    {
      mercury__list__filter_3_p_0(ll_backend__var_locn__TypeCtorInfo_10_25, (MR_Word) &ll_backend__var_locn_scalar_common_2[20], ll_backend__var_locn__AllLvals_21, &ll_backend__var_locn__RootLvals_22);
    }
    {
      mercury__list__sort_and_remove_dups_2_p_0(ll_backend__var_locn__TypeCtorInfo_10_25, ll_backend__var_locn__RootLvals_22, &ll_backend__var_locn__NoDupRootLvals_8);
    }
    {
      ll_backend__var_locn__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_11, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_11, 1) = ((MR_Box) (ll_backend__var_locn__make_var_depend_on_lvals_roots_4_p_0_2));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_11, 3) = ((MR_Box) (ll_backend__var_locn__Var_5));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__var_locn_scalar_common_2[0], ll_backend__var_locn__Var_11, ll_backend__var_locn__NoDupRootLvals_8, ((MR_Box) (ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_9)), &ll_backend__var_locn__conv1_STATE_VARIABLE_LocVarMap_10);
    }
    *ll_backend__var_locn__STATE_VARIABLE_LocVarMap_10 = ((MR_Word) ll_backend__var_locn__conv1_STATE_VARIABLE_LocVarMap_10);
  }
}

static void MR_CALL 
ll_backend__var_locn__materialize_var_9_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_10,
  MR_Word ll_backend__var_locn__Var_11,
  MR_Word ll_backend__var_locn__MaybePrefer_12,
  MR_Word ll_backend__var_locn__StoreIfReq_13,
  MR_Word ll_backend__var_locn__Avoid_14,
  MR_Word * ll_backend__var_locn__Rval_15,
  MR_Word * ll_backend__var_locn__Code_16,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_32,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_33)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__VarStateMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__State_19;
    MR_Word ll_backend__var_locn__MaybeExprRval_22;
    MR_Word ll_backend__var_locn__UsingVars_23;
    MR_Word ll_backend__var_locn__ExprRval_25;
    MR_Word ll_backend__var_locn__Rval0_26;
    MR_Word ll_backend__var_locn__ExprCode_27;
    MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_37_37;
    MR_Word ll_backend__var_locn__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 12)));
    MR_Box ll_backend__var_locn__conv0_State_19;
    MR_Word ll_backend__var_locn___Lvals_20;
    MR_Word ll_backend__var_locn___MaybeConstRval_21;
    MR_Word ll_backend__var_locn___DeadOrAlive_24;
    MR_Word ll_backend__var_locn__TypeCtorInfo_42_42;
    MR_Integer ll_backend__var_locn__NumUsingVars_28;
    MR_Integer ll_backend__var_locn__Var_38;

    {
      mercury__map__lookup_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, ll_backend__var_locn__VarStateMap_18, ((MR_Box) (ll_backend__var_locn__Var_11)), &ll_backend__var_locn__conv0_State_19);
    }
    ll_backend__var_locn__State_19 = ((MR_Word) ll_backend__var_locn__conv0_State_19);
    ll_backend__var_locn___Lvals_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_19, (MR_Integer) 0)));
    ll_backend__var_locn___MaybeConstRval_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_19, (MR_Integer) 1)));
    ll_backend__var_locn__MaybeExprRval_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_19, (MR_Integer) 2)));
    ll_backend__var_locn__UsingVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_19, (MR_Integer) 3)));
    ll_backend__var_locn___DeadOrAlive_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_19, (MR_Integer) 4)));
    if ((ll_backend__var_locn__MaybeExprRval_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.materialize_var\'/9", (MR_String) "no expr");
          return;
        }
      }
    else
      ll_backend__var_locn__ExprRval_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__MaybeExprRval_22, (MR_Integer) 0)));
    {
      ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_p_0(ll_backend__var_locn__ModuleInfo_10, ll_backend__var_locn__ExprRval_25, ll_backend__var_locn__MaybePrefer_12, ll_backend__var_locn__Avoid_14, &ll_backend__var_locn__Rval0_26, &ll_backend__var_locn__ExprCode_27, ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, &ll_backend__var_locn__STATE_VARIABLE_VLI_37_37);
    }
    ll_backend__var_locn__succeeded = (ll_backend__var_locn__StoreIfReq_13 == (MR_Integer) 1);
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        {
          ll_backend__var_locn__NumUsingVars_28 = parse_tree__set_of_var__count_1_f_0(ll_backend__var_locn__TypeCtorInfo_42_42, ll_backend__var_locn__UsingVars_23);
        }
        ll_backend__var_locn__Var_38 = (MR_Integer) 1;
        ll_backend__var_locn__succeeded = (ll_backend__var_locn__NumUsingVars_28 > ll_backend__var_locn__Var_38);
      }
    if (ll_backend__var_locn__succeeded)
      {
        MR_Word ll_backend__var_locn__RegType_29;
        MR_Word ll_backend__var_locn__Lval_30;
        MR_Word ll_backend__var_locn__PlaceCode_31;
        MR_Word ll_backend__var_locn__FloatRegType_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_37_37, (MR_Integer) 2)));
        MR_Word ll_backend__var_locn__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_37_37, (MR_Integer) 1)));
        MR_Word ll_backend__var_locn__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_37_37, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_37_37, (MR_Integer) 3)));
        MR_Word ll_backend__var_locn__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_37_37, (MR_Integer) 4)));
        MR_Integer ll_backend__var_locn__Var_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_37_37, (MR_Integer) 5)));
        MR_Integer ll_backend__var_locn__Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_37_37, (MR_Integer) 6)));
        MR_Word ll_backend__var_locn__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_37_37, (MR_Integer) 7)));
        MR_Word ll_backend__var_locn__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_37_37, (MR_Integer) 8)));
        MR_Word ll_backend__var_locn__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_37_37, (MR_Integer) 9)));
        MR_Integer ll_backend__var_locn__Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_37_37, (MR_Integer) 10)));
        MR_Integer ll_backend__var_locn__Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_37_37, (MR_Integer) 11)));
        MR_Word ll_backend__var_locn__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_37_37, (MR_Integer) 12)));

        switch (ll_backend__var_locn__FloatRegType_60) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__var_locn__VarType_62;
              MR_Word ll_backend__var_locn__Var_63;

              {
                hlds__vartypes__lookup_var_type_3_p_0(ll_backend__var_locn__Var_67, ll_backend__var_locn__Var_11, &ll_backend__var_locn__VarType_62);
              }
              {
                ll_backend__var_locn__Var_63 = parse_tree__builtin_lib_types__float_type_0_f_0();
              }
              {
                ll_backend__var_locn__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__var_locn__VarType_62, ll_backend__var_locn__Var_63);
              }
              if (ll_backend__var_locn__succeeded)
                ll_backend__var_locn__RegType_29 = (MR_Integer) 1;
              else
                ll_backend__var_locn__RegType_29 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 0:
            ll_backend__var_locn__RegType_29 = (MR_Integer) 0;
            break;
        }
        {
          ll_backend__var_locn__select_preferred_reg_avoid_5_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_37_37, ll_backend__var_locn__Var_11, ll_backend__var_locn__RegType_29, ll_backend__var_locn__Avoid_14, &ll_backend__var_locn__Lval_30);
        }
        {
          ll_backend__var_locn__var_locn_place_var_6_p_0(ll_backend__var_locn__ModuleInfo_10, ll_backend__var_locn__Var_11, ll_backend__var_locn__Lval_30, &ll_backend__var_locn__PlaceCode_31, ll_backend__var_locn__STATE_VARIABLE_VLI_37_37, ll_backend__var_locn__STATE_VARIABLE_VLI_33);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *ll_backend__var_locn__Rval_15 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__var_locn__Lval_30));
        }
        {
          *ll_backend__var_locn__Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__var_locn__ExprCode_27, ll_backend__var_locn__PlaceCode_31);
        }
      }
    else
      {
        *ll_backend__var_locn__Rval_15 = ll_backend__var_locn__Rval0_26;
        *ll_backend__var_locn__Code_16 = ll_backend__var_locn__ExprCode_27;
        *ll_backend__var_locn__STATE_VARIABLE_VLI_33 = ll_backend__var_locn__STATE_VARIABLE_VLI_37_37;
      }
  }
}

static void MR_CALL 
ll_backend__var_locn__find_var_availability_4_p_0(
  MR_Word ll_backend__var_locn__VLI_5,
  MR_Word ll_backend__var_locn__Var_6,
  MR_Word ll_backend__var_locn__MaybePrefer_7,
  MR_Word * ll_backend__var_locn__Avail_8)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__TypeCtorInfo_22_22;
    MR_Word ll_backend__var_locn__VarStateMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__State_10;
    MR_Word ll_backend__var_locn__Lvals_11;
    MR_Word ll_backend__var_locn__MaybeConstRval_12;
    MR_Word ll_backend__var_locn__LvalsList_16;
    MR_Word ll_backend__var_locn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 12)));
    MR_Box ll_backend__var_locn__conv0_State_10;
    MR_Word ll_backend__var_locn__Var_13;
    MR_Word ll_backend__var_locn__Var_14;
    MR_Word ll_backend__var_locn__Var_15;
    MR_Word ll_backend__var_locn__Prefer_17;

    {
      mercury__map__lookup_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, ll_backend__var_locn__VarStateMap_9, ((MR_Box) (ll_backend__var_locn__Var_6)), &ll_backend__var_locn__conv0_State_10);
    }
    ll_backend__var_locn__State_10 = ((MR_Word) ll_backend__var_locn__conv0_State_10);
    ll_backend__var_locn__Lvals_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_10, (MR_Integer) 0)));
    ll_backend__var_locn__MaybeConstRval_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_10, (MR_Integer) 1)));
    ll_backend__var_locn__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_10, (MR_Integer) 2)));
    ll_backend__var_locn__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_10, (MR_Integer) 3)));
    ll_backend__var_locn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_10, (MR_Integer) 4)));
    ll_backend__var_locn__TypeCtorInfo_22_22 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    {
      mercury__set__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_22_22, ll_backend__var_locn__Lvals_11, &ll_backend__var_locn__LvalsList_16);
    }
    ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__MaybePrefer_7)) == (MR_mktag((MR_Integer) 1)));
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__Prefer_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__MaybePrefer_7, (MR_Integer) 0)));
        {
          ll_backend__var_locn__succeeded = mercury__list__member_2_p_0(ll_backend__var_locn__TypeCtorInfo_22_22, ((MR_Box) (ll_backend__var_locn__Prefer_17)), ll_backend__var_locn__LvalsList_16);
        }
      }
    if (ll_backend__var_locn__succeeded)
      {
        MR_Word ll_backend__var_locn__Rval_18;

        {
          ll_backend__var_locn__Rval_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Rval_18, 0) = ((MR_Box) (ll_backend__var_locn__Prefer_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__var_locn__Avail_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__var_locn__Rval_18));
        }
      }
    else
      {
        MR_Word ll_backend__var_locn__Rval_19;
        MR_Word ll_backend__var_locn__Lval1_39;

        {
          ll_backend__var_locn__succeeded = ll_backend__var_locn__select_reg_lval_2_p_0(ll_backend__var_locn__LvalsList_16, &ll_backend__var_locn__Lval1_39);
        }
        if (ll_backend__var_locn__succeeded)
          {
            {
              ll_backend__var_locn__Rval_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Rval_19, 0) = ((MR_Box) (ll_backend__var_locn__Lval1_39));
            }
            ll_backend__var_locn__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word ll_backend__var_locn__Lval2_40;

            {
              ll_backend__var_locn__succeeded = ll_backend__var_locn__select_stack_lval_2_p_0(ll_backend__var_locn__LvalsList_16, &ll_backend__var_locn__Lval2_40);
            }
            if (ll_backend__var_locn__succeeded)
              {
                {
                  ll_backend__var_locn__Rval_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__var_locn__Rval_19, 0) = ((MR_Box) (ll_backend__var_locn__Lval2_40));
                }
                ll_backend__var_locn__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word ll_backend__var_locn__ConstRval_41;

                ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__MaybeConstRval_12)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__var_locn__succeeded)
                  {
                    ll_backend__var_locn__ConstRval_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__MaybeConstRval_12, (MR_Integer) 0)));
                    ll_backend__var_locn__Rval_19 = ll_backend__var_locn__ConstRval_41;
                    ll_backend__var_locn__succeeded = MR_TRUE;
                  }
                else
                  {
                    MR_Word ll_backend__var_locn__Lval3_42;
                    MR_Word ll_backend__var_locn__Var_44;

                    ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__LvalsList_16)) == (MR_mktag((MR_Integer) 1)));
                    if (ll_backend__var_locn__succeeded)
                      {
                        ll_backend__var_locn__Lval3_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__LvalsList_16, (MR_Integer) 0)));
                        ll_backend__var_locn__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__LvalsList_16, (MR_Integer) 1)));
                        {
                          ll_backend__var_locn__Rval_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Rval_19, 0) = ((MR_Box) (ll_backend__var_locn__Lval3_42));
                        }
                        ll_backend__var_locn__succeeded = MR_TRUE;
                      }
                  }
              }
          }
        if (ll_backend__var_locn__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__var_locn__Avail_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__var_locn__Rval_19));
          }
        else
          *ll_backend__var_locn__Avail_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
  }
}

static void MR_CALL 
ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_9,
  MR_Word ll_backend__var_locn__Rval0_10,
  MR_Word ll_backend__var_locn__MaybePrefer_11,
  MR_Word ll_backend__var_locn__Avoid_12,
  MR_Word * ll_backend__var_locn__Rval_13,
  MR_Word * ll_backend__var_locn__Code_14,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_35,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_36)
{
  {
    MR_bool ll_backend__var_locn__succeeded;

    switch (MR_tag((MR_Word) ll_backend__var_locn__Rval0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__var_locn__Lval0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__Rval0_10, (MR_Integer) 0)));
          MR_Word ll_backend__var_locn__Lval_17;

          {
            ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_p_0(ll_backend__var_locn__ModuleInfo_9, ll_backend__var_locn__Lval0_16, ll_backend__var_locn__Avoid_12, &ll_backend__var_locn__Lval_17, ll_backend__var_locn__Code_14, ll_backend__var_locn__STATE_VARIABLE_VLI_0_35, ll_backend__var_locn__STATE_VARIABLE_VLI_36);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *ll_backend__var_locn__Rval_13 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__var_locn__Lval_17));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__var_locn__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Rval0_10, (MR_Integer) 0)));
          MR_Word ll_backend__var_locn__Avail_34;

          {
            ll_backend__var_locn__find_var_availability_4_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_0_35, ll_backend__var_locn__Var_33, ll_backend__var_locn__MaybePrefer_11, &ll_backend__var_locn__Avail_34);
          }
          if ((ll_backend__var_locn__Avail_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                ll_backend__var_locn__materialize_var_9_p_0(ll_backend__var_locn__ModuleInfo_9, ll_backend__var_locn__Var_33, ll_backend__var_locn__MaybePrefer_11, (MR_Integer) 1, ll_backend__var_locn__Avoid_12, ll_backend__var_locn__Rval_13, ll_backend__var_locn__Code_14, ll_backend__var_locn__STATE_VARIABLE_VLI_0_35, ll_backend__var_locn__STATE_VARIABLE_VLI_36);
              }
            }
          else
            {
              *ll_backend__var_locn__Rval_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Avail_34, (MR_Integer) 0)));
              {
                *ll_backend__var_locn__Code_14 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
              *ll_backend__var_locn__STATE_VARIABLE_VLI_36 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_35;
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ll_backend__var_locn__Tag_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__var_locn__Rval0_10, (MR_Integer) 0)));
          MR_Word ll_backend__var_locn__SubRval0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__var_locn__Rval0_10, (MR_Integer) 1)));
          MR_Word ll_backend__var_locn__SubRval_20;

          {
            ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_p_0(ll_backend__var_locn__ModuleInfo_9, ll_backend__var_locn__SubRval0_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Avoid_12, &ll_backend__var_locn__SubRval_20, ll_backend__var_locn__Code_14, ll_backend__var_locn__STATE_VARIABLE_VLI_0_35, ll_backend__var_locn__STATE_VARIABLE_VLI_36);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__var_locn__Rval_13 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__var_locn__Tag_18));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__var_locn__SubRval_20));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Rval0_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ll_backend__var_locn__Rval_13 = ll_backend__var_locn__Rval0_10;
              {
                *ll_backend__var_locn__Code_14 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
              *ll_backend__var_locn__STATE_VARIABLE_VLI_36 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_35;
            }
            break;
          case (MR_Integer) 1:
            {
              *ll_backend__var_locn__Rval_13 = ll_backend__var_locn__Rval0_10;
              {
                *ll_backend__var_locn__Code_14 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
              *ll_backend__var_locn__STATE_VARIABLE_VLI_36 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_35;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__var_locn__Unop_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Rval0_10, (MR_Integer) 1)));
              MR_Word ll_backend__var_locn__SubRval0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Rval0_10, (MR_Integer) 2)));
              MR_Word ll_backend__var_locn__SubRval_50;

              {
                ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_p_0(ll_backend__var_locn__ModuleInfo_9, ll_backend__var_locn__SubRval0_49, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Avoid_12, &ll_backend__var_locn__SubRval_50, ll_backend__var_locn__Code_14, ll_backend__var_locn__STATE_VARIABLE_VLI_0_35, ll_backend__var_locn__STATE_VARIABLE_VLI_36);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__var_locn__Rval_13 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__var_locn__Unop_22));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__var_locn__SubRval_50));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__var_locn__Binop_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Rval0_10, (MR_Integer) 1)));
              MR_Word ll_backend__var_locn__SubRvalA0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Rval0_10, (MR_Integer) 2)));
              MR_Word ll_backend__var_locn__SubRvalB0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Rval0_10, (MR_Integer) 3)));
              MR_Word ll_backend__var_locn__SubRvalA_26;
              MR_Word ll_backend__var_locn__CodeA_27;
              MR_Word ll_backend__var_locn__SubRvalB_28;
              MR_Word ll_backend__var_locn__CodeB_29;
              MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_41_41;

              {
                ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_p_0(ll_backend__var_locn__ModuleInfo_9, ll_backend__var_locn__SubRvalA0_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Avoid_12, &ll_backend__var_locn__SubRvalA_26, &ll_backend__var_locn__CodeA_27, ll_backend__var_locn__STATE_VARIABLE_VLI_0_35, &ll_backend__var_locn__STATE_VARIABLE_VLI_41_41);
              }
              {
                ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_p_0(ll_backend__var_locn__ModuleInfo_9, ll_backend__var_locn__SubRvalB0_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Avoid_12, &ll_backend__var_locn__SubRvalB_28, &ll_backend__var_locn__CodeB_29, ll_backend__var_locn__STATE_VARIABLE_VLI_41_41, ll_backend__var_locn__STATE_VARIABLE_VLI_36);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__var_locn__Rval_13 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__var_locn__Binop_23));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__var_locn__SubRvalA_26));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__var_locn__SubRvalB_28));
              }
              {
                *ll_backend__var_locn__Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__var_locn__CodeA_27, ll_backend__var_locn__CodeB_29);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__var_locn__MemRef0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Rval0_10, (MR_Integer) 1)));
              MR_Word ll_backend__var_locn__MemRef_32;

              switch (MR_tag((MR_Word) ll_backend__var_locn__MemRef0_31)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  {
                    ll_backend__var_locn__MemRef_32 = ll_backend__var_locn__MemRef0_31;
                    {
                      *ll_backend__var_locn__Code_14 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                    }
                    *ll_backend__var_locn__STATE_VARIABLE_VLI_36 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_35;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ll_backend__var_locn__PtrRval0_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__var_locn__MemRef0_31, (MR_Integer) 0)));
                    MR_Word ll_backend__var_locn__MaybeTag_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__var_locn__MemRef0_31, (MR_Integer) 1)));
                    MR_Word ll_backend__var_locn__FieldNumRval0_67 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__var_locn__MemRef0_31, (MR_Integer) 2)));
                    MR_Word ll_backend__var_locn__PtrRval_68;
                    MR_Word ll_backend__var_locn__PtrCode_69;
                    MR_Word ll_backend__var_locn__FieldNumRval_70;
                    MR_Word ll_backend__var_locn__FieldNumCode_71;
                    MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_26_73;

                    {
                      ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_p_0(ll_backend__var_locn__ModuleInfo_9, ll_backend__var_locn__PtrRval0_65, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Avoid_12, &ll_backend__var_locn__PtrRval_68, &ll_backend__var_locn__PtrCode_69, ll_backend__var_locn__STATE_VARIABLE_VLI_0_35, &ll_backend__var_locn__STATE_VARIABLE_VLI_26_73);
                    }
                    {
                      ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_p_0(ll_backend__var_locn__ModuleInfo_9, ll_backend__var_locn__FieldNumRval0_67, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Avoid_12, &ll_backend__var_locn__FieldNumRval_70, &ll_backend__var_locn__FieldNumCode_71, ll_backend__var_locn__STATE_VARIABLE_VLI_26_73, ll_backend__var_locn__STATE_VARIABLE_VLI_36);
                    }
                    {
                      *ll_backend__var_locn__Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__var_locn__PtrCode_69, ll_backend__var_locn__FieldNumCode_71);
                    }
                    {
                      ll_backend__var_locn__MemRef_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ll_backend__var_locn__MemRef_32, 0) = ((MR_Box) (ll_backend__var_locn__PtrRval_68));
                      MR_hl_field(MR_mktag(2), ll_backend__var_locn__MemRef_32, 1) = ((MR_Box) (ll_backend__var_locn__MaybeTag_66));
                      MR_hl_field(MR_mktag(2), ll_backend__var_locn__MemRef_32, 2) = ((MR_Box) (ll_backend__var_locn__FieldNumRval_70));
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__var_locn__Rval_13 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__var_locn__MemRef_32));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__var_locn__var_locn_materialize_vars_in_lval_avoid_7_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_8,
  MR_Word ll_backend__var_locn__Lval0_9,
  MR_Word ll_backend__var_locn__Avoid_10,
  MR_Word * ll_backend__var_locn__Lval_11,
  MR_Word * ll_backend__var_locn__Code_12,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_34,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_35)
{
  {
    MR_bool ll_backend__var_locn__succeeded;

    switch (MR_tag((MR_Word) ll_backend__var_locn__Lval0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ll_backend__var_locn__Lval_11 = ll_backend__var_locn__Lval0_9;
          {
            *ll_backend__var_locn__Code_12 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
          *ll_backend__var_locn__STATE_VARIABLE_VLI_35 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_34;
        }
        break;
      case (MR_Integer) 1:
        {
          *ll_backend__var_locn__Lval_11 = ll_backend__var_locn__Lval0_9;
          {
            *ll_backend__var_locn__Code_12 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
          *ll_backend__var_locn__STATE_VARIABLE_VLI_35 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_34;
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.var_locn_materialize_vars_in_lval_avoid\'/7", (MR_String) "temp");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 11:
            {
              *ll_backend__var_locn__Lval_11 = ll_backend__var_locn__Lval0_9;
              {
                *ll_backend__var_locn__Code_12 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
              *ll_backend__var_locn__STATE_VARIABLE_VLI_35 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_34;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__var_locn__Rval0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_9, (MR_Integer) 1)));
              MR_Word ll_backend__var_locn__Rval_23;

              {
                ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_p_0(ll_backend__var_locn__ModuleInfo_8, ll_backend__var_locn__Rval0_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Avoid_10, &ll_backend__var_locn__Rval_23, ll_backend__var_locn__Code_12, ll_backend__var_locn__STATE_VARIABLE_VLI_0_34, ll_backend__var_locn__STATE_VARIABLE_VLI_35);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__var_locn__Lval_11 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__var_locn__Rval_23));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__var_locn__Rval0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_9, (MR_Integer) 1)));
              MR_Word ll_backend__var_locn__Rval_61;

              {
                ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_p_0(ll_backend__var_locn__ModuleInfo_8, ll_backend__var_locn__Rval0_60, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Avoid_10, &ll_backend__var_locn__Rval_61, ll_backend__var_locn__Code_12, ll_backend__var_locn__STATE_VARIABLE_VLI_0_34, ll_backend__var_locn__STATE_VARIABLE_VLI_35);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__var_locn__Lval_11 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__var_locn__Rval_61));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__var_locn__Rval0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_9, (MR_Integer) 1)));
              MR_Word ll_backend__var_locn__Rval_59;

              {
                ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_p_0(ll_backend__var_locn__ModuleInfo_8, ll_backend__var_locn__Rval0_58, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Avoid_10, &ll_backend__var_locn__Rval_59, ll_backend__var_locn__Code_12, ll_backend__var_locn__STATE_VARIABLE_VLI_0_34, ll_backend__var_locn__STATE_VARIABLE_VLI_35);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__var_locn__Lval_11 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__var_locn__Rval_59));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__var_locn__Rval0_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_9, (MR_Integer) 1)));
              MR_Word ll_backend__var_locn__Rval_63;

              {
                ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_p_0(ll_backend__var_locn__ModuleInfo_8, ll_backend__var_locn__Rval0_62, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Avoid_10, &ll_backend__var_locn__Rval_63, ll_backend__var_locn__Code_12, ll_backend__var_locn__STATE_VARIABLE_VLI_0_34, ll_backend__var_locn__STATE_VARIABLE_VLI_35);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__var_locn__Lval_11 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__var_locn__Rval_63));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ll_backend__var_locn__Rval0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_9, (MR_Integer) 1)));
              MR_Word ll_backend__var_locn__Rval_65;

              {
                ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_p_0(ll_backend__var_locn__ModuleInfo_8, ll_backend__var_locn__Rval0_64, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Avoid_10, &ll_backend__var_locn__Rval_65, ll_backend__var_locn__Code_12, ll_backend__var_locn__STATE_VARIABLE_VLI_0_34, ll_backend__var_locn__STATE_VARIABLE_VLI_35);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__var_locn__Lval_11 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__var_locn__Rval_65));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__var_locn__Tag_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_9, (MR_Integer) 1)));
              MR_Word ll_backend__var_locn__RvalA0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_9, (MR_Integer) 2)));
              MR_Word ll_backend__var_locn__RvalB0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_9, (MR_Integer) 3)));
              MR_Word ll_backend__var_locn__RvalA_27;
              MR_Word ll_backend__var_locn__CodeA_28;
              MR_Word ll_backend__var_locn__RvalB_29;
              MR_Word ll_backend__var_locn__CodeB_30;
              MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_43_43;

              {
                ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_p_0(ll_backend__var_locn__ModuleInfo_8, ll_backend__var_locn__RvalA0_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Avoid_10, &ll_backend__var_locn__RvalA_27, &ll_backend__var_locn__CodeA_28, ll_backend__var_locn__STATE_VARIABLE_VLI_0_34, &ll_backend__var_locn__STATE_VARIABLE_VLI_43_43);
              }
              {
                ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_p_0(ll_backend__var_locn__ModuleInfo_8, ll_backend__var_locn__RvalB0_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Avoid_10, &ll_backend__var_locn__RvalB_29, &ll_backend__var_locn__CodeB_30, ll_backend__var_locn__STATE_VARIABLE_VLI_43_43, ll_backend__var_locn__STATE_VARIABLE_VLI_35);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__var_locn__Lval_11 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__var_locn__Tag_24));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__var_locn__RvalA_27));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__var_locn__RvalB_29));
              }
              {
                *ll_backend__var_locn__Code_12 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__var_locn__CodeA_28, ll_backend__var_locn__CodeB_30);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__var_locn__Rval0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_9, (MR_Integer) 1)));
              MR_Word ll_backend__var_locn__Rval_67;

              {
                ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_p_0(ll_backend__var_locn__ModuleInfo_8, ll_backend__var_locn__Rval0_66, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Avoid_10, &ll_backend__var_locn__Rval_67, ll_backend__var_locn__Code_12, ll_backend__var_locn__STATE_VARIABLE_VLI_0_34, ll_backend__var_locn__STATE_VARIABLE_VLI_35);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__var_locn__Lval_11 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__var_locn__Rval_67));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.var_locn_materialize_vars_in_lval_avoid\'/7", (MR_String) "lvar");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__expr_is_constant_4_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__IntroducedFrom__pred__expr_is_constant__2352__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 5))));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__expr_is_constant_4_p_0(
  MR_Word ll_backend__var_locn__VarStateMap_5,
  MR_Word ll_backend__var_locn__ExprnOpts_6,
  MR_Word ll_backend__var_locn__Rval0_7,
  MR_Word * ll_backend__var_locn__Rval_8)
{
  {
    MR_bool ll_backend__var_locn__succeeded;

    switch (MR_tag((MR_Word) ll_backend__var_locn__Rval0_7)) {
      default:
        ll_backend__var_locn__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__var_locn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Rval0_7, (MR_Integer) 0)));
          MR_Word ll_backend__var_locn__State_21;
          MR_Word ll_backend__var_locn__Var_29;
          MR_Word ll_backend__var_locn__Var_30;
          MR_String ll_backend__var_locn__Var_31;
          MR_String ll_backend__var_locn__Var_32;
          MR_String ll_backend__var_locn__Var_33;
          MR_Box ll_backend__var_locn__conv0_State_21;
          MR_Word ll_backend__var_locn__Var_22;
          MR_Word ll_backend__var_locn__Var_23;
          MR_Word ll_backend__var_locn__Var_24;
          MR_Word ll_backend__var_locn__Var_25;

          {
            ll_backend__var_locn__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, ll_backend__var_locn__VarStateMap_5, ((MR_Box) (ll_backend__var_locn__Var_20)), &ll_backend__var_locn__conv0_State_21);
          }
          if (ll_backend__var_locn__succeeded)
            {
              ll_backend__var_locn__State_21 = ((MR_Word) ll_backend__var_locn__conv0_State_21);
              ll_backend__var_locn__succeeded = MR_TRUE;
            }
          if (ll_backend__var_locn__succeeded)
            {
              ll_backend__var_locn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_21, (MR_Integer) 0)));
              ll_backend__var_locn__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_21, (MR_Integer) 1)));
              ll_backend__var_locn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_21, (MR_Integer) 2)));
              ll_backend__var_locn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_21, (MR_Integer) 3)));
              ll_backend__var_locn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_21, (MR_Integer) 4)));
              ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__Var_29)) == (MR_mktag((MR_Integer) 1)));
              if (ll_backend__var_locn__succeeded)
                {
                  *ll_backend__var_locn__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_29, (MR_Integer) 0)));
                  ll_backend__var_locn__Var_31 = (MR_String) "ll_backend.var_locn";
                  ll_backend__var_locn__Var_32 = (MR_String) "predicate \140ll_backend.var_locn.expr_is_constant\'/4";
                  ll_backend__var_locn__Var_33 = (MR_String) "non-constant rval in variable state";
                  {
                    ll_backend__var_locn__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_30, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_9[4]));
                    MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_30, 1) = ((MR_Box) (ll_backend__var_locn__expr_is_constant_4_p_0_1));
                    MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_30, 3) = ((MR_Box) (ll_backend__var_locn__VarStateMap_5));
                    MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_30, 4) = ((MR_Box) (ll_backend__var_locn__ExprnOpts_6));
                    MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_30, 5) = ((MR_Box) (*ll_backend__var_locn__Rval_8));
                  }
                  {
                    mercury__require__expect_4_p_0(ll_backend__var_locn__Var_30, ll_backend__var_locn__Var_31, ll_backend__var_locn__Var_32, ll_backend__var_locn__Var_33);
                  }
                  ll_backend__var_locn__succeeded = MR_TRUE;
                }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ll_backend__var_locn__Tag_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__var_locn__Rval0_7, (MR_Integer) 0)));
          MR_Word ll_backend__var_locn__SubRval0_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__var_locn__Rval0_7, (MR_Integer) 1)));
          MR_Word ll_backend__var_locn__SubRval_36;

          {
            ll_backend__var_locn__succeeded = ll_backend__var_locn__expr_is_constant_4_p_0(ll_backend__var_locn__VarStateMap_5, ll_backend__var_locn__ExprnOpts_6, ll_backend__var_locn__SubRval0_35, &ll_backend__var_locn__SubRval_36);
          }
          if (ll_backend__var_locn__succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__var_locn__Rval_8 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__var_locn__Tag_18));
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__var_locn__SubRval_36));
              }
              ll_backend__var_locn__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Rval0_7, (MR_Integer) 0)))) {
          default:
            ll_backend__var_locn__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              *ll_backend__var_locn__Rval_8 = ll_backend__var_locn__Rval0_7;
              ll_backend__var_locn__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__var_locn__Const_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Rval0_7, (MR_Integer) 1)));
              MR_Word ll_backend__var_locn__Var_39;

              {
                ll_backend__exprn_aux__const_is_constant_3_p_0(ll_backend__var_locn__Const_9, ll_backend__var_locn__ExprnOpts_6, &ll_backend__var_locn__Var_39);
              }
              ll_backend__var_locn__succeeded = ((MR_Integer) 1 == ll_backend__var_locn__Var_39);
              if (ll_backend__var_locn__succeeded)
                {
                  *ll_backend__var_locn__Rval_8 = ll_backend__var_locn__Rval0_7;
                  ll_backend__var_locn__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__var_locn__UnOp_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Rval0_7, (MR_Integer) 1)));
              MR_Word ll_backend__var_locn__SubRval0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Rval0_7, (MR_Integer) 2)));
              MR_Word ll_backend__var_locn__SubRval_12;

              {
                ll_backend__var_locn__succeeded = ll_backend__var_locn__expr_is_constant_4_p_0(ll_backend__var_locn__VarStateMap_5, ll_backend__var_locn__ExprnOpts_6, ll_backend__var_locn__SubRval0_11, &ll_backend__var_locn__SubRval_12);
              }
              if (ll_backend__var_locn__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__var_locn__Rval_8 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__var_locn__UnOp_10));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__var_locn__SubRval_12));
                  }
                  ll_backend__var_locn__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__var_locn__BinOp_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Rval0_7, (MR_Integer) 1)));
              MR_Word ll_backend__var_locn__SubRvalA0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Rval0_7, (MR_Integer) 2)));
              MR_Word ll_backend__var_locn__SubRvalB0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Rval0_7, (MR_Integer) 3)));
              MR_Word ll_backend__var_locn__SubRvalA_16;
              MR_Word ll_backend__var_locn__SubRvalB_17;

              {
                ll_backend__var_locn__succeeded = ll_backend__var_locn__expr_is_constant_4_p_0(ll_backend__var_locn__VarStateMap_5, ll_backend__var_locn__ExprnOpts_6, ll_backend__var_locn__SubRvalA0_14, &ll_backend__var_locn__SubRvalA_16);
              }
              if (ll_backend__var_locn__succeeded)
                {
                  {
                    ll_backend__var_locn__succeeded = ll_backend__var_locn__expr_is_constant_4_p_0(ll_backend__var_locn__VarStateMap_5, ll_backend__var_locn__ExprnOpts_6, ll_backend__var_locn__SubRvalB0_15, &ll_backend__var_locn__SubRvalB_17);
                  }
                  if (ll_backend__var_locn__succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        *ll_backend__var_locn__Rval_8 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__var_locn__BinOp_13));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__var_locn__SubRvalA_16));
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__var_locn__SubRvalB_17));
                      }
                      ll_backend__var_locn__succeeded = MR_TRUE;
                    }
                }
            }
            break;
        }
        break;
    }
    return ll_backend__var_locn__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__cell_is_constant_4_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2,
  MR_Word ll_backend__var_locn__HeadVar__3_3,
  MR_Word * ll_backend__var_locn__HeadVar__4_4)
{
  {
    MR_bool ll_backend__var_locn__succeeded;

    if ((ll_backend__var_locn__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__var_locn__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ll_backend__var_locn__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word ll_backend__var_locn__CellArg_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__CellArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__var_locn__Rval_11;
        MR_Word ll_backend__var_locn__LldsType_12;
        MR_Word ll_backend__var_locn__TypedRvals_13;
        MR_Word ll_backend__var_locn__Rval0_14;
        MR_Word ll_backend__var_locn__ArgWidth_15;
        MR_Word ll_backend__var_locn__Var_18;
        MR_Word ll_backend__var_locn__Var_20;

        if (((MR_tag((MR_Word) ll_backend__var_locn__CellArg_9)) == (MR_mktag((MR_Integer) 2))))
          {
            ll_backend__var_locn__Rval0_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__var_locn__CellArg_9, (MR_Integer) 0)));
            ll_backend__var_locn__ArgWidth_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            ll_backend__var_locn__succeeded = MR_TRUE;
          }
        else
        if (((MR_tag((MR_Word) ll_backend__var_locn__CellArg_9)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word ll_backend__var_locn__Var_19;

            ll_backend__var_locn__Rval0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__CellArg_9, (MR_Integer) 0)));
            ll_backend__var_locn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__CellArg_9, (MR_Integer) 1)));
            ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_19 == (MR_Integer) 0);
            if (ll_backend__var_locn__succeeded)
              {
                ll_backend__var_locn__ArgWidth_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                ll_backend__var_locn__succeeded = MR_TRUE;
              }
          }
        else
          ll_backend__var_locn__succeeded = MR_FALSE;
        if (ll_backend__var_locn__succeeded)
          {
            {
              ll_backend__var_locn__succeeded = ll_backend__var_locn__expr_is_constant_4_p_0(ll_backend__var_locn__HeadVar__1_1, ll_backend__var_locn__HeadVar__2_2, ll_backend__var_locn__Rval0_14, &ll_backend__var_locn__Rval_11);
            }
            if (ll_backend__var_locn__succeeded)
              {
                {
                  ll_backend__var_locn__Var_20 = ll_backend__llds__get_unboxed_floats_1_f_0(ll_backend__var_locn__HeadVar__2_2);
                }
                {
                  ll_backend__var_locn__LldsType_12 = ll_backend__global_data__rval_type_as_arg_3_f_0(ll_backend__var_locn__Var_20, ll_backend__var_locn__ArgWidth_15, ll_backend__var_locn__Rval_11);
                }
                {
                  ll_backend__var_locn__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_18, 0) = ((MR_Box) (ll_backend__var_locn__Rval_11));
                  MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_18, 1) = ((MR_Box) (ll_backend__var_locn__LldsType_12));
                }
                {
                  ll_backend__var_locn__succeeded = ll_backend__var_locn__cell_is_constant_4_p_0(ll_backend__var_locn__HeadVar__1_1, ll_backend__var_locn__HeadVar__2_2, ll_backend__var_locn__CellArgs_10, &ll_backend__var_locn__TypedRvals_13);
                }
                if (ll_backend__var_locn__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ll_backend__var_locn__HeadVar__4_4 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__var_locn__Var_18));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__var_locn__TypedRvals_13));
                    }
                    ll_backend__var_locn__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return ll_backend__var_locn__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__reg_is_not_locked_for_var_4_p_0(
  MR_Word ll_backend__var_locn__VLI_5,
  MR_Word ll_backend__var_locn__RegType_6,
  MR_Integer ll_backend__var_locn__RegNum_7,
  MR_Word ll_backend__var_locn__Var_8)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Acquired_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 9)));
    MR_Word ll_backend__var_locn__Exceptions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 12)));
    MR_Integer ll_backend__var_locn__Locked_11;
    MR_Word ll_backend__var_locn__Reg_14;
    MR_Integer ll_backend__var_locn__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__TypeInfo_17_17;
    MR_Word ll_backend__var_locn__Var_15;

    switch (ll_backend__var_locn__RegType_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ll_backend__var_locn__Locked_11 = ll_backend__var_locn__Var_29;
        break;
      case (MR_Integer) 0:
        ll_backend__var_locn__Locked_11 = ll_backend__var_locn__Var_28;
        break;
    }
    {
      ll_backend__var_locn__Reg_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__var_locn__Reg_14, 0) = ((MR_Box) (ll_backend__var_locn__RegType_6));
      MR_hl_field(MR_mktag(1), ll_backend__var_locn__Reg_14, 1) = ((MR_Box) (ll_backend__var_locn__RegNum_7));
    }
    {
      ll_backend__var_locn__succeeded = mercury__set__member_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__var_locn__Reg_14)), ll_backend__var_locn__Acquired_9);
    }
    ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__succeeded = (ll_backend__var_locn__RegNum_7 <= ll_backend__var_locn__Locked_11);
        if (ll_backend__var_locn__succeeded)
          {
            ll_backend__var_locn__TypeInfo_17_17 = (MR_Word) &ll_backend__var_locn_scalar_common_2[4];
            {
              ll_backend__var_locn__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_15, 0) = ((MR_Box) (ll_backend__var_locn__Var_8));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_15, 1) = ((MR_Box) (ll_backend__var_locn__Reg_14));
            }
            {
              ll_backend__var_locn__succeeded = mercury__list__member_2_p_0(ll_backend__var_locn__TypeInfo_17_17, ((MR_Box) (ll_backend__var_locn__Var_15)), ll_backend__var_locn__Exceptions_10);
            }
            ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
          }
        ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
      }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn__get_spare_reg_2_5_p_0(
  MR_Word ll_backend__var_locn__VLI_6,
  MR_Word ll_backend__var_locn__RegType_7,
  MR_Word ll_backend__var_locn__Avoid_8,
  MR_Integer ll_backend__var_locn__N0_9,
  MR_Word * ll_backend__var_locn__Lval_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__var_locn__succeeded;
        MR_Word ll_backend__var_locn__TryLval_11;

        {
          ll_backend__var_locn__TryLval_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__var_locn__TryLval_11, 0) = ((MR_Box) (ll_backend__var_locn__RegType_7));
          MR_hl_field(MR_mktag(1), ll_backend__var_locn__TryLval_11, 1) = ((MR_Box) (ll_backend__var_locn__N0_9));
        }
        {
          ll_backend__var_locn__succeeded = ll_backend__var_locn__var_locn_lval_in_use_2_p_0(ll_backend__var_locn__VLI_6, ll_backend__var_locn__TryLval_11);
        }
        if (ll_backend__var_locn__succeeded)
          {
            MR_Integer ll_backend__var_locn__Var_12 = (ll_backend__var_locn__N0_9 + (MR_Integer) 1);

            /* direct tailcall eliminated */
            {
              MR_Integer ll_backend__var_locn__next_value_of_N0_9 = ll_backend__var_locn__Var_12;

              ll_backend__var_locn__N0_9 = ll_backend__var_locn__next_value_of_N0_9;
            }
            continue;
          }
        else
          {
            {
              ll_backend__var_locn__succeeded = mercury__list__member_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__var_locn__TryLval_11)), ll_backend__var_locn__Avoid_8);
            }
            if (ll_backend__var_locn__succeeded)
              {
                MR_Integer ll_backend__var_locn__Var_14 = (ll_backend__var_locn__N0_9 + (MR_Integer) 1);

                /* direct tailcall eliminated */
                {
                  MR_Integer ll_backend__var_locn__next_value_of_N0_9 = ll_backend__var_locn__Var_14;

                  ll_backend__var_locn__N0_9 = ll_backend__var_locn__next_value_of_N0_9;
                }
                continue;
              }
            else
              *ll_backend__var_locn__Lval_10 = ll_backend__var_locn__TryLval_11;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__var_locn__get_spare_reg_3_p_0(
  MR_Word ll_backend__var_locn__VLI_4,
  MR_Word ll_backend__var_locn__RegType_5,
  MR_Word * ll_backend__var_locn__Lval_6)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Integer ll_backend__var_locn__NextNonReserved_7;
    MR_Integer ll_backend__var_locn__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 6)));
    MR_Integer ll_backend__var_locn__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 5)));
    MR_Word ll_backend__var_locn__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 12)));
    MR_Integer ll_backend__var_locn__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 11)));
    MR_Integer ll_backend__var_locn__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 10)));
    MR_Word ll_backend__var_locn__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 9)));
    MR_Word ll_backend__var_locn__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 4)));
    MR_Word ll_backend__var_locn__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 0)));

    switch (ll_backend__var_locn__RegType_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ll_backend__var_locn__NextNonReserved_7 = ll_backend__var_locn__Var_41;
        break;
      case (MR_Integer) 0:
        ll_backend__var_locn__NextNonReserved_7 = ll_backend__var_locn__Var_42;
        break;
    }
    {
      ll_backend__var_locn__get_spare_reg_2_5_p_0(ll_backend__var_locn__VLI_4, ll_backend__var_locn__RegType_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__NextNonReserved_7, ll_backend__var_locn__Lval_6);
    }
  }
}

static void MR_CALL 
ll_backend__var_locn__get_spare_reg_avoid_4_p_0(
  MR_Word ll_backend__var_locn__VLI_5,
  MR_Word ll_backend__var_locn__RegType_6,
  MR_Word ll_backend__var_locn__Avoid_7,
  MR_Word * ll_backend__var_locn__Lval_8)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Integer ll_backend__var_locn__NextNonReserved_9;
    MR_Integer ll_backend__var_locn__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 6)));
    MR_Integer ll_backend__var_locn__Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 5)));
    MR_Word ll_backend__var_locn__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 12)));
    MR_Integer ll_backend__var_locn__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 11)));
    MR_Integer ll_backend__var_locn__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 10)));
    MR_Word ll_backend__var_locn__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 9)));
    MR_Word ll_backend__var_locn__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 4)));
    MR_Word ll_backend__var_locn__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 0)));

    switch (ll_backend__var_locn__RegType_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ll_backend__var_locn__NextNonReserved_9 = ll_backend__var_locn__Var_42;
        break;
      case (MR_Integer) 0:
        ll_backend__var_locn__NextNonReserved_9 = ll_backend__var_locn__Var_43;
        break;
    }
    {
      ll_backend__var_locn__get_spare_reg_2_5_p_0(ll_backend__var_locn__VLI_5, ll_backend__var_locn__RegType_6, ll_backend__var_locn__Avoid_7, ll_backend__var_locn__NextNonReserved_9, ll_backend__var_locn__Lval_8);
    }
  }
}

static void MR_CALL 
ll_backend__var_locn__select_preferred_reg_or_stack_4_p_0(
  MR_Word ll_backend__var_locn__VLI_5,
  MR_Word ll_backend__var_locn__Var_6,
  MR_Word ll_backend__var_locn__RegType_7,
  MR_Word * ll_backend__var_locn__Lval_8)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__FollowVarMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 4)));
    MR_Word ll_backend__var_locn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 3)));
    MR_Integer ll_backend__var_locn__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 12)));
    MR_Word ll_backend__var_locn__PrefLocn_10;
    MR_Box ll_backend__var_locn__conv0_PrefLocn_10;

    {
      ll_backend__var_locn__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ll_backend__var_locn__FollowVarMap_9, ((MR_Box) (ll_backend__var_locn__Var_6)), &ll_backend__var_locn__conv0_PrefLocn_10);
    }
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__PrefLocn_10 = ((MR_Word) ll_backend__var_locn__conv0_PrefLocn_10);
        ll_backend__var_locn__succeeded = MR_TRUE;
      }
    if (ll_backend__var_locn__succeeded)
      {
        if ((ll_backend__var_locn__PrefLocn_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ll_backend__var_locn__succeeded = MR_TRUE;
        else
        if (((MR_tag((MR_Word) ll_backend__var_locn__PrefLocn_10)) == (MR_mktag((MR_Integer) 1))))
          ll_backend__var_locn__succeeded = MR_TRUE;
        else
          ll_backend__var_locn__succeeded = MR_FALSE;
      }
    if (ll_backend__var_locn__succeeded)
      {
        MR_Word ll_backend__var_locn__PrefLval_14;
        MR_Integer ll_backend__var_locn__N_13;
        MR_Word ll_backend__var_locn__Var_22;

        ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__PrefLocn_10)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__var_locn__succeeded)
          {
            ll_backend__var_locn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__PrefLocn_10, (MR_Integer) 0)));
            ll_backend__var_locn__N_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__PrefLocn_10, (MR_Integer) 1)));
            ll_backend__var_locn__succeeded = (ll_backend__var_locn__RegType_7 == ll_backend__var_locn__Var_22);
            if (ll_backend__var_locn__succeeded)
              {
                {
                  ll_backend__var_locn__PrefLval_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__var_locn__PrefLval_14, 0) = ((MR_Box) (ll_backend__var_locn__RegType_7));
                  MR_hl_field(MR_mktag(1), ll_backend__var_locn__PrefLval_14, 1) = ((MR_Box) (ll_backend__var_locn__N_13));
                }
                {
                  ll_backend__var_locn__succeeded = ll_backend__var_locn__var_locn_lval_in_use_2_p_0(ll_backend__var_locn__VLI_5, ll_backend__var_locn__PrefLval_14);
                }
                ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
              }
          }
        if (ll_backend__var_locn__succeeded)
          *ll_backend__var_locn__Lval_8 = ll_backend__var_locn__PrefLval_14;
        else
          {
            MR_Integer ll_backend__var_locn__NextNonReserved_39;
            MR_Integer ll_backend__var_locn__Var_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 6)));
            MR_Integer ll_backend__var_locn__Var_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 5)));
            MR_Word ll_backend__var_locn__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 12)));
            MR_Integer ll_backend__var_locn__Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 11)));
            MR_Integer ll_backend__var_locn__Var_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 10)));
            MR_Word ll_backend__var_locn__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 9)));
            MR_Word ll_backend__var_locn__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 8)));
            MR_Word ll_backend__var_locn__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 7)));
            MR_Word ll_backend__var_locn__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 4)));
            MR_Word ll_backend__var_locn__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 3)));
            MR_Word ll_backend__var_locn__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 2)));
            MR_Word ll_backend__var_locn__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 1)));
            MR_Word ll_backend__var_locn__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 0)));

            switch (ll_backend__var_locn__RegType_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                ll_backend__var_locn__NextNonReserved_39 = ll_backend__var_locn__Var_73;
                break;
              case (MR_Integer) 0:
                ll_backend__var_locn__NextNonReserved_39 = ll_backend__var_locn__Var_74;
                break;
            }
            {
              ll_backend__var_locn__get_spare_reg_2_5_p_0(ll_backend__var_locn__VLI_5, ll_backend__var_locn__RegType_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__NextNonReserved_39, ll_backend__var_locn__Lval_8);
            }
          }
      }
    else
      {
        MR_Word ll_backend__var_locn__StackSlot_17;
        MR_Word ll_backend__var_locn__StackSlots_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 3)));
        MR_Word ll_backend__var_locn__StackSlotLocn_16;
        MR_Word ll_backend__var_locn__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 1)));
        MR_Word ll_backend__var_locn__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 2)));
        MR_Word ll_backend__var_locn__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 4)));
        MR_Integer ll_backend__var_locn__Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 5)));
        MR_Integer ll_backend__var_locn__Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 6)));
        MR_Word ll_backend__var_locn__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 7)));
        MR_Word ll_backend__var_locn__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 8)));
        MR_Word ll_backend__var_locn__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 9)));
        MR_Integer ll_backend__var_locn__Var_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 10)));
        MR_Integer ll_backend__var_locn__Var_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 11)));
        MR_Word ll_backend__var_locn__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 12)));
        MR_Box ll_backend__var_locn__conv1_StackSlotLocn_16;

        {
          ll_backend__var_locn__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ll_backend__var_locn__StackSlots_15, ((MR_Box) (ll_backend__var_locn__Var_6)), &ll_backend__var_locn__conv1_StackSlotLocn_16);
        }
        if (ll_backend__var_locn__succeeded)
          {
            ll_backend__var_locn__StackSlotLocn_16 = ((MR_Word) ll_backend__var_locn__conv1_StackSlotLocn_16);
            ll_backend__var_locn__succeeded = MR_TRUE;
          }
        if (ll_backend__var_locn__succeeded)
          {
            {
              ll_backend__var_locn__StackSlot_17 = ll_backend__llds__stack_slot_to_lval_1_f_0(ll_backend__var_locn__StackSlotLocn_16);
            }
            {
              ll_backend__var_locn__succeeded = ll_backend__var_locn__var_locn_lval_in_use_2_p_0(ll_backend__var_locn__VLI_5, ll_backend__var_locn__StackSlot_17);
            }
            ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
          }
        if (ll_backend__var_locn__succeeded)
          *ll_backend__var_locn__Lval_8 = ll_backend__var_locn__StackSlot_17;
        else
          {
            ll_backend__var_locn__get_spare_reg_3_p_0(ll_backend__var_locn__VLI_5, ll_backend__var_locn__RegType_7, ll_backend__var_locn__Lval_8);
          }
      }
  }
}

static void MR_CALL 
ll_backend__var_locn__select_preferred_reg_avoid_5_p_0(
  MR_Word ll_backend__var_locn__VLI_6,
  MR_Word ll_backend__var_locn__Var_7,
  MR_Word ll_backend__var_locn__RegType_8,
  MR_Word ll_backend__var_locn__Avoid_9,
  MR_Word * ll_backend__var_locn__Lval_10)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__FollowVarMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 4)));
    MR_Word ll_backend__var_locn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 3)));
    MR_Integer ll_backend__var_locn__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 12)));
    MR_Word ll_backend__var_locn__PrefLocn_12;
    MR_Box ll_backend__var_locn__conv0_PrefLocn_12;

    {
      ll_backend__var_locn__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ll_backend__var_locn__FollowVarMap_11, ((MR_Box) (ll_backend__var_locn__Var_7)), &ll_backend__var_locn__conv0_PrefLocn_12);
    }
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__PrefLocn_12 = ((MR_Word) ll_backend__var_locn__conv0_PrefLocn_12);
        ll_backend__var_locn__succeeded = MR_TRUE;
      }
    if (ll_backend__var_locn__succeeded)
      {
        if ((ll_backend__var_locn__PrefLocn_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ll_backend__var_locn__succeeded = MR_TRUE;
        else
        if (((MR_tag((MR_Word) ll_backend__var_locn__PrefLocn_12)) == (MR_mktag((MR_Integer) 1))))
          ll_backend__var_locn__succeeded = MR_TRUE;
        else
          ll_backend__var_locn__succeeded = MR_FALSE;
      }
    if (ll_backend__var_locn__succeeded)
      {
        MR_Word ll_backend__var_locn__PrefLval_17;
        MR_Word ll_backend__var_locn__PrefRegType_15;
        MR_Integer ll_backend__var_locn__N_16;
        MR_Word ll_backend__var_locn__TypeCtorInfo_20_20;

        ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__PrefLocn_12)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__var_locn__succeeded)
          {
            ll_backend__var_locn__PrefRegType_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__PrefLocn_12, (MR_Integer) 0)));
            ll_backend__var_locn__N_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__PrefLocn_12, (MR_Integer) 1)));
            {
              ll_backend__var_locn__PrefLval_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__var_locn__PrefLval_17, 0) = ((MR_Box) (ll_backend__var_locn__PrefRegType_15));
              MR_hl_field(MR_mktag(1), ll_backend__var_locn__PrefLval_17, 1) = ((MR_Box) (ll_backend__var_locn__N_16));
            }
            {
              ll_backend__var_locn__succeeded = ll_backend__var_locn__var_locn_lval_in_use_2_p_0(ll_backend__var_locn__VLI_6, ll_backend__var_locn__PrefLval_17);
            }
            ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
            if (ll_backend__var_locn__succeeded)
              {
                ll_backend__var_locn__TypeCtorInfo_20_20 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
                {
                  ll_backend__var_locn__succeeded = mercury__list__member_2_p_0(ll_backend__var_locn__TypeCtorInfo_20_20, ((MR_Box) (ll_backend__var_locn__PrefLval_17)), ll_backend__var_locn__Avoid_9);
                }
                ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
              }
          }
        if (ll_backend__var_locn__succeeded)
          *ll_backend__var_locn__Lval_10 = ll_backend__var_locn__PrefLval_17;
        else
          {
            MR_Integer ll_backend__var_locn__NextNonReserved_38;
            MR_Integer ll_backend__var_locn__Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 6)));
            MR_Integer ll_backend__var_locn__Var_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 5)));
            MR_Word ll_backend__var_locn__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 12)));
            MR_Integer ll_backend__var_locn__Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 11)));
            MR_Integer ll_backend__var_locn__Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 10)));
            MR_Word ll_backend__var_locn__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 9)));
            MR_Word ll_backend__var_locn__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 8)));
            MR_Word ll_backend__var_locn__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 7)));
            MR_Word ll_backend__var_locn__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 4)));
            MR_Word ll_backend__var_locn__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 3)));
            MR_Word ll_backend__var_locn__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 2)));
            MR_Word ll_backend__var_locn__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 1)));
            MR_Word ll_backend__var_locn__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_6, (MR_Integer) 0)));

            switch (ll_backend__var_locn__RegType_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                ll_backend__var_locn__NextNonReserved_38 = ll_backend__var_locn__Var_71;
                break;
              case (MR_Integer) 0:
                ll_backend__var_locn__NextNonReserved_38 = ll_backend__var_locn__Var_72;
                break;
            }
            {
              ll_backend__var_locn__get_spare_reg_2_5_p_0(ll_backend__var_locn__VLI_6, ll_backend__var_locn__RegType_8, ll_backend__var_locn__Avoid_9, ll_backend__var_locn__NextNonReserved_38, ll_backend__var_locn__Lval_10);
            }
          }
      }
    else
      {
        ll_backend__var_locn__get_spare_reg_avoid_4_p_0(ll_backend__var_locn__VLI_6, ll_backend__var_locn__RegType_8, ll_backend__var_locn__Avoid_9, ll_backend__var_locn__Lval_10);
      }
  }
}

static void MR_CALL 
ll_backend__var_locn__select_preferred_reg_4_p_0(
  MR_Word ll_backend__var_locn__VLI_5,
  MR_Word ll_backend__var_locn__Var_6,
  MR_Word ll_backend__var_locn__RegType_7,
  MR_Word * ll_backend__var_locn__Lval_8)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word ll_backend__var_locn__FollowVarMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 4)));
    MR_Word ll_backend__var_locn__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 3)));
    MR_Integer ll_backend__var_locn__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 12)));
    MR_Word ll_backend__var_locn__PrefLocn_16;
    MR_Box ll_backend__var_locn__conv0_PrefLocn_16;

    {
      ll_backend__var_locn__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ll_backend__var_locn__FollowVarMap_15, ((MR_Box) (ll_backend__var_locn__Var_6)), &ll_backend__var_locn__conv0_PrefLocn_16);
    }
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__PrefLocn_16 = ((MR_Word) ll_backend__var_locn__conv0_PrefLocn_16);
        ll_backend__var_locn__succeeded = MR_TRUE;
      }
    if (ll_backend__var_locn__succeeded)
      {
        if ((ll_backend__var_locn__PrefLocn_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ll_backend__var_locn__succeeded = MR_TRUE;
        else
        if (((MR_tag((MR_Word) ll_backend__var_locn__PrefLocn_16)) == (MR_mktag((MR_Integer) 1))))
          ll_backend__var_locn__succeeded = MR_TRUE;
        else
          ll_backend__var_locn__succeeded = MR_FALSE;
      }
    if (ll_backend__var_locn__succeeded)
      {
        MR_Word ll_backend__var_locn__PrefLval_21;
        MR_Word ll_backend__var_locn__PrefRegType_19;
        MR_Integer ll_backend__var_locn__N_20;
        MR_Word ll_backend__var_locn__TypeCtorInfo_20_24;

        ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__PrefLocn_16)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__var_locn__succeeded)
          {
            ll_backend__var_locn__PrefRegType_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__PrefLocn_16, (MR_Integer) 0)));
            ll_backend__var_locn__N_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__PrefLocn_16, (MR_Integer) 1)));
            {
              ll_backend__var_locn__PrefLval_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__var_locn__PrefLval_21, 0) = ((MR_Box) (ll_backend__var_locn__PrefRegType_19));
              MR_hl_field(MR_mktag(1), ll_backend__var_locn__PrefLval_21, 1) = ((MR_Box) (ll_backend__var_locn__N_20));
            }
            {
              ll_backend__var_locn__succeeded = ll_backend__var_locn__var_locn_lval_in_use_2_p_0(ll_backend__var_locn__VLI_5, ll_backend__var_locn__PrefLval_21);
            }
            ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
            if (ll_backend__var_locn__succeeded)
              {
                ll_backend__var_locn__TypeCtorInfo_20_24 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
                {
                  ll_backend__var_locn__succeeded = mercury__list__member_2_p_0(ll_backend__var_locn__TypeCtorInfo_20_24, ((MR_Box) (ll_backend__var_locn__PrefLval_21)), ll_backend__var_locn__Var_9);
                }
                ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
              }
          }
        if (ll_backend__var_locn__succeeded)
          *ll_backend__var_locn__Lval_8 = ll_backend__var_locn__PrefLval_21;
        else
          {
            MR_Integer ll_backend__var_locn__NextNonReserved_42;
            MR_Integer ll_backend__var_locn__Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 6)));
            MR_Integer ll_backend__var_locn__Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 5)));
            MR_Word ll_backend__var_locn__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 12)));
            MR_Integer ll_backend__var_locn__Var_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 11)));
            MR_Integer ll_backend__var_locn__Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 10)));
            MR_Word ll_backend__var_locn__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 9)));
            MR_Word ll_backend__var_locn__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 8)));
            MR_Word ll_backend__var_locn__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 7)));
            MR_Word ll_backend__var_locn__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 4)));
            MR_Word ll_backend__var_locn__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 3)));
            MR_Word ll_backend__var_locn__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 2)));
            MR_Word ll_backend__var_locn__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 1)));
            MR_Word ll_backend__var_locn__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_5, (MR_Integer) 0)));

            switch (ll_backend__var_locn__RegType_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                ll_backend__var_locn__NextNonReserved_42 = ll_backend__var_locn__Var_75;
                break;
              case (MR_Integer) 0:
                ll_backend__var_locn__NextNonReserved_42 = ll_backend__var_locn__Var_76;
                break;
            }
            {
              ll_backend__var_locn__get_spare_reg_2_5_p_0(ll_backend__var_locn__VLI_5, ll_backend__var_locn__RegType_7, ll_backend__var_locn__Var_9, ll_backend__var_locn__NextNonReserved_42, ll_backend__var_locn__Lval_8);
            }
          }
      }
    else
      {
        ll_backend__var_locn__get_spare_reg_avoid_4_p_0(ll_backend__var_locn__VLI_5, ll_backend__var_locn__RegType_7, ll_backend__var_locn__Var_9, ll_backend__var_locn__Lval_8);
      }
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__select_reg_or_stack_lval_2_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word * ll_backend__var_locn__Lval_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word ll_backend__var_locn__Lval0_3;
        MR_Word ll_backend__var_locn__Lvals0_4;

        if (ll_backend__var_locn__succeeded)
          {
            ll_backend__var_locn__Lval0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 0)));
            ll_backend__var_locn__Lvals0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 1)));
            switch (MR_tag((MR_Word) ll_backend__var_locn__Lval0_3)) {
              default:
                ll_backend__var_locn__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                ll_backend__var_locn__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_3, (MR_Integer) 0)))) {
                  default:
                    ll_backend__var_locn__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    ll_backend__var_locn__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    ll_backend__var_locn__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 3:
                    ll_backend__var_locn__succeeded = MR_TRUE;
                    break;
                }
                break;
            }
            if (ll_backend__var_locn__succeeded)
              {
                *ll_backend__var_locn__Lval_5 = ll_backend__var_locn__Lval0_3;
                ll_backend__var_locn__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__var_locn__next_value_of_HeadVar__1_1 = ll_backend__var_locn__Lvals0_4;

                  ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return ll_backend__var_locn__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
ll_backend__var_locn__select_stack_lval_2_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word * ll_backend__var_locn__Lval_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word ll_backend__var_locn__Lval0_3;
        MR_Word ll_backend__var_locn__Lvals0_4;

        if (ll_backend__var_locn__succeeded)
          {
            ll_backend__var_locn__Lval0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 0)));
            ll_backend__var_locn__Lvals0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 1)));
            switch (MR_tag((MR_Word) ll_backend__var_locn__Lval0_3)) {
              default:
                ll_backend__var_locn__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_3, (MR_Integer) 0)))) {
                  default:
                    ll_backend__var_locn__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    ll_backend__var_locn__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    ll_backend__var_locn__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 3:
                    ll_backend__var_locn__succeeded = MR_TRUE;
                    break;
                }
                break;
            }
            if (ll_backend__var_locn__succeeded)
              {
                *ll_backend__var_locn__Lval_5 = ll_backend__var_locn__Lval0_3;
                ll_backend__var_locn__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__var_locn__next_value_of_HeadVar__1_1 = ll_backend__var_locn__Lvals0_4;

                  ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return ll_backend__var_locn__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
ll_backend__var_locn__select_reg_lval_2_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word * ll_backend__var_locn__Lval_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word ll_backend__var_locn__Lval0_3;
        MR_Word ll_backend__var_locn__Lvals0_4;
        MR_Word ll_backend__var_locn__Var_6;
        MR_Integer ll_backend__var_locn__Var_7;

        if (ll_backend__var_locn__succeeded)
          {
            ll_backend__var_locn__Lval0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 0)));
            ll_backend__var_locn__Lvals0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 1)));
            ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__Lval0_3)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__var_locn__succeeded)
              {
                ll_backend__var_locn__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Lval0_3, (MR_Integer) 0)));
                ll_backend__var_locn__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Lval0_3, (MR_Integer) 1)));
                *ll_backend__var_locn__Lval_5 = ll_backend__var_locn__Lval0_3;
                ll_backend__var_locn__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__var_locn__next_value_of_HeadVar__1_1 = ll_backend__var_locn__Lvals0_4;

                  ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return ll_backend__var_locn__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
ll_backend__var_locn__get_var_set_roots_2_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) ll_backend__var_locn__wrapper_arg_1));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn__get_var_set_roots_2_p_0(
  MR_Word ll_backend__var_locn__Lvals_3,
  MR_Word * ll_backend__var_locn__NoDupRootLvals_4)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__TypeCtorInfo_10_10 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    MR_Word ll_backend__var_locn__LvalList_5;
    MR_Word ll_backend__var_locn__AllLvals_6;
    MR_Word ll_backend__var_locn__RootLvals_7;
    MR_Word ll_backend__var_locn__Var_8;

    {
      mercury__set__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_10_10, ll_backend__var_locn__Lvals_3, &ll_backend__var_locn__LvalList_5);
    }
    {
      ll_backend__var_locn__Var_8 = ll_backend__code_util__lvals_in_lvals_1_f_0(ll_backend__var_locn__LvalList_5);
    }
    {
      ll_backend__var_locn__AllLvals_6 = mercury__list__f_43_43_2_f_0(ll_backend__var_locn__TypeCtorInfo_10_10, ll_backend__var_locn__LvalList_5, ll_backend__var_locn__Var_8);
    }
    {
      mercury__list__filter_3_p_0(ll_backend__var_locn__TypeCtorInfo_10_10, (MR_Word) &ll_backend__var_locn_scalar_common_2[19], ll_backend__var_locn__AllLvals_6, &ll_backend__var_locn__RootLvals_7);
    }
    {
      mercury__list__sort_and_remove_dups_2_p_0(ll_backend__var_locn__TypeCtorInfo_10_10, ll_backend__var_locn__RootLvals_7, ll_backend__var_locn__NoDupRootLvals_4);
    }
  }
}

static MR_Word MR_CALL 
ll_backend__var_locn__substitute_lval_in_lval_3_f_0(
  MR_Word ll_backend__var_locn__Old_5,
  MR_Word ll_backend__var_locn__New_6,
  MR_Word ll_backend__var_locn__Lval0_7)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Lval_8;

    {
      ll_backend__exprn_aux__substitute_lval_in_lval_4_p_0(ll_backend__var_locn__Old_5, ll_backend__var_locn__New_6, ll_backend__var_locn__Lval0_7, &ll_backend__var_locn__Lval_8);
    }
    return ll_backend__var_locn__Lval_8;
  }
}

static void MR_CALL 
ll_backend__var_locn__record_change_in_root_dependencies_5_p_0_4(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv2_STATE_VARIABLE_LocVarMap_12;

    {
      ll_backend__var_locn__make_var_not_depend_on_root_lval_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2), &ll_backend__var_locn__conv2_STATE_VARIABLE_LocVarMap_12);
    }
    *ll_backend__var_locn__wrapper_arg_3 = ((MR_Box) (ll_backend__var_locn__conv2_STATE_VARIABLE_LocVarMap_12));
  }
}

static void MR_CALL 
ll_backend__var_locn__record_change_in_root_dependencies_5_p_0_3(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv0_STATE_VARIABLE_LocVarMap_11;

    {
      ll_backend__var_locn__make_var_depend_on_root_lval_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2), &ll_backend__var_locn__conv0_STATE_VARIABLE_LocVarMap_11);
    }
    *ll_backend__var_locn__wrapper_arg_3 = ((MR_Box) (ll_backend__var_locn__conv0_STATE_VARIABLE_LocVarMap_11));
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__record_change_in_root_dependencies_5_p_0_2(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) ll_backend__var_locn__wrapper_arg_1));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__record_change_in_root_dependencies_5_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) ll_backend__var_locn__wrapper_arg_1));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn__record_change_in_root_dependencies_5_p_0(
  MR_Word ll_backend__var_locn__OldLvalSet_6,
  MR_Word ll_backend__var_locn__NewLvalSet_7,
  MR_Word ll_backend__var_locn__Var_8,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_18,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_LocVarMap_19)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__TypeCtorInfo_24_24;
    MR_Word ll_backend__var_locn__TypeInfo_28_28;
    MR_Word ll_backend__var_locn__TypeCtorInfo_10_39 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    MR_Word ll_backend__var_locn__TypeCtorInfo_10_48;
    MR_Word ll_backend__var_locn__OldRootLvals_10;
    MR_Word ll_backend__var_locn__NewRootLvals_11;
    MR_Word ll_backend__var_locn__OldRootLvalSet_12;
    MR_Word ll_backend__var_locn__NewRootLvalSet_13;
    MR_Word ll_backend__var_locn__InsertSet_14;
    MR_Word ll_backend__var_locn__DeleteSet_15;
    MR_Word ll_backend__var_locn__Inserts_16;
    MR_Word ll_backend__var_locn__Deletes_17;
    MR_Word ll_backend__var_locn__Var_20;
    MR_Word ll_backend__var_locn__STATE_VARIABLE_LocVarMap_21_21;
    MR_Word ll_backend__var_locn__Var_22;
    MR_Word ll_backend__var_locn__LvalList_34;
    MR_Word ll_backend__var_locn__AllLvals_35;
    MR_Word ll_backend__var_locn__RootLvals_36;
    MR_Word ll_backend__var_locn__Var_37;
    MR_Word ll_backend__var_locn__LvalList_43;
    MR_Word ll_backend__var_locn__AllLvals_44;
    MR_Word ll_backend__var_locn__RootLvals_45;
    MR_Word ll_backend__var_locn__Var_46;
    MR_Box ll_backend__var_locn__conv1_STATE_VARIABLE_LocVarMap_21_21;
    MR_Box ll_backend__var_locn__conv3_STATE_VARIABLE_LocVarMap_19;

    {
      mercury__set__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_10_39, ll_backend__var_locn__OldLvalSet_6, &ll_backend__var_locn__LvalList_34);
    }
    {
      ll_backend__var_locn__Var_37 = ll_backend__code_util__lvals_in_lvals_1_f_0(ll_backend__var_locn__LvalList_34);
    }
    {
      ll_backend__var_locn__AllLvals_35 = mercury__list__f_43_43_2_f_0(ll_backend__var_locn__TypeCtorInfo_10_39, ll_backend__var_locn__LvalList_34, ll_backend__var_locn__Var_37);
    }
    {
      mercury__list__filter_3_p_0(ll_backend__var_locn__TypeCtorInfo_10_39, (MR_Word) &ll_backend__var_locn_scalar_common_2[17], ll_backend__var_locn__AllLvals_35, &ll_backend__var_locn__RootLvals_36);
    }
    {
      mercury__list__sort_and_remove_dups_2_p_0(ll_backend__var_locn__TypeCtorInfo_10_39, ll_backend__var_locn__RootLvals_36, &ll_backend__var_locn__OldRootLvals_10);
    }
    ll_backend__var_locn__TypeCtorInfo_10_48 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    {
      mercury__set__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_10_48, ll_backend__var_locn__NewLvalSet_7, &ll_backend__var_locn__LvalList_43);
    }
    {
      ll_backend__var_locn__Var_46 = ll_backend__code_util__lvals_in_lvals_1_f_0(ll_backend__var_locn__LvalList_43);
    }
    {
      ll_backend__var_locn__AllLvals_44 = mercury__list__f_43_43_2_f_0(ll_backend__var_locn__TypeCtorInfo_10_48, ll_backend__var_locn__LvalList_43, ll_backend__var_locn__Var_46);
    }
    {
      mercury__list__filter_3_p_0(ll_backend__var_locn__TypeCtorInfo_10_48, (MR_Word) &ll_backend__var_locn_scalar_common_2[18], ll_backend__var_locn__AllLvals_44, &ll_backend__var_locn__RootLvals_45);
    }
    {
      mercury__list__sort_and_remove_dups_2_p_0(ll_backend__var_locn__TypeCtorInfo_10_48, ll_backend__var_locn__RootLvals_45, &ll_backend__var_locn__NewRootLvals_11);
    }
    ll_backend__var_locn__TypeCtorInfo_24_24 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    {
      mercury__set__list_to_set_2_p_0(ll_backend__var_locn__TypeCtorInfo_24_24, ll_backend__var_locn__OldRootLvals_10, &ll_backend__var_locn__OldRootLvalSet_12);
    }
    {
      mercury__set__list_to_set_2_p_0(ll_backend__var_locn__TypeCtorInfo_24_24, ll_backend__var_locn__NewRootLvals_11, &ll_backend__var_locn__NewRootLvalSet_13);
    }
    {
      mercury__set__difference_3_p_0(ll_backend__var_locn__TypeCtorInfo_24_24, ll_backend__var_locn__NewRootLvalSet_13, ll_backend__var_locn__OldRootLvalSet_12, &ll_backend__var_locn__InsertSet_14);
    }
    {
      mercury__set__difference_3_p_0(ll_backend__var_locn__TypeCtorInfo_24_24, ll_backend__var_locn__OldRootLvalSet_12, ll_backend__var_locn__NewRootLvalSet_13, &ll_backend__var_locn__DeleteSet_15);
    }
    {
      mercury__set__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_24_24, ll_backend__var_locn__InsertSet_14, &ll_backend__var_locn__Inserts_16);
    }
    {
      mercury__set__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_24_24, ll_backend__var_locn__DeleteSet_15, &ll_backend__var_locn__Deletes_17);
    }
    {
      ll_backend__var_locn__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_20, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_20, 1) = ((MR_Box) (ll_backend__var_locn__record_change_in_root_dependencies_5_p_0_3));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_20, 3) = ((MR_Box) (ll_backend__var_locn__Var_8));
    }
    ll_backend__var_locn__TypeInfo_28_28 = (MR_Word) &ll_backend__var_locn_scalar_common_2[0];
    {
      mercury__list__foldl_4_p_0(ll_backend__var_locn__TypeCtorInfo_24_24, ll_backend__var_locn__TypeInfo_28_28, ll_backend__var_locn__Var_20, ll_backend__var_locn__Inserts_16, ((MR_Box) (ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_18)), &ll_backend__var_locn__conv1_STATE_VARIABLE_LocVarMap_21_21);
    }
    ll_backend__var_locn__STATE_VARIABLE_LocVarMap_21_21 = ((MR_Word) ll_backend__var_locn__conv1_STATE_VARIABLE_LocVarMap_21_21);
    {
      ll_backend__var_locn__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_22, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_22, 1) = ((MR_Box) (ll_backend__var_locn__record_change_in_root_dependencies_5_p_0_4));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_22, 3) = ((MR_Box) (ll_backend__var_locn__Var_8));
    }
    {
      mercury__list__foldl_4_p_0(ll_backend__var_locn__TypeCtorInfo_24_24, ll_backend__var_locn__TypeInfo_28_28, ll_backend__var_locn__Var_22, ll_backend__var_locn__Deletes_17, ((MR_Box) (ll_backend__var_locn__STATE_VARIABLE_LocVarMap_21_21)), &ll_backend__var_locn__conv3_STATE_VARIABLE_LocVarMap_19);
    }
    *ll_backend__var_locn__STATE_VARIABLE_LocVarMap_19 = ((MR_Word) ll_backend__var_locn__conv3_STATE_VARIABLE_LocVarMap_19);
  }
}

static void MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_8(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv5_STATE_VARIABLE_LocVarMap_12;

    {
      ll_backend__var_locn__make_var_not_depend_on_root_lval_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2), &ll_backend__var_locn__conv5_STATE_VARIABLE_LocVarMap_12);
    }
    *ll_backend__var_locn__wrapper_arg_3 = ((MR_Box) (ll_backend__var_locn__conv5_STATE_VARIABLE_LocVarMap_12));
  }
}

static void MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_7(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv3_STATE_VARIABLE_LocVarMap_11;

    {
      ll_backend__var_locn__make_var_depend_on_root_lval_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2), &ll_backend__var_locn__conv3_STATE_VARIABLE_LocVarMap_11);
    }
    *ll_backend__var_locn__wrapper_arg_3 = ((MR_Box) (ll_backend__var_locn__conv3_STATE_VARIABLE_LocVarMap_11));
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_6(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) ll_backend__var_locn__wrapper_arg_1));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_5(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) ll_backend__var_locn__wrapper_arg_1));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_4(
  MR_Box ll_backend__var_locn__closure_arg)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__nonempty_state_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static MR_Box MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_3(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1)
{
  {
    MR_Box ll_backend__var_locn__wrapper_arg_2;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv2_Lval_8;

    {
      ll_backend__var_locn__conv2_Lval_8 = ll_backend__var_locn__substitute_lval_in_lval_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1));
    }
    ll_backend__var_locn__wrapper_arg_2 = ((MR_Box) (ll_backend__var_locn__conv2_Lval_8));
    return ll_backend__var_locn__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_2(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__lval_does_not_support_lval_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static MR_Box MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1)
{
  {
    MR_Box ll_backend__var_locn__wrapper_arg_2;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv1_Lval_8;

    {
      ll_backend__var_locn__conv1_Lval_8 = ll_backend__var_locn__substitute_lval_in_lval_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1));
    }
    ll_backend__var_locn__wrapper_arg_2 = ((MR_Box) (ll_backend__var_locn__conv1_Lval_8));
    return ll_backend__var_locn__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0(
  MR_Word ll_backend__var_locn__Old_8,
  MR_Word ll_backend__var_locn__New_9,
  MR_Word ll_backend__var_locn__Var_10,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_25,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VarStateMap_26,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_27,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_LocVarMap_28)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__TypeInfo_40_40 = (MR_Word) &ll_backend__var_locn_scalar_common_1[0];
    MR_Word ll_backend__var_locn__TypeCtorInfo_41_41 = (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0;
    MR_Word ll_backend__var_locn__TypeCtorInfo_42_42;
    MR_Word ll_backend__var_locn__TypeCtorInfo_24_66;
    MR_Word ll_backend__var_locn__TypeInfo_28_70;
    MR_Word ll_backend__var_locn__TypeCtorInfo_10_81;
    MR_Word ll_backend__var_locn__TypeCtorInfo_10_90;
    MR_Word ll_backend__var_locn__State0_13;
    MR_Word ll_backend__var_locn__LvalSet0_14;
    MR_Word ll_backend__var_locn__MaybeConstRval_15;
    MR_Word ll_backend__var_locn__MaybeExprRval_16;
    MR_Word ll_backend__var_locn__Using_17;
    MR_Word ll_backend__var_locn__DeadOrAlive_18;
    MR_Word ll_backend__var_locn__Token_19;
    MR_Word ll_backend__var_locn__LvalSet1_20;
    MR_Word ll_backend__var_locn__LvalSet2_21;
    MR_Word ll_backend__var_locn__LvalSet3_22;
    MR_Word ll_backend__var_locn__LvalSet_23;
    MR_Word ll_backend__var_locn__State_24;
    MR_Word ll_backend__var_locn__Var_31;
    MR_Word ll_backend__var_locn__Var_32;
    MR_Word ll_backend__var_locn__Var_33;
    MR_Word ll_backend__var_locn__Var_34;
    MR_Word ll_backend__var_locn__OldRootLvals_54;
    MR_Word ll_backend__var_locn__NewRootLvals_55;
    MR_Word ll_backend__var_locn__OldRootLvalSet_56;
    MR_Word ll_backend__var_locn__NewRootLvalSet_57;
    MR_Word ll_backend__var_locn__InsertSet_58;
    MR_Word ll_backend__var_locn__DeleteSet_59;
    MR_Word ll_backend__var_locn__Inserts_60;
    MR_Word ll_backend__var_locn__Deletes_61;
    MR_Word ll_backend__var_locn__Var_62;
    MR_Word ll_backend__var_locn__STATE_VARIABLE_LocVarMap_21_63;
    MR_Word ll_backend__var_locn__Var_64;
    MR_Word ll_backend__var_locn__LvalList_76;
    MR_Word ll_backend__var_locn__AllLvals_77;
    MR_Word ll_backend__var_locn__RootLvals_78;
    MR_Word ll_backend__var_locn__Var_79;
    MR_Word ll_backend__var_locn__LvalList_85;
    MR_Word ll_backend__var_locn__AllLvals_86;
    MR_Word ll_backend__var_locn__RootLvals_87;
    MR_Word ll_backend__var_locn__Var_88;
    MR_Box ll_backend__var_locn__conv0_State0_13;
    MR_Box ll_backend__var_locn__conv4_STATE_VARIABLE_LocVarMap_21_63;
    MR_Box ll_backend__var_locn__conv6_STATE_VARIABLE_LocVarMap_28;

    {
      mercury__map__lookup_3_p_0(ll_backend__var_locn__TypeInfo_40_40, ll_backend__var_locn__TypeCtorInfo_41_41, ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_25, ((MR_Box) (ll_backend__var_locn__Var_10)), &ll_backend__var_locn__conv0_State0_13);
    }
    ll_backend__var_locn__State0_13 = ((MR_Word) ll_backend__var_locn__conv0_State0_13);
    ll_backend__var_locn__LvalSet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_13, (MR_Integer) 0)));
    ll_backend__var_locn__MaybeConstRval_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_13, (MR_Integer) 1)));
    ll_backend__var_locn__MaybeExprRval_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_13, (MR_Integer) 2)));
    ll_backend__var_locn__Using_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_13, (MR_Integer) 3)));
    ll_backend__var_locn__DeadOrAlive_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_13, (MR_Integer) 4)));
    ll_backend__var_locn__Token_19 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__var_locn_scalar_common_1[13]);
    ll_backend__var_locn__TypeCtorInfo_42_42 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    {
      ll_backend__var_locn__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_31, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_31, 1) = ((MR_Box) (ll_backend__var_locn__record_copy_for_var_7_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_31, 3) = ((MR_Box) (ll_backend__var_locn__Old_8));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_31, 4) = ((MR_Box) (ll_backend__var_locn__Token_19));
    }
    {
      ll_backend__var_locn__LvalSet1_20 = mercury__set__map_2_f_0(ll_backend__var_locn__TypeCtorInfo_42_42, ll_backend__var_locn__TypeCtorInfo_42_42, ll_backend__var_locn__Var_31, ll_backend__var_locn__LvalSet0_14);
    }
    {
      mercury__set__union_3_p_0(ll_backend__var_locn__TypeCtorInfo_42_42, ll_backend__var_locn__LvalSet0_14, ll_backend__var_locn__LvalSet1_20, &ll_backend__var_locn__LvalSet2_21);
    }
    {
      ll_backend__var_locn__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_32, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_32, 1) = ((MR_Box) (ll_backend__var_locn__record_copy_for_var_7_p_0_2));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_32, 3) = ((MR_Box) (ll_backend__var_locn__New_9));
    }
    {
      ll_backend__var_locn__LvalSet3_22 = mercury__set__filter_2_f_0(ll_backend__var_locn__TypeCtorInfo_42_42, ll_backend__var_locn__Var_32, ll_backend__var_locn__LvalSet2_21);
    }
    {
      ll_backend__var_locn__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_33, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_33, 1) = ((MR_Box) (ll_backend__var_locn__record_copy_for_var_7_p_0_3));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_33, 3) = ((MR_Box) (ll_backend__var_locn__Token_19));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_33, 4) = ((MR_Box) (ll_backend__var_locn__New_9));
    }
    {
      ll_backend__var_locn__LvalSet_23 = mercury__set__map_2_f_0(ll_backend__var_locn__TypeCtorInfo_42_42, ll_backend__var_locn__TypeCtorInfo_42_42, ll_backend__var_locn__Var_33, ll_backend__var_locn__LvalSet3_22);
    }
    {
      ll_backend__var_locn__State_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_24, 0) = ((MR_Box) (ll_backend__var_locn__LvalSet_23));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_24, 1) = ((MR_Box) (ll_backend__var_locn__MaybeConstRval_15));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_24, 2) = ((MR_Box) (ll_backend__var_locn__MaybeExprRval_16));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_24, 3) = ((MR_Box) (ll_backend__var_locn__Using_17));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_24, 4) = ((MR_Box) (ll_backend__var_locn__DeadOrAlive_18));
    }
    {
      ll_backend__var_locn__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_34, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_34, 1) = ((MR_Box) (ll_backend__var_locn__record_copy_for_var_7_p_0_4));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_34, 3) = ((MR_Box) (ll_backend__var_locn__State_24));
    }
    {
      mercury__require__expect_4_p_0(ll_backend__var_locn__Var_34, (MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.record_copy_for_var\'/7", (MR_String) "empty state");
    }
    {
      mercury__map__det_update_4_p_0(ll_backend__var_locn__TypeInfo_40_40, ll_backend__var_locn__TypeCtorInfo_41_41, ((MR_Box) (ll_backend__var_locn__Var_10)), ((MR_Box) (ll_backend__var_locn__State_24)), ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_25, ll_backend__var_locn__STATE_VARIABLE_VarStateMap_26);
    }
    ll_backend__var_locn__TypeCtorInfo_10_81 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    {
      mercury__set__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_10_81, ll_backend__var_locn__LvalSet0_14, &ll_backend__var_locn__LvalList_76);
    }
    {
      ll_backend__var_locn__Var_79 = ll_backend__code_util__lvals_in_lvals_1_f_0(ll_backend__var_locn__LvalList_76);
    }
    {
      ll_backend__var_locn__AllLvals_77 = mercury__list__f_43_43_2_f_0(ll_backend__var_locn__TypeCtorInfo_10_81, ll_backend__var_locn__LvalList_76, ll_backend__var_locn__Var_79);
    }
    {
      mercury__list__filter_3_p_0(ll_backend__var_locn__TypeCtorInfo_10_81, (MR_Word) &ll_backend__var_locn_scalar_common_2[15], ll_backend__var_locn__AllLvals_77, &ll_backend__var_locn__RootLvals_78);
    }
    {
      mercury__list__sort_and_remove_dups_2_p_0(ll_backend__var_locn__TypeCtorInfo_10_81, ll_backend__var_locn__RootLvals_78, &ll_backend__var_locn__OldRootLvals_54);
    }
    ll_backend__var_locn__TypeCtorInfo_10_90 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    {
      mercury__set__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_10_90, ll_backend__var_locn__LvalSet_23, &ll_backend__var_locn__LvalList_85);
    }
    {
      ll_backend__var_locn__Var_88 = ll_backend__code_util__lvals_in_lvals_1_f_0(ll_backend__var_locn__LvalList_85);
    }
    {
      ll_backend__var_locn__AllLvals_86 = mercury__list__f_43_43_2_f_0(ll_backend__var_locn__TypeCtorInfo_10_90, ll_backend__var_locn__LvalList_85, ll_backend__var_locn__Var_88);
    }
    {
      mercury__list__filter_3_p_0(ll_backend__var_locn__TypeCtorInfo_10_90, (MR_Word) &ll_backend__var_locn_scalar_common_2[16], ll_backend__var_locn__AllLvals_86, &ll_backend__var_locn__RootLvals_87);
    }
    {
      mercury__list__sort_and_remove_dups_2_p_0(ll_backend__var_locn__TypeCtorInfo_10_90, ll_backend__var_locn__RootLvals_87, &ll_backend__var_locn__NewRootLvals_55);
    }
    ll_backend__var_locn__TypeCtorInfo_24_66 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    {
      mercury__set__list_to_set_2_p_0(ll_backend__var_locn__TypeCtorInfo_24_66, ll_backend__var_locn__OldRootLvals_54, &ll_backend__var_locn__OldRootLvalSet_56);
    }
    {
      mercury__set__list_to_set_2_p_0(ll_backend__var_locn__TypeCtorInfo_24_66, ll_backend__var_locn__NewRootLvals_55, &ll_backend__var_locn__NewRootLvalSet_57);
    }
    {
      mercury__set__difference_3_p_0(ll_backend__var_locn__TypeCtorInfo_24_66, ll_backend__var_locn__NewRootLvalSet_57, ll_backend__var_locn__OldRootLvalSet_56, &ll_backend__var_locn__InsertSet_58);
    }
    {
      mercury__set__difference_3_p_0(ll_backend__var_locn__TypeCtorInfo_24_66, ll_backend__var_locn__OldRootLvalSet_56, ll_backend__var_locn__NewRootLvalSet_57, &ll_backend__var_locn__DeleteSet_59);
    }
    {
      mercury__set__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_24_66, ll_backend__var_locn__InsertSet_58, &ll_backend__var_locn__Inserts_60);
    }
    {
      mercury__set__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_24_66, ll_backend__var_locn__DeleteSet_59, &ll_backend__var_locn__Deletes_61);
    }
    {
      ll_backend__var_locn__Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_62, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_62, 1) = ((MR_Box) (ll_backend__var_locn__record_copy_for_var_7_p_0_7));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_62, 3) = ((MR_Box) (ll_backend__var_locn__Var_10));
    }
    ll_backend__var_locn__TypeInfo_28_70 = (MR_Word) &ll_backend__var_locn_scalar_common_2[0];
    {
      mercury__list__foldl_4_p_0(ll_backend__var_locn__TypeCtorInfo_24_66, ll_backend__var_locn__TypeInfo_28_70, ll_backend__var_locn__Var_62, ll_backend__var_locn__Inserts_60, ((MR_Box) (ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_27)), &ll_backend__var_locn__conv4_STATE_VARIABLE_LocVarMap_21_63);
    }
    ll_backend__var_locn__STATE_VARIABLE_LocVarMap_21_63 = ((MR_Word) ll_backend__var_locn__conv4_STATE_VARIABLE_LocVarMap_21_63);
    {
      ll_backend__var_locn__Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_64, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_64, 1) = ((MR_Box) (ll_backend__var_locn__record_copy_for_var_7_p_0_8));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_64, 3) = ((MR_Box) (ll_backend__var_locn__Var_10));
    }
    {
      mercury__list__foldl_4_p_0(ll_backend__var_locn__TypeCtorInfo_24_66, ll_backend__var_locn__TypeInfo_28_70, ll_backend__var_locn__Var_64, ll_backend__var_locn__Deletes_61, ((MR_Box) (ll_backend__var_locn__STATE_VARIABLE_LocVarMap_21_63)), &ll_backend__var_locn__conv6_STATE_VARIABLE_LocVarMap_28);
    }
    *ll_backend__var_locn__STATE_VARIABLE_LocVarMap_28 = ((MR_Word) ll_backend__var_locn__conv6_STATE_VARIABLE_LocVarMap_28);
  }
}

static void MR_CALL 
ll_backend__var_locn__record_copy_4_p_0_5(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3,
  MR_Box ll_backend__var_locn__wrapper_arg_4,
  MR_Box * ll_backend__var_locn__wrapper_arg_5)
{
  {
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv4_STATE_VARIABLE_VarStateMap_26;
    MR_Word ll_backend__var_locn__conv3_STATE_VARIABLE_LocVarMap_28;

    {
      ll_backend__var_locn__record_copy_for_var_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2), &ll_backend__var_locn__conv4_STATE_VARIABLE_VarStateMap_26, ((MR_Word) ll_backend__var_locn__wrapper_arg_4), &ll_backend__var_locn__conv3_STATE_VARIABLE_LocVarMap_28);
    }
    *ll_backend__var_locn__wrapper_arg_3 = ((MR_Box) (ll_backend__var_locn__conv4_STATE_VARIABLE_VarStateMap_26));
    *ll_backend__var_locn__wrapper_arg_5 = ((MR_Box) (ll_backend__var_locn__conv3_STATE_VARIABLE_LocVarMap_28));
  }
}

static void MR_CALL 
ll_backend__var_locn__record_copy_4_p_0_4(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv1_HeadVar__3_40;

    {
      ll_backend__var_locn__IntroducedFrom__pred__record_copy__1866__1_3_p_0(((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2), &ll_backend__var_locn__conv1_HeadVar__3_40);
    }
    *ll_backend__var_locn__wrapper_arg_3 = ((MR_Box) (ll_backend__var_locn__conv1_HeadVar__3_40));
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_4_p_0_3(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box * ll_backend__var_locn__wrapper_arg_2)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv0_HeadVar__3_34;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__IntroducedFrom__pred__record_copy__1863__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1), &ll_backend__var_locn__conv0_HeadVar__3_34);
    }
    if (ll_backend__var_locn__succeeded)
      {
        *ll_backend__var_locn__wrapper_arg_2 = ((MR_Box) (ll_backend__var_locn__conv0_HeadVar__3_34));
        ll_backend__var_locn__succeeded = MR_TRUE;
      }
    return ll_backend__var_locn__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_4_p_0_2(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) ll_backend__var_locn__wrapper_arg_1));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_4_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn__record_copy_4_p_0(
  MR_Word ll_backend__var_locn__Old_5,
  MR_Word ll_backend__var_locn__New_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_17,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_18)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__TypeCtorInfo_32_32;
    MR_Word ll_backend__var_locn__TypeInfo_37_37;
    MR_Word ll_backend__var_locn__TypeCtorInfo_42_42;
    MR_Word ll_backend__var_locn__TypeCtorInfo_10_84;
    MR_Word ll_backend__var_locn__VarStateMap0_8;
    MR_Word ll_backend__var_locn__LocVarMap0_9;
    MR_Word ll_backend__var_locn__AssignSet_10;
    MR_Word ll_backend__var_locn__NoDupRootLvals_11;
    MR_Word ll_backend__var_locn__AffectedVarSets_12;
    MR_Word ll_backend__var_locn__AffectedVarSet_13;
    MR_Word ll_backend__var_locn__AffectedVars_14;
    MR_Word ll_backend__var_locn__VarStateMap_15;
    MR_Word ll_backend__var_locn__LocVarMap_16;
    MR_Word ll_backend__var_locn__Var_19;
    MR_Word ll_backend__var_locn__Var_23;
    MR_Word ll_backend__var_locn__Var_24;
    MR_Word ll_backend__var_locn__Var_26;
    MR_Word ll_backend__var_locn__Var_28;
    MR_Word ll_backend__var_locn__Var_29;
    MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_30_30;
    MR_Word ll_backend__var_locn__LvalList_79;
    MR_Word ll_backend__var_locn__AllLvals_80;
    MR_Word ll_backend__var_locn__RootLvals_81;
    MR_Word ll_backend__var_locn__Var_82;
    MR_Word ll_backend__var_locn__Var_52;
    MR_Word ll_backend__var_locn__Var_53;
    MR_Word ll_backend__var_locn__Var_54;
    MR_Word ll_backend__var_locn__Var_55;
    MR_Word ll_backend__var_locn__Var_56;
    MR_Integer ll_backend__var_locn__Var_57;
    MR_Integer ll_backend__var_locn__Var_58;
    MR_Word ll_backend__var_locn__Var_60;
    MR_Integer ll_backend__var_locn__Var_61;
    MR_Integer ll_backend__var_locn__Var_62;
    MR_Word ll_backend__var_locn__Var_63;
    MR_Box ll_backend__var_locn__conv2_AffectedVarSet_13;
    MR_Box ll_backend__var_locn__conv6_VarStateMap_15;
    MR_Box ll_backend__var_locn__conv5_LocVarMap_16;

    {
      ll_backend__var_locn__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_19, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_19, 1) = ((MR_Box) (ll_backend__var_locn__record_copy_4_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_19, 3) = ((MR_Box) (ll_backend__var_locn__New_6));
    }
    {
      mercury__require__expect_4_p_0(ll_backend__var_locn__Var_19, (MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.record_copy\'/4", (MR_String) "non-root New lval");
    }
    ll_backend__var_locn__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_17, (MR_Integer) 0)));
    ll_backend__var_locn__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_17, (MR_Integer) 1)));
    ll_backend__var_locn__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_17, (MR_Integer) 2)));
    ll_backend__var_locn__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_17, (MR_Integer) 3)));
    ll_backend__var_locn__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_17, (MR_Integer) 4)));
    ll_backend__var_locn__Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_17, (MR_Integer) 5)));
    ll_backend__var_locn__Var_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_17, (MR_Integer) 6)));
    ll_backend__var_locn__VarStateMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_17, (MR_Integer) 7)));
    ll_backend__var_locn__LocVarMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_17, (MR_Integer) 8)));
    ll_backend__var_locn__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_17, (MR_Integer) 9)));
    ll_backend__var_locn__Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_17, (MR_Integer) 10)));
    ll_backend__var_locn__Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_17, (MR_Integer) 11)));
    ll_backend__var_locn__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_17, (MR_Integer) 12)));
    {
      ll_backend__var_locn__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_24, 0) = ((MR_Box) (ll_backend__var_locn__New_6));
      MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__var_locn__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_23, 0) = ((MR_Box) (ll_backend__var_locn__Old_5));
      MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_23, 1) = ((MR_Box) (ll_backend__var_locn__Var_24));
    }
    ll_backend__var_locn__TypeCtorInfo_32_32 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    {
      mercury__set__list_to_set_2_p_0(ll_backend__var_locn__TypeCtorInfo_32_32, ll_backend__var_locn__Var_23, &ll_backend__var_locn__AssignSet_10);
    }
    ll_backend__var_locn__TypeCtorInfo_10_84 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    {
      mercury__set__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_10_84, ll_backend__var_locn__AssignSet_10, &ll_backend__var_locn__LvalList_79);
    }
    {
      ll_backend__var_locn__Var_82 = ll_backend__code_util__lvals_in_lvals_1_f_0(ll_backend__var_locn__LvalList_79);
    }
    {
      ll_backend__var_locn__AllLvals_80 = mercury__list__f_43_43_2_f_0(ll_backend__var_locn__TypeCtorInfo_10_84, ll_backend__var_locn__LvalList_79, ll_backend__var_locn__Var_82);
    }
    {
      mercury__list__filter_3_p_0(ll_backend__var_locn__TypeCtorInfo_10_84, (MR_Word) &ll_backend__var_locn_scalar_common_2[13], ll_backend__var_locn__AllLvals_80, &ll_backend__var_locn__RootLvals_81);
    }
    {
      mercury__list__sort_and_remove_dups_2_p_0(ll_backend__var_locn__TypeCtorInfo_10_84, ll_backend__var_locn__RootLvals_81, &ll_backend__var_locn__NoDupRootLvals_11);
    }
    {
      ll_backend__var_locn__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_26, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_26, 1) = ((MR_Box) (ll_backend__var_locn__record_copy_4_p_0_3));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_26, 3) = ((MR_Box) (ll_backend__var_locn__LocVarMap0_9));
    }
    ll_backend__var_locn__TypeInfo_37_37 = (MR_Word) &ll_backend__var_locn_scalar_common_1[1];
    {
      mercury__list__filter_map_3_p_0(ll_backend__var_locn__TypeCtorInfo_32_32, ll_backend__var_locn__TypeInfo_37_37, ll_backend__var_locn__Var_26, ll_backend__var_locn__NoDupRootLvals_11, &ll_backend__var_locn__AffectedVarSets_12);
    }
    ll_backend__var_locn__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      ll_backend__var_locn__Var_28 = parse_tree__set_of_var__init_0_f_0(ll_backend__var_locn__TypeCtorInfo_42_42);
    }
    {
      mercury__list__foldl_4_p_0(ll_backend__var_locn__TypeInfo_37_37, ll_backend__var_locn__TypeInfo_37_37, (MR_Word) &ll_backend__var_locn_scalar_common_2[14], ll_backend__var_locn__AffectedVarSets_12, ((MR_Box) (ll_backend__var_locn__Var_28)), &ll_backend__var_locn__conv2_AffectedVarSet_13);
    }
    ll_backend__var_locn__AffectedVarSet_13 = ((MR_Word) ll_backend__var_locn__conv2_AffectedVarSet_13);
    {
      parse_tree__set_of_var__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_42_42, ll_backend__var_locn__AffectedVarSet_13, &ll_backend__var_locn__AffectedVars_14);
    }
    {
      ll_backend__var_locn__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_29, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_29, 1) = ((MR_Box) (ll_backend__var_locn__record_copy_4_p_0_5));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_29, 3) = ((MR_Box) (ll_backend__var_locn__Old_5));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_29, 4) = ((MR_Box) (ll_backend__var_locn__New_6));
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn_scalar_common_2[3], (MR_Word) &ll_backend__var_locn_scalar_common_2[0], ll_backend__var_locn__Var_29, ll_backend__var_locn__AffectedVars_14, ((MR_Box) (ll_backend__var_locn__VarStateMap0_8)), &ll_backend__var_locn__conv6_VarStateMap_15, ((MR_Box) (ll_backend__var_locn__LocVarMap0_9)), &ll_backend__var_locn__conv5_LocVarMap_16);
    }
    ll_backend__var_locn__VarStateMap_15 = ((MR_Word) ll_backend__var_locn__conv6_VarStateMap_15);
    ll_backend__var_locn__LocVarMap_16 = ((MR_Word) ll_backend__var_locn__conv5_LocVarMap_16);
    {
      ll_backend__var_locn__var_locn_set_loc_var_map_3_p_0(ll_backend__var_locn__LocVarMap_16, ll_backend__var_locn__STATE_VARIABLE_VLI_0_17, &ll_backend__var_locn__STATE_VARIABLE_VLI_30_30);
    }
    {
      ll_backend__var_locn__var_locn_set_var_state_map_3_p_0(ll_backend__var_locn__VarStateMap_15, ll_backend__var_locn__STATE_VARIABLE_VLI_30_30, ll_backend__var_locn__STATE_VARIABLE_VLI_18);
    }
  }
}

static void MR_CALL 
ll_backend__var_locn__ensure_copies_are_present_lval_5_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__OneSource_2,
  MR_Word ll_backend__var_locn__Lval_3,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_LvalSet_0_4,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_LvalSet_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__var_locn__succeeded;

        if ((ll_backend__var_locn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__var_locn__STATE_VARIABLE_LvalSet_5 = ll_backend__var_locn__STATE_VARIABLE_LvalSet_0_4;
        else
          {
            MR_Word ll_backend__var_locn__OtherSource_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__var_locn__OtherSources_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__var_locn__SubstLval_16;
            MR_Word ll_backend__var_locn__STATE_VARIABLE_LvalSet_19_19;

            {
              ll_backend__exprn_aux__substitute_lval_in_lval_4_p_0(ll_backend__var_locn__OneSource_2, ll_backend__var_locn__OtherSource_11, ll_backend__var_locn__Lval_3, &ll_backend__var_locn__SubstLval_16);
            }
            {
              mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__var_locn__SubstLval_16)), ll_backend__var_locn__STATE_VARIABLE_LvalSet_0_4, &ll_backend__var_locn__STATE_VARIABLE_LvalSet_19_19);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__var_locn__next_value_of_HeadVar__1_1 = ll_backend__var_locn__OtherSources_12;
              MR_Word ll_backend__var_locn__next_value_of_STATE_VARIABLE_LvalSet_0_4 = ll_backend__var_locn__STATE_VARIABLE_LvalSet_19_19;

              ll_backend__var_locn__STATE_VARIABLE_LvalSet_0_4 = ll_backend__var_locn__next_value_of_STATE_VARIABLE_LvalSet_0_4;
              ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__var_locn__ensure_copies_are_present_5_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv1_STATE_VARIABLE_LvalSet_5;

    {
      ll_backend__var_locn__ensure_copies_are_present_lval_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2), &ll_backend__var_locn__conv1_STATE_VARIABLE_LvalSet_5);
    }
    *ll_backend__var_locn__wrapper_arg_3 = ((MR_Box) (ll_backend__var_locn__conv1_STATE_VARIABLE_LvalSet_5));
  }
}

static void MR_CALL 
ll_backend__var_locn__ensure_copies_are_present_5_p_0(
  MR_Word ll_backend__var_locn__OneSource_6,
  MR_Word ll_backend__var_locn__OtherSources_7,
  MR_Word ll_backend__var_locn__Var_8,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_23,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_24)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__TypeInfo_28_28 = (MR_Word) &ll_backend__var_locn_scalar_common_1[0];
    MR_Word ll_backend__var_locn__TypeCtorInfo_29_29 = (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0;
    MR_Word ll_backend__var_locn__TypeCtorInfo_30_30;
    MR_Word ll_backend__var_locn__VarStateMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__State0_11;
    MR_Word ll_backend__var_locn__LvalSet0_12;
    MR_Word ll_backend__var_locn__MaybeConstRval_13;
    MR_Word ll_backend__var_locn__MaybeExprRval_14;
    MR_Word ll_backend__var_locn__Using_15;
    MR_Word ll_backend__var_locn__DeadOrAlive_16;
    MR_Word ll_backend__var_locn__Lvals0_17;
    MR_Word ll_backend__var_locn__LvalSet_18;
    MR_Word ll_backend__var_locn__State_19;
    MR_Word ll_backend__var_locn__VarStateMap_20;
    MR_Word ll_backend__var_locn__LocVarMap0_21;
    MR_Word ll_backend__var_locn__LocVarMap_22;
    MR_Word ll_backend__var_locn__Var_25;
    MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_26_26;
    MR_Word ll_backend__var_locn__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 12)));
    MR_Box ll_backend__var_locn__conv0_State0_11;
    MR_Box ll_backend__var_locn__conv2_LvalSet_18;
    MR_Word ll_backend__var_locn__Var_50;
    MR_Word ll_backend__var_locn__Var_51;
    MR_Word ll_backend__var_locn__Var_52;
    MR_Word ll_backend__var_locn__Var_53;
    MR_Word ll_backend__var_locn__Var_54;
    MR_Integer ll_backend__var_locn__Var_55;
    MR_Integer ll_backend__var_locn__Var_56;
    MR_Word ll_backend__var_locn__Var_59;
    MR_Integer ll_backend__var_locn__Var_60;
    MR_Integer ll_backend__var_locn__Var_61;
    MR_Word ll_backend__var_locn__Var_62;
    MR_Word ll_backend__var_locn__Var_57;
    MR_Word ll_backend__var_locn__Var_78;
    MR_Word ll_backend__var_locn__Var_79;
    MR_Word ll_backend__var_locn__Var_80;
    MR_Word ll_backend__var_locn__Var_81;
    MR_Word ll_backend__var_locn__Var_82;
    MR_Integer ll_backend__var_locn__Var_83;
    MR_Integer ll_backend__var_locn__Var_84;
    MR_Word ll_backend__var_locn__Var_85;
    MR_Word ll_backend__var_locn__Var_87;
    MR_Integer ll_backend__var_locn__Var_88;
    MR_Integer ll_backend__var_locn__Var_89;
    MR_Word ll_backend__var_locn__Var_90;
    MR_Word ll_backend__var_locn__Var_86;

    {
      mercury__map__lookup_3_p_0(ll_backend__var_locn__TypeInfo_28_28, ll_backend__var_locn__TypeCtorInfo_29_29, ll_backend__var_locn__VarStateMap0_10, ((MR_Box) (ll_backend__var_locn__Var_8)), &ll_backend__var_locn__conv0_State0_11);
    }
    ll_backend__var_locn__State0_11 = ((MR_Word) ll_backend__var_locn__conv0_State0_11);
    ll_backend__var_locn__LvalSet0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_11, (MR_Integer) 0)));
    ll_backend__var_locn__MaybeConstRval_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_11, (MR_Integer) 1)));
    ll_backend__var_locn__MaybeExprRval_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_11, (MR_Integer) 2)));
    ll_backend__var_locn__Using_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_11, (MR_Integer) 3)));
    ll_backend__var_locn__DeadOrAlive_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_11, (MR_Integer) 4)));
    ll_backend__var_locn__TypeCtorInfo_30_30 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    {
      mercury__set__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_30_30, ll_backend__var_locn__LvalSet0_12, &ll_backend__var_locn__Lvals0_17);
    }
    {
      ll_backend__var_locn__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_25, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_25, 1) = ((MR_Box) (ll_backend__var_locn__ensure_copies_are_present_5_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_25, 3) = ((MR_Box) (ll_backend__var_locn__OtherSources_7));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_25, 4) = ((MR_Box) (ll_backend__var_locn__OneSource_6));
    }
    {
      mercury__list__foldl_4_p_0(ll_backend__var_locn__TypeCtorInfo_30_30, (MR_Word) &ll_backend__var_locn_scalar_common_1[4], ll_backend__var_locn__Var_25, ll_backend__var_locn__Lvals0_17, ((MR_Box) (ll_backend__var_locn__LvalSet0_12)), &ll_backend__var_locn__conv2_LvalSet_18);
    }
    ll_backend__var_locn__LvalSet_18 = ((MR_Word) ll_backend__var_locn__conv2_LvalSet_18);
    {
      ll_backend__var_locn__State_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_19, 0) = ((MR_Box) (ll_backend__var_locn__LvalSet_18));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_19, 1) = ((MR_Box) (ll_backend__var_locn__MaybeConstRval_13));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_19, 2) = ((MR_Box) (ll_backend__var_locn__MaybeExprRval_14));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_19, 3) = ((MR_Box) (ll_backend__var_locn__Using_15));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_19, 4) = ((MR_Box) (ll_backend__var_locn__DeadOrAlive_16));
    }
    {
      mercury__map__det_update_4_p_0(ll_backend__var_locn__TypeInfo_28_28, ll_backend__var_locn__TypeCtorInfo_29_29, ((MR_Box) (ll_backend__var_locn__Var_8)), ((MR_Box) (ll_backend__var_locn__State_19)), ll_backend__var_locn__VarStateMap0_10, &ll_backend__var_locn__VarStateMap_20);
    }
    ll_backend__var_locn__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 0)));
    ll_backend__var_locn__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 1)));
    ll_backend__var_locn__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 2)));
    ll_backend__var_locn__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 3)));
    ll_backend__var_locn__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 4)));
    ll_backend__var_locn__Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 5)));
    ll_backend__var_locn__Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 6)));
    ll_backend__var_locn__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 7)));
    ll_backend__var_locn__LocVarMap0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 8)));
    ll_backend__var_locn__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 9)));
    ll_backend__var_locn__Var_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 10)));
    ll_backend__var_locn__Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 11)));
    ll_backend__var_locn__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 12)));
    {
      ll_backend__var_locn__STATE_VARIABLE_VLI_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, 0) = ((MR_Box) (ll_backend__var_locn__Var_50));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, 1) = ((MR_Box) (ll_backend__var_locn__Var_51));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, 2) = ((MR_Box) (ll_backend__var_locn__Var_52));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, 3) = ((MR_Box) (ll_backend__var_locn__Var_53));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, 4) = ((MR_Box) (ll_backend__var_locn__Var_54));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, 5) = ((MR_Box) (ll_backend__var_locn__Var_55));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, 6) = ((MR_Box) (ll_backend__var_locn__Var_56));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, 7) = ((MR_Box) (ll_backend__var_locn__VarStateMap_20));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, 8) = ((MR_Box) (ll_backend__var_locn__LocVarMap0_21));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, 9) = ((MR_Box) (ll_backend__var_locn__Var_59));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, 10) = ((MR_Box) (ll_backend__var_locn__Var_60));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, 11) = ((MR_Box) (ll_backend__var_locn__Var_61));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, 12) = ((MR_Box) (ll_backend__var_locn__Var_62));
    }
    {
      ll_backend__var_locn__record_change_in_root_dependencies_5_p_0(ll_backend__var_locn__LvalSet0_12, ll_backend__var_locn__LvalSet_18, ll_backend__var_locn__Var_8, ll_backend__var_locn__LocVarMap0_21, &ll_backend__var_locn__LocVarMap_22);
    }
    ll_backend__var_locn__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 0)));
    ll_backend__var_locn__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 1)));
    ll_backend__var_locn__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 2)));
    ll_backend__var_locn__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 3)));
    ll_backend__var_locn__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 4)));
    ll_backend__var_locn__Var_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 5)));
    ll_backend__var_locn__Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 6)));
    ll_backend__var_locn__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 7)));
    ll_backend__var_locn__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 8)));
    ll_backend__var_locn__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 9)));
    ll_backend__var_locn__Var_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 10)));
    ll_backend__var_locn__Var_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 11)));
    ll_backend__var_locn__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 12)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__var_locn__STATE_VARIABLE_VLI_24 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__var_locn__Var_78));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__var_locn__Var_79));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__var_locn__Var_80));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__var_locn__Var_81));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__var_locn__Var_82));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__var_locn__Var_83));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__var_locn__Var_84));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__var_locn__Var_85));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__var_locn__LocVarMap_22));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ll_backend__var_locn__Var_87));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ll_backend__var_locn__Var_88));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ll_backend__var_locn__Var_89));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ll_backend__var_locn__Var_90));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__find_one_occupying_var_5_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__Lval_8,
  MR_Word ll_backend__var_locn__VarStateMap_9,
  MR_Word * ll_backend__var_locn__OccupyingVar_10,
  MR_Word * ll_backend__var_locn__OtherSources_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word ll_backend__var_locn__TypeInfo_19_19;
        MR_Word ll_backend__var_locn__TypeCtorInfo_20_20;
        MR_Word ll_backend__var_locn__Var_6;
        MR_Word ll_backend__var_locn__Vars_7;
        MR_Word ll_backend__var_locn__State_12;
        MR_Word ll_backend__var_locn__LvalSet_13;
        MR_Box ll_backend__var_locn__conv0_State_12;
        MR_Word ll_backend__var_locn__Var_14;
        MR_Word ll_backend__var_locn__Var_15;
        MR_Word ll_backend__var_locn__Var_16;
        MR_Word ll_backend__var_locn__Var_17;
        MR_Word ll_backend__var_locn__TypeCtorInfo_21_21;

        if (ll_backend__var_locn__succeeded)
          {
            ll_backend__var_locn__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 0)));
            ll_backend__var_locn__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 1)));
            ll_backend__var_locn__TypeInfo_19_19 = (MR_Word) &ll_backend__var_locn_scalar_common_1[0];
            ll_backend__var_locn__TypeCtorInfo_20_20 = (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0;
            {
              mercury__map__lookup_3_p_0(ll_backend__var_locn__TypeInfo_19_19, ll_backend__var_locn__TypeCtorInfo_20_20, ll_backend__var_locn__VarStateMap_9, ((MR_Box) (ll_backend__var_locn__Var_6)), &ll_backend__var_locn__conv0_State_12);
            }
            ll_backend__var_locn__State_12 = ((MR_Word) ll_backend__var_locn__conv0_State_12);
            ll_backend__var_locn__LvalSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_12, (MR_Integer) 0)));
            ll_backend__var_locn__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_12, (MR_Integer) 1)));
            ll_backend__var_locn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_12, (MR_Integer) 2)));
            ll_backend__var_locn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_12, (MR_Integer) 3)));
            ll_backend__var_locn__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_12, (MR_Integer) 4)));
            ll_backend__var_locn__TypeCtorInfo_21_21 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
            {
              ll_backend__var_locn__succeeded = mercury__set__member_2_p_0(ll_backend__var_locn__TypeCtorInfo_21_21, ((MR_Box) (ll_backend__var_locn__Lval_8)), ll_backend__var_locn__LvalSet_13);
            }
            if (ll_backend__var_locn__succeeded)
              {
                MR_Word ll_backend__var_locn__TypeCtorInfo_22_22;
                MR_Word ll_backend__var_locn__OtherSourceSet_18;

                *ll_backend__var_locn__OccupyingVar_10 = ll_backend__var_locn__Var_6;
                ll_backend__var_locn__TypeCtorInfo_22_22 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
                {
                  mercury__set__delete_3_p_0(ll_backend__var_locn__TypeCtorInfo_22_22, ((MR_Box) (ll_backend__var_locn__Lval_8)), ll_backend__var_locn__LvalSet_13, &ll_backend__var_locn__OtherSourceSet_18);
                }
                {
                  mercury__set__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_22_22, ll_backend__var_locn__OtherSourceSet_18, ll_backend__var_locn__OtherSources_11);
                }
                ll_backend__var_locn__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__var_locn__next_value_of_HeadVar__1_1 = ll_backend__var_locn__Vars_7;

                  ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return ll_backend__var_locn__succeeded;
      }
      break;
    }
}

static void MR_CALL 
ll_backend__var_locn__free_up_lval_with_copy_7_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv1_STATE_VARIABLE_VLI_24;

    {
      ll_backend__var_locn__ensure_copies_are_present_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2), &ll_backend__var_locn__conv1_STATE_VARIABLE_VLI_24);
    }
    *ll_backend__var_locn__wrapper_arg_3 = ((MR_Box) (ll_backend__var_locn__conv1_STATE_VARIABLE_VLI_24));
  }
}

static void MR_CALL 
ll_backend__var_locn__free_up_lval_with_copy_7_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_8,
  MR_Word ll_backend__var_locn__Lval_9,
  MR_Word ll_backend__var_locn__ToBeAssignedVars_10,
  MR_Word ll_backend__var_locn__ForbiddenLvals_11,
  MR_Word * ll_backend__var_locn__Code_12,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_29,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_30)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__MovedVar_21;
    MR_Word ll_backend__var_locn__Pref_24;
    MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_32_32;
    MR_Word ll_backend__var_locn__TypeCtorInfo_43_43 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    MR_Word ll_backend__var_locn__TypeCtorInfo_45_45;
    MR_Word ll_backend__var_locn__LocVarMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__AffectedVarSet_15;
    MR_Word ll_backend__var_locn__EffAffectedVarSet_16;
    MR_Word ll_backend__var_locn__EffAffectedVars_17;
    MR_Word ll_backend__var_locn__VarStateMap0_18;
    MR_Word ll_backend__var_locn__RegType_23;
    MR_Word ll_backend__var_locn__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 12)));
    MR_Box ll_backend__var_locn__conv0_AffectedVarSet_15;
    MR_Word ll_backend__var_locn__Var_68;
    MR_Word ll_backend__var_locn__Var_69;
    MR_Word ll_backend__var_locn__Var_70;
    MR_Word ll_backend__var_locn__Var_71;
    MR_Word ll_backend__var_locn__Var_72;
    MR_Integer ll_backend__var_locn__Var_73;
    MR_Integer ll_backend__var_locn__Var_74;
    MR_Word ll_backend__var_locn__Var_75;
    MR_Word ll_backend__var_locn__Var_76;
    MR_Integer ll_backend__var_locn__Var_77;
    MR_Integer ll_backend__var_locn__Var_78;
    MR_Word ll_backend__var_locn__Var_79;
    MR_Word ll_backend__var_locn__OccupyingVar_19;
    MR_Word ll_backend__var_locn__OtherSources_20;

    {
      ll_backend__var_locn__succeeded = mercury__map__search_3_p_0(ll_backend__var_locn__TypeCtorInfo_43_43, (MR_Word) &ll_backend__var_locn_scalar_common_1[1], ll_backend__var_locn__LocVarMap0_14, ((MR_Box) (ll_backend__var_locn__Lval_9)), &ll_backend__var_locn__conv0_AffectedVarSet_15);
    }
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__AffectedVarSet_15 = ((MR_Word) ll_backend__var_locn__conv0_AffectedVarSet_15);
        ll_backend__var_locn__succeeded = MR_TRUE;
      }
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        {
          parse_tree__set_of_var__delete_list_3_p_0(ll_backend__var_locn__TypeCtorInfo_45_45, ll_backend__var_locn__ToBeAssignedVars_10, ll_backend__var_locn__AffectedVarSet_15, &ll_backend__var_locn__EffAffectedVarSet_16);
        }
        {
          parse_tree__set_of_var__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_45_45, ll_backend__var_locn__EffAffectedVarSet_16, &ll_backend__var_locn__EffAffectedVars_17);
        }
        ll_backend__var_locn__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 0)));
        ll_backend__var_locn__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 1)));
        ll_backend__var_locn__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 2)));
        ll_backend__var_locn__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 3)));
        ll_backend__var_locn__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 4)));
        ll_backend__var_locn__Var_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 5)));
        ll_backend__var_locn__Var_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 6)));
        ll_backend__var_locn__VarStateMap0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 7)));
        ll_backend__var_locn__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 8)));
        ll_backend__var_locn__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 9)));
        ll_backend__var_locn__Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 10)));
        ll_backend__var_locn__Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 11)));
        ll_backend__var_locn__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 12)));
        {
          ll_backend__var_locn__succeeded = ll_backend__var_locn__find_one_occupying_var_5_p_0(ll_backend__var_locn__EffAffectedVars_17, ll_backend__var_locn__Lval_9, ll_backend__var_locn__VarStateMap0_18, &ll_backend__var_locn__OccupyingVar_19, &ll_backend__var_locn__OtherSources_20);
        }
        if (ll_backend__var_locn__succeeded)
          {
            MR_Word ll_backend__var_locn__TypeInfo_46_46;
            MR_Word ll_backend__var_locn__OtherVars_22;
            MR_Word ll_backend__var_locn__Var_31;
            MR_Box ll_backend__var_locn__conv2_STATE_VARIABLE_VLI_32_32;

            ll_backend__var_locn__MovedVar_21 = ll_backend__var_locn__OccupyingVar_19;
            ll_backend__var_locn__TypeInfo_46_46 = (MR_Word) &ll_backend__var_locn_scalar_common_1[0];
            {
              mercury__list__delete_all_3_p_1(ll_backend__var_locn__TypeInfo_46_46, ll_backend__var_locn__EffAffectedVars_17, ((MR_Box) (ll_backend__var_locn__MovedVar_21)), &ll_backend__var_locn__OtherVars_22);
            }
            {
              ll_backend__var_locn__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_31, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_10[0]));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_31, 1) = ((MR_Box) (ll_backend__var_locn__free_up_lval_with_copy_7_p_0_1));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_31, 3) = ((MR_Box) (ll_backend__var_locn__Lval_9));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_31, 4) = ((MR_Box) (ll_backend__var_locn__OtherSources_20));
            }
            {
              mercury__list__foldl_4_p_0(ll_backend__var_locn__TypeInfo_46_46, (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0, ll_backend__var_locn__Var_31, ll_backend__var_locn__OtherVars_22, ((MR_Box) (ll_backend__var_locn__STATE_VARIABLE_VLI_0_29)), &ll_backend__var_locn__conv2_STATE_VARIABLE_VLI_32_32);
            }
            ll_backend__var_locn__STATE_VARIABLE_VLI_32_32 = ((MR_Word) ll_backend__var_locn__conv2_STATE_VARIABLE_VLI_32_32);
            ll_backend__var_locn__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word ll_backend__var_locn__Var_33;

            ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__EffAffectedVars_17)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__var_locn__succeeded)
              {
                ll_backend__var_locn__MovedVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__EffAffectedVars_17, (MR_Integer) 0)));
                ll_backend__var_locn__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__EffAffectedVars_17, (MR_Integer) 1)));
                ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (ll_backend__var_locn__succeeded)
                  {
                    ll_backend__var_locn__STATE_VARIABLE_VLI_32_32 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_29;
                    ll_backend__var_locn__succeeded = MR_TRUE;
                  }
              }
          }
        if (ll_backend__var_locn__succeeded)
          {
            {
              ll_backend__var_locn__reg_type_for_var_3_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_32_32, ll_backend__var_locn__MovedVar_21, &ll_backend__var_locn__RegType_23);
            }
            {
              ll_backend__var_locn__select_preferred_reg_or_stack_4_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_32_32, ll_backend__var_locn__MovedVar_21, ll_backend__var_locn__RegType_23, &ll_backend__var_locn__Pref_24);
            }
            {
              ll_backend__var_locn__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__var_locn__Pref_24, ll_backend__var_locn__Lval_9);
            }
            ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
            if (ll_backend__var_locn__succeeded)
              {
                {
                  ll_backend__var_locn__succeeded = mercury__list__member_2_p_0(ll_backend__var_locn__TypeCtorInfo_43_43, ((MR_Box) (ll_backend__var_locn__Pref_24)), ll_backend__var_locn__ForbiddenLvals_11);
                }
                ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
                if (ll_backend__var_locn__succeeded)
                  {
                    {
                      ll_backend__var_locn__succeeded = ll_backend__var_locn__var_locn_lval_in_use_2_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_32_32, ll_backend__var_locn__Pref_24);
                    }
                    if (ll_backend__var_locn__succeeded)
                      {
                        MR_Word ll_backend__var_locn__PrefRegType_25;
                        MR_Integer ll_backend__var_locn__RegNum_26;

                        ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__Pref_24)) == (MR_mktag((MR_Integer) 1)));
                        if (ll_backend__var_locn__succeeded)
                          {
                            ll_backend__var_locn__PrefRegType_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Pref_24, (MR_Integer) 0)));
                            ll_backend__var_locn__RegNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Pref_24, (MR_Integer) 1)));
                            {
                              ll_backend__var_locn__succeeded = ll_backend__var_locn__reg_is_not_locked_for_var_4_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_32_32, ll_backend__var_locn__PrefRegType_25, ll_backend__var_locn__RegNum_26, ll_backend__var_locn__MovedVar_21);
                            }
                          }
                      }
                    else
                      ll_backend__var_locn__succeeded = MR_TRUE;
                  }
              }
          }
      }
    if (ll_backend__var_locn__succeeded)
      {
        MR_Word ll_backend__var_locn__Var_34;

        {
          ll_backend__var_locn__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_34, 0) = ((MR_Box) (ll_backend__var_locn__Lval_9));
          MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_34, 1) = ((MR_Box) (ll_backend__var_locn__ForbiddenLvals_11));
        }
        {
          ll_backend__var_locn__actually_place_var_7_p_0(ll_backend__var_locn__ModuleInfo_8, ll_backend__var_locn__MovedVar_21, ll_backend__var_locn__Pref_24, ll_backend__var_locn__Var_34, ll_backend__var_locn__Code_12, ll_backend__var_locn__STATE_VARIABLE_VLI_32_32, ll_backend__var_locn__STATE_VARIABLE_VLI_30);
        }
      }
    else
      {
        MR_Word ll_backend__var_locn__Target_27;
        MR_Word ll_backend__var_locn__Var_85;
        MR_Integer ll_backend__var_locn__Var_82;
        MR_Integer ll_backend__var_locn__N_28;
        MR_Integer ll_backend__var_locn__Var_37;

        ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__Lval_9)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__var_locn__succeeded)
          {
            ll_backend__var_locn__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Lval_9, (MR_Integer) 0)));
            ll_backend__var_locn__Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Lval_9, (MR_Integer) 1)));
            ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_85 == (MR_Integer) 1);
          }
        if (ll_backend__var_locn__succeeded)
          {
            MR_Integer ll_backend__var_locn__NextNonReserved_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 6)));
            MR_Word ll_backend__var_locn__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 12)));
            MR_Integer ll_backend__var_locn__Var_118 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 11)));
            MR_Integer ll_backend__var_locn__Var_119 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 10)));
            MR_Word ll_backend__var_locn__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 9)));
            MR_Word ll_backend__var_locn__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 8)));
            MR_Word ll_backend__var_locn__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 7)));
            MR_Integer ll_backend__var_locn__Var_124 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 5)));
            MR_Word ll_backend__var_locn__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 4)));
            MR_Word ll_backend__var_locn__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 3)));
            MR_Word ll_backend__var_locn__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 2)));
            MR_Word ll_backend__var_locn__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 1)));
            MR_Word ll_backend__var_locn__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 0)));

            {
              ll_backend__var_locn__get_spare_reg_2_5_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__NextNonReserved_89, &ll_backend__var_locn__Target_27);
            }
          }
        else
          {
            MR_Word ll_backend__var_locn__RegType_130;
            MR_Word ll_backend__var_locn__Var_83;
            MR_Integer ll_backend__var_locn__Var_84;

            ll_backend__var_locn__succeeded = ((((MR_tag((MR_Word) ll_backend__var_locn__Lval_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (ll_backend__var_locn__succeeded)
              {
                ll_backend__var_locn__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval_9, (MR_Integer) 1)));
                ll_backend__var_locn__Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval_9, (MR_Integer) 2)));
                ll_backend__var_locn__RegType_130 = (MR_Integer) 1;
              }
            else
              ll_backend__var_locn__RegType_130 = (MR_Integer) 0;
            {
              ll_backend__var_locn__get_spare_reg_3_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, ll_backend__var_locn__RegType_130, &ll_backend__var_locn__Target_27);
            }
          }
        {
          ll_backend__var_locn__record_copy_4_p_0(ll_backend__var_locn__Lval_9, ll_backend__var_locn__Target_27, ll_backend__var_locn__STATE_VARIABLE_VLI_0_29, ll_backend__var_locn__STATE_VARIABLE_VLI_30);
        }
        if (((((MR_tag((MR_Word) ll_backend__var_locn__Lval_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval_9, (MR_Integer) 0)))) == (MR_Integer) 2))))
          {
            ll_backend__var_locn__N_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval_9, (MR_Integer) 1)));
            ll_backend__var_locn__succeeded = MR_TRUE;
          }
        else
        if (((((MR_tag((MR_Word) ll_backend__var_locn__Lval_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval_9, (MR_Integer) 0)))) == (MR_Integer) 0))))
          {
            ll_backend__var_locn__N_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval_9, (MR_Integer) 1)));
            ll_backend__var_locn__succeeded = MR_TRUE;
          }
        else
          ll_backend__var_locn__succeeded = MR_FALSE;
        if (ll_backend__var_locn__succeeded)
          {
            ll_backend__var_locn__Var_37 = (MR_Integer) 0;
            ll_backend__var_locn__succeeded = (ll_backend__var_locn__N_28 < ll_backend__var_locn__Var_37);
          }
        if (ll_backend__var_locn__succeeded)
          {
            {
              *ll_backend__var_locn__Code_12 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
          }
        else
          {
            MR_Word ll_backend__var_locn__Var_38;
            MR_Word ll_backend__var_locn__Var_39;
            MR_Word ll_backend__var_locn__Var_40;

            {
              ll_backend__var_locn__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_40, 0) = ((MR_Box) (ll_backend__var_locn__Lval_9));
            }
            {
              ll_backend__var_locn__Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_39, 1) = ((MR_Box) (ll_backend__var_locn__Target_27));
              MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_39, 2) = ((MR_Box) (ll_backend__var_locn__Var_40));
            }
            {
              ll_backend__var_locn__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_38, 0) = ((MR_Box) (ll_backend__var_locn__Var_39));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_38, 1) = ((MR_Box) ((MR_String) "Freeing up the source lval"));
            }
            {
              *ll_backend__var_locn__Code_12 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__var_locn__Var_38)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__free_up_lval_7_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv1_STATE_VARIABLE_VarStateMap_22;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2), &ll_backend__var_locn__conv1_STATE_VARIABLE_VarStateMap_22);
    }
    if (ll_backend__var_locn__succeeded)
      {
        *ll_backend__var_locn__wrapper_arg_3 = ((MR_Box) (ll_backend__var_locn__conv1_STATE_VARIABLE_VarStateMap_22));
        ll_backend__var_locn__succeeded = MR_TRUE;
      }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn__free_up_lval_7_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_8,
  MR_Word ll_backend__var_locn__Lval_9,
  MR_Word ll_backend__var_locn__ToBeAssignedVars_10,
  MR_Word ll_backend__var_locn__ForbiddenLvals_11,
  MR_Word * ll_backend__var_locn__Code_12,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_19,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_20)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__TypeCtorInfo_26_26;
    MR_Word ll_backend__var_locn__LocVarMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__AffectedVarSet_15;
    MR_Word ll_backend__var_locn__AffectedVars_16;
    MR_Word ll_backend__var_locn__VarStateMap0_17;
    MR_Word ll_backend__var_locn__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 12)));
    MR_Box ll_backend__var_locn__conv0_AffectedVarSet_15;
    MR_Word ll_backend__var_locn__Var_47;
    MR_Word ll_backend__var_locn__Var_48;
    MR_Word ll_backend__var_locn__Var_49;
    MR_Word ll_backend__var_locn__Var_50;
    MR_Word ll_backend__var_locn__Var_51;
    MR_Integer ll_backend__var_locn__Var_52;
    MR_Integer ll_backend__var_locn__Var_53;
    MR_Word ll_backend__var_locn__Var_54;
    MR_Word ll_backend__var_locn__Var_55;
    MR_Integer ll_backend__var_locn__Var_56;
    MR_Integer ll_backend__var_locn__Var_57;
    MR_Word ll_backend__var_locn__Var_58;
    MR_Word ll_backend__var_locn__TypeInfo_30_30;
    MR_Word ll_backend__var_locn__TypeInfo_31_31;
    MR_Word ll_backend__var_locn__Var_21;
    MR_Word ll_backend__var_locn__Var_22;
    MR_Word ll_backend__var_locn__Var_18;
    MR_Box ll_backend__var_locn__conv2_Var_18;

    {
      ll_backend__var_locn__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__var_locn_scalar_common_1[1], ll_backend__var_locn__LocVarMap0_14, ((MR_Box) (ll_backend__var_locn__Lval_9)), &ll_backend__var_locn__conv0_AffectedVarSet_15);
    }
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__AffectedVarSet_15 = ((MR_Word) ll_backend__var_locn__conv0_AffectedVarSet_15);
        ll_backend__var_locn__succeeded = MR_TRUE;
      }
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        {
          parse_tree__set_of_var__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_26_26, ll_backend__var_locn__AffectedVarSet_15, &ll_backend__var_locn__AffectedVars_16);
        }
        ll_backend__var_locn__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 0)));
        ll_backend__var_locn__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 1)));
        ll_backend__var_locn__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 2)));
        ll_backend__var_locn__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 3)));
        ll_backend__var_locn__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 4)));
        ll_backend__var_locn__Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 5)));
        ll_backend__var_locn__Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 6)));
        ll_backend__var_locn__VarStateMap0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 7)));
        ll_backend__var_locn__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 8)));
        ll_backend__var_locn__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 9)));
        ll_backend__var_locn__Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 10)));
        ll_backend__var_locn__Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 11)));
        ll_backend__var_locn__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 12)));
        ll_backend__var_locn__Var_22 = (MR_Integer) 0;
        ll_backend__var_locn__TypeInfo_30_30 = (MR_Word) &ll_backend__var_locn_scalar_common_1[0];
        ll_backend__var_locn__TypeInfo_31_31 = (MR_Word) &ll_backend__var_locn_scalar_common_2[3];
        {
          ll_backend__var_locn__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_21, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_21, 1) = ((MR_Box) (ll_backend__var_locn__free_up_lval_7_p_0_1));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_21, 3) = ((MR_Box) (ll_backend__var_locn__Lval_9));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_21, 4) = ((MR_Box) (ll_backend__var_locn__ToBeAssignedVars_10));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_21, 5) = ((MR_Box) (ll_backend__var_locn__Var_22));
        }
        {
          ll_backend__var_locn__succeeded = mercury__list__foldl_4_p_3(ll_backend__var_locn__TypeInfo_30_30, ll_backend__var_locn__TypeInfo_31_31, ll_backend__var_locn__Var_21, ll_backend__var_locn__AffectedVars_16, ((MR_Box) (ll_backend__var_locn__VarStateMap0_17)), &ll_backend__var_locn__conv2_Var_18);
        }
        if (ll_backend__var_locn__succeeded)
          {
            ll_backend__var_locn__Var_18 = ((MR_Word) ll_backend__var_locn__conv2_Var_18);
            ll_backend__var_locn__succeeded = MR_TRUE;
          }
        ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
      }
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__free_up_lval_with_copy_7_p_0(ll_backend__var_locn__ModuleInfo_8, ll_backend__var_locn__Lval_9, ll_backend__var_locn__ToBeAssignedVars_10, ll_backend__var_locn__ForbiddenLvals_11, ll_backend__var_locn__Code_12, ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, ll_backend__var_locn__STATE_VARIABLE_VLI_20);
      }
    else
      {
        {
          *ll_backend__var_locn__Code_12 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
        *ll_backend__var_locn__STATE_VARIABLE_VLI_20 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_19;
      }
  }
}

static void MR_CALL 
ll_backend__var_locn__record_clobbering_4_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv1_STATE_VARIABLE_VarStateMap_13;

    {
      ll_backend__var_locn__clobber_lval_in_var_state_map_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2), &ll_backend__var_locn__conv1_STATE_VARIABLE_VarStateMap_13);
    }
    *ll_backend__var_locn__wrapper_arg_3 = ((MR_Box) (ll_backend__var_locn__conv1_STATE_VARIABLE_VarStateMap_13));
  }
}

static void MR_CALL 
ll_backend__var_locn__record_clobbering_4_p_0(
  MR_Word ll_backend__var_locn__Target_5,
  MR_Word ll_backend__var_locn__Assigns_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_14,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_15)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__LocVarMap1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 12)));
    MR_Word ll_backend__var_locn__DependentVarsSet_9;
    MR_Box ll_backend__var_locn__conv0_DependentVarsSet_9;

    {
      ll_backend__var_locn__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__var_locn_scalar_common_1[1], ll_backend__var_locn__LocVarMap1_8, ((MR_Box) (ll_backend__var_locn__Target_5)), &ll_backend__var_locn__conv0_DependentVarsSet_9);
    }
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__DependentVarsSet_9 = ((MR_Word) ll_backend__var_locn__conv0_DependentVarsSet_9);
        ll_backend__var_locn__succeeded = MR_TRUE;
      }
    if (ll_backend__var_locn__succeeded)
      {
        MR_Word ll_backend__var_locn__DependentVars_10;
        MR_Word ll_backend__var_locn__LocVarMap_11;
        MR_Word ll_backend__var_locn__VarStateMap2_12;
        MR_Word ll_backend__var_locn__VarStateMap_13;
        MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_16_16;
        MR_Word ll_backend__var_locn__Var_17;
        MR_Word ll_backend__var_locn__Var_45;
        MR_Word ll_backend__var_locn__Var_46;
        MR_Word ll_backend__var_locn__Var_47;
        MR_Word ll_backend__var_locn__Var_48;
        MR_Word ll_backend__var_locn__Var_49;
        MR_Integer ll_backend__var_locn__Var_50;
        MR_Integer ll_backend__var_locn__Var_51;
        MR_Word ll_backend__var_locn__Var_54;
        MR_Integer ll_backend__var_locn__Var_55;
        MR_Integer ll_backend__var_locn__Var_56;
        MR_Word ll_backend__var_locn__Var_57;
        MR_Word ll_backend__var_locn__Var_53;
        MR_Box ll_backend__var_locn__conv2_VarStateMap_13;
        MR_Word ll_backend__var_locn__Var_73;
        MR_Word ll_backend__var_locn__Var_74;
        MR_Word ll_backend__var_locn__Var_75;
        MR_Word ll_backend__var_locn__Var_76;
        MR_Word ll_backend__var_locn__Var_77;
        MR_Integer ll_backend__var_locn__Var_78;
        MR_Integer ll_backend__var_locn__Var_79;
        MR_Word ll_backend__var_locn__Var_81;
        MR_Word ll_backend__var_locn__Var_82;
        MR_Integer ll_backend__var_locn__Var_83;
        MR_Integer ll_backend__var_locn__Var_84;
        MR_Word ll_backend__var_locn__Var_85;
        MR_Word ll_backend__var_locn__Var_80;

        {
          parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__var_locn__DependentVarsSet_9, &ll_backend__var_locn__DependentVars_10);
        }
        {
          mercury__map__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__var_locn_scalar_common_1[1], ((MR_Box) (ll_backend__var_locn__Target_5)), ll_backend__var_locn__LocVarMap1_8, &ll_backend__var_locn__LocVarMap_11);
        }
        ll_backend__var_locn__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 0)));
        ll_backend__var_locn__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 1)));
        ll_backend__var_locn__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 2)));
        ll_backend__var_locn__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 3)));
        ll_backend__var_locn__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 4)));
        ll_backend__var_locn__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 5)));
        ll_backend__var_locn__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 6)));
        ll_backend__var_locn__VarStateMap2_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 7)));
        ll_backend__var_locn__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 8)));
        ll_backend__var_locn__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 9)));
        ll_backend__var_locn__Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 10)));
        ll_backend__var_locn__Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 11)));
        ll_backend__var_locn__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 12)));
        {
          ll_backend__var_locn__STATE_VARIABLE_VLI_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 0) = ((MR_Box) (ll_backend__var_locn__Var_45));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 1) = ((MR_Box) (ll_backend__var_locn__Var_46));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 2) = ((MR_Box) (ll_backend__var_locn__Var_47));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 3) = ((MR_Box) (ll_backend__var_locn__Var_48));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 4) = ((MR_Box) (ll_backend__var_locn__Var_49));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 5) = ((MR_Box) (ll_backend__var_locn__Var_50));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 6) = ((MR_Box) (ll_backend__var_locn__Var_51));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 7) = ((MR_Box) (ll_backend__var_locn__VarStateMap2_12));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 8) = ((MR_Box) (ll_backend__var_locn__LocVarMap_11));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 9) = ((MR_Box) (ll_backend__var_locn__Var_54));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 10) = ((MR_Box) (ll_backend__var_locn__Var_55));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 11) = ((MR_Box) (ll_backend__var_locn__Var_56));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 12) = ((MR_Box) (ll_backend__var_locn__Var_57));
        }
        {
          ll_backend__var_locn__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_17, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_17, 1) = ((MR_Box) (ll_backend__var_locn__record_clobbering_4_p_0_1));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_17, 3) = ((MR_Box) (ll_backend__var_locn__Target_5));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_17, 4) = ((MR_Box) (ll_backend__var_locn__Assigns_6));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_17, 5) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn_scalar_common_2[3], ll_backend__var_locn__Var_17, ll_backend__var_locn__DependentVars_10, ((MR_Box) (ll_backend__var_locn__VarStateMap2_12)), &ll_backend__var_locn__conv2_VarStateMap_13);
        }
        ll_backend__var_locn__VarStateMap_13 = ((MR_Word) ll_backend__var_locn__conv2_VarStateMap_13);
        ll_backend__var_locn__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, (MR_Integer) 0)));
        ll_backend__var_locn__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, (MR_Integer) 1)));
        ll_backend__var_locn__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, (MR_Integer) 2)));
        ll_backend__var_locn__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, (MR_Integer) 3)));
        ll_backend__var_locn__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, (MR_Integer) 4)));
        ll_backend__var_locn__Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, (MR_Integer) 5)));
        ll_backend__var_locn__Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, (MR_Integer) 6)));
        ll_backend__var_locn__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, (MR_Integer) 7)));
        ll_backend__var_locn__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, (MR_Integer) 8)));
        ll_backend__var_locn__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, (MR_Integer) 9)));
        ll_backend__var_locn__Var_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, (MR_Integer) 10)));
        ll_backend__var_locn__Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, (MR_Integer) 11)));
        ll_backend__var_locn__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, (MR_Integer) 12)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
          *ll_backend__var_locn__STATE_VARIABLE_VLI_15 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__var_locn__Var_73));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__var_locn__Var_74));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__var_locn__Var_75));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__var_locn__Var_76));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__var_locn__Var_77));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__var_locn__Var_78));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__var_locn__Var_79));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__var_locn__VarStateMap_13));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__var_locn__Var_81));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ll_backend__var_locn__Var_82));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ll_backend__var_locn__Var_83));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ll_backend__var_locn__Var_84));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ll_backend__var_locn__Var_85));
        }
      }
    else
      *ll_backend__var_locn__STATE_VARIABLE_VLI_15 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_14;
  }
}

static void MR_CALL 
ll_backend__var_locn__actually_place_var_7_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_8,
  MR_Word ll_backend__var_locn__Var_9,
  MR_Word ll_backend__var_locn__Target_10,
  MR_Word ll_backend__var_locn__ForbiddenLvals_11,
  MR_Word * ll_backend__var_locn__Code_12,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_36,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_37)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Acquired_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_36, (MR_Integer) 9)));
    MR_Word ll_backend__var_locn__VarStateMap0_15;
    MR_Word ll_backend__var_locn__State0_16;
    MR_Word ll_backend__var_locn__Lvals0_17;
    MR_Word ll_backend__var_locn__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_36, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_36, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_36, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_36, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_36, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_36, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_36, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_36, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_36, (MR_Integer) 8)));
    MR_Integer ll_backend__var_locn__Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_36, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_36, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_36, (MR_Integer) 12)));
    MR_Box ll_backend__var_locn__conv0_State0_16;
    MR_Word ll_backend__var_locn__Var_18;
    MR_Word ll_backend__var_locn__Var_19;
    MR_Word ll_backend__var_locn__Var_20;
    MR_Word ll_backend__var_locn__Var_21;

    {
      ll_backend__var_locn__succeeded = mercury__set__member_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__var_locn__Target_10)), ll_backend__var_locn__Acquired_14);
    }
    if (ll_backend__var_locn__succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.actually_place_var\'/7", (MR_String) "target is acquired reg");
          return;
        }
      }
    else
      {
      }
    {
      ll_backend__var_locn__var_locn_get_var_state_map_2_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_0_36, &ll_backend__var_locn__VarStateMap0_15);
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, ll_backend__var_locn__VarStateMap0_15, ((MR_Box) (ll_backend__var_locn__Var_9)), &ll_backend__var_locn__conv0_State0_16);
    }
    ll_backend__var_locn__State0_16 = ((MR_Word) ll_backend__var_locn__conv0_State0_16);
    ll_backend__var_locn__Lvals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_16, (MR_Integer) 0)));
    ll_backend__var_locn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_16, (MR_Integer) 1)));
    ll_backend__var_locn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_16, (MR_Integer) 2)));
    ll_backend__var_locn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_16, (MR_Integer) 3)));
    ll_backend__var_locn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_16, (MR_Integer) 4)));
    {
      ll_backend__var_locn__succeeded = mercury__set__member_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__var_locn__Target_10)), ll_backend__var_locn__Lvals0_17);
    }
    if (ll_backend__var_locn__succeeded)
      {
        {
          *ll_backend__var_locn__Code_12 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
        *ll_backend__var_locn__STATE_VARIABLE_VLI_37 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_36;
      }
    else
      {
        MR_Word ll_backend__var_locn__TypeCtorInfo_82_82;
        MR_Word ll_backend__var_locn__FreeCode_22;
        MR_Word ll_backend__var_locn__Avail_23;
        MR_Word ll_backend__var_locn__Rval_24;
        MR_Word ll_backend__var_locn__EvalCode_25;
        MR_Word ll_backend__var_locn__AssignCode_27;
        MR_Word ll_backend__var_locn__Var_41;
        MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_42_42;
        MR_Word ll_backend__var_locn__Var_44;
        MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_53_53;
        MR_Word ll_backend__var_locn__Var_71;
        MR_Word ll_backend__var_locn__Var_83;

        {
          ll_backend__var_locn__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_41, 0) = ((MR_Box) (ll_backend__var_locn__Var_9));
          MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__var_locn__free_up_lval_7_p_0(ll_backend__var_locn__ModuleInfo_8, ll_backend__var_locn__Target_10, ll_backend__var_locn__Var_41, ll_backend__var_locn__ForbiddenLvals_11, &ll_backend__var_locn__FreeCode_22, ll_backend__var_locn__STATE_VARIABLE_VLI_0_36, &ll_backend__var_locn__STATE_VARIABLE_VLI_42_42);
        }
        {
          ll_backend__var_locn__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_44, 0) = ((MR_Box) (ll_backend__var_locn__Target_10));
        }
        {
          ll_backend__var_locn__find_var_availability_4_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_42_42, ll_backend__var_locn__Var_9, ll_backend__var_locn__Var_44, &ll_backend__var_locn__Avail_23);
        }
        if ((ll_backend__var_locn__Avail_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word ll_backend__var_locn__Var_47;
            MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_48_48;

            {
              ll_backend__var_locn__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_47, 0) = ((MR_Box) (ll_backend__var_locn__Target_10));
              MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              ll_backend__var_locn__materialize_var_9_p_0(ll_backend__var_locn__ModuleInfo_8, ll_backend__var_locn__Var_9, ll_backend__var_locn__Var_44, (MR_Integer) 0, ll_backend__var_locn__Var_47, &ll_backend__var_locn__Rval_24, &ll_backend__var_locn__EvalCode_25, ll_backend__var_locn__STATE_VARIABLE_VLI_42_42, &ll_backend__var_locn__STATE_VARIABLE_VLI_48_48);
            }
            {
              ll_backend__var_locn__record_clobbering_4_p_0(ll_backend__var_locn__Target_10, ll_backend__var_locn__Var_41, ll_backend__var_locn__STATE_VARIABLE_VLI_48_48, &ll_backend__var_locn__STATE_VARIABLE_VLI_53_53);
            }
          }
        else
          {
            MR_Word ll_backend__var_locn__SourceLval_26;

            ll_backend__var_locn__Rval_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Avail_23, (MR_Integer) 0)));
            {
              ll_backend__var_locn__EvalCode_25 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
            ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__Rval_24)) == (MR_mktag((MR_Integer) 0)));
            if (ll_backend__var_locn__succeeded)
              {
                ll_backend__var_locn__SourceLval_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__Rval_24, (MR_Integer) 0)));
                {
                  ll_backend__var_locn__record_copy_4_p_0(ll_backend__var_locn__SourceLval_26, ll_backend__var_locn__Target_10, ll_backend__var_locn__STATE_VARIABLE_VLI_42_42, &ll_backend__var_locn__STATE_VARIABLE_VLI_53_53);
                }
              }
            else
              {
                ll_backend__var_locn__record_clobbering_4_p_0(ll_backend__var_locn__Target_10, ll_backend__var_locn__Var_41, ll_backend__var_locn__STATE_VARIABLE_VLI_42_42, &ll_backend__var_locn__STATE_VARIABLE_VLI_53_53);
              }
          }
        {
          ll_backend__var_locn__add_additional_lval_for_var_4_p_0(ll_backend__var_locn__Var_9, ll_backend__var_locn__Target_10, ll_backend__var_locn__STATE_VARIABLE_VLI_53_53, ll_backend__var_locn__STATE_VARIABLE_VLI_37);
        }
        ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__Rval_24)) == (MR_mktag((MR_Integer) 0)));
        if (ll_backend__var_locn__succeeded)
          {
            ll_backend__var_locn__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__Rval_24, (MR_Integer) 0)));
            {
              ll_backend__var_locn__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__var_locn__Target_10, ll_backend__var_locn__Var_83);
            }
          }
        if (ll_backend__var_locn__succeeded)
          {
            {
              ll_backend__var_locn__AssignCode_27 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
          }
        else
          {
            MR_String ll_backend__var_locn__VarName_28;
            MR_String ll_backend__var_locn__Msg_29;
            MR_Word ll_backend__var_locn__VarTypes_33;
            MR_Word ll_backend__var_locn__Type_34;
            MR_Word ll_backend__var_locn__IsDummy_35;

            {
              ll_backend__var_locn__get_var_name_3_p_0(*ll_backend__var_locn__STATE_VARIABLE_VLI_37, ll_backend__var_locn__Var_9, &ll_backend__var_locn__VarName_28);
            }
            if ((ll_backend__var_locn__ForbiddenLvals_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__string__append_3_p_2((MR_String) "Placing ", ll_backend__var_locn__VarName_28, &ll_backend__var_locn__Msg_29);
                }
              }
            else
              {
                MR_String ll_backend__var_locn__LengthStr_32;
                MR_Integer ll_backend__var_locn__Var_58;
                MR_Word ll_backend__var_locn__Var_59;
                MR_Word ll_backend__var_locn__Var_61;
                MR_Word ll_backend__var_locn__Var_62;
                MR_Word ll_backend__var_locn__Var_64;

                {
                  ll_backend__var_locn__Var_58 = mercury__list__length_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__var_locn__ForbiddenLvals_11);
                }
                {
                  mercury__string__int_to_string_2_p_0(ll_backend__var_locn__Var_58, &ll_backend__var_locn__LengthStr_32);
                }
                {
                  ll_backend__var_locn__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_64, 0) = ((MR_Box) (ll_backend__var_locn__LengthStr_32));
                  MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__var_locn_scalar_common_1[12])));
                }
                {
                  ll_backend__var_locn__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_62, 0) = ((MR_Box) ((MR_String) " (depth "));
                  MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_62, 1) = ((MR_Box) (ll_backend__var_locn__Var_64));
                }
                {
                  ll_backend__var_locn__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_61, 0) = ((MR_Box) (ll_backend__var_locn__VarName_28));
                  MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_61, 1) = ((MR_Box) (ll_backend__var_locn__Var_62));
                }
                {
                  ll_backend__var_locn__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_59, 0) = ((MR_Box) ((MR_String) "Placing "));
                  MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_59, 1) = ((MR_Box) (ll_backend__var_locn__Var_61));
                }
                {
                  mercury__string__append_list_2_p_0(ll_backend__var_locn__Var_59, &ll_backend__var_locn__Msg_29);
                }
              }
            {
              ll_backend__var_locn__var_locn_get_vartypes_2_p_0(*ll_backend__var_locn__STATE_VARIABLE_VLI_37, &ll_backend__var_locn__VarTypes_33);
            }
            {
              hlds__vartypes__lookup_var_type_3_p_0(ll_backend__var_locn__VarTypes_33, ll_backend__var_locn__Var_9, &ll_backend__var_locn__Type_34);
            }
            {
              ll_backend__var_locn__IsDummy_35 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__var_locn__ModuleInfo_8, ll_backend__var_locn__Type_34);
            }
            switch (ll_backend__var_locn__IsDummy_35) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    ll_backend__var_locn__AssignCode_27 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__var_locn__Var_69;
                  MR_Word ll_backend__var_locn__Var_70;

                  {
                    ll_backend__var_locn__Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_70, 1) = ((MR_Box) (ll_backend__var_locn__Target_10));
                    MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_70, 2) = ((MR_Box) (ll_backend__var_locn__Rval_24));
                  }
                  {
                    ll_backend__var_locn__Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_69, 0) = ((MR_Box) (ll_backend__var_locn__Var_70));
                    MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_69, 1) = ((MR_Box) (ll_backend__var_locn__Msg_29));
                  }
                  {
                    ll_backend__var_locn__AssignCode_27 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__var_locn__Var_69)));
                  }
                }
                break;
            }
          }
        ll_backend__var_locn__TypeCtorInfo_82_82 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        {
          ll_backend__var_locn__Var_71 = mercury__cord__f_43_43_2_f_0(ll_backend__var_locn__TypeCtorInfo_82_82, ll_backend__var_locn__EvalCode_25, ll_backend__var_locn__AssignCode_27);
        }
        {
          *ll_backend__var_locn__Code_12 = mercury__cord__f_43_43_2_f_0(ll_backend__var_locn__TypeCtorInfo_82_82, ll_backend__var_locn__FreeCode_22, ll_backend__var_locn__Var_71);
        }
      }
  }
}

static void MR_CALL 
ll_backend__var_locn__actually_place_vars_5_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2,
  MR_Word * ll_backend__var_locn__HeadVar__3_3,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_4,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_5)
{
  {
    MR_bool ll_backend__var_locn__succeeded;

    if ((ll_backend__var_locn__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *ll_backend__var_locn__HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
        *ll_backend__var_locn__STATE_VARIABLE_VLI_5 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_4;
      }
    else
      {
        MR_Word ll_backend__var_locn__Var_11;
        MR_Word ll_backend__var_locn__Lval_12;
        MR_Word ll_backend__var_locn__Rest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__var_locn__FirstCode_16;
        MR_Word ll_backend__var_locn__RestCode_17;
        MR_Word ll_backend__var_locn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_21_21;

        ll_backend__var_locn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_20, (MR_Integer) 0)));
        ll_backend__var_locn__Lval_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_20, (MR_Integer) 1)));
        {
          ll_backend__var_locn__actually_place_var_7_p_0(ll_backend__var_locn__ModuleInfo_1, ll_backend__var_locn__Var_11, ll_backend__var_locn__Lval_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__var_locn__FirstCode_16, ll_backend__var_locn__STATE_VARIABLE_VLI_0_4, &ll_backend__var_locn__STATE_VARIABLE_VLI_21_21);
        }
        {
          ll_backend__var_locn__actually_place_vars_5_p_0(ll_backend__var_locn__ModuleInfo_1, ll_backend__var_locn__Rest_13, &ll_backend__var_locn__RestCode_17, ll_backend__var_locn__STATE_VARIABLE_VLI_21_21, ll_backend__var_locn__STATE_VARIABLE_VLI_5);
        }
        {
          *ll_backend__var_locn__HeadVar__3_3 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__var_locn__FirstCode_16, ll_backend__var_locn__RestCode_17);
        }
      }
  }
}

static void MR_CALL 
ll_backend__var_locn__reg_type_for_var_3_p_0(
  MR_Word ll_backend__var_locn__VLI_4,
  MR_Word ll_backend__var_locn__Var_5,
  MR_Word * ll_backend__var_locn__RegType_6)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__FloatRegType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 12)));

    switch (ll_backend__var_locn__FloatRegType_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__var_locn__VarType_9;
          MR_Word ll_backend__var_locn__Var_10;

          {
            hlds__vartypes__lookup_var_type_3_p_0(ll_backend__var_locn__Var_14, ll_backend__var_locn__Var_5, &ll_backend__var_locn__VarType_9);
          }
          {
            ll_backend__var_locn__Var_10 = parse_tree__builtin_lib_types__float_type_0_f_0();
          }
          {
            ll_backend__var_locn__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__var_locn__VarType_9, ll_backend__var_locn__Var_10);
          }
          if (ll_backend__var_locn__succeeded)
            *ll_backend__var_locn__RegType_6 = (MR_Integer) 1;
          else
            *ll_backend__var_locn__RegType_6 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 0:
        *ll_backend__var_locn__RegType_6 = (MR_Integer) 0;
        break;
    }
  }
}

static void MR_CALL 
ll_backend__var_locn__check_var_is_unknown_2_p_0(
  MR_Word ll_backend__var_locn__VLI_3,
  MR_Word ll_backend__var_locn__Var_4)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__VarStateMap0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 12)));
    MR_Word ll_backend__var_locn__Var_6;
    MR_Box ll_backend__var_locn__conv0_Var_6;

    {
      ll_backend__var_locn__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, ll_backend__var_locn__VarStateMap0_5, ((MR_Box) (ll_backend__var_locn__Var_4)), &ll_backend__var_locn__conv0_Var_6);
    }
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__Var_6 = ((MR_Word) ll_backend__var_locn__conv0_Var_6);
        ll_backend__var_locn__succeeded = MR_TRUE;
      }
    if (ll_backend__var_locn__succeeded)
      {
        MR_String ll_backend__var_locn__Name_7;
        MR_String ll_backend__var_locn__Var_10;
        MR_Word ll_backend__var_locn__VarSet_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 1)));
        MR_Word ll_backend__var_locn__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 2)));
        MR_Word ll_backend__var_locn__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 3)));
        MR_Word ll_backend__var_locn__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 4)));
        MR_Integer ll_backend__var_locn__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 5)));
        MR_Integer ll_backend__var_locn__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 6)));
        MR_Word ll_backend__var_locn__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 7)));
        MR_Word ll_backend__var_locn__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 8)));
        MR_Word ll_backend__var_locn__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 9)));
        MR_Integer ll_backend__var_locn__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 10)));
        MR_Integer ll_backend__var_locn__Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 11)));
        MR_Word ll_backend__var_locn__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 12)));

        {
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__var_locn__VarSet_30, ll_backend__var_locn__Var_4, &ll_backend__var_locn__Name_7);
        }
        {
          ll_backend__var_locn__Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "existing definition of variable ", ll_backend__var_locn__Name_7);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.check_var_is_unknown\'/2", ll_backend__var_locn__Var_10);
          return;
        }
      }
    else
      {
      }
  }
}

static void MR_CALL 
ll_backend__var_locn__remove_use_refs_2_4_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__UsingVar_2,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_3,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__var_locn__succeeded;

        if ((ll_backend__var_locn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__var_locn__STATE_VARIABLE_VLI_4 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_3;
        else
          {
            MR_Word ll_backend__var_locn__TypeInfo_33_33 = (MR_Word) &ll_backend__var_locn_scalar_common_1[0];
            MR_Word ll_backend__var_locn__TypeCtorInfo_34_34 = (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0;
            MR_Word ll_backend__var_locn__ContainedVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__var_locn__ContainedVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__var_locn__VarStateMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 7)));
            MR_Word ll_backend__var_locn__State0_14;
            MR_Word ll_backend__var_locn__Lvals_15;
            MR_Word ll_backend__var_locn__MaybeConstRval_16;
            MR_Word ll_backend__var_locn__MaybeExprRval_17;
            MR_Word ll_backend__var_locn__Using0_18;
            MR_Word ll_backend__var_locn__DeadOrAlive_19;
            MR_Word ll_backend__var_locn__Using_21;
            MR_Word ll_backend__var_locn__State_22;
            MR_Word ll_backend__var_locn__VarStateMap_23;
            MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_29_29;
            MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_31_31;
            MR_Word ll_backend__var_locn__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 0)));
            MR_Word ll_backend__var_locn__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 1)));
            MR_Word ll_backend__var_locn__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 2)));
            MR_Word ll_backend__var_locn__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 3)));
            MR_Word ll_backend__var_locn__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 4)));
            MR_Integer ll_backend__var_locn__Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 5)));
            MR_Integer ll_backend__var_locn__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 6)));
            MR_Word ll_backend__var_locn__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 8)));
            MR_Word ll_backend__var_locn__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 9)));
            MR_Integer ll_backend__var_locn__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 10)));
            MR_Integer ll_backend__var_locn__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 11)));
            MR_Word ll_backend__var_locn__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 12)));
            MR_Box ll_backend__var_locn__conv0_State0_14;
            MR_Word ll_backend__var_locn__Using1_20;
            MR_Word ll_backend__var_locn__Var_52;
            MR_Word ll_backend__var_locn__Var_53;
            MR_Word ll_backend__var_locn__Var_54;
            MR_Word ll_backend__var_locn__Var_55;
            MR_Word ll_backend__var_locn__Var_56;
            MR_Integer ll_backend__var_locn__Var_57;
            MR_Integer ll_backend__var_locn__Var_58;
            MR_Word ll_backend__var_locn__Var_60;
            MR_Word ll_backend__var_locn__Var_61;
            MR_Integer ll_backend__var_locn__Var_62;
            MR_Integer ll_backend__var_locn__Var_63;
            MR_Word ll_backend__var_locn__Var_64;
            MR_Word ll_backend__var_locn__Var_59;

            {
              mercury__map__lookup_3_p_0(ll_backend__var_locn__TypeInfo_33_33, ll_backend__var_locn__TypeCtorInfo_34_34, ll_backend__var_locn__VarStateMap0_13, ((MR_Box) (ll_backend__var_locn__ContainedVar_9)), &ll_backend__var_locn__conv0_State0_14);
            }
            ll_backend__var_locn__State0_14 = ((MR_Word) ll_backend__var_locn__conv0_State0_14);
            ll_backend__var_locn__Lvals_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_14, (MR_Integer) 0)));
            ll_backend__var_locn__MaybeConstRval_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_14, (MR_Integer) 1)));
            ll_backend__var_locn__MaybeExprRval_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_14, (MR_Integer) 2)));
            ll_backend__var_locn__Using0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_14, (MR_Integer) 3)));
            ll_backend__var_locn__DeadOrAlive_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_14, (MR_Integer) 4)));
            {
              ll_backend__var_locn__succeeded = parse_tree__set_of_var__remove_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__var_locn__UsingVar_2, ll_backend__var_locn__Using0_18, &ll_backend__var_locn__Using1_20);
            }
            if (ll_backend__var_locn__succeeded)
              ll_backend__var_locn__Using_21 = ll_backend__var_locn__Using1_20;
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.remove_use_refs_2\'/4", (MR_String) "using ref not present");
                  return;
                }
              }
            {
              ll_backend__var_locn__State_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_22, 0) = ((MR_Box) (ll_backend__var_locn__Lvals_15));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_22, 1) = ((MR_Box) (ll_backend__var_locn__MaybeConstRval_16));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_22, 2) = ((MR_Box) (ll_backend__var_locn__MaybeExprRval_17));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_22, 3) = ((MR_Box) (ll_backend__var_locn__Using_21));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_22, 4) = ((MR_Box) (ll_backend__var_locn__DeadOrAlive_19));
            }
            {
              mercury__map__det_update_4_p_0(ll_backend__var_locn__TypeInfo_33_33, ll_backend__var_locn__TypeCtorInfo_34_34, ((MR_Box) (ll_backend__var_locn__ContainedVar_9)), ((MR_Box) (ll_backend__var_locn__State_22)), ll_backend__var_locn__VarStateMap0_13, &ll_backend__var_locn__VarStateMap_23);
            }
            ll_backend__var_locn__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 0)));
            ll_backend__var_locn__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 1)));
            ll_backend__var_locn__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 2)));
            ll_backend__var_locn__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 3)));
            ll_backend__var_locn__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 4)));
            ll_backend__var_locn__Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 5)));
            ll_backend__var_locn__Var_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 6)));
            ll_backend__var_locn__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 7)));
            ll_backend__var_locn__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 8)));
            ll_backend__var_locn__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 9)));
            ll_backend__var_locn__Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 10)));
            ll_backend__var_locn__Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 11)));
            ll_backend__var_locn__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_3, (MR_Integer) 12)));
            {
              ll_backend__var_locn__STATE_VARIABLE_VLI_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_29_29, 0) = ((MR_Box) (ll_backend__var_locn__Var_52));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_29_29, 1) = ((MR_Box) (ll_backend__var_locn__Var_53));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_29_29, 2) = ((MR_Box) (ll_backend__var_locn__Var_54));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_29_29, 3) = ((MR_Box) (ll_backend__var_locn__Var_55));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_29_29, 4) = ((MR_Box) (ll_backend__var_locn__Var_56));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_29_29, 5) = ((MR_Box) (ll_backend__var_locn__Var_57));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_29_29, 6) = ((MR_Box) (ll_backend__var_locn__Var_58));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_29_29, 7) = ((MR_Box) (ll_backend__var_locn__VarStateMap_23));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_29_29, 8) = ((MR_Box) (ll_backend__var_locn__Var_60));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_29_29, 9) = ((MR_Box) (ll_backend__var_locn__Var_61));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_29_29, 10) = ((MR_Box) (ll_backend__var_locn__Var_62));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_29_29, 11) = ((MR_Box) (ll_backend__var_locn__Var_63));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_29_29, 12) = ((MR_Box) (ll_backend__var_locn__Var_64));
            }
            {
              ll_backend__var_locn__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__var_locn__Using_21);
            }
            if (ll_backend__var_locn__succeeded)
              ll_backend__var_locn__succeeded = (ll_backend__var_locn__DeadOrAlive_19 == (MR_Integer) 0);
            if (ll_backend__var_locn__succeeded)
              {
                {
                  ll_backend__var_locn__var_locn_var_becomes_dead_4_p_0(ll_backend__var_locn__ContainedVar_9, (MR_Integer) 0, ll_backend__var_locn__STATE_VARIABLE_VLI_29_29, &ll_backend__var_locn__STATE_VARIABLE_VLI_31_31);
                }
              }
            else
              ll_backend__var_locn__STATE_VARIABLE_VLI_31_31 = ll_backend__var_locn__STATE_VARIABLE_VLI_29_29;
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__var_locn__next_value_of_HeadVar__1_1 = ll_backend__var_locn__ContainedVars_10;
              MR_Word ll_backend__var_locn__next_value_of_STATE_VARIABLE_VLI_0_3 = ll_backend__var_locn__STATE_VARIABLE_VLI_31_31;

              ll_backend__var_locn__STATE_VARIABLE_VLI_0_3 = ll_backend__var_locn__next_value_of_STATE_VARIABLE_VLI_0_3;
              ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__var_locn__remove_use_refs_4_p_0(
  MR_Word ll_backend__var_locn__MaybeExprRval_5,
  MR_Word ll_backend__var_locn__UsingVar_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_11,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_12)
{
  {
    MR_bool ll_backend__var_locn__succeeded;

    if ((ll_backend__var_locn__MaybeExprRval_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__var_locn__STATE_VARIABLE_VLI_12 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_11;
    else
      {
        MR_Word ll_backend__var_locn__ExprRval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__MaybeExprRval_5, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__ContainedVars0_9;
        MR_Word ll_backend__var_locn__ContainedVars_10;

        {
          ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__var_locn__ExprRval_8, &ll_backend__var_locn__ContainedVars0_9);
        }
        {
          mercury__list__remove_dups_2_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], ll_backend__var_locn__ContainedVars0_9, &ll_backend__var_locn__ContainedVars_10);
        }
        {
          ll_backend__var_locn__remove_use_refs_2_4_p_0(ll_backend__var_locn__ContainedVars_10, ll_backend__var_locn__UsingVar_6, ll_backend__var_locn__STATE_VARIABLE_VLI_0_11, ll_backend__var_locn__STATE_VARIABLE_VLI_12);
        }
      }
  }
}

static void MR_CALL 
ll_backend__var_locn__add_additional_lval_for_var_4_p_0_2(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv0_STATE_VARIABLE_LocVarMap_11;

    {
      ll_backend__var_locn__make_var_depend_on_root_lval_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2), &ll_backend__var_locn__conv0_STATE_VARIABLE_LocVarMap_11);
    }
    *ll_backend__var_locn__wrapper_arg_3 = ((MR_Box) (ll_backend__var_locn__conv0_STATE_VARIABLE_LocVarMap_11));
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__add_additional_lval_for_var_4_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) ll_backend__var_locn__wrapper_arg_1));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn__add_additional_lval_for_var_4_p_0(
  MR_Word ll_backend__var_locn__Var_5,
  MR_Word ll_backend__var_locn__Lval_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_20,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_21)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__TypeInfo_26_26;
    MR_Word ll_backend__var_locn__TypeCtorInfo_27_27;
    MR_Word ll_backend__var_locn__TypeCtorInfo_10_70;
    MR_Word ll_backend__var_locn__LocVarMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__LocVarMap_9;
    MR_Word ll_backend__var_locn__VarStateMap0_10;
    MR_Word ll_backend__var_locn__State0_11;
    MR_Word ll_backend__var_locn__LvalSet0_12;
    MR_Word ll_backend__var_locn__MaybeConstRval_13;
    MR_Word ll_backend__var_locn__MaybeExprRval0_14;
    MR_Word ll_backend__var_locn__Using_15;
    MR_Word ll_backend__var_locn__DeadOrAlive_16;
    MR_Word ll_backend__var_locn__LvalSet_17;
    MR_Word ll_backend__var_locn__State_18;
    MR_Word ll_backend__var_locn__VarStateMap_19;
    MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_22_22;
    MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_24_24;
    MR_Word ll_backend__var_locn__Lvals_47;
    MR_Word ll_backend__var_locn__NoDupRootLvals_55;
    MR_Word ll_backend__var_locn__Var_56;
    MR_Word ll_backend__var_locn__LvalList_65;
    MR_Word ll_backend__var_locn__AllLvals_66;
    MR_Word ll_backend__var_locn__RootLvals_67;
    MR_Word ll_backend__var_locn__Var_68;
    MR_Word ll_backend__var_locn__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 12)));
    MR_Box ll_backend__var_locn__conv1_LocVarMap_9;
    MR_Word ll_backend__var_locn__Var_74;
    MR_Word ll_backend__var_locn__Var_75;
    MR_Word ll_backend__var_locn__Var_76;
    MR_Word ll_backend__var_locn__Var_77;
    MR_Word ll_backend__var_locn__Var_78;
    MR_Integer ll_backend__var_locn__Var_79;
    MR_Integer ll_backend__var_locn__Var_80;
    MR_Word ll_backend__var_locn__Var_81;
    MR_Word ll_backend__var_locn__Var_83;
    MR_Integer ll_backend__var_locn__Var_84;
    MR_Integer ll_backend__var_locn__Var_85;
    MR_Word ll_backend__var_locn__Var_86;
    MR_Word ll_backend__var_locn__Var_82;
    MR_Box ll_backend__var_locn__conv2_State0_11;

    {
      ll_backend__var_locn__Lvals_47 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__var_locn__Lval_6)));
    }
    ll_backend__var_locn__TypeCtorInfo_10_70 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    {
      mercury__set__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_10_70, ll_backend__var_locn__Lvals_47, &ll_backend__var_locn__LvalList_65);
    }
    {
      ll_backend__var_locn__Var_68 = ll_backend__code_util__lvals_in_lvals_1_f_0(ll_backend__var_locn__LvalList_65);
    }
    {
      ll_backend__var_locn__AllLvals_66 = mercury__list__f_43_43_2_f_0(ll_backend__var_locn__TypeCtorInfo_10_70, ll_backend__var_locn__LvalList_65, ll_backend__var_locn__Var_68);
    }
    {
      mercury__list__filter_3_p_0(ll_backend__var_locn__TypeCtorInfo_10_70, (MR_Word) &ll_backend__var_locn_scalar_common_2[12], ll_backend__var_locn__AllLvals_66, &ll_backend__var_locn__RootLvals_67);
    }
    {
      mercury__list__sort_and_remove_dups_2_p_0(ll_backend__var_locn__TypeCtorInfo_10_70, ll_backend__var_locn__RootLvals_67, &ll_backend__var_locn__NoDupRootLvals_55);
    }
    {
      ll_backend__var_locn__Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_56, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_56, 1) = ((MR_Box) (ll_backend__var_locn__add_additional_lval_for_var_4_p_0_2));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_56, 3) = ((MR_Box) (ll_backend__var_locn__Var_5));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__var_locn_scalar_common_2[0], ll_backend__var_locn__Var_56, ll_backend__var_locn__NoDupRootLvals_55, ((MR_Box) (ll_backend__var_locn__LocVarMap0_8)), &ll_backend__var_locn__conv1_LocVarMap_9);
    }
    ll_backend__var_locn__LocVarMap_9 = ((MR_Word) ll_backend__var_locn__conv1_LocVarMap_9);
    ll_backend__var_locn__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 0)));
    ll_backend__var_locn__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 1)));
    ll_backend__var_locn__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 2)));
    ll_backend__var_locn__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 3)));
    ll_backend__var_locn__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 4)));
    ll_backend__var_locn__Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 5)));
    ll_backend__var_locn__Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 6)));
    ll_backend__var_locn__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 7)));
    ll_backend__var_locn__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 8)));
    ll_backend__var_locn__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 9)));
    ll_backend__var_locn__Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 10)));
    ll_backend__var_locn__Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 11)));
    ll_backend__var_locn__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_20, (MR_Integer) 12)));
    {
      ll_backend__var_locn__STATE_VARIABLE_VLI_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_22_22, 0) = ((MR_Box) (ll_backend__var_locn__Var_74));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_22_22, 1) = ((MR_Box) (ll_backend__var_locn__Var_75));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_22_22, 2) = ((MR_Box) (ll_backend__var_locn__Var_76));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_22_22, 3) = ((MR_Box) (ll_backend__var_locn__Var_77));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_22_22, 4) = ((MR_Box) (ll_backend__var_locn__Var_78));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_22_22, 5) = ((MR_Box) (ll_backend__var_locn__Var_79));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_22_22, 6) = ((MR_Box) (ll_backend__var_locn__Var_80));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_22_22, 7) = ((MR_Box) (ll_backend__var_locn__Var_81));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_22_22, 8) = ((MR_Box) (ll_backend__var_locn__LocVarMap_9));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_22_22, 9) = ((MR_Box) (ll_backend__var_locn__Var_83));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_22_22, 10) = ((MR_Box) (ll_backend__var_locn__Var_84));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_22_22, 11) = ((MR_Box) (ll_backend__var_locn__Var_85));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_22_22, 12) = ((MR_Box) (ll_backend__var_locn__Var_86));
    }
    {
      ll_backend__var_locn__var_locn_get_var_state_map_2_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_22_22, &ll_backend__var_locn__VarStateMap0_10);
    }
    ll_backend__var_locn__TypeInfo_26_26 = (MR_Word) &ll_backend__var_locn_scalar_common_1[0];
    ll_backend__var_locn__TypeCtorInfo_27_27 = (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0;
    {
      mercury__map__lookup_3_p_0(ll_backend__var_locn__TypeInfo_26_26, ll_backend__var_locn__TypeCtorInfo_27_27, ll_backend__var_locn__VarStateMap0_10, ((MR_Box) (ll_backend__var_locn__Var_5)), &ll_backend__var_locn__conv2_State0_11);
    }
    ll_backend__var_locn__State0_11 = ((MR_Word) ll_backend__var_locn__conv2_State0_11);
    ll_backend__var_locn__LvalSet0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_11, (MR_Integer) 0)));
    ll_backend__var_locn__MaybeConstRval_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_11, (MR_Integer) 1)));
    ll_backend__var_locn__MaybeExprRval0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_11, (MR_Integer) 2)));
    ll_backend__var_locn__Using_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_11, (MR_Integer) 3)));
    ll_backend__var_locn__DeadOrAlive_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_11, (MR_Integer) 4)));
    {
      mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__var_locn__Lval_6)), ll_backend__var_locn__LvalSet0_12, &ll_backend__var_locn__LvalSet_17);
    }
    {
      ll_backend__var_locn__State_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_18, 0) = ((MR_Box) (ll_backend__var_locn__LvalSet_17));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_18, 1) = ((MR_Box) (ll_backend__var_locn__MaybeConstRval_13));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_18, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_18, 3) = ((MR_Box) (ll_backend__var_locn__Using_15));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_18, 4) = ((MR_Box) (ll_backend__var_locn__DeadOrAlive_16));
    }
    {
      mercury__map__det_update_4_p_0(ll_backend__var_locn__TypeInfo_26_26, ll_backend__var_locn__TypeCtorInfo_27_27, ((MR_Box) (ll_backend__var_locn__Var_5)), ((MR_Box) (ll_backend__var_locn__State_18)), ll_backend__var_locn__VarStateMap0_10, &ll_backend__var_locn__VarStateMap_19);
    }
    {
      ll_backend__var_locn__var_locn_set_var_state_map_3_p_0(ll_backend__var_locn__VarStateMap_19, ll_backend__var_locn__STATE_VARIABLE_VLI_22_22, &ll_backend__var_locn__STATE_VARIABLE_VLI_24_24);
    }
    if ((ll_backend__var_locn__MaybeExprRval0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__var_locn__STATE_VARIABLE_VLI_21 = ll_backend__var_locn__STATE_VARIABLE_VLI_24_24;
    else
      {
        MR_Word ll_backend__var_locn__ExprRval_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__MaybeExprRval0_14, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__ContainedVars0_93;
        MR_Word ll_backend__var_locn__ContainedVars_94;

        {
          ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__var_locn__ExprRval_92, &ll_backend__var_locn__ContainedVars0_93);
        }
        {
          mercury__list__remove_dups_2_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], ll_backend__var_locn__ContainedVars0_93, &ll_backend__var_locn__ContainedVars_94);
        }
        {
          ll_backend__var_locn__remove_use_refs_2_4_p_0(ll_backend__var_locn__ContainedVars_94, ll_backend__var_locn__Var_5, ll_backend__var_locn__STATE_VARIABLE_VLI_24_24, ll_backend__var_locn__STATE_VARIABLE_VLI_21);
        }
      }
  }
}

static void MR_CALL 
ll_backend__var_locn__var_locn_save_cell_fields_2_8_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_9,
  MR_Word ll_backend__var_locn__ReuseLval_10,
  MR_Word ll_backend__var_locn__DepVar_11,
  MR_Word * ll_backend__var_locn__SaveDepVarCode_12,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_Regs_0_25,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_Regs_26,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_27,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_28)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Avail_15;
    MR_Word ll_backend__var_locn__DepVarRval_16;
    MR_Word ll_backend__var_locn__EvalCode_17;
    MR_Word ll_backend__var_locn__VarTypes_18;
    MR_Word ll_backend__var_locn__DepVarType_19;
    MR_Word ll_backend__var_locn__IsDummy_20;
    MR_Word ll_backend__var_locn__AssignCode_21;
    MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_33_33;
    MR_Word ll_backend__var_locn__Var_48;
    MR_Word ll_backend__var_locn__Var_49;
    MR_Word ll_backend__var_locn__Var_50;
    MR_Word ll_backend__var_locn__Var_51;
    MR_Integer ll_backend__var_locn__Var_52;
    MR_Integer ll_backend__var_locn__Var_53;
    MR_Word ll_backend__var_locn__Var_54;
    MR_Word ll_backend__var_locn__Var_55;
    MR_Word ll_backend__var_locn__Var_56;
    MR_Integer ll_backend__var_locn__Var_57;
    MR_Integer ll_backend__var_locn__Var_58;
    MR_Word ll_backend__var_locn__Var_59;

    {
      ll_backend__var_locn__find_var_availability_4_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_0_27, ll_backend__var_locn__DepVar_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__var_locn__Avail_15);
    }
    if ((ll_backend__var_locn__Avail_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          ll_backend__var_locn__materialize_var_9_p_0(ll_backend__var_locn__ModuleInfo_9, ll_backend__var_locn__DepVar_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__var_locn__DepVarRval_16, &ll_backend__var_locn__EvalCode_17, ll_backend__var_locn__STATE_VARIABLE_VLI_0_27, &ll_backend__var_locn__STATE_VARIABLE_VLI_33_33);
        }
      }
    else
      {
        ll_backend__var_locn__DepVarRval_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Avail_15, (MR_Integer) 0)));
        {
          ll_backend__var_locn__EvalCode_17 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
        ll_backend__var_locn__STATE_VARIABLE_VLI_33_33 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_27;
      }
    ll_backend__var_locn__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 0)));
    ll_backend__var_locn__VarTypes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 1)));
    ll_backend__var_locn__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 2)));
    ll_backend__var_locn__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 3)));
    ll_backend__var_locn__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 4)));
    ll_backend__var_locn__Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 5)));
    ll_backend__var_locn__Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 6)));
    ll_backend__var_locn__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 7)));
    ll_backend__var_locn__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 8)));
    ll_backend__var_locn__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 9)));
    ll_backend__var_locn__Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 10)));
    ll_backend__var_locn__Var_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 11)));
    ll_backend__var_locn__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 12)));
    {
      hlds__vartypes__lookup_var_type_3_p_0(ll_backend__var_locn__VarTypes_18, ll_backend__var_locn__DepVar_11, &ll_backend__var_locn__DepVarType_19);
    }
    {
      ll_backend__var_locn__IsDummy_20 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__var_locn__ModuleInfo_9, ll_backend__var_locn__DepVarType_19);
    }
    switch (ll_backend__var_locn__IsDummy_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            ll_backend__var_locn__AssignCode_21 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
          *ll_backend__var_locn__STATE_VARIABLE_Regs_26 = ll_backend__var_locn__STATE_VARIABLE_Regs_0_25;
          *ll_backend__var_locn__STATE_VARIABLE_VLI_28 = ll_backend__var_locn__STATE_VARIABLE_VLI_33_33;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__var_locn__Var_34;

          {
            ll_backend__var_locn__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_34, 0) = ((MR_Box) (ll_backend__var_locn__ReuseLval_10));
          }
          {
            ll_backend__var_locn__succeeded = ll_backend__var_locn__rval_depends_on_search_lval_2_p_0(ll_backend__var_locn__DepVarRval_16, ll_backend__var_locn__Var_34);
          }
          if (ll_backend__var_locn__succeeded)
            {
              MR_Word ll_backend__var_locn__RegType_22;
              MR_Word ll_backend__var_locn__Target_23;
              MR_String ll_backend__var_locn__DepVarName_24;
              MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_35_35;
              MR_Word ll_backend__var_locn__Var_37;
              MR_Word ll_backend__var_locn__Var_38;
              MR_String ll_backend__var_locn__Var_39;
              MR_Word ll_backend__var_locn__VarSet_81;
              MR_Word ll_backend__var_locn__Var_63;
              MR_Word ll_backend__var_locn__Var_84;
              MR_Word ll_backend__var_locn__Var_85;
              MR_Word ll_backend__var_locn__Var_86;
              MR_Word ll_backend__var_locn__Var_87;
              MR_Integer ll_backend__var_locn__Var_88;
              MR_Integer ll_backend__var_locn__Var_89;
              MR_Word ll_backend__var_locn__Var_90;
              MR_Word ll_backend__var_locn__Var_91;
              MR_Word ll_backend__var_locn__Var_92;
              MR_Integer ll_backend__var_locn__Var_93;
              MR_Integer ll_backend__var_locn__Var_94;
              MR_Word ll_backend__var_locn__Var_95;

              {
                ll_backend__var_locn__Var_63 = parse_tree__builtin_lib_types__float_type_0_f_0();
              }
              {
                ll_backend__var_locn__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__var_locn__DepVarType_19, ll_backend__var_locn__Var_63);
              }
              if (ll_backend__var_locn__succeeded)
                {
                  MR_Word ll_backend__var_locn__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 0)));
                  MR_Word ll_backend__var_locn__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 1)));
                  MR_Word ll_backend__var_locn__Var_68;
                  MR_Word ll_backend__var_locn__Var_69;
                  MR_Integer ll_backend__var_locn__Var_70;
                  MR_Integer ll_backend__var_locn__Var_71;
                  MR_Word ll_backend__var_locn__Var_72;
                  MR_Word ll_backend__var_locn__Var_73;
                  MR_Word ll_backend__var_locn__Var_74;
                  MR_Integer ll_backend__var_locn__Var_75;
                  MR_Integer ll_backend__var_locn__Var_76;
                  MR_Word ll_backend__var_locn__Var_77;

                  ll_backend__var_locn__RegType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 2)));
                  ll_backend__var_locn__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 3)));
                  ll_backend__var_locn__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 4)));
                  ll_backend__var_locn__Var_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 5)));
                  ll_backend__var_locn__Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 6)));
                  ll_backend__var_locn__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 7)));
                  ll_backend__var_locn__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 8)));
                  ll_backend__var_locn__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 9)));
                  ll_backend__var_locn__Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 10)));
                  ll_backend__var_locn__Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 11)));
                  ll_backend__var_locn__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, (MR_Integer) 12)));
                }
              else
                ll_backend__var_locn__RegType_22 = (MR_Integer) 0;
              {
                ll_backend__var_locn__var_locn_acquire_reg_4_p_0(ll_backend__var_locn__RegType_22, &ll_backend__var_locn__Target_23, ll_backend__var_locn__STATE_VARIABLE_VLI_33_33, &ll_backend__var_locn__STATE_VARIABLE_VLI_35_35);
              }
              {
                ll_backend__var_locn__add_additional_lval_for_var_4_p_0(ll_backend__var_locn__DepVar_11, ll_backend__var_locn__Target_23, ll_backend__var_locn__STATE_VARIABLE_VLI_35_35, ll_backend__var_locn__STATE_VARIABLE_VLI_28);
              }
              ll_backend__var_locn__VarSet_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ll_backend__var_locn__STATE_VARIABLE_VLI_28, (MR_Integer) 0)));
              ll_backend__var_locn__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ll_backend__var_locn__STATE_VARIABLE_VLI_28, (MR_Integer) 1)));
              ll_backend__var_locn__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ll_backend__var_locn__STATE_VARIABLE_VLI_28, (MR_Integer) 2)));
              ll_backend__var_locn__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ll_backend__var_locn__STATE_VARIABLE_VLI_28, (MR_Integer) 3)));
              ll_backend__var_locn__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ll_backend__var_locn__STATE_VARIABLE_VLI_28, (MR_Integer) 4)));
              ll_backend__var_locn__Var_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *ll_backend__var_locn__STATE_VARIABLE_VLI_28, (MR_Integer) 5)));
              ll_backend__var_locn__Var_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *ll_backend__var_locn__STATE_VARIABLE_VLI_28, (MR_Integer) 6)));
              ll_backend__var_locn__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ll_backend__var_locn__STATE_VARIABLE_VLI_28, (MR_Integer) 7)));
              ll_backend__var_locn__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ll_backend__var_locn__STATE_VARIABLE_VLI_28, (MR_Integer) 8)));
              ll_backend__var_locn__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ll_backend__var_locn__STATE_VARIABLE_VLI_28, (MR_Integer) 9)));
              ll_backend__var_locn__Var_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *ll_backend__var_locn__STATE_VARIABLE_VLI_28, (MR_Integer) 10)));
              ll_backend__var_locn__Var_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *ll_backend__var_locn__STATE_VARIABLE_VLI_28, (MR_Integer) 11)));
              ll_backend__var_locn__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), *ll_backend__var_locn__STATE_VARIABLE_VLI_28, (MR_Integer) 12)));
              {
                mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__var_locn__VarSet_81, ll_backend__var_locn__DepVar_11, &ll_backend__var_locn__DepVarName_24);
              }
              {
                ll_backend__var_locn__Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_38, 1) = ((MR_Box) (ll_backend__var_locn__Target_23));
                MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_38, 2) = ((MR_Box) (ll_backend__var_locn__DepVarRval_16));
              }
              {
                ll_backend__var_locn__Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "saving ", ll_backend__var_locn__DepVarName_24);
              }
              {
                ll_backend__var_locn__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_37, 0) = ((MR_Box) (ll_backend__var_locn__Var_38));
                MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_37, 1) = ((MR_Box) (ll_backend__var_locn__Var_39));
              }
              {
                ll_backend__var_locn__AssignCode_21 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__var_locn__Var_37)));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__var_locn__STATE_VARIABLE_Regs_26 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__var_locn__Target_23));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__var_locn__STATE_VARIABLE_Regs_0_25));
              }
            }
          else
            {
              {
                ll_backend__var_locn__AssignCode_21 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
              *ll_backend__var_locn__STATE_VARIABLE_VLI_28 = ll_backend__var_locn__STATE_VARIABLE_VLI_33_33;
              *ll_backend__var_locn__STATE_VARIABLE_Regs_26 = ll_backend__var_locn__STATE_VARIABLE_Regs_0_25;
            }
        }
        break;
    }
    {
      *ll_backend__var_locn__SaveDepVarCode_12 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__var_locn__EvalCode_17, ll_backend__var_locn__AssignCode_21);
    }
  }
}

static void MR_CALL 
ll_backend__var_locn__materialize_if_var_6_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_7,
  MR_Word ll_backend__var_locn__Rval0_8,
  MR_Word * ll_backend__var_locn__EvalCode_9,
  MR_Word * ll_backend__var_locn__Rval_10,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_25,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_26)
{
  {
    MR_bool ll_backend__var_locn__succeeded;

    switch (MR_tag((MR_Word) ll_backend__var_locn__Rval0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        {
          {
            *ll_backend__var_locn__EvalCode_9 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
          *ll_backend__var_locn__Rval_10 = ll_backend__var_locn__Rval0_8;
          *ll_backend__var_locn__STATE_VARIABLE_VLI_26 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_25;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__var_locn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Rval0_8, (MR_Integer) 0)));
          MR_Word ll_backend__var_locn__Avail_13;

          {
            ll_backend__var_locn__find_var_availability_4_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_0_25, ll_backend__var_locn__Var_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__var_locn__Avail_13);
          }
          if ((ll_backend__var_locn__Avail_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                ll_backend__var_locn__materialize_var_9_p_0(ll_backend__var_locn__ModuleInfo_7, ll_backend__var_locn__Var_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Rval_10, ll_backend__var_locn__EvalCode_9, ll_backend__var_locn__STATE_VARIABLE_VLI_0_25, ll_backend__var_locn__STATE_VARIABLE_VLI_26);
              }
            }
          else
            {
              *ll_backend__var_locn__Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Avail_13, (MR_Integer) 0)));
              {
                *ll_backend__var_locn__EvalCode_9 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
              *ll_backend__var_locn__STATE_VARIABLE_VLI_26 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_25;
            }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            *ll_backend__var_locn__EvalCode_9 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
          *ll_backend__var_locn__Rval_10 = ll_backend__var_locn__Rval0_8;
          *ll_backend__var_locn__STATE_VARIABLE_VLI_26 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_25;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__var_locn__assign_cell_arg_8_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_9,
  MR_Word ll_backend__var_locn__Rval0_10,
  MR_Word ll_backend__var_locn__Ptag_11,
  MR_Word ll_backend__var_locn__Base_12,
  MR_Integer ll_backend__var_locn__Offset_13,
  MR_Word * ll_backend__var_locn__Code_14,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_37,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_38)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Target_16;
    MR_Word ll_backend__var_locn__EvalCode_18;
    MR_Word ll_backend__var_locn__AssignCode_23;
    MR_Word ll_backend__var_locn__Var_39;
    MR_Word ll_backend__var_locn__Var_40;

    {
      ll_backend__var_locn__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_40, 0) = ((MR_Box) (ll_backend__var_locn__Offset_13));
    }
    {
      ll_backend__var_locn__Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_39, 1) = ((MR_Box) (ll_backend__var_locn__Var_40));
    }
    {
      ll_backend__var_locn__Target_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__var_locn__Target_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), ll_backend__var_locn__Target_16, 1) = ((MR_Box) (ll_backend__var_locn__Ptag_11));
      MR_hl_field(MR_mktag(3), ll_backend__var_locn__Target_16, 2) = ((MR_Box) (ll_backend__var_locn__Base_12));
      MR_hl_field(MR_mktag(3), ll_backend__var_locn__Target_16, 3) = ((MR_Box) (ll_backend__var_locn__Var_39));
    }
    switch (MR_tag((MR_Word) ll_backend__var_locn__Rval0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__var_locn__TypeCtorInfo_57_66 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
          MR_Word ll_backend__var_locn__Var_63;
          MR_Word ll_backend__var_locn__Var_64;

          {
            ll_backend__var_locn__EvalCode_18 = mercury__cord__empty_0_f_0(ll_backend__var_locn__TypeCtorInfo_57_66);
          }
          {
            ll_backend__var_locn__Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_64, 1) = ((MR_Box) (ll_backend__var_locn__Target_16));
            MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_64, 2) = ((MR_Box) (ll_backend__var_locn__Rval0_10));
          }
          {
            ll_backend__var_locn__Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_63, 0) = ((MR_Box) (ll_backend__var_locn__Var_64));
            MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_63, 1) = ((MR_Box) ((MR_String) "assigning field"));
          }
          {
            ll_backend__var_locn__AssignCode_23 = mercury__cord__singleton_1_f_0(ll_backend__var_locn__TypeCtorInfo_57_66, ((MR_Box) (ll_backend__var_locn__Var_63)));
          }
          *ll_backend__var_locn__STATE_VARIABLE_VLI_38 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_37;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__var_locn__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Rval0_10, (MR_Integer) 0)));
          MR_Word ll_backend__var_locn__Rval_19;
          MR_Word ll_backend__var_locn__VarTypes_20;
          MR_Word ll_backend__var_locn__Type_21;
          MR_Word ll_backend__var_locn__IsDummy_22;
          MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_49_49;
          MR_Word ll_backend__var_locn__Var_76;
          MR_Word ll_backend__var_locn__Var_77;
          MR_Word ll_backend__var_locn__Var_78;
          MR_Word ll_backend__var_locn__Var_79;
          MR_Integer ll_backend__var_locn__Var_80;
          MR_Integer ll_backend__var_locn__Var_81;
          MR_Word ll_backend__var_locn__Var_82;
          MR_Word ll_backend__var_locn__Var_83;
          MR_Word ll_backend__var_locn__Var_84;
          MR_Integer ll_backend__var_locn__Var_85;
          MR_Integer ll_backend__var_locn__Var_86;
          MR_Word ll_backend__var_locn__Var_87;

          {
            ll_backend__var_locn__materialize_if_var_6_p_0(ll_backend__var_locn__ModuleInfo_9, ll_backend__var_locn__Rval0_10, &ll_backend__var_locn__EvalCode_18, &ll_backend__var_locn__Rval_19, ll_backend__var_locn__STATE_VARIABLE_VLI_0_37, &ll_backend__var_locn__STATE_VARIABLE_VLI_49_49);
          }
          ll_backend__var_locn__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_49_49, (MR_Integer) 0)));
          ll_backend__var_locn__VarTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_49_49, (MR_Integer) 1)));
          ll_backend__var_locn__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_49_49, (MR_Integer) 2)));
          ll_backend__var_locn__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_49_49, (MR_Integer) 3)));
          ll_backend__var_locn__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_49_49, (MR_Integer) 4)));
          ll_backend__var_locn__Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_49_49, (MR_Integer) 5)));
          ll_backend__var_locn__Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_49_49, (MR_Integer) 6)));
          ll_backend__var_locn__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_49_49, (MR_Integer) 7)));
          ll_backend__var_locn__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_49_49, (MR_Integer) 8)));
          ll_backend__var_locn__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_49_49, (MR_Integer) 9)));
          ll_backend__var_locn__Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_49_49, (MR_Integer) 10)));
          ll_backend__var_locn__Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_49_49, (MR_Integer) 11)));
          ll_backend__var_locn__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_49_49, (MR_Integer) 12)));
          {
            hlds__vartypes__lookup_var_type_3_p_0(ll_backend__var_locn__VarTypes_20, ll_backend__var_locn__Var_17, &ll_backend__var_locn__Type_21);
          }
          {
            ll_backend__var_locn__IsDummy_22 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__var_locn__ModuleInfo_9, ll_backend__var_locn__Type_21);
          }
          switch (ll_backend__var_locn__IsDummy_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  ll_backend__var_locn__AssignCode_23 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                }
                *ll_backend__var_locn__STATE_VARIABLE_VLI_38 = ll_backend__var_locn__STATE_VARIABLE_VLI_49_49;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String ll_backend__var_locn__VarName_24;
                MR_String ll_backend__var_locn__Comment_25;
                MR_Word ll_backend__var_locn__Var_52;
                MR_Word ll_backend__var_locn__Var_53;

                {
                  ll_backend__var_locn__add_additional_lval_for_var_4_p_0(ll_backend__var_locn__Var_17, ll_backend__var_locn__Target_16, ll_backend__var_locn__STATE_VARIABLE_VLI_49_49, ll_backend__var_locn__STATE_VARIABLE_VLI_38);
                }
                {
                  ll_backend__var_locn__get_var_name_3_p_0(*ll_backend__var_locn__STATE_VARIABLE_VLI_38, ll_backend__var_locn__Var_17, &ll_backend__var_locn__VarName_24);
                }
                {
                  ll_backend__var_locn__Comment_25 = mercury__string__f_43_43_2_f_0((MR_String) "assigning from ", ll_backend__var_locn__VarName_24);
                }
                {
                  ll_backend__var_locn__Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_53, 1) = ((MR_Box) (ll_backend__var_locn__Target_16));
                  MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_53, 2) = ((MR_Box) (ll_backend__var_locn__Rval_19));
                }
                {
                  ll_backend__var_locn__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_52, 0) = ((MR_Box) (ll_backend__var_locn__Var_53));
                  MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_52, 1) = ((MR_Box) (ll_backend__var_locn__Comment_25));
                }
                {
                  ll_backend__var_locn__AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__var_locn__Var_52)));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__var_locn__TypeCtorInfo_57_70 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
          MR_Word ll_backend__var_locn__Var_67;
          MR_Word ll_backend__var_locn__Var_68;

          {
            ll_backend__var_locn__EvalCode_18 = mercury__cord__empty_0_f_0(ll_backend__var_locn__TypeCtorInfo_57_70);
          }
          {
            ll_backend__var_locn__Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_68, 1) = ((MR_Box) (ll_backend__var_locn__Target_16));
            MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_68, 2) = ((MR_Box) (ll_backend__var_locn__Rval0_10));
          }
          {
            ll_backend__var_locn__Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_67, 0) = ((MR_Box) (ll_backend__var_locn__Var_68));
            MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_67, 1) = ((MR_Box) ((MR_String) "assigning field from tagged pointer"));
          }
          {
            ll_backend__var_locn__AssignCode_23 = mercury__cord__singleton_1_f_0(ll_backend__var_locn__TypeCtorInfo_57_70, ((MR_Box) (ll_backend__var_locn__Var_67)));
          }
          *ll_backend__var_locn__STATE_VARIABLE_VLI_38 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_37;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Rval0_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.assign_cell_arg\'/8", (MR_String) "mkword_hole");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__var_locn__TypeCtorInfo_57_62 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
              MR_Word ll_backend__var_locn__Var_59;
              MR_Word ll_backend__var_locn__Var_60;

              {
                ll_backend__var_locn__EvalCode_18 = mercury__cord__empty_0_f_0(ll_backend__var_locn__TypeCtorInfo_57_62);
              }
              {
                ll_backend__var_locn__Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_60, 1) = ((MR_Box) (ll_backend__var_locn__Target_16));
                MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_60, 2) = ((MR_Box) (ll_backend__var_locn__Rval0_10));
              }
              {
                ll_backend__var_locn__Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_59, 0) = ((MR_Box) (ll_backend__var_locn__Var_60));
                MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_59, 1) = ((MR_Box) ((MR_String) "assigning field from const"));
              }
              {
                ll_backend__var_locn__AssignCode_23 = mercury__cord__singleton_1_f_0(ll_backend__var_locn__TypeCtorInfo_57_62, ((MR_Box) (ll_backend__var_locn__Var_59)));
              }
              *ll_backend__var_locn__STATE_VARIABLE_VLI_38 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_37;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__var_locn__TypeCtorInfo_57_74 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
              MR_Word ll_backend__var_locn__Var_71;
              MR_Word ll_backend__var_locn__Var_72;

              {
                ll_backend__var_locn__EvalCode_18 = mercury__cord__empty_0_f_0(ll_backend__var_locn__TypeCtorInfo_57_74);
              }
              {
                ll_backend__var_locn__Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_72, 1) = ((MR_Box) (ll_backend__var_locn__Target_16));
                MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_72, 2) = ((MR_Box) (ll_backend__var_locn__Rval0_10));
              }
              {
                ll_backend__var_locn__Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_71, 0) = ((MR_Box) (ll_backend__var_locn__Var_72));
                MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_71, 1) = ((MR_Box) ((MR_String) "assigning field from unary op"));
              }
              {
                ll_backend__var_locn__AssignCode_23 = mercury__cord__singleton_1_f_0(ll_backend__var_locn__TypeCtorInfo_57_74, ((MR_Box) (ll_backend__var_locn__Var_71)));
              }
              *ll_backend__var_locn__STATE_VARIABLE_VLI_38 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_37;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__var_locn__TypeCtorInfo_57_57 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
              MR_Word ll_backend__var_locn__Var_47;
              MR_Word ll_backend__var_locn__Var_48;

              {
                ll_backend__var_locn__EvalCode_18 = mercury__cord__empty_0_f_0(ll_backend__var_locn__TypeCtorInfo_57_57);
              }
              {
                ll_backend__var_locn__Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_48, 1) = ((MR_Box) (ll_backend__var_locn__Target_16));
                MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_48, 2) = ((MR_Box) (ll_backend__var_locn__Rval0_10));
              }
              {
                ll_backend__var_locn__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_47, 0) = ((MR_Box) (ll_backend__var_locn__Var_48));
                MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_47, 1) = ((MR_Box) ((MR_String) "assigning field from binary op"));
              }
              {
                ll_backend__var_locn__AssignCode_23 = mercury__cord__singleton_1_f_0(ll_backend__var_locn__TypeCtorInfo_57_57, ((MR_Box) (ll_backend__var_locn__Var_47)));
              }
              *ll_backend__var_locn__STATE_VARIABLE_VLI_38 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_37;
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.assign_cell_arg\'/8", (MR_String) "unknown rval");
                return;
              }
            }
            break;
        }
        break;
    }
    {
      *ll_backend__var_locn__Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__var_locn__EvalCode_18, ll_backend__var_locn__AssignCode_23);
    }
  }
}

static void MR_CALL 
ll_backend__var_locn__assign_some_cell_args_10_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2,
  MR_Word ll_backend__var_locn__HeadVar__3_3,
  MR_Word ll_backend__var_locn__Ptag_4,
  MR_Word ll_backend__var_locn__Base_5,
  MR_Integer ll_backend__var_locn__Offset_6,
  MR_Word * ll_backend__var_locn__HeadVar__7_7,
  MR_Word * ll_backend__var_locn__HeadVar__8_8,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_9,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_10)
{
  {
    MR_bool ll_backend__var_locn__succeeded;

    if ((ll_backend__var_locn__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ll_backend__var_locn__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word ll_backend__var_locn__TypeCtorInfo_95_95 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

          {
            *ll_backend__var_locn__HeadVar__7_7 = mercury__cord__empty_0_f_0(ll_backend__var_locn__TypeCtorInfo_95_95);
          }
          {
            *ll_backend__var_locn__HeadVar__8_8 = mercury__cord__empty_0_f_0(ll_backend__var_locn__TypeCtorInfo_95_95);
          }
          *ll_backend__var_locn__STATE_VARIABLE_VLI_10 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_9;
        }
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.assign_some_cell_args\'/10", (MR_String) "mismatch lists");
            return;
          }
        }
    else
      {
        MR_Word ll_backend__var_locn__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__var_locn__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 0)));

        if ((ll_backend__var_locn__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.assign_some_cell_args\'/10", (MR_String) "mismatch lists");
              return;
            }
          }
        else
          {
            MR_Word ll_backend__var_locn__NeedsUpdate_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word ll_backend__var_locn__NeedsUpdates_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word ll_backend__var_locn__ThisCode_32;
            MR_Integer ll_backend__var_locn__NextOffset_33;
            MR_Word ll_backend__var_locn__RestCannotSkipArgsCode_41;
            MR_Word ll_backend__var_locn__RestCanSkipArgsCode_42;
            MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_63_63;

            switch (MR_tag((MR_Word) ll_backend__var_locn__Var_109)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    ll_backend__var_locn__ThisCode_32 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
                  ll_backend__var_locn__NextOffset_33 = (ll_backend__var_locn__Offset_6 + (MR_Integer) 1);
                  ll_backend__var_locn__STATE_VARIABLE_VLI_63_63 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_9;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__var_locn__Rval_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_109, (MR_Integer) 0)));
                  MR_Word ll_backend__var_locn___Completeness_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_109, (MR_Integer) 1)));

                  {
                    ll_backend__var_locn__assign_cell_arg_8_p_0(ll_backend__var_locn__ModuleInfo_1, ll_backend__var_locn__Rval_29, ll_backend__var_locn__Ptag_4, ll_backend__var_locn__Base_5, ll_backend__var_locn__Offset_6, &ll_backend__var_locn__ThisCode_32, ll_backend__var_locn__STATE_VARIABLE_VLI_0_9, &ll_backend__var_locn__STATE_VARIABLE_VLI_63_63);
                  }
                  ll_backend__var_locn__NextOffset_33 = (ll_backend__var_locn__Offset_6 + (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__var_locn__TypeCtorInfo_96_96;
                  MR_Word ll_backend__var_locn__Rval0_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__var_locn__Var_109, (MR_Integer) 0)));
                  MR_Word ll_backend__var_locn__EvalCode_35;
                  MR_Word ll_backend__var_locn__RvalA_36;
                  MR_Word ll_backend__var_locn__RvalB_37;
                  MR_Word ll_backend__var_locn__ThisCodeA_38;
                  MR_Word ll_backend__var_locn__ThisCodeB_39;
                  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_47_47;
                  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_56_56;
                  MR_Integer ll_backend__var_locn__Var_57;
                  MR_Word ll_backend__var_locn__Var_60;
                  MR_Word ll_backend__var_locn__Rval_66;

                  {
                    ll_backend__var_locn__materialize_if_var_6_p_0(ll_backend__var_locn__ModuleInfo_1, ll_backend__var_locn__Rval0_34, &ll_backend__var_locn__EvalCode_35, &ll_backend__var_locn__Rval_66, ll_backend__var_locn__STATE_VARIABLE_VLI_0_9, &ll_backend__var_locn__STATE_VARIABLE_VLI_47_47);
                  }
                  {
                    ll_backend__var_locn__RvalA_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__var_locn__RvalA_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), ll_backend__var_locn__RvalA_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 54))));
                    MR_hl_field(MR_mktag(3), ll_backend__var_locn__RvalA_36, 2) = ((MR_Box) (ll_backend__var_locn__Rval_66));
                    MR_hl_field(MR_mktag(3), ll_backend__var_locn__RvalA_36, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__var_locn_scalar_common_1[10])));
                  }
                  {
                    ll_backend__var_locn__RvalB_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__var_locn__RvalB_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), ll_backend__var_locn__RvalB_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 54))));
                    MR_hl_field(MR_mktag(3), ll_backend__var_locn__RvalB_37, 2) = ((MR_Box) (ll_backend__var_locn__Rval_66));
                    MR_hl_field(MR_mktag(3), ll_backend__var_locn__RvalB_37, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__var_locn_scalar_common_1[11])));
                  }
                  {
                    ll_backend__var_locn__assign_cell_arg_8_p_0(ll_backend__var_locn__ModuleInfo_1, ll_backend__var_locn__RvalA_36, ll_backend__var_locn__Ptag_4, ll_backend__var_locn__Base_5, ll_backend__var_locn__Offset_6, &ll_backend__var_locn__ThisCodeA_38, ll_backend__var_locn__STATE_VARIABLE_VLI_47_47, &ll_backend__var_locn__STATE_VARIABLE_VLI_56_56);
                  }
                  ll_backend__var_locn__Var_57 = (ll_backend__var_locn__Offset_6 + (MR_Integer) 1);
                  {
                    ll_backend__var_locn__assign_cell_arg_8_p_0(ll_backend__var_locn__ModuleInfo_1, ll_backend__var_locn__RvalB_37, ll_backend__var_locn__Ptag_4, ll_backend__var_locn__Base_5, ll_backend__var_locn__Var_57, &ll_backend__var_locn__ThisCodeB_39, ll_backend__var_locn__STATE_VARIABLE_VLI_56_56, &ll_backend__var_locn__STATE_VARIABLE_VLI_63_63);
                  }
                  ll_backend__var_locn__TypeCtorInfo_96_96 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                  {
                    ll_backend__var_locn__Var_60 = mercury__cord__f_43_43_2_f_0(ll_backend__var_locn__TypeCtorInfo_96_96, ll_backend__var_locn__ThisCodeA_38, ll_backend__var_locn__ThisCodeB_39);
                  }
                  {
                    ll_backend__var_locn__ThisCode_32 = mercury__cord__f_43_43_2_f_0(ll_backend__var_locn__TypeCtorInfo_96_96, ll_backend__var_locn__EvalCode_35, ll_backend__var_locn__Var_60);
                  }
                  ll_backend__var_locn__NextOffset_33 = (ll_backend__var_locn__Offset_6 + (MR_Integer) 2);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ll_backend__var_locn__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_109, (MR_Integer) 1)));
                  MR_Word ll_backend__var_locn__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_109, (MR_Integer) 0)));

                  if ((ll_backend__var_locn__Var_110 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      {
                        ll_backend__var_locn__ThisCode_32 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                      }
                      ll_backend__var_locn__NextOffset_33 = (ll_backend__var_locn__Offset_6 + (MR_Integer) 1);
                      ll_backend__var_locn__STATE_VARIABLE_VLI_63_63 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_9;
                    }
                  else
                    {
                      MR_Word ll_backend__var_locn__Rval_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_110, (MR_Integer) 0)));

                      {
                        ll_backend__var_locn__assign_cell_arg_8_p_0(ll_backend__var_locn__ModuleInfo_1, ll_backend__var_locn__Rval_102, ll_backend__var_locn__Ptag_4, ll_backend__var_locn__Base_5, ll_backend__var_locn__Offset_6, &ll_backend__var_locn__ThisCode_32, ll_backend__var_locn__STATE_VARIABLE_VLI_0_9, &ll_backend__var_locn__STATE_VARIABLE_VLI_63_63);
                      }
                      ll_backend__var_locn__NextOffset_33 = (ll_backend__var_locn__Offset_6 + (MR_Integer) 1);
                    }
                }
                break;
            }
            {
              ll_backend__var_locn__assign_some_cell_args_10_p_0(ll_backend__var_locn__ModuleInfo_1, ll_backend__var_locn__Var_108, ll_backend__var_locn__NeedsUpdates_22, ll_backend__var_locn__Ptag_4, ll_backend__var_locn__Base_5, ll_backend__var_locn__NextOffset_33, &ll_backend__var_locn__RestCannotSkipArgsCode_41, &ll_backend__var_locn__RestCanSkipArgsCode_42, ll_backend__var_locn__STATE_VARIABLE_VLI_63_63, ll_backend__var_locn__STATE_VARIABLE_VLI_10);
            }
            switch (ll_backend__var_locn__NeedsUpdate_21) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  *ll_backend__var_locn__HeadVar__7_7 = ll_backend__var_locn__RestCannotSkipArgsCode_41;
                  {
                    *ll_backend__var_locn__HeadVar__8_8 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__var_locn__ThisCode_32, ll_backend__var_locn__RestCanSkipArgsCode_42);
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  {
                    *ll_backend__var_locn__HeadVar__7_7 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__var_locn__ThisCode_32, ll_backend__var_locn__RestCannotSkipArgsCode_41);
                  }
                  *ll_backend__var_locn__HeadVar__8_8 = ll_backend__var_locn__RestCanSkipArgsCode_42;
                }
                break;
            }
          }
      }
  }
}

static void MR_CALL 
ll_backend__var_locn__assign_all_cell_args_8_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2,
  MR_Word ll_backend__var_locn__Ptag_3,
  MR_Word ll_backend__var_locn__Base_4,
  MR_Integer ll_backend__var_locn__Offset_5,
  MR_Word * ll_backend__var_locn__HeadVar__6_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_7,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_8)
{
  {
    MR_bool ll_backend__var_locn__succeeded;

    if ((ll_backend__var_locn__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *ll_backend__var_locn__HeadVar__6_6 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
        *ll_backend__var_locn__STATE_VARIABLE_VLI_8 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_7;
      }
    else
      {
        MR_Word ll_backend__var_locn__CellArg_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__CellArgs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__var_locn__ThisCode_27;
        MR_Integer ll_backend__var_locn__NextOffset_28;
        MR_Word ll_backend__var_locn__RestCode_36;
        MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_57_57;

        switch (MR_tag((MR_Word) ll_backend__var_locn__CellArg_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                ll_backend__var_locn__ThisCode_27 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
              ll_backend__var_locn__NextOffset_28 = (ll_backend__var_locn__Offset_5 + (MR_Integer) 1);
              ll_backend__var_locn__STATE_VARIABLE_VLI_57_57 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_7;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__var_locn__Rval_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__CellArg_17, (MR_Integer) 0)));
              MR_Word ll_backend__var_locn___Completeness_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__CellArg_17, (MR_Integer) 1)));

              {
                ll_backend__var_locn__assign_cell_arg_8_p_0(ll_backend__var_locn__ModuleInfo_1, ll_backend__var_locn__Rval_24, ll_backend__var_locn__Ptag_3, ll_backend__var_locn__Base_4, ll_backend__var_locn__Offset_5, &ll_backend__var_locn__ThisCode_27, ll_backend__var_locn__STATE_VARIABLE_VLI_0_7, &ll_backend__var_locn__STATE_VARIABLE_VLI_57_57);
              }
              ll_backend__var_locn__NextOffset_28 = (ll_backend__var_locn__Offset_5 + (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__var_locn__TypeCtorInfo_62_62;
              MR_Word ll_backend__var_locn__Rval0_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__var_locn__CellArg_17, (MR_Integer) 0)));
              MR_Word ll_backend__var_locn__EvalCode_30;
              MR_Word ll_backend__var_locn__RvalA_31;
              MR_Word ll_backend__var_locn__RvalB_32;
              MR_Word ll_backend__var_locn__ThisCodeA_33;
              MR_Word ll_backend__var_locn__ThisCodeB_34;
              MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_41_41;
              MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_50_50;
              MR_Integer ll_backend__var_locn__Var_51;
              MR_Word ll_backend__var_locn__Var_54;
              MR_Word ll_backend__var_locn__Rval_60;

              {
                ll_backend__var_locn__materialize_if_var_6_p_0(ll_backend__var_locn__ModuleInfo_1, ll_backend__var_locn__Rval0_29, &ll_backend__var_locn__EvalCode_30, &ll_backend__var_locn__Rval_60, ll_backend__var_locn__STATE_VARIABLE_VLI_0_7, &ll_backend__var_locn__STATE_VARIABLE_VLI_41_41);
              }
              {
                ll_backend__var_locn__RvalA_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__var_locn__RvalA_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ll_backend__var_locn__RvalA_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 54))));
                MR_hl_field(MR_mktag(3), ll_backend__var_locn__RvalA_31, 2) = ((MR_Box) (ll_backend__var_locn__Rval_60));
                MR_hl_field(MR_mktag(3), ll_backend__var_locn__RvalA_31, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__var_locn_scalar_common_1[10])));
              }
              {
                ll_backend__var_locn__RvalB_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__var_locn__RvalB_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ll_backend__var_locn__RvalB_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 54))));
                MR_hl_field(MR_mktag(3), ll_backend__var_locn__RvalB_32, 2) = ((MR_Box) (ll_backend__var_locn__Rval_60));
                MR_hl_field(MR_mktag(3), ll_backend__var_locn__RvalB_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__var_locn_scalar_common_1[11])));
              }
              {
                ll_backend__var_locn__assign_cell_arg_8_p_0(ll_backend__var_locn__ModuleInfo_1, ll_backend__var_locn__RvalA_31, ll_backend__var_locn__Ptag_3, ll_backend__var_locn__Base_4, ll_backend__var_locn__Offset_5, &ll_backend__var_locn__ThisCodeA_33, ll_backend__var_locn__STATE_VARIABLE_VLI_41_41, &ll_backend__var_locn__STATE_VARIABLE_VLI_50_50);
              }
              ll_backend__var_locn__Var_51 = (ll_backend__var_locn__Offset_5 + (MR_Integer) 1);
              {
                ll_backend__var_locn__assign_cell_arg_8_p_0(ll_backend__var_locn__ModuleInfo_1, ll_backend__var_locn__RvalB_32, ll_backend__var_locn__Ptag_3, ll_backend__var_locn__Base_4, ll_backend__var_locn__Var_51, &ll_backend__var_locn__ThisCodeB_34, ll_backend__var_locn__STATE_VARIABLE_VLI_50_50, &ll_backend__var_locn__STATE_VARIABLE_VLI_57_57);
              }
              ll_backend__var_locn__TypeCtorInfo_62_62 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
              {
                ll_backend__var_locn__Var_54 = mercury__cord__f_43_43_2_f_0(ll_backend__var_locn__TypeCtorInfo_62_62, ll_backend__var_locn__ThisCodeA_33, ll_backend__var_locn__ThisCodeB_34);
              }
              {
                ll_backend__var_locn__ThisCode_27 = mercury__cord__f_43_43_2_f_0(ll_backend__var_locn__TypeCtorInfo_62_62, ll_backend__var_locn__EvalCode_30, ll_backend__var_locn__Var_54);
              }
              ll_backend__var_locn__NextOffset_28 = (ll_backend__var_locn__Offset_5 + (MR_Integer) 2);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__var_locn__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__CellArg_17, (MR_Integer) 1)));
              MR_Word ll_backend__var_locn__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__CellArg_17, (MR_Integer) 0)));

              if ((ll_backend__var_locn__Var_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    ll_backend__var_locn__ThisCode_27 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
                  ll_backend__var_locn__NextOffset_28 = (ll_backend__var_locn__Offset_5 + (MR_Integer) 1);
                  ll_backend__var_locn__STATE_VARIABLE_VLI_57_57 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_7;
                }
              else
                {
                  MR_Word ll_backend__var_locn__Rval_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_73, (MR_Integer) 0)));

                  {
                    ll_backend__var_locn__assign_cell_arg_8_p_0(ll_backend__var_locn__ModuleInfo_1, ll_backend__var_locn__Rval_67, ll_backend__var_locn__Ptag_3, ll_backend__var_locn__Base_4, ll_backend__var_locn__Offset_5, &ll_backend__var_locn__ThisCode_27, ll_backend__var_locn__STATE_VARIABLE_VLI_0_7, &ll_backend__var_locn__STATE_VARIABLE_VLI_57_57);
                  }
                  ll_backend__var_locn__NextOffset_28 = (ll_backend__var_locn__Offset_5 + (MR_Integer) 1);
                }
            }
            break;
        }
        {
          ll_backend__var_locn__assign_all_cell_args_8_p_0(ll_backend__var_locn__ModuleInfo_1, ll_backend__var_locn__CellArgs_18, ll_backend__var_locn__Ptag_3, ll_backend__var_locn__Base_4, ll_backend__var_locn__NextOffset_28, &ll_backend__var_locn__RestCode_36, ll_backend__var_locn__STATE_VARIABLE_VLI_57_57, ll_backend__var_locn__STATE_VARIABLE_VLI_8);
        }
        {
          *ll_backend__var_locn__HeadVar__6_6 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__var_locn__ThisCode_27, ll_backend__var_locn__RestCode_36);
        }
      }
  }
}

static void MR_CALL 
ll_backend__var_locn__assign_reused_cell_to_var_14_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv0_STATE_VARIABLE_VLI_9;

    {
      ll_backend__var_locn__var_locn_release_reg_3_p_0(((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2), &ll_backend__var_locn__conv0_STATE_VARIABLE_VLI_9);
    }
    *ll_backend__var_locn__wrapper_arg_3 = ((MR_Box) (ll_backend__var_locn__conv0_STATE_VARIABLE_VLI_9));
  }
}

static void MR_CALL 
ll_backend__var_locn__assign_reused_cell_to_var_14_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_15,
  MR_Word ll_backend__var_locn__Lval_16,
  MR_Integer ll_backend__var_locn__Ptag_17,
  MR_Word ll_backend__var_locn__Vector_18,
  MR_Word ll_backend__var_locn__CellToReuse_19,
  MR_Word ll_backend__var_locn__ReuseLval_20,
  MR_Word ll_backend__var_locn__ReuseVarCode_21,
  MR_Integer ll_backend__var_locn__StartOffset_22,
  MR_Word ll_backend__var_locn__Label_23,
  MR_Word * ll_backend__var_locn__MaybeReuse_24,
  MR_Word * ll_backend__var_locn__SetupReuseCode_25,
  MR_Word * ll_backend__var_locn__ArgsCode_26,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_41,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_42)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__TypeCtorInfo_78_78;
    MR_Word ll_backend__var_locn__TypeCtorInfo_81_81;
    MR_Word ll_backend__var_locn__ReuseVar_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__CellToReuse_19, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__NeedsUpdates0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__CellToReuse_19, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__SaveArgsCode_31;
    MR_Word ll_backend__var_locn__TempRegs0_32;
    MR_Word ll_backend__var_locn__TempRegs_35;
    MR_Integer ll_backend__var_locn__Padding_36;
    MR_Word ll_backend__var_locn__NeedsUpdates_37;
    MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_43_43;
    MR_Word ll_backend__var_locn__Var_47;
    MR_Word ll_backend__var_locn__Var_49;
    MR_Integer ll_backend__var_locn__Var_50;
    MR_Integer ll_backend__var_locn__Var_51;
    MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_63_63;
    MR_Word ll_backend__var_locn___ReuseConsId_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__CellToReuse_19, (MR_Integer) 1)));
    MR_Box ll_backend__var_locn__conv1_STATE_VARIABLE_VLI_42;

    {
      ll_backend__var_locn__var_locn_save_cell_fields_7_p_0(ll_backend__var_locn__ModuleInfo_15, ll_backend__var_locn__ReuseVar_28, ll_backend__var_locn__ReuseLval_20, &ll_backend__var_locn__SaveArgsCode_31, &ll_backend__var_locn__TempRegs0_32, ll_backend__var_locn__STATE_VARIABLE_VLI_0_41, &ll_backend__var_locn__STATE_VARIABLE_VLI_43_43);
    }
    ll_backend__var_locn__TypeCtorInfo_78_78 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      *ll_backend__var_locn__SetupReuseCode_25 = mercury__cord__f_43_43_2_f_0(ll_backend__var_locn__TypeCtorInfo_78_78, ll_backend__var_locn__ReuseVarCode_21, ll_backend__var_locn__SaveArgsCode_31);
    }
    {
      ll_backend__var_locn__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_49, 0) = ((MR_Box) (ll_backend__var_locn__ReuseLval_20));
    }
    {
      ll_backend__var_locn__Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_47, 1) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_47, 2) = ((MR_Box) (ll_backend__var_locn__Var_49));
    }
    {
      ll_backend__var_locn__Var_50 = mercury__list__length_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0, ll_backend__var_locn__Vector_18);
    }
    ll_backend__var_locn__TypeCtorInfo_81_81 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
    {
      ll_backend__var_locn__Var_51 = mercury__list__length_1_f_0(ll_backend__var_locn__TypeCtorInfo_81_81, ll_backend__var_locn__NeedsUpdates0_30);
    }
    ll_backend__var_locn__Padding_36 = (ll_backend__var_locn__Var_50 - ll_backend__var_locn__Var_51);
    ll_backend__var_locn__succeeded = (ll_backend__var_locn__Padding_36 >= (MR_Integer) 0);
    if (ll_backend__var_locn__succeeded)
      {
        MR_Word ll_backend__var_locn__Var_53;

        {
          ll_backend__var_locn__Var_53 = mercury__list__duplicate_2_f_0(ll_backend__var_locn__TypeCtorInfo_81_81, ll_backend__var_locn__Padding_36, ((MR_Box) ((MR_Integer) 0)));
        }
        {
          ll_backend__var_locn__NeedsUpdates_37 = mercury__list__f_43_43_2_f_0(ll_backend__var_locn__TypeCtorInfo_81_81, ll_backend__var_locn__Var_53, ll_backend__var_locn__NeedsUpdates0_30);
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.assign_reused_cell_to_var\'/14", (MR_String) "Padding < 0");
          return;
        }
      }
    {
      ll_backend__var_locn__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0, ((MR_Box) ((MR_Integer) 1)), ll_backend__var_locn__NeedsUpdates0_30);
    }
    if (ll_backend__var_locn__succeeded)
      {
        MR_Word ll_backend__var_locn__MaybeFlag_34;
        MR_Word ll_backend__var_locn__FlagLval_38;
        MR_Word ll_backend__var_locn__CannotSkipArgsCode_39;
        MR_Word ll_backend__var_locn__CanSkipArgsCode_40;
        MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_46_46;
        MR_Word ll_backend__var_locn__Var_61;
        MR_Word ll_backend__var_locn__Var_62;
        MR_Word ll_backend__var_locn__Var_64;
        MR_Word ll_backend__var_locn__Var_65;
        MR_Word ll_backend__var_locn__Var_66;
        MR_Word ll_backend__var_locn__Var_67;
        MR_Word ll_backend__var_locn__Var_68;
        MR_Word ll_backend__var_locn__Var_70;
        MR_Word ll_backend__var_locn__Var_71;
        MR_Word ll_backend__var_locn__Var_72;
        MR_Word ll_backend__var_locn__Var_73;
        MR_Word ll_backend__var_locn__Var_74;

        {
          ll_backend__var_locn__var_locn_acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__var_locn__FlagLval_38, ll_backend__var_locn__STATE_VARIABLE_VLI_43_43, &ll_backend__var_locn__STATE_VARIABLE_VLI_46_46);
        }
        {
          ll_backend__var_locn__MaybeFlag_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__var_locn__MaybeFlag_34, 0) = ((MR_Box) (ll_backend__var_locn__FlagLval_38));
        }
        {
          ll_backend__var_locn__TempRegs_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__var_locn__TempRegs_35, 0) = ((MR_Box) (ll_backend__var_locn__FlagLval_38));
          MR_hl_field(MR_mktag(1), ll_backend__var_locn__TempRegs_35, 1) = ((MR_Box) (ll_backend__var_locn__TempRegs0_32));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__var_locn__MaybeReuse_24 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__var_locn__Var_47));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__var_locn__MaybeFlag_34));
        }
        {
          ll_backend__var_locn__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_61, 0) = ((MR_Box) (ll_backend__var_locn__Ptag_17));
        }
        {
          ll_backend__var_locn__Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_62, 0) = ((MR_Box) (ll_backend__var_locn__Lval_16));
        }
        {
          ll_backend__var_locn__assign_some_cell_args_10_p_0(ll_backend__var_locn__ModuleInfo_15, ll_backend__var_locn__Vector_18, ll_backend__var_locn__NeedsUpdates_37, ll_backend__var_locn__Var_61, ll_backend__var_locn__Var_62, ll_backend__var_locn__StartOffset_22, &ll_backend__var_locn__CannotSkipArgsCode_39, &ll_backend__var_locn__CanSkipArgsCode_40, ll_backend__var_locn__STATE_VARIABLE_VLI_46_46, &ll_backend__var_locn__STATE_VARIABLE_VLI_63_63);
        }
        {
          ll_backend__var_locn__Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_67, 0) = ((MR_Box) (ll_backend__var_locn__FlagLval_38));
        }
        {
          ll_backend__var_locn__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_68, 0) = ((MR_Box) (ll_backend__var_locn__Label_23));
        }
        {
          ll_backend__var_locn__Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_66, 1) = ((MR_Box) (ll_backend__var_locn__Var_67));
          MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_66, 2) = ((MR_Box) (ll_backend__var_locn__Var_68));
        }
        {
          ll_backend__var_locn__Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_65, 0) = ((MR_Box) (ll_backend__var_locn__Var_66));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_65, 1) = ((MR_Box) ((MR_String) "skip some field assignments"));
        }
        {
          ll_backend__var_locn__Var_64 = mercury__cord__singleton_1_f_0(ll_backend__var_locn__TypeCtorInfo_78_78, ((MR_Box) (ll_backend__var_locn__Var_65)));
        }
        {
          ll_backend__var_locn__Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_74, 1) = ((MR_Box) (ll_backend__var_locn__Label_23));
        }
        {
          ll_backend__var_locn__Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_73, 0) = ((MR_Box) (ll_backend__var_locn__Var_74));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_73, 1) = ((MR_Box) ((MR_String) "past skipped field assignments"));
        }
        {
          ll_backend__var_locn__Var_72 = mercury__cord__singleton_1_f_0(ll_backend__var_locn__TypeCtorInfo_78_78, ((MR_Box) (ll_backend__var_locn__Var_73)));
        }
        {
          ll_backend__var_locn__Var_71 = mercury__cord__f_43_43_2_f_0(ll_backend__var_locn__TypeCtorInfo_78_78, ll_backend__var_locn__Var_72, ll_backend__var_locn__CannotSkipArgsCode_39);
        }
        {
          ll_backend__var_locn__Var_70 = mercury__cord__f_43_43_2_f_0(ll_backend__var_locn__TypeCtorInfo_78_78, ll_backend__var_locn__CanSkipArgsCode_40, ll_backend__var_locn__Var_71);
        }
        {
          *ll_backend__var_locn__ArgsCode_26 = mercury__cord__f_43_43_2_f_0(ll_backend__var_locn__TypeCtorInfo_78_78, ll_backend__var_locn__Var_64, ll_backend__var_locn__Var_70);
        }
      }
    else
      {
        MR_Word ll_backend__var_locn__Var_58;
        MR_Word ll_backend__var_locn__Var_59;

        ll_backend__var_locn__TempRegs_35 = ll_backend__var_locn__TempRegs0_32;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__var_locn__MaybeReuse_24 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__var_locn__Var_47));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__var_locn__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_58, 0) = ((MR_Box) (ll_backend__var_locn__Ptag_17));
        }
        {
          ll_backend__var_locn__Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_59, 0) = ((MR_Box) (ll_backend__var_locn__Lval_16));
        }
        {
          ll_backend__var_locn__assign_all_cell_args_8_p_0(ll_backend__var_locn__ModuleInfo_15, ll_backend__var_locn__Vector_18, ll_backend__var_locn__Var_58, ll_backend__var_locn__Var_59, ll_backend__var_locn__StartOffset_22, ll_backend__var_locn__ArgsCode_26, ll_backend__var_locn__STATE_VARIABLE_VLI_43_43, &ll_backend__var_locn__STATE_VARIABLE_VLI_63_63);
        }
      }
    {
      mercury__list__foldl_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0, (MR_Word) &ll_backend__var_locn_scalar_common_2[11], ll_backend__var_locn__TempRegs_35, ((MR_Box) (ll_backend__var_locn__STATE_VARIABLE_VLI_63_63)), &ll_backend__var_locn__conv1_STATE_VARIABLE_VLI_42);
    }
    *ll_backend__var_locn__STATE_VARIABLE_VLI_42 = ((MR_Word) ll_backend__var_locn__conv1_STATE_VARIABLE_VLI_42);
  }
}

static void MR_CALL 
ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_13_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_14,
  MR_Word ll_backend__var_locn__Var_15,
  MR_Word ll_backend__var_locn__ReserveWordAtStart_16,
  MR_Integer ll_backend__var_locn__Ptag_17,
  MR_Word ll_backend__var_locn__Vector_18,
  MR_Word ll_backend__var_locn__HowToConstruct_19,
  MR_Word ll_backend__var_locn__MaybeOffset_20,
  MR_Word ll_backend__var_locn__MaybeAllocId_21,
  MR_Word ll_backend__var_locn__MayUseAtomic_22,
  MR_Word ll_backend__var_locn__Label_23,
  MR_Word * ll_backend__var_locn__Code_24,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_50,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_51)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__TypeCtorInfo_87_87;
    MR_Word ll_backend__var_locn__Lval_26;
    MR_String ll_backend__var_locn__VarName_27;
    MR_Integer ll_backend__var_locn__Size_28;
    MR_Word ll_backend__var_locn__TotalOffset_30;
    MR_Integer ll_backend__var_locn__TotalSize_31;
    MR_Integer ll_backend__var_locn__StartOffset_33;
    MR_Word ll_backend__var_locn__RegionVarCode_36;
    MR_Word ll_backend__var_locn__MaybeRegionRval_37;
    MR_Word ll_backend__var_locn__MaybeReuse_38;
    MR_String ll_backend__var_locn__LldsComment_39;
    MR_Word ll_backend__var_locn__ArgsCode_40;
    MR_Word ll_backend__var_locn__SetupReuseCode_41;
    MR_Word ll_backend__var_locn__CellCode_49;
    MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_58_58;
    MR_Word ll_backend__var_locn__Var_74;
    MR_Word ll_backend__var_locn__Var_75;
    MR_Word ll_backend__var_locn__Var_76;
    MR_Word ll_backend__var_locn__Var_77;
    MR_Word ll_backend__var_locn__Var_78;
    MR_String ll_backend__var_locn__Var_79;
    MR_Word ll_backend__var_locn__Var_80;
    MR_Word ll_backend__var_locn__Var_81;

    {
      ll_backend__var_locn__check_var_is_unknown_2_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_0_50, ll_backend__var_locn__Var_15);
    }
    {
      ll_backend__var_locn__select_preferred_reg_or_stack_4_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_0_50, ll_backend__var_locn__Var_15, (MR_Integer) 0, &ll_backend__var_locn__Lval_26);
    }
    {
      ll_backend__var_locn__get_var_name_3_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_0_50, ll_backend__var_locn__Var_15, &ll_backend__var_locn__VarName_27);
    }
    {
      ll_backend__var_locn__Size_28 = ll_backend__code_util__size_of_cell_args_1_f_0(ll_backend__var_locn__Vector_18);
    }
    switch (ll_backend__var_locn__ReserveWordAtStart_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__var_locn__TotalOffset_30 = ll_backend__var_locn__MaybeOffset_20;
          ll_backend__var_locn__TotalSize_31 = ll_backend__var_locn__Size_28;
          if ((ll_backend__var_locn__MaybeOffset_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            ll_backend__var_locn__StartOffset_33 = (MR_Integer) 0;
          else
            {
              MR_Integer ll_backend__var_locn__Offset_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__MaybeOffset_20, (MR_Integer) 0)));

              ll_backend__var_locn__StartOffset_33 = ((MR_Integer) 0 - ll_backend__var_locn__Offset_32);
            }
        }
        break;
      case (MR_Integer) 1:
        {
          if ((ll_backend__var_locn__MaybeOffset_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              ll_backend__var_locn__TotalOffset_30 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__var_locn_scalar_common_6[0]);
            }
          else
            {
              {
                mercury__require__sorry_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.var_locn_assign_dynamic_cell_to_var\'/13", (MR_String) "accurate GC combined with term size profiling");
                return;
              }
            }
          ll_backend__var_locn__TotalSize_31 = (ll_backend__var_locn__Size_28 + (MR_Integer) 1);
          ll_backend__var_locn__StartOffset_33 = (MR_Integer) 0;
        }
        break;
    }
    {
      ll_backend__var_locn__var_locn_set_magic_var_location_4_p_0(ll_backend__var_locn__Var_15, ll_backend__var_locn__Lval_26, ll_backend__var_locn__STATE_VARIABLE_VLI_0_50, &ll_backend__var_locn__STATE_VARIABLE_VLI_58_58);
    }
    switch (MR_tag((MR_Word) ll_backend__var_locn__HowToConstruct_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__var_locn__HowToConstruct_19)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__var_locn__TypeCtorInfo_84_84 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
              MR_Word ll_backend__var_locn__Var_64;
              MR_Word ll_backend__var_locn__Var_65;

              {
                ll_backend__var_locn__RegionVarCode_36 = mercury__cord__empty_0_f_0(ll_backend__var_locn__TypeCtorInfo_84_84);
              }
              ll_backend__var_locn__MaybeRegionRval_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              ll_backend__var_locn__LldsComment_39 = (MR_String) "Allocating heap for ";
              {
                ll_backend__var_locn__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_64, 0) = ((MR_Box) (ll_backend__var_locn__Ptag_17));
              }
              {
                ll_backend__var_locn__Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_65, 0) = ((MR_Box) (ll_backend__var_locn__Lval_26));
              }
              {
                ll_backend__var_locn__assign_all_cell_args_8_p_0(ll_backend__var_locn__ModuleInfo_14, ll_backend__var_locn__Vector_18, ll_backend__var_locn__Var_64, ll_backend__var_locn__Var_65, ll_backend__var_locn__StartOffset_33, &ll_backend__var_locn__ArgsCode_40, ll_backend__var_locn__STATE_VARIABLE_VLI_58_58, ll_backend__var_locn__STATE_VARIABLE_VLI_51);
              }
              {
                ll_backend__var_locn__SetupReuseCode_41 = mercury__cord__empty_0_f_0(ll_backend__var_locn__TypeCtorInfo_84_84);
              }
              ll_backend__var_locn__MaybeReuse_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__var_locn__TypeCtorInfo_83_83 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
              MR_Word ll_backend__var_locn__Var_67;
              MR_Word ll_backend__var_locn__Var_68;

              {
                ll_backend__var_locn__RegionVarCode_36 = mercury__cord__empty_0_f_0(ll_backend__var_locn__TypeCtorInfo_83_83);
              }
              ll_backend__var_locn__MaybeRegionRval_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              ll_backend__var_locn__LldsComment_39 = (MR_String) "Allocating heap for ";
              {
                ll_backend__var_locn__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_67, 0) = ((MR_Box) (ll_backend__var_locn__Ptag_17));
              }
              {
                ll_backend__var_locn__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_68, 0) = ((MR_Box) (ll_backend__var_locn__Lval_26));
              }
              {
                ll_backend__var_locn__assign_all_cell_args_8_p_0(ll_backend__var_locn__ModuleInfo_14, ll_backend__var_locn__Vector_18, ll_backend__var_locn__Var_67, ll_backend__var_locn__Var_68, ll_backend__var_locn__StartOffset_33, &ll_backend__var_locn__ArgsCode_40, ll_backend__var_locn__STATE_VARIABLE_VLI_58_58, ll_backend__var_locn__STATE_VARIABLE_VLI_51);
              }
              {
                ll_backend__var_locn__SetupReuseCode_41 = mercury__cord__empty_0_f_0(ll_backend__var_locn__TypeCtorInfo_83_83);
              }
              ll_backend__var_locn__MaybeReuse_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__var_locn__CellToReuse_42 = (MR_Word) MR_body(((MR_Word) ll_backend__var_locn__HowToConstruct_19), (MR_Integer) 1);
          MR_Word ll_backend__var_locn__ReuseVar_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__CellToReuse_42, (MR_Integer) 0)));
          MR_Word ll_backend__var_locn__ReuseRval_46;
          MR_Word ll_backend__var_locn__ReuseVarCode_47;
          MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_59_59;
          MR_Word ll_backend__var_locn___ReuseConsId_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__CellToReuse_42, (MR_Integer) 1)));
          MR_Word ll_backend__var_locn___NeedsUpdates0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__CellToReuse_42, (MR_Integer) 2)));
          MR_Word ll_backend__var_locn__ReuseLval_48;

          {
            ll_backend__var_locn__var_locn_produce_var_6_p_0(ll_backend__var_locn__ModuleInfo_14, ll_backend__var_locn__ReuseVar_43, &ll_backend__var_locn__ReuseRval_46, &ll_backend__var_locn__ReuseVarCode_47, ll_backend__var_locn__STATE_VARIABLE_VLI_58_58, &ll_backend__var_locn__STATE_VARIABLE_VLI_59_59);
          }
          ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__ReuseRval_46)) == (MR_mktag((MR_Integer) 0)));
          if (ll_backend__var_locn__succeeded)
            {
              ll_backend__var_locn__ReuseLval_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__ReuseRval_46, (MR_Integer) 0)));
              ll_backend__var_locn__LldsComment_39 = (MR_String) "Reusing cell on heap for ";
              {
                ll_backend__var_locn__assign_reused_cell_to_var_14_p_0(ll_backend__var_locn__ModuleInfo_14, ll_backend__var_locn__Lval_26, ll_backend__var_locn__Ptag_17, ll_backend__var_locn__Vector_18, ll_backend__var_locn__CellToReuse_42, ll_backend__var_locn__ReuseLval_48, ll_backend__var_locn__ReuseVarCode_47, ll_backend__var_locn__StartOffset_33, ll_backend__var_locn__Label_23, &ll_backend__var_locn__MaybeReuse_38, &ll_backend__var_locn__SetupReuseCode_41, &ll_backend__var_locn__ArgsCode_40, ll_backend__var_locn__STATE_VARIABLE_VLI_59_59, ll_backend__var_locn__STATE_VARIABLE_VLI_51);
              }
              ll_backend__var_locn__MaybeRegionRval_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                ll_backend__var_locn__RegionVarCode_36 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
            }
          else
            {
              MR_Word ll_backend__var_locn__TypeCtorInfo_86_86 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
              MR_Word ll_backend__var_locn__Var_61;
              MR_Word ll_backend__var_locn__Var_62;

              {
                ll_backend__var_locn__RegionVarCode_36 = mercury__cord__empty_0_f_0(ll_backend__var_locn__TypeCtorInfo_86_86);
              }
              ll_backend__var_locn__MaybeRegionRval_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              ll_backend__var_locn__LldsComment_39 = (MR_String) "Allocating heap for ";
              {
                ll_backend__var_locn__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_61, 0) = ((MR_Box) (ll_backend__var_locn__Ptag_17));
              }
              {
                ll_backend__var_locn__Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_62, 0) = ((MR_Box) (ll_backend__var_locn__Lval_26));
              }
              {
                ll_backend__var_locn__assign_all_cell_args_8_p_0(ll_backend__var_locn__ModuleInfo_14, ll_backend__var_locn__Vector_18, ll_backend__var_locn__Var_61, ll_backend__var_locn__Var_62, ll_backend__var_locn__StartOffset_33, &ll_backend__var_locn__ArgsCode_40, ll_backend__var_locn__STATE_VARIABLE_VLI_59_59, ll_backend__var_locn__STATE_VARIABLE_VLI_51);
              }
              {
                ll_backend__var_locn__SetupReuseCode_41 = mercury__cord__empty_0_f_0(ll_backend__var_locn__TypeCtorInfo_86_86);
              }
              ll_backend__var_locn__MaybeReuse_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__var_locn__RegionVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__var_locn__HowToConstruct_19, (MR_Integer) 0)));
          MR_Word ll_backend__var_locn__RegionRval_35;
          MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_70_70;
          MR_Word ll_backend__var_locn__Var_71;
          MR_Word ll_backend__var_locn__Var_72;

          {
            ll_backend__var_locn__var_locn_produce_var_6_p_0(ll_backend__var_locn__ModuleInfo_14, ll_backend__var_locn__RegionVar_34, &ll_backend__var_locn__RegionRval_35, &ll_backend__var_locn__RegionVarCode_36, ll_backend__var_locn__STATE_VARIABLE_VLI_58_58, &ll_backend__var_locn__STATE_VARIABLE_VLI_70_70);
          }
          {
            ll_backend__var_locn__MaybeRegionRval_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__var_locn__MaybeRegionRval_37, 0) = ((MR_Box) (ll_backend__var_locn__RegionRval_35));
          }
          ll_backend__var_locn__MaybeReuse_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ll_backend__var_locn__LldsComment_39 = (MR_String) "Allocating region for ";
          {
            ll_backend__var_locn__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_71, 0) = ((MR_Box) (ll_backend__var_locn__Ptag_17));
          }
          {
            ll_backend__var_locn__Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_72, 0) = ((MR_Box) (ll_backend__var_locn__Lval_26));
          }
          {
            ll_backend__var_locn__assign_all_cell_args_8_p_0(ll_backend__var_locn__ModuleInfo_14, ll_backend__var_locn__Vector_18, ll_backend__var_locn__Var_71, ll_backend__var_locn__Var_72, ll_backend__var_locn__StartOffset_33, &ll_backend__var_locn__ArgsCode_40, ll_backend__var_locn__STATE_VARIABLE_VLI_70_70, ll_backend__var_locn__STATE_VARIABLE_VLI_51);
          }
          {
            ll_backend__var_locn__SetupReuseCode_41 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
        }
        break;
    }
    ll_backend__var_locn__TypeCtorInfo_87_87 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__var_locn__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_76, 0) = ((MR_Box) (ll_backend__var_locn__Ptag_17));
    }
    {
      ll_backend__var_locn__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_78, 0) = ((MR_Box) (ll_backend__var_locn__TotalSize_31));
    }
    {
      ll_backend__var_locn__Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_77, 1) = ((MR_Box) (ll_backend__var_locn__Var_78));
    }
    {
      ll_backend__var_locn__Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
      MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_75, 1) = ((MR_Box) (ll_backend__var_locn__Lval_26));
      MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_75, 2) = ((MR_Box) (ll_backend__var_locn__Var_76));
      MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_75, 3) = ((MR_Box) (ll_backend__var_locn__TotalOffset_30));
      MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_75, 4) = ((MR_Box) (ll_backend__var_locn__Var_77));
      MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_75, 5) = ((MR_Box) (ll_backend__var_locn__MaybeAllocId_21));
      MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_75, 6) = ((MR_Box) (ll_backend__var_locn__MayUseAtomic_22));
      MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_75, 7) = ((MR_Box) (ll_backend__var_locn__MaybeRegionRval_37));
      MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_75, 8) = ((MR_Box) (ll_backend__var_locn__MaybeReuse_38));
    }
    {
      ll_backend__var_locn__Var_79 = mercury__string__f_43_43_2_f_0(ll_backend__var_locn__LldsComment_39, ll_backend__var_locn__VarName_27);
    }
    {
      ll_backend__var_locn__Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_74, 0) = ((MR_Box) (ll_backend__var_locn__Var_75));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_74, 1) = ((MR_Box) (ll_backend__var_locn__Var_79));
    }
    {
      ll_backend__var_locn__CellCode_49 = mercury__cord__singleton_1_f_0(ll_backend__var_locn__TypeCtorInfo_87_87, ((MR_Box) (ll_backend__var_locn__Var_74)));
    }
    {
      ll_backend__var_locn__Var_81 = mercury__cord__f_43_43_2_f_0(ll_backend__var_locn__TypeCtorInfo_87_87, ll_backend__var_locn__RegionVarCode_36, ll_backend__var_locn__ArgsCode_40);
    }
    {
      ll_backend__var_locn__Var_80 = mercury__cord__f_43_43_2_f_0(ll_backend__var_locn__TypeCtorInfo_87_87, ll_backend__var_locn__CellCode_49, ll_backend__var_locn__Var_81);
    }
    {
      *ll_backend__var_locn__Code_24 = mercury__cord__f_43_43_2_f_0(ll_backend__var_locn__TypeCtorInfo_87_87, ll_backend__var_locn__SetupReuseCode_41, ll_backend__var_locn__Var_80);
    }
  }
}

static void MR_CALL 
ll_backend__var_locn__clobber_old_lval_4_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv1_STATE_VARIABLE_VarStateMap_13;

    {
      ll_backend__var_locn__clobber_lval_in_var_state_map_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2), &ll_backend__var_locn__conv1_STATE_VARIABLE_VarStateMap_13);
    }
    *ll_backend__var_locn__wrapper_arg_3 = ((MR_Box) (ll_backend__var_locn__conv1_STATE_VARIABLE_VarStateMap_13));
  }
}

static void MR_CALL 
ll_backend__var_locn__clobber_old_lval_4_p_0(
  MR_Word ll_backend__var_locn__Var_5,
  MR_Word ll_backend__var_locn__Lval_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_8,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_9)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Var_10;
    MR_Word ll_backend__var_locn__LocVarMap1_18;
    MR_Word ll_backend__var_locn__Var_39;
    MR_Word ll_backend__var_locn__Var_40;
    MR_Word ll_backend__var_locn__Var_41;
    MR_Word ll_backend__var_locn__Var_42;
    MR_Word ll_backend__var_locn__Var_43;
    MR_Integer ll_backend__var_locn__Var_44;
    MR_Integer ll_backend__var_locn__Var_45;
    MR_Word ll_backend__var_locn__Var_46;
    MR_Word ll_backend__var_locn__Var_47;
    MR_Integer ll_backend__var_locn__Var_48;
    MR_Integer ll_backend__var_locn__Var_49;
    MR_Word ll_backend__var_locn__Var_50;
    MR_Word ll_backend__var_locn__DependentVarsSet_19;
    MR_Box ll_backend__var_locn__conv0_DependentVarsSet_19;

    {
      ll_backend__var_locn__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_10, 0) = ((MR_Box) (ll_backend__var_locn__Var_5));
      MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    ll_backend__var_locn__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 0)));
    ll_backend__var_locn__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 1)));
    ll_backend__var_locn__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 2)));
    ll_backend__var_locn__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 3)));
    ll_backend__var_locn__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 4)));
    ll_backend__var_locn__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 5)));
    ll_backend__var_locn__Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 6)));
    ll_backend__var_locn__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 7)));
    ll_backend__var_locn__LocVarMap1_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 8)));
    ll_backend__var_locn__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 9)));
    ll_backend__var_locn__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 10)));
    ll_backend__var_locn__Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 11)));
    ll_backend__var_locn__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 12)));
    {
      ll_backend__var_locn__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__var_locn_scalar_common_1[1], ll_backend__var_locn__LocVarMap1_18, ((MR_Box) (ll_backend__var_locn__Lval_6)), &ll_backend__var_locn__conv0_DependentVarsSet_19);
    }
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__DependentVarsSet_19 = ((MR_Word) ll_backend__var_locn__conv0_DependentVarsSet_19);
        ll_backend__var_locn__succeeded = MR_TRUE;
      }
    if (ll_backend__var_locn__succeeded)
      {
        MR_Word ll_backend__var_locn__DependentVars_20;
        MR_Word ll_backend__var_locn__LocVarMap_21;
        MR_Word ll_backend__var_locn__VarStateMap2_22;
        MR_Word ll_backend__var_locn__VarStateMap_23;
        MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_16_24;
        MR_Word ll_backend__var_locn__Var_25;
        MR_Word ll_backend__var_locn__Var_53;
        MR_Word ll_backend__var_locn__Var_54;
        MR_Word ll_backend__var_locn__Var_55;
        MR_Word ll_backend__var_locn__Var_56;
        MR_Word ll_backend__var_locn__Var_57;
        MR_Integer ll_backend__var_locn__Var_58;
        MR_Integer ll_backend__var_locn__Var_59;
        MR_Word ll_backend__var_locn__Var_62;
        MR_Integer ll_backend__var_locn__Var_63;
        MR_Integer ll_backend__var_locn__Var_64;
        MR_Word ll_backend__var_locn__Var_65;
        MR_Word ll_backend__var_locn__Var_61;
        MR_Box ll_backend__var_locn__conv2_VarStateMap_23;
        MR_Word ll_backend__var_locn__Var_81;
        MR_Word ll_backend__var_locn__Var_82;
        MR_Word ll_backend__var_locn__Var_83;
        MR_Word ll_backend__var_locn__Var_84;
        MR_Word ll_backend__var_locn__Var_85;
        MR_Integer ll_backend__var_locn__Var_86;
        MR_Integer ll_backend__var_locn__Var_87;
        MR_Word ll_backend__var_locn__Var_89;
        MR_Word ll_backend__var_locn__Var_90;
        MR_Integer ll_backend__var_locn__Var_91;
        MR_Integer ll_backend__var_locn__Var_92;
        MR_Word ll_backend__var_locn__Var_93;
        MR_Word ll_backend__var_locn__Var_88;

        {
          parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__var_locn__DependentVarsSet_19, &ll_backend__var_locn__DependentVars_20);
        }
        {
          mercury__map__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__var_locn_scalar_common_1[1], ((MR_Box) (ll_backend__var_locn__Lval_6)), ll_backend__var_locn__LocVarMap1_18, &ll_backend__var_locn__LocVarMap_21);
        }
        ll_backend__var_locn__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 0)));
        ll_backend__var_locn__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 1)));
        ll_backend__var_locn__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 2)));
        ll_backend__var_locn__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 3)));
        ll_backend__var_locn__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 4)));
        ll_backend__var_locn__Var_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 5)));
        ll_backend__var_locn__Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 6)));
        ll_backend__var_locn__VarStateMap2_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 7)));
        ll_backend__var_locn__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 8)));
        ll_backend__var_locn__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 9)));
        ll_backend__var_locn__Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 10)));
        ll_backend__var_locn__Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 11)));
        ll_backend__var_locn__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 12)));
        {
          ll_backend__var_locn__STATE_VARIABLE_VLI_16_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, 0) = ((MR_Box) (ll_backend__var_locn__Var_53));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, 1) = ((MR_Box) (ll_backend__var_locn__Var_54));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, 2) = ((MR_Box) (ll_backend__var_locn__Var_55));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, 3) = ((MR_Box) (ll_backend__var_locn__Var_56));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, 4) = ((MR_Box) (ll_backend__var_locn__Var_57));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, 5) = ((MR_Box) (ll_backend__var_locn__Var_58));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, 6) = ((MR_Box) (ll_backend__var_locn__Var_59));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, 7) = ((MR_Box) (ll_backend__var_locn__VarStateMap2_22));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, 8) = ((MR_Box) (ll_backend__var_locn__LocVarMap_21));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, 9) = ((MR_Box) (ll_backend__var_locn__Var_62));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, 10) = ((MR_Box) (ll_backend__var_locn__Var_63));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, 11) = ((MR_Box) (ll_backend__var_locn__Var_64));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, 12) = ((MR_Box) (ll_backend__var_locn__Var_65));
        }
        {
          ll_backend__var_locn__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_25, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_25, 1) = ((MR_Box) (ll_backend__var_locn__clobber_old_lval_4_p_0_1));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_25, 3) = ((MR_Box) (ll_backend__var_locn__Lval_6));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_25, 4) = ((MR_Box) (ll_backend__var_locn__Var_10));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_25, 5) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn_scalar_common_2[3], ll_backend__var_locn__Var_25, ll_backend__var_locn__DependentVars_20, ((MR_Box) (ll_backend__var_locn__VarStateMap2_22)), &ll_backend__var_locn__conv2_VarStateMap_23);
        }
        ll_backend__var_locn__VarStateMap_23 = ((MR_Word) ll_backend__var_locn__conv2_VarStateMap_23);
        ll_backend__var_locn__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, (MR_Integer) 0)));
        ll_backend__var_locn__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, (MR_Integer) 1)));
        ll_backend__var_locn__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, (MR_Integer) 2)));
        ll_backend__var_locn__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, (MR_Integer) 3)));
        ll_backend__var_locn__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, (MR_Integer) 4)));
        ll_backend__var_locn__Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, (MR_Integer) 5)));
        ll_backend__var_locn__Var_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, (MR_Integer) 6)));
        ll_backend__var_locn__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, (MR_Integer) 7)));
        ll_backend__var_locn__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, (MR_Integer) 8)));
        ll_backend__var_locn__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, (MR_Integer) 9)));
        ll_backend__var_locn__Var_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, (MR_Integer) 10)));
        ll_backend__var_locn__Var_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, (MR_Integer) 11)));
        ll_backend__var_locn__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_24, (MR_Integer) 12)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
          *ll_backend__var_locn__STATE_VARIABLE_VLI_9 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__var_locn__Var_81));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__var_locn__Var_82));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__var_locn__Var_83));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__var_locn__Var_84));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__var_locn__Var_85));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__var_locn__Var_86));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__var_locn__Var_87));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__var_locn__VarStateMap_23));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__var_locn__Var_89));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ll_backend__var_locn__Var_90));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ll_backend__var_locn__Var_91));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ll_backend__var_locn__Var_92));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ll_backend__var_locn__Var_93));
        }
      }
    else
      *ll_backend__var_locn__STATE_VARIABLE_VLI_9 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_8;
  }
}

static void MR_CALL 
ll_backend__var_locn__add_use_ref_4_p_0(
  MR_Word ll_backend__var_locn__ContainedVar_5,
  MR_Word ll_backend__var_locn__UsingVar_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_16,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VarStateMap_17)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__TypeInfo_19_19 = (MR_Word) &ll_backend__var_locn_scalar_common_1[0];
    MR_Word ll_backend__var_locn__TypeCtorInfo_20_20 = (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0;
    MR_Word ll_backend__var_locn__State0_8;
    MR_Word ll_backend__var_locn__Lvals_9;
    MR_Word ll_backend__var_locn__MaybeConstRval_10;
    MR_Word ll_backend__var_locn__MaybeExprRval_11;
    MR_Word ll_backend__var_locn__Using0_12;
    MR_Word ll_backend__var_locn__DeadOrAlive_13;
    MR_Word ll_backend__var_locn__Using_14;
    MR_Word ll_backend__var_locn__State_15;
    MR_Box ll_backend__var_locn__conv0_State0_8;

    {
      mercury__map__lookup_3_p_0(ll_backend__var_locn__TypeInfo_19_19, ll_backend__var_locn__TypeCtorInfo_20_20, ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_16, ((MR_Box) (ll_backend__var_locn__ContainedVar_5)), &ll_backend__var_locn__conv0_State0_8);
    }
    ll_backend__var_locn__State0_8 = ((MR_Word) ll_backend__var_locn__conv0_State0_8);
    ll_backend__var_locn__Lvals_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_8, (MR_Integer) 0)));
    ll_backend__var_locn__MaybeConstRval_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_8, (MR_Integer) 1)));
    ll_backend__var_locn__MaybeExprRval_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_8, (MR_Integer) 2)));
    ll_backend__var_locn__Using0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_8, (MR_Integer) 3)));
    ll_backend__var_locn__DeadOrAlive_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_8, (MR_Integer) 4)));
    {
      parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__var_locn__UsingVar_6, ll_backend__var_locn__Using0_12, &ll_backend__var_locn__Using_14);
    }
    {
      ll_backend__var_locn__State_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_15, 0) = ((MR_Box) (ll_backend__var_locn__Lvals_9));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_15, 1) = ((MR_Box) (ll_backend__var_locn__MaybeConstRval_10));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_15, 2) = ((MR_Box) (ll_backend__var_locn__MaybeExprRval_11));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_15, 3) = ((MR_Box) (ll_backend__var_locn__Using_14));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_15, 4) = ((MR_Box) (ll_backend__var_locn__DeadOrAlive_13));
    }
    {
      mercury__map__det_update_4_p_0(ll_backend__var_locn__TypeInfo_19_19, ll_backend__var_locn__TypeCtorInfo_20_20, ((MR_Box) (ll_backend__var_locn__ContainedVar_5)), ((MR_Box) (ll_backend__var_locn__State_15)), ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_16, ll_backend__var_locn__STATE_VARIABLE_VarStateMap_17);
    }
  }
}

static void MR_CALL 
ll_backend__var_locn__add_use_refs_4_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__UsingVar_2,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_3,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VarStateMap_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__var_locn__succeeded;

        if ((ll_backend__var_locn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__var_locn__STATE_VARIABLE_VarStateMap_4 = ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_3;
        else
          {
            MR_Word ll_backend__var_locn__TypeInfo_19_31 = (MR_Word) &ll_backend__var_locn_scalar_common_1[0];
            MR_Word ll_backend__var_locn__TypeCtorInfo_20_32 = (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0;
            MR_Word ll_backend__var_locn__ContainedVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__var_locn__ContainedVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__var_locn__STATE_VARIABLE_VarStateMap_15_15;
            MR_Word ll_backend__var_locn__State0_22;
            MR_Word ll_backend__var_locn__Lvals_23;
            MR_Word ll_backend__var_locn__MaybeConstRval_24;
            MR_Word ll_backend__var_locn__MaybeExprRval_25;
            MR_Word ll_backend__var_locn__Using0_26;
            MR_Word ll_backend__var_locn__DeadOrAlive_27;
            MR_Word ll_backend__var_locn__Using_28;
            MR_Word ll_backend__var_locn__State_29;
            MR_Box ll_backend__var_locn__conv0_State0_22;

            {
              mercury__map__lookup_3_p_0(ll_backend__var_locn__TypeInfo_19_31, ll_backend__var_locn__TypeCtorInfo_20_32, ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_3, ((MR_Box) (ll_backend__var_locn__ContainedVar_9)), &ll_backend__var_locn__conv0_State0_22);
            }
            ll_backend__var_locn__State0_22 = ((MR_Word) ll_backend__var_locn__conv0_State0_22);
            ll_backend__var_locn__Lvals_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_22, (MR_Integer) 0)));
            ll_backend__var_locn__MaybeConstRval_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_22, (MR_Integer) 1)));
            ll_backend__var_locn__MaybeExprRval_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_22, (MR_Integer) 2)));
            ll_backend__var_locn__Using0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_22, (MR_Integer) 3)));
            ll_backend__var_locn__DeadOrAlive_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_22, (MR_Integer) 4)));
            {
              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__var_locn__UsingVar_2, ll_backend__var_locn__Using0_26, &ll_backend__var_locn__Using_28);
            }
            {
              ll_backend__var_locn__State_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_29, 0) = ((MR_Box) (ll_backend__var_locn__Lvals_23));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_29, 1) = ((MR_Box) (ll_backend__var_locn__MaybeConstRval_24));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_29, 2) = ((MR_Box) (ll_backend__var_locn__MaybeExprRval_25));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_29, 3) = ((MR_Box) (ll_backend__var_locn__Using_28));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_29, 4) = ((MR_Box) (ll_backend__var_locn__DeadOrAlive_27));
            }
            {
              mercury__map__det_update_4_p_0(ll_backend__var_locn__TypeInfo_19_31, ll_backend__var_locn__TypeCtorInfo_20_32, ((MR_Box) (ll_backend__var_locn__ContainedVar_9)), ((MR_Box) (ll_backend__var_locn__State_29)), ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_3, &ll_backend__var_locn__STATE_VARIABLE_VarStateMap_15_15);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__var_locn__next_value_of_HeadVar__1_1 = ll_backend__var_locn__ContainedVars_10;
              MR_Word ll_backend__var_locn__next_value_of_STATE_VARIABLE_VarStateMap_0_3 = ll_backend__var_locn__STATE_VARIABLE_VarStateMap_15_15;

              ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_3 = ll_backend__var_locn__next_value_of_STATE_VARIABLE_VarStateMap_0_3;
              ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
ll_backend__var_locn__add_field_offset_3_f_0(
  MR_Word ll_backend__var_locn__Ptag_5,
  MR_Word ll_backend__var_locn__Offset_6,
  MR_Word ll_backend__var_locn__Base_7)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__HeadVar__4_4;
    MR_Word ll_backend__var_locn__Var_8;

    {
      ll_backend__var_locn__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_8, 0) = ((MR_Box) (ll_backend__var_locn__Base_7));
    }
    {
      ll_backend__var_locn__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__var_locn__HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), ll_backend__var_locn__HeadVar__4_4, 1) = ((MR_Box) (ll_backend__var_locn__Ptag_5));
      MR_hl_field(MR_mktag(3), ll_backend__var_locn__HeadVar__4_4, 2) = ((MR_Box) (ll_backend__var_locn__Var_8));
      MR_hl_field(MR_mktag(3), ll_backend__var_locn__HeadVar__4_4, 3) = ((MR_Box) (ll_backend__var_locn__Offset_6));
    }
    return ll_backend__var_locn__HeadVar__4_4;
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__VarStateMap_2,
  MR_Word ll_backend__var_locn__OkToDeleteVars_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__var_locn__succeeded;

        if ((ll_backend__var_locn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ll_backend__var_locn__succeeded = MR_TRUE;
        else
          {
            MR_Word ll_backend__var_locn__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__var_locn__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 1)));

            {
              ll_backend__var_locn__succeeded = mercury__list__member_2_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], ((MR_Box) (ll_backend__var_locn__Var_6)), ll_backend__var_locn__OkToDeleteVars_3);
            }
            if (!(ll_backend__var_locn__succeeded))
              {
                MR_Word ll_backend__var_locn__TypeCtorInfo_20_20;
                MR_Word ll_backend__var_locn__State_10;
                MR_Word ll_backend__var_locn__Using_14;
                MR_Word ll_backend__var_locn__DeadOrAlive_15;
                MR_Word ll_backend__var_locn__UsingVars_16;
                MR_Box ll_backend__var_locn__conv0_State_10;
                MR_Word ll_backend__var_locn__Var_11;
                MR_Word ll_backend__var_locn__Var_12;
                MR_Word ll_backend__var_locn__Var_13;

                {
                  mercury__map__lookup_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, ll_backend__var_locn__VarStateMap_2, ((MR_Box) (ll_backend__var_locn__Var_6)), &ll_backend__var_locn__conv0_State_10);
                }
                ll_backend__var_locn__State_10 = ((MR_Word) ll_backend__var_locn__conv0_State_10);
                ll_backend__var_locn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_10, (MR_Integer) 0)));
                ll_backend__var_locn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_10, (MR_Integer) 1)));
                ll_backend__var_locn__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_10, (MR_Integer) 2)));
                ll_backend__var_locn__Using_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_10, (MR_Integer) 3)));
                ll_backend__var_locn__DeadOrAlive_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_10, (MR_Integer) 4)));
                ll_backend__var_locn__succeeded = (ll_backend__var_locn__DeadOrAlive_15 == (MR_Integer) 0);
                if (ll_backend__var_locn__succeeded)
                  {
                    ll_backend__var_locn__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    {
                      parse_tree__set_of_var__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_20_20, ll_backend__var_locn__Using_14, &ll_backend__var_locn__UsingVars_16);
                    }
                    {
                      ll_backend__var_locn__succeeded = ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_p_0(ll_backend__var_locn__UsingVars_16, ll_backend__var_locn__VarStateMap_2, ll_backend__var_locn__OkToDeleteVars_3);
                    }
                  }
              }
            if (ll_backend__var_locn__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__var_locn__next_value_of_HeadVar__1_1 = ll_backend__var_locn__Vars_7;

                  ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return ll_backend__var_locn__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__lval_does_not_support_lval_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_p_0(
  MR_Word ll_backend__var_locn__Lval_7,
  MR_Word ll_backend__var_locn__OkToDeleteVars_8,
  MR_Word ll_backend__var_locn__OkToDeleteAny_9,
  MR_Word ll_backend__var_locn__Var_10,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_21,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VarStateMap_22)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__TypeInfo_25_25 = (MR_Word) &ll_backend__var_locn_scalar_common_1[0];
    MR_Word ll_backend__var_locn__TypeCtorInfo_26_26 = (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0;
    MR_Word ll_backend__var_locn__State0_12;
    MR_Word ll_backend__var_locn__LvalSet0_13;
    MR_Word ll_backend__var_locn__MaybeConstRval_14;
    MR_Word ll_backend__var_locn__MaybeExprRval_15;
    MR_Word ll_backend__var_locn__Using_16;
    MR_Word ll_backend__var_locn__DeadOrAlive_17;
    MR_Word ll_backend__var_locn__LvalSet_18;
    MR_Word ll_backend__var_locn__State_19;
    MR_Word ll_backend__var_locn__Var_23;
    MR_Box ll_backend__var_locn__conv0_State0_12;

    {
      mercury__map__lookup_3_p_0(ll_backend__var_locn__TypeInfo_25_25, ll_backend__var_locn__TypeCtorInfo_26_26, ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_21, ((MR_Box) (ll_backend__var_locn__Var_10)), &ll_backend__var_locn__conv0_State0_12);
    }
    ll_backend__var_locn__State0_12 = ((MR_Word) ll_backend__var_locn__conv0_State0_12);
    ll_backend__var_locn__LvalSet0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_12, (MR_Integer) 0)));
    ll_backend__var_locn__MaybeConstRval_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_12, (MR_Integer) 1)));
    ll_backend__var_locn__MaybeExprRval_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_12, (MR_Integer) 2)));
    ll_backend__var_locn__Using_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_12, (MR_Integer) 3)));
    ll_backend__var_locn__DeadOrAlive_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_12, (MR_Integer) 4)));
    {
      ll_backend__var_locn__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_23, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_23, 1) = ((MR_Box) (ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_23, 3) = ((MR_Box) (ll_backend__var_locn__Lval_7));
    }
    {
      ll_backend__var_locn__LvalSet_18 = mercury__set__filter_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__var_locn__Var_23, ll_backend__var_locn__LvalSet0_13);
    }
    {
      ll_backend__var_locn__State_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_19, 0) = ((MR_Box) (ll_backend__var_locn__LvalSet_18));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_19, 1) = ((MR_Box) (ll_backend__var_locn__MaybeConstRval_14));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_19, 2) = ((MR_Box) (ll_backend__var_locn__MaybeExprRval_15));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_19, 3) = ((MR_Box) (ll_backend__var_locn__Using_16));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_19, 4) = ((MR_Box) (ll_backend__var_locn__DeadOrAlive_17));
    }
    {
      MR_Word ll_backend__var_locn__LvalSet_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_19, (MR_Integer) 0)));
      MR_Word ll_backend__var_locn__MaybeConstRval_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_19, (MR_Integer) 1)));
      MR_Word ll_backend__var_locn__MaybeExprRval_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_19, (MR_Integer) 2)));
      MR_Word ll_backend__var_locn__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_19, (MR_Integer) 3)));
      MR_Word ll_backend__var_locn__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_19, (MR_Integer) 4)));

      {
        ll_backend__var_locn__succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__var_locn__LvalSet_31);
      }
      if (!(ll_backend__var_locn__succeeded))
        {
          {
            MR_Word ll_backend__var_locn__Var_36;

            ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__MaybeConstRval_32)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__var_locn__succeeded)
              ll_backend__var_locn__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__MaybeConstRval_32, (MR_Integer) 0)));
          }
          if (!(ll_backend__var_locn__succeeded))
            {
              MR_Word ll_backend__var_locn__Var_37;

              ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__MaybeExprRval_33)) == (MR_mktag((MR_Integer) 1)));
              if (ll_backend__var_locn__succeeded)
                ll_backend__var_locn__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__MaybeExprRval_33, (MR_Integer) 0)));
            }
        }
    }
    if (!(ll_backend__var_locn__succeeded))
      {
        {
          ll_backend__var_locn__succeeded = mercury__list__member_2_p_0(ll_backend__var_locn__TypeInfo_25_25, ((MR_Box) (ll_backend__var_locn__Var_10)), ll_backend__var_locn__OkToDeleteVars_8);
        }
        if (!(ll_backend__var_locn__succeeded))
          {
            ll_backend__var_locn__succeeded = (ll_backend__var_locn__OkToDeleteAny_9 == (MR_Integer) 1);
            if (!(ll_backend__var_locn__succeeded))
              {
                MR_Word ll_backend__var_locn__TypeCtorInfo_29_29;
                MR_Word ll_backend__var_locn__UsingVars_20;

                ll_backend__var_locn__succeeded = (ll_backend__var_locn__DeadOrAlive_17 == (MR_Integer) 0);
                if (ll_backend__var_locn__succeeded)
                  {
                    ll_backend__var_locn__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    {
                      parse_tree__set_of_var__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_29_29, ll_backend__var_locn__Using_16, &ll_backend__var_locn__UsingVars_20);
                    }
                    {
                      ll_backend__var_locn__succeeded = ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_p_0(ll_backend__var_locn__UsingVars_20, ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_21, ll_backend__var_locn__OkToDeleteVars_8);
                    }
                  }
              }
          }
      }
    if (ll_backend__var_locn__succeeded)
      {
        {
          mercury__map__det_update_4_p_0(ll_backend__var_locn__TypeInfo_25_25, ll_backend__var_locn__TypeCtorInfo_26_26, ((MR_Box) (ll_backend__var_locn__Var_10)), ((MR_Box) (ll_backend__var_locn__State_19)), ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_21, ll_backend__var_locn__STATE_VARIABLE_VarStateMap_22);
        }
        ll_backend__var_locn__succeeded = MR_TRUE;
      }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn__clobber_lval_in_var_state_map_6_p_0(
  MR_Word ll_backend__var_locn__Lval_7,
  MR_Word ll_backend__var_locn__OkToDeleteVars_8,
  MR_Word ll_backend__var_locn__OkToDeleteAny_9,
  MR_Word ll_backend__var_locn__Var_10,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_12,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VarStateMap_13)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__STATE_VARIABLE_VarStateMap_14_14;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_p_0(ll_backend__var_locn__Lval_7, ll_backend__var_locn__OkToDeleteVars_8, ll_backend__var_locn__OkToDeleteAny_9, ll_backend__var_locn__Var_10, ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_12, &ll_backend__var_locn__STATE_VARIABLE_VarStateMap_14_14);
    }
    if (ll_backend__var_locn__succeeded)
      *ll_backend__var_locn__STATE_VARIABLE_VarStateMap_13 = ll_backend__var_locn__STATE_VARIABLE_VarStateMap_14_14;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.clobber_lval_in_var_state_map\'/6", (MR_String) "empty state");
          return;
        }
      }
  }
}

static void MR_CALL 
ll_backend__var_locn__clobber_reg_in_maps_6_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv1_STATE_VARIABLE_VarStateMap_13;

    {
      ll_backend__var_locn__clobber_lval_in_var_state_map_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2), &ll_backend__var_locn__conv1_STATE_VARIABLE_VarStateMap_13);
    }
    *ll_backend__var_locn__wrapper_arg_3 = ((MR_Box) (ll_backend__var_locn__conv1_STATE_VARIABLE_VarStateMap_13));
  }
}

static void MR_CALL 
ll_backend__var_locn__clobber_reg_in_maps_6_p_0(
  MR_Word ll_backend__var_locn__Lval_7,
  MR_Word ll_backend__var_locn__OkToDeleteAny_8,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_14,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_LocVarMap_15,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_16,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VarStateMap_17)
{
  {
    MR_bool ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__Lval_7)) == (MR_mktag((MR_Integer) 1)));
    MR_Word ll_backend__var_locn__DependentVarsSet_13;
    MR_Word ll_backend__var_locn__TypeCtorInfo_22_22;
    MR_Word ll_backend__var_locn__TypeInfo_23_23;
    MR_Word ll_backend__var_locn__Var_11;
    MR_Integer ll_backend__var_locn__Var_12;
    MR_Box ll_backend__var_locn__conv0_DependentVarsSet_13;

    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Lval_7, (MR_Integer) 0)));
        ll_backend__var_locn__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Lval_7, (MR_Integer) 1)));
        ll_backend__var_locn__TypeCtorInfo_22_22 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
        ll_backend__var_locn__TypeInfo_23_23 = (MR_Word) &ll_backend__var_locn_scalar_common_1[1];
        {
          ll_backend__var_locn__succeeded = mercury__map__search_3_p_0(ll_backend__var_locn__TypeCtorInfo_22_22, ll_backend__var_locn__TypeInfo_23_23, ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_14, ((MR_Box) (ll_backend__var_locn__Lval_7)), &ll_backend__var_locn__conv0_DependentVarsSet_13);
        }
        if (ll_backend__var_locn__succeeded)
          {
            ll_backend__var_locn__DependentVarsSet_13 = ((MR_Word) ll_backend__var_locn__conv0_DependentVarsSet_13);
            ll_backend__var_locn__succeeded = MR_TRUE;
          }
      }
    if (ll_backend__var_locn__succeeded)
      {
        MR_Word ll_backend__var_locn__Var_19;
        MR_Box ll_backend__var_locn__conv2_STATE_VARIABLE_VarStateMap_17;

        {
          mercury__map__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__var_locn_scalar_common_1[1], ((MR_Box) (ll_backend__var_locn__Lval_7)), ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_14, ll_backend__var_locn__STATE_VARIABLE_LocVarMap_15);
        }
        {
          ll_backend__var_locn__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_19, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_19, 1) = ((MR_Box) (ll_backend__var_locn__clobber_reg_in_maps_6_p_0_1));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_19, 3) = ((MR_Box) (ll_backend__var_locn__Lval_7));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_19, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_19, 5) = ((MR_Box) (ll_backend__var_locn__OkToDeleteAny_8));
        }
        {
          parse_tree__set_of_var__fold_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &ll_backend__var_locn_scalar_common_2[3], ll_backend__var_locn__Var_19, ll_backend__var_locn__DependentVarsSet_13, ((MR_Box) (ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_16)), &ll_backend__var_locn__conv2_STATE_VARIABLE_VarStateMap_17);
        }
        *ll_backend__var_locn__STATE_VARIABLE_VarStateMap_17 = ((MR_Word) ll_backend__var_locn__conv2_STATE_VARIABLE_VarStateMap_17);
      }
    else
      {
        *ll_backend__var_locn__STATE_VARIABLE_VarStateMap_17 = ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_16;
        *ll_backend__var_locn__STATE_VARIABLE_LocVarMap_15 = ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_14;
      }
  }
}

static void MR_CALL 
ll_backend__var_locn__clobber_regs_in_maps_6_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv1_STATE_VARIABLE_VarStateMap_13;

    {
      ll_backend__var_locn__clobber_lval_in_var_state_map_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2), &ll_backend__var_locn__conv1_STATE_VARIABLE_VarStateMap_13);
    }
    *ll_backend__var_locn__wrapper_arg_3 = ((MR_Box) (ll_backend__var_locn__conv1_STATE_VARIABLE_VarStateMap_13));
  }
}

static void MR_CALL 
ll_backend__var_locn__clobber_regs_in_maps_6_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__OkToDeleteAny_2,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_3,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_LocVarMap_4,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_5,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VarStateMap_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__var_locn__succeeded;

        if ((ll_backend__var_locn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__var_locn__STATE_VARIABLE_VarStateMap_6 = ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_5;
            *ll_backend__var_locn__STATE_VARIABLE_LocVarMap_4 = ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_3;
          }
        else
          {
            MR_Word ll_backend__var_locn__Lval_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__var_locn__Lvals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__var_locn__STATE_VARIABLE_LocVarMap_23_23;
            MR_Word ll_backend__var_locn__STATE_VARIABLE_VarStateMap_24_24;
            MR_Word ll_backend__var_locn__DependentVarsSet_37;
            MR_Word ll_backend__var_locn__TypeCtorInfo_22_42;
            MR_Word ll_backend__var_locn__TypeInfo_23_43;
            MR_Word ll_backend__var_locn__Var_35;
            MR_Integer ll_backend__var_locn__Var_36;
            MR_Box ll_backend__var_locn__conv0_DependentVarsSet_37;

            ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__Lval_14)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__var_locn__succeeded)
              {
                ll_backend__var_locn__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Lval_14, (MR_Integer) 0)));
                ll_backend__var_locn__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Lval_14, (MR_Integer) 1)));
                ll_backend__var_locn__TypeCtorInfo_22_42 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
                ll_backend__var_locn__TypeInfo_23_43 = (MR_Word) &ll_backend__var_locn_scalar_common_1[1];
                {
                  ll_backend__var_locn__succeeded = mercury__map__search_3_p_0(ll_backend__var_locn__TypeCtorInfo_22_42, ll_backend__var_locn__TypeInfo_23_43, ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_3, ((MR_Box) (ll_backend__var_locn__Lval_14)), &ll_backend__var_locn__conv0_DependentVarsSet_37);
                }
                if (ll_backend__var_locn__succeeded)
                  {
                    ll_backend__var_locn__DependentVarsSet_37 = ((MR_Word) ll_backend__var_locn__conv0_DependentVarsSet_37);
                    ll_backend__var_locn__succeeded = MR_TRUE;
                  }
              }
            if (ll_backend__var_locn__succeeded)
              {
                MR_Word ll_backend__var_locn__Var_39;
                MR_Box ll_backend__var_locn__conv2_STATE_VARIABLE_VarStateMap_24_24;

                {
                  mercury__map__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__var_locn_scalar_common_1[1], ((MR_Box) (ll_backend__var_locn__Lval_14)), ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_3, &ll_backend__var_locn__STATE_VARIABLE_LocVarMap_23_23);
                }
                {
                  ll_backend__var_locn__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_39, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_8[0]));
                  MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_39, 1) = ((MR_Box) (ll_backend__var_locn__clobber_regs_in_maps_6_p_0_1));
                  MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_39, 3) = ((MR_Box) (ll_backend__var_locn__Lval_14));
                  MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_39, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_39, 5) = ((MR_Box) (ll_backend__var_locn__OkToDeleteAny_2));
                }
                {
                  parse_tree__set_of_var__fold_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &ll_backend__var_locn_scalar_common_2[3], ll_backend__var_locn__Var_39, ll_backend__var_locn__DependentVarsSet_37, ((MR_Box) (ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_5)), &ll_backend__var_locn__conv2_STATE_VARIABLE_VarStateMap_24_24);
                }
                ll_backend__var_locn__STATE_VARIABLE_VarStateMap_24_24 = ((MR_Word) ll_backend__var_locn__conv2_STATE_VARIABLE_VarStateMap_24_24);
              }
            else
              {
                ll_backend__var_locn__STATE_VARIABLE_VarStateMap_24_24 = ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_5;
                ll_backend__var_locn__STATE_VARIABLE_LocVarMap_23_23 = ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_3;
              }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__var_locn__next_value_of_HeadVar__1_1 = ll_backend__var_locn__Lvals_15;
              MR_Word ll_backend__var_locn__next_value_of_STATE_VARIABLE_LocVarMap_0_3 = ll_backend__var_locn__STATE_VARIABLE_LocVarMap_23_23;
              MR_Word ll_backend__var_locn__next_value_of_STATE_VARIABLE_VarStateMap_0_5 = ll_backend__var_locn__STATE_VARIABLE_VarStateMap_24_24;

              ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_5 = ll_backend__var_locn__next_value_of_STATE_VARIABLE_VarStateMap_0_5;
              ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_3 = ll_backend__var_locn__next_value_of_STATE_VARIABLE_LocVarMap_0_3;
              ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
ll_backend__var_locn__convert_live_to_lval_set_2_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word * ll_backend__var_locn__HeadVar__2_2)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__State_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Lvals_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_4, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_4, (MR_Integer) 4)));
    MR_Word ll_backend__var_locn__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_4, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_4, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_4, (MR_Integer) 3)));

    ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_9 == (MR_Integer) 1);
    if (ll_backend__var_locn__succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *ll_backend__var_locn__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__var_locn__Var_3));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__var_locn__Lvals_5));
        }
        ll_backend__var_locn__succeeded = MR_TRUE;
      }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn__init_var_locn_state_2_6_p_0_3(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv1_STATE_VARIABLE_LocVarMap_11;

    {
      ll_backend__var_locn__make_var_depend_on_root_lval_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2), &ll_backend__var_locn__conv1_STATE_VARIABLE_LocVarMap_11);
    }
    *ll_backend__var_locn__wrapper_arg_3 = ((MR_Box) (ll_backend__var_locn__conv1_STATE_VARIABLE_LocVarMap_11));
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__init_var_locn_state_2_6_p_0_2(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) ll_backend__var_locn__wrapper_arg_1));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__init_var_locn_state_2_6_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn__init_var_locn_state_2_6_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__MaybeLiveness_2,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_3,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VarStateMap_4,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_5,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_LocVarMap_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__var_locn__succeeded;

        if ((ll_backend__var_locn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__var_locn__STATE_VARIABLE_LocVarMap_6 = ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_5;
            *ll_backend__var_locn__STATE_VARIABLE_VarStateMap_4 = ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_3;
          }
        else
          {
            MR_Word ll_backend__var_locn__Var_14;
            MR_Word ll_backend__var_locn__Lval_15;
            MR_Word ll_backend__var_locn__Rest_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__var_locn__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__var_locn__Var_30;
            MR_Word ll_backend__var_locn__STATE_VARIABLE_VarStateMap_40_40;
            MR_Word ll_backend__var_locn__STATE_VARIABLE_LocVarMap_41_41;
            MR_Word ll_backend__var_locn__Liveness_20;
            MR_Word ll_backend__var_locn__TypeCtorInfo_44_44;

            ll_backend__var_locn__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_29, (MR_Integer) 0)));
            ll_backend__var_locn__Lval_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_29, (MR_Integer) 1)));
            {
              ll_backend__var_locn__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_30, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_30, 1) = ((MR_Box) (ll_backend__var_locn__init_var_locn_state_2_6_p_0_1));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_30, 3) = ((MR_Box) (ll_backend__var_locn__Lval_15));
            }
            {
              mercury__require__expect_4_p_0(ll_backend__var_locn__Var_30, (MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.init_var_locn_state_2\'/6", (MR_String) "unexpected lval");
            }
            ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__MaybeLiveness_2)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__var_locn__succeeded)
              {
                ll_backend__var_locn__Liveness_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__MaybeLiveness_2, (MR_Integer) 0)));
                ll_backend__var_locn__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                {
                  ll_backend__var_locn__succeeded = parse_tree__set_of_var__member_2_p_0(ll_backend__var_locn__TypeCtorInfo_44_44, ll_backend__var_locn__Liveness_20, ll_backend__var_locn__Var_14);
                }
                ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
              }
            if (ll_backend__var_locn__succeeded)
              {
                ll_backend__var_locn__STATE_VARIABLE_LocVarMap_41_41 = ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_5;
                ll_backend__var_locn__STATE_VARIABLE_VarStateMap_40_40 = ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_3;
              }
            else
              {
                MR_Word ll_backend__var_locn__TypeCtorInfo_10_79;
                MR_Word ll_backend__var_locn__Lvals_56;
                MR_Word ll_backend__var_locn__NoDupRootLvals_64;
                MR_Word ll_backend__var_locn__Var_65;
                MR_Word ll_backend__var_locn__LvalList_74;
                MR_Word ll_backend__var_locn__AllLvals_75;
                MR_Word ll_backend__var_locn__RootLvals_76;
                MR_Word ll_backend__var_locn__Var_77;
                MR_Word ll_backend__var_locn__Var_21;
                MR_Box ll_backend__var_locn__conv0_Var_21;
                MR_Box ll_backend__var_locn__conv2_STATE_VARIABLE_LocVarMap_41_41;

                {
                  ll_backend__var_locn__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_3, ((MR_Box) (ll_backend__var_locn__Var_14)), &ll_backend__var_locn__conv0_Var_21);
                }
                if (ll_backend__var_locn__succeeded)
                  {
                    ll_backend__var_locn__Var_21 = ((MR_Word) ll_backend__var_locn__conv0_Var_21);
                    ll_backend__var_locn__succeeded = MR_TRUE;
                  }
                if (ll_backend__var_locn__succeeded)
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.init_var_locn_state_2\'/6", (MR_String) "repeated variable");
                      return;
                    }
                  }
                else
                  {
                    MR_Word ll_backend__var_locn__NewLocs_22;
                    MR_Word ll_backend__var_locn__Using_23;
                    MR_Word ll_backend__var_locn__State_24;

                    {
                      ll_backend__var_locn__NewLocs_22 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__var_locn__Lval_15)));
                    }
                    {
                      parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &ll_backend__var_locn__Using_23);
                    }
                    {
                      ll_backend__var_locn__State_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_24, 0) = ((MR_Box) (ll_backend__var_locn__NewLocs_22));
                      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_24, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_24, 3) = ((MR_Box) (ll_backend__var_locn__Using_23));
                      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_24, 4) = ((MR_Box) ((MR_Integer) 1));
                    }
                    {
                      mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, ((MR_Box) (ll_backend__var_locn__Var_14)), ((MR_Box) (ll_backend__var_locn__State_24)), ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_3, &ll_backend__var_locn__STATE_VARIABLE_VarStateMap_40_40);
                    }
                  }
                {
                  ll_backend__var_locn__Lvals_56 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__var_locn__Lval_15)));
                }
                ll_backend__var_locn__TypeCtorInfo_10_79 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
                {
                  mercury__set__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_10_79, ll_backend__var_locn__Lvals_56, &ll_backend__var_locn__LvalList_74);
                }
                {
                  ll_backend__var_locn__Var_77 = ll_backend__code_util__lvals_in_lvals_1_f_0(ll_backend__var_locn__LvalList_74);
                }
                {
                  ll_backend__var_locn__AllLvals_75 = mercury__list__f_43_43_2_f_0(ll_backend__var_locn__TypeCtorInfo_10_79, ll_backend__var_locn__LvalList_74, ll_backend__var_locn__Var_77);
                }
                {
                  mercury__list__filter_3_p_0(ll_backend__var_locn__TypeCtorInfo_10_79, (MR_Word) &ll_backend__var_locn_scalar_common_2[10], ll_backend__var_locn__AllLvals_75, &ll_backend__var_locn__RootLvals_76);
                }
                {
                  mercury__list__sort_and_remove_dups_2_p_0(ll_backend__var_locn__TypeCtorInfo_10_79, ll_backend__var_locn__RootLvals_76, &ll_backend__var_locn__NoDupRootLvals_64);
                }
                {
                  ll_backend__var_locn__Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_65, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0]));
                  MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_65, 1) = ((MR_Box) (ll_backend__var_locn__init_var_locn_state_2_6_p_0_3));
                  MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_65, 3) = ((MR_Box) (ll_backend__var_locn__Var_14));
                }
                {
                  mercury__list__foldl_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__var_locn_scalar_common_2[0], ll_backend__var_locn__Var_65, ll_backend__var_locn__NoDupRootLvals_64, ((MR_Box) (ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_5)), &ll_backend__var_locn__conv2_STATE_VARIABLE_LocVarMap_41_41);
                }
                ll_backend__var_locn__STATE_VARIABLE_LocVarMap_41_41 = ((MR_Word) ll_backend__var_locn__conv2_STATE_VARIABLE_LocVarMap_41_41);
              }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__var_locn__next_value_of_HeadVar__1_1 = ll_backend__var_locn__Rest_16;
              MR_Word ll_backend__var_locn__next_value_of_STATE_VARIABLE_VarStateMap_0_3 = ll_backend__var_locn__STATE_VARIABLE_VarStateMap_40_40;
              MR_Word ll_backend__var_locn__next_value_of_STATE_VARIABLE_LocVarMap_0_5 = ll_backend__var_locn__STATE_VARIABLE_LocVarMap_41_41;

              ll_backend__var_locn__STATE_VARIABLE_LocVarMap_0_5 = ll_backend__var_locn__next_value_of_STATE_VARIABLE_LocVarMap_0_5;
              ll_backend__var_locn__STATE_VARIABLE_VarStateMap_0_3 = ll_backend__var_locn__next_value_of_STATE_VARIABLE_VarStateMap_0_3;
              ll_backend__var_locn__HeadVar__1_1 = ll_backend__var_locn__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
ll_backend__var_locn__var_locn_max_reg_in_use_3_p_0(
  MR_Word ll_backend__var_locn__VLI_4,
  MR_Integer * ll_backend__var_locn__MaxR_5,
  MR_Integer * ll_backend__var_locn__MaxF_6)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__TypeCtorInfo_15_15 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    MR_Word ll_backend__var_locn__LocVarMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__VarLocs_8;
    MR_Integer ll_backend__var_locn__MaxR1_9;
    MR_Integer ll_backend__var_locn__MaxF1_10;
    MR_Word ll_backend__var_locn__Acquired_11;
    MR_Word ll_backend__var_locn__AcquiredList_12;
    MR_Integer ll_backend__var_locn__MaxR2_13;
    MR_Integer ll_backend__var_locn__MaxF2_14;
    MR_Word ll_backend__var_locn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 12)));
    MR_Word ll_backend__var_locn__Var_31;
    MR_Word ll_backend__var_locn__Var_32;
    MR_Word ll_backend__var_locn__Var_33;
    MR_Word ll_backend__var_locn__Var_34;
    MR_Word ll_backend__var_locn__Var_35;
    MR_Integer ll_backend__var_locn__Var_36;
    MR_Integer ll_backend__var_locn__Var_37;
    MR_Word ll_backend__var_locn__Var_38;
    MR_Word ll_backend__var_locn__Var_39;
    MR_Integer ll_backend__var_locn__Var_40;
    MR_Integer ll_backend__var_locn__Var_41;
    MR_Word ll_backend__var_locn__Var_42;

    {
      mercury__map__keys_2_p_0(ll_backend__var_locn__TypeCtorInfo_15_15, (MR_Word) &ll_backend__var_locn_scalar_common_1[1], ll_backend__var_locn__LocVarMap_7, &ll_backend__var_locn__VarLocs_8);
    }
    {
      ll_backend__code_util__max_mentioned_regs_3_p_0(ll_backend__var_locn__VarLocs_8, &ll_backend__var_locn__MaxR1_9, &ll_backend__var_locn__MaxF1_10);
    }
    ll_backend__var_locn__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 0)));
    ll_backend__var_locn__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 1)));
    ll_backend__var_locn__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 2)));
    ll_backend__var_locn__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 3)));
    ll_backend__var_locn__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 4)));
    ll_backend__var_locn__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 5)));
    ll_backend__var_locn__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 6)));
    ll_backend__var_locn__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 7)));
    ll_backend__var_locn__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 8)));
    ll_backend__var_locn__Acquired_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 9)));
    ll_backend__var_locn__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 10)));
    ll_backend__var_locn__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 11)));
    ll_backend__var_locn__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_4, (MR_Integer) 12)));
    {
      mercury__set__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_15_15, ll_backend__var_locn__Acquired_11, &ll_backend__var_locn__AcquiredList_12);
    }
    {
      ll_backend__code_util__max_mentioned_regs_3_p_0(ll_backend__var_locn__AcquiredList_12, &ll_backend__var_locn__MaxR2_13, &ll_backend__var_locn__MaxF2_14);
    }
    {
      mercury__int__max_3_p_0(ll_backend__var_locn__MaxR1_9, ll_backend__var_locn__MaxR2_13, ll_backend__var_locn__MaxR_5);
    }
    {
      mercury__int__max_3_p_0(ll_backend__var_locn__MaxF1_10, ll_backend__var_locn__MaxF2_14, ll_backend__var_locn__MaxF_6);
    }
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_set_follow_vars_3_p_0(
  MR_Word ll_backend__var_locn__HeadVar__1_1,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_8,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_9)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__FollowVarMap_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer ll_backend__var_locn__NextNonReservedR_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer ll_backend__var_locn__NextNonReservedF_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 12)));
    MR_Word ll_backend__var_locn__Var_34 = ll_backend__var_locn__Var_14;
    MR_Word ll_backend__var_locn__Var_35 = ll_backend__var_locn__Var_15;
    MR_Word ll_backend__var_locn__Var_36 = ll_backend__var_locn__Var_16;
    MR_Word ll_backend__var_locn__Var_37 = ll_backend__var_locn__Var_17;
    MR_Word ll_backend__var_locn__Var_38 = ll_backend__var_locn__FollowVarMap_4;
    MR_Word ll_backend__var_locn__Var_41 = ll_backend__var_locn__Var_21;
    MR_Word ll_backend__var_locn__Var_42 = ll_backend__var_locn__Var_22;
    MR_Word ll_backend__var_locn__Var_43 = ll_backend__var_locn__Var_23;
    MR_Integer ll_backend__var_locn__Var_44 = ll_backend__var_locn__Var_24;
    MR_Integer ll_backend__var_locn__Var_45 = ll_backend__var_locn__Var_25;
    MR_Word ll_backend__var_locn__Var_46 = ll_backend__var_locn__Var_26;
    MR_Word ll_backend__var_locn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 6)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__var_locn__STATE_VARIABLE_VLI_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__var_locn__Var_34));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__var_locn__Var_35));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__var_locn__Var_36));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__var_locn__Var_37));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__var_locn__Var_38));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__var_locn__NextNonReservedR_5));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__var_locn__NextNonReservedF_6));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__var_locn__Var_41));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__var_locn__Var_42));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ll_backend__var_locn__Var_43));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ll_backend__var_locn__Var_44));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ll_backend__var_locn__Var_45));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ll_backend__var_locn__Var_46));
    }
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_get_next_non_reserved_3_p_0(
  MR_Word ll_backend__var_locn__VI_1,
  MR_Word ll_backend__var_locn__HeadVar__2_2,
  MR_Integer * ll_backend__var_locn__HeadVar__3_3)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Integer ll_backend__var_locn__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_1, (MR_Integer) 6)));
    MR_Integer ll_backend__var_locn__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_1, (MR_Integer) 5)));
    MR_Word ll_backend__var_locn__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_1, (MR_Integer) 12)));
    MR_Integer ll_backend__var_locn__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_1, (MR_Integer) 11)));
    MR_Integer ll_backend__var_locn__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_1, (MR_Integer) 10)));
    MR_Word ll_backend__var_locn__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_1, (MR_Integer) 9)));
    MR_Word ll_backend__var_locn__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_1, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_1, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_1, (MR_Integer) 4)));
    MR_Word ll_backend__var_locn__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_1, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_1, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_1, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_1, (MR_Integer) 0)));

    switch (ll_backend__var_locn__HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *ll_backend__var_locn__HeadVar__3_3 = ll_backend__var_locn__Var_36;
        break;
      case (MR_Integer) 0:
        *ll_backend__var_locn__HeadVar__3_3 = ll_backend__var_locn__Var_37;
        break;
    }
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_get_follow_var_map_2_p_0(
  MR_Word ll_backend__var_locn__VI_3,
  MR_Word * ll_backend__var_locn__HeadVar__2_2)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 3)));
    MR_Integer ll_backend__var_locn__Var_8;
    MR_Integer ll_backend__var_locn__Var_9;
    MR_Word ll_backend__var_locn__Var_10;
    MR_Word ll_backend__var_locn__Var_11;
    MR_Word ll_backend__var_locn__Var_12;
    MR_Integer ll_backend__var_locn__Var_13;
    MR_Integer ll_backend__var_locn__Var_14;
    MR_Word ll_backend__var_locn__Var_15;

    *ll_backend__var_locn__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 4)));
    ll_backend__var_locn__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 5)));
    ll_backend__var_locn__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 6)));
    ll_backend__var_locn__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 7)));
    ll_backend__var_locn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 8)));
    ll_backend__var_locn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 9)));
    ll_backend__var_locn__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 10)));
    ll_backend__var_locn__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 11)));
    ll_backend__var_locn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 12)));
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_get_stack_slots_2_p_0(
  MR_Word ll_backend__var_locn__VI_3,
  MR_Word * ll_backend__var_locn__HeadVar__2_2)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_7;
    MR_Integer ll_backend__var_locn__Var_8;
    MR_Integer ll_backend__var_locn__Var_9;
    MR_Word ll_backend__var_locn__Var_10;
    MR_Word ll_backend__var_locn__Var_11;
    MR_Word ll_backend__var_locn__Var_12;
    MR_Integer ll_backend__var_locn__Var_13;
    MR_Integer ll_backend__var_locn__Var_14;
    MR_Word ll_backend__var_locn__Var_15;

    *ll_backend__var_locn__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 3)));
    ll_backend__var_locn__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 4)));
    ll_backend__var_locn__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 5)));
    ll_backend__var_locn__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 6)));
    ll_backend__var_locn__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 7)));
    ll_backend__var_locn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 8)));
    ll_backend__var_locn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 9)));
    ll_backend__var_locn__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 10)));
    ll_backend__var_locn__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 11)));
    ll_backend__var_locn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VI_3, (MR_Integer) 12)));
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__var_locn_get_var_locations_2_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box * ll_backend__var_locn__wrapper_arg_2)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv0_HeadVar__2_2;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__convert_live_to_lval_set_2_p_0(((MR_Word) ll_backend__var_locn__wrapper_arg_1), &ll_backend__var_locn__conv0_HeadVar__2_2);
    }
    if (ll_backend__var_locn__succeeded)
      {
        *ll_backend__var_locn__wrapper_arg_2 = ((MR_Box) (ll_backend__var_locn__conv0_HeadVar__2_2));
        ll_backend__var_locn__succeeded = MR_TRUE;
      }
    return ll_backend__var_locn__succeeded;
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_get_var_locations_2_p_0(
  MR_Word ll_backend__var_locn__VLI_3,
  MR_Word * ll_backend__var_locn__VarLocations_4)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__TypeInfo_9_9 = (MR_Word) &ll_backend__var_locn_scalar_common_1[0];
    MR_Word ll_backend__var_locn__VarStateMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__VarLocList_6;
    MR_Word ll_backend__var_locn__LiveVarLocList_7;
    MR_Word ll_backend__var_locn__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 12)));

    {
      mercury__map__to_assoc_list_2_p_0(ll_backend__var_locn__TypeInfo_9_9, (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, ll_backend__var_locn__VarStateMap_5, &ll_backend__var_locn__VarLocList_6);
    }
    {
      mercury__list__filter_map_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_2[1], (MR_Word) &ll_backend__var_locn_scalar_common_2[2], (MR_Word) &ll_backend__var_locn_scalar_common_2[9], ll_backend__var_locn__VarLocList_6, &ll_backend__var_locn__LiveVarLocList_7);
    }
    {
      mercury__map__from_sorted_assoc_list_2_p_0(ll_backend__var_locn__TypeInfo_9_9, (MR_Word) &ll_backend__var_locn_scalar_common_1[4], ll_backend__var_locn__LiveVarLocList_7, ll_backend__var_locn__VarLocations_4);
    }
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_materialize_vars_in_lval_6_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_7,
  MR_Word ll_backend__var_locn__Lval0_8,
  MR_Word * ll_backend__var_locn__Lval_9,
  MR_Word * ll_backend__var_locn__Code_10,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_12,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_13)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Var_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    switch (MR_tag((MR_Word) ll_backend__var_locn__Lval0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ll_backend__var_locn__Lval_9 = ll_backend__var_locn__Lval0_8;
          {
            *ll_backend__var_locn__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
          *ll_backend__var_locn__STATE_VARIABLE_VLI_13 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_12;
        }
        break;
      case (MR_Integer) 1:
        {
          *ll_backend__var_locn__Lval_9 = ll_backend__var_locn__Lval0_8;
          {
            *ll_backend__var_locn__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
          *ll_backend__var_locn__STATE_VARIABLE_VLI_13 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_12;
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.var_locn_materialize_vars_in_lval_avoid\'/7", (MR_String) "temp");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 11:
            {
              *ll_backend__var_locn__Lval_9 = ll_backend__var_locn__Lval0_8;
              {
                *ll_backend__var_locn__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
              *ll_backend__var_locn__STATE_VARIABLE_VLI_13 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_12;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__var_locn__Rval0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_8, (MR_Integer) 1)));
              MR_Word ll_backend__var_locn__Rval_33;

              {
                ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_p_0(ll_backend__var_locn__ModuleInfo_7, ll_backend__var_locn__Rval0_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Var_14, &ll_backend__var_locn__Rval_33, ll_backend__var_locn__Code_10, ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, ll_backend__var_locn__STATE_VARIABLE_VLI_13);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__var_locn__Lval_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__var_locn__Rval_33));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__var_locn__Rval0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_8, (MR_Integer) 1)));
              MR_Word ll_backend__var_locn__Rval_69;

              {
                ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_p_0(ll_backend__var_locn__ModuleInfo_7, ll_backend__var_locn__Rval0_68, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Var_14, &ll_backend__var_locn__Rval_69, ll_backend__var_locn__Code_10, ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, ll_backend__var_locn__STATE_VARIABLE_VLI_13);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__var_locn__Lval_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__var_locn__Rval_69));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__var_locn__Rval0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_8, (MR_Integer) 1)));
              MR_Word ll_backend__var_locn__Rval_67;

              {
                ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_p_0(ll_backend__var_locn__ModuleInfo_7, ll_backend__var_locn__Rval0_66, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Var_14, &ll_backend__var_locn__Rval_67, ll_backend__var_locn__Code_10, ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, ll_backend__var_locn__STATE_VARIABLE_VLI_13);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__var_locn__Lval_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__var_locn__Rval_67));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__var_locn__Rval0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_8, (MR_Integer) 1)));
              MR_Word ll_backend__var_locn__Rval_71;

              {
                ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_p_0(ll_backend__var_locn__ModuleInfo_7, ll_backend__var_locn__Rval0_70, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Var_14, &ll_backend__var_locn__Rval_71, ll_backend__var_locn__Code_10, ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, ll_backend__var_locn__STATE_VARIABLE_VLI_13);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__var_locn__Lval_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__var_locn__Rval_71));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ll_backend__var_locn__Rval0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_8, (MR_Integer) 1)));
              MR_Word ll_backend__var_locn__Rval_73;

              {
                ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_p_0(ll_backend__var_locn__ModuleInfo_7, ll_backend__var_locn__Rval0_72, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Var_14, &ll_backend__var_locn__Rval_73, ll_backend__var_locn__Code_10, ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, ll_backend__var_locn__STATE_VARIABLE_VLI_13);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__var_locn__Lval_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__var_locn__Rval_73));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__var_locn__Tag_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_8, (MR_Integer) 1)));
              MR_Word ll_backend__var_locn__RvalA0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_8, (MR_Integer) 2)));
              MR_Word ll_backend__var_locn__RvalB0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_8, (MR_Integer) 3)));
              MR_Word ll_backend__var_locn__RvalA_37;
              MR_Word ll_backend__var_locn__CodeA_38;
              MR_Word ll_backend__var_locn__RvalB_39;
              MR_Word ll_backend__var_locn__CodeB_40;
              MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_43_51;

              {
                ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_p_0(ll_backend__var_locn__ModuleInfo_7, ll_backend__var_locn__RvalA0_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Var_14, &ll_backend__var_locn__RvalA_37, &ll_backend__var_locn__CodeA_38, ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, &ll_backend__var_locn__STATE_VARIABLE_VLI_43_51);
              }
              {
                ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_p_0(ll_backend__var_locn__ModuleInfo_7, ll_backend__var_locn__RvalB0_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Var_14, &ll_backend__var_locn__RvalB_39, &ll_backend__var_locn__CodeB_40, ll_backend__var_locn__STATE_VARIABLE_VLI_43_51, ll_backend__var_locn__STATE_VARIABLE_VLI_13);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__var_locn__Lval_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__var_locn__Tag_34));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__var_locn__RvalA_37));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__var_locn__RvalB_39));
              }
              {
                *ll_backend__var_locn__Code_10 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__var_locn__CodeA_38, ll_backend__var_locn__CodeB_40);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__var_locn__Rval0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_8, (MR_Integer) 1)));
              MR_Word ll_backend__var_locn__Rval_75;

              {
                ll_backend__var_locn__var_locn_materialize_vars_in_rval_avoid_8_p_0(ll_backend__var_locn__ModuleInfo_7, ll_backend__var_locn__Rval0_74, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Var_14, &ll_backend__var_locn__Rval_75, ll_backend__var_locn__Code_10, ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, ll_backend__var_locn__STATE_VARIABLE_VLI_13);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__var_locn__Lval_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__var_locn__Rval_75));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.var_locn_materialize_vars_in_lval_avoid\'/7", (MR_String) "lvar");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__var_locn_clear_r1_4_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv1_STATE_VARIABLE_VarStateMap_22;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2), &ll_backend__var_locn__conv1_STATE_VARIABLE_VarStateMap_22);
    }
    if (ll_backend__var_locn__succeeded)
      {
        *ll_backend__var_locn__wrapper_arg_3 = ((MR_Box) (ll_backend__var_locn__conv1_STATE_VARIABLE_VarStateMap_22));
        ll_backend__var_locn__succeeded = MR_TRUE;
      }
    return ll_backend__var_locn__succeeded;
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_clear_r1_4_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_5,
  MR_Word * ll_backend__var_locn__Code_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_12,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_13)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__LocVarMap0_8;
    MR_Word ll_backend__var_locn__VarStateMap0_9;
    MR_Word ll_backend__var_locn__LocVarMap_10;
    MR_Word ll_backend__var_locn__VarStateMap_11;
    MR_Word ll_backend__var_locn__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__var_locn_scalar_common_1[8]);
    MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_17_17;
    MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_26_26;
    MR_Word ll_backend__var_locn__TypeCtorInfo_26_46;
    MR_Word ll_backend__var_locn__LocVarMap0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__AffectedVarSet_37;
    MR_Word ll_backend__var_locn__AffectedVars_38;
    MR_Word ll_backend__var_locn__VarStateMap0_39;
    MR_Word ll_backend__var_locn__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 12)));
    MR_Box ll_backend__var_locn__conv0_AffectedVarSet_37;
    MR_Word ll_backend__var_locn__Var_67;
    MR_Word ll_backend__var_locn__Var_68;
    MR_Word ll_backend__var_locn__Var_69;
    MR_Word ll_backend__var_locn__Var_70;
    MR_Word ll_backend__var_locn__Var_71;
    MR_Integer ll_backend__var_locn__Var_72;
    MR_Integer ll_backend__var_locn__Var_73;
    MR_Word ll_backend__var_locn__Var_74;
    MR_Word ll_backend__var_locn__Var_75;
    MR_Integer ll_backend__var_locn__Var_76;
    MR_Integer ll_backend__var_locn__Var_77;
    MR_Word ll_backend__var_locn__Var_78;
    MR_Word ll_backend__var_locn__TypeInfo_30_50;
    MR_Word ll_backend__var_locn__TypeInfo_31_51;
    MR_Word ll_backend__var_locn__Var_41;
    MR_Word ll_backend__var_locn__Var_42;
    MR_Word ll_backend__var_locn__Var_40;
    MR_Box ll_backend__var_locn__conv2_Var_40;
    MR_Word ll_backend__var_locn__Var_80;
    MR_Word ll_backend__var_locn__Var_81;
    MR_Word ll_backend__var_locn__Var_82;
    MR_Word ll_backend__var_locn__Var_83;
    MR_Word ll_backend__var_locn__Var_84;
    MR_Integer ll_backend__var_locn__Var_85;
    MR_Integer ll_backend__var_locn__Var_86;
    MR_Word ll_backend__var_locn__Var_87;
    MR_Word ll_backend__var_locn__Var_88;
    MR_Integer ll_backend__var_locn__Var_89;
    MR_Integer ll_backend__var_locn__Var_90;
    MR_Word ll_backend__var_locn__Var_91;

    {
      ll_backend__var_locn__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__var_locn_scalar_common_1[1], ll_backend__var_locn__LocVarMap0_36, ((MR_Box) (ll_backend__var_locn__Var_14)), &ll_backend__var_locn__conv0_AffectedVarSet_37);
    }
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__AffectedVarSet_37 = ((MR_Word) ll_backend__var_locn__conv0_AffectedVarSet_37);
        ll_backend__var_locn__succeeded = MR_TRUE;
      }
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__TypeCtorInfo_26_46 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        {
          parse_tree__set_of_var__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_26_46, ll_backend__var_locn__AffectedVarSet_37, &ll_backend__var_locn__AffectedVars_38);
        }
        ll_backend__var_locn__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 0)));
        ll_backend__var_locn__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 1)));
        ll_backend__var_locn__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 2)));
        ll_backend__var_locn__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 3)));
        ll_backend__var_locn__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 4)));
        ll_backend__var_locn__Var_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 5)));
        ll_backend__var_locn__Var_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 6)));
        ll_backend__var_locn__VarStateMap0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 7)));
        ll_backend__var_locn__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 8)));
        ll_backend__var_locn__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 9)));
        ll_backend__var_locn__Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 10)));
        ll_backend__var_locn__Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 11)));
        ll_backend__var_locn__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 12)));
        ll_backend__var_locn__Var_42 = (MR_Integer) 0;
        ll_backend__var_locn__TypeInfo_30_50 = (MR_Word) &ll_backend__var_locn_scalar_common_1[0];
        ll_backend__var_locn__TypeInfo_31_51 = (MR_Word) &ll_backend__var_locn_scalar_common_2[3];
        ll_backend__var_locn__Var_41 = (MR_Word) &ll_backend__var_locn_scalar_common_9[0];
        {
          ll_backend__var_locn__succeeded = mercury__list__foldl_4_p_3(ll_backend__var_locn__TypeInfo_30_50, ll_backend__var_locn__TypeInfo_31_51, ll_backend__var_locn__Var_41, ll_backend__var_locn__AffectedVars_38, ((MR_Box) (ll_backend__var_locn__VarStateMap0_39)), &ll_backend__var_locn__conv2_Var_40);
        }
        if (ll_backend__var_locn__succeeded)
          {
            ll_backend__var_locn__Var_40 = ((MR_Word) ll_backend__var_locn__conv2_Var_40);
            ll_backend__var_locn__succeeded = MR_TRUE;
          }
        ll_backend__var_locn__succeeded = !(ll_backend__var_locn__succeeded);
      }
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__free_up_lval_with_copy_7_p_0(ll_backend__var_locn__ModuleInfo_5, ll_backend__var_locn__Var_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Code_6, ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, &ll_backend__var_locn__STATE_VARIABLE_VLI_17_17);
      }
    else
      {
        {
          *ll_backend__var_locn__Code_6 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
        ll_backend__var_locn__STATE_VARIABLE_VLI_17_17 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_12;
      }
    ll_backend__var_locn__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_17_17, (MR_Integer) 0)));
    ll_backend__var_locn__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_17_17, (MR_Integer) 1)));
    ll_backend__var_locn__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_17_17, (MR_Integer) 2)));
    ll_backend__var_locn__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_17_17, (MR_Integer) 3)));
    ll_backend__var_locn__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_17_17, (MR_Integer) 4)));
    ll_backend__var_locn__Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_17_17, (MR_Integer) 5)));
    ll_backend__var_locn__Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_17_17, (MR_Integer) 6)));
    ll_backend__var_locn__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_17_17, (MR_Integer) 7)));
    ll_backend__var_locn__LocVarMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_17_17, (MR_Integer) 8)));
    ll_backend__var_locn__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_17_17, (MR_Integer) 9)));
    ll_backend__var_locn__Var_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_17_17, (MR_Integer) 10)));
    ll_backend__var_locn__Var_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_17_17, (MR_Integer) 11)));
    ll_backend__var_locn__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_17_17, (MR_Integer) 12)));
    {
      ll_backend__var_locn__var_locn_get_var_state_map_2_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_17_17, &ll_backend__var_locn__VarStateMap0_9);
    }
    {
      ll_backend__var_locn__clobber_regs_in_maps_6_p_0((MR_Word) MR_mkword(MR_mktag(1), &ll_backend__var_locn_scalar_common_1[9]), (MR_Integer) 0, ll_backend__var_locn__LocVarMap0_8, &ll_backend__var_locn__LocVarMap_10, ll_backend__var_locn__VarStateMap0_9, &ll_backend__var_locn__VarStateMap_11);
    }
    {
      ll_backend__var_locn__var_locn_set_loc_var_map_3_p_0(ll_backend__var_locn__LocVarMap_10, ll_backend__var_locn__STATE_VARIABLE_VLI_17_17, &ll_backend__var_locn__STATE_VARIABLE_VLI_26_26);
    }
    {
      ll_backend__var_locn__var_locn_set_var_state_map_3_p_0(ll_backend__var_locn__VarStateMap_11, ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, ll_backend__var_locn__STATE_VARIABLE_VLI_13);
    }
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_unlock_regs_2_p_0(
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_4,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_5)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_4, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_4, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_4, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_4, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_4, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_4, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_4, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_4, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_4, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_4, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_4, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_4, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_4, (MR_Integer) 12)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__var_locn__STATE_VARIABLE_VLI_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__var_locn__Var_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__var_locn__Var_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__var_locn__Var_20));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__var_locn__Var_21));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__var_locn__Var_22));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__var_locn__Var_23));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__var_locn__Var_24));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__var_locn__Var_25));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__var_locn__Var_26));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ll_backend__var_locn__Var_27));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_lock_regs_5_p_0(
  MR_Integer ll_backend__var_locn__R_6,
  MR_Integer ll_backend__var_locn__F_7,
  MR_Word ll_backend__var_locn__Exceptions_8,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_10,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_11)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 12)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__var_locn__STATE_VARIABLE_VLI_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__var_locn__Var_21));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__var_locn__Var_22));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__var_locn__Var_23));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__var_locn__Var_24));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__var_locn__Var_25));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__var_locn__Var_26));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__var_locn__Var_27));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__var_locn__Var_28));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__var_locn__Var_29));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ll_backend__var_locn__Var_30));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ll_backend__var_locn__R_6));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ll_backend__var_locn__F_7));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ll_backend__var_locn__Exceptions_8));
    }
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_release_reg_3_p_0(
  MR_Word ll_backend__var_locn__Lval_4,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_8,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_9)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Acquired0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 9)));
    MR_Word ll_backend__var_locn__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 8)));
    MR_Integer ll_backend__var_locn__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 12)));

    {
      ll_backend__var_locn__succeeded = mercury__set__member_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__var_locn__Lval_4)), ll_backend__var_locn__Acquired0_6);
    }
    if (ll_backend__var_locn__succeeded)
      {
        MR_Word ll_backend__var_locn__Acquired_7;
        MR_Word ll_backend__var_locn__Var_31;
        MR_Word ll_backend__var_locn__Var_32;
        MR_Word ll_backend__var_locn__Var_33;
        MR_Word ll_backend__var_locn__Var_34;
        MR_Word ll_backend__var_locn__Var_35;
        MR_Integer ll_backend__var_locn__Var_36;
        MR_Integer ll_backend__var_locn__Var_37;
        MR_Word ll_backend__var_locn__Var_38;
        MR_Word ll_backend__var_locn__Var_39;
        MR_Integer ll_backend__var_locn__Var_41;
        MR_Integer ll_backend__var_locn__Var_42;
        MR_Word ll_backend__var_locn__Var_43;
        MR_Word ll_backend__var_locn__Var_40;

        {
          mercury__set__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__var_locn__Lval_4)), ll_backend__var_locn__Acquired0_6, &ll_backend__var_locn__Acquired_7);
        }
        ll_backend__var_locn__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 0)));
        ll_backend__var_locn__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 1)));
        ll_backend__var_locn__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 2)));
        ll_backend__var_locn__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 3)));
        ll_backend__var_locn__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 4)));
        ll_backend__var_locn__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 5)));
        ll_backend__var_locn__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 6)));
        ll_backend__var_locn__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 7)));
        ll_backend__var_locn__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 8)));
        ll_backend__var_locn__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 9)));
        ll_backend__var_locn__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 10)));
        ll_backend__var_locn__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 11)));
        ll_backend__var_locn__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 12)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
          *ll_backend__var_locn__STATE_VARIABLE_VLI_9 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__var_locn__Var_31));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__var_locn__Var_32));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__var_locn__Var_33));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__var_locn__Var_34));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__var_locn__Var_35));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__var_locn__Var_36));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__var_locn__Var_37));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__var_locn__Var_38));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__var_locn__Var_39));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ll_backend__var_locn__Acquired_7));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ll_backend__var_locn__Var_41));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ll_backend__var_locn__Var_42));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ll_backend__var_locn__Var_43));
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.var_locn_release_reg\'/3", (MR_String) "unacquired reg");
          return;
        }
      }
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_acquire_reg_start_at_given_5_p_0(
  MR_Word ll_backend__var_locn__Type_6,
  MR_Integer ll_backend__var_locn__Start_7,
  MR_Word * ll_backend__var_locn__Lval_8,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_13,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__var_locn__succeeded;
        MR_Word ll_backend__var_locn__StartLval_10;

        {
          ll_backend__var_locn__StartLval_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__var_locn__StartLval_10, 0) = ((MR_Box) (ll_backend__var_locn__Type_6));
          MR_hl_field(MR_mktag(1), ll_backend__var_locn__StartLval_10, 1) = ((MR_Box) (ll_backend__var_locn__Start_7));
        }
        {
          ll_backend__var_locn__succeeded = ll_backend__var_locn__var_locn_lval_in_use_2_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, ll_backend__var_locn__StartLval_10);
        }
        if (ll_backend__var_locn__succeeded)
          {
            MR_Integer ll_backend__var_locn__Var_15 = (ll_backend__var_locn__Start_7 + (MR_Integer) 1);

            /* direct tailcall eliminated */
            {
              MR_Integer ll_backend__var_locn__next_value_of_Start_7 = ll_backend__var_locn__Var_15;

              ll_backend__var_locn__Start_7 = ll_backend__var_locn__next_value_of_Start_7;
            }
            continue;
          }
        else
          {
            MR_Word ll_backend__var_locn__Acquired0_11;
            MR_Word ll_backend__var_locn__Acquired_12;
            MR_Word ll_backend__var_locn__Var_21;
            MR_Word ll_backend__var_locn__Var_22;
            MR_Word ll_backend__var_locn__Var_23;
            MR_Word ll_backend__var_locn__Var_24;
            MR_Word ll_backend__var_locn__Var_25;
            MR_Integer ll_backend__var_locn__Var_26;
            MR_Integer ll_backend__var_locn__Var_27;
            MR_Word ll_backend__var_locn__Var_28;
            MR_Word ll_backend__var_locn__Var_29;
            MR_Integer ll_backend__var_locn__Var_30;
            MR_Integer ll_backend__var_locn__Var_31;
            MR_Word ll_backend__var_locn__Var_32;
            MR_Word ll_backend__var_locn__Var_35;
            MR_Word ll_backend__var_locn__Var_36;
            MR_Word ll_backend__var_locn__Var_37;
            MR_Word ll_backend__var_locn__Var_38;
            MR_Word ll_backend__var_locn__Var_39;
            MR_Integer ll_backend__var_locn__Var_40;
            MR_Integer ll_backend__var_locn__Var_41;
            MR_Word ll_backend__var_locn__Var_42;
            MR_Word ll_backend__var_locn__Var_43;
            MR_Integer ll_backend__var_locn__Var_45;
            MR_Integer ll_backend__var_locn__Var_46;
            MR_Word ll_backend__var_locn__Var_47;
            MR_Word ll_backend__var_locn__Var_44;

            *ll_backend__var_locn__Lval_8 = ll_backend__var_locn__StartLval_10;
            ll_backend__var_locn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 0)));
            ll_backend__var_locn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 1)));
            ll_backend__var_locn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 2)));
            ll_backend__var_locn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 3)));
            ll_backend__var_locn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 4)));
            ll_backend__var_locn__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 5)));
            ll_backend__var_locn__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 6)));
            ll_backend__var_locn__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 7)));
            ll_backend__var_locn__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 8)));
            ll_backend__var_locn__Acquired0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 9)));
            ll_backend__var_locn__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 10)));
            ll_backend__var_locn__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 11)));
            ll_backend__var_locn__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 12)));
            {
              mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (*ll_backend__var_locn__Lval_8)), ll_backend__var_locn__Acquired0_11, &ll_backend__var_locn__Acquired_12);
            }
            ll_backend__var_locn__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 0)));
            ll_backend__var_locn__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 1)));
            ll_backend__var_locn__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 2)));
            ll_backend__var_locn__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 3)));
            ll_backend__var_locn__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 4)));
            ll_backend__var_locn__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 5)));
            ll_backend__var_locn__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 6)));
            ll_backend__var_locn__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 7)));
            ll_backend__var_locn__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 8)));
            ll_backend__var_locn__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 9)));
            ll_backend__var_locn__Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 10)));
            ll_backend__var_locn__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 11)));
            ll_backend__var_locn__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 12)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
              *ll_backend__var_locn__STATE_VARIABLE_VLI_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__var_locn__Var_35));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__var_locn__Var_36));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__var_locn__Var_37));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__var_locn__Var_38));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__var_locn__Var_39));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__var_locn__Var_40));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__var_locn__Var_41));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__var_locn__Var_42));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__var_locn__Var_43));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ll_backend__var_locn__Acquired_12));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ll_backend__var_locn__Var_45));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ll_backend__var_locn__Var_46));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ll_backend__var_locn__Var_47));
            }
          }
      }
      break;
    }
}

void MR_CALL 
ll_backend__var_locn__var_locn_acquire_reg_prefer_given_5_p_0(
  MR_Word ll_backend__var_locn__Type_6,
  MR_Integer ll_backend__var_locn__Pref_7,
  MR_Word * ll_backend__var_locn__Lval_8,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_13,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_14)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__PrefLval_10;
    MR_Word ll_backend__var_locn__Acquired0_11;
    MR_Word ll_backend__var_locn__Acquired_12;
    MR_Word ll_backend__var_locn__Var_62;
    MR_Word ll_backend__var_locn__Var_63;
    MR_Word ll_backend__var_locn__Var_64;
    MR_Word ll_backend__var_locn__Var_65;
    MR_Word ll_backend__var_locn__Var_66;
    MR_Integer ll_backend__var_locn__Var_67;
    MR_Integer ll_backend__var_locn__Var_68;
    MR_Word ll_backend__var_locn__Var_69;
    MR_Word ll_backend__var_locn__Var_70;
    MR_Integer ll_backend__var_locn__Var_71;
    MR_Integer ll_backend__var_locn__Var_72;
    MR_Word ll_backend__var_locn__Var_73;
    MR_Word ll_backend__var_locn__Var_76;
    MR_Word ll_backend__var_locn__Var_77;
    MR_Word ll_backend__var_locn__Var_78;
    MR_Word ll_backend__var_locn__Var_79;
    MR_Word ll_backend__var_locn__Var_80;
    MR_Integer ll_backend__var_locn__Var_81;
    MR_Integer ll_backend__var_locn__Var_82;
    MR_Word ll_backend__var_locn__Var_83;
    MR_Word ll_backend__var_locn__Var_84;
    MR_Integer ll_backend__var_locn__Var_86;
    MR_Integer ll_backend__var_locn__Var_87;
    MR_Word ll_backend__var_locn__Var_88;
    MR_Word ll_backend__var_locn__Var_85;

    {
      ll_backend__var_locn__PrefLval_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__var_locn__PrefLval_10, 0) = ((MR_Box) (ll_backend__var_locn__Type_6));
      MR_hl_field(MR_mktag(1), ll_backend__var_locn__PrefLval_10, 1) = ((MR_Box) (ll_backend__var_locn__Pref_7));
    }
    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__var_locn_lval_in_use_2_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, ll_backend__var_locn__PrefLval_10);
    }
    if (ll_backend__var_locn__succeeded)
      {
        MR_Integer ll_backend__var_locn__NextNonReserved_20;
        MR_Integer ll_backend__var_locn__Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 6)));
        MR_Integer ll_backend__var_locn__Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 5)));
        MR_Word ll_backend__var_locn__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 12)));
        MR_Integer ll_backend__var_locn__Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 11)));
        MR_Integer ll_backend__var_locn__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 10)));
        MR_Word ll_backend__var_locn__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 9)));
        MR_Word ll_backend__var_locn__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 8)));
        MR_Word ll_backend__var_locn__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 7)));
        MR_Word ll_backend__var_locn__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 4)));
        MR_Word ll_backend__var_locn__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 3)));
        MR_Word ll_backend__var_locn__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 2)));
        MR_Word ll_backend__var_locn__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 1)));
        MR_Word ll_backend__var_locn__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 0)));

        switch (ll_backend__var_locn__Type_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            ll_backend__var_locn__NextNonReserved_20 = ll_backend__var_locn__Var_54;
            break;
          case (MR_Integer) 0:
            ll_backend__var_locn__NextNonReserved_20 = ll_backend__var_locn__Var_55;
            break;
        }
        {
          ll_backend__var_locn__get_spare_reg_2_5_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, ll_backend__var_locn__Type_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__NextNonReserved_20, ll_backend__var_locn__Lval_8);
        }
      }
    else
      *ll_backend__var_locn__Lval_8 = ll_backend__var_locn__PrefLval_10;
    ll_backend__var_locn__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 0)));
    ll_backend__var_locn__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 1)));
    ll_backend__var_locn__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 2)));
    ll_backend__var_locn__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 3)));
    ll_backend__var_locn__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 4)));
    ll_backend__var_locn__Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 5)));
    ll_backend__var_locn__Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 6)));
    ll_backend__var_locn__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 7)));
    ll_backend__var_locn__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 8)));
    ll_backend__var_locn__Acquired0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 9)));
    ll_backend__var_locn__Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 10)));
    ll_backend__var_locn__Var_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 11)));
    ll_backend__var_locn__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 12)));
    {
      mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (*ll_backend__var_locn__Lval_8)), ll_backend__var_locn__Acquired0_11, &ll_backend__var_locn__Acquired_12);
    }
    ll_backend__var_locn__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 0)));
    ll_backend__var_locn__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 1)));
    ll_backend__var_locn__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 2)));
    ll_backend__var_locn__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 3)));
    ll_backend__var_locn__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 4)));
    ll_backend__var_locn__Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 5)));
    ll_backend__var_locn__Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 6)));
    ll_backend__var_locn__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 7)));
    ll_backend__var_locn__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 8)));
    ll_backend__var_locn__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 9)));
    ll_backend__var_locn__Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 10)));
    ll_backend__var_locn__Var_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 11)));
    ll_backend__var_locn__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 12)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__var_locn__STATE_VARIABLE_VLI_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__var_locn__Var_76));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__var_locn__Var_77));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__var_locn__Var_78));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__var_locn__Var_79));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__var_locn__Var_80));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__var_locn__Var_81));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__var_locn__Var_82));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__var_locn__Var_83));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__var_locn__Var_84));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ll_backend__var_locn__Acquired_12));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ll_backend__var_locn__Var_86));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ll_backend__var_locn__Var_87));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ll_backend__var_locn__Var_88));
    }
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_acquire_reg_require_given_3_p_0(
  MR_Word ll_backend__var_locn__Lval_4,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_8,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_9)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Acquired0_6;
    MR_Word ll_backend__var_locn__Acquired_7;
    MR_Word ll_backend__var_locn__Var_16;
    MR_Word ll_backend__var_locn__Var_17;
    MR_Word ll_backend__var_locn__Var_18;
    MR_Word ll_backend__var_locn__Var_19;
    MR_Word ll_backend__var_locn__Var_20;
    MR_Integer ll_backend__var_locn__Var_21;
    MR_Integer ll_backend__var_locn__Var_22;
    MR_Word ll_backend__var_locn__Var_23;
    MR_Word ll_backend__var_locn__Var_24;
    MR_Integer ll_backend__var_locn__Var_25;
    MR_Integer ll_backend__var_locn__Var_26;
    MR_Word ll_backend__var_locn__Var_27;
    MR_Word ll_backend__var_locn__Var_30;
    MR_Word ll_backend__var_locn__Var_31;
    MR_Word ll_backend__var_locn__Var_32;
    MR_Word ll_backend__var_locn__Var_33;
    MR_Word ll_backend__var_locn__Var_34;
    MR_Integer ll_backend__var_locn__Var_35;
    MR_Integer ll_backend__var_locn__Var_36;
    MR_Word ll_backend__var_locn__Var_37;
    MR_Word ll_backend__var_locn__Var_38;
    MR_Integer ll_backend__var_locn__Var_40;
    MR_Integer ll_backend__var_locn__Var_41;
    MR_Word ll_backend__var_locn__Var_42;
    MR_Word ll_backend__var_locn__Var_39;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__var_locn_lval_in_use_2_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, ll_backend__var_locn__Lval_4);
    }
    if (ll_backend__var_locn__succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.var_locn_acquire_reg_require_given\'/3", (MR_String) "lval in use");
          return;
        }
      }
    else
      {
      }
    ll_backend__var_locn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 0)));
    ll_backend__var_locn__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 1)));
    ll_backend__var_locn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 2)));
    ll_backend__var_locn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 3)));
    ll_backend__var_locn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 4)));
    ll_backend__var_locn__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 5)));
    ll_backend__var_locn__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 6)));
    ll_backend__var_locn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 7)));
    ll_backend__var_locn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 8)));
    ll_backend__var_locn__Acquired0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 9)));
    ll_backend__var_locn__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 10)));
    ll_backend__var_locn__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 11)));
    ll_backend__var_locn__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 12)));
    {
      mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__var_locn__Lval_4)), ll_backend__var_locn__Acquired0_6, &ll_backend__var_locn__Acquired_7);
    }
    ll_backend__var_locn__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 0)));
    ll_backend__var_locn__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 1)));
    ll_backend__var_locn__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 2)));
    ll_backend__var_locn__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 3)));
    ll_backend__var_locn__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 4)));
    ll_backend__var_locn__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 5)));
    ll_backend__var_locn__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 6)));
    ll_backend__var_locn__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 7)));
    ll_backend__var_locn__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 8)));
    ll_backend__var_locn__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 9)));
    ll_backend__var_locn__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 10)));
    ll_backend__var_locn__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 11)));
    ll_backend__var_locn__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, (MR_Integer) 12)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__var_locn__STATE_VARIABLE_VLI_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__var_locn__Var_30));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__var_locn__Var_31));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__var_locn__Var_32));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__var_locn__Var_33));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__var_locn__Var_34));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__var_locn__Var_35));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__var_locn__Var_36));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__var_locn__Var_37));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__var_locn__Var_38));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ll_backend__var_locn__Acquired_7));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ll_backend__var_locn__Var_40));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ll_backend__var_locn__Var_41));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ll_backend__var_locn__Var_42));
    }
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_acquire_reg_4_p_0(
  MR_Word ll_backend__var_locn__Type_5,
  MR_Word * ll_backend__var_locn__Lval_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_10,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_11)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Acquired0_8;
    MR_Word ll_backend__var_locn__Acquired_9;
    MR_Integer ll_backend__var_locn__NextNonReserved_17;
    MR_Integer ll_backend__var_locn__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 6)));
    MR_Integer ll_backend__var_locn__Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 5)));
    MR_Word ll_backend__var_locn__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 12)));
    MR_Integer ll_backend__var_locn__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 11)));
    MR_Integer ll_backend__var_locn__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 10)));
    MR_Word ll_backend__var_locn__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 9)));
    MR_Word ll_backend__var_locn__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 4)));
    MR_Word ll_backend__var_locn__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_59;
    MR_Word ll_backend__var_locn__Var_60;
    MR_Word ll_backend__var_locn__Var_61;
    MR_Word ll_backend__var_locn__Var_62;
    MR_Word ll_backend__var_locn__Var_63;
    MR_Integer ll_backend__var_locn__Var_64;
    MR_Integer ll_backend__var_locn__Var_65;
    MR_Word ll_backend__var_locn__Var_66;
    MR_Word ll_backend__var_locn__Var_67;
    MR_Integer ll_backend__var_locn__Var_68;
    MR_Integer ll_backend__var_locn__Var_69;
    MR_Word ll_backend__var_locn__Var_70;
    MR_Word ll_backend__var_locn__Var_73;
    MR_Word ll_backend__var_locn__Var_74;
    MR_Word ll_backend__var_locn__Var_75;
    MR_Word ll_backend__var_locn__Var_76;
    MR_Word ll_backend__var_locn__Var_77;
    MR_Integer ll_backend__var_locn__Var_78;
    MR_Integer ll_backend__var_locn__Var_79;
    MR_Word ll_backend__var_locn__Var_80;
    MR_Word ll_backend__var_locn__Var_81;
    MR_Integer ll_backend__var_locn__Var_83;
    MR_Integer ll_backend__var_locn__Var_84;
    MR_Word ll_backend__var_locn__Var_85;
    MR_Word ll_backend__var_locn__Var_82;

    switch (ll_backend__var_locn__Type_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ll_backend__var_locn__NextNonReserved_17 = ll_backend__var_locn__Var_51;
        break;
      case (MR_Integer) 0:
        ll_backend__var_locn__NextNonReserved_17 = ll_backend__var_locn__Var_52;
        break;
    }
    {
      ll_backend__var_locn__get_spare_reg_2_5_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, ll_backend__var_locn__Type_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__NextNonReserved_17, ll_backend__var_locn__Lval_6);
    }
    ll_backend__var_locn__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 0)));
    ll_backend__var_locn__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 1)));
    ll_backend__var_locn__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 2)));
    ll_backend__var_locn__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 3)));
    ll_backend__var_locn__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 4)));
    ll_backend__var_locn__Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 5)));
    ll_backend__var_locn__Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 6)));
    ll_backend__var_locn__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 7)));
    ll_backend__var_locn__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 8)));
    ll_backend__var_locn__Acquired0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 9)));
    ll_backend__var_locn__Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 10)));
    ll_backend__var_locn__Var_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 11)));
    ll_backend__var_locn__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 12)));
    {
      mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (*ll_backend__var_locn__Lval_6)), ll_backend__var_locn__Acquired0_8, &ll_backend__var_locn__Acquired_9);
    }
    ll_backend__var_locn__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 0)));
    ll_backend__var_locn__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 1)));
    ll_backend__var_locn__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 2)));
    ll_backend__var_locn__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 3)));
    ll_backend__var_locn__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 4)));
    ll_backend__var_locn__Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 5)));
    ll_backend__var_locn__Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 6)));
    ll_backend__var_locn__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 7)));
    ll_backend__var_locn__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 8)));
    ll_backend__var_locn__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 9)));
    ll_backend__var_locn__Var_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 10)));
    ll_backend__var_locn__Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 11)));
    ll_backend__var_locn__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_10, (MR_Integer) 12)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__var_locn__STATE_VARIABLE_VLI_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__var_locn__Var_73));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__var_locn__Var_74));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__var_locn__Var_75));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__var_locn__Var_76));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__var_locn__Var_77));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__var_locn__Var_78));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__var_locn__Var_79));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__var_locn__Var_80));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__var_locn__Var_81));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ll_backend__var_locn__Acquired_9));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ll_backend__var_locn__Var_83));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ll_backend__var_locn__Var_84));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ll_backend__var_locn__Var_85));
    }
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_produce_var_in_reg_or_stack_6_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_7,
  MR_Word ll_backend__var_locn__Var_8,
  MR_Word * ll_backend__var_locn__Lval_9,
  MR_Word * ll_backend__var_locn__Code_10,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_22,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_23)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__VarStateMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__State_13;
    MR_Word ll_backend__var_locn__Lvals_14;
    MR_Word ll_backend__var_locn__LvalList_19;
    MR_Word ll_backend__var_locn__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 12)));
    MR_Box ll_backend__var_locn__conv0_State_13;
    MR_Word ll_backend__var_locn__Var_15;
    MR_Word ll_backend__var_locn__Var_16;
    MR_Word ll_backend__var_locn__Var_17;
    MR_Word ll_backend__var_locn__Var_18;
    MR_Word ll_backend__var_locn__SelectLval_20;

    {
      mercury__map__lookup_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, ll_backend__var_locn__VarStateMap_12, ((MR_Box) (ll_backend__var_locn__Var_8)), &ll_backend__var_locn__conv0_State_13);
    }
    ll_backend__var_locn__State_13 = ((MR_Word) ll_backend__var_locn__conv0_State_13);
    ll_backend__var_locn__Lvals_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_13, (MR_Integer) 0)));
    ll_backend__var_locn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_13, (MR_Integer) 1)));
    ll_backend__var_locn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_13, (MR_Integer) 2)));
    ll_backend__var_locn__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_13, (MR_Integer) 3)));
    ll_backend__var_locn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_13, (MR_Integer) 4)));
    {
      mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__var_locn__Lvals_14, &ll_backend__var_locn__LvalList_19);
    }
    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__select_reg_or_stack_lval_2_p_0(ll_backend__var_locn__LvalList_19, &ll_backend__var_locn__SelectLval_20);
    }
    if (ll_backend__var_locn__succeeded)
      {
        *ll_backend__var_locn__Lval_9 = ll_backend__var_locn__SelectLval_20;
        {
          *ll_backend__var_locn__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
        *ll_backend__var_locn__STATE_VARIABLE_VLI_23 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_22;
      }
    else
      {
        MR_Word ll_backend__var_locn__RegType_21;
        MR_Word ll_backend__var_locn__FloatRegType_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 2)));
        MR_Word ll_backend__var_locn__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 1)));
        MR_Word ll_backend__var_locn__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 3)));
        MR_Word ll_backend__var_locn__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 4)));
        MR_Integer ll_backend__var_locn__Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 5)));
        MR_Integer ll_backend__var_locn__Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 6)));
        MR_Word ll_backend__var_locn__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 7)));
        MR_Word ll_backend__var_locn__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 8)));
        MR_Word ll_backend__var_locn__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 9)));
        MR_Integer ll_backend__var_locn__Var_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 10)));
        MR_Integer ll_backend__var_locn__Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 11)));
        MR_Word ll_backend__var_locn__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 12)));

        switch (ll_backend__var_locn__FloatRegType_45) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__var_locn__VarType_47;
              MR_Word ll_backend__var_locn__Var_48;

              {
                hlds__vartypes__lookup_var_type_3_p_0(ll_backend__var_locn__Var_52, ll_backend__var_locn__Var_8, &ll_backend__var_locn__VarType_47);
              }
              {
                ll_backend__var_locn__Var_48 = parse_tree__builtin_lib_types__float_type_0_f_0();
              }
              {
                ll_backend__var_locn__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__var_locn__VarType_47, ll_backend__var_locn__Var_48);
              }
              if (ll_backend__var_locn__succeeded)
                ll_backend__var_locn__RegType_21 = (MR_Integer) 1;
              else
                ll_backend__var_locn__RegType_21 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 0:
            ll_backend__var_locn__RegType_21 = (MR_Integer) 0;
            break;
        }
        {
          ll_backend__var_locn__select_preferred_reg_or_stack_4_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, ll_backend__var_locn__Var_8, ll_backend__var_locn__RegType_21, ll_backend__var_locn__Lval_9);
        }
        {
          ll_backend__var_locn__actually_place_var_7_p_0(ll_backend__var_locn__ModuleInfo_7, ll_backend__var_locn__Var_8, *ll_backend__var_locn__Lval_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Code_10, ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, ll_backend__var_locn__STATE_VARIABLE_VLI_23);
        }
      }
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_produce_var_in_reg_6_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_7,
  MR_Word ll_backend__var_locn__Var_8,
  MR_Word * ll_backend__var_locn__Lval_9,
  MR_Word * ll_backend__var_locn__Code_10,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_22,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_23)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__VarStateMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__State_13;
    MR_Word ll_backend__var_locn__Lvals_14;
    MR_Word ll_backend__var_locn__LvalList_19;
    MR_Word ll_backend__var_locn__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 12)));
    MR_Box ll_backend__var_locn__conv0_State_13;
    MR_Word ll_backend__var_locn__Var_15;
    MR_Word ll_backend__var_locn__Var_16;
    MR_Word ll_backend__var_locn__Var_17;
    MR_Word ll_backend__var_locn__Var_18;
    MR_Word ll_backend__var_locn__SelectLval_20;

    {
      mercury__map__lookup_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, ll_backend__var_locn__VarStateMap_12, ((MR_Box) (ll_backend__var_locn__Var_8)), &ll_backend__var_locn__conv0_State_13);
    }
    ll_backend__var_locn__State_13 = ((MR_Word) ll_backend__var_locn__conv0_State_13);
    ll_backend__var_locn__Lvals_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_13, (MR_Integer) 0)));
    ll_backend__var_locn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_13, (MR_Integer) 1)));
    ll_backend__var_locn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_13, (MR_Integer) 2)));
    ll_backend__var_locn__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_13, (MR_Integer) 3)));
    ll_backend__var_locn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_13, (MR_Integer) 4)));
    {
      mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__var_locn__Lvals_14, &ll_backend__var_locn__LvalList_19);
    }
    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__select_reg_lval_2_p_0(ll_backend__var_locn__LvalList_19, &ll_backend__var_locn__SelectLval_20);
    }
    if (ll_backend__var_locn__succeeded)
      {
        *ll_backend__var_locn__Lval_9 = ll_backend__var_locn__SelectLval_20;
        {
          *ll_backend__var_locn__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
        *ll_backend__var_locn__STATE_VARIABLE_VLI_23 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_22;
      }
    else
      {
        MR_Word ll_backend__var_locn__RegType_21;
        MR_Word ll_backend__var_locn__FloatRegType_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 2)));
        MR_Word ll_backend__var_locn__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 1)));
        MR_Word ll_backend__var_locn__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 3)));
        MR_Word ll_backend__var_locn__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 4)));
        MR_Integer ll_backend__var_locn__Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 5)));
        MR_Integer ll_backend__var_locn__Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 6)));
        MR_Word ll_backend__var_locn__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 7)));
        MR_Word ll_backend__var_locn__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 8)));
        MR_Word ll_backend__var_locn__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 9)));
        MR_Integer ll_backend__var_locn__Var_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 10)));
        MR_Integer ll_backend__var_locn__Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 11)));
        MR_Word ll_backend__var_locn__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 12)));

        switch (ll_backend__var_locn__FloatRegType_45) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__var_locn__VarType_47;
              MR_Word ll_backend__var_locn__Var_48;

              {
                hlds__vartypes__lookup_var_type_3_p_0(ll_backend__var_locn__Var_52, ll_backend__var_locn__Var_8, &ll_backend__var_locn__VarType_47);
              }
              {
                ll_backend__var_locn__Var_48 = parse_tree__builtin_lib_types__float_type_0_f_0();
              }
              {
                ll_backend__var_locn__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__var_locn__VarType_47, ll_backend__var_locn__Var_48);
              }
              if (ll_backend__var_locn__succeeded)
                ll_backend__var_locn__RegType_21 = (MR_Integer) 1;
              else
                ll_backend__var_locn__RegType_21 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 0:
            ll_backend__var_locn__RegType_21 = (MR_Integer) 0;
            break;
        }
        {
          ll_backend__var_locn__select_preferred_reg_4_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, ll_backend__var_locn__Var_8, ll_backend__var_locn__RegType_21, ll_backend__var_locn__Lval_9);
        }
        {
          ll_backend__var_locn__actually_place_var_7_p_0(ll_backend__var_locn__ModuleInfo_7, ll_backend__var_locn__Var_8, *ll_backend__var_locn__Lval_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Code_10, ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, ll_backend__var_locn__STATE_VARIABLE_VLI_23);
        }
      }
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_produce_var_6_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_7,
  MR_Word ll_backend__var_locn__Var_8,
  MR_Word * ll_backend__var_locn__Rval_9,
  MR_Word * ll_backend__var_locn__Code_10,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_32,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_33)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__TypeInfo_36_36 = (MR_Word) &ll_backend__var_locn_scalar_common_1[0];
    MR_Word ll_backend__var_locn__TypeCtorInfo_37_37 = (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0;
    MR_Word ll_backend__var_locn__TypeCtorInfo_38_38;
    MR_Word ll_backend__var_locn__VarStateMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__State_13;
    MR_Word ll_backend__var_locn__Lvals_14;
    MR_Word ll_backend__var_locn__MaybeConstRval_15;
    MR_Word ll_backend__var_locn__MaybeExprRval_16;
    MR_Word ll_backend__var_locn__LvalsList_19;
    MR_Word ll_backend__var_locn__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, (MR_Integer) 12)));
    MR_Box ll_backend__var_locn__conv0_State_13;
    MR_Word ll_backend__var_locn__Var_17;
    MR_Word ll_backend__var_locn__Var_18;
    MR_Word ll_backend__var_locn__Rval1_20;
    MR_Word ll_backend__var_locn__Lval1_57;

    {
      mercury__map__lookup_3_p_0(ll_backend__var_locn__TypeInfo_36_36, ll_backend__var_locn__TypeCtorInfo_37_37, ll_backend__var_locn__VarStateMap_12, ((MR_Box) (ll_backend__var_locn__Var_8)), &ll_backend__var_locn__conv0_State_13);
    }
    ll_backend__var_locn__State_13 = ((MR_Word) ll_backend__var_locn__conv0_State_13);
    ll_backend__var_locn__Lvals_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_13, (MR_Integer) 0)));
    ll_backend__var_locn__MaybeConstRval_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_13, (MR_Integer) 1)));
    ll_backend__var_locn__MaybeExprRval_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_13, (MR_Integer) 2)));
    ll_backend__var_locn__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_13, (MR_Integer) 3)));
    ll_backend__var_locn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_13, (MR_Integer) 4)));
    ll_backend__var_locn__TypeCtorInfo_38_38 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    {
      mercury__set__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_38_38, ll_backend__var_locn__Lvals_14, &ll_backend__var_locn__LvalsList_19);
    }
    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__select_reg_lval_2_p_0(ll_backend__var_locn__LvalsList_19, &ll_backend__var_locn__Lval1_57);
    }
    if (ll_backend__var_locn__succeeded)
      {
        {
          ll_backend__var_locn__Rval1_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Rval1_20, 0) = ((MR_Box) (ll_backend__var_locn__Lval1_57));
        }
        ll_backend__var_locn__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word ll_backend__var_locn__Lval2_58;

        {
          ll_backend__var_locn__succeeded = ll_backend__var_locn__select_stack_lval_2_p_0(ll_backend__var_locn__LvalsList_19, &ll_backend__var_locn__Lval2_58);
        }
        if (ll_backend__var_locn__succeeded)
          {
            {
              ll_backend__var_locn__Rval1_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Rval1_20, 0) = ((MR_Box) (ll_backend__var_locn__Lval2_58));
            }
            ll_backend__var_locn__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word ll_backend__var_locn__ConstRval_59;

            ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__MaybeConstRval_15)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__var_locn__succeeded)
              {
                ll_backend__var_locn__ConstRval_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__MaybeConstRval_15, (MR_Integer) 0)));
                ll_backend__var_locn__Rval1_20 = ll_backend__var_locn__ConstRval_59;
                ll_backend__var_locn__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word ll_backend__var_locn__Lval3_60;
                MR_Word ll_backend__var_locn__Var_62;

                ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__LvalsList_19)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__var_locn__succeeded)
                  {
                    ll_backend__var_locn__Lval3_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__LvalsList_19, (MR_Integer) 0)));
                    ll_backend__var_locn__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__LvalsList_19, (MR_Integer) 1)));
                    {
                      ll_backend__var_locn__Rval1_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Rval1_20, 0) = ((MR_Box) (ll_backend__var_locn__Lval3_60));
                    }
                    ll_backend__var_locn__succeeded = MR_TRUE;
                  }
              }
          }
      }
    if (ll_backend__var_locn__succeeded)
      {
        *ll_backend__var_locn__Rval_9 = ll_backend__var_locn__Rval1_20;
        {
          *ll_backend__var_locn__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
        *ll_backend__var_locn__STATE_VARIABLE_VLI_33 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_32;
      }
    else
      {
        MR_Word ll_backend__var_locn__Rval2_29;
        MR_Word ll_backend__var_locn__ExprVar_21;
        MR_Word ll_backend__var_locn__ExprState_22;
        MR_Word ll_backend__var_locn__ExprLvals_23;
        MR_Word ll_backend__var_locn__ExprMaybeConstRval_24;
        MR_Word ll_backend__var_locn__ExprLvalsList_28;
        MR_Word ll_backend__var_locn__Var_34;
        MR_Box ll_backend__var_locn__conv1_ExprState_22;
        MR_Word ll_backend__var_locn__Var_25;
        MR_Word ll_backend__var_locn__Var_26;
        MR_Word ll_backend__var_locn__Var_27;
        MR_Word ll_backend__var_locn__Lval1_66;

        ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__MaybeExprRval_16)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__var_locn__succeeded)
          {
            ll_backend__var_locn__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__MaybeExprRval_16, (MR_Integer) 0)));
            ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__Var_34)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__var_locn__succeeded)
              {
                ll_backend__var_locn__ExprVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_34, (MR_Integer) 0)));
                {
                  mercury__map__lookup_3_p_0(ll_backend__var_locn__TypeInfo_36_36, ll_backend__var_locn__TypeCtorInfo_37_37, ll_backend__var_locn__VarStateMap_12, ((MR_Box) (ll_backend__var_locn__ExprVar_21)), &ll_backend__var_locn__conv1_ExprState_22);
                }
                ll_backend__var_locn__ExprState_22 = ((MR_Word) ll_backend__var_locn__conv1_ExprState_22);
                ll_backend__var_locn__ExprLvals_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__ExprState_22, (MR_Integer) 0)));
                ll_backend__var_locn__ExprMaybeConstRval_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__ExprState_22, (MR_Integer) 1)));
                ll_backend__var_locn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__ExprState_22, (MR_Integer) 2)));
                ll_backend__var_locn__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__ExprState_22, (MR_Integer) 3)));
                ll_backend__var_locn__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__ExprState_22, (MR_Integer) 4)));
                {
                  mercury__set__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_38_38, ll_backend__var_locn__ExprLvals_23, &ll_backend__var_locn__ExprLvalsList_28);
                }
                {
                  ll_backend__var_locn__succeeded = ll_backend__var_locn__select_reg_lval_2_p_0(ll_backend__var_locn__ExprLvalsList_28, &ll_backend__var_locn__Lval1_66);
                }
                if (ll_backend__var_locn__succeeded)
                  {
                    {
                      ll_backend__var_locn__Rval2_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Rval2_29, 0) = ((MR_Box) (ll_backend__var_locn__Lval1_66));
                    }
                    ll_backend__var_locn__succeeded = MR_TRUE;
                  }
                else
                  {
                    MR_Word ll_backend__var_locn__Lval2_67;

                    {
                      ll_backend__var_locn__succeeded = ll_backend__var_locn__select_stack_lval_2_p_0(ll_backend__var_locn__ExprLvalsList_28, &ll_backend__var_locn__Lval2_67);
                    }
                    if (ll_backend__var_locn__succeeded)
                      {
                        {
                          ll_backend__var_locn__Rval2_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Rval2_29, 0) = ((MR_Box) (ll_backend__var_locn__Lval2_67));
                        }
                        ll_backend__var_locn__succeeded = MR_TRUE;
                      }
                    else
                      {
                        MR_Word ll_backend__var_locn__ConstRval_68;

                        ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__ExprMaybeConstRval_24)) == (MR_mktag((MR_Integer) 1)));
                        if (ll_backend__var_locn__succeeded)
                          {
                            ll_backend__var_locn__ConstRval_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__ExprMaybeConstRval_24, (MR_Integer) 0)));
                            ll_backend__var_locn__Rval2_29 = ll_backend__var_locn__ConstRval_68;
                            ll_backend__var_locn__succeeded = MR_TRUE;
                          }
                        else
                          {
                            MR_Word ll_backend__var_locn__Lval3_69;
                            MR_Word ll_backend__var_locn__Var_71;

                            ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__ExprLvalsList_28)) == (MR_mktag((MR_Integer) 1)));
                            if (ll_backend__var_locn__succeeded)
                              {
                                ll_backend__var_locn__Lval3_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__ExprLvalsList_28, (MR_Integer) 0)));
                                ll_backend__var_locn__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__ExprLvalsList_28, (MR_Integer) 1)));
                                {
                                  ll_backend__var_locn__Rval2_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), ll_backend__var_locn__Rval2_29, 0) = ((MR_Box) (ll_backend__var_locn__Lval3_69));
                                }
                                ll_backend__var_locn__succeeded = MR_TRUE;
                              }
                          }
                      }
                  }
              }
          }
        if (ll_backend__var_locn__succeeded)
          {
            *ll_backend__var_locn__Rval_9 = ll_backend__var_locn__Rval2_29;
            {
              *ll_backend__var_locn__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
            *ll_backend__var_locn__STATE_VARIABLE_VLI_33 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_32;
          }
        else
          {
            MR_Word ll_backend__var_locn__RegType_30;
            MR_Word ll_backend__var_locn__Lval_31;

            {
              ll_backend__var_locn__reg_type_for_var_3_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, ll_backend__var_locn__Var_8, &ll_backend__var_locn__RegType_30);
            }
            {
              ll_backend__var_locn__select_preferred_reg_4_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, ll_backend__var_locn__Var_8, ll_backend__var_locn__RegType_30, &ll_backend__var_locn__Lval_31);
            }
            {
              ll_backend__var_locn__actually_place_var_7_p_0(ll_backend__var_locn__ModuleInfo_7, ll_backend__var_locn__Var_8, ll_backend__var_locn__Lval_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Code_10, ll_backend__var_locn__STATE_VARIABLE_VLI_0_32, ll_backend__var_locn__STATE_VARIABLE_VLI_33);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *ll_backend__var_locn__Rval_9 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__var_locn__Lval_31));
            }
          }
      }
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_place_vars_5_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_6,
  MR_Word ll_backend__var_locn__VarLocns_7,
  MR_Word * ll_backend__var_locn__Code_8,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_13,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_14)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Lvals_10;
    MR_Integer ll_backend__var_locn__MaxRegR_11;
    MR_Integer ll_backend__var_locn__MaxRegF_12;
    MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_15_15;
    MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_16_16;
    MR_Word ll_backend__var_locn__Var_35;
    MR_Word ll_backend__var_locn__Var_36;
    MR_Word ll_backend__var_locn__Var_37;
    MR_Word ll_backend__var_locn__Var_38;
    MR_Word ll_backend__var_locn__Var_39;
    MR_Integer ll_backend__var_locn__Var_40;
    MR_Integer ll_backend__var_locn__Var_41;
    MR_Word ll_backend__var_locn__Var_42;
    MR_Word ll_backend__var_locn__Var_43;
    MR_Word ll_backend__var_locn__Var_44;
    MR_Integer ll_backend__var_locn__Var_45;
    MR_Integer ll_backend__var_locn__Var_46;
    MR_Word ll_backend__var_locn__Var_47;

    {
      mercury__assoc_list__values_2_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__var_locn__VarLocns_7, &ll_backend__var_locn__Lvals_10);
    }
    {
      ll_backend__code_util__max_mentioned_regs_3_p_0(ll_backend__var_locn__Lvals_10, &ll_backend__var_locn__MaxRegR_11, &ll_backend__var_locn__MaxRegF_12);
    }
    ll_backend__var_locn__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 0)));
    ll_backend__var_locn__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 1)));
    ll_backend__var_locn__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 2)));
    ll_backend__var_locn__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 3)));
    ll_backend__var_locn__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 4)));
    ll_backend__var_locn__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 5)));
    ll_backend__var_locn__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 6)));
    ll_backend__var_locn__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 7)));
    ll_backend__var_locn__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 8)));
    ll_backend__var_locn__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 9)));
    ll_backend__var_locn__Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 10)));
    ll_backend__var_locn__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 11)));
    ll_backend__var_locn__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_13, (MR_Integer) 12)));
    {
      ll_backend__var_locn__STATE_VARIABLE_VLI_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_15_15, 0) = ((MR_Box) (ll_backend__var_locn__Var_35));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_15_15, 1) = ((MR_Box) (ll_backend__var_locn__Var_36));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_15_15, 2) = ((MR_Box) (ll_backend__var_locn__Var_37));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_15_15, 3) = ((MR_Box) (ll_backend__var_locn__Var_38));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_15_15, 4) = ((MR_Box) (ll_backend__var_locn__Var_39));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_15_15, 5) = ((MR_Box) (ll_backend__var_locn__Var_40));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_15_15, 6) = ((MR_Box) (ll_backend__var_locn__Var_41));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_15_15, 7) = ((MR_Box) (ll_backend__var_locn__Var_42));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_15_15, 8) = ((MR_Box) (ll_backend__var_locn__Var_43));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_15_15, 9) = ((MR_Box) (ll_backend__var_locn__Var_44));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_15_15, 10) = ((MR_Box) (ll_backend__var_locn__MaxRegR_11));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_15_15, 11) = ((MR_Box) (ll_backend__var_locn__MaxRegF_12));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_15_15, 12) = ((MR_Box) (ll_backend__var_locn__VarLocns_7));
    }
    {
      ll_backend__var_locn__actually_place_vars_5_p_0(ll_backend__var_locn__ModuleInfo_6, ll_backend__var_locn__VarLocns_7, ll_backend__var_locn__Code_8, ll_backend__var_locn__STATE_VARIABLE_VLI_15_15, &ll_backend__var_locn__STATE_VARIABLE_VLI_16_16);
    }
    {
      ll_backend__var_locn__var_locn_unlock_regs_2_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, ll_backend__var_locn__STATE_VARIABLE_VLI_14);
    }
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_place_var_6_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_7,
  MR_Word ll_backend__var_locn__Var_8,
  MR_Word ll_backend__var_locn__Target_9,
  MR_Word * ll_backend__var_locn__Code_10,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_12,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_13)
{
  {
    MR_bool ll_backend__var_locn__succeeded;

    {
      ll_backend__var_locn__actually_place_var_7_p_0(ll_backend__var_locn__ModuleInfo_7, ll_backend__var_locn__Var_8, ll_backend__var_locn__Target_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__Code_10, ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, ll_backend__var_locn__STATE_VARIABLE_VLI_13);
    }
  }
}

static void MR_CALL 
ll_backend__var_locn__var_locn_save_cell_fields_7_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box * ll_backend__var_locn__wrapper_arg_2,
  MR_Box ll_backend__var_locn__wrapper_arg_3,
  MR_Box * ll_backend__var_locn__wrapper_arg_4,
  MR_Box ll_backend__var_locn__wrapper_arg_5,
  MR_Box * ll_backend__var_locn__wrapper_arg_6)
{
  {
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv3_SaveDepVarCode_12;
    MR_Word ll_backend__var_locn__conv2_STATE_VARIABLE_Regs_26;
    MR_Word ll_backend__var_locn__conv1_STATE_VARIABLE_VLI_28;

    {
      ll_backend__var_locn__var_locn_save_cell_fields_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1), &ll_backend__var_locn__conv3_SaveDepVarCode_12, ((MR_Word) ll_backend__var_locn__wrapper_arg_3), &ll_backend__var_locn__conv2_STATE_VARIABLE_Regs_26, ((MR_Word) ll_backend__var_locn__wrapper_arg_5), &ll_backend__var_locn__conv1_STATE_VARIABLE_VLI_28);
    }
    *ll_backend__var_locn__wrapper_arg_2 = ((MR_Box) (ll_backend__var_locn__conv3_SaveDepVarCode_12));
    *ll_backend__var_locn__wrapper_arg_4 = ((MR_Box) (ll_backend__var_locn__conv2_STATE_VARIABLE_Regs_26));
    *ll_backend__var_locn__wrapper_arg_6 = ((MR_Box) (ll_backend__var_locn__conv1_STATE_VARIABLE_VLI_28));
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_save_cell_fields_7_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_8,
  MR_Word ll_backend__var_locn__ReuseVar_9,
  MR_Word ll_backend__var_locn__ReuseLval_10,
  MR_Word * ll_backend__var_locn__Code_11,
  MR_Word * ll_backend__var_locn__Regs_12,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_19,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_20)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__TypeInfo_28_28 = (MR_Word) &ll_backend__var_locn_scalar_common_1[0];
    MR_Word ll_backend__var_locn__VarStateMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__ReuseVarState0_15;
    MR_Word ll_backend__var_locn__DepVarsSet_16;
    MR_Word ll_backend__var_locn__DepVars_17;
    MR_Word ll_backend__var_locn__SaveArgsCode_18;
    MR_Word ll_backend__var_locn__Var_21;
    MR_Word ll_backend__var_locn__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_19, (MR_Integer) 12)));
    MR_Box ll_backend__var_locn__conv0_ReuseVarState0_15;
    MR_Word ll_backend__var_locn__Var_24;
    MR_Word ll_backend__var_locn__Var_25;
    MR_Word ll_backend__var_locn__Var_26;
    MR_Word ll_backend__var_locn__Var_27;
    MR_Box ll_backend__var_locn__conv5_Regs_12;
    MR_Box ll_backend__var_locn__conv4_STATE_VARIABLE_VLI_20;

    {
      mercury__map__lookup_3_p_0(ll_backend__var_locn__TypeInfo_28_28, (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, ll_backend__var_locn__VarStateMap_14, ((MR_Box) (ll_backend__var_locn__ReuseVar_9)), &ll_backend__var_locn__conv0_ReuseVarState0_15);
    }
    ll_backend__var_locn__ReuseVarState0_15 = ((MR_Word) ll_backend__var_locn__conv0_ReuseVarState0_15);
    ll_backend__var_locn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__ReuseVarState0_15, (MR_Integer) 0)));
    ll_backend__var_locn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__ReuseVarState0_15, (MR_Integer) 1)));
    ll_backend__var_locn__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__ReuseVarState0_15, (MR_Integer) 2)));
    ll_backend__var_locn__DepVarsSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__ReuseVarState0_15, (MR_Integer) 3)));
    ll_backend__var_locn__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__ReuseVarState0_15, (MR_Integer) 4)));
    {
      ll_backend__var_locn__DepVars_17 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__var_locn__DepVarsSet_16);
    }
    {
      ll_backend__var_locn__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_21, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_21, 1) = ((MR_Box) (ll_backend__var_locn__var_locn_save_cell_fields_7_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_21, 3) = ((MR_Box) (ll_backend__var_locn__ModuleInfo_8));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_21, 4) = ((MR_Box) (ll_backend__var_locn__ReuseLval_10));
    }
    {
      mercury__list__map_foldl2_7_p_0(ll_backend__var_locn__TypeInfo_28_28, (MR_Word) &ll_backend__var_locn_scalar_common_1[2], (MR_Word) &ll_backend__var_locn_scalar_common_1[3], (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0, ll_backend__var_locn__Var_21, ll_backend__var_locn__DepVars_17, &ll_backend__var_locn__SaveArgsCode_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ll_backend__var_locn__conv5_Regs_12, ((MR_Box) (ll_backend__var_locn__STATE_VARIABLE_VLI_0_19)), &ll_backend__var_locn__conv4_STATE_VARIABLE_VLI_20);
    }
    *ll_backend__var_locn__Regs_12 = ((MR_Word) ll_backend__var_locn__conv5_Regs_12);
    *ll_backend__var_locn__STATE_VARIABLE_VLI_20 = ((MR_Word) ll_backend__var_locn__conv4_STATE_VARIABLE_VLI_20);
    {
      *ll_backend__var_locn__Code_11 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__var_locn__SaveArgsCode_18);
    }
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_assign_cell_to_var_16_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_17,
  MR_Word ll_backend__var_locn__ExprnOpts_18,
  MR_Word ll_backend__var_locn__Var_19,
  MR_Word ll_backend__var_locn__ReserveWordAtStart_20,
  MR_Integer ll_backend__var_locn__Ptag_21,
  MR_Word ll_backend__var_locn__CellArgs0_22,
  MR_Word ll_backend__var_locn__HowToConstruct_23,
  MR_Word ll_backend__var_locn__MaybeSize_24,
  MR_Word ll_backend__var_locn__MaybeAllocId_25,
  MR_Word ll_backend__var_locn__MayUseAtomic_26,
  MR_Word ll_backend__var_locn__Label_27,
  MR_Word * ll_backend__var_locn__Code_28,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_StaticCellInfo_0_43,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_StaticCellInfo_44,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_45,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_46)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__CellArgs_35;
    MR_Word ll_backend__var_locn__MaybeOffset_36;
    MR_Word ll_backend__var_locn__VarStateMap_37;
    MR_Word ll_backend__var_locn__StaticGroundCells_38;
    MR_Word ll_backend__var_locn__Var_57;
    MR_Word ll_backend__var_locn__Var_58;
    MR_Word ll_backend__var_locn__Var_59;
    MR_Word ll_backend__var_locn__Var_60;
    MR_Word ll_backend__var_locn__Var_61;
    MR_Integer ll_backend__var_locn__Var_62;
    MR_Integer ll_backend__var_locn__Var_63;
    MR_Word ll_backend__var_locn__Var_64;
    MR_Word ll_backend__var_locn__Var_65;
    MR_Integer ll_backend__var_locn__Var_66;
    MR_Integer ll_backend__var_locn__Var_67;
    MR_Word ll_backend__var_locn__Var_68;
    MR_Word ll_backend__var_locn__TypedRvals_39;

    if ((ll_backend__var_locn__MaybeSize_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ll_backend__var_locn__CellArgs_35 = ll_backend__var_locn__CellArgs0_22;
        ll_backend__var_locn__MaybeOffset_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word ll_backend__var_locn__SizeSource_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__MaybeSize_24, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__SizeRval_33;
        MR_Word ll_backend__var_locn__Var_48;

        if (((MR_tag((MR_Word) ll_backend__var_locn__SizeSource_31)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word ll_backend__var_locn__SizeVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__SizeSource_31, (MR_Integer) 0)));

            {
              ll_backend__var_locn__SizeRval_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__var_locn__SizeRval_33, 0) = ((MR_Box) (ll_backend__var_locn__SizeVar_34));
            }
          }
        else
          {
            MR_Integer ll_backend__var_locn__Size_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__SizeSource_31, (MR_Integer) 0)));
            MR_Word ll_backend__var_locn__Var_47;

            {
              ll_backend__var_locn__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_47, 0) = ((MR_Box) (ll_backend__var_locn__Size_32));
            }
            {
              ll_backend__var_locn__SizeRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__var_locn__SizeRval_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ll_backend__var_locn__SizeRval_33, 1) = ((MR_Box) (ll_backend__var_locn__Var_47));
            }
          }
        {
          ll_backend__var_locn__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_48, 0) = ((MR_Box) (ll_backend__var_locn__SizeRval_33));
          MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_48, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          ll_backend__var_locn__CellArgs_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__var_locn__CellArgs_35, 0) = ((MR_Box) (ll_backend__var_locn__Var_48));
          MR_hl_field(MR_mktag(1), ll_backend__var_locn__CellArgs_35, 1) = ((MR_Box) (ll_backend__var_locn__CellArgs0_22));
        }
        ll_backend__var_locn__MaybeOffset_36 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__var_locn_scalar_common_6[0]);
      }
    ll_backend__var_locn__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_45, (MR_Integer) 0)));
    ll_backend__var_locn__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_45, (MR_Integer) 1)));
    ll_backend__var_locn__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_45, (MR_Integer) 2)));
    ll_backend__var_locn__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_45, (MR_Integer) 3)));
    ll_backend__var_locn__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_45, (MR_Integer) 4)));
    ll_backend__var_locn__Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_45, (MR_Integer) 5)));
    ll_backend__var_locn__Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_45, (MR_Integer) 6)));
    ll_backend__var_locn__VarStateMap_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_45, (MR_Integer) 7)));
    ll_backend__var_locn__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_45, (MR_Integer) 8)));
    ll_backend__var_locn__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_45, (MR_Integer) 9)));
    ll_backend__var_locn__Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_45, (MR_Integer) 10)));
    ll_backend__var_locn__Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_45, (MR_Integer) 11)));
    ll_backend__var_locn__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_45, (MR_Integer) 12)));
    {
      ll_backend__var_locn__StaticGroundCells_38 = ll_backend__llds__get_static_ground_cells_1_f_0(ll_backend__var_locn__ExprnOpts_18);
    }
    ll_backend__var_locn__succeeded = (ll_backend__var_locn__StaticGroundCells_38 == (MR_Integer) 0);
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__succeeded = ll_backend__var_locn__cell_is_constant_4_p_0(ll_backend__var_locn__VarStateMap_37, ll_backend__var_locn__ExprnOpts_18, ll_backend__var_locn__CellArgs_35, &ll_backend__var_locn__TypedRvals_39);
      }
    if (ll_backend__var_locn__succeeded)
      {
        MR_Word ll_backend__var_locn__DataAddr_40;
        MR_Word ll_backend__var_locn__CellPtrConst_41;
        MR_Word ll_backend__var_locn__CellPtrRval_42;
        MR_Word ll_backend__var_locn__Var_52;

        {
          ll_backend__global_data__add_scalar_static_cell_4_p_0(ll_backend__var_locn__TypedRvals_39, &ll_backend__var_locn__DataAddr_40, ll_backend__var_locn__STATE_VARIABLE_StaticCellInfo_0_43, ll_backend__var_locn__STATE_VARIABLE_StaticCellInfo_44);
        }
        {
          ll_backend__var_locn__Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_52, 1) = ((MR_Box) (ll_backend__var_locn__DataAddr_40));
          MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_52, 2) = ((MR_Box) (ll_backend__var_locn__MaybeOffset_36));
        }
        {
          ll_backend__var_locn__CellPtrConst_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__var_locn__CellPtrConst_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__var_locn__CellPtrConst_41, 1) = ((MR_Box) (ll_backend__var_locn__Var_52));
        }
        {
          ll_backend__var_locn__CellPtrRval_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ll_backend__var_locn__CellPtrRval_42, 0) = ((MR_Box) (ll_backend__var_locn__Ptag_21));
          MR_hl_field(MR_mktag(2), ll_backend__var_locn__CellPtrRval_42, 1) = ((MR_Box) (ll_backend__var_locn__CellPtrConst_41));
        }
        {
          ll_backend__var_locn__var_locn_assign_const_to_var_5_p_0(ll_backend__var_locn__ExprnOpts_18, ll_backend__var_locn__Var_19, ll_backend__var_locn__CellPtrRval_42, ll_backend__var_locn__STATE_VARIABLE_VLI_0_45, ll_backend__var_locn__STATE_VARIABLE_VLI_46);
        }
        {
          *ll_backend__var_locn__Code_28 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
      }
    else
      {
        {
          ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_13_p_0(ll_backend__var_locn__ModuleInfo_17, ll_backend__var_locn__Var_19, ll_backend__var_locn__ReserveWordAtStart_20, ll_backend__var_locn__Ptag_21, ll_backend__var_locn__CellArgs_35, ll_backend__var_locn__HowToConstruct_23, ll_backend__var_locn__MaybeOffset_36, ll_backend__var_locn__MaybeAllocId_25, ll_backend__var_locn__MayUseAtomic_26, ll_backend__var_locn__Label_27, ll_backend__var_locn__Code_28, ll_backend__var_locn__STATE_VARIABLE_VLI_0_45, ll_backend__var_locn__STATE_VARIABLE_VLI_46);
        }
        *ll_backend__var_locn__STATE_VARIABLE_StaticCellInfo_44 = ll_backend__var_locn__STATE_VARIABLE_StaticCellInfo_0_43;
      }
  }
}

static void MR_CALL 
ll_backend__var_locn__var_locn_reassign_mkword_hole_var_6_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv1_STATE_VARIABLE_VLI_9;

    {
      ll_backend__var_locn__clobber_old_lval_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2), &ll_backend__var_locn__conv1_STATE_VARIABLE_VLI_9);
    }
    *ll_backend__var_locn__wrapper_arg_3 = ((MR_Box) (ll_backend__var_locn__conv1_STATE_VARIABLE_VLI_9));
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_reassign_mkword_hole_var_6_p_0(
  MR_Word ll_backend__var_locn__Var_7,
  MR_Integer ll_backend__var_locn__Ptag_8,
  MR_Word ll_backend__var_locn__Rval_9,
  MR_Word * ll_backend__var_locn__Code_10,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_22,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_23)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__TypeInfo_32_32 = (MR_Word) &ll_backend__var_locn_scalar_common_1[0];
    MR_Word ll_backend__var_locn__TypeCtorInfo_33_33 = (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0;
    MR_Word ll_backend__var_locn__VarStateMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__State0_13;
    MR_Word ll_backend__var_locn__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_22, (MR_Integer) 12)));
    MR_Box ll_backend__var_locn__conv0_State0_13;
    MR_Word ll_backend__var_locn__Lvals_14;
    MR_Word ll_backend__var_locn__TypeCtorInfo_34_34;
    MR_Word ll_backend__var_locn__MaybeConstRval_15;
    MR_Word ll_backend__var_locn__MaybeExprRval_16;
    MR_Word ll_backend__var_locn__Using0_17;
    MR_Word ll_backend__var_locn__DeadOrAlive0_18;

    {
      mercury__map__lookup_3_p_0(ll_backend__var_locn__TypeInfo_32_32, ll_backend__var_locn__TypeCtorInfo_33_33, ll_backend__var_locn__VarStateMap0_12, ((MR_Box) (ll_backend__var_locn__Var_7)), &ll_backend__var_locn__conv0_State0_13);
    }
    ll_backend__var_locn__State0_13 = ((MR_Word) ll_backend__var_locn__conv0_State0_13);
    ll_backend__var_locn__Lvals_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_13, (MR_Integer) 0)));
    ll_backend__var_locn__MaybeConstRval_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_13, (MR_Integer) 1)));
    ll_backend__var_locn__MaybeExprRval_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_13, (MR_Integer) 2)));
    ll_backend__var_locn__Using0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_13, (MR_Integer) 3)));
    ll_backend__var_locn__DeadOrAlive0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_13, (MR_Integer) 4)));
    ll_backend__var_locn__succeeded = (ll_backend__var_locn__MaybeExprRval_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (ll_backend__var_locn__succeeded)
      {
        if ((ll_backend__var_locn__MaybeConstRval_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ll_backend__var_locn__succeeded = MR_TRUE;
        else
          {
            MR_Word ll_backend__var_locn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__MaybeConstRval_15, (MR_Integer) 0)));
            MR_Integer ll_backend__var_locn__Var_40;

            ll_backend__var_locn__succeeded = ((((MR_tag((MR_Word) ll_backend__var_locn__Var_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_24, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (ll_backend__var_locn__succeeded)
              {
                ll_backend__var_locn__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_24, (MR_Integer) 1)));
                ll_backend__var_locn__succeeded = (ll_backend__var_locn__Ptag_8 == ll_backend__var_locn__Var_40);
              }
          }
        if (ll_backend__var_locn__succeeded)
          {
            ll_backend__var_locn__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              ll_backend__var_locn__succeeded = parse_tree__set_of_var__is_empty_1_p_0(ll_backend__var_locn__TypeCtorInfo_34_34, ll_backend__var_locn__Using0_17);
            }
            if (ll_backend__var_locn__succeeded)
              ll_backend__var_locn__succeeded = (ll_backend__var_locn__DeadOrAlive0_18 == (MR_Integer) 1);
          }
      }
    if (ll_backend__var_locn__succeeded)
      {
        MR_Word ll_backend__var_locn__VarStateMap1_19;
        MR_Word ll_backend__var_locn__VarStateMap_21;
        MR_Word ll_backend__var_locn__Var_25;
        MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_26_26;
        MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_27_27;
        MR_Box ll_backend__var_locn__conv2_STATE_VARIABLE_VLI_26_26;
        MR_Word ll_backend__var_locn__Var_55;
        MR_Word ll_backend__var_locn__Var_56;
        MR_Word ll_backend__var_locn__Var_57;
        MR_Word ll_backend__var_locn__Var_58;
        MR_Word ll_backend__var_locn__Var_59;
        MR_Integer ll_backend__var_locn__Var_60;
        MR_Integer ll_backend__var_locn__Var_61;
        MR_Word ll_backend__var_locn__Var_62;
        MR_Word ll_backend__var_locn__Var_63;
        MR_Integer ll_backend__var_locn__Var_64;
        MR_Integer ll_backend__var_locn__Var_65;
        MR_Word ll_backend__var_locn__Var_66;
        MR_Word ll_backend__var_locn___State1_20;
        MR_Box ll_backend__var_locn__conv3__State1_20;
        MR_Word ll_backend__var_locn__Var_69;
        MR_Word ll_backend__var_locn__Var_70;
        MR_Word ll_backend__var_locn__Var_71;
        MR_Word ll_backend__var_locn__Var_72;
        MR_Word ll_backend__var_locn__Var_73;
        MR_Integer ll_backend__var_locn__Var_74;
        MR_Integer ll_backend__var_locn__Var_75;
        MR_Word ll_backend__var_locn__Var_77;
        MR_Word ll_backend__var_locn__Var_78;
        MR_Integer ll_backend__var_locn__Var_79;
        MR_Integer ll_backend__var_locn__Var_80;
        MR_Word ll_backend__var_locn__Var_81;
        MR_Word ll_backend__var_locn__Var_76;

        {
          ll_backend__var_locn__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_25, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_25, 1) = ((MR_Box) (ll_backend__var_locn__var_locn_reassign_mkword_hole_var_6_p_0_1));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_25, 3) = ((MR_Box) (ll_backend__var_locn__Var_7));
        }
        {
          mercury__set__fold_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0, ll_backend__var_locn__Var_25, ll_backend__var_locn__Lvals_14, ((MR_Box) (ll_backend__var_locn__STATE_VARIABLE_VLI_0_22)), &ll_backend__var_locn__conv2_STATE_VARIABLE_VLI_26_26);
        }
        ll_backend__var_locn__STATE_VARIABLE_VLI_26_26 = ((MR_Word) ll_backend__var_locn__conv2_STATE_VARIABLE_VLI_26_26);
        ll_backend__var_locn__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 0)));
        ll_backend__var_locn__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 1)));
        ll_backend__var_locn__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 2)));
        ll_backend__var_locn__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 3)));
        ll_backend__var_locn__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 4)));
        ll_backend__var_locn__Var_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 5)));
        ll_backend__var_locn__Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 6)));
        ll_backend__var_locn__VarStateMap1_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 7)));
        ll_backend__var_locn__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 8)));
        ll_backend__var_locn__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 9)));
        ll_backend__var_locn__Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 10)));
        ll_backend__var_locn__Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 11)));
        ll_backend__var_locn__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 12)));
        {
          mercury__map__det_remove_4_p_0(ll_backend__var_locn__TypeInfo_32_32, ll_backend__var_locn__TypeCtorInfo_33_33, ((MR_Box) (ll_backend__var_locn__Var_7)), &ll_backend__var_locn__conv3__State1_20, ll_backend__var_locn__VarStateMap1_19, &ll_backend__var_locn__VarStateMap_21);
        }
        ll_backend__var_locn___State1_20 = ((MR_Word) ll_backend__var_locn__conv3__State1_20);
        ll_backend__var_locn__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 0)));
        ll_backend__var_locn__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 1)));
        ll_backend__var_locn__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 2)));
        ll_backend__var_locn__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 3)));
        ll_backend__var_locn__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 4)));
        ll_backend__var_locn__Var_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 5)));
        ll_backend__var_locn__Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 6)));
        ll_backend__var_locn__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 7)));
        ll_backend__var_locn__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 8)));
        ll_backend__var_locn__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 9)));
        ll_backend__var_locn__Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 10)));
        ll_backend__var_locn__Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 11)));
        ll_backend__var_locn__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_26_26, (MR_Integer) 12)));
        {
          ll_backend__var_locn__STATE_VARIABLE_VLI_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_27_27, 0) = ((MR_Box) (ll_backend__var_locn__Var_69));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_27_27, 1) = ((MR_Box) (ll_backend__var_locn__Var_70));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_27_27, 2) = ((MR_Box) (ll_backend__var_locn__Var_71));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_27_27, 3) = ((MR_Box) (ll_backend__var_locn__Var_72));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_27_27, 4) = ((MR_Box) (ll_backend__var_locn__Var_73));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_27_27, 5) = ((MR_Box) (ll_backend__var_locn__Var_74));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_27_27, 6) = ((MR_Box) (ll_backend__var_locn__Var_75));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_27_27, 7) = ((MR_Box) (ll_backend__var_locn__VarStateMap_21));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_27_27, 8) = ((MR_Box) (ll_backend__var_locn__Var_77));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_27_27, 9) = ((MR_Box) (ll_backend__var_locn__Var_78));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_27_27, 10) = ((MR_Box) (ll_backend__var_locn__Var_79));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_27_27, 11) = ((MR_Box) (ll_backend__var_locn__Var_80));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_27_27, 12) = ((MR_Box) (ll_backend__var_locn__Var_81));
        }
        {
          ll_backend__var_locn__var_locn_assign_expr_to_var_5_p_0(ll_backend__var_locn__Var_7, ll_backend__var_locn__Rval_9, ll_backend__var_locn__Code_10, ll_backend__var_locn__STATE_VARIABLE_VLI_27_27, ll_backend__var_locn__STATE_VARIABLE_VLI_23);
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.var_locn_reassign_mkword_hole_var\'/6", (MR_String) "unexpected var_state");
          return;
        }
      }
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_assign_expr_to_var_5_p_0(
  MR_Word ll_backend__var_locn__Var_6,
  MR_Word ll_backend__var_locn__Rval_7,
  MR_Word * ll_backend__var_locn__HeadVar__3_3,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_15,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_16)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__TypeInfo_26_26;
    MR_Word ll_backend__var_locn__VarStateMap0_9;
    MR_Word ll_backend__var_locn__State_10;
    MR_Word ll_backend__var_locn__VarStateMap1_11;
    MR_Word ll_backend__var_locn__ContainedVars0_12;
    MR_Word ll_backend__var_locn__ContainedVars_13;
    MR_Word ll_backend__var_locn__VarStateMap_14;
    MR_Word ll_backend__var_locn__Var_17;
    MR_Word ll_backend__var_locn__Var_19;
    MR_Word ll_backend__var_locn__Var_20;
    MR_Word ll_backend__var_locn__VarStateMap0_30;
    MR_Word ll_backend__var_locn__Var_40;
    MR_Word ll_backend__var_locn__Var_41;
    MR_Word ll_backend__var_locn__Var_42;
    MR_Word ll_backend__var_locn__Var_43;
    MR_Word ll_backend__var_locn__Var_44;
    MR_Integer ll_backend__var_locn__Var_45;
    MR_Integer ll_backend__var_locn__Var_46;
    MR_Word ll_backend__var_locn__Var_47;
    MR_Word ll_backend__var_locn__Var_48;
    MR_Integer ll_backend__var_locn__Var_49;
    MR_Integer ll_backend__var_locn__Var_50;
    MR_Word ll_backend__var_locn__Var_51;
    MR_Word ll_backend__var_locn__Var_31;
    MR_Box ll_backend__var_locn__conv0_Var_31;
    MR_Word ll_backend__var_locn__Var_71;
    MR_Word ll_backend__var_locn__Var_72;
    MR_Word ll_backend__var_locn__Var_73;
    MR_Word ll_backend__var_locn__Var_74;
    MR_Word ll_backend__var_locn__Var_75;
    MR_Integer ll_backend__var_locn__Var_76;
    MR_Integer ll_backend__var_locn__Var_77;
    MR_Word ll_backend__var_locn__Var_78;
    MR_Word ll_backend__var_locn__Var_79;
    MR_Integer ll_backend__var_locn__Var_80;
    MR_Integer ll_backend__var_locn__Var_81;
    MR_Word ll_backend__var_locn__Var_82;
    MR_Word ll_backend__var_locn__Var_85;
    MR_Word ll_backend__var_locn__Var_86;
    MR_Word ll_backend__var_locn__Var_87;
    MR_Word ll_backend__var_locn__Var_88;
    MR_Word ll_backend__var_locn__Var_89;
    MR_Integer ll_backend__var_locn__Var_90;
    MR_Integer ll_backend__var_locn__Var_91;
    MR_Word ll_backend__var_locn__Var_93;
    MR_Word ll_backend__var_locn__Var_94;
    MR_Integer ll_backend__var_locn__Var_95;
    MR_Integer ll_backend__var_locn__Var_96;
    MR_Word ll_backend__var_locn__Var_97;
    MR_Word ll_backend__var_locn__Var_92;

    {
      *ll_backend__var_locn__HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
    }
    ll_backend__var_locn__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 0)));
    ll_backend__var_locn__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 1)));
    ll_backend__var_locn__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 2)));
    ll_backend__var_locn__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 3)));
    ll_backend__var_locn__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 4)));
    ll_backend__var_locn__Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 5)));
    ll_backend__var_locn__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 6)));
    ll_backend__var_locn__VarStateMap0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 7)));
    ll_backend__var_locn__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 8)));
    ll_backend__var_locn__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 9)));
    ll_backend__var_locn__Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 10)));
    ll_backend__var_locn__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 11)));
    ll_backend__var_locn__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 12)));
    {
      ll_backend__var_locn__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, ll_backend__var_locn__VarStateMap0_30, ((MR_Box) (ll_backend__var_locn__Var_6)), &ll_backend__var_locn__conv0_Var_31);
    }
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__Var_31 = ((MR_Word) ll_backend__var_locn__conv0_Var_31);
        ll_backend__var_locn__succeeded = MR_TRUE;
      }
    if (ll_backend__var_locn__succeeded)
      {
        MR_String ll_backend__var_locn__Name_32;
        MR_String ll_backend__var_locn__Var_35;
        MR_Word ll_backend__var_locn__VarSet_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 1)));
        MR_Word ll_backend__var_locn__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 2)));
        MR_Word ll_backend__var_locn__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 3)));
        MR_Word ll_backend__var_locn__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 4)));
        MR_Integer ll_backend__var_locn__Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 5)));
        MR_Integer ll_backend__var_locn__Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 6)));
        MR_Word ll_backend__var_locn__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 7)));
        MR_Word ll_backend__var_locn__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 8)));
        MR_Word ll_backend__var_locn__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 9)));
        MR_Integer ll_backend__var_locn__Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 10)));
        MR_Integer ll_backend__var_locn__Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 11)));
        MR_Word ll_backend__var_locn__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 12)));

        {
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__var_locn__VarSet_55, ll_backend__var_locn__Var_6, &ll_backend__var_locn__Name_32);
        }
        {
          ll_backend__var_locn__Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "existing definition of variable ", ll_backend__var_locn__Name_32);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.check_var_is_unknown\'/2", ll_backend__var_locn__Var_35);
          return;
        }
      }
    else
      {
      }
    ll_backend__var_locn__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 0)));
    ll_backend__var_locn__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 1)));
    ll_backend__var_locn__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 2)));
    ll_backend__var_locn__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 3)));
    ll_backend__var_locn__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 4)));
    ll_backend__var_locn__Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 5)));
    ll_backend__var_locn__Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 6)));
    ll_backend__var_locn__VarStateMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 7)));
    ll_backend__var_locn__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 8)));
    ll_backend__var_locn__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 9)));
    ll_backend__var_locn__Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 10)));
    ll_backend__var_locn__Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 11)));
    ll_backend__var_locn__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 12)));
    {
      ll_backend__var_locn__Var_17 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
    }
    {
      ll_backend__var_locn__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_19, 0) = ((MR_Box) (ll_backend__var_locn__Rval_7));
    }
    {
      ll_backend__var_locn__Var_20 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
    {
      ll_backend__var_locn__State_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_10, 0) = ((MR_Box) (ll_backend__var_locn__Var_17));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_10, 2) = ((MR_Box) (ll_backend__var_locn__Var_19));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_10, 3) = ((MR_Box) (ll_backend__var_locn__Var_20));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_10, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    ll_backend__var_locn__TypeInfo_26_26 = (MR_Word) &ll_backend__var_locn_scalar_common_1[0];
    {
      mercury__map__det_insert_4_p_0(ll_backend__var_locn__TypeInfo_26_26, (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, ((MR_Box) (ll_backend__var_locn__Var_6)), ((MR_Box) (ll_backend__var_locn__State_10)), ll_backend__var_locn__VarStateMap0_9, &ll_backend__var_locn__VarStateMap1_11);
    }
    {
      ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__var_locn__Rval_7, &ll_backend__var_locn__ContainedVars0_12);
    }
    {
      mercury__list__remove_dups_2_p_0(ll_backend__var_locn__TypeInfo_26_26, ll_backend__var_locn__ContainedVars0_12, &ll_backend__var_locn__ContainedVars_13);
    }
    {
      ll_backend__var_locn__add_use_refs_4_p_0(ll_backend__var_locn__ContainedVars_13, ll_backend__var_locn__Var_6, ll_backend__var_locn__VarStateMap1_11, &ll_backend__var_locn__VarStateMap_14);
    }
    ll_backend__var_locn__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 0)));
    ll_backend__var_locn__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 1)));
    ll_backend__var_locn__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 2)));
    ll_backend__var_locn__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 3)));
    ll_backend__var_locn__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 4)));
    ll_backend__var_locn__Var_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 5)));
    ll_backend__var_locn__Var_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 6)));
    ll_backend__var_locn__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 7)));
    ll_backend__var_locn__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 8)));
    ll_backend__var_locn__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 9)));
    ll_backend__var_locn__Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 10)));
    ll_backend__var_locn__Var_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 11)));
    ll_backend__var_locn__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_15, (MR_Integer) 12)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__var_locn__STATE_VARIABLE_VLI_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__var_locn__Var_85));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__var_locn__Var_86));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__var_locn__Var_87));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__var_locn__Var_88));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__var_locn__Var_89));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__var_locn__Var_90));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__var_locn__Var_91));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__var_locn__VarStateMap_14));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__var_locn__Var_93));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ll_backend__var_locn__Var_94));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ll_backend__var_locn__Var_95));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ll_backend__var_locn__Var_96));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ll_backend__var_locn__Var_97));
    }
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_assign_const_to_var_5_p_0(
  MR_Word ll_backend__var_locn__ExprnOpts_6,
  MR_Word ll_backend__var_locn__Var_7,
  MR_Word ll_backend__var_locn__ConstRval0_8,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_14,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_15)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__VarStateMap0_10;
    MR_Word ll_backend__var_locn__VarStateMap0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 12)));
    MR_Word ll_backend__var_locn__Var_32;
    MR_Box ll_backend__var_locn__conv0_Var_32;
    MR_Word ll_backend__var_locn__Var_72;
    MR_Word ll_backend__var_locn__Var_73;
    MR_Word ll_backend__var_locn__Var_74;
    MR_Word ll_backend__var_locn__Var_75;
    MR_Word ll_backend__var_locn__Var_76;
    MR_Integer ll_backend__var_locn__Var_77;
    MR_Integer ll_backend__var_locn__Var_78;
    MR_Word ll_backend__var_locn__Var_79;
    MR_Word ll_backend__var_locn__Var_80;
    MR_Integer ll_backend__var_locn__Var_81;
    MR_Integer ll_backend__var_locn__Var_82;
    MR_Word ll_backend__var_locn__Var_83;
    MR_Word ll_backend__var_locn__ConstRval_11;

    {
      ll_backend__var_locn__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, ll_backend__var_locn__VarStateMap0_31, ((MR_Box) (ll_backend__var_locn__Var_7)), &ll_backend__var_locn__conv0_Var_32);
    }
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__Var_32 = ((MR_Word) ll_backend__var_locn__conv0_Var_32);
        ll_backend__var_locn__succeeded = MR_TRUE;
      }
    if (ll_backend__var_locn__succeeded)
      {
        MR_String ll_backend__var_locn__Name_33;
        MR_String ll_backend__var_locn__Var_36;
        MR_Word ll_backend__var_locn__VarSet_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 1)));
        MR_Word ll_backend__var_locn__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 2)));
        MR_Word ll_backend__var_locn__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 3)));
        MR_Word ll_backend__var_locn__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 4)));
        MR_Integer ll_backend__var_locn__Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 5)));
        MR_Integer ll_backend__var_locn__Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 6)));
        MR_Word ll_backend__var_locn__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 7)));
        MR_Word ll_backend__var_locn__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 8)));
        MR_Word ll_backend__var_locn__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 9)));
        MR_Integer ll_backend__var_locn__Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 10)));
        MR_Integer ll_backend__var_locn__Var_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 11)));
        MR_Word ll_backend__var_locn__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 12)));

        {
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__var_locn__VarSet_56, ll_backend__var_locn__Var_7, &ll_backend__var_locn__Name_33);
        }
        {
          ll_backend__var_locn__Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "existing definition of variable ", ll_backend__var_locn__Name_33);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.check_var_is_unknown\'/2", ll_backend__var_locn__Var_36);
          return;
        }
      }
    else
      {
      }
    ll_backend__var_locn__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 0)));
    ll_backend__var_locn__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 1)));
    ll_backend__var_locn__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 2)));
    ll_backend__var_locn__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 3)));
    ll_backend__var_locn__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 4)));
    ll_backend__var_locn__Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 5)));
    ll_backend__var_locn__Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 6)));
    ll_backend__var_locn__VarStateMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 7)));
    ll_backend__var_locn__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 8)));
    ll_backend__var_locn__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 9)));
    ll_backend__var_locn__Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 10)));
    ll_backend__var_locn__Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 11)));
    ll_backend__var_locn__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 12)));
    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__expr_is_constant_4_p_0(ll_backend__var_locn__VarStateMap0_10, ll_backend__var_locn__ExprnOpts_6, ll_backend__var_locn__ConstRval0_8, &ll_backend__var_locn__ConstRval_11);
    }
    if (ll_backend__var_locn__succeeded)
      {
        MR_Word ll_backend__var_locn__State_12;
        MR_Word ll_backend__var_locn__VarStateMap_13;
        MR_Word ll_backend__var_locn__Var_16;
        MR_Word ll_backend__var_locn__Var_17;
        MR_Word ll_backend__var_locn__Var_19;

        {
          ll_backend__var_locn__Var_16 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        }
        {
          ll_backend__var_locn__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_17, 0) = ((MR_Box) (ll_backend__var_locn__ConstRval_11));
        }
        {
          ll_backend__var_locn__Var_19 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
        {
          ll_backend__var_locn__State_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_12, 0) = ((MR_Box) (ll_backend__var_locn__Var_16));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_12, 1) = ((MR_Box) (ll_backend__var_locn__Var_17));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_12, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_12, 3) = ((MR_Box) (ll_backend__var_locn__Var_19));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_12, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, ((MR_Box) (ll_backend__var_locn__Var_7)), ((MR_Box) (ll_backend__var_locn__State_12)), ll_backend__var_locn__VarStateMap0_10, &ll_backend__var_locn__VarStateMap_13);
        }
        {
          ll_backend__var_locn__var_locn_set_var_state_map_3_p_0(ll_backend__var_locn__VarStateMap_13, ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, ll_backend__var_locn__STATE_VARIABLE_VLI_15);
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.var_locn_assign_const_to_var\'/5", (MR_String) "supposed constant isn\'t");
          return;
        }
      }
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_assign_field_lval_expr_to_var_6_p_0(
  MR_Word ll_backend__var_locn__Var_7,
  MR_Word ll_backend__var_locn__BaseVar_8,
  MR_Word ll_backend__var_locn__Expr_9,
  MR_Word * ll_backend__var_locn__Code_10,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_16,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_17)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__VarStateMap0_12;
    MR_Word ll_backend__var_locn__State_13;
    MR_Word ll_backend__var_locn__VarStateMap1_14;
    MR_Word ll_backend__var_locn__VarStateMap_15;
    MR_Word ll_backend__var_locn__Var_18;
    MR_Word ll_backend__var_locn__Var_20;
    MR_Word ll_backend__var_locn__Var_21;
    MR_Word ll_backend__var_locn__VarStateMap0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 12)));
    MR_Word ll_backend__var_locn__Var_32;
    MR_Box ll_backend__var_locn__conv0_Var_32;
    MR_Word ll_backend__var_locn__Var_72;
    MR_Word ll_backend__var_locn__Var_73;
    MR_Word ll_backend__var_locn__Var_74;
    MR_Word ll_backend__var_locn__Var_75;
    MR_Word ll_backend__var_locn__Var_76;
    MR_Integer ll_backend__var_locn__Var_77;
    MR_Integer ll_backend__var_locn__Var_78;
    MR_Word ll_backend__var_locn__Var_79;
    MR_Word ll_backend__var_locn__Var_80;
    MR_Integer ll_backend__var_locn__Var_81;
    MR_Integer ll_backend__var_locn__Var_82;
    MR_Word ll_backend__var_locn__Var_83;

    {
      ll_backend__var_locn__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, ll_backend__var_locn__VarStateMap0_31, ((MR_Box) (ll_backend__var_locn__Var_7)), &ll_backend__var_locn__conv0_Var_32);
    }
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__Var_32 = ((MR_Word) ll_backend__var_locn__conv0_Var_32);
        ll_backend__var_locn__succeeded = MR_TRUE;
      }
    if (ll_backend__var_locn__succeeded)
      {
        MR_String ll_backend__var_locn__Name_33;
        MR_String ll_backend__var_locn__Var_36;
        MR_Word ll_backend__var_locn__VarSet_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 1)));
        MR_Word ll_backend__var_locn__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 2)));
        MR_Word ll_backend__var_locn__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 3)));
        MR_Word ll_backend__var_locn__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 4)));
        MR_Integer ll_backend__var_locn__Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 5)));
        MR_Integer ll_backend__var_locn__Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 6)));
        MR_Word ll_backend__var_locn__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 7)));
        MR_Word ll_backend__var_locn__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 8)));
        MR_Word ll_backend__var_locn__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 9)));
        MR_Integer ll_backend__var_locn__Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 10)));
        MR_Integer ll_backend__var_locn__Var_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 11)));
        MR_Word ll_backend__var_locn__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 12)));

        {
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__var_locn__VarSet_56, ll_backend__var_locn__Var_7, &ll_backend__var_locn__Name_33);
        }
        {
          ll_backend__var_locn__Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "existing definition of variable ", ll_backend__var_locn__Name_33);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.check_var_is_unknown\'/2", ll_backend__var_locn__Var_36);
          return;
        }
      }
    else
      {
      }
    ll_backend__var_locn__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 0)));
    ll_backend__var_locn__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 1)));
    ll_backend__var_locn__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 2)));
    ll_backend__var_locn__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 3)));
    ll_backend__var_locn__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 4)));
    ll_backend__var_locn__Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 5)));
    ll_backend__var_locn__Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 6)));
    ll_backend__var_locn__VarStateMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 7)));
    ll_backend__var_locn__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 8)));
    ll_backend__var_locn__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 9)));
    ll_backend__var_locn__Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 10)));
    ll_backend__var_locn__Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 11)));
    ll_backend__var_locn__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, (MR_Integer) 12)));
    {
      ll_backend__var_locn__Var_18 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
    }
    {
      ll_backend__var_locn__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_20, 0) = ((MR_Box) (ll_backend__var_locn__Expr_9));
    }
    {
      ll_backend__var_locn__Var_21 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
    {
      ll_backend__var_locn__State_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_13, 0) = ((MR_Box) (ll_backend__var_locn__Var_18));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_13, 2) = ((MR_Box) (ll_backend__var_locn__Var_20));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_13, 3) = ((MR_Box) (ll_backend__var_locn__Var_21));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_13, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, ((MR_Box) (ll_backend__var_locn__Var_7)), ((MR_Box) (ll_backend__var_locn__State_13)), ll_backend__var_locn__VarStateMap0_12, &ll_backend__var_locn__VarStateMap1_14);
    }
    {
      ll_backend__var_locn__add_use_ref_4_p_0(ll_backend__var_locn__BaseVar_8, ll_backend__var_locn__Var_7, ll_backend__var_locn__VarStateMap1_14, &ll_backend__var_locn__VarStateMap_15);
    }
    {
      ll_backend__var_locn__var_locn_set_var_state_map_3_p_0(ll_backend__var_locn__VarStateMap_15, ll_backend__var_locn__STATE_VARIABLE_VLI_0_16, ll_backend__var_locn__STATE_VARIABLE_VLI_17);
    }
    {
      *ll_backend__var_locn__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
    }
  }
}

static MR_Box MR_CALL 
ll_backend__var_locn__var_locn_assign_lval_to_var_7_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1)
{
  {
    MR_Box ll_backend__var_locn__wrapper_arg_2;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv1_HeadVar__4_4;

    {
      ll_backend__var_locn__conv1_HeadVar__4_4 = ll_backend__var_locn__add_field_offset_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1));
    }
    ll_backend__var_locn__wrapper_arg_2 = ((MR_Box) (ll_backend__var_locn__conv1_HeadVar__4_4));
    return ll_backend__var_locn__wrapper_arg_2;
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_assign_lval_to_var_7_p_0(
  MR_Word ll_backend__var_locn__ModuleInfo_8,
  MR_Word ll_backend__var_locn__Var_9,
  MR_Word ll_backend__var_locn__Lval0_10,
  MR_Word ll_backend__var_locn__StaticCellInfo_11,
  MR_Word * ll_backend__var_locn__Code_12,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_39,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_40)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Integer ll_backend__var_locn__Ptag_14;
    MR_Word ll_backend__var_locn__BaseVar_15;
    MR_Integer ll_backend__var_locn__Offset_16;
    MR_Word ll_backend__var_locn__Var_41;
    MR_Word ll_backend__var_locn__Var_43;
    MR_Word ll_backend__var_locn__Var_42;
    MR_Word ll_backend__var_locn__Var_44;

    {
      ll_backend__var_locn__check_var_is_unknown_2_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_0_39, ll_backend__var_locn__Var_9);
    }
    ll_backend__var_locn__succeeded = ((((MR_tag((MR_Word) ll_backend__var_locn__Lval0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_10, (MR_Integer) 0)))) == (MR_Integer) 9)));
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_10, (MR_Integer) 1)));
        ll_backend__var_locn__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_10, (MR_Integer) 2)));
        ll_backend__var_locn__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Lval0_10, (MR_Integer) 3)));
        ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__Var_41)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__var_locn__succeeded)
          {
            ll_backend__var_locn__Ptag_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_41, (MR_Integer) 0)));
            ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__Var_42)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__var_locn__succeeded)
              {
                ll_backend__var_locn__BaseVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_42, (MR_Integer) 0)));
                ll_backend__var_locn__succeeded = ((((MR_tag((MR_Word) ll_backend__var_locn__Var_43)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_43, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (ll_backend__var_locn__succeeded)
                  {
                    ll_backend__var_locn__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_43, (MR_Integer) 1)));
                    ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__Var_44)) == (MR_mktag((MR_Integer) 1)));
                    if (ll_backend__var_locn__succeeded)
                      ll_backend__var_locn__Offset_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_44, (MR_Integer) 0)));
                  }
              }
          }
      }
    if (ll_backend__var_locn__succeeded)
      {
        MR_Word ll_backend__var_locn__TypeInfo_75_75;
        MR_Word ll_backend__var_locn__TypeCtorInfo_76_76;
        MR_Word ll_backend__var_locn__VarStateMap0_17;
        MR_Word ll_backend__var_locn__BaseState_18;
        MR_Word ll_backend__var_locn__BaseVarLvals_19;
        MR_Word ll_backend__var_locn__MaybeConstBaseVarRval_20;
        MR_Box ll_backend__var_locn__conv0_BaseState_18;
        MR_Word ll_backend__var_locn___MaybeExprRval_21;
        MR_Word ll_backend__var_locn___UsingVars_22;
        MR_Word ll_backend__var_locn___DeadOrAlive_23;
        MR_Word ll_backend__var_locn__SelectedArgRval_28;
        MR_Word ll_backend__var_locn__BaseVarRval_24;
        MR_Word ll_backend__var_locn__BaseConst_25;
        MR_Word ll_backend__var_locn__DataAddr_26;
        MR_Word ll_backend__var_locn__MaybeBaseOffset_27;
        MR_Word ll_backend__var_locn__Var_45;
        MR_Integer ll_backend__var_locn__Var_88;

        {
          ll_backend__var_locn__var_locn_get_var_state_map_2_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_0_39, &ll_backend__var_locn__VarStateMap0_17);
        }
        ll_backend__var_locn__TypeInfo_75_75 = (MR_Word) &ll_backend__var_locn_scalar_common_1[0];
        ll_backend__var_locn__TypeCtorInfo_76_76 = (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0;
        {
          mercury__map__lookup_3_p_0(ll_backend__var_locn__TypeInfo_75_75, ll_backend__var_locn__TypeCtorInfo_76_76, ll_backend__var_locn__VarStateMap0_17, ((MR_Box) (ll_backend__var_locn__BaseVar_15)), &ll_backend__var_locn__conv0_BaseState_18);
        }
        ll_backend__var_locn__BaseState_18 = ((MR_Word) ll_backend__var_locn__conv0_BaseState_18);
        ll_backend__var_locn__BaseVarLvals_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__BaseState_18, (MR_Integer) 0)));
        ll_backend__var_locn__MaybeConstBaseVarRval_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__BaseState_18, (MR_Integer) 1)));
        ll_backend__var_locn___MaybeExprRval_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__BaseState_18, (MR_Integer) 2)));
        ll_backend__var_locn___UsingVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__BaseState_18, (MR_Integer) 3)));
        ll_backend__var_locn___DeadOrAlive_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__BaseState_18, (MR_Integer) 4)));
        ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__MaybeConstBaseVarRval_20)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__var_locn__succeeded)
          {
            ll_backend__var_locn__BaseVarRval_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__MaybeConstBaseVarRval_20, (MR_Integer) 0)));
            ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__BaseVarRval_24)) == (MR_mktag((MR_Integer) 2)));
            if (ll_backend__var_locn__succeeded)
              {
                ll_backend__var_locn__Var_88 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__var_locn__BaseVarRval_24, (MR_Integer) 0)));
                ll_backend__var_locn__BaseConst_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__var_locn__BaseVarRval_24, (MR_Integer) 1)));
                ll_backend__var_locn__succeeded = (ll_backend__var_locn__Ptag_14 == ll_backend__var_locn__Var_88);
                if (ll_backend__var_locn__succeeded)
                  {
                    ll_backend__var_locn__succeeded = ((((MR_tag((MR_Word) ll_backend__var_locn__BaseConst_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__BaseConst_25, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (ll_backend__var_locn__succeeded)
                      {
                        ll_backend__var_locn__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__BaseConst_25, (MR_Integer) 1)));
                        ll_backend__var_locn__succeeded = ((((MR_tag((MR_Word) ll_backend__var_locn__Var_45)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_45, (MR_Integer) 0)))) == (MR_Integer) 5)));
                        if (ll_backend__var_locn__succeeded)
                          {
                            ll_backend__var_locn__DataAddr_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_45, (MR_Integer) 1)));
                            ll_backend__var_locn__MaybeBaseOffset_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__var_locn__Var_45, (MR_Integer) 2)));
                            ll_backend__var_locn__succeeded = (ll_backend__var_locn__MaybeBaseOffset_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (ll_backend__var_locn__succeeded)
                              {
                                ll_backend__var_locn__succeeded = ll_backend__global_data__search_scalar_static_cell_offset_4_p_0(ll_backend__var_locn__StaticCellInfo_11, ll_backend__var_locn__DataAddr_26, ll_backend__var_locn__Offset_16, &ll_backend__var_locn__SelectedArgRval_28);
                              }
                          }
                      }
                  }
              }
          }
        if (ll_backend__var_locn__succeeded)
          {
            MR_Word ll_backend__var_locn__TypeCtorInfo_77_77;
            MR_Word ll_backend__var_locn__MaybeConstRval_29;
            MR_Word ll_backend__var_locn__Lvals_30;
            MR_Word ll_backend__var_locn__State_31;
            MR_Word ll_backend__var_locn__VarStateMap_32;
            MR_Word ll_backend__var_locn__LocVarMap0_33;
            MR_Word ll_backend__var_locn__LocVarMap_34;
            MR_Word ll_backend__var_locn__Var_46;
            MR_Word ll_backend__var_locn__Var_51;
            MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_53_53;

            {
              ll_backend__var_locn__MaybeConstRval_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__var_locn__MaybeConstRval_29, 0) = ((MR_Box) (ll_backend__var_locn__SelectedArgRval_28));
            }
            ll_backend__var_locn__TypeCtorInfo_77_77 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
            {
              ll_backend__var_locn__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_46, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_4[1]));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_46, 1) = ((MR_Box) (ll_backend__var_locn__var_locn_assign_lval_to_var_7_p_0_1));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_46, 3) = ((MR_Box) (ll_backend__var_locn__Var_41));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_46, 4) = ((MR_Box) (ll_backend__var_locn__Var_43));
            }
            {
              ll_backend__var_locn__Lvals_30 = mercury__set__map_2_f_0(ll_backend__var_locn__TypeCtorInfo_77_77, ll_backend__var_locn__TypeCtorInfo_77_77, ll_backend__var_locn__Var_46, ll_backend__var_locn__BaseVarLvals_19);
            }
            {
              ll_backend__var_locn__Var_51 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            }
            {
              ll_backend__var_locn__State_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_31, 0) = ((MR_Box) (ll_backend__var_locn__Lvals_30));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_31, 1) = ((MR_Box) (ll_backend__var_locn__MaybeConstRval_29));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_31, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_31, 3) = ((MR_Box) (ll_backend__var_locn__Var_51));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_31, 4) = ((MR_Box) ((MR_Integer) 1));
            }
            {
              mercury__map__det_insert_4_p_0(ll_backend__var_locn__TypeInfo_75_75, ll_backend__var_locn__TypeCtorInfo_76_76, ((MR_Box) (ll_backend__var_locn__Var_9)), ((MR_Box) (ll_backend__var_locn__State_31)), ll_backend__var_locn__VarStateMap0_17, &ll_backend__var_locn__VarStateMap_32);
            }
            {
              ll_backend__var_locn__var_locn_set_var_state_map_3_p_0(ll_backend__var_locn__VarStateMap_32, ll_backend__var_locn__STATE_VARIABLE_VLI_0_39, &ll_backend__var_locn__STATE_VARIABLE_VLI_53_53);
            }
            {
              ll_backend__var_locn__var_locn_get_loc_var_map_2_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_53_53, &ll_backend__var_locn__LocVarMap0_33);
            }
            {
              ll_backend__var_locn__make_var_depend_on_lvals_roots_4_p_0(ll_backend__var_locn__Var_9, ll_backend__var_locn__Lvals_30, ll_backend__var_locn__LocVarMap0_33, &ll_backend__var_locn__LocVarMap_34);
            }
            {
              ll_backend__var_locn__var_locn_set_loc_var_map_3_p_0(ll_backend__var_locn__LocVarMap_34, ll_backend__var_locn__STATE_VARIABLE_VLI_53_53, ll_backend__var_locn__STATE_VARIABLE_VLI_40);
            }
          }
        else
          {
            MR_Word ll_backend__var_locn__Expr_35;
            MR_Word ll_backend__var_locn__VarStateMap1_36;
            MR_Word ll_backend__var_locn__Var_56;
            MR_Word ll_backend__var_locn__Var_57;
            MR_Word ll_backend__var_locn__Lvals_67;
            MR_Word ll_backend__var_locn__State_68;
            MR_Word ll_backend__var_locn__VarStateMap_69;

            {
              mercury__set__init_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, &ll_backend__var_locn__Lvals_67);
            }
            {
              ll_backend__var_locn__Expr_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Expr_35, 0) = ((MR_Box) (ll_backend__var_locn__Lval0_10));
            }
            {
              ll_backend__var_locn__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_56, 0) = ((MR_Box) (ll_backend__var_locn__Expr_35));
            }
            {
              ll_backend__var_locn__Var_57 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            }
            {
              ll_backend__var_locn__State_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_68, 0) = ((MR_Box) (ll_backend__var_locn__Lvals_67));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_68, 2) = ((MR_Box) (ll_backend__var_locn__Var_56));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_68, 3) = ((MR_Box) (ll_backend__var_locn__Var_57));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_68, 4) = ((MR_Box) ((MR_Integer) 1));
            }
            {
              mercury__map__det_insert_4_p_0(ll_backend__var_locn__TypeInfo_75_75, ll_backend__var_locn__TypeCtorInfo_76_76, ((MR_Box) (ll_backend__var_locn__Var_9)), ((MR_Box) (ll_backend__var_locn__State_68)), ll_backend__var_locn__VarStateMap0_17, &ll_backend__var_locn__VarStateMap1_36);
            }
            {
              ll_backend__var_locn__add_use_ref_4_p_0(ll_backend__var_locn__BaseVar_15, ll_backend__var_locn__Var_9, ll_backend__var_locn__VarStateMap1_36, &ll_backend__var_locn__VarStateMap_69);
            }
            {
              ll_backend__var_locn__var_locn_set_var_state_map_3_p_0(ll_backend__var_locn__VarStateMap_69, ll_backend__var_locn__STATE_VARIABLE_VLI_0_39, ll_backend__var_locn__STATE_VARIABLE_VLI_40);
            }
          }
        {
          *ll_backend__var_locn__Code_12 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
      }
    else
      {
        MR_Word ll_backend__var_locn__Lval_37;
        MR_Word ll_backend__var_locn__LvalSet_38;
        MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_60_60;
        MR_Word ll_backend__var_locn__Var_63;
        MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_65_65;
        MR_Word ll_backend__var_locn__VarStateMap0_70;
        MR_Word ll_backend__var_locn__State_71;
        MR_Word ll_backend__var_locn__VarStateMap_72;
        MR_Word ll_backend__var_locn__LocVarMap0_73;
        MR_Word ll_backend__var_locn__LocVarMap_74;

        {
          ll_backend__var_locn__var_locn_materialize_vars_in_lval_6_p_0(ll_backend__var_locn__ModuleInfo_8, ll_backend__var_locn__Lval0_10, &ll_backend__var_locn__Lval_37, ll_backend__var_locn__Code_12, ll_backend__var_locn__STATE_VARIABLE_VLI_0_39, &ll_backend__var_locn__STATE_VARIABLE_VLI_60_60);
        }
        {
          ll_backend__var_locn__var_locn_get_var_state_map_2_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_60_60, &ll_backend__var_locn__VarStateMap0_70);
        }
        {
          ll_backend__var_locn__LvalSet_38 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__var_locn__Lval_37)));
        }
        {
          ll_backend__var_locn__Var_63 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
        {
          ll_backend__var_locn__State_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_71, 0) = ((MR_Box) (ll_backend__var_locn__LvalSet_38));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_71, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_71, 3) = ((MR_Box) (ll_backend__var_locn__Var_63));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_71, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, ((MR_Box) (ll_backend__var_locn__Var_9)), ((MR_Box) (ll_backend__var_locn__State_71)), ll_backend__var_locn__VarStateMap0_70, &ll_backend__var_locn__VarStateMap_72);
        }
        {
          ll_backend__var_locn__var_locn_set_var_state_map_3_p_0(ll_backend__var_locn__VarStateMap_72, ll_backend__var_locn__STATE_VARIABLE_VLI_60_60, &ll_backend__var_locn__STATE_VARIABLE_VLI_65_65);
        }
        {
          ll_backend__var_locn__var_locn_get_loc_var_map_2_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_65_65, &ll_backend__var_locn__LocVarMap0_73);
        }
        {
          ll_backend__var_locn__make_var_depend_on_lval_roots_4_p_0(ll_backend__var_locn__Var_9, ll_backend__var_locn__Lval_37, ll_backend__var_locn__LocVarMap0_73, &ll_backend__var_locn__LocVarMap_74);
        }
        {
          ll_backend__var_locn__var_locn_set_loc_var_map_3_p_0(ll_backend__var_locn__LocVarMap_74, ll_backend__var_locn__STATE_VARIABLE_VLI_65_65, ll_backend__var_locn__STATE_VARIABLE_VLI_40);
        }
      }
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_assign_var_to_var_4_p_0(
  MR_Word ll_backend__var_locn__Var_5,
  MR_Word ll_backend__var_locn__OldVar_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_23,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_24)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__TypeInfo_34_34;
    MR_Word ll_backend__var_locn__TypeCtorInfo_35_35;
    MR_Word ll_backend__var_locn__VarStateMap0_8;
    MR_Word ll_backend__var_locn__OldState0_9;
    MR_Word ll_backend__var_locn__Lvals_10;
    MR_Word ll_backend__var_locn__MaybeConstRval_11;
    MR_Word ll_backend__var_locn__MaybeExprRval_12;
    MR_Word ll_backend__var_locn__Using0_13;
    MR_Word ll_backend__var_locn__DeadOrAlive_14;
    MR_Word ll_backend__var_locn__State_16;
    MR_Word ll_backend__var_locn__VarStateMap1_19;
    MR_Word ll_backend__var_locn__VarStateMap_20;
    MR_Word ll_backend__var_locn__LocVarMap0_21;
    MR_Word ll_backend__var_locn__LocVarMap_22;
    MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_32_32;
    MR_Word ll_backend__var_locn__VarStateMap0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 12)));
    MR_Word ll_backend__var_locn__Var_41;
    MR_Box ll_backend__var_locn__conv0_Var_41;
    MR_Word ll_backend__var_locn__Var_81;
    MR_Word ll_backend__var_locn__Var_82;
    MR_Word ll_backend__var_locn__Var_83;
    MR_Word ll_backend__var_locn__Var_84;
    MR_Word ll_backend__var_locn__Var_85;
    MR_Integer ll_backend__var_locn__Var_86;
    MR_Integer ll_backend__var_locn__Var_87;
    MR_Word ll_backend__var_locn__Var_88;
    MR_Word ll_backend__var_locn__Var_89;
    MR_Integer ll_backend__var_locn__Var_90;
    MR_Integer ll_backend__var_locn__Var_91;
    MR_Word ll_backend__var_locn__Var_92;
    MR_Box ll_backend__var_locn__conv1_OldState0_9;

    {
      ll_backend__var_locn__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, ll_backend__var_locn__VarStateMap0_40, ((MR_Box) (ll_backend__var_locn__Var_5)), &ll_backend__var_locn__conv0_Var_41);
    }
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__Var_41 = ((MR_Word) ll_backend__var_locn__conv0_Var_41);
        ll_backend__var_locn__succeeded = MR_TRUE;
      }
    if (ll_backend__var_locn__succeeded)
      {
        MR_String ll_backend__var_locn__Name_42;
        MR_String ll_backend__var_locn__Var_45;
        MR_Word ll_backend__var_locn__VarSet_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 1)));
        MR_Word ll_backend__var_locn__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 2)));
        MR_Word ll_backend__var_locn__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 3)));
        MR_Word ll_backend__var_locn__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 4)));
        MR_Integer ll_backend__var_locn__Var_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 5)));
        MR_Integer ll_backend__var_locn__Var_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 6)));
        MR_Word ll_backend__var_locn__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 7)));
        MR_Word ll_backend__var_locn__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 8)));
        MR_Word ll_backend__var_locn__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 9)));
        MR_Integer ll_backend__var_locn__Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 10)));
        MR_Integer ll_backend__var_locn__Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 11)));
        MR_Word ll_backend__var_locn__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 12)));

        {
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__var_locn__VarSet_65, ll_backend__var_locn__Var_5, &ll_backend__var_locn__Name_42);
        }
        {
          ll_backend__var_locn__Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "existing definition of variable ", ll_backend__var_locn__Name_42);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.check_var_is_unknown\'/2", ll_backend__var_locn__Var_45);
          return;
        }
      }
    else
      {
      }
    ll_backend__var_locn__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 0)));
    ll_backend__var_locn__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 1)));
    ll_backend__var_locn__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 2)));
    ll_backend__var_locn__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 3)));
    ll_backend__var_locn__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 4)));
    ll_backend__var_locn__Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 5)));
    ll_backend__var_locn__Var_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 6)));
    ll_backend__var_locn__VarStateMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 7)));
    ll_backend__var_locn__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 8)));
    ll_backend__var_locn__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 9)));
    ll_backend__var_locn__Var_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 10)));
    ll_backend__var_locn__Var_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 11)));
    ll_backend__var_locn__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, (MR_Integer) 12)));
    ll_backend__var_locn__TypeInfo_34_34 = (MR_Word) &ll_backend__var_locn_scalar_common_1[0];
    ll_backend__var_locn__TypeCtorInfo_35_35 = (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0;
    {
      mercury__map__lookup_3_p_0(ll_backend__var_locn__TypeInfo_34_34, ll_backend__var_locn__TypeCtorInfo_35_35, ll_backend__var_locn__VarStateMap0_8, ((MR_Box) (ll_backend__var_locn__OldVar_6)), &ll_backend__var_locn__conv1_OldState0_9);
    }
    ll_backend__var_locn__OldState0_9 = ((MR_Word) ll_backend__var_locn__conv1_OldState0_9);
    ll_backend__var_locn__Lvals_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__OldState0_9, (MR_Integer) 0)));
    ll_backend__var_locn__MaybeConstRval_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__OldState0_9, (MR_Integer) 1)));
    ll_backend__var_locn__MaybeExprRval_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__OldState0_9, (MR_Integer) 2)));
    ll_backend__var_locn__Using0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__OldState0_9, (MR_Integer) 3)));
    ll_backend__var_locn__DeadOrAlive_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__OldState0_9, (MR_Integer) 4)));
    if ((ll_backend__var_locn__MaybeExprRval_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ll_backend__var_locn__Var_26;

        {
          ll_backend__var_locn__Var_26 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
        {
          ll_backend__var_locn__State_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_16, 0) = ((MR_Box) (ll_backend__var_locn__Lvals_10));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_16, 1) = ((MR_Box) (ll_backend__var_locn__MaybeConstRval_11));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_16, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_16, 3) = ((MR_Box) (ll_backend__var_locn__Var_26));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_16, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        ll_backend__var_locn__VarStateMap1_19 = ll_backend__var_locn__VarStateMap0_8;
      }
    else
      {
        MR_Word ll_backend__var_locn__TypeCtorInfo_36_36;
        MR_Word ll_backend__var_locn__Using_17;
        MR_Word ll_backend__var_locn__OldState_18;
        MR_Word ll_backend__var_locn__Var_28;
        MR_Word ll_backend__var_locn__Var_29;
        MR_Word ll_backend__var_locn__Var_30;

        {
          ll_backend__var_locn__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_29, 0) = ((MR_Box) (ll_backend__var_locn__OldVar_6));
        }
        {
          ll_backend__var_locn__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_28, 0) = ((MR_Box) (ll_backend__var_locn__Var_29));
        }
        ll_backend__var_locn__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        {
          ll_backend__var_locn__Var_30 = parse_tree__set_of_var__init_0_f_0(ll_backend__var_locn__TypeCtorInfo_36_36);
        }
        {
          ll_backend__var_locn__State_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_16, 0) = ((MR_Box) (ll_backend__var_locn__Lvals_10));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_16, 1) = ((MR_Box) (ll_backend__var_locn__MaybeConstRval_11));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_16, 2) = ((MR_Box) (ll_backend__var_locn__Var_28));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_16, 3) = ((MR_Box) (ll_backend__var_locn__Var_30));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_16, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        {
          parse_tree__set_of_var__insert_3_p_0(ll_backend__var_locn__TypeCtorInfo_36_36, ll_backend__var_locn__Var_5, ll_backend__var_locn__Using0_13, &ll_backend__var_locn__Using_17);
        }
        {
          ll_backend__var_locn__OldState_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__OldState_18, 0) = ((MR_Box) (ll_backend__var_locn__Lvals_10));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__OldState_18, 1) = ((MR_Box) (ll_backend__var_locn__MaybeConstRval_11));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__OldState_18, 2) = ((MR_Box) (ll_backend__var_locn__MaybeExprRval_12));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__OldState_18, 3) = ((MR_Box) (ll_backend__var_locn__Using_17));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__OldState_18, 4) = ((MR_Box) (ll_backend__var_locn__DeadOrAlive_14));
        }
        {
          mercury__map__det_update_4_p_0(ll_backend__var_locn__TypeInfo_34_34, ll_backend__var_locn__TypeCtorInfo_35_35, ((MR_Box) (ll_backend__var_locn__OldVar_6)), ((MR_Box) (ll_backend__var_locn__OldState_18)), ll_backend__var_locn__VarStateMap0_8, &ll_backend__var_locn__VarStateMap1_19);
        }
      }
    {
      mercury__map__det_insert_4_p_0(ll_backend__var_locn__TypeInfo_34_34, ll_backend__var_locn__TypeCtorInfo_35_35, ((MR_Box) (ll_backend__var_locn__Var_5)), ((MR_Box) (ll_backend__var_locn__State_16)), ll_backend__var_locn__VarStateMap1_19, &ll_backend__var_locn__VarStateMap_20);
    }
    {
      ll_backend__var_locn__var_locn_set_var_state_map_3_p_0(ll_backend__var_locn__VarStateMap_20, ll_backend__var_locn__STATE_VARIABLE_VLI_0_23, &ll_backend__var_locn__STATE_VARIABLE_VLI_32_32);
    }
    {
      ll_backend__var_locn__var_locn_get_loc_var_map_2_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_32_32, &ll_backend__var_locn__LocVarMap0_21);
    }
    {
      ll_backend__var_locn__make_var_depend_on_lvals_roots_4_p_0(ll_backend__var_locn__Var_5, ll_backend__var_locn__Lvals_10, ll_backend__var_locn__LocVarMap0_21, &ll_backend__var_locn__LocVarMap_22);
    }
    {
      ll_backend__var_locn__var_locn_set_loc_var_map_3_p_0(ll_backend__var_locn__LocVarMap_22, ll_backend__var_locn__STATE_VARIABLE_VLI_32_32, ll_backend__var_locn__STATE_VARIABLE_VLI_24);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__var_locn_var_becomes_dead_4_p_0_3(
  MR_Box ll_backend__var_locn__closure_arg)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__IntroducedFrom__pred__var_locn_var_becomes_dead__1993__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 4))));
    }
    return ll_backend__var_locn__succeeded;
  }
}

static void MR_CALL 
ll_backend__var_locn__var_locn_var_becomes_dead_4_p_0_2(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv2_STATE_VARIABLE_LocVarMap_12;

    {
      ll_backend__var_locn__make_var_not_depend_on_root_lval_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2), &ll_backend__var_locn__conv2_STATE_VARIABLE_LocVarMap_12);
    }
    *ll_backend__var_locn__wrapper_arg_3 = ((MR_Box) (ll_backend__var_locn__conv2_STATE_VARIABLE_LocVarMap_12));
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__var_locn_var_becomes_dead_4_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__IntroducedFrom__pred__var_locn_var_becomes_dead__1971__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 4))));
    }
    return ll_backend__var_locn__succeeded;
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_var_becomes_dead_4_p_0(
  MR_Word ll_backend__var_locn__Var_5,
  MR_Word ll_backend__var_locn__FirstTime_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_21,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_22)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__VarStateMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 12)));
    MR_Word ll_backend__var_locn__State0_9;
    MR_Box ll_backend__var_locn__conv0_State0_9;

    {
      ll_backend__var_locn__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, ll_backend__var_locn__VarStateMap0_8, ((MR_Box) (ll_backend__var_locn__Var_5)), &ll_backend__var_locn__conv0_State0_9);
    }
    if (ll_backend__var_locn__succeeded)
      {
        ll_backend__var_locn__State0_9 = ((MR_Word) ll_backend__var_locn__conv0_State0_9);
        ll_backend__var_locn__succeeded = MR_TRUE;
      }
    if (ll_backend__var_locn__succeeded)
      {
        MR_Word ll_backend__var_locn__Lvals_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_9, (MR_Integer) 0)));
        MR_Word ll_backend__var_locn__MaybeConstRval_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_9, (MR_Integer) 1)));
        MR_Word ll_backend__var_locn__MaybeExprRval_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_9, (MR_Integer) 2)));
        MR_Word ll_backend__var_locn__Using_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_9, (MR_Integer) 3)));
        MR_Word ll_backend__var_locn__DeadOrAlive0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__State0_9, (MR_Integer) 4)));

        switch (ll_backend__var_locn__DeadOrAlive0_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__var_locn__Var_23;

              {
                ll_backend__var_locn__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_23, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_23, 1) = ((MR_Box) (ll_backend__var_locn__var_locn_var_becomes_dead_4_p_0_1));
                MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_23, 3) = ((MR_Box) (ll_backend__var_locn__FirstTime_6));
                MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_23, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              {
                mercury__require__expect_4_p_0(ll_backend__var_locn__Var_23, (MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.var_locn_var_becomes_dead\'/4", (MR_String) "already dead");
              }
            }
            break;
        }
        {
          ll_backend__var_locn__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__var_locn__Using_13);
        }
        if (ll_backend__var_locn__succeeded)
          {
            MR_Word ll_backend__var_locn__VarStateMap_16;
            MR_Word ll_backend__var_locn__LocVarMap0_17;
            MR_Word ll_backend__var_locn__NoDupRootLvals_18;
            MR_Word ll_backend__var_locn__LocVarMap_19;
            MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_28_28;
            MR_Word ll_backend__var_locn__Var_29;
            MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_30_30;
            MR_Word ll_backend__var_locn__Var_15;
            MR_Box ll_backend__var_locn__conv1_Var_15;
            MR_Word ll_backend__var_locn__Var_69;
            MR_Word ll_backend__var_locn__Var_70;
            MR_Word ll_backend__var_locn__Var_71;
            MR_Word ll_backend__var_locn__Var_72;
            MR_Word ll_backend__var_locn__Var_73;
            MR_Integer ll_backend__var_locn__Var_74;
            MR_Integer ll_backend__var_locn__Var_75;
            MR_Word ll_backend__var_locn__Var_78;
            MR_Integer ll_backend__var_locn__Var_79;
            MR_Integer ll_backend__var_locn__Var_80;
            MR_Word ll_backend__var_locn__Var_81;
            MR_Word ll_backend__var_locn__Var_76;
            MR_Box ll_backend__var_locn__conv3_LocVarMap_19;

            {
              mercury__map__det_remove_4_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, ((MR_Box) (ll_backend__var_locn__Var_5)), &ll_backend__var_locn__conv1_Var_15, ll_backend__var_locn__VarStateMap0_8, &ll_backend__var_locn__VarStateMap_16);
            }
            ll_backend__var_locn__Var_15 = ((MR_Word) ll_backend__var_locn__conv1_Var_15);
            ll_backend__var_locn__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 0)));
            ll_backend__var_locn__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 1)));
            ll_backend__var_locn__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 2)));
            ll_backend__var_locn__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 3)));
            ll_backend__var_locn__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 4)));
            ll_backend__var_locn__Var_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 5)));
            ll_backend__var_locn__Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 6)));
            ll_backend__var_locn__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 7)));
            ll_backend__var_locn__LocVarMap0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 8)));
            ll_backend__var_locn__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 9)));
            ll_backend__var_locn__Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 10)));
            ll_backend__var_locn__Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 11)));
            ll_backend__var_locn__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, (MR_Integer) 12)));
            {
              ll_backend__var_locn__STATE_VARIABLE_VLI_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_28_28, 0) = ((MR_Box) (ll_backend__var_locn__Var_69));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_28_28, 1) = ((MR_Box) (ll_backend__var_locn__Var_70));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_28_28, 2) = ((MR_Box) (ll_backend__var_locn__Var_71));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_28_28, 3) = ((MR_Box) (ll_backend__var_locn__Var_72));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_28_28, 4) = ((MR_Box) (ll_backend__var_locn__Var_73));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_28_28, 5) = ((MR_Box) (ll_backend__var_locn__Var_74));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_28_28, 6) = ((MR_Box) (ll_backend__var_locn__Var_75));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_28_28, 7) = ((MR_Box) (ll_backend__var_locn__VarStateMap_16));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_28_28, 8) = ((MR_Box) (ll_backend__var_locn__LocVarMap0_17));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_28_28, 9) = ((MR_Box) (ll_backend__var_locn__Var_78));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_28_28, 10) = ((MR_Box) (ll_backend__var_locn__Var_79));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_28_28, 11) = ((MR_Box) (ll_backend__var_locn__Var_80));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_28_28, 12) = ((MR_Box) (ll_backend__var_locn__Var_81));
            }
            {
              ll_backend__var_locn__get_var_set_roots_2_p_0(ll_backend__var_locn__Lvals_10, &ll_backend__var_locn__NoDupRootLvals_18);
            }
            {
              ll_backend__var_locn__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_29, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0]));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_29, 1) = ((MR_Box) (ll_backend__var_locn__var_locn_var_becomes_dead_4_p_0_2));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_29, 3) = ((MR_Box) (ll_backend__var_locn__Var_5));
            }
            {
              mercury__list__foldl_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__var_locn_scalar_common_2[0], ll_backend__var_locn__Var_29, ll_backend__var_locn__NoDupRootLvals_18, ((MR_Box) (ll_backend__var_locn__LocVarMap0_17)), &ll_backend__var_locn__conv3_LocVarMap_19);
            }
            ll_backend__var_locn__LocVarMap_19 = ((MR_Word) ll_backend__var_locn__conv3_LocVarMap_19);
            {
              ll_backend__var_locn__var_locn_set_loc_var_map_3_p_0(ll_backend__var_locn__LocVarMap_19, ll_backend__var_locn__STATE_VARIABLE_VLI_28_28, &ll_backend__var_locn__STATE_VARIABLE_VLI_30_30);
            }
            {
              ll_backend__var_locn__remove_use_refs_4_p_0(ll_backend__var_locn__MaybeExprRval_12, ll_backend__var_locn__Var_5, ll_backend__var_locn__STATE_VARIABLE_VLI_30_30, ll_backend__var_locn__STATE_VARIABLE_VLI_22);
            }
          }
        else
          {
            MR_Word ll_backend__var_locn__State_20;
            MR_Word ll_backend__var_locn__VarStateMap_39;

            {
              ll_backend__var_locn__State_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_20, 0) = ((MR_Box) (ll_backend__var_locn__Lvals_10));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_20, 1) = ((MR_Box) (ll_backend__var_locn__MaybeConstRval_11));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_20, 2) = ((MR_Box) (ll_backend__var_locn__MaybeExprRval_12));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_20, 3) = ((MR_Box) (ll_backend__var_locn__Using_13));
              MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_20, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            {
              mercury__map__det_update_4_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, ((MR_Box) (ll_backend__var_locn__Var_5)), ((MR_Box) (ll_backend__var_locn__State_20)), ll_backend__var_locn__VarStateMap0_8, &ll_backend__var_locn__VarStateMap_39);
            }
            {
              ll_backend__var_locn__var_locn_set_var_state_map_3_p_0(ll_backend__var_locn__VarStateMap_39, ll_backend__var_locn__STATE_VARIABLE_VLI_0_21, ll_backend__var_locn__STATE_VARIABLE_VLI_22);
            }
          }
      }
    else
      {
        MR_Word ll_backend__var_locn__Var_34;

        {
          ll_backend__var_locn__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_34, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_34, 1) = ((MR_Box) (ll_backend__var_locn__var_locn_var_becomes_dead_4_p_0_3));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_34, 3) = ((MR_Box) (ll_backend__var_locn__FirstTime_6));
          MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_34, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          mercury__require__expect_4_p_0(ll_backend__var_locn__Var_34, (MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.var_locn_var_becomes_dead\'/4", (MR_String) "premature deletion");
        }
        *ll_backend__var_locn__STATE_VARIABLE_VLI_22 = ll_backend__var_locn__STATE_VARIABLE_VLI_0_21;
      }
  }
}

MR_bool MR_CALL 
ll_backend__var_locn__var_locn_lval_in_use_2_p_0(
  MR_Word ll_backend__var_locn__VLI_3,
  MR_Word ll_backend__var_locn__Lval_4)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__LocVarMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__Acquired_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__LockedR_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__LockedF_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__VLI_3, (MR_Integer) 12)));

    {
      MR_Word ll_backend__var_locn__TypeCtorInfo_16_16;
      MR_Word ll_backend__var_locn__UsingVars_9;
      MR_Box ll_backend__var_locn__conv0_UsingVars_9;

      {
        ll_backend__var_locn__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__var_locn_scalar_common_1[1], ll_backend__var_locn__LocVarMap_5, ((MR_Box) (ll_backend__var_locn__Lval_4)), &ll_backend__var_locn__conv0_UsingVars_9);
      }
      if (ll_backend__var_locn__succeeded)
        {
          ll_backend__var_locn__UsingVars_9 = ((MR_Word) ll_backend__var_locn__conv0_UsingVars_9);
          ll_backend__var_locn__succeeded = MR_TRUE;
        }
      if (ll_backend__var_locn__succeeded)
        {
          ll_backend__var_locn__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          {
            ll_backend__var_locn__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(ll_backend__var_locn__TypeCtorInfo_16_16, ll_backend__var_locn__UsingVars_9);
          }
        }
    }
    if (!(ll_backend__var_locn__succeeded))
      {
        {
          ll_backend__var_locn__succeeded = mercury__set__member_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__var_locn__Lval_4)), ll_backend__var_locn__Acquired_6);
        }
        if (!(ll_backend__var_locn__succeeded))
          {
            {
              MR_Integer ll_backend__var_locn__N_10;
              MR_Word ll_backend__var_locn__Var_12;

              ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__Lval_4)) == (MR_mktag((MR_Integer) 1)));
              if (ll_backend__var_locn__succeeded)
                {
                  ll_backend__var_locn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Lval_4, (MR_Integer) 0)));
                  ll_backend__var_locn__N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Lval_4, (MR_Integer) 1)));
                  ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_12 == (MR_Integer) 0);
                  if (ll_backend__var_locn__succeeded)
                    ll_backend__var_locn__succeeded = (ll_backend__var_locn__N_10 <= ll_backend__var_locn__LockedR_7);
                }
            }
            if (!(ll_backend__var_locn__succeeded))
              {
                MR_Word ll_backend__var_locn__Var_11;
                MR_Integer ll_backend__var_locn__N_13;

                ll_backend__var_locn__succeeded = ((MR_tag((MR_Word) ll_backend__var_locn__Lval_4)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__var_locn__succeeded)
                  {
                    ll_backend__var_locn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Lval_4, (MR_Integer) 0)));
                    ll_backend__var_locn__N_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__var_locn__Lval_4, (MR_Integer) 1)));
                    ll_backend__var_locn__succeeded = (ll_backend__var_locn__Var_11 == (MR_Integer) 1);
                    if (ll_backend__var_locn__succeeded)
                      ll_backend__var_locn__succeeded = (ll_backend__var_locn__N_13 <= ll_backend__var_locn__LockedF_8);
                  }
              }
          }
      }
    return ll_backend__var_locn__succeeded;
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_check_and_set_magic_var_location_4_p_0(
  MR_Word ll_backend__var_locn__Var_5,
  MR_Word ll_backend__var_locn__Lval_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_8,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_9)
{
  {
    MR_bool ll_backend__var_locn__succeeded;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__var_locn_lval_in_use_2_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, ll_backend__var_locn__Lval_6);
    }
    if (ll_backend__var_locn__succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.var_locn", (MR_String) "predicate \140ll_backend.var_locn.var_locn_check_and_set_magic_var_location\'/4", (MR_String) "in use");
          return;
        }
      }
    else
      {
        ll_backend__var_locn__var_locn_set_magic_var_location_4_p_0(ll_backend__var_locn__Var_5, ll_backend__var_locn__Lval_6, ll_backend__var_locn__STATE_VARIABLE_VLI_0_8, ll_backend__var_locn__STATE_VARIABLE_VLI_9);
      }
  }
}

static void MR_CALL 
ll_backend__var_locn__var_locn_set_magic_var_location_4_p_0_2(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1,
  MR_Box ll_backend__var_locn__wrapper_arg_2,
  MR_Box * ll_backend__var_locn__wrapper_arg_3)
{
  {
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;
    MR_Word ll_backend__var_locn__conv0_STATE_VARIABLE_LocVarMap_11;

    {
      ll_backend__var_locn__make_var_depend_on_root_lval_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__var_locn__wrapper_arg_1), ((MR_Word) ll_backend__var_locn__wrapper_arg_2), &ll_backend__var_locn__conv0_STATE_VARIABLE_LocVarMap_11);
    }
    *ll_backend__var_locn__wrapper_arg_3 = ((MR_Box) (ll_backend__var_locn__conv0_STATE_VARIABLE_LocVarMap_11));
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__var_locn_set_magic_var_location_4_p_0_1(
  MR_Box ll_backend__var_locn__closure_arg,
  MR_Box ll_backend__var_locn__wrapper_arg_1)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Box ll_backend__var_locn__closure = ll_backend__var_locn__closure_arg;

    {
      ll_backend__var_locn__succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) ll_backend__var_locn__wrapper_arg_1));
    }
    return ll_backend__var_locn__succeeded;
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_set_magic_var_location_4_p_0(
  MR_Word ll_backend__var_locn__Var_5,
  MR_Word ll_backend__var_locn__Lval_6,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_14,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_15)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__TypeCtorInfo_10_67;
    MR_Word ll_backend__var_locn__LocVarMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 8)));
    MR_Word ll_backend__var_locn__LocVarMap_9;
    MR_Word ll_backend__var_locn__VarStateMap0_10;
    MR_Word ll_backend__var_locn__LvalSet_11;
    MR_Word ll_backend__var_locn__State_12;
    MR_Word ll_backend__var_locn__VarStateMap_13;
    MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_16_16;
    MR_Word ll_backend__var_locn__Var_19;
    MR_Word ll_backend__var_locn__Lvals_44;
    MR_Word ll_backend__var_locn__NoDupRootLvals_52;
    MR_Word ll_backend__var_locn__Var_53;
    MR_Word ll_backend__var_locn__LvalList_62;
    MR_Word ll_backend__var_locn__AllLvals_63;
    MR_Word ll_backend__var_locn__RootLvals_64;
    MR_Word ll_backend__var_locn__Var_65;
    MR_Word ll_backend__var_locn__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 9)));
    MR_Integer ll_backend__var_locn__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 12)));
    MR_Box ll_backend__var_locn__conv1_LocVarMap_9;
    MR_Word ll_backend__var_locn__Var_71;
    MR_Word ll_backend__var_locn__Var_72;
    MR_Word ll_backend__var_locn__Var_73;
    MR_Word ll_backend__var_locn__Var_74;
    MR_Word ll_backend__var_locn__Var_75;
    MR_Integer ll_backend__var_locn__Var_76;
    MR_Integer ll_backend__var_locn__Var_77;
    MR_Word ll_backend__var_locn__Var_80;
    MR_Integer ll_backend__var_locn__Var_81;
    MR_Integer ll_backend__var_locn__Var_82;
    MR_Word ll_backend__var_locn__Var_83;
    MR_Word ll_backend__var_locn__Var_79;

    {
      ll_backend__var_locn__Lvals_44 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__var_locn__Lval_6)));
    }
    ll_backend__var_locn__TypeCtorInfo_10_67 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    {
      mercury__set__to_sorted_list_2_p_0(ll_backend__var_locn__TypeCtorInfo_10_67, ll_backend__var_locn__Lvals_44, &ll_backend__var_locn__LvalList_62);
    }
    {
      ll_backend__var_locn__Var_65 = ll_backend__code_util__lvals_in_lvals_1_f_0(ll_backend__var_locn__LvalList_62);
    }
    {
      ll_backend__var_locn__AllLvals_63 = mercury__list__f_43_43_2_f_0(ll_backend__var_locn__TypeCtorInfo_10_67, ll_backend__var_locn__LvalList_62, ll_backend__var_locn__Var_65);
    }
    {
      mercury__list__filter_3_p_0(ll_backend__var_locn__TypeCtorInfo_10_67, (MR_Word) &ll_backend__var_locn_scalar_common_2[8], ll_backend__var_locn__AllLvals_63, &ll_backend__var_locn__RootLvals_64);
    }
    {
      mercury__list__sort_and_remove_dups_2_p_0(ll_backend__var_locn__TypeCtorInfo_10_67, ll_backend__var_locn__RootLvals_64, &ll_backend__var_locn__NoDupRootLvals_52);
    }
    {
      ll_backend__var_locn__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_53, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_53, 1) = ((MR_Box) (ll_backend__var_locn__var_locn_set_magic_var_location_4_p_0_2));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__Var_53, 3) = ((MR_Box) (ll_backend__var_locn__Var_5));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__var_locn_scalar_common_2[0], ll_backend__var_locn__Var_53, ll_backend__var_locn__NoDupRootLvals_52, ((MR_Box) (ll_backend__var_locn__LocVarMap0_8)), &ll_backend__var_locn__conv1_LocVarMap_9);
    }
    ll_backend__var_locn__LocVarMap_9 = ((MR_Word) ll_backend__var_locn__conv1_LocVarMap_9);
    ll_backend__var_locn__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 0)));
    ll_backend__var_locn__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 1)));
    ll_backend__var_locn__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 2)));
    ll_backend__var_locn__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 3)));
    ll_backend__var_locn__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 4)));
    ll_backend__var_locn__Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 5)));
    ll_backend__var_locn__Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 6)));
    ll_backend__var_locn__VarStateMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 7)));
    ll_backend__var_locn__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 8)));
    ll_backend__var_locn__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 9)));
    ll_backend__var_locn__Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 10)));
    ll_backend__var_locn__Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 11)));
    ll_backend__var_locn__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_14, (MR_Integer) 12)));
    {
      ll_backend__var_locn__STATE_VARIABLE_VLI_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 0) = ((MR_Box) (ll_backend__var_locn__Var_71));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 1) = ((MR_Box) (ll_backend__var_locn__Var_72));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 2) = ((MR_Box) (ll_backend__var_locn__Var_73));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 3) = ((MR_Box) (ll_backend__var_locn__Var_74));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 4) = ((MR_Box) (ll_backend__var_locn__Var_75));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 5) = ((MR_Box) (ll_backend__var_locn__Var_76));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 6) = ((MR_Box) (ll_backend__var_locn__Var_77));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 7) = ((MR_Box) (ll_backend__var_locn__VarStateMap0_10));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 8) = ((MR_Box) (ll_backend__var_locn__LocVarMap_9));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 9) = ((MR_Box) (ll_backend__var_locn__Var_80));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 10) = ((MR_Box) (ll_backend__var_locn__Var_81));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 11) = ((MR_Box) (ll_backend__var_locn__Var_82));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 12) = ((MR_Box) (ll_backend__var_locn__Var_83));
    }
    {
      ll_backend__var_locn__LvalSet_11 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__var_locn__Lval_6)));
    }
    {
      ll_backend__var_locn__Var_19 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
    {
      ll_backend__var_locn__State_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_12, 0) = ((MR_Box) (ll_backend__var_locn__LvalSet_11));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_12, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_12, 3) = ((MR_Box) (ll_backend__var_locn__Var_19));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__State_12, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, ((MR_Box) (ll_backend__var_locn__Var_5)), ((MR_Box) (ll_backend__var_locn__State_12)), ll_backend__var_locn__VarStateMap0_10, &ll_backend__var_locn__VarStateMap_13);
    }
    {
      ll_backend__var_locn__var_locn_set_var_state_map_3_p_0(ll_backend__var_locn__VarStateMap_13, ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, ll_backend__var_locn__STATE_VARIABLE_VLI_15);
    }
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_clobber_regs_3_p_0(
  MR_Word ll_backend__var_locn__Regs_4,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_12,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_13)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Acquired0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 9)));
    MR_Word ll_backend__var_locn__Acquired_7;
    MR_Word ll_backend__var_locn__LocVarMap0_8;
    MR_Word ll_backend__var_locn__VarStateMap0_9;
    MR_Word ll_backend__var_locn__LocVarMap_10;
    MR_Word ll_backend__var_locn__VarStateMap_11;
    MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_14_14;
    MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_16_16;
    MR_Word ll_backend__var_locn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 8)));
    MR_Integer ll_backend__var_locn__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 12)));
    MR_Word ll_backend__var_locn__Var_34;
    MR_Word ll_backend__var_locn__Var_35;
    MR_Word ll_backend__var_locn__Var_36;
    MR_Word ll_backend__var_locn__Var_37;
    MR_Word ll_backend__var_locn__Var_38;
    MR_Integer ll_backend__var_locn__Var_39;
    MR_Integer ll_backend__var_locn__Var_40;
    MR_Integer ll_backend__var_locn__Var_44;
    MR_Integer ll_backend__var_locn__Var_45;
    MR_Word ll_backend__var_locn__Var_46;
    MR_Word ll_backend__var_locn__Var_43;
    MR_Word ll_backend__var_locn__Var_75;
    MR_Word ll_backend__var_locn__Var_76;
    MR_Word ll_backend__var_locn__Var_77;
    MR_Word ll_backend__var_locn__Var_78;
    MR_Word ll_backend__var_locn__Var_79;
    MR_Integer ll_backend__var_locn__Var_80;
    MR_Integer ll_backend__var_locn__Var_81;
    MR_Word ll_backend__var_locn__Var_82;
    MR_Word ll_backend__var_locn__Var_84;
    MR_Integer ll_backend__var_locn__Var_85;
    MR_Integer ll_backend__var_locn__Var_86;
    MR_Word ll_backend__var_locn__Var_87;
    MR_Word ll_backend__var_locn__Var_83;

    {
      ll_backend__var_locn__Acquired_7 = mercury__set__delete_list_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__var_locn__Acquired0_6, ll_backend__var_locn__Regs_4);
    }
    ll_backend__var_locn__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 0)));
    ll_backend__var_locn__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 1)));
    ll_backend__var_locn__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 2)));
    ll_backend__var_locn__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 3)));
    ll_backend__var_locn__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 4)));
    ll_backend__var_locn__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 5)));
    ll_backend__var_locn__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 6)));
    ll_backend__var_locn__VarStateMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 7)));
    ll_backend__var_locn__LocVarMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 8)));
    ll_backend__var_locn__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 9)));
    ll_backend__var_locn__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 10)));
    ll_backend__var_locn__Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 11)));
    ll_backend__var_locn__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 12)));
    {
      ll_backend__var_locn__STATE_VARIABLE_VLI_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 0) = ((MR_Box) (ll_backend__var_locn__Var_34));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 1) = ((MR_Box) (ll_backend__var_locn__Var_35));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 2) = ((MR_Box) (ll_backend__var_locn__Var_36));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 3) = ((MR_Box) (ll_backend__var_locn__Var_37));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 4) = ((MR_Box) (ll_backend__var_locn__Var_38));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 5) = ((MR_Box) (ll_backend__var_locn__Var_39));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 6) = ((MR_Box) (ll_backend__var_locn__Var_40));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 7) = ((MR_Box) (ll_backend__var_locn__VarStateMap0_9));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 8) = ((MR_Box) (ll_backend__var_locn__LocVarMap0_8));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 9) = ((MR_Box) (ll_backend__var_locn__Acquired_7));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 10) = ((MR_Box) (ll_backend__var_locn__Var_44));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 11) = ((MR_Box) (ll_backend__var_locn__Var_45));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 12) = ((MR_Box) (ll_backend__var_locn__Var_46));
    }
    {
      ll_backend__var_locn__clobber_regs_in_maps_6_p_0(ll_backend__var_locn__Regs_4, (MR_Integer) 0, ll_backend__var_locn__LocVarMap0_8, &ll_backend__var_locn__LocVarMap_10, ll_backend__var_locn__VarStateMap0_9, &ll_backend__var_locn__VarStateMap_11);
    }
    ll_backend__var_locn__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 0)));
    ll_backend__var_locn__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 1)));
    ll_backend__var_locn__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 2)));
    ll_backend__var_locn__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 3)));
    ll_backend__var_locn__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 4)));
    ll_backend__var_locn__Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 5)));
    ll_backend__var_locn__Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 6)));
    ll_backend__var_locn__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 7)));
    ll_backend__var_locn__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 8)));
    ll_backend__var_locn__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 9)));
    ll_backend__var_locn__Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 10)));
    ll_backend__var_locn__Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 11)));
    ll_backend__var_locn__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 12)));
    {
      ll_backend__var_locn__STATE_VARIABLE_VLI_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 0) = ((MR_Box) (ll_backend__var_locn__Var_75));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 1) = ((MR_Box) (ll_backend__var_locn__Var_76));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 2) = ((MR_Box) (ll_backend__var_locn__Var_77));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 3) = ((MR_Box) (ll_backend__var_locn__Var_78));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 4) = ((MR_Box) (ll_backend__var_locn__Var_79));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 5) = ((MR_Box) (ll_backend__var_locn__Var_80));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 6) = ((MR_Box) (ll_backend__var_locn__Var_81));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 7) = ((MR_Box) (ll_backend__var_locn__Var_82));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 8) = ((MR_Box) (ll_backend__var_locn__LocVarMap_10));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 9) = ((MR_Box) (ll_backend__var_locn__Var_84));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 10) = ((MR_Box) (ll_backend__var_locn__Var_85));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 11) = ((MR_Box) (ll_backend__var_locn__Var_86));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 12) = ((MR_Box) (ll_backend__var_locn__Var_87));
    }
    {
      ll_backend__var_locn__var_locn_set_var_state_map_3_p_0(ll_backend__var_locn__VarStateMap_11, ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, ll_backend__var_locn__STATE_VARIABLE_VLI_13);
    }
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_clobber_reg_3_p_0(
  MR_Word ll_backend__var_locn__Reg_4,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_12,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_13)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__Acquired0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 9)));
    MR_Word ll_backend__var_locn__Acquired_7;
    MR_Word ll_backend__var_locn__LocVarMap0_8;
    MR_Word ll_backend__var_locn__VarStateMap0_9;
    MR_Word ll_backend__var_locn__LocVarMap_10;
    MR_Word ll_backend__var_locn__VarStateMap_11;
    MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_14_14;
    MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_16_16;
    MR_Word ll_backend__var_locn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 0)));
    MR_Word ll_backend__var_locn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 1)));
    MR_Word ll_backend__var_locn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 2)));
    MR_Word ll_backend__var_locn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 3)));
    MR_Word ll_backend__var_locn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 4)));
    MR_Integer ll_backend__var_locn__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 5)));
    MR_Integer ll_backend__var_locn__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 6)));
    MR_Word ll_backend__var_locn__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 7)));
    MR_Word ll_backend__var_locn__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 8)));
    MR_Integer ll_backend__var_locn__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 10)));
    MR_Integer ll_backend__var_locn__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 11)));
    MR_Word ll_backend__var_locn__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 12)));
    MR_Word ll_backend__var_locn__Var_34;
    MR_Word ll_backend__var_locn__Var_35;
    MR_Word ll_backend__var_locn__Var_36;
    MR_Word ll_backend__var_locn__Var_37;
    MR_Word ll_backend__var_locn__Var_38;
    MR_Integer ll_backend__var_locn__Var_39;
    MR_Integer ll_backend__var_locn__Var_40;
    MR_Integer ll_backend__var_locn__Var_44;
    MR_Integer ll_backend__var_locn__Var_45;
    MR_Word ll_backend__var_locn__Var_46;
    MR_Word ll_backend__var_locn__Var_43;
    MR_Word ll_backend__var_locn__Var_75;
    MR_Word ll_backend__var_locn__Var_76;
    MR_Word ll_backend__var_locn__Var_77;
    MR_Word ll_backend__var_locn__Var_78;
    MR_Word ll_backend__var_locn__Var_79;
    MR_Integer ll_backend__var_locn__Var_80;
    MR_Integer ll_backend__var_locn__Var_81;
    MR_Word ll_backend__var_locn__Var_82;
    MR_Word ll_backend__var_locn__Var_84;
    MR_Integer ll_backend__var_locn__Var_85;
    MR_Integer ll_backend__var_locn__Var_86;
    MR_Word ll_backend__var_locn__Var_87;
    MR_Word ll_backend__var_locn__Var_83;

    {
      ll_backend__var_locn__Acquired_7 = mercury__set__delete_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__var_locn__Acquired0_6, ((MR_Box) (ll_backend__var_locn__Reg_4)));
    }
    ll_backend__var_locn__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 0)));
    ll_backend__var_locn__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 1)));
    ll_backend__var_locn__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 2)));
    ll_backend__var_locn__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 3)));
    ll_backend__var_locn__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 4)));
    ll_backend__var_locn__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 5)));
    ll_backend__var_locn__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 6)));
    ll_backend__var_locn__VarStateMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 7)));
    ll_backend__var_locn__LocVarMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 8)));
    ll_backend__var_locn__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 9)));
    ll_backend__var_locn__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 10)));
    ll_backend__var_locn__Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 11)));
    ll_backend__var_locn__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_12, (MR_Integer) 12)));
    {
      ll_backend__var_locn__STATE_VARIABLE_VLI_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 0) = ((MR_Box) (ll_backend__var_locn__Var_34));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 1) = ((MR_Box) (ll_backend__var_locn__Var_35));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 2) = ((MR_Box) (ll_backend__var_locn__Var_36));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 3) = ((MR_Box) (ll_backend__var_locn__Var_37));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 4) = ((MR_Box) (ll_backend__var_locn__Var_38));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 5) = ((MR_Box) (ll_backend__var_locn__Var_39));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 6) = ((MR_Box) (ll_backend__var_locn__Var_40));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 7) = ((MR_Box) (ll_backend__var_locn__VarStateMap0_9));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 8) = ((MR_Box) (ll_backend__var_locn__LocVarMap0_8));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 9) = ((MR_Box) (ll_backend__var_locn__Acquired_7));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 10) = ((MR_Box) (ll_backend__var_locn__Var_44));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 11) = ((MR_Box) (ll_backend__var_locn__Var_45));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, 12) = ((MR_Box) (ll_backend__var_locn__Var_46));
    }
    {
      ll_backend__var_locn__clobber_reg_in_maps_6_p_0(ll_backend__var_locn__Reg_4, (MR_Integer) 0, ll_backend__var_locn__LocVarMap0_8, &ll_backend__var_locn__LocVarMap_10, ll_backend__var_locn__VarStateMap0_9, &ll_backend__var_locn__VarStateMap_11);
    }
    ll_backend__var_locn__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 0)));
    ll_backend__var_locn__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 1)));
    ll_backend__var_locn__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 2)));
    ll_backend__var_locn__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 3)));
    ll_backend__var_locn__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 4)));
    ll_backend__var_locn__Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 5)));
    ll_backend__var_locn__Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 6)));
    ll_backend__var_locn__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 7)));
    ll_backend__var_locn__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 8)));
    ll_backend__var_locn__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 9)));
    ll_backend__var_locn__Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 10)));
    ll_backend__var_locn__Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 11)));
    ll_backend__var_locn__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_14_14, (MR_Integer) 12)));
    {
      ll_backend__var_locn__STATE_VARIABLE_VLI_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 0) = ((MR_Box) (ll_backend__var_locn__Var_75));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 1) = ((MR_Box) (ll_backend__var_locn__Var_76));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 2) = ((MR_Box) (ll_backend__var_locn__Var_77));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 3) = ((MR_Box) (ll_backend__var_locn__Var_78));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 4) = ((MR_Box) (ll_backend__var_locn__Var_79));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 5) = ((MR_Box) (ll_backend__var_locn__Var_80));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 6) = ((MR_Box) (ll_backend__var_locn__Var_81));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 7) = ((MR_Box) (ll_backend__var_locn__Var_82));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 8) = ((MR_Box) (ll_backend__var_locn__LocVarMap_10));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 9) = ((MR_Box) (ll_backend__var_locn__Var_84));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 10) = ((MR_Box) (ll_backend__var_locn__Var_85));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 11) = ((MR_Box) (ll_backend__var_locn__Var_86));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, 12) = ((MR_Box) (ll_backend__var_locn__Var_87));
    }
    {
      ll_backend__var_locn__var_locn_set_var_state_map_3_p_0(ll_backend__var_locn__VarStateMap_11, ll_backend__var_locn__STATE_VARIABLE_VLI_16_16, ll_backend__var_locn__STATE_VARIABLE_VLI_13);
    }
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_clobber_all_regs_3_p_0(
  MR_Word ll_backend__var_locn__OkToDeleteAny_4,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_0_11,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VLI_12)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__TypeCtorInfo_22_22 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    MR_Word ll_backend__var_locn__LocVarMap0_6;
    MR_Word ll_backend__var_locn__VarStateMap0_7;
    MR_Word ll_backend__var_locn__Locs_8;
    MR_Word ll_backend__var_locn__LocVarMap_9;
    MR_Word ll_backend__var_locn__VarStateMap_10;
    MR_Word ll_backend__var_locn__Var_13;
    MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_19_19;
    MR_Word ll_backend__var_locn__STATE_VARIABLE_VLI_20_20;
    MR_Word ll_backend__var_locn__Var_26;
    MR_Word ll_backend__var_locn__Var_27;
    MR_Word ll_backend__var_locn__Var_28;
    MR_Word ll_backend__var_locn__Var_29;
    MR_Word ll_backend__var_locn__Var_30;
    MR_Integer ll_backend__var_locn__Var_31;
    MR_Integer ll_backend__var_locn__Var_32;
    MR_Word ll_backend__var_locn__Var_33;
    MR_Word ll_backend__var_locn__Var_34;
    MR_Word ll_backend__var_locn__Var_46;
    MR_Word ll_backend__var_locn__Var_47;
    MR_Word ll_backend__var_locn__Var_48;
    MR_Word ll_backend__var_locn__Var_49;
    MR_Word ll_backend__var_locn__Var_50;
    MR_Integer ll_backend__var_locn__Var_51;
    MR_Integer ll_backend__var_locn__Var_52;
    MR_Word ll_backend__var_locn__Var_53;
    MR_Word ll_backend__var_locn__Var_54;
    MR_Word ll_backend__var_locn__Var_55;
    MR_Word ll_backend__var_locn__Var_35;
    MR_Integer ll_backend__var_locn__Var_36;
    MR_Integer ll_backend__var_locn__Var_37;
    MR_Word ll_backend__var_locn__Var_38;

    {
      ll_backend__var_locn__Var_13 = mercury__set__init_0_f_0(ll_backend__var_locn__TypeCtorInfo_22_22);
    }
    ll_backend__var_locn__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_11, (MR_Integer) 0)));
    ll_backend__var_locn__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_11, (MR_Integer) 1)));
    ll_backend__var_locn__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_11, (MR_Integer) 2)));
    ll_backend__var_locn__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_11, (MR_Integer) 3)));
    ll_backend__var_locn__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_11, (MR_Integer) 4)));
    ll_backend__var_locn__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_11, (MR_Integer) 5)));
    ll_backend__var_locn__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_11, (MR_Integer) 6)));
    ll_backend__var_locn__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_11, (MR_Integer) 7)));
    ll_backend__var_locn__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_11, (MR_Integer) 8)));
    ll_backend__var_locn__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_11, (MR_Integer) 9)));
    ll_backend__var_locn__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_11, (MR_Integer) 10)));
    ll_backend__var_locn__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_11, (MR_Integer) 11)));
    ll_backend__var_locn__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_0_11, (MR_Integer) 12)));
    ll_backend__var_locn__Var_46 = ll_backend__var_locn__Var_26;
    ll_backend__var_locn__Var_47 = ll_backend__var_locn__Var_27;
    ll_backend__var_locn__Var_48 = ll_backend__var_locn__Var_28;
    ll_backend__var_locn__Var_49 = ll_backend__var_locn__Var_29;
    ll_backend__var_locn__Var_50 = ll_backend__var_locn__Var_30;
    ll_backend__var_locn__Var_51 = ll_backend__var_locn__Var_31;
    ll_backend__var_locn__Var_52 = ll_backend__var_locn__Var_32;
    ll_backend__var_locn__Var_53 = ll_backend__var_locn__Var_33;
    ll_backend__var_locn__Var_54 = ll_backend__var_locn__Var_34;
    ll_backend__var_locn__Var_55 = ll_backend__var_locn__Var_13;
    {
      ll_backend__var_locn__STATE_VARIABLE_VLI_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_19_19, 0) = ((MR_Box) (ll_backend__var_locn__Var_46));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_19_19, 1) = ((MR_Box) (ll_backend__var_locn__Var_47));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_19_19, 2) = ((MR_Box) (ll_backend__var_locn__Var_48));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_19_19, 3) = ((MR_Box) (ll_backend__var_locn__Var_49));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_19_19, 4) = ((MR_Box) (ll_backend__var_locn__Var_50));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_19_19, 5) = ((MR_Box) (ll_backend__var_locn__Var_51));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_19_19, 6) = ((MR_Box) (ll_backend__var_locn__Var_52));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_19_19, 7) = ((MR_Box) (ll_backend__var_locn__Var_53));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_19_19, 8) = ((MR_Box) (ll_backend__var_locn__Var_54));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_19_19, 9) = ((MR_Box) (ll_backend__var_locn__Var_55));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_19_19, 10) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_19_19, 11) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VLI_19_19, 12) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__var_locn__var_locn_get_loc_var_map_2_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_19_19, &ll_backend__var_locn__LocVarMap0_6);
    }
    {
      ll_backend__var_locn__var_locn_get_var_state_map_2_p_0(ll_backend__var_locn__STATE_VARIABLE_VLI_19_19, &ll_backend__var_locn__VarStateMap0_7);
    }
    {
      mercury__map__keys_2_p_0(ll_backend__var_locn__TypeCtorInfo_22_22, (MR_Word) &ll_backend__var_locn_scalar_common_1[1], ll_backend__var_locn__LocVarMap0_6, &ll_backend__var_locn__Locs_8);
    }
    {
      ll_backend__var_locn__clobber_regs_in_maps_6_p_0(ll_backend__var_locn__Locs_8, ll_backend__var_locn__OkToDeleteAny_4, ll_backend__var_locn__LocVarMap0_6, &ll_backend__var_locn__LocVarMap_9, ll_backend__var_locn__VarStateMap0_7, &ll_backend__var_locn__VarStateMap_10);
    }
    {
      ll_backend__var_locn__var_locn_set_loc_var_map_3_p_0(ll_backend__var_locn__LocVarMap_9, ll_backend__var_locn__STATE_VARIABLE_VLI_19_19, &ll_backend__var_locn__STATE_VARIABLE_VLI_20_20);
    }
    {
      ll_backend__var_locn__var_locn_set_var_state_map_3_p_0(ll_backend__var_locn__VarStateMap_10, ll_backend__var_locn__STATE_VARIABLE_VLI_20_20, ll_backend__var_locn__STATE_VARIABLE_VLI_12);
    }
  }
}

void MR_CALL 
ll_backend__var_locn__reinit_var_locn_state_3_p_0(
  MR_Word ll_backend__var_locn__VarLocs_4,
  MR_Word ll_backend__var_locn__STATE_VARIABLE_VarLocnInfo_0_24,
  MR_Word * ll_backend__var_locn__STATE_VARIABLE_VarLocnInfo_25)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__TypeCtorInfo_33_33;
    MR_Word ll_backend__var_locn__VarStateMap0_6;
    MR_Word ll_backend__var_locn__LocVarMap0_7;
    MR_Word ll_backend__var_locn__VarStateMap_8;
    MR_Word ll_backend__var_locn__LocVarMap_9;
    MR_Word ll_backend__var_locn__AcquiredRegs_10;
    MR_Word ll_backend__var_locn__VarSet_11;
    MR_Word ll_backend__var_locn__VarTypes_12;
    MR_Word ll_backend__var_locn__FloatRegType_13;
    MR_Word ll_backend__var_locn__StackSlots_14;
    MR_Word ll_backend__var_locn__FollowVarMap_15;
    MR_Integer ll_backend__var_locn__NextNonReservedR_16;
    MR_Integer ll_backend__var_locn__NextNonReservedF_17;
    MR_Word ll_backend__var_locn__Var_18;
    MR_Word ll_backend__var_locn__Var_19;
    MR_Word ll_backend__var_locn__Var_20;
    MR_Integer ll_backend__var_locn__Var_21;
    MR_Integer ll_backend__var_locn__Var_22;
    MR_Word ll_backend__var_locn__Var_23;

    {
      mercury__map__init_1_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, &ll_backend__var_locn__VarStateMap0_6);
    }
    ll_backend__var_locn__TypeCtorInfo_33_33 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    {
      mercury__map__init_1_p_0(ll_backend__var_locn__TypeCtorInfo_33_33, (MR_Word) &ll_backend__var_locn_scalar_common_1[1], &ll_backend__var_locn__LocVarMap0_7);
    }
    {
      ll_backend__var_locn__init_var_locn_state_2_6_p_0(ll_backend__var_locn__VarLocs_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__var_locn__VarStateMap0_6, &ll_backend__var_locn__VarStateMap_8, ll_backend__var_locn__LocVarMap0_7, &ll_backend__var_locn__LocVarMap_9);
    }
    {
      mercury__set__init_1_p_0(ll_backend__var_locn__TypeCtorInfo_33_33, &ll_backend__var_locn__AcquiredRegs_10);
    }
    ll_backend__var_locn__VarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VarLocnInfo_0_24, (MR_Integer) 0)));
    ll_backend__var_locn__VarTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VarLocnInfo_0_24, (MR_Integer) 1)));
    ll_backend__var_locn__FloatRegType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VarLocnInfo_0_24, (MR_Integer) 2)));
    ll_backend__var_locn__StackSlots_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VarLocnInfo_0_24, (MR_Integer) 3)));
    ll_backend__var_locn__FollowVarMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VarLocnInfo_0_24, (MR_Integer) 4)));
    ll_backend__var_locn__NextNonReservedR_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VarLocnInfo_0_24, (MR_Integer) 5)));
    ll_backend__var_locn__NextNonReservedF_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VarLocnInfo_0_24, (MR_Integer) 6)));
    ll_backend__var_locn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VarLocnInfo_0_24, (MR_Integer) 7)));
    ll_backend__var_locn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VarLocnInfo_0_24, (MR_Integer) 8)));
    ll_backend__var_locn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VarLocnInfo_0_24, (MR_Integer) 9)));
    ll_backend__var_locn__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VarLocnInfo_0_24, (MR_Integer) 10)));
    ll_backend__var_locn__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VarLocnInfo_0_24, (MR_Integer) 11)));
    ll_backend__var_locn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__STATE_VARIABLE_VarLocnInfo_0_24, (MR_Integer) 12)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__var_locn__STATE_VARIABLE_VarLocnInfo_25 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__var_locn__VarSet_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__var_locn__VarTypes_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__var_locn__FloatRegType_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__var_locn__StackSlots_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__var_locn__FollowVarMap_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__var_locn__NextNonReservedR_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__var_locn__NextNonReservedF_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__var_locn__VarStateMap_8));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__var_locn__LocVarMap_9));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ll_backend__var_locn__AcquiredRegs_10));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

void MR_CALL 
ll_backend__var_locn__init_var_locn_state_8_p_0(
  MR_Word ll_backend__var_locn__VarLocs_9,
  MR_Word ll_backend__var_locn__Liveness_10,
  MR_Word ll_backend__var_locn__VarSet_11,
  MR_Word ll_backend__var_locn__VarTypes_12,
  MR_Word ll_backend__var_locn__FloatRegType_13,
  MR_Word ll_backend__var_locn__StackSlots_14,
  MR_Word ll_backend__var_locn__FollowVars_15,
  MR_Word * ll_backend__var_locn__VarLocnInfo_16)
{
  {
    MR_bool ll_backend__var_locn__succeeded;
    MR_Word ll_backend__var_locn__TypeCtorInfo_31_31;
    MR_Word ll_backend__var_locn__VarStateMap0_17;
    MR_Word ll_backend__var_locn__LocVarMap0_18;
    MR_Word ll_backend__var_locn__VarStateMap_19;
    MR_Word ll_backend__var_locn__LocVarMap_20;
    MR_Word ll_backend__var_locn__FollowVarMap_21;
    MR_Integer ll_backend__var_locn__NextNonReservedR_22;
    MR_Integer ll_backend__var_locn__NextNonReservedF_23;
    MR_Word ll_backend__var_locn__AcquiredRegs_24;
    MR_Word ll_backend__var_locn__Var_25;

    {
      mercury__map__init_1_p_0((MR_Word) &ll_backend__var_locn_scalar_common_1[0], (MR_Word) &ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0, &ll_backend__var_locn__VarStateMap0_17);
    }
    ll_backend__var_locn__TypeCtorInfo_31_31 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    {
      mercury__map__init_1_p_0(ll_backend__var_locn__TypeCtorInfo_31_31, (MR_Word) &ll_backend__var_locn_scalar_common_1[1], &ll_backend__var_locn__LocVarMap0_18);
    }
    {
      ll_backend__var_locn__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__var_locn__Var_25, 0) = ((MR_Box) (ll_backend__var_locn__Liveness_10));
    }
    {
      ll_backend__var_locn__init_var_locn_state_2_6_p_0(ll_backend__var_locn__VarLocs_9, ll_backend__var_locn__Var_25, ll_backend__var_locn__VarStateMap0_17, &ll_backend__var_locn__VarStateMap_19, ll_backend__var_locn__LocVarMap0_18, &ll_backend__var_locn__LocVarMap_20);
    }
    ll_backend__var_locn__FollowVarMap_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__FollowVars_15, (MR_Integer) 0)));
    ll_backend__var_locn__NextNonReservedR_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__FollowVars_15, (MR_Integer) 1)));
    ll_backend__var_locn__NextNonReservedF_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__var_locn__FollowVars_15, (MR_Integer) 2)));
    {
      mercury__set__init_1_p_0(ll_backend__var_locn__TypeCtorInfo_31_31, &ll_backend__var_locn__AcquiredRegs_24);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__var_locn__VarLocnInfo_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__var_locn__VarSet_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__var_locn__VarTypes_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__var_locn__FloatRegType_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__var_locn__StackSlots_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__var_locn__FollowVarMap_21));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__var_locn__NextNonReservedR_22));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__var_locn__NextNonReservedF_23));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__var_locn__VarStateMap_19));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__var_locn__LocVarMap_20));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ll_backend__var_locn__AcquiredRegs_24));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

void mercury__ll_backend__var_locn__init(void)
{
}

void mercury__ll_backend__var_locn__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_dead_or_alive_0);
	MR_register_type_ctor_info(&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_dep_search_lval_0);
	MR_register_type_ctor_info(&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_loc_var_map_0);
	MR_register_type_ctor_info(&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_avail_0);
	MR_register_type_ctor_info(&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0);
	MR_register_type_ctor_info(&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0);
	MR_register_type_ctor_info(&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_map_0);
}

void mercury__ll_backend__var_locn__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__var_locn__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.var_locn. */
